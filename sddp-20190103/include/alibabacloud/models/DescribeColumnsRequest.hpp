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
        && return this->engineType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->lang_ == nullptr && return this->modelTagId_ == nullptr
        && return this->name_ == nullptr && return this->pageSize_ == nullptr && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->riskLevelId_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->sensLevelName_ == nullptr && return this->tableId_ == nullptr && return this->tableName_ == nullptr
        && return this->templateId_ == nullptr && return this->templateRuleId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeColumnsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeColumnsRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeColumnsRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeColumnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // modelTagId Field Functions 
    bool hasModelTagId() const { return this->modelTagId_ != nullptr;};
    void deleteModelTagId() { this->modelTagId_ = nullptr;};
    inline string modelTagId() const { DARABONBA_PTR_GET_DEFAULT(modelTagId_, "") };
    inline DescribeColumnsRequest& setModelTagId(string modelTagId) { DARABONBA_PTR_SET_VALUE(modelTagId_, modelTagId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeColumnsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColumnsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeColumnsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeColumnsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeColumnsRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeColumnsRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeColumnsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevelName Field Functions 
    bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
    void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
    inline string sensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
    inline DescribeColumnsRequest& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline DescribeColumnsRequest& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeColumnsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateRuleId Field Functions 
    bool hasTemplateRuleId() const { return this->templateRuleId_ != nullptr;};
    void deleteTemplateRuleId() { this->templateRuleId_ = nullptr;};
    inline string templateRuleId() const { DARABONBA_PTR_GET_DEFAULT(templateRuleId_, "") };
    inline DescribeColumnsRequest& setTemplateRuleId(string templateRuleId) { DARABONBA_PTR_SET_VALUE(templateRuleId_, templateRuleId) };


  protected:
    // The page number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The engine type. Valid values:
    // 
    // *   **MySQL**
    // *   **MariaDB**
    // *   **Oracle**
    // *   **PostgreSQL**
    // *   **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // The ID of the instance to which data in the column of the table belongs.
    // 
    // > You can call the [DescribeInstances](~~DescribeRules~~) operation to query the IDs of instances.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the instance to which data in the column of the table belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The data tag.
    // 
    // *   101: personal sensitive information
    // *   102: personal information
    std::shared_ptr<string> modelTagId_ = nullptr;
    // The search keyword. Fuzzy match is supported.
    // 
    // For example, if you enter **test**, all columns whose names contain **test** are retrieved.
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the service to which data in the column of the table belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the data object belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: Object Storage Service (OSS)
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore (OTS)
    // *   **5**: ApsaraDB RDS
    // *   **6**: self-managed database
    // *   **7**: PolarDB for Xscale (PolarDB-X)
    // *   **8**: PolarDB
    // *   **9**: AnalyticDB for PostgreSQL
    // *   **10**: ApsaraDB for OceanBase
    // *   **11**: ApsaraDB for MongoDB
    // *   **25**: ApsaraDB for Redis
    std::shared_ptr<string> productId_ = nullptr;
    // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **1**: N/A
    // *   **2**: S1
    // *   **3**: S2
    // *   **4**: S3
    // *   **5**: S4
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The ID of the sensitive data detection rule that data in the column of the table hits.
    // 
    // > You can call the [DescribeRules](~~DescribeRules~~) operation to query the IDs of sensitive data detection rules.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the sensitive data detection rule that data in the column of the table hits.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The name of the sensitivity level of the data that hits the sensitive data detection rule. Valid values:
    // 
    // *   **N/A**: No sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> sensLevelName_ = nullptr;
    // The ID of the table to which the column belongs.
    // 
    // > You can call the [DescribeTables](~~DescribeTables~~) operation to query the IDs of tables.
    std::shared_ptr<int64_t> tableId_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the industry-specific classification template.
    // 
    // >  You can call the [DescribeCategoryTemplateList](https://help.aliyun.com/document_detail/2399296.html) operation to obtain the IDs of industry-specific classification templates.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the template rule that is hit.
    // 
    // >  You can call the [DescribeCategoryTemplateRuleList](https://help.aliyun.com/document_detail/410143.html) operation to obtain the IDs of hit template rules.
    std::shared_ptr<string> templateRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
