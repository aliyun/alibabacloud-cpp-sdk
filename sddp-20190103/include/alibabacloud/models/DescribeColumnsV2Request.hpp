// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeColumnsV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeColumnsV2Request() = default ;
    DescribeColumnsV2Request(const DescribeColumnsV2Request &) = default ;
    DescribeColumnsV2Request(DescribeColumnsV2Request &&) = default ;
    DescribeColumnsV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsV2Request() = default ;
    DescribeColumnsV2Request& operator=(const DescribeColumnsV2Request &) = default ;
    DescribeColumnsV2Request& operator=(DescribeColumnsV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->engineType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr
        && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->sensLevelName_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeColumnsV2Request& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeColumnsV2Request& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeColumnsV2Request& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnsV2Request& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeColumnsV2Request& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeColumnsV2Request& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColumnsV2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeColumnsV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeColumnsV2Request& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeColumnsV2Request& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeColumnsV2Request& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevelName Field Functions 
    bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
    void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
    inline string getSensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
    inline DescribeColumnsV2Request& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline DescribeColumnsV2Request& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColumnsV2Request& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The page number in a paged query. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The engine type. Valid values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    shared_ptr<string> engineType_ {};
    // The ID of the asset instance to which the column data in the data asset table belongs.
    // 
    // > Queries column data in data asset tables that are connected to and authorized by Data Security Center based on the asset instance ID. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/141708.html) operation to obtain the instance ID.
    shared_ptr<int64_t> instanceId_ {};
    // The name of the asset instance to which the column data in the data asset table belongs.
    shared_ptr<string> instanceName_ {};
    // The language of the request and response. Default value: **zh_cn**.
    // 
    // Valid values:
    // 
    // - **zh_cn**: Chinese (Simplified).
    // - **en_us**: English (US).
    shared_ptr<string> lang_ {};
    // The keyword to search for. Fuzzy match is supported.
    // 
    // For example, if you enter **test**, all data entries that contain **test** in the search fields are returned.
    shared_ptr<string> name_ {};
    // The maximum number of entries per page in a paged query. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the product to which the column data in the data asset table belongs. Valid values: **MaxCompute, OSS, ADS, OTS, RDS**, and others.
    shared_ptr<string> productCode_ {};
    // The risk level ID of the sensitive data detection rule. Valid values:
    // - **1**: N/A.
    // - **2**: S1.
    // - **3**: S2.
    // - **4**: S3.
    // - **5**: S4.
    shared_ptr<int64_t> riskLevelId_ {};
    // The unique ID of the sensitive data detection rule that the column data matches.
    // 
    // > Queries column data in data asset tables that are connected to and authorized by Data Security Center based on the ID of the sensitive data detection rule that the column data matches. You can call the [DescribeRules](https://help.aliyun.com/document_detail/141389.html) operation to obtain the rule ID.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the sensitive data detection rule that the column data in the data asset table matches.
    shared_ptr<string> ruleName_ {};
    // The sensitivity level name. Valid values:
    // - **N/A**: no sensitive data detected.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    shared_ptr<string> sensLevelName_ {};
    // The unique ID of the data asset table to which the columns belong in MaxCompute, ApsaraDB RDS, or other data assets.
    // 
    // > Queries column data in data asset tables that are connected to and authorized by Data Security Center based on the table ID. You can call the [DescribeTables](https://help.aliyun.com/document_detail/141709.html) operation to obtain the table ID.
    shared_ptr<string> tableId_ {};
    // The name of the data asset table.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
