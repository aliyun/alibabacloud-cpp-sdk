// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyTrFirewallV2RoutePolicyScopeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateListShrink_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateListShrink_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateListShrink_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateListShrink_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest() = default ;
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest(const ModifyTrFirewallV2RoutePolicyScopeShrinkRequest &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest(ModifyTrFirewallV2RoutePolicyScopeShrinkRequest &&) = default ;
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTrFirewallV2RoutePolicyScopeShrinkRequest() = default ;
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& operator=(const ModifyTrFirewallV2RoutePolicyScopeShrinkRequest &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& operator=(ModifyTrFirewallV2RoutePolicyScopeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCandidateListShrink_ == nullptr
        && this->firewallId_ == nullptr && this->lang_ == nullptr && this->shouldRecover_ == nullptr && this->srcCandidateListShrink_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr; };
    // destCandidateListShrink Field Functions 
    bool hasDestCandidateListShrink() const { return this->destCandidateListShrink_ != nullptr;};
    void deleteDestCandidateListShrink() { this->destCandidateListShrink_ = nullptr;};
    inline string getDestCandidateListShrink() const { DARABONBA_PTR_GET_DEFAULT(destCandidateListShrink_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setDestCandidateListShrink(string destCandidateListShrink) { DARABONBA_PTR_SET_VALUE(destCandidateListShrink_, destCandidateListShrink) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // shouldRecover Field Functions 
    bool hasShouldRecover() const { return this->shouldRecover_ != nullptr;};
    void deleteShouldRecover() { this->shouldRecover_ = nullptr;};
    inline string getShouldRecover() const { DARABONBA_PTR_GET_DEFAULT(shouldRecover_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setShouldRecover(string shouldRecover) { DARABONBA_PTR_SET_VALUE(shouldRecover_, shouldRecover) };


    // srcCandidateListShrink Field Functions 
    bool hasSrcCandidateListShrink() const { return this->srcCandidateListShrink_ != nullptr;};
    void deleteSrcCandidateListShrink() { this->srcCandidateListShrink_ = nullptr;};
    inline string getSrcCandidateListShrink() const { DARABONBA_PTR_GET_DEFAULT(srcCandidateListShrink_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setSrcCandidateListShrink(string srcCandidateListShrink) { DARABONBA_PTR_SET_VALUE(srcCandidateListShrink_, srcCandidateListShrink) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeShrinkRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The secondary traffic redirection instances.
    shared_ptr<string> destCandidateListShrink_ {};
    // The instance ID of the virtual private cloud (VPC) firewall.
    // 
    // This parameter is required.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *  **zh** (default): Chinese
    // *  **en**: English
    shared_ptr<string> lang_ {};
    // Specifies whether to restore the traffic redirection configurations. Valid values:
    // 
    // *   true: roll back
    // *   false: withdraw
    shared_ptr<string> shouldRecover_ {};
    // The primary traffic redirection instances.
    shared_ptr<string> srcCandidateListShrink_ {};
    // The ID of the routing policy.
    // 
    // This parameter is required.
    shared_ptr<string> trFirewallRoutePolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
