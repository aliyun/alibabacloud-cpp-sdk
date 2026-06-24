// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->featureType_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr
        && this->productId_ == nullptr && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr && this->serviceRegionId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DescribeInstancesRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstancesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstancesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeInstancesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeInstancesRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeInstancesRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline DescribeInstancesRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


  protected:
    // The page number of the paged query. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // The language of the request and response. Default value: **zh_cn**.
    // Valid values:
    // 
    // - **zh_cn**: Chinese
    // 
    // - **en_us**: English
    shared_ptr<string> lang_ {};
    // The keyword to search for. Fuzzy match is supported. For example, if you enter "data", all data that contains "data" is returned.
    shared_ptr<string> name_ {};
    // The maximum number of data asset instances to return on each page of a paged query. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the product to which the data asset instance belongs, such as MaxCompute, OSS, or RDS. For more information about the supported products, see [Data assets that can be scanned for sensitive data](https://help.aliyun.com/document_detail/212906.html).
    shared_ptr<string> productCode_ {};
    // The ID of the product to which the data asset instance belongs. You can call the [DescribeDataAssets](~~DescribeDataAssets~~) operation to query the product ID.
    shared_ptr<int64_t> productId_ {};
    // The ID of the threat level for the data asset instance. The higher the threat level ID, the more sensitive the data. Valid values:
    // 
    // - **1**: No sensitive data is detected. No threat.
    // 
    // - **2**: Threat level 1.
    // 
    // - **3**: Threat level 2.
    // 
    // - **4**: Threat level 3.
    // 
    // - **5**: Threat level 4.
    // 
    // - **6**: Threat level 5.
    // 
    // - **7**: Threat level 6.
    // 
    // - **8**: Threat level 7.
    // 
    // - **9**: Threat level 8.
    // 
    // - **10**: Threat level 9.
    // 
    // - **11**: Threat level 10.
    shared_ptr<int64_t> riskLevelId_ {};
    // The ID of the sensitive data detection rule that the data asset instance hits. You can call the [DescribeRules](~~DescribeRules~~) operation and view the value of the **Id** parameter in the response to obtain the rule ID.
    shared_ptr<int64_t> ruleId_ {};
    // The region where the data asset instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/214257.html).
    shared_ptr<string> serviceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
