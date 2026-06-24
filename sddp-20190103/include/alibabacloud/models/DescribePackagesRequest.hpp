// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribePackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribePackagesRequest() = default ;
    DescribePackagesRequest(const DescribePackagesRequest &) = default ;
    DescribePackagesRequest(DescribePackagesRequest &&) = default ;
    DescribePackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackagesRequest() = default ;
    DescribePackagesRequest& operator=(const DescribePackagesRequest &) = default ;
    DescribePackagesRequest& operator=(DescribePackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr && this->productId_ == nullptr
        && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePackagesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribePackagesRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePackagesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePackagesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePackagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribePackagesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribePackagesRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribePackagesRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The page number to return.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the asset instance to which the data asset package belongs.
    // 
    // > To query the list of MaxCompute data asset packages that are authorized for an SDPP connection by instance ID, call the **DescribeInstances** operation to obtain the instance ID.
    shared_ptr<int64_t> instanceId_ {};
    // The language of the request and response. The default value is **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Chinese.
    // 
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // The keyword for the search. Fuzzy matching is supported.
    shared_ptr<string> name_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the product to which the data asset package belongs.
    // 
    // > To query the list of MaxCompute data asset packages that are authorized for an SDPP connection by product ID, call the **DescribeDataAssets** operation to obtain the product ID.
    shared_ptr<int64_t> productId_ {};
    // The ID of the risk level for the data asset package.
    // 
    // - **1**: N/A: No sensitive data is detected.
    // 
    // - **2**: S1: Level 1 sensitive data.
    // 
    // - **3**: S2: Level 2 sensitive data.
    // 
    // - **4**: S3: Level 3 sensitive data.
    // 
    // - **5**: S4: Level 4 sensitive data.
    shared_ptr<int64_t> riskLevelId_ {};
    // The ID of the sensitive data detection rule that the data asset package matches.
    // 
    // > To query the list of MaxCompute data asset packages that are authorized for an SDPP connection by the ID of a matching sensitive data detection rule, call the **DescribeRules** operation to obtain the rule ID.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
