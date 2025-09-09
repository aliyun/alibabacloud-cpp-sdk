// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODYDATABASESDATABASE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODYDATABASESDATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstanceDbsResponseBodyDatabasesDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstanceDbsResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstanceDbsResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase() = default ;
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase(const DescribeDbInstanceDbsResponseBodyDatabasesDatabase &) = default ;
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase(DescribeDbInstanceDbsResponseBodyDatabasesDatabase &&) = default ;
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstanceDbsResponseBodyDatabasesDatabase() = default ;
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase& operator=(const DescribeDbInstanceDbsResponseBodyDatabasesDatabase &) = default ;
    DescribeDbInstanceDbsResponseBodyDatabasesDatabase& operator=(DescribeDbInstanceDbsResponseBodyDatabasesDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->description_ != nullptr && this->status_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDbInstanceDbsResponseBodyDatabasesDatabase& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDbInstanceDbsResponseBodyDatabasesDatabase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDbInstanceDbsResponseBodyDatabasesDatabase& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates the name of a storage-layer database.
    std::shared_ptr<string> dbName_ = nullptr;
    // Indicates the description of the storage-layer database.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates the state of the storage-layer database. Valid values:
    // 
    // *   **0**: The database is being created.
    // *   **1**: The database is available.
    // *   **3**: The database is being deleted.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
