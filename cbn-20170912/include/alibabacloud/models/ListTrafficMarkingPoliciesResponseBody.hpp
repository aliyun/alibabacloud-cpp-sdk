// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTrafficMarkingPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMarkingPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicies, trafficMarkingPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMarkingPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicies, trafficMarkingPolicies_);
    };
    ListTrafficMarkingPoliciesResponseBody() = default ;
    ListTrafficMarkingPoliciesResponseBody(const ListTrafficMarkingPoliciesResponseBody &) = default ;
    ListTrafficMarkingPoliciesResponseBody(ListTrafficMarkingPoliciesResponseBody &&) = default ;
    ListTrafficMarkingPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMarkingPoliciesResponseBody() = default ;
    ListTrafficMarkingPoliciesResponseBody& operator=(const ListTrafficMarkingPoliciesResponseBody &) = default ;
    ListTrafficMarkingPoliciesResponseBody& operator=(ListTrafficMarkingPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficMarkingPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficMarkingPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(MarkingDscp, markingDscp_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
        DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
        DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
        DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyStatus, trafficMarkingPolicyStatus_);
        DARABONBA_PTR_TO_JSON(TrafficMatchRules, trafficMatchRules_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficMarkingPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(MarkingDscp, markingDscp_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
        DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
        DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
        DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyStatus, trafficMarkingPolicyStatus_);
        DARABONBA_PTR_FROM_JSON(TrafficMatchRules, trafficMatchRules_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      };
      TrafficMarkingPolicies() = default ;
      TrafficMarkingPolicies(const TrafficMarkingPolicies &) = default ;
      TrafficMarkingPolicies(TrafficMarkingPolicies &&) = default ;
      TrafficMarkingPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficMarkingPolicies() = default ;
      TrafficMarkingPolicies& operator=(const TrafficMarkingPolicies &) = default ;
      TrafficMarkingPolicies& operator=(TrafficMarkingPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficMatchRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficMatchRules& obj) { 
          DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
          DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
          DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
          DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
          DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
          DARABONBA_PTR_TO_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
          DARABONBA_PTR_TO_JSON(TrafficMatchRuleId, trafficMatchRuleId_);
          DARABONBA_PTR_TO_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
          DARABONBA_PTR_TO_JSON(TrafficMatchRuleStatus, trafficMatchRuleStatus_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficMatchRules& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
          DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
          DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
          DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
          DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
          DARABONBA_PTR_FROM_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
          DARABONBA_PTR_FROM_JSON(TrafficMatchRuleId, trafficMatchRuleId_);
          DARABONBA_PTR_FROM_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
          DARABONBA_PTR_FROM_JSON(TrafficMatchRuleStatus, trafficMatchRuleStatus_);
        };
        TrafficMatchRules() = default ;
        TrafficMatchRules(const TrafficMatchRules &) = default ;
        TrafficMatchRules(TrafficMatchRules &&) = default ;
        TrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficMatchRules() = default ;
        TrafficMatchRules& operator=(const TrafficMatchRules &) = default ;
        TrafficMatchRules& operator=(TrafficMatchRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->dstCidr_ == nullptr && this->dstPortRange_ == nullptr && this->matchDscp_ == nullptr && this->protocol_ == nullptr && this->srcCidr_ == nullptr
        && this->srcPortRange_ == nullptr && this->trafficMatchRuleDescription_ == nullptr && this->trafficMatchRuleId_ == nullptr && this->trafficMatchRuleName_ == nullptr && this->trafficMatchRuleStatus_ == nullptr; };
        // addressFamily Field Functions 
        bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
        void deleteAddressFamily() { this->addressFamily_ = nullptr;};
        inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
        inline TrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


        // dstCidr Field Functions 
        bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
        void deleteDstCidr() { this->dstCidr_ = nullptr;};
        inline string getDstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
        inline TrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


        // dstPortRange Field Functions 
        bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
        void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
        inline const vector<int32_t> & getDstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
        inline vector<int32_t> getDstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
        inline TrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
        inline TrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


        // matchDscp Field Functions 
        bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
        void deleteMatchDscp() { this->matchDscp_ = nullptr;};
        inline int32_t getMatchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
        inline TrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline TrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // srcCidr Field Functions 
        bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
        void deleteSrcCidr() { this->srcCidr_ = nullptr;};
        inline string getSrcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
        inline TrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


        // srcPortRange Field Functions 
        bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
        void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
        inline const vector<int32_t> & getSrcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
        inline vector<int32_t> getSrcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
        inline TrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
        inline TrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


        // trafficMatchRuleDescription Field Functions 
        bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
        void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
        inline string getTrafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
        inline TrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


        // trafficMatchRuleId Field Functions 
        bool hasTrafficMatchRuleId() const { return this->trafficMatchRuleId_ != nullptr;};
        void deleteTrafficMatchRuleId() { this->trafficMatchRuleId_ = nullptr;};
        inline string getTrafficMatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleId_, "") };
        inline TrafficMatchRules& setTrafficMatchRuleId(string trafficMatchRuleId) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleId_, trafficMatchRuleId) };


        // trafficMatchRuleName Field Functions 
        bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
        void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
        inline string getTrafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
        inline TrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


        // trafficMatchRuleStatus Field Functions 
        bool hasTrafficMatchRuleStatus() const { return this->trafficMatchRuleStatus_ != nullptr;};
        void deleteTrafficMatchRuleStatus() { this->trafficMatchRuleStatus_ = nullptr;};
        inline string getTrafficMatchRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleStatus_, "") };
        inline TrafficMatchRules& setTrafficMatchRuleStatus(string trafficMatchRuleStatus) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleStatus_, trafficMatchRuleStatus) };


      protected:
        // The address family. You can set the value to IPv4 or IPv6, or leave the value empty.
        shared_ptr<string> addressFamily_ {};
        // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
        shared_ptr<string> dstCidr_ {};
        // The destination port range used to match data packets.
        shared_ptr<vector<int32_t>> dstPortRange_ {};
        // The DSCP value used to match data packets.
        // 
        // >  If the value of the **MatchDscp** parameter is -1, data packets are considered a match regardless of the DSCP value.
        shared_ptr<int32_t> matchDscp_ {};
        // The protocol that is used to match packets.
        // 
        // >  Traffic marking policies support multiple protocols. For more information, see the documentation of CEN.
        shared_ptr<string> protocol_ {};
        // The source CIDR block of packets. IPv6 and IPv4 addresses are supported.
        shared_ptr<string> srcCidr_ {};
        // The source port range used to match data packets.
        shared_ptr<vector<int32_t>> srcPortRange_ {};
        // The description of the traffic classification rule.
        shared_ptr<string> trafficMatchRuleDescription_ {};
        // The ID of the traffic classification rule.
        shared_ptr<string> trafficMatchRuleId_ {};
        // The name of the traffic classification rule.
        shared_ptr<string> trafficMatchRuleName_ {};
        // The status of the traffic classification rule. Valid values:
        // 
        // *   **Creating**: The rule is being created.
        // *   **Active**: The rule is available.
        // *   **Deleting**: The rule is being deleted.
        shared_ptr<string> trafficMatchRuleStatus_ {};
      };

      virtual bool empty() const override { return this->markingDscp_ == nullptr
        && this->priority_ == nullptr && this->trafficMarkingPolicyDescription_ == nullptr && this->trafficMarkingPolicyId_ == nullptr && this->trafficMarkingPolicyName_ == nullptr && this->trafficMarkingPolicyStatus_ == nullptr
        && this->trafficMatchRules_ == nullptr && this->transitRouterId_ == nullptr; };
      // markingDscp Field Functions 
      bool hasMarkingDscp() const { return this->markingDscp_ != nullptr;};
      void deleteMarkingDscp() { this->markingDscp_ = nullptr;};
      inline int32_t getMarkingDscp() const { DARABONBA_PTR_GET_DEFAULT(markingDscp_, 0) };
      inline TrafficMarkingPolicies& setMarkingDscp(int32_t markingDscp) { DARABONBA_PTR_SET_VALUE(markingDscp_, markingDscp) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TrafficMarkingPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // trafficMarkingPolicyDescription Field Functions 
      bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
      void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
      inline string getTrafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
      inline TrafficMarkingPolicies& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


      // trafficMarkingPolicyId Field Functions 
      bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
      void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
      inline string getTrafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
      inline TrafficMarkingPolicies& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


      // trafficMarkingPolicyName Field Functions 
      bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
      void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
      inline string getTrafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
      inline TrafficMarkingPolicies& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


      // trafficMarkingPolicyStatus Field Functions 
      bool hasTrafficMarkingPolicyStatus() const { return this->trafficMarkingPolicyStatus_ != nullptr;};
      void deleteTrafficMarkingPolicyStatus() { this->trafficMarkingPolicyStatus_ = nullptr;};
      inline string getTrafficMarkingPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyStatus_, "") };
      inline TrafficMarkingPolicies& setTrafficMarkingPolicyStatus(string trafficMarkingPolicyStatus) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyStatus_, trafficMarkingPolicyStatus) };


      // trafficMatchRules Field Functions 
      bool hasTrafficMatchRules() const { return this->trafficMatchRules_ != nullptr;};
      void deleteTrafficMatchRules() { this->trafficMatchRules_ = nullptr;};
      inline const vector<TrafficMarkingPolicies::TrafficMatchRules> & getTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(trafficMatchRules_, vector<TrafficMarkingPolicies::TrafficMatchRules>) };
      inline vector<TrafficMarkingPolicies::TrafficMatchRules> getTrafficMatchRules() { DARABONBA_PTR_GET(trafficMatchRules_, vector<TrafficMarkingPolicies::TrafficMatchRules>) };
      inline TrafficMarkingPolicies& setTrafficMatchRules(const vector<TrafficMarkingPolicies::TrafficMatchRules> & trafficMatchRules) { DARABONBA_PTR_SET_VALUE(trafficMatchRules_, trafficMatchRules) };
      inline TrafficMarkingPolicies& setTrafficMatchRules(vector<TrafficMarkingPolicies::TrafficMatchRules> && trafficMatchRules) { DARABONBA_PTR_SET_RVALUE(trafficMatchRules_, trafficMatchRules) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TrafficMarkingPolicies& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The Differentiated Service Code Point (DSCP) value of the traffic marking policy.
      shared_ptr<int32_t> markingDscp_ {};
      // The priority of the traffic marking policy.
      // 
      // A lower value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The description of the traffic marking policy.
      shared_ptr<string> trafficMarkingPolicyDescription_ {};
      // The ID of the traffic marking policy.
      shared_ptr<string> trafficMarkingPolicyId_ {};
      // The name of the traffic marking policy.
      shared_ptr<string> trafficMarkingPolicyName_ {};
      // The status of the traffic marking policy. Valid values:
      // 
      // *   **Creating**: The policy is being created.
      // *   **Active**: The policy is available.
      // *   **Modifying**: The policy is being modified.
      // *   **Deleting**: The policy is being deleted.
      shared_ptr<string> trafficMarkingPolicyStatus_ {};
      // The traffic classification rules.
      shared_ptr<vector<TrafficMarkingPolicies::TrafficMatchRules>> trafficMatchRules_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trafficMarkingPolicies_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMarkingPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMarkingPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficMarkingPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTrafficMarkingPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficMarkingPolicies Field Functions 
    bool hasTrafficMarkingPolicies() const { return this->trafficMarkingPolicies_ != nullptr;};
    void deleteTrafficMarkingPolicies() { this->trafficMarkingPolicies_ = nullptr;};
    inline const vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies> & getTrafficMarkingPolicies() const { DARABONBA_PTR_GET_CONST(trafficMarkingPolicies_, vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies>) };
    inline vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies> getTrafficMarkingPolicies() { DARABONBA_PTR_GET(trafficMarkingPolicies_, vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies>) };
    inline ListTrafficMarkingPoliciesResponseBody& setTrafficMarkingPolicies(const vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies> & trafficMarkingPolicies) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicies_, trafficMarkingPolicies) };
    inline ListTrafficMarkingPoliciesResponseBody& setTrafficMarkingPolicies(vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies> && trafficMarkingPolicies) { DARABONBA_PTR_SET_RVALUE(trafficMarkingPolicies_, trafficMarkingPolicies) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query.
    // 
    // *   If **NextToken** was not returned in the previous query, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the traffic marking policy.
    shared_ptr<vector<ListTrafficMarkingPoliciesResponseBody::TrafficMarkingPolicies>> trafficMarkingPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
