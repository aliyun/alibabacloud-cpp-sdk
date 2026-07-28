// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLFDATABASE_HPP_
#define ALIBABACLOUD_MODELS_DLFDATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DlfDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DlfDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(tableCount, tableCount_);
    };
    friend void from_json(const Darabonba::Json& j, DlfDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(tableCount, tableCount_);
    };
    DlfDatabase() = default ;
    DlfDatabase(const DlfDatabase &) = default ;
    DlfDatabase(DlfDatabase &&) = default ;
    DlfDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DlfDatabase() = default ;
    DlfDatabase& operator=(const DlfDatabase &) = default ;
    DlfDatabase& operator=(DlfDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->description_ == nullptr && this->tableCount_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DlfDatabase& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DlfDatabase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
    inline DlfDatabase& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


  protected:
    // The name of the database.
    shared_ptr<string> databaseName_ {};
    // The description of the database.
    shared_ptr<string> description_ {};
    // The number of tables in the database. Read-only.
    shared_ptr<int32_t> tableCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
