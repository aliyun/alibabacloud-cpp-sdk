// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBPRECISEACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBPRECISEACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebPreciseAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebPreciseAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ModifyWebPreciseAccessRuleRequest() = default ;
    ModifyWebPreciseAccessRuleRequest(const ModifyWebPreciseAccessRuleRequest &) = default ;
    ModifyWebPreciseAccessRuleRequest(ModifyWebPreciseAccessRuleRequest &&) = default ;
    ModifyWebPreciseAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebPreciseAccessRuleRequest() = default ;
    ModifyWebPreciseAccessRuleRequest& operator=(const ModifyWebPreciseAccessRuleRequest &) = default ;
    ModifyWebPreciseAccessRuleRequest& operator=(ModifyWebPreciseAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->expires_ == nullptr && this->resourceGroupId_ == nullptr && this->rules_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebPreciseAccessRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int32_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0) };
    inline ModifyWebPreciseAccessRuleRequest& setExpires(int32_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebPreciseAccessRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifyWebPreciseAccessRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The validity period of the rule. Unit: seconds. This parameter takes effect only when **action** of a rule is **block**. Access requests that match the rule are blocked within the specified validity period of the rule. If you do not specify this parameter, this rule takes effect all the time.
    shared_ptr<int32_t> expires_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The settings of the accurate access control rule. This parameter is a JSON string. The following list describes the fields in the value of the parameter:
    // 
    // *   **action**: the action that is performed if the rule is matched. This field is required and must be of the string type. Valid values:
    // 
    //     *   **accept**: allows the requests that match the rule.
    //     *   **block**: blocks the requests that match the rule.
    //     *   **challenge**: implements a CAPTCHA for the requests that match the rule.
    // 
    // *   **name**: the name of the rule. This field is required and must be of the string type.
    // 
    // *   **condition**: the match conditions. This field is required and must be of the map type. A match condition contains the following parameters.
    // 
    //     **
    // 
    //     **Note**The AND logical operator is used to define the relationship among multiple match conditions.
    // 
    //     *   **field**: the match field. This parameter is required and must be of the string type.
    // 
    //     *   **match_method**: the logical relation. This parameter is required and must be of the string type.
    // 
    //         **
    // 
    //         **Note**For information about the mappings between the **field** and **match_method** parameters, see the Mappings between the field and match_method parameters table in this topic.
    // 
    //     *   **content**: the match content. This parameter is required and must be of the string type.
    // 
    // *   **header_name**: the HTTP header. This parameter is optional and must be of the string type. This parameter takes effect only when **field** is **header**.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
