// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateList, candidateListShrink_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateList, candidateListShrink_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest(const DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest(DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest &&) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& operator=(const DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& operator=(DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->candidateListShrink_ == nullptr
        && this->firewallId_ == nullptr && this->lang_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr; };
    // candidateListShrink Field Functions 
    bool hasCandidateListShrink() const { return this->candidateListShrink_ != nullptr;};
    void deleteCandidateListShrink() { this->candidateListShrink_ = nullptr;};
    inline string getCandidateListShrink() const { DARABONBA_PTR_GET_DEFAULT(candidateListShrink_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& setCandidateListShrink(string candidateListShrink) { DARABONBA_PTR_SET_VALUE(candidateListShrink_, candidateListShrink) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The traffic redirection instances.
    shared_ptr<string> candidateListShrink_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the routing policy.
    shared_ptr<string> trFirewallRoutePolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
