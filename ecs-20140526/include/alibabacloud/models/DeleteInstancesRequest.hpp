// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TerminateSubscription, terminateSubscription_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TerminateSubscription, terminateSubscription_);
    };
    DeleteInstancesRequest() = default ;
    DeleteInstancesRequest(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest(DeleteInstancesRequest &&) = default ;
    DeleteInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstancesRequest() = default ;
    DeleteInstancesRequest& operator=(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest& operator=(DeleteInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->force_ == nullptr && this->forceStop_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->terminateSubscription_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteInstancesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline DeleteInstancesRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline DeleteInstancesRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline DeleteInstancesRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // terminateSubscription Field Functions 
    bool hasTerminateSubscription() const { return this->terminateSubscription_ != nullptr;};
    void deleteTerminateSubscription() { this->terminateSubscription_ = nullptr;};
    inline bool getTerminateSubscription() const { DARABONBA_PTR_GET_DEFAULT(terminateSubscription_, false) };
    inline DeleteInstancesRequest& setTerminateSubscription(bool terminateSubscription) { DARABONBA_PTR_SET_VALUE(terminateSubscription_, terminateSubscription) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request.
    // 
    // - true: sends a check request without querying resource status. The check items include whether your AccessKey pair is valid, whether Resource Access Management (RAM) user authorization is granted, and whether the required parameters are specified. If the check fails, the corresponding error is returned. If the check succeeds, the DRYRUN.SUCCESS error code is returned.
    // - false: sends a Normal request. After the check succeeds, a 2xx HTTP status code is returned and the resource status is queried directly.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully release an instance that is in the **Running** (`Running`) state.
    // 
    // - true: forcefully releases ECS instance that is in the **Running** (`Running`) state.
    // - false: releases ECS instance only when it is in the **Stopped** (`Stopped`) state.
    // 
    // Default value: false.
    // >Warning: Forceful release is equivalent to powering off ECS instance. All in-memory data and temporary data in the storage are erased and cannot be recovered..
    shared_ptr<bool> force_ {};
    // Specifies whether to forcefully shut down the instance before release when the instance is in the **Running** (`Running`) state. This parameter takes effect only when `Force=true`. Valid values:
    // 
    // - true: forcefully shuts down and releases the instance. This is equivalent to a power-off operation. The instance directly enters the resource release process.
    // >Warning: Forceful release is equivalent to powering off the instance. All in-memory data and temporary data in the storage are erased and cannot be recovered.
    // - false: performs a standard shutdown before releasing the instance. This mode causes the release process to take several minutes. You can configure service draining actions during the operating system shutdown to reduce noise in your business systems.
    // 
    // Default value: true.
    shared_ptr<bool> forceStop_ {};
    // The instance ID array. Array length: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instances. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to release an expired subscription instance.
    // 
    // - true: releases the instance.
    // - false: does not release the instance.
    // 
    // Default value: false.
    shared_ptr<bool> terminateSubscription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
