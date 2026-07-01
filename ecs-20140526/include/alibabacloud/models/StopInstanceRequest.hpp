// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StopInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfirmStop, confirmStop_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfirmStop, confirmStop_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
    };
    StopInstanceRequest() = default ;
    StopInstanceRequest(const StopInstanceRequest &) = default ;
    StopInstanceRequest(StopInstanceRequest &&) = default ;
    StopInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstanceRequest() = default ;
    StopInstanceRequest& operator=(const StopInstanceRequest &) = default ;
    StopInstanceRequest& operator=(StopInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirmStop_ == nullptr
        && this->dryRun_ == nullptr && this->forceStop_ == nullptr && this->hibernate_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->stoppedMode_ == nullptr; };
    // confirmStop Field Functions 
    bool hasConfirmStop() const { return this->confirmStop_ != nullptr;};
    void deleteConfirmStop() { this->confirmStop_ = nullptr;};
    inline bool getConfirmStop() const { DARABONBA_PTR_GET_DEFAULT(confirmStop_, false) };
    inline StopInstanceRequest& setConfirmStop(bool confirmStop) { DARABONBA_PTR_SET_VALUE(confirmStop_, confirmStop) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline StopInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline StopInstanceRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // hibernate Field Functions 
    bool hasHibernate() const { return this->hibernate_ != nullptr;};
    void deleteHibernate() { this->hibernate_ = nullptr;};
    inline bool getHibernate() const { DARABONBA_PTR_GET_DEFAULT(hibernate_, false) };
    inline StopInstanceRequest& setHibernate(bool hibernate) { DARABONBA_PTR_SET_VALUE(hibernate_, hibernate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline StopInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StopInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StopInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline StopInstanceRequest& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


  protected:
    // This parameter will be deprecated soon and is retained only for compatibility purposes. Ignore this parameter when you call this operation.
    shared_ptr<bool> confirmStop_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - true: performs only a dry run. The instance is not stopped. The system checks whether required parameters are specified, whether the request format is valid, whether business restrictions are met, and whether ECS inventory is sufficient. If the check fails, the corresponding error is returned. If the check succeeds, the `DryRunOperation` error code is returned.
    // - false: performs a dry run and sends the request. The instance is stopped after the check succeeds.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully stop the instance. Valid values:
    // 
    // - true: forcefully stops the instance. This is equivalent to a power-off operation. All cached data that is not written to storage devices is lost.
    // - false: normally stops the instance.
    // 
    // Default value: false.
    shared_ptr<bool> forceStop_ {};
    // > This parameter is in invitational preview and is not available for use.
    shared_ptr<bool> hibernate_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The stop mode for the pay-as-you-go ECS instance. Valid values:
    // 
    //   - StopCharging: economical mode. After the economical mode is enabled:
    //     - Billing is suspended for compute resources (vCPUs, memory, and GPUs), image license fees, and fixed bandwidth of static public IP addresses.
    //     - Billing continues for system disks, data disks, and fixed bandwidth of Elastic IP Addresses (EIPs).
    //     - Because compute resources are released, the instance may fail to restart due to insufficient inventory. Try again later or change the instance type.
    //     - If the instance is associated with an EIP before it is stopped, the IP address remains unchanged after the instance is restarted. Otherwise, the static public IP address may change, but the private IP address remains unchanged. 
    // 
    //     For more information, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
    //     >Notice: 
    // If the instance does not support the economical mode, no error is returned on the API side. Stopping the instance takes priority. Instance types that do not support the economical mode include instances with local disks and subscription instances.
    //     
    // 
    //   - KeepCharging: standard stop mode. The instance continues to be billed after it is stopped.
    // 
    // Default value: If you enable the economical mode for VPC-connected instances in the ECS console (for more information, see [Enable the economical mode by default](~~63353#default~~)) and the conditions are met, the default value is `StopCharging`. Otherwise, the default value is `KeepCharging`.
    shared_ptr<string> stoppedMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
