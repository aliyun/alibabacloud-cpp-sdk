// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeTablesRequest() = default ;
    DescribeTablesRequest(const DescribeTablesRequest &) = default ;
    DescribeTablesRequest(DescribeTablesRequest &&) = default ;
    DescribeTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesRequest() = default ;
    DescribeTablesRequest& operator=(const DescribeTablesRequest &) = default ;
    DescribeTablesRequest& operator=(DescribeTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->packageId_ == nullptr && this->pageSize_ == nullptr
        && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr && this->serviceRegionId_ == nullptr
        && this->templateId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeTablesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeTablesRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTablesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline int64_t getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, 0L) };
    inline DescribeTablesRequest& setPackageId(int64_t packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeTablesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeTablesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeTablesRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeTablesRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeTablesRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeTablesRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the instance to which the data asset table belongs. Call the [DescribeInstances](~~DescribeInstances~~) operation to obtain this ID.
    shared_ptr<int64_t> instanceId_ {};
    // The language of the request and response. Default value: **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Chinese.
    // 
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // The search keyword. Fuzzy search is supported. For example, if you enter test, all results that contain test are returned.
    shared_ptr<string> name_ {};
    // The ID of the package to which the data asset table belongs. Call the [DescribePackages](~~DescribePackages~~) operation to obtain this ID.
    shared_ptr<int64_t> packageId_ {};
    // The maximum number of entries to return on each page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the product to which the data asset table belongs. Valid values include MaxCompute, OSS, ADS, OTS, and RDS. For more information about the supported products, see [Data asset types that support sensitive data detection](https://help.aliyun.com/document_detail/212906.html).
    shared_ptr<string> productCode_ {};
    // The ID of the product to which the data asset table belongs. Call the [DescribeDataAssets](~~DescribeDataAssets~~) operation to obtain this ID.
    shared_ptr<int64_t> productId_ {};
    // The ID of the risk level for the data asset table. Each risk level ID corresponds to a risk level name. Valid values:
    // 
    // - **1**: N/A. No sensitive data is detected.
    // 
    // - **2**: S1. Level 1 sensitive data.
    // 
    // - **3**: S2. Level 2 sensitive data.
    // 
    // - **4**: S3. Level 3 sensitive data.
    // 
    // - **5**: S4. Level 4 sensitive data.
    shared_ptr<int64_t> riskLevelId_ {};
    // The ID of the sensitive data detection rule that the data asset table hits. Call the [DescribeRules](~~DescribeRules~~) operation to obtain this ID.
    shared_ptr<int64_t> ruleId_ {};
    // The region where Data Security Center is available. For more information, see [Supported regions](https://help.aliyun.com/document_detail/214257.html).
    shared_ptr<string> serviceRegionId_ {};
    // The ID of the industry-specific template.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
