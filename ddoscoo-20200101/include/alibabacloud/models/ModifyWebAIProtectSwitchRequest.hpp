// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBAIPROTECTSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBAIPROTECTSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebAIProtectSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebAIProtectSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebAIProtectSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyWebAIProtectSwitchRequest() = default ;
    ModifyWebAIProtectSwitchRequest(const ModifyWebAIProtectSwitchRequest &) = default ;
    ModifyWebAIProtectSwitchRequest(ModifyWebAIProtectSwitchRequest &&) = default ;
    ModifyWebAIProtectSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebAIProtectSwitchRequest() = default ;
    ModifyWebAIProtectSwitchRequest& operator=(const ModifyWebAIProtectSwitchRequest &) = default ;
    ModifyWebAIProtectSwitchRequest& operator=(ModifyWebAIProtectSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->domain_ == nullptr && this->resourceGroupId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyWebAIProtectSwitchRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebAIProtectSwitchRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebAIProtectSwitchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The details of the Intelligent Protection policy. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **AiRuleEnable**: the status of the Intelligent Protection policy. This field is required and must be of the integer type. Valid values:
    // 
    //     *   **0**: disabled
    //     *   **1**: enabled
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for a domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
