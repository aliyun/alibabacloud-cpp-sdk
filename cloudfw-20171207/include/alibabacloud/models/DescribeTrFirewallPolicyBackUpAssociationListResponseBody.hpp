// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLPOLICYBACKUPASSOCIATIONLISTRESPONSEBODY_HPP_
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
  class DescribeTrFirewallPolicyBackUpAssociationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallPolicyBackUpAssociationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyAssociationBackupConfigs, policyAssociationBackupConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallPolicyBackUpAssociationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyAssociationBackupConfigs, policyAssociationBackupConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(const DescribeTrFirewallPolicyBackUpAssociationListResponseBody &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(DescribeTrFirewallPolicyBackUpAssociationListResponseBody &&) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponseBody() = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody& operator=(const DescribeTrFirewallPolicyBackUpAssociationListResponseBody &) = default ;
    DescribeTrFirewallPolicyBackUpAssociationListResponseBody& operator=(DescribeTrFirewallPolicyBackUpAssociationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyAssociationBackupConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyAssociationBackupConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateName, candidateName_);
        DARABONBA_PTR_TO_JSON(CandidateType, candidateType_);
        DARABONBA_PTR_TO_JSON(CurrentRouteTableId, currentRouteTableId_);
        DARABONBA_PTR_TO_JSON(OriginalRouteTableId, originalRouteTableId_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyAssociationBackupConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateName, candidateName_);
        DARABONBA_PTR_FROM_JSON(CandidateType, candidateType_);
        DARABONBA_PTR_FROM_JSON(CurrentRouteTableId, currentRouteTableId_);
        DARABONBA_PTR_FROM_JSON(OriginalRouteTableId, originalRouteTableId_);
      };
      PolicyAssociationBackupConfigs() = default ;
      PolicyAssociationBackupConfigs(const PolicyAssociationBackupConfigs &) = default ;
      PolicyAssociationBackupConfigs(PolicyAssociationBackupConfigs &&) = default ;
      PolicyAssociationBackupConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyAssociationBackupConfigs() = default ;
      PolicyAssociationBackupConfigs& operator=(const PolicyAssociationBackupConfigs &) = default ;
      PolicyAssociationBackupConfigs& operator=(PolicyAssociationBackupConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->candidateId_ == nullptr
        && this->candidateName_ == nullptr && this->candidateType_ == nullptr && this->currentRouteTableId_ == nullptr && this->originalRouteTableId_ == nullptr; };
      // candidateId Field Functions 
      bool hasCandidateId() const { return this->candidateId_ != nullptr;};
      void deleteCandidateId() { this->candidateId_ = nullptr;};
      inline string getCandidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
      inline PolicyAssociationBackupConfigs& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


      // candidateName Field Functions 
      bool hasCandidateName() const { return this->candidateName_ != nullptr;};
      void deleteCandidateName() { this->candidateName_ = nullptr;};
      inline string getCandidateName() const { DARABONBA_PTR_GET_DEFAULT(candidateName_, "") };
      inline PolicyAssociationBackupConfigs& setCandidateName(string candidateName) { DARABONBA_PTR_SET_VALUE(candidateName_, candidateName) };


      // candidateType Field Functions 
      bool hasCandidateType() const { return this->candidateType_ != nullptr;};
      void deleteCandidateType() { this->candidateType_ = nullptr;};
      inline string getCandidateType() const { DARABONBA_PTR_GET_DEFAULT(candidateType_, "") };
      inline PolicyAssociationBackupConfigs& setCandidateType(string candidateType) { DARABONBA_PTR_SET_VALUE(candidateType_, candidateType) };


      // currentRouteTableId Field Functions 
      bool hasCurrentRouteTableId() const { return this->currentRouteTableId_ != nullptr;};
      void deleteCurrentRouteTableId() { this->currentRouteTableId_ = nullptr;};
      inline string getCurrentRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(currentRouteTableId_, "") };
      inline PolicyAssociationBackupConfigs& setCurrentRouteTableId(string currentRouteTableId) { DARABONBA_PTR_SET_VALUE(currentRouteTableId_, currentRouteTableId) };


      // originalRouteTableId Field Functions 
      bool hasOriginalRouteTableId() const { return this->originalRouteTableId_ != nullptr;};
      void deleteOriginalRouteTableId() { this->originalRouteTableId_ = nullptr;};
      inline string getOriginalRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(originalRouteTableId_, "") };
      inline PolicyAssociationBackupConfigs& setOriginalRouteTableId(string originalRouteTableId) { DARABONBA_PTR_SET_VALUE(originalRouteTableId_, originalRouteTableId) };


    protected:
      // The ID of the traffic redirection instance.
      shared_ptr<string> candidateId_ {};
      // The name of the traffic redirection instance.
      shared_ptr<string> candidateName_ {};
      // The type of the traffic redirection instance.
      shared_ptr<string> candidateType_ {};
      // The route table that is used after traffic redirection.
      shared_ptr<string> currentRouteTableId_ {};
      // The ID of the route table.
      shared_ptr<string> originalRouteTableId_ {};
    };

    virtual bool empty() const override { return this->policyAssociationBackupConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // policyAssociationBackupConfigs Field Functions 
    bool hasPolicyAssociationBackupConfigs() const { return this->policyAssociationBackupConfigs_ != nullptr;};
    void deletePolicyAssociationBackupConfigs() { this->policyAssociationBackupConfigs_ = nullptr;};
    inline const vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs> & getPolicyAssociationBackupConfigs() const { DARABONBA_PTR_GET_CONST(policyAssociationBackupConfigs_, vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs>) };
    inline vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs> getPolicyAssociationBackupConfigs() { DARABONBA_PTR_GET(policyAssociationBackupConfigs_, vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs>) };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setPolicyAssociationBackupConfigs(const vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs> & policyAssociationBackupConfigs) { DARABONBA_PTR_SET_VALUE(policyAssociationBackupConfigs_, policyAssociationBackupConfigs) };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setPolicyAssociationBackupConfigs(vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs> && policyAssociationBackupConfigs) { DARABONBA_PTR_SET_RVALUE(policyAssociationBackupConfigs_, policyAssociationBackupConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallPolicyBackUpAssociationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The route tables.
    shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBody::PolicyAssociationBackupConfigs>> policyAssociationBackupConfigs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
