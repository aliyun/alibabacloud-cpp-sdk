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
    // The domain of the website.
    // 
    // > You must configure a forwarding rule for the domain. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domains.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The validity period of the rule, in seconds. This parameter applies only when **action** is set to **block**. Requests that match the rule are blocked for the specified duration. If you do not specify this parameter, the rule is permanently effective.
    shared_ptr<int32_t> expires_ {};
    // The ID of the resource group to which the Anti-DDoS Pro instance belongs. If you do not specify this parameter, the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The configuration of the precise access control rule, specified as a JSON-formatted string. The string has the following structure:
    // 
    // - **action**: String. Required. The action to perform on matching requests. Valid values:
    // 
    //   - **accept**: Allows the request.
    // 
    //   - **block**: Blocks the request.
    // 
    //   - **challenge**: Initiates a challenge to verify the request.
    // 
    //   - **watch**: Monitors the request.
    // 
    // - **name**: String. Required. The name of the rule.
    // 
    // - **condition**: Map. Required. The match conditions. The structure is as follows:
    // 
    //   > If you specify multiple match conditions, they are evaluated with a logical AND.
    // 
    //   - **field**: String. Required. The match field.
    // 
    //   - **match_method**: String. Required. The match method.
    // 
    //     > For information about the valid values for **field** and **match_method**, see the "Additional information about request parameters" section.
    // 
    //   - **content**: String. The value to match. You can specify either this parameter or `content_list`.
    // 
    //   - **content_list**: String. A list of values to match. You can specify either this parameter or `content`.
    // 
    //   > For information about the valid values for **match_method** and **content/content_list**, see the "Additional information about request parameters" section.
    // 
    // - **header_name**: String. Optional. The name of the request header. This parameter applies only when **field** is set to **header**.
    // 
    // - **case_insensitive**: Boolean. Optional. The default value is false. Valid values:
    // 
    //   - **false**: case-sensitive
    // 
    //   - **true**: case-insensitive
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
