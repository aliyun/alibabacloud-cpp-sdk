// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODYTRAFFICQOSQUEUES_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESRESPONSEBODYTRAFFICQOSQUEUES_HPP_
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
  class ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& obj) { 
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
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues(const ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues(ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues &&) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues() = default ;
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& operator=(const ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues &) = default ;
    ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& operator=(ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->dscps_ != nullptr && this->effectiveBandwidth_ != nullptr && this->remainBandwidthPercent_ != nullptr && this->status_ != nullptr && this->trafficQosPolicyId_ != nullptr
        && this->trafficQosQueueDescription_ != nullptr && this->trafficQosQueueId_ != nullptr && this->trafficQosQueueName_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // dscps Field Functions 
    bool hasDscps() const { return this->dscps_ != nullptr;};
    void deleteDscps() { this->dscps_ = nullptr;};
    inline const vector<int32_t> & dscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
    inline vector<int32_t> dscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


    // effectiveBandwidth Field Functions 
    bool hasEffectiveBandwidth() const { return this->effectiveBandwidth_ != nullptr;};
    void deleteEffectiveBandwidth() { this->effectiveBandwidth_ = nullptr;};
    inline string effectiveBandwidth() const { DARABONBA_PTR_GET_DEFAULT(effectiveBandwidth_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setEffectiveBandwidth(string effectiveBandwidth) { DARABONBA_PTR_SET_VALUE(effectiveBandwidth_, effectiveBandwidth) };


    // remainBandwidthPercent Field Functions 
    bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
    void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
    inline int32_t remainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, 0) };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setRemainBandwidthPercent(int32_t remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trafficQosPolicyId Field Functions 
    bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
    void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
    inline string trafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


    // trafficQosQueueDescription Field Functions 
    bool hasTrafficQosQueueDescription() const { return this->trafficQosQueueDescription_ != nullptr;};
    void deleteTrafficQosQueueDescription() { this->trafficQosQueueDescription_ = nullptr;};
    inline string trafficQosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueDescription_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTrafficQosQueueDescription(string trafficQosQueueDescription) { DARABONBA_PTR_SET_VALUE(trafficQosQueueDescription_, trafficQosQueueDescription) };


    // trafficQosQueueId Field Functions 
    bool hasTrafficQosQueueId() const { return this->trafficQosQueueId_ != nullptr;};
    void deleteTrafficQosQueueId() { this->trafficQosQueueId_ = nullptr;};
    inline string trafficQosQueueId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTrafficQosQueueId(string trafficQosQueueId) { DARABONBA_PTR_SET_VALUE(trafficQosQueueId_, trafficQosQueueId) };


    // trafficQosQueueName Field Functions 
    bool hasTrafficQosQueueName() const { return this->trafficQosQueueName_ != nullptr;};
    void deleteTrafficQosQueueName() { this->trafficQosQueueName_ = nullptr;};
    inline string trafficQosQueueName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueName_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTrafficQosQueueName(string trafficQosQueueName) { DARABONBA_PTR_SET_VALUE(trafficQosQueueName_, trafficQosQueueName) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListCenInterRegionTrafficQosQueuesResponseBodyTrafficQosQueues& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The absolute bandwidth value that can be allocated to the current queue.
    // 
    // A value of **1** indicates that the QoS queue can consume at most 1 Mbit/s of inter-region bandwidth.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The Differentiated Services Code Point (DSCP) value that matches the current QoS queue.
    std::shared_ptr<vector<int32_t>> dscps_ = nullptr;
    // The actual bandwidth of the current queue.
    std::shared_ptr<string> effectiveBandwidth_ = nullptr;
    // The percentage of bandwidth that can be allocated to the current queue.
    // 
    // A value of **1** indicates that the QoS queue can consume at most 1% of the inter-region bandwidth.
    std::shared_ptr<int32_t> remainBandwidthPercent_ = nullptr;
    // The status of the QoS queue. Valid values:
    // 
    // *   **Creating**
    // *   **Active**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyId_ = nullptr;
    // The description of the QoS queue.
    std::shared_ptr<string> trafficQosQueueDescription_ = nullptr;
    // The ID of the QoS queue.
    std::shared_ptr<string> trafficQosQueueId_ = nullptr;
    // The name of the QoS queue.
    std::shared_ptr<string> trafficQosQueueName_ = nullptr;
    // The ID of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
