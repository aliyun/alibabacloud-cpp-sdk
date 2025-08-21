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
    virtual bool empty() const override { this->config_ != nullptr
        && this->domain_ != nullptr && this->resourceGroupId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyWebAreaBlockSwitchRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebAreaBlockSwitchRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyWebAreaBlockSwitchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Specifies whether to enable or disable the Location Blacklist (Domain Names) policy for a domain name. The value is a string that consists of a JSON struct. The JSON struct contains the following parameters:
    // 
    // *   **RegionblockEnable**: the status of the Location Blacklist (Domain Names) policy. This parameter is required and must be of the INTEGER type. Valid values:
    // 
    //     *   **1**: enables the policy.
    //     *   **0**: disables the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The domain name for which you want to enable or disable the Location Blacklist policy.
    // 
    // > You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all the domain names that are added to Anti-DDoS Pro or Anti-DDoS Premium.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management.
    // 
    // If you do not configure this parameter, the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
