// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBCACHECUSTOMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBCACHECUSTOMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebCacheCustomRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebCacheCustomRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebCacheCustomRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ModifyWebCacheCustomRuleRequest() = default ;
    ModifyWebCacheCustomRuleRequest(const ModifyWebCacheCustomRuleRequest &) = default ;
    ModifyWebCacheCustomRuleRequest(ModifyWebCacheCustomRuleRequest &&) = default ;
    ModifyWebCacheCustomRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebCacheCustomRuleRequest() = default ;
    ModifyWebCacheCustomRuleRequest& operator=(const ModifyWebCacheCustomRuleRequest &) = default ;
    ModifyWebCacheCustomRuleRequest& operator=(ModifyWebCacheCustomRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->resourceGroupId_ != nullptr && this->rules_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebCacheCustomRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebCacheCustomRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifyWebCacheCustomRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name, and the domain name must be associated with an instance that uses the Enhanced function plan. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The details of the custom rule. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **Name**: the name of the rule. This field is required and must be of the string type.
    // 
    // *   **Uri**: the path to the cached page. This field is required and must be of the STRING type.
    // 
    // *   **Mode**: the cache mode. This field is required and must be of the STRING type. Valid values:
    // 
    //     *   **standard**: uses the standard mode.
    //     *   **aggressive**: uses the enhanced mode.
    //     *   **bypass**: No data is cached.
    // 
    // *   **CacheTtl**: the expiration time of the page cache. This field is required and must be of the INTEGER type. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
