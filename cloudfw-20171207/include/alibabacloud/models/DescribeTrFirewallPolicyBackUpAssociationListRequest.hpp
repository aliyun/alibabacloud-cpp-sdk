// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CandidateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CandidateList& obj) { 
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
      };
      friend void from_json(const Darabonba::Json& j, CandidateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
      };
      CandidateList() = default ;
      CandidateList(const CandidateList &) = default ;
      CandidateList(CandidateList &&) = default ;
      CandidateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CandidateList() = default ;
      CandidateList& operator=(const CandidateList &) = default ;
      CandidateList& operator=(CandidateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->candidateId_ == nullptr
        && this->candidateType_ == nullptr; };
      // candidateId Field Functions 
      bool hasCandidateId() const { return this->candidateId_ != nullptr;};
      void deleteCandidateId() { this->candidateId_ = nullptr;};
      inline string getCandidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
      inline CandidateList& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


      // candidateType Field Functions 
      bool hasCandidateType() const { return this->candidateType_ != nullptr;};
      void deleteCandidateType() { this->candidateType_ = nullptr;};
      inline string getCandidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
      inline CandidateList& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


    protected:
      // The ID of the traffic redirection instance.
      shared_ptr<string> candidateId_ {};
      // The type of the traffic redirection instance.
      shared_ptr<string> candidateType_ {};
    };

    virtual bool empty() const override { return this->candidateList_ == nullptr
        && this->firewallId_ == nullptr && this->lang_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr; };
    // candidateList Field Functions 
    bool hasCandidateList() const { return this->candidateList_ != nullptr;};
    void deleteCandidateList() { this->candidateList_ = nullptr;};
    inline const vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList> & getCandidateList() const { DARABONBA_PTR_GET_CONST(candidateList_, vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList>) };
    inline vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList> getCandidateList() { DARABONBA_PTR_GET(candidateList_, vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList>) };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setCandidateList(const vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList> & candidateList) { DARABONBA_PTR_SET_VALUE(candidateList_, candidateList) };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setCandidateList(vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList> && candidateList) { DARABONBA_PTR_SET_RVALUE(candidateList_, candidateList) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The traffic redirection instances.
    shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListRequest::CandidateList>> candidateList_ {};
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
