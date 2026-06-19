// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TerminateSubscription, terminateSubscription_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TerminateSubscription, terminateSubscription_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->force_ == nullptr && this->forceStop_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->terminateSubscription_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteInstanceRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline DeleteInstanceRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // terminateSubscription Field Functions 
    bool hasTerminateSubscription() const { return this->terminateSubscription_ != nullptr;};
    void deleteTerminateSubscription() { this->terminateSubscription_ = nullptr;};
    inline bool getTerminateSubscription() const { DARABONBA_PTR_GET_DEFAULT(terminateSubscription_, false) };
    inline DeleteInstanceRequest& setTerminateSubscription(bool terminateSubscription) { DARABONBA_PTR_SET_VALUE(terminateSubscription_, terminateSubscription) };


  protected:
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - true: Sends a check request without releasing the instance. The system checks whether the required parameters are specified, the request format is valid, business requirements are met, and ECS resources are sufficient. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    // - false (default): Sends a normal request. After the request passes the check, the instance is directly deleted.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully release a **running** (`Running`) instance.
    // 
    // - true: Forcefully releases a **running** (`Running`) instance.
    // - false: Releases the instance in the normal way. The instance must be in the **Stopped** (`Stopped`) state.
    // 
    // Default value: false.
    // >Warning: A forceful release is equivalent to a power-off. Temporary data in the instance memory and storage is erased and cannot be recovered..
    shared_ptr<bool> force_ {};
    // Specifies whether to use the forced shutdown policy when releasing a **running** (`Running`) instance. This parameter takes effect only when `Force=true`. Valid values:
    // 
    // - true: Forcefully shuts down and releases the instance. This is equivalent to a typical power-off operation. The instance directly enters the resource release process.
    // >Warning: A forceful release is equivalent to a power-off. Temporary data in the instance memory and storage is erased and cannot be recovered.
    // - false: Before the instance is released, the system preferentially performs a standard shutdown process. This mode causes the instance release to take several minutes. You can configure service draining actions during the operating system shutdown to reduce noise in your business systems.
    // 
    // Default value: true.
    shared_ptr<bool> forceStop_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to release an expired subscription instance.
    // 
    // - true: Releases the instance.
    // - false: Does not release the instance.
    // 
    // Default value: false.
    shared_ptr<bool> terminateSubscription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
