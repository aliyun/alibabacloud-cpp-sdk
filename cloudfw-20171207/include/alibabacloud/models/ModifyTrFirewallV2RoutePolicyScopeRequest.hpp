// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPEREQUEST_HPP_
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
  class ModifyTrFirewallV2RoutePolicyScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTrFirewallV2RoutePolicyScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateList_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTrFirewallV2RoutePolicyScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateList_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ShouldRecover, shouldRecover_);
      DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateList_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    ModifyTrFirewallV2RoutePolicyScopeRequest() = default ;
    ModifyTrFirewallV2RoutePolicyScopeRequest(const ModifyTrFirewallV2RoutePolicyScopeRequest &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeRequest(ModifyTrFirewallV2RoutePolicyScopeRequest &&) = default ;
    ModifyTrFirewallV2RoutePolicyScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTrFirewallV2RoutePolicyScopeRequest() = default ;
    ModifyTrFirewallV2RoutePolicyScopeRequest& operator=(const ModifyTrFirewallV2RoutePolicyScopeRequest &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeRequest& operator=(ModifyTrFirewallV2RoutePolicyScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SrcCandidateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SrcCandidateList& obj) { 
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
      };
      friend void from_json(const Darabonba::Json& j, SrcCandidateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
      };
      SrcCandidateList() = default ;
      SrcCandidateList(const SrcCandidateList &) = default ;
      SrcCandidateList(SrcCandidateList &&) = default ;
      SrcCandidateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SrcCandidateList() = default ;
      SrcCandidateList& operator=(const SrcCandidateList &) = default ;
      SrcCandidateList& operator=(SrcCandidateList &&) = default ;
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
      inline SrcCandidateList& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


      // candidateType Field Functions 
      bool hasCandidateType() const { return this->candidateType_ != nullptr;};
      void deleteCandidateType() { this->candidateType_ = nullptr;};
      inline string getCandidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
      inline SrcCandidateList& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


    protected:
      // The ID of the traffic redirection instance.
      shared_ptr<string> candidateId_ {};
      // The type of the traffic redirection instance.
      shared_ptr<string> candidateType_ {};
    };

    class DestCandidateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestCandidateList& obj) { 
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
      };
      friend void from_json(const Darabonba::Json& j, DestCandidateList& obj) { 
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
      };
      DestCandidateList() = default ;
      DestCandidateList(const DestCandidateList &) = default ;
      DestCandidateList(DestCandidateList &&) = default ;
      DestCandidateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestCandidateList() = default ;
      DestCandidateList& operator=(const DestCandidateList &) = default ;
      DestCandidateList& operator=(DestCandidateList &&) = default ;
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
      inline DestCandidateList& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


      // candidateType Field Functions 
      bool hasCandidateType() const { return this->candidateType_ != nullptr;};
      void deleteCandidateType() { this->candidateType_ = nullptr;};
      inline string getCandidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
      inline DestCandidateList& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


    protected:
      // The ID of the traffic redirection instance.
      shared_ptr<string> candidateId_ {};
      // The type of the traffic redirection instance.
      shared_ptr<string> candidateType_ {};
    };

    virtual bool empty() const override { return this->destCandidateList_ == nullptr
        && this->firewallId_ == nullptr && this->lang_ == nullptr && this->shouldRecover_ == nullptr && this->srcCandidateList_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr; };
    // destCandidateList Field Functions 
    bool hasDestCandidateList() const { return this->destCandidateList_ != nullptr;};
    void deleteDestCandidateList() { this->destCandidateList_ = nullptr;};
    inline const vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList> & getDestCandidateList() const { DARABONBA_PTR_GET_CONST(destCandidateList_, vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList>) };
    inline vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList> getDestCandidateList() { DARABONBA_PTR_GET(destCandidateList_, vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList>) };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setDestCandidateList(const vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList> & destCandidateList) { DARABONBA_PTR_SET_VALUE(destCandidateList_, destCandidateList) };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setDestCandidateList(vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList> && destCandidateList) { DARABONBA_PTR_SET_RVALUE(destCandidateList_, destCandidateList) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // shouldRecover Field Functions 
    bool hasShouldRecover() const { return this->shouldRecover_ != nullptr;};
    void deleteShouldRecover() { this->shouldRecover_ = nullptr;};
    inline string getShouldRecover() const { DARABONBA_PTR_GET_DEFAULT(shouldRecover_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setShouldRecover(string shouldRecover) { DARABONBA_PTR_SET_VALUE(shouldRecover_, shouldRecover) };


    // srcCandidateList Field Functions 
    bool hasSrcCandidateList() const { return this->srcCandidateList_ != nullptr;};
    void deleteSrcCandidateList() { this->srcCandidateList_ = nullptr;};
    inline const vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList> & getSrcCandidateList() const { DARABONBA_PTR_GET_CONST(srcCandidateList_, vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList>) };
    inline vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList> getSrcCandidateList() { DARABONBA_PTR_GET(srcCandidateList_, vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList>) };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setSrcCandidateList(const vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList> & srcCandidateList) { DARABONBA_PTR_SET_VALUE(srcCandidateList_, srcCandidateList) };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setSrcCandidateList(vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList> && srcCandidateList) { DARABONBA_PTR_SET_RVALUE(srcCandidateList_, srcCandidateList) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The secondary traffic redirection instances.
    shared_ptr<vector<ModifyTrFirewallV2RoutePolicyScopeRequest::DestCandidateList>> destCandidateList_ {};
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
    shared_ptr<vector<ModifyTrFirewallV2RoutePolicyScopeRequest::SrcCandidateList>> srcCandidateList_ {};
    // The ID of the routing policy.
    // 
    // This parameter is required.
    shared_ptr<string> trFirewallRoutePolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
