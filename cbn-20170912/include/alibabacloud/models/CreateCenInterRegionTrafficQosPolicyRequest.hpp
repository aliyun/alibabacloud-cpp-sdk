// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues.hpp>
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
    virtual bool empty() const override { this->bandwidthGuaranteeMode_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->trafficQosPolicyDescription_ != nullptr && this->trafficQosPolicyName_ != nullptr && this->trafficQosQueues_ != nullptr && this->transitRouterAttachmentId_ != nullptr
        && this->transitRouterId_ != nullptr; };
    // bandwidthGuaranteeMode Field Functions 
    bool hasBandwidthGuaranteeMode() const { return this->bandwidthGuaranteeMode_ != nullptr;};
    void deleteBandwidthGuaranteeMode() { this->bandwidthGuaranteeMode_ = nullptr;};
    inline string bandwidthGuaranteeMode() const { DARABONBA_PTR_GET_DEFAULT(bandwidthGuaranteeMode_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setBandwidthGuaranteeMode(string bandwidthGuaranteeMode) { DARABONBA_PTR_SET_VALUE(bandwidthGuaranteeMode_, bandwidthGuaranteeMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficQosPolicyDescription Field Functions 
    bool hasTrafficQosPolicyDescription() const { return this->trafficQosPolicyDescription_ != nullptr;};
    void deleteTrafficQosPolicyDescription() { this->trafficQosPolicyDescription_ = nullptr;};
    inline string trafficQosPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyDescription_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosPolicyDescription(string trafficQosPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyDescription_, trafficQosPolicyDescription) };


    // trafficQosPolicyName Field Functions 
    bool hasTrafficQosPolicyName() const { return this->trafficQosPolicyName_ != nullptr;};
    void deleteTrafficQosPolicyName() { this->trafficQosPolicyName_ = nullptr;};
    inline string trafficQosPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyName_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosPolicyName(string trafficQosPolicyName) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyName_, trafficQosPolicyName) };


    // trafficQosQueues Field Functions 
    bool hasTrafficQosQueues() const { return this->trafficQosQueues_ != nullptr;};
    void deleteTrafficQosQueues() { this->trafficQosQueues_ = nullptr;};
    inline const vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues> & trafficQosQueues() const { DARABONBA_PTR_GET_CONST(trafficQosQueues_, vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>) };
    inline vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues> trafficQosQueues() { DARABONBA_PTR_GET(trafficQosQueues_, vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosQueues(const vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues> & trafficQosQueues) { DARABONBA_PTR_SET_VALUE(trafficQosQueues_, trafficQosQueues) };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTrafficQosQueues(vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues> && trafficQosQueues) { DARABONBA_PTR_SET_RVALUE(trafficQosQueues_, trafficQosQueues) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateCenInterRegionTrafficQosPolicyRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The allocation mode of the guaranteed bandwidth. You can specify an absolute bandwidth value or a bandwidth percentage. Valid values:
    // 
    // *   **byBandwidth**: allocates an absolute bandwidth value for the QoS queue.
    // *   **byBandwidthPercent** (default): allocates a bandwidth percentage for the OoS queue.
    std::shared_ptr<string> bandwidthGuaranteeMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether only to precheck the API request. Valid values:
    // 
    // *   **true**: prechecks the request but does not create the QoS policy. The system checks the required parameters, the request format, and the service limits. If the request fails the check, an error message is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // *   **false**: sends the API request. If the request passes the precheck, the QoS policy is created. This is the default value.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The description of the QoS policy.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficQosPolicyDescription_ = nullptr;
    // The name of the QoS policy.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficQosPolicyName_ = nullptr;
    // The information about the QoS queue.
    // 
    // You can add at most three QoS queues in a QoS policy by calling this operation. To add more QoS queues, call the CreateCenInterRegionTrafficQosQueue operation.
    std::shared_ptr<vector<CreateCenInterRegionTrafficQosPolicyRequestTrafficQosQueues>> trafficQosQueues_ = nullptr;
    // The ID of the inter-region connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
