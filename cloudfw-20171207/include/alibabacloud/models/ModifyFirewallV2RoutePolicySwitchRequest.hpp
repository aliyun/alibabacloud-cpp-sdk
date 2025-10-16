// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIREWALLV2ROUTEPOLICYSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIREWALLV2ROUTEPOLICYSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyFirewallV2RoutePolicySwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFirewallV2RoutePolicySwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicySwitchStatus, trFirewallRoutePolicySwitchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFirewallV2RoutePolicySwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicySwitchStatus, trFirewallRoutePolicySwitchStatus_);
    };
    ModifyFirewallV2RoutePolicySwitchRequest() = default ;
    ModifyFirewallV2RoutePolicySwitchRequest(const ModifyFirewallV2RoutePolicySwitchRequest &) = default ;
    ModifyFirewallV2RoutePolicySwitchRequest(ModifyFirewallV2RoutePolicySwitchRequest &&) = default ;
    ModifyFirewallV2RoutePolicySwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFirewallV2RoutePolicySwitchRequest() = default ;
    ModifyFirewallV2RoutePolicySwitchRequest& operator=(const ModifyFirewallV2RoutePolicySwitchRequest &) = default ;
    ModifyFirewallV2RoutePolicySwitchRequest& operator=(ModifyFirewallV2RoutePolicySwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && return this->lang_ == nullptr && return this->shouldRecover_ == nullptr && return this->trFirewallRoutePolicyId_ == nullptr && return this->trFirewallRoutePolicySwitchStatus_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline ModifyFirewallV2RoutePolicySwitchRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyFirewallV2RoutePolicySwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // shouldRecover Field Functions 
    bool hasShouldRecover() const { return this->shouldRecover_ != nullptr;};
    void deleteShouldRecover() { this->shouldRecover_ = nullptr;};
    inline string shouldRecover() const { DARABONBA_PTR_GET_DEFAULT(shouldRecover_, "") };
    inline ModifyFirewallV2RoutePolicySwitchRequest& setShouldRecover(string shouldRecover) { DARABONBA_PTR_SET_VALUE(shouldRecover_, shouldRecover) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string trFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline ModifyFirewallV2RoutePolicySwitchRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


    // trFirewallRoutePolicySwitchStatus Field Functions 
    bool hasTrFirewallRoutePolicySwitchStatus() const { return this->trFirewallRoutePolicySwitchStatus_ != nullptr;};
    void deleteTrFirewallRoutePolicySwitchStatus() { this->trFirewallRoutePolicySwitchStatus_ = nullptr;};
    inline string trFirewallRoutePolicySwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicySwitchStatus_, "") };
    inline ModifyFirewallV2RoutePolicySwitchRequest& setTrFirewallRoutePolicySwitchStatus(string trFirewallRoutePolicySwitchStatus) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicySwitchStatus_, trFirewallRoutePolicySwitchStatus) };


  protected:
    // The instance ID of the virtual private cloud (VPC) firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether to restore the traffic redirection configurations. Valid values:
    // 
    // *   true: roll back
    // *   false: withdraw
    std::shared_ptr<string> shouldRecover_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> trFirewallRoutePolicyId_ = nullptr;
    // The status of the routing policy. Valid values:
    // 
    // *   open: enabled
    // *   close: disabled
    std::shared_ptr<string> trFirewallRoutePolicySwitchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
