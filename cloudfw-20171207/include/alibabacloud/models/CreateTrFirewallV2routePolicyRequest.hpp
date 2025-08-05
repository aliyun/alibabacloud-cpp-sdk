// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2ROUTEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrFirewallV2RoutePolicyRequestDestCandidateList.hpp>
#include <alibabacloud/models/CreateTrFirewallV2RoutePolicyRequestSrcCandidateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateTrFirewallV2RoutePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrFirewallV2RoutePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2RoutePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateList_);
    };
    CreateTrFirewallV2RoutePolicyRequest() = default ;
    CreateTrFirewallV2RoutePolicyRequest(const CreateTrFirewallV2RoutePolicyRequest &) = default ;
    CreateTrFirewallV2RoutePolicyRequest(CreateTrFirewallV2RoutePolicyRequest &&) = default ;
    CreateTrFirewallV2RoutePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrFirewallV2RoutePolicyRequest() = default ;
    CreateTrFirewallV2RoutePolicyRequest& operator=(const CreateTrFirewallV2RoutePolicyRequest &) = default ;
    CreateTrFirewallV2RoutePolicyRequest& operator=(CreateTrFirewallV2RoutePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destCandidateList_ != nullptr
        && this->firewallId_ != nullptr && this->lang_ != nullptr && this->policyDescription_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr
        && this->srcCandidateList_ != nullptr; };
    // destCandidateList Field Functions 
    bool hasDestCandidateList() const { return this->destCandidateList_ != nullptr;};
    void deleteDestCandidateList() { this->destCandidateList_ = nullptr;};
    inline const vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList> & destCandidateList() const { DARABONBA_PTR_GET_CONST(destCandidateList_, vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>) };
    inline vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList> destCandidateList() { DARABONBA_PTR_GET(destCandidateList_, vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>) };
    inline CreateTrFirewallV2RoutePolicyRequest& setDestCandidateList(const vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList> & destCandidateList) { DARABONBA_PTR_SET_VALUE(destCandidateList_, destCandidateList) };
    inline CreateTrFirewallV2RoutePolicyRequest& setDestCandidateList(vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList> && destCandidateList) { DARABONBA_PTR_SET_RVALUE(destCandidateList_, destCandidateList) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline CreateTrFirewallV2RoutePolicyRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTrFirewallV2RoutePolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline CreateTrFirewallV2RoutePolicyRequest& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateTrFirewallV2RoutePolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateTrFirewallV2RoutePolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // srcCandidateList Field Functions 
    bool hasSrcCandidateList() const { return this->srcCandidateList_ != nullptr;};
    void deleteSrcCandidateList() { this->srcCandidateList_ = nullptr;};
    inline const vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList> & srcCandidateList() const { DARABONBA_PTR_GET_CONST(srcCandidateList_, vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>) };
    inline vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList> srcCandidateList() { DARABONBA_PTR_GET(srcCandidateList_, vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>) };
    inline CreateTrFirewallV2RoutePolicyRequest& setSrcCandidateList(const vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList> & srcCandidateList) { DARABONBA_PTR_SET_VALUE(srcCandidateList_, srcCandidateList) };
    inline CreateTrFirewallV2RoutePolicyRequest& setSrcCandidateList(vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList> && srcCandidateList) { DARABONBA_PTR_SET_RVALUE(srcCandidateList_, srcCandidateList) };


  protected:
    // The secondary traffic redirection instances.
    std::shared_ptr<vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>> destCandidateList_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The description of the traffic redirection instance.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The name of the traffic redirection instance.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the traffic redirection scenario of the VPC firewall. Valid values:
    // 
    // *   **fullmesh**: interconnected instances
    // *   **one_to_one**: instance to instance
    // *   **end_to_end**: instance to instances
    std::shared_ptr<string> policyType_ = nullptr;
    // The primary traffic redirection instances.
    std::shared_ptr<vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>> srcCandidateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
