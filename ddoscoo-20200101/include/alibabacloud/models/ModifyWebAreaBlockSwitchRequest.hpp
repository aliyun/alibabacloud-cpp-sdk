// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBAREABLOCKSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBAREABLOCKSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebAreaBlockSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebAreaBlockSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebAreaBlockSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyWebAreaBlockSwitchRequest() = default ;
    ModifyWebAreaBlockSwitchRequest(const ModifyWebAreaBlockSwitchRequest &) = default ;
    ModifyWebAreaBlockSwitchRequest(ModifyWebAreaBlockSwitchRequest &&) = default ;
    ModifyWebAreaBlockSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebAreaBlockSwitchRequest() = default ;
    ModifyWebAreaBlockSwitchRequest& operator=(const ModifyWebAreaBlockSwitchRequest &) = default ;
    ModifyWebAreaBlockSwitchRequest& operator=(ModifyWebAreaBlockSwitchRequest &&) = default ;
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
    inline ModifyWebAreaBlockSwitchRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebAreaBlockSwitchRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebAreaBlockSwitchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The status of the Location Blacklist feature (for domain names). This parameter is a string that is converted from a JSON struct. The JSON struct contains the following parameter:
    // 
    // - **RegionblockEnable**: An Integer value that is required. The status of the Location Blacklist feature (for domain names). Valid values:
    // 
    //   - **1**: enables the feature.
    // 
    //   - **0**: disables the feature.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The domain name for which you want to set the Location Blacklist feature.
    // 
    // > You can call [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names that are protected by Anti-DDoS Proxy.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the resource group to which the Anti-DDoS Proxy instance belongs in Resource Management.
    // 
    // If you do not set this parameter, the default resource group is used.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
