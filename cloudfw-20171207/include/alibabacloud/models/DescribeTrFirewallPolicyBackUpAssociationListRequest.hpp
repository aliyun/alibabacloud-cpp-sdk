// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallPolicyBackUpAssociationListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallPolicyBackUpAssociationListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateList, candidateList_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallPolicyBackUpAssociationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateList, candidateList_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    DescribeTrFirewallPolicyBackUpAssociationListRequest() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListRequest(const DescribeTrFirewallPolicyBackUpAssociationListRequest &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListRequest(DescribeTrFirewallPolicyBackUpAssociationListRequest &&) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallPolicyBackUpAssociationListRequest() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListRequest& operator=(const DescribeTrFirewallPolicyBackUpAssociationListRequest &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListRequest& operator=(DescribeTrFirewallPolicyBackUpAssociationListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->candidateList_ == nullptr
        && return this->firewallId_ == nullptr && return this->lang_ == nullptr && return this->trFirewallRoutePolicyId_ == nullptr; };
    // candidateList Field Functions 
    bool hasCandidateList() const { return this->candidateList_ != nullptr;};
    void deleteCandidateList() { this->candidateList_ = nullptr;};
    inline const vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList> & candidateList() const { DARABONBA_PTR_GET_CONST(candidateList_, vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>) };
    inline vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList> candidateList() { DARABONBA_PTR_GET(candidateList_, vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>) };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setCandidateList(const vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList> & candidateList) { DARABONBA_PTR_SET_VALUE(candidateList_, candidateList) };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setCandidateList(vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList> && candidateList) { DARABONBA_PTR_SET_RVALUE(candidateList_, candidateList) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string trFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The traffic redirection instances.
    std::shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>> candidateList_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> trFirewallRoutePolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
