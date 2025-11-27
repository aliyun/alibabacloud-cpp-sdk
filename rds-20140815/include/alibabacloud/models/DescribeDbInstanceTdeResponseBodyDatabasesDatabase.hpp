// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODYDATABASESDATABASE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODYDATABASESDATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceTDEResponseBodyDatabasesDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase() = default ;
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase(const DescribeDBInstanceTDEResponseBodyDatabasesDatabase &) = default ;
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase(DescribeDBInstanceTDEResponseBodyDatabasesDatabase &&) = default ;
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEResponseBodyDatabasesDatabase() = default ;
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase& operator=(const DescribeDBInstanceTDEResponseBodyDatabasesDatabase &) = default ;
    DescribeDBInstanceTDEResponseBodyDatabasesDatabase& operator=(DescribeDBInstanceTDEResponseBodyDatabasesDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && return this->TDEStatus_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeDBInstanceTDEResponseBodyDatabasesDatabase& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string TDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline DescribeDBInstanceTDEResponseBodyDatabasesDatabase& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The TDE status at the database level. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> TDEStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
