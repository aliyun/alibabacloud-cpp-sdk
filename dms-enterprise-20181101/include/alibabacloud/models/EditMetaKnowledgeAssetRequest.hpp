// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITMETAKNOWLEDGEASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITMETAKNOWLEDGEASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class EditMetaKnowledgeAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditMetaKnowledgeAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
    };
    friend void from_json(const Darabonba::Json& j, EditMetaKnowledgeAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
    };
    EditMetaKnowledgeAssetRequest() = default ;
    EditMetaKnowledgeAssetRequest(const EditMetaKnowledgeAssetRequest &) = default ;
    EditMetaKnowledgeAssetRequest(EditMetaKnowledgeAssetRequest &&) = default ;
    EditMetaKnowledgeAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditMetaKnowledgeAssetRequest() = default ;
    EditMetaKnowledgeAssetRequest& operator=(const EditMetaKnowledgeAssetRequest &) = default ;
    EditMetaKnowledgeAssetRequest& operator=(EditMetaKnowledgeAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDescription_ == nullptr
        && this->columnName_ == nullptr && this->dbId_ == nullptr && this->tableName_ == nullptr && this->tableSchemaName_ == nullptr; };
    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline EditMetaKnowledgeAssetRequest& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline EditMetaKnowledgeAssetRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline EditMetaKnowledgeAssetRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline EditMetaKnowledgeAssetRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string getTableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline EditMetaKnowledgeAssetRequest& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


  protected:
    // Business knowledge content edited by users.
    // 
    // This parameter is required.
    shared_ptr<string> assetDescription_ {};
    // The name of the field. This parameter is used when the edited content is a field.
    shared_ptr<string> columnName_ {};
    // The ID of the physical database. You can call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int32_t> dbId_ {};
    // The name of the table.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The schema name of the table, which is required only for SQL Server instances.
    shared_ptr<string> tableSchemaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
