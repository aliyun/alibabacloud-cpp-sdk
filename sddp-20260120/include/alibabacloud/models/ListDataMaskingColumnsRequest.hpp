// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAMASKINGCOLUMNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAMASKINGCOLUMNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListDataMaskingColumnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataMaskingColumnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(RiskLeveLId, riskLeveLId_);
      DARABONBA_PTR_TO_JSON(RiskLevelIds, riskLevelIds_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateRuleIds, templateRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataMaskingColumnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(RiskLeveLId, riskLeveLId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelIds, riskLevelIds_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateRuleIds, templateRuleIds_);
    };
    ListDataMaskingColumnsRequest() = default ;
    ListDataMaskingColumnsRequest(const ListDataMaskingColumnsRequest &) = default ;
    ListDataMaskingColumnsRequest(ListDataMaskingColumnsRequest &&) = default ;
    ListDataMaskingColumnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataMaskingColumnsRequest() = default ;
    ListDataMaskingColumnsRequest& operator=(const ListDataMaskingColumnsRequest &) = default ;
    ListDataMaskingColumnsRequest& operator=(ListDataMaskingColumnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && this->currentPage_ == nullptr && this->dbName_ == nullptr && this->engineType_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr
        && this->maskingStatus_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->productIds_ == nullptr
        && this->riskLeveLId_ == nullptr && this->riskLevelIds_ == nullptr && this->tableName_ == nullptr && this->templateId_ == nullptr && this->templateRuleIds_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListDataMaskingColumnsRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDataMaskingColumnsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListDataMaskingColumnsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ListDataMaskingColumnsRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataMaskingColumnsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataMaskingColumnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maskingStatus Field Functions 
    bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
    void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
    inline string getMaskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, "") };
    inline ListDataMaskingColumnsRequest& setMaskingStatus(string maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataMaskingColumnsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDataMaskingColumnsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListDataMaskingColumnsRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline ListDataMaskingColumnsRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


    // riskLeveLId Field Functions 
    bool hasRiskLeveLId() const { return this->riskLeveLId_ != nullptr;};
    void deleteRiskLeveLId() { this->riskLeveLId_ = nullptr;};
    inline int64_t getRiskLeveLId() const { DARABONBA_PTR_GET_DEFAULT(riskLeveLId_, 0L) };
    inline ListDataMaskingColumnsRequest& setRiskLeveLId(int64_t riskLeveLId) { DARABONBA_PTR_SET_VALUE(riskLeveLId_, riskLeveLId) };


    // riskLevelIds Field Functions 
    bool hasRiskLevelIds() const { return this->riskLevelIds_ != nullptr;};
    void deleteRiskLevelIds() { this->riskLevelIds_ = nullptr;};
    inline string getRiskLevelIds() const { DARABONBA_PTR_GET_DEFAULT(riskLevelIds_, "") };
    inline ListDataMaskingColumnsRequest& setRiskLevelIds(string riskLevelIds) { DARABONBA_PTR_SET_VALUE(riskLevelIds_, riskLevelIds) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDataMaskingColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListDataMaskingColumnsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateRuleIds Field Functions 
    bool hasTemplateRuleIds() const { return this->templateRuleIds_ != nullptr;};
    void deleteTemplateRuleIds() { this->templateRuleIds_ = nullptr;};
    inline string getTemplateRuleIds() const { DARABONBA_PTR_GET_DEFAULT(templateRuleIds_, "") };
    inline ListDataMaskingColumnsRequest& setTemplateRuleIds(string templateRuleIds) { DARABONBA_PTR_SET_VALUE(templateRuleIds_, templateRuleIds) };


  protected:
    // The filter condition for the column name.
    shared_ptr<string> columnName_ {};
    // The current page number for the query. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the database.
    shared_ptr<string> dbName_ {};
    // The type of the database engine. It must be consistent with the EngineType of the target instance, such as MySQL or PostgreSQL.
    shared_ptr<string> engineType_ {};
    // The instance identity of the database. You can obtain it from Items[].InstanceId in the response of ListDataMaskingInstances.
    shared_ptr<string> instanceId_ {};
    // The language of the response description. Valid values: zh: Chinese; en: English.
    shared_ptr<string> lang_ {};
    // The filter for the column encryption status. Valid values: NotEncrypted: not encrypted; Success: encrypted successfully; Failed: encryption failed.
    shared_ptr<string> maskingStatus_ {};
    // The number of records to return per page. Keep other filter conditions consistent when querying the next page.
    shared_ptr<int32_t> pageSize_ {};
    // The code of the cloud service. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also provided, the two must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The ID of the cloud service type. Valid values: 5: RDS; 8: POLARDB; 27: PolarDBX2. It must correspond to ProductCode if both are specified.
    shared_ptr<int64_t> productId_ {};
    // The compatible parameter for the list of product IDs. For the current column query, use a single ProductId or ProductCode. Call the operation separately to query multiple products.
    shared_ptr<string> productIds_ {};
    // The ID of a single sensitivity level. You can obtain it from ListRiskLevels. The uppercase L in the parameter name must be preserved.
    shared_ptr<int64_t> riskLeveLId_ {};
    // The list of sensitivity level IDs. Separate multiple values with commas. Select the values from the response of ListRiskLevels corresponding to the same TemplateId.
    shared_ptr<string> riskLevelIds_ {};
    // The name of the table. In PostgreSQL or Oracle scenarios, retain the schema.table format obtained from the table list.
    shared_ptr<string> tableName_ {};
    // The ID of the data classification template. You can obtain it from Items[].Id in the response of ListTemplates. It must be consistent with the selected sensitivity level and detection model.
    shared_ptr<int64_t> templateId_ {};
    // The list of detection model IDs. Separate multiple values with commas. Select the values from the response of ListIdentifyModels corresponding to the same TemplateId.
    shared_ptr<string> templateRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
