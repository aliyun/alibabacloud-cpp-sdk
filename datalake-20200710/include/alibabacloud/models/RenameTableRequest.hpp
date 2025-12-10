// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TableInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class RenameTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_TO_JSON(TableInput, tableInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, RenameTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_FROM_JSON(TableInput, tableInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    RenameTableRequest() = default ;
    RenameTableRequest(const RenameTableRequest &) = default ;
    RenameTableRequest(RenameTableRequest &&) = default ;
    RenameTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameTableRequest() = default ;
    RenameTableRequest& operator=(const RenameTableRequest &) = default ;
    RenameTableRequest& operator=(RenameTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->isAsync_ == nullptr && return this->tableInput_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline RenameTableRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline RenameTableRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool isAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline RenameTableRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


    // tableInput Field Functions 
    bool hasTableInput() const { return this->tableInput_ != nullptr;};
    void deleteTableInput() { this->tableInput_ = nullptr;};
    inline const TableInput & tableInput() const { DARABONBA_PTR_GET_CONST(tableInput_, TableInput) };
    inline TableInput tableInput() { DARABONBA_PTR_GET(tableInput_, TableInput) };
    inline RenameTableRequest& setTableInput(const TableInput & tableInput) { DARABONBA_PTR_SET_VALUE(tableInput_, tableInput) };
    inline RenameTableRequest& setTableInput(TableInput && tableInput) { DARABONBA_PTR_SET_RVALUE(tableInput_, tableInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline RenameTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to asynchronously rename the data table. Valid values:
    // 
    // *   false (default): The operation is synchronously called. The update result is returned after the background task is complete. If the execution of the background task requires an extended period of time, a timeout occurs.
    // *   true: The operation is asynchronously called. The update result is immediately returned. You can query the task status by TaskId in the returned result.
    std::shared_ptr<bool> isAsync_ = nullptr;
    // The data table object. You need only to specify the TableName parameter in this object.
    std::shared_ptr<TableInput> tableInput_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
