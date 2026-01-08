// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateTrFirewallV2RoutePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrFirewallV2RoutePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateListShrink_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2RoutePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateListShrink_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateListShrink_);
    };
    CreateTrFirewallV2RoutePolicyShrinkRequest() = default ;
    CreateTrFirewallV2RoutePolicyShrinkRequest(const CreateTrFirewallV2RoutePolicyShrinkRequest &) = default ;
    CreateTrFirewallV2RoutePolicyShrinkRequest(CreateTrFirewallV2RoutePolicyShrinkRequest &&) = default ;
    CreateTrFirewallV2RoutePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrFirewallV2RoutePolicyShrinkRequest() = default ;
    CreateTrFirewallV2RoutePolicyShrinkRequest& operator=(const CreateTrFirewallV2RoutePolicyShrinkRequest &) = default ;
    CreateTrFirewallV2RoutePolicyShrinkRequest& operator=(CreateTrFirewallV2RoutePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCandidateListShrink_ == nullptr
        && this->firewallId_ == nullptr && this->lang_ == nullptr && this->policyDescription_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr
        && this->srcCandidateListShrink_ == nullptr; };
    // destCandidateListShrink Field Functions 
    bool hasDestCandidateListShrink() const { return this->destCandidateListShrink_ != nullptr;};
    void deleteDestCandidateListShrink() { this->destCandidateListShrink_ = nullptr;};
    inline string getDestCandidateListShrink() const { DARABONBA_PTR_GET_DEFAULT(destCandidateListShrink_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setDestCandidateListShrink(string destCandidateListShrink) { DARABONBA_PTR_SET_VALUE(destCandidateListShrink_, destCandidateListShrink) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // srcCandidateListShrink Field Functions 
    bool hasSrcCandidateListShrink() const { return this->srcCandidateListShrink_ != nullptr;};
    void deleteSrcCandidateListShrink() { this->srcCandidateListShrink_ = nullptr;};
    inline string getSrcCandidateListShrink() const { DARABONBA_PTR_GET_DEFAULT(srcCandidateListShrink_, "") };
    inline CreateTrFirewallV2RoutePolicyShrinkRequest& setSrcCandidateListShrink(string srcCandidateListShrink) { DARABONBA_PTR_SET_VALUE(srcCandidateListShrink_, srcCandidateListShrink) };


  protected:
    // The secondary traffic redirection instances.
    shared_ptr<string> destCandidateListShrink_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The description of the traffic redirection instance.
    shared_ptr<string> policyDescription_ {};
    // The name of the traffic redirection instance.
    shared_ptr<string> policyName_ {};
    // The type of the traffic redirection scenario of the VPC firewall. Valid values:
    // 
    // *   **fullmesh**: interconnected instances
    // *   **one_to_one**: instance to instance
    // *   **end_to_end**: instance to instances
    shared_ptr<string> policyType_ {};
    // The primary traffic redirection instances.
    shared_ptr<string> srcCandidateListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
