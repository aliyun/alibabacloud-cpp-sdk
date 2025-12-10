// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEREQUEST_HPP_
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
  class UpdateTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPartitionKeyChange, allowPartitionKeyChange_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_TO_JSON(SkipArchive, skipArchive_);
      DARABONBA_PTR_TO_JSON(TableInput, tableInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPartitionKeyChange, allowPartitionKeyChange_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_FROM_JSON(SkipArchive, skipArchive_);
      DARABONBA_PTR_FROM_JSON(TableInput, tableInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    UpdateTableRequest() = default ;
    UpdateTableRequest(const UpdateTableRequest &) = default ;
    UpdateTableRequest(UpdateTableRequest &&) = default ;
    UpdateTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableRequest() = default ;
    UpdateTableRequest& operator=(const UpdateTableRequest &) = default ;
    UpdateTableRequest& operator=(UpdateTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowPartitionKeyChange_ == nullptr
        && return this->catalogId_ == nullptr && return this->databaseName_ == nullptr && return this->isAsync_ == nullptr && return this->skipArchive_ == nullptr && return this->tableInput_ == nullptr
        && return this->tableName_ == nullptr; };
    // allowPartitionKeyChange Field Functions 
    bool hasAllowPartitionKeyChange() const { return this->allowPartitionKeyChange_ != nullptr;};
    void deleteAllowPartitionKeyChange() { this->allowPartitionKeyChange_ = nullptr;};
    inline bool allowPartitionKeyChange() const { DARABONBA_PTR_GET_DEFAULT(allowPartitionKeyChange_, false) };
    inline UpdateTableRequest& setAllowPartitionKeyChange(bool allowPartitionKeyChange) { DARABONBA_PTR_SET_VALUE(allowPartitionKeyChange_, allowPartitionKeyChange) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline UpdateTableRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline UpdateTableRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool isAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline UpdateTableRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


    // skipArchive Field Functions 
    bool hasSkipArchive() const { return this->skipArchive_ != nullptr;};
    void deleteSkipArchive() { this->skipArchive_ = nullptr;};
    inline bool skipArchive() const { DARABONBA_PTR_GET_DEFAULT(skipArchive_, false) };
    inline UpdateTableRequest& setSkipArchive(bool skipArchive) { DARABONBA_PTR_SET_VALUE(skipArchive_, skipArchive) };


    // tableInput Field Functions 
    bool hasTableInput() const { return this->tableInput_ != nullptr;};
    void deleteTableInput() { this->tableInput_ = nullptr;};
    inline const TableInput & tableInput() const { DARABONBA_PTR_GET_CONST(tableInput_, TableInput) };
    inline TableInput tableInput() { DARABONBA_PTR_GET(tableInput_, TableInput) };
    inline UpdateTableRequest& setTableInput(const TableInput & tableInput) { DARABONBA_PTR_SET_VALUE(tableInput_, tableInput) };
    inline UpdateTableRequest& setTableInput(TableInput && tableInput) { DARABONBA_PTR_SET_RVALUE(tableInput_, tableInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // Specifies whether the partition key can be updated.
    std::shared_ptr<bool> allowPartitionKeyChange_ = nullptr;
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to synchronously update the data table.
    std::shared_ptr<bool> isAsync_ = nullptr;
    // By default, if a data table is updated, a backup version of the data table is created. However, if you set the skipArchive parameter to true, no backup version is created.
    std::shared_ptr<bool> skipArchive_ = nullptr;
    // The details about the updated data table.
    std::shared_ptr<TableInput> tableInput_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
