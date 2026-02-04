// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESPONSEBODY_HPP_
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
  class ListCenInterRegionTrafficQosPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicies, trafficQosPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicies, trafficQosPolicies_);
    };
    ListCenInterRegionTrafficQosPoliciesResponseBody() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(const ListCenInterRegionTrafficQosPoliciesResponseBody &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(ListCenInterRegionTrafficQosPoliciesResponseBody &&) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosPoliciesResponseBody() = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody& operator=(const ListCenInterRegionTrafficQosPoliciesResponseBody &) = default ;
    ListCenInterRegionTrafficQosPoliciesResponseBody& operator=(ListCenInterRegionTrafficQosPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficQosPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficQosPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
        DARABONBA_PTR_TO_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
        DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
        DARABONBA_PTR_TO_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
        DARABONBA_PTR_TO_JSON(TrafficQosPolicyStatus, trafficQosPolicyStatus_);
        DARABONBA_PTR_TO_JSON(TrafficQosQueues, trafficQosQueues_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficQosPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
        DARABONBA_PTR_FROM_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
        DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
        DARABONBA_PTR_FROM_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
        DARABONBA_PTR_FROM_JSON(TrafficQosPolicyStatus, trafficQosPolicyStatus_);
        DARABONBA_PTR_FROM_JSON(TrafficQosQueues, trafficQosQueues_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      };
      TrafficQosPolicies() = default ;
      TrafficQosPolicies(const TrafficQosPolicies &) = default ;
      TrafficQosPolicies(TrafficQosPolicies &&) = default ;
      TrafficQosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficQosPolicies() = default ;
      TrafficQosPolicies& operator=(const TrafficQosPolicies &) = default ;
      TrafficQosPolicies& operator=(TrafficQosPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficQosQueues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficQosQueues& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Dscps, dscps_);
          DARABONBA_PTR_TO_JSON(EffectiveBandwidth, effectiveBandwidth_);
          DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
          DARABONBA_PTR_TO_JSON(QosQueueId, qosQueueId_);
          DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
          DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficQosQueues& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
          DARABONBA_PTR_FROM_JSON(EffectiveBandwidth, effectiveBandwidth_);
          DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
          DARABONBA_PTR_FROM_JSON(QosQueueId, qosQueueId_);
          DARABONBA_PTR_FROM_JSON(QosQueueName, qosQueueName_);
          DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
        };
        TrafficQosQueues() = default ;
        TrafficQosQueues(const TrafficQosQueues &) = default ;
        TrafficQosQueues(TrafficQosQueues &&) = default ;
        TrafficQosQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficQosQueues() = default ;
        TrafficQosQueues& operator=(const TrafficQosQueues &) = default ;
        TrafficQosQueues& operator=(TrafficQosQueues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->dscps_ == nullptr && this->effectiveBandwidth_ == nullptr && this->qosQueueDescription_ == nullptr && this->qosQueueId_ == nullptr && this->qosQueueName_ == nullptr
        && this->remainBandwidthPercent_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline TrafficQosQueues& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // dscps Field Functions 
        bool hasDscps() const { return this->dscps_ != nullptr;};
        void deleteDscps() { this->dscps_ = nullptr;};
        inline const vector<int32_t> & getDscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
        inline vector<int32_t> getDscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
        inline TrafficQosQueues& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
        inline TrafficQosQueues& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


        // effectiveBandwidth Field Functions 
        bool hasEffectiveBandwidth() const { return this->effectiveBandwidth_ != nullptr;};
        void deleteEffectiveBandwidth() { this->effectiveBandwidth_ = nullptr;};
        inline string getEffectiveBandwidth() const { DARABONBA_PTR_GET_DEFAULT(effectiveBandwidth_, "") };
        inline TrafficQosQueues& setEffectiveBandwidth(string effectiveBandwidth) { DARABONBA_PTR_SET_VALUE(effectiveBandwidth_, effectiveBandwidth) };


        // qosQueueDescription Field Functions 
        bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
        void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
        inline string getQosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
        inline TrafficQosQueues& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


        // qosQueueId Field Functions 
        bool hasQosQueueId() const { return this->qosQueueId_ != nullptr;};
        void deleteQosQueueId() { this->qosQueueId_ = nullptr;};
        inline string getQosQueueId() const { DARABONBA_PTR_GET_DEFAULT(qosQueueId_, "") };
        inline TrafficQosQueues& setQosQueueId(string qosQueueId) { DARABONBA_PTR_SET_VALUE(qosQueueId_, qosQueueId) };


        // qosQueueName Field Functions 
        bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
        void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
        inline string getQosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
        inline TrafficQosQueues& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


        // remainBandwidthPercent Field Functions 
        bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
        void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
        inline int32_t getRemainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, 0) };
        inline TrafficQosQueues& setRemainBandwidthPercent(int32_t remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


      protected:
        // If the QoS queues are assigned absolute bandwidth values, this parameter indicates the absolute bandwidth value that is allocated to the queue.
        shared_ptr<string> bandwidth_ {};
        // The differentiated services code point (DSCP) value that is used to match packets.
        shared_ptr<vector<int32_t>> dscps_ {};
        // The actual bandwidth value of the current queue.
        shared_ptr<string> effectiveBandwidth_ {};
        // The description of the queue.
        shared_ptr<string> qosQueueDescription_ {};
        // The queue ID.
        shared_ptr<string> qosQueueId_ {};
        // The name of the queue.
        shared_ptr<string> qosQueueName_ {};
        // If the QoS queues are assigned bandwidth percentages, this parameter indicates the percentage of bandwidth that is allocated to the queue.
        shared_ptr<int32_t> remainBandwidthPercent_ {};
      };

      virtual bool empty() const override { return this->bandwidthGuaranteeMode_ == nullptr
        && this->trafficQosPolicyDescription_ == nullptr && this->trafficQosPolicyId_ == nullptr && this->trafficQosPolicyName_ == nullptr && this->trafficQosPolicyStatus_ == nullptr && this->trafficQosQueues_ == nullptr
        && this->transitRouterAttachmentId_ == nullptr && this->transitRouterId_ == nullptr; };
      // bandwidthGuaranteeMode Field Functions 
      bool hasBandwidthGuaranteeMode() const { return this->bandwidthGuaranteeMode_ != nullptr;};
      void deleteBandwidthGuaranteeMode() { this->bandwidthGuaranteeMode_ = nullptr;};
      inline string getBandwidthGuaranteeMode() const { DARABONBA_PTR_GET_DEFAULT(bandwidthGuaranteeMode_, "") };
      inline TrafficQosPolicies& setBandwidthGuaranteeMode(string bandwidthGuaranteeMode) { DARABONBA_PTR_SET_VALUE(bandwidthGuaranteeMode_, bandwidthGuaranteeMode) };


      // trafficQosPolicyDescription Field Functions 
      bool hasTrafficQosPolicyDescription() const { return this->trafficQosPolicyDescription_ != nullptr;};
      void deleteTrafficQosPolicyDescription() { this->trafficQosPolicyDescription_ = nullptr;};
      inline string getTrafficQosPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyDescription_, "") };
      inline TrafficQosPolicies& setTrafficQosPolicyDescription(string trafficQosPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyDescription_, trafficQosPolicyDescription) };


      // trafficQosPolicyId Field Functions 
      bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
      void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
      inline string getTrafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
      inline TrafficQosPolicies& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


      // trafficQosPolicyName Field Functions 
      bool hasTrafficQosPolicyName() const { return this->trafficQosPolicyName_ != nullptr;};
      void deleteTrafficQosPolicyName() { this->trafficQosPolicyName_ = nullptr;};
      inline string getTrafficQosPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyName_, "") };
      inline TrafficQosPolicies& setTrafficQosPolicyName(string trafficQosPolicyName) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyName_, trafficQosPolicyName) };


      // trafficQosPolicyStatus Field Functions 
      bool hasTrafficQosPolicyStatus() const { return this->trafficQosPolicyStatus_ != nullptr;};
      void deleteTrafficQosPolicyStatus() { this->trafficQosPolicyStatus_ = nullptr;};
      inline string getTrafficQosPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyStatus_, "") };
      inline TrafficQosPolicies& setTrafficQosPolicyStatus(string trafficQosPolicyStatus) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyStatus_, trafficQosPolicyStatus) };


      // trafficQosQueues Field Functions 
      bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
      void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
      inline const vector<TrafficQosPolicies::TrafficQosQueues> & getTrafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<TrafficQosPolicies::TrafficQosQueues>) };
      inline vector<TrafficQosPolicies::TrafficQosQueues> getTrafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<TrafficQosPolicies::TrafficQosQueues>) };
      inline TrafficQosPolicies& setTrafficQosQueues(const vector<TrafficQosPolicies::TrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
      inline TrafficQosPolicies& setTrafficQosQueues(vector<TrafficQosPolicies::TrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TrafficQosPolicies& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TrafficQosPolicies& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The guaranteed bandwidth mode.
      // 
      // *   **byBandwidth**: allocates absolute bandwidth values to QoS queues.
      // *   **byBandwidthPercent**: assigns bandwidth percentages to QoS queues.
      shared_ptr<string> bandwidthGuaranteeMode_ {};
      // The description of the QoS policy.
      shared_ptr<string> trafficQosPolicyDescription_ {};
      // The ID of the QoS policy.
      shared_ptr<string> trafficQosPolicyId_ {};
      // The name of the QoS policy.
      shared_ptr<string> trafficQosPolicyName_ {};
      // The status of the QoS policy.
      // 
      // *   **Creating**: The QoS policy is being created.
      // *   **Active**: The QoS policy is available.
      // *   **Modifying**: The policy is being modified.
      // *   **Deleting**: The QoS policy is being deleted.
      shared_ptr<string> trafficQosPolicyStatus_ {};
      // A list of queues.
      shared_ptr<vector<TrafficQosPolicies::TrafficQosQueues>> trafficQosQueues_ {};
      // The ID of the network instance connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trafficQosPolicies_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficQosPolicies Field Functions 
    bool hasTrafficQosPolicies() const { return this->trafficQosPolicies_ != nullptr;};
    void deleteTrafficQosPolicies() { this->trafficQosPolicies_ = nullptr;};
    inline const vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies> & getTrafficQosPolicies() const { DARABONBA_PTR_GET_CONST(trafficQosPolicies_, vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies>) };
    inline vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies> getTrafficQosPolicies() { DARABONBA_PTR_GET(trafficQosPolicies_, vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies>) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTrafficQosPolicies(const vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies> & trafficQosPolicies) { DARABONBA_PTR_SET_VALUE(trafficQosPolicies_, trafficQosPolicies) };
    inline ListCenInterRegionTrafficQosPoliciesResponseBody& setTrafficQosPolicies(vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies> && trafficQosPolicies) { DARABONBA_PTR_SET_RVALUE(trafficQosPolicies_, trafficQosPolicies) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query.
    // 
    // *   If **NextToken** was not returned in the previous query, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of QoS policies.
    shared_ptr<vector<ListCenInterRegionTrafficQosPoliciesResponseBody::TrafficQosPolicies>> trafficQosPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
