// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_HPP_
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
  class CreateCenInterRegionTrafficQosPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenInterRegionTrafficQosPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConsoleDryRun, consoleDryRun_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueues, trafficQosQueues_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenInterRegionTrafficQosPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthGuaranteeMode, bandwidthGuaranteeMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConsoleDryRun, consoleDryRun_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyDescription, trafficQosPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyName, trafficQosPolicyName_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueues, trafficQosQueues_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateCenInterRegionTrafficQosPolicyRequest() = default ;
    CreateCenInterRegionTrafficQosPolicyRequest(const CreateCenInterRegionTrafficQosPolicyRequest &) = default ;
    CreateCenInterRegionTrafficQosPolicyRequest(CreateCenInterRegionTrafficQosPolicyRequest &&) = default ;
    CreateCenInterRegionTrafficQosPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenInterRegionTrafficQosPolicyRequest() = default ;
    CreateCenInterRegionTrafficQosPolicyRequest& operator=(const CreateCenInterRegionTrafficQosPolicyRequest &) = default ;
    CreateCenInterRegionTrafficQosPolicyRequest& operator=(CreateCenInterRegionTrafficQosPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficQosQueues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficQosQueues& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Dscps, dscps_);
        DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
        DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
        DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficQosQueues& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
        DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
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
        && this->dscps_ == nullptr && this->qosQueueDescription_ == nullptr && this->qosQueueName_ == nullptr && this->remainBandwidthPercent_ == nullptr; };
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


      // qosQueueDescription Field Functions 
      bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
      void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
      inline string getQosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
      inline TrafficQosQueues& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


      // qosQueueName Field Functions 
      bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
      void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
      inline string getQosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
      inline TrafficQosQueues& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


      // remainBandwidthPercent Field Functions 
      bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
      void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
      inline string getRemainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, "") };
      inline TrafficQosQueues& setRemainBandwidthPercent(string remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


    protected:
      // The absolute value of the inter-region bandwidth that the queue can use. Unit: Mbit/s.
      // 
      // You can create up to 10 queues in a traffic QoS policy and specify the inter-region bandwidth that each queue can use.
      // 
      // For example, if you enter 1, packets that match the queue can use up to 1 Mbit/s of the inter-region bandwidth.
      // 
      // > The sum of the absolute values of the inter-region bandwidth allocated to all queues in a traffic QoS policy cannot exceed the total inter-region bandwidth.
      shared_ptr<string> bandwidth_ {};
      // The DSCP values that match the queue.
      // 
      // You can create up to three queues in a traffic QoS policy. Each queue can match up to 60 DSCP values. Separate multiple DSCP values with commas (,).
      shared_ptr<vector<int32_t>> dscps_ {};
      // The description of the queue.
      // 
      // You can create up to 10 queues in a traffic QoS policy and add a description to each queue.
      // 
      // The description must be 1 to 256 characters in length, and can be left empty. It cannot start with http:// or https://.
      shared_ptr<string> qosQueueDescription_ {};
      // The name of the queue.
      // 
      // You can create up to three queues in a traffic QoS policy and specify a name for each queue.
      // 
      // The name must be 1 to 128 characters in length, and can be left empty. It cannot start with http:// or https://.
      shared_ptr<string> qosQueueName_ {};
      // The percentage of the inter-region bandwidth that the queue can use.
      // 
      // You can create up to 10 queues in a traffic QoS policy and specify the percentage of the inter-region bandwidth that each queue can use.
      // 
      // For example, if you enter **1**, packets that match the queue can use up to 1% of the inter-region bandwidth.
      // 
      // > The sum of the inter-region bandwidth percentages of all queues in a traffic QoS policy cannot exceed 100%.
      shared_ptr<string> remainBandwidthPercent_ {};
    };

    virtual bool empty() const override { return this->bandwidthGuaranteeMode_ == nullptr
        && this->clientToken_ == nullptr && this->consoleDryRun_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trafficQosPolicyDescription_ == nullptr && this->trafficQosPolicyName_ == nullptr && this->trafficQosQueues_ == nullptr
        && this->transitRouterAttachmentId_ == nullptr && this->transitRouterId_ == nullptr; };
    // bandwidthGuaranteeMode Field Functions 
    bool hasBandwidthGuaranteeMode() const { return this->bandwidthGuaranteeMode_ != nullptr;};
    void deleteBandwidthGuaranteeMode() { this->bandwidthGuaranteeMode_ = nullptr;};
    inline string getBandwidthGuaranteeMode() const { DARABONBA_PTR_GET_DEFAULT(bandwidthGuaranteeMode_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setBandwidthGuaranteeMode(string bandwidthGuaranteeMode) { DARABONBA_PTR_SET_VALUE(bandwidthGuaranteeMode_, bandwidthGuaranteeMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // consoleDryRun Field Functions 
    bool hasConsoleDryRun() const { return this->consoleDryRun_ != nullptr;};
    void deleteConsoleDryRun() { this->consoleDryRun_ = nullptr;};
    inline bool getConsoleDryRun() const { DARABONBA_PTR_GET_DEFAULT(consoleDryRun_, false) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setConsoleDryRun(bool consoleDryRun) { DARABONBA_PTR_SET_VALUE(consoleDryRun_, consoleDryRun) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficQosPolicyDescription Field Functions 
    bool hasTrafficQosPolicyDescription() const { return this->trafficQosPolicyDescription_ != nullptr;};
    void deleteTrafficQosPolicyDescription() { this->trafficQosPolicyDescription_ = nullptr;};
    inline string getTrafficQosPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyDescription_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosPolicyDescription(string trafficQosPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyDescription_, trafficQosPolicyDescription) };


    // trafficQosPolicyName Field Functions 
    bool hasTrafficQosPolicyName() const { return this->trafficQosPolicyName_ != nullptr;};
    void deleteTrafficQosPolicyName() { this->trafficQosPolicyName_ = nullptr;};
    inline string getTrafficQosPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyName_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosPolicyName(string trafficQosPolicyName) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyName_, trafficQosPolicyName) };


    // trafficQosQueues Field Functions 
    bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
    void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
    inline const vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> & getTrafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues>) };
    inline vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> getTrafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues>) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosQueues(const vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosQueues(vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The bandwidth guarantee mode. You can specify an absolute bandwidth value or a bandwidth percentage. Valid values:
    // 
    // - **byBandwidth**: configures the QoS queue based on an absolute bandwidth value.
    // 
    // - **byBandwidthPercent** (default): configures the QoS queue based on a bandwidth percentage.
    shared_ptr<string> bandwidthGuaranteeMode_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: prechecks the request without creating the inter-region traffic QoS policy. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, the inter-region traffic QoS policy is created.
    shared_ptr<bool> consoleDryRun_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: prechecks the request without creating the traffic QoS policy. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, the traffic QoS policy is created.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The description of the traffic QoS policy.
    // 
    // The description must be 1 to 256 characters in length, and can be left empty. It cannot start with http:// or https://.
    shared_ptr<string> trafficQosPolicyDescription_ {};
    // The name of the traffic QoS policy.
    // 
    // The name must be 1 to 128 characters in length, and can be left empty. It cannot start with http:// or https://.
    shared_ptr<string> trafficQosPolicyName_ {};
    // The information about the queues in the traffic QoS policy.
    // 
    // You can create up to three queues. To create more queues, call the CreateCenInterRegionTrafficQosQueue operation.
    shared_ptr<vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues>> trafficQosQueues_ {};
    // The ID of the inter-region connection.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterAttachmentId_ {};
    // The transit router instance ID, which is used for forward and routing.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
