// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODYTRFIREWALLROUTEPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODYTRFIREWALLROUTEPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList.hpp>
#include <alibabacloud/models/DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateList_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateList_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies(const DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies(DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies &&) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& operator=(const DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& operator=(DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destCandidateList_ != nullptr
        && this->policyDescription_ != nullptr && this->policyName_ != nullptr && this->policyStatus_ != nullptr && this->policyType_ != nullptr && this->srcCandidateList_ != nullptr
        && this->trFirewallRoutePolicyId_ != nullptr; };
    // destCandidateList Field Functions 
    bool hasDestCandidateList() const { return this->destCandidateList_ != nullptr;};
    void deleteDestCandidateList() { this->destCandidateList_ = nullptr;};
    inline const vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList> & destCandidateList() const { DARABONBA_PTR_GET_CONST(destCandidateList_, vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList>) };
    inline vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList> destCandidateList() { DARABONBA_PTR_GET(destCandidateList_, vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList>) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setDestCandidateList(const vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList> & destCandidateList) { DARABONBA_PTR_SET_VALUE(destCandidateList_, destCandidateList) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setDestCandidateList(vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList> && destCandidateList) { DARABONBA_PTR_SET_RVALUE(destCandidateList_, destCandidateList) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // srcCandidateList Field Functions 
    bool hasSrcCandidateList() const { return this->srcCandidateList_ != nullptr;};
    void deleteSrcCandidateList() { this->srcCandidateList_ = nullptr;};
    inline const vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList> & srcCandidateList() const { DARABONBA_PTR_GET_CONST(srcCandidateList_, vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList>) };
    inline vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList> srcCandidateList() { DARABONBA_PTR_GET(srcCandidateList_, vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList>) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setSrcCandidateList(const vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList> & srcCandidateList) { DARABONBA_PTR_SET_VALUE(srcCandidateList_, srcCandidateList) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setSrcCandidateList(vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList> && srcCandidateList) { DARABONBA_PTR_SET_RVALUE(srcCandidateList_, srcCandidateList) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string trFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The secondary traffic redirection instances.
    std::shared_ptr<vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList>> destCandidateList_ = nullptr;
    // The description of the routing policy.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The name of the routing policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The status of the routing policy. Valid values:
    // 
    // *   creating: The policy is being created.
    // *   deleting: The policy is being deleted.
    // *   opening: The policy is being enabled.
    // *   opened: The policy is enabled.
    // *   closing: The policy is being disabled.
    // *   closed: The policy is disabled.
    std::shared_ptr<string> policyStatus_ = nullptr;
    // The type of the traffic redirection scenario of the VPC firewall. Valid values:
    // 
    // *   **fullmesh**: interconnected instances
    // *   **one_to_one**: instance to instance
    // *   **end_to_end**: instance to instances
    std::shared_ptr<string> policyType_ = nullptr;
    // The primary traffic redirection instances.
    std::shared_ptr<vector<Models::DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList>> srcCandidateList_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> trFirewallRoutePolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
