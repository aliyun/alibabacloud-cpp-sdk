// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODY_HPP_
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
  class DescribeTrFirewallV2RoutePolicyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallV2RoutePolicyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicies, trFirewallRoutePolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallV2RoutePolicyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicies, trFirewallRoutePolicies_);
    };
    DescribeTrFirewallV2RoutePolicyListResponseBody() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(const DescribeTrFirewallV2RoutePolicyListResponseBody &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(DescribeTrFirewallV2RoutePolicyListResponseBody &&) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallV2RoutePolicyListResponseBody() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody& operator=(const DescribeTrFirewallV2RoutePolicyListResponseBody &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody& operator=(DescribeTrFirewallV2RoutePolicyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrFirewallRoutePolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrFirewallRoutePolicies& obj) { 
        DARABONBA_PTR_TO_JSON(DestCandidateList, destCandidateList_);
        DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(SrcCandidateList, srcCandidateList_);
        DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, TrFirewallRoutePolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(DestCandidateList, destCandidateList_);
        DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(SrcCandidateList, srcCandidateList_);
        DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      };
      TrFirewallRoutePolicies() = default ;
      TrFirewallRoutePolicies(const TrFirewallRoutePolicies &) = default ;
      TrFirewallRoutePolicies(TrFirewallRoutePolicies &&) = default ;
      TrFirewallRoutePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrFirewallRoutePolicies() = default ;
      TrFirewallRoutePolicies& operator=(const TrFirewallRoutePolicies &) = default ;
      TrFirewallRoutePolicies& operator=(TrFirewallRoutePolicies &&) = default ;
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
        // The ID of the primary traffic redirection instance.
        shared_ptr<string> candidateId_ {};
        // The type of the primary traffic redirection instance.
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
        // The ID of the secondary traffic redirection instance.
        shared_ptr<string> candidateId_ {};
        // The type of the secondary traffic redirection instance.
        shared_ptr<string> candidateType_ {};
      };

      virtual bool empty() const override { return this->destCandidateList_ == nullptr
        && this->policyDescription_ == nullptr && this->policyName_ == nullptr && this->policyStatus_ == nullptr && this->policyType_ == nullptr && this->srcCandidateList_ == nullptr
        && this->trFirewallRoutePolicyId_ == nullptr; };
      // destCandidateList Field Functions 
      bool hasDestCandidateList() const { return this->destCandidateList_ != nullptr;};
      void deleteDestCandidateList() { this->destCandidateList_ = nullptr;};
      inline const vector<TrFirewallRoutePolicies::DestCandidateList> & getDestCandidateList() const { DARABONBA_PTR_GET_CONST(destCandidateList_, vector<TrFirewallRoutePolicies::DestCandidateList>) };
      inline vector<TrFirewallRoutePolicies::DestCandidateList> getDestCandidateList() { DARABONBA_PTR_GET(destCandidateList_, vector<TrFirewallRoutePolicies::DestCandidateList>) };
      inline TrFirewallRoutePolicies& setDestCandidateList(const vector<TrFirewallRoutePolicies::DestCandidateList> & destCandidateList) { DARABONBA_PTR_SET_VALUE(destCandidateList_, destCandidateList) };
      inline TrFirewallRoutePolicies& setDestCandidateList(vector<TrFirewallRoutePolicies::DestCandidateList> && destCandidateList) { DARABONBA_PTR_SET_RVALUE(destCandidateList_, destCandidateList) };


      // policyDescription Field Functions 
      bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
      void deletePolicyDescription() { this->policyDescription_ = nullptr;};
      inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
      inline TrFirewallRoutePolicies& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline TrFirewallRoutePolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyStatus Field Functions 
      bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
      void deletePolicyStatus() { this->policyStatus_ = nullptr;};
      inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
      inline TrFirewallRoutePolicies& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline TrFirewallRoutePolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // srcCandidateList Field Functions 
      bool hasSrcCandidateList() const { return this->srcCandidateList_ != nullptr;};
      void deleteSrcCandidateList() { this->srcCandidateList_ = nullptr;};
      inline const vector<TrFirewallRoutePolicies::SrcCandidateList> & getSrcCandidateList() const { DARABONBA_PTR_GET_CONST(srcCandidateList_, vector<TrFirewallRoutePolicies::SrcCandidateList>) };
      inline vector<TrFirewallRoutePolicies::SrcCandidateList> getSrcCandidateList() { DARABONBA_PTR_GET(srcCandidateList_, vector<TrFirewallRoutePolicies::SrcCandidateList>) };
      inline TrFirewallRoutePolicies& setSrcCandidateList(const vector<TrFirewallRoutePolicies::SrcCandidateList> & srcCandidateList) { DARABONBA_PTR_SET_VALUE(srcCandidateList_, srcCandidateList) };
      inline TrFirewallRoutePolicies& setSrcCandidateList(vector<TrFirewallRoutePolicies::SrcCandidateList> && srcCandidateList) { DARABONBA_PTR_SET_RVALUE(srcCandidateList_, srcCandidateList) };


      // trFirewallRoutePolicyId Field Functions 
      bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
      void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
      inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
      inline TrFirewallRoutePolicies& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


    protected:
      // The secondary traffic redirection instances.
      shared_ptr<vector<TrFirewallRoutePolicies::DestCandidateList>> destCandidateList_ {};
      // The description of the routing policy.
      shared_ptr<string> policyDescription_ {};
      // The name of the routing policy.
      shared_ptr<string> policyName_ {};
      // The status of the routing policy. Valid values:
      // 
      // *   creating: The policy is being created.
      // *   deleting: The policy is being deleted.
      // *   opening: The policy is being enabled.
      // *   opened: The policy is enabled.
      // *   closing: The policy is being disabled.
      // *   closed: The policy is disabled.
      shared_ptr<string> policyStatus_ {};
      // The type of the traffic redirection scenario of the VPC firewall. Valid values:
      // 
      // *   **fullmesh**: interconnected instances
      // *   **one_to_one**: instance to instance
      // *   **end_to_end**: instance to instances
      shared_ptr<string> policyType_ {};
      // The primary traffic redirection instances.
      shared_ptr<vector<TrFirewallRoutePolicies::SrcCandidateList>> srcCandidateList_ {};
      // The ID of the routing policy.
      shared_ptr<string> trFirewallRoutePolicyId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->trFirewallRoutePolicies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trFirewallRoutePolicies Field Functions 
    bool hasTrFirewallRoutePolicies() const { return this->trFirewallRoutePolicies_ != nullptr;};
    void deleteTrFirewallRoutePolicies() { this->trFirewallRoutePolicies_ = nullptr;};
    inline const vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies> & getTrFirewallRoutePolicies() const { DARABONBA_PTR_GET_CONST(trFirewallRoutePolicies_, vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies>) };
    inline vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies> getTrFirewallRoutePolicies() { DARABONBA_PTR_GET(trFirewallRoutePolicies_, vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies>) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTrFirewallRoutePolicies(const vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies> & trFirewallRoutePolicies) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicies_, trFirewallRoutePolicies) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTrFirewallRoutePolicies(vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies> && trFirewallRoutePolicies) { DARABONBA_PTR_SET_RVALUE(trFirewallRoutePolicies_, trFirewallRoutePolicies) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The routing policies.
    shared_ptr<vector<DescribeTrFirewallV2RoutePolicyListResponseBody::TrFirewallRoutePolicies>> trFirewallRoutePolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
