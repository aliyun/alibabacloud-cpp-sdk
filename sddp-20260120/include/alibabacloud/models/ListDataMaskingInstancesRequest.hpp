// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAMASKINGINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAMASKINGINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListDataMaskingInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataMaskingInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_TO_JSON(ModelTagId, modelTagId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelIds, riskLevelIds_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateRuleIds, templateRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataMaskingInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_FROM_JSON(ModelTagId, modelTagId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelIds, riskLevelIds_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateRuleIds, templateRuleIds_);
    };
    ListDataMaskingInstancesRequest() = default ;
    ListDataMaskingInstancesRequest(const ListDataMaskingInstancesRequest &) = default ;
    ListDataMaskingInstancesRequest(ListDataMaskingInstancesRequest &&) = default ;
    ListDataMaskingInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataMaskingInstancesRequest() = default ;
    ListDataMaskingInstancesRequest& operator=(const ListDataMaskingInstancesRequest &) = default ;
    ListDataMaskingInstancesRequest& operator=(ListDataMaskingInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && this->currentPage_ == nullptr && this->dbName_ == nullptr && this->engineType_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr
        && this->maskingStatus_ == nullptr && this->modelTagId_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr
        && this->productIds_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelIds_ == nullptr && this->tableName_ == nullptr && this->templateId_ == nullptr
        && this->templateRuleIds_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListDataMaskingInstancesRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDataMaskingInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListDataMaskingInstancesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ListDataMaskingInstancesRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataMaskingInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataMaskingInstancesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maskingStatus Field Functions 
    bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
    void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
    inline string getMaskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, "") };
    inline ListDataMaskingInstancesRequest& setMaskingStatus(string maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


    // modelTagId Field Functions 
    bool hasModelTagId() const { return this->modelTagId_ != nullptr;};
    void deleteModelTagId() { this->modelTagId_ = nullptr;};
    inline string getModelTagId() const { DARABONBA_PTR_GET_DEFAULT(modelTagId_, "") };
    inline ListDataMaskingInstancesRequest& setModelTagId(string modelTagId) { DARABONBA_PTR_SET_VALUE(modelTagId_, modelTagId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataMaskingInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDataMaskingInstancesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListDataMaskingInstancesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline ListDataMaskingInstancesRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline ListDataMaskingInstancesRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelIds Field Functions 
    bool hasRiskLevelIds() const { return this->riskLevelIds_ != nullptr;};
    void deleteRiskLevelIds() { this->riskLevelIds_ = nullptr;};
    inline string getRiskLevelIds() const { DARABONBA_PTR_GET_DEFAULT(riskLevelIds_, "") };
    inline ListDataMaskingInstancesRequest& setRiskLevelIds(string riskLevelIds) { DARABONBA_PTR_SET_VALUE(riskLevelIds_, riskLevelIds) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDataMaskingInstancesRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListDataMaskingInstancesRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateRuleIds Field Functions 
    bool hasTemplateRuleIds() const { return this->templateRuleIds_ != nullptr;};
    void deleteTemplateRuleIds() { this->templateRuleIds_ = nullptr;};
    inline string getTemplateRuleIds() const { DARABONBA_PTR_GET_DEFAULT(templateRuleIds_, "") };
    inline ListDataMaskingInstancesRequest& setTemplateRuleIds(string templateRuleIds) { DARABONBA_PTR_SET_VALUE(templateRuleIds_, templateRuleIds) };


  protected:
    // The column name filter condition.
    shared_ptr<string> columnName_ {};
    // The page number of the current query. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the database.
    shared_ptr<string> dbName_ {};
    // The database engine type. The value must match the EngineType of the target instance, such as MySQL or PostgreSQL.
    shared_ptr<string> engineType_ {};
    // The instance identity of the database instance. You can obtain the value from Items[].InstanceId in the response of ListDataMaskingInstances.
    shared_ptr<string> instanceId_ {};
    // The language of the response description. Valid values:
    // - zh: Chinese.
    // - en: English.
    shared_ptr<string> lang_ {};
    // The column encryption status used for filtering. Valid values:
    // - NotEncrypted: Not encrypted.
    // - Success: Encryption succeeded.
    // - Failed: Encryption failed.
    shared_ptr<string> maskingStatus_ {};
    // The ID of the model tag. This parameter is used to limit the data to those that match the specified model tag.
    shared_ptr<string> modelTagId_ {};
    // The number of records per page. Keep other filter conditions consistent when querying the next page.
    shared_ptr<int32_t> pageSize_ {};
    // The code of the cloud product. Column encryption supports RDS, POLARDB, and PolarDBX2. If you also specify ProductId, the two values must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The ID of the cloud product type. Valid values: 5 (RDS), 8 (POLARDB), and 27 (PolarDBX2). If you specify both ProductId and ProductCode, the values must correspond to each other.
    shared_ptr<int64_t> productId_ {};
    // The list of cloud product type IDs. Separate multiple values with commas (,). Valid values for column encryption: 5 (RDS), 8 (POLARDB), and 27 (PolarDBX2).
    shared_ptr<string> productIds_ {};
    // The ID of the sensitivity level. You can obtain the value from the response of ListRiskLevels.
    shared_ptr<int64_t> riskLevelId_ {};
    // The list of sensitivity level IDs. Separate multiple values with commas (,). Select values from the response of ListRiskLevels that corresponds to the same TemplateId.
    shared_ptr<string> riskLevelIds_ {};
    // The name of the table. For PostgreSQL or Oracle scenarios, retain the schema.table format obtained from the table list.
    shared_ptr<string> tableName_ {};
    // The ID of the classification and grading template. You can obtain the value from Items[].Id in the response of ListTemplates. The value must be consistent with the selected sensitivity level and detection model.
    shared_ptr<int64_t> templateId_ {};
    // The list of detection model IDs. Separate multiple values with commas (,). Select values from the response of ListIdentifyModels that corresponds to the same TemplateId.
    shared_ptr<string> templateRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
