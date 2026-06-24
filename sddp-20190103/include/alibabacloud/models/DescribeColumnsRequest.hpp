// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeColumnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ModelTagId, modelTagId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateRuleId, templateRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ModelTagId, modelTagId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateRuleId, templateRuleId_);
    };
    DescribeColumnsRequest() = default ;
    DescribeColumnsRequest(const DescribeColumnsRequest &) = default ;
    DescribeColumnsRequest(DescribeColumnsRequest &&) = default ;
    DescribeColumnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsRequest() = default ;
    DescribeColumnsRequest& operator=(const DescribeColumnsRequest &) = default ;
    DescribeColumnsRequest& operator=(DescribeColumnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->engineType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->lang_ == nullptr && this->modelTagId_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskLevelId_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->sensLevelName_ == nullptr && this->serviceRegionId_ == nullptr && this->tableId_ == nullptr
        && this->tableName_ == nullptr && this->templateId_ == nullptr && this->templateRuleId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeColumnsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeColumnsRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeColumnsRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeColumnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // modelTagId Field Functions 
    bool hasModelTagId() const { return this->modelTagId_ != nullptr;};
    void deleteModelTagId() { this->modelTagId_ = nullptr;};
    inline string getModelTagId() const { DARABONBA_PTR_GET_DEFAULT(modelTagId_, "") };
    inline DescribeColumnsRequest& setModelTagId(string modelTagId) { DARABONBA_PTR_SET_VALUE(modelTagId_, modelTagId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeColumnsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColumnsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeColumnsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeColumnsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeColumnsRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeColumnsRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeColumnsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevelName Field Functions 
    bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
    void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
    inline string getSensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
    inline DescribeColumnsRequest& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeColumnsRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline DescribeColumnsRequest& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeColumnsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateRuleId Field Functions 
    bool hasTemplateRuleId() const { return this->templateRuleId_ != nullptr;};
    void deleteTemplateRuleId() { this->templateRuleId_ = nullptr;};
    inline string getTemplateRuleId() const { DARABONBA_PTR_GET_DEFAULT(templateRuleId_, "") };
    inline DescribeColumnsRequest& setTemplateRuleId(string templateRuleId) { DARABONBA_PTR_SET_VALUE(templateRuleId_, templateRuleId) };


  protected:
    // The page number for paged query.
    shared_ptr<int32_t> currentPage_ {};
    // Engine type. Valid values:
    // 
    // - **MySQL**.
    // 
    // - **MariaDB**.
    // 
    // - **Oracle**.
    // 
    // - **PostgreSQL**.
    // 
    // - **SQLServer**.
    shared_ptr<string> engineType_ {};
    // The ID of the asset instance to which the column data in the data asset table belongs.
    // 
    // > Query column data in data asset tables authorized to connect to Data Security Center using the ID of the asset instance to which the column data in the data asset table belongs. Obtain the asset instance ID by calling the [DescribeInstances](~~DescribeRules~~) API.
    shared_ptr<int64_t> instanceId_ {};
    // The name of the asset instance to which the column data in the data asset table belongs.
    shared_ptr<string> instanceName_ {};
    // The language type for requests and responses. The default value is **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Chinese.
    // 
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // Data tag.
    // 
    // - 101: Personal sensitive information
    // 
    // - 102: Personal information
    shared_ptr<string> modelTagId_ {};
    // The keyword for search. Supports fuzzy match.
    // 
    // For example, entering **test** returns all data containing **test**.
    shared_ptr<string> name_ {};
    // The maximum number of data entries displayed per page in the list.
    shared_ptr<int32_t> pageSize_ {};
    // The product name to which the column data in the data asset table belongs. Valid values: **MaxCompute, OSS, ADS, OTS, RDS**, and others.
    shared_ptr<string> productCode_ {};
    // The ID corresponding to the product name to which the data object belongs. Valid values:
    // 
    // - **1**: MaxCompute
    // 
    // - **2**: OSS
    // 
    // - **3**: ADB-MYSQL
    // 
    // - **4**: TableStore
    // 
    // - **5**: RDS
    // 
    // - **6**: SELF_DB
    // 
    // - **7**: PolarDB-X
    // 
    // - **8**: PolarDB
    // 
    // - **9**: ADB-PG
    // 
    // - **10**: OceanBase
    // 
    // - **11**: MongoDB
    // 
    // - **25**: Redis
    shared_ptr<string> productId_ {};
    // The risk level ID of the sensitive data detection rule. Valid values:
    // 
    // - **1**: N/A.
    // 
    // - **2**: S1.
    // 
    // - **3**: S2.
    // 
    // - **4**: S3.
    // 
    // - **5**: S4.
    shared_ptr<int64_t> riskLevelId_ {};
    // The unique ID of the sensitive data detection rule hit by the column data in the asset table.
    // 
    // > Query column data in data asset tables authorized to connect to Data Security Center using the ID of the sensitive data detection rule hit by the column data in the asset table. Obtain the sensitive data detection rule ID by calling the [DescribeRules](~~DescribeRules~~) API.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the sensitive data detection rule hit by the column data in the data asset table.
    shared_ptr<string> ruleName_ {};
    // Sensitivity level name. Valid values:
    // 
    // - **N/A**: No sensitive data detected.
    // 
    // - **S1**: Level 1 sensitive data.
    // 
    // - **S2**: Level 2 sensitive data.
    // 
    // - **S3**: Level 3 sensitive data.
    // 
    // - **S4**: Level 4 sensitive data.
    shared_ptr<string> sensLevelName_ {};
    shared_ptr<string> serviceRegionId_ {};
    // The unique ID of the asset table that contains the columns in data asset tables such as MaxCompute and RDS.
    // 
    // > Query column data in data asset tables authorized to connect to Data Security Center using the asset table ID. Obtain the asset table ID by calling the [DescribeTables](~~DescribeTables~~) API.
    shared_ptr<int64_t> tableId_ {};
    // The name of the data asset table.
    shared_ptr<string> tableName_ {};
    // Industry template ID.
    // 
    // > Obtain the industry template ID by calling [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html).
    shared_ptr<string> templateId_ {};
    // The ID of the hit template rule.
    // 
    // > Obtain the hit template rule ID by calling [DescribeCategoryTemplateRuleList](https://help.aliyun.com/document_detail/410143.html).
    shared_ptr<string> templateRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
