// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODY_HPP_
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
  class ListCenInterRegionTrafficQosQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueues, trafficQosQueues_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueues, trafficQosQueues_);
    };
    ListCenInterRegionTrafficQosQueuesResponseBody() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(const ListCenInterRegionTrafficQosQueuesResponseBody &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(ListCenInterRegionTrafficQosQueuesResponseBody &&) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosQueuesResponseBody() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody& operator=(const ListCenInterRegionTrafficQosQueuesResponseBody &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBody& operator=(ListCenInterRegionTrafficQosQueuesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
        DARABONBA_PTR_TO_JSON(TrafficQosQueueDescription, trafficQosQueueDescription_);
        DARABONBA_PTR_TO_JSON(TrafficQosQueueId, trafficQosQueueId_);
        DARABONBA_PTR_TO_JSON(TrafficQosQueueName, trafficQosQueueName_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficQosQueues& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
        DARABONBA_PTR_FROM_JSON(EffectiveBandwidth, effectiveBandwidth_);
        DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
        DARABONBA_PTR_FROM_JSON(TrafficQosQueueDescription, trafficQosQueueDescription_);
        DARABONBA_PTR_FROM_JSON(TrafficQosQueueId, trafficQosQueueId_);
        DARABONBA_PTR_FROM_JSON(TrafficQosQueueName, trafficQosQueueName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
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
        && this->dscps_ == nullptr && this->effectiveBandwidth_ == nullptr && this->remainBandwidthPercent_ == nullptr && this->status_ == nullptr && this->trafficQosPolicyId_ == nullptr
        && this->trafficQosQueueDescription_ == nullptr && this->trafficQosQueueId_ == nullptr && this->trafficQosQueueName_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterId_ == nullptr; };
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


      // remainBandwidthPercent Field Functions 
      bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
      void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
      inline int32_t getRemainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, 0) };
      inline TrafficQosQueues& setRemainBandwidthPercent(int32_t remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TrafficQosQueues& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trafficQosPolicyId Field Functions 
      bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
      void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
      inline string getTrafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
      inline TrafficQosQueues& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


      // trafficQosQueueDescription Field Functions 
      bool hasTrafficQosQueueDescription() const { return this->trafficQosQueueDescription_ != nullptr;};
      void deleteTrafficQosQueueDescription() { this->trafficQosQueueDescription_ = nullptr;};
      inline string getTrafficQosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueDescription_, "") };
      inline TrafficQosQueues& setTrafficQosQueueDescription(string trafficQosQueueDescription) { DARABONBA_PTR_SET_VALUE(trafficQosQueueDescription_, trafficQosQueueDescription) };


      // trafficQosQueueId Field Functions 
      bool hasTrafficQosQueueId() const { return this->trafficQosQueueId_ != nullptr;};
      void deleteTrafficQosQueueId() { this->trafficQosQueueId_ = nullptr;};
      inline string getTrafficQosQueueId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueId_, "") };
      inline TrafficQosQueues& setTrafficQosQueueId(string trafficQosQueueId) { DARABONBA_PTR_SET_VALUE(trafficQosQueueId_, trafficQosQueueId) };


      // trafficQosQueueName Field Functions 
      bool hasTrafficQosQueueName() const { return this->trafficQosQueueName_ != nullptr;};
      void deleteTrafficQosQueueName() { this->trafficQosQueueName_ = nullptr;};
      inline string getTrafficQosQueueName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueName_, "") };
      inline TrafficQosQueues& setTrafficQosQueueName(string trafficQosQueueName) { DARABONBA_PTR_SET_VALUE(trafficQosQueueName_, trafficQosQueueName) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TrafficQosQueues& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TrafficQosQueues& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The absolute bandwidth value that can be allocated to the current queue.
      // 
      // A value of **1** indicates that the QoS queue can consume at most 1 Mbit/s of inter-region bandwidth.
      shared_ptr<string> bandwidth_ {};
      // The Differentiated Services Code Point (DSCP) value that matches the current QoS queue.
      shared_ptr<vector<int32_t>> dscps_ {};
      // The actual bandwidth of the current queue.
      shared_ptr<string> effectiveBandwidth_ {};
      // The percentage of bandwidth that can be allocated to the current queue.
      // 
      // A value of **1** indicates that the QoS queue can consume at most 1% of the inter-region bandwidth.
      shared_ptr<int32_t> remainBandwidthPercent_ {};
      // The status of the QoS queue. Valid values:
      // 
      // *   **Creating**
      // *   **Active**
      // *   **Deleting**
      shared_ptr<string> status_ {};
      // The ID of the QoS policy.
      shared_ptr<string> trafficQosPolicyId_ {};
      // The description of the QoS queue.
      shared_ptr<string> trafficQosQueueDescription_ {};
      // The ID of the QoS queue.
      shared_ptr<string> trafficQosQueueId_ {};
      // The name of the QoS queue.
      shared_ptr<string> trafficQosQueueName_ {};
      // The ID of the inter-region connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->trafficQosQueues_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficQosQueues Field Functions 
    bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
    void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
    inline const vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues> & getTrafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues>) };
    inline vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues> getTrafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues>) };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setTrafficQosQueues(const vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
    inline ListCenInterRegionTrafficQosQueuesResponseBody& setTrafficQosQueues(vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the QoS queue.
    shared_ptr<vector<ListCenInterRegionTrafficQosQueuesResponseBody::TrafficQosQueues>> trafficQosQueues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
