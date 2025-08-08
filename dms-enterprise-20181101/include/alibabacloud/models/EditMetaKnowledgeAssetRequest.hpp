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
    virtual bool empty() const override { this->assetDescription_ != nullptr
        && this->columnName_ != nullptr && this->dbId_ != nullptr && this->tableName_ != nullptr && this->tableSchemaName_ != nullptr; };
    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string assetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline EditMetaKnowledgeAssetRequest& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline EditMetaKnowledgeAssetRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline EditMetaKnowledgeAssetRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline EditMetaKnowledgeAssetRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string tableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline EditMetaKnowledgeAssetRequest& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assetDescription_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableSchemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
