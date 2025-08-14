// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSQUEUEREQUEST_HPP_
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
  class CreateCenInterRegionTrafficQosQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenInterRegionTrafficQosQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Dscps, dscps_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenInterRegionTrafficQosQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_FROM_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
    };
    CreateCenInterRegionTrafficQosQueueRequest() = default ;
    CreateCenInterRegionTrafficQosQueueRequest(const CreateCenInterRegionTrafficQosQueueRequest &) = default ;
    CreateCenInterRegionTrafficQosQueueRequest(CreateCenInterRegionTrafficQosQueueRequest &&) = default ;
    CreateCenInterRegionTrafficQosQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenInterRegionTrafficQosQueueRequest() = default ;
    CreateCenInterRegionTrafficQosQueueRequest& operator=(const CreateCenInterRegionTrafficQosQueueRequest &) = default ;
    CreateCenInterRegionTrafficQosQueueRequest& operator=(CreateCenInterRegionTrafficQosQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->dscps_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->qosQueueDescription_ != nullptr && this->qosQueueName_ != nullptr && this->remainBandwidthPercent_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->trafficQosPolicyId_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dscps Field Functions 
    bool hasDscps() const { return this->dscps_ != nullptr;};
    void deleteDscps() { this->dscps_ = nullptr;};
    inline const vector<int32_t> & dscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
    inline vector<int32_t> dscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosQueueDescription Field Functions 
    bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
    void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
    inline string qosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


    // qosQueueName Field Functions 
    bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
    void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
    inline string qosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


    // remainBandwidthPercent Field Functions 
    bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
    void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
    inline string remainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setRemainBandwidthPercent(string remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenInterRegionTrafficQosQueueRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficQosPolicyId Field Functions 
    bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
    void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
    inline string trafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
    inline CreateCenInterRegionTrafficQosQueueRequest& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


  protected:
    // The maximum absolute bandwidth value that can be allocated to the queue. Unit: Mbit/s.
    // 
    // - The value specifies an absolute bandwidth. For example, a value of 20 specifies that the queue can consume at most 20 Mbit/s of bandwidth.
    // - The sum of the bandwidth values specified for all queues that belong to the same inter-region connection cannot exceed the maximum bandwidth of the inter-region connection.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, the request format, and the service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The differentiated services code point (DSCP) value that matches the current queue.
    // 
    // You can specify at most 20 DSCP values for a queue in each call. Separate DSCP values with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> dscps_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The description of the queue.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> qosQueueDescription_ = nullptr;
    // The name of the queue.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> qosQueueName_ = nullptr;
    // The maximum percentage of inter-region bandwidth that can be allocated to the queue.
    // 
    // - Unit: percentage. For example, a value of 20 specifies that the queue can consume at most 20% of inter-region bandwidth.
    // - The sum of the percentage values specified for all queues that belong to the same inter-region connection cannot exceed 100%.
    std::shared_ptr<string> remainBandwidthPercent_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the QoS policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficQosPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
