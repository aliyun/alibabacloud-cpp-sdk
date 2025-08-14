// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECENINTERREGIONTRAFFICQOSQUEUEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECENINTERREGIONTRAFFICQOSQUEUEATTRIBUTEREQUEST_HPP_
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
  class UpdateCenInterRegionTrafficQosQueueAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCenInterRegionTrafficQosQueueAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Dscps, dscps_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_TO_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_TO_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_TO_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCenInterRegionTrafficQosQueueAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Dscps, dscps_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosQueueDescription, qosQueueDescription_);
      DARABONBA_PTR_FROM_JSON(QosQueueId, qosQueueId_);
      DARABONBA_PTR_FROM_JSON(QosQueueName, qosQueueName_);
      DARABONBA_PTR_FROM_JSON(RemainBandwidthPercent, remainBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateCenInterRegionTrafficQosQueueAttributeRequest() = default ;
    UpdateCenInterRegionTrafficQosQueueAttributeRequest(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &) = default ;
    UpdateCenInterRegionTrafficQosQueueAttributeRequest(UpdateCenInterRegionTrafficQosQueueAttributeRequest &&) = default ;
    UpdateCenInterRegionTrafficQosQueueAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCenInterRegionTrafficQosQueueAttributeRequest() = default ;
    UpdateCenInterRegionTrafficQosQueueAttributeRequest& operator=(const UpdateCenInterRegionTrafficQosQueueAttributeRequest &) = default ;
    UpdateCenInterRegionTrafficQosQueueAttributeRequest& operator=(UpdateCenInterRegionTrafficQosQueueAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->dscps_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->qosQueueDescription_ != nullptr && this->qosQueueId_ != nullptr && this->qosQueueName_ != nullptr && this->remainBandwidthPercent_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dscps Field Functions 
    bool hasDscps() const { return this->dscps_ != nullptr;};
    void deleteDscps() { this->dscps_ = nullptr;};
    inline const vector<int32_t> & dscps() const { DARABONBA_PTR_GET_CONST(dscps_, vector<int32_t>) };
    inline vector<int32_t> dscps() { DARABONBA_PTR_GET(dscps_, vector<int32_t>) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setDscps(const vector<int32_t> & dscps) { DARABONBA_PTR_SET_VALUE(dscps_, dscps) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setDscps(vector<int32_t> && dscps) { DARABONBA_PTR_SET_RVALUE(dscps_, dscps) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosQueueDescription Field Functions 
    bool hasQosQueueDescription() const { return this->qosQueueDescription_ != nullptr;};
    void deleteQosQueueDescription() { this->qosQueueDescription_ = nullptr;};
    inline string qosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(qosQueueDescription_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setQosQueueDescription(string qosQueueDescription) { DARABONBA_PTR_SET_VALUE(qosQueueDescription_, qosQueueDescription) };


    // qosQueueId Field Functions 
    bool hasQosQueueId() const { return this->qosQueueId_ != nullptr;};
    void deleteQosQueueId() { this->qosQueueId_ = nullptr;};
    inline string qosQueueId() const { DARABONBA_PTR_GET_DEFAULT(qosQueueId_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setQosQueueId(string qosQueueId) { DARABONBA_PTR_SET_VALUE(qosQueueId_, qosQueueId) };


    // qosQueueName Field Functions 
    bool hasQosQueueName() const { return this->qosQueueName_ != nullptr;};
    void deleteQosQueueName() { this->qosQueueName_ = nullptr;};
    inline string qosQueueName() const { DARABONBA_PTR_GET_DEFAULT(qosQueueName_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setQosQueueName(string qosQueueName) { DARABONBA_PTR_SET_VALUE(qosQueueName_, qosQueueName) };


    // remainBandwidthPercent Field Functions 
    bool hasRemainBandwidthPercent() const { return this->remainBandwidthPercent_ != nullptr;};
    void deleteRemainBandwidthPercent() { this->remainBandwidthPercent_ = nullptr;};
    inline string remainBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(remainBandwidthPercent_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setRemainBandwidthPercent(string remainBandwidthPercent) { DARABONBA_PTR_SET_VALUE(remainBandwidthPercent_, remainBandwidthPercent) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateCenInterRegionTrafficQosQueueAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The absolute bandwidth value that can be allocated to the current queue. Unit: Mbit/s.
    // 
    // Enter a number. You do not need to enter a unit.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The differentiated services code point (DSCP) value used to match packets in the queue.
    std::shared_ptr<vector<int32_t>> dscps_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The new description of the queue.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> qosQueueDescription_ = nullptr;
    // The queue ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> qosQueueId_ = nullptr;
    // The new name of the queue.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> qosQueueName_ = nullptr;
    // The percentage of bandwidth that can be allocated to the current queue.
    // 
    // Enter a number. You do not need to enter a percent sign (%).
    std::shared_ptr<string> remainBandwidthPercent_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
