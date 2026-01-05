// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCESREQUEST_HPP_
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
  class StopInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
    };
    StopInstancesRequest() = default ;
    StopInstancesRequest(const StopInstancesRequest &) = default ;
    StopInstancesRequest(StopInstancesRequest &&) = default ;
    StopInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstancesRequest() = default ;
    StopInstancesRequest& operator=(const StopInstancesRequest &) = default ;
    StopInstancesRequest& operator=(StopInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchOptimization_ == nullptr
        && this->dryRun_ == nullptr && this->forceStop_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->stoppedMode_ == nullptr; };
    // batchOptimization Field Functions 
    bool hasBatchOptimization() const { return this->batchOptimization_ != nullptr;};
    void deleteBatchOptimization() { this->batchOptimization_ = nullptr;};
    inline string getBatchOptimization() const { DARABONBA_PTR_GET_DEFAULT(batchOptimization_, "") };
    inline StopInstancesRequest& setBatchOptimization(string batchOptimization) { DARABONBA_PTR_SET_VALUE(batchOptimization_, batchOptimization) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline StopInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline StopInstancesRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline StopInstancesRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline StopInstancesRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline StopInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StopInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StopInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline StopInstancesRequest& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


  protected:
    // Specifies the batch operation mode. Valid values:
    // 
    // *   AllTogether: The batch operation is successful only after all operations are successful. If any operation fails, the batch operation is considered failed, and all operations that have been performed are undone to restore the instances to the status before the batch operation.
    // *   SuccessFirst: allows each operation in a batch to be independently executed. If an operation fails, other operations can continue and confirm success. In this mode, successful operations are committed and failed operations are marked as failed, but the execution results of other operations are not affected.
    // 
    // Default value: AllTogether.
    shared_ptr<string> batchOptimization_ {};
    // Specifies whether to send a precheck request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and instance status. If the check fails, the corresponding error message is returned. If the request passes the dry run, `DRYRUN.SUCCESS` is returned.
    // 
    // >  If you set `BatchOptimization` to `SuccessFirst` and `DryRun` to true, only `DRYRUN.SUCCESS` is returned, regardless of whether the request passes the dry run.
    // 
    // *   false: performs a dry run and performs the actual request. If the request passes the dry run, instances are stopped.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully stop instances. Valid values:
    // 
    // *   true: forcefully stops the ECS instance.
    // 
    //     **
    // 
    //     **Alert** Force Stop: forcefully stops the instance. A force stop is equivalent to a physical shutdown and may cause data loss if instance data has not been written to disks.
    // 
    // *   false: normally stops the ECS instance.
    // 
    // Default value: false.
    shared_ptr<bool> forceStop_ {};
    // The IDs of ECS instances. You can specify 1 to 100 instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Stop mode. Valid values:
    // 
    // *   StopCharging: economical mode. After an instance is stopped in economical mode:
    // 
    //     *   Billing for the following resources of the instance stops: computing resources (vCPUs, memory, and GPUs), image licenses, and public bandwidth of the static public IP address (if any) that uses the pay-by-bandwidth metering method.
    //     *   Billing for the following resources of the instance continues: system disk, data disks, and public bandwidth of the elastic IP address (EIP) (if any) that uses the pay-by-bandwidth metering method.
    //     *   The instance may fail to restart due to the reclaimed computing resources or insufficient resources. Try again later or change the instance type of the instance.
    //     *   If an EIP is associated with the instance before the instance is stopped, the EIP remains unchanged after the instance is restarted. If a static public IP address is associated with the instance before the instance is stopped, the static public IP address may change, but the private IP address does not change.
    // 
    //     For more information, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
    // 
    //     **
    // 
    //     **Note** If the instance itself does not support the economical shutdown mode, the API side does not intercept errors, and the instance is preferentially stopped. The following types of instances are not supported: classic network instances, local disks, and monthly instances.
    // 
    // *   KeepCharging: standard mode. After the instance is stopped in standard mode, you continue to be charged for the instance. If you want to change the operating system, re-initialize disks, change the instance type, or modify the private IP address, we recommend selecting this mode to avoid startup failures.
    // 
    // Default value: If the conditions for [enabling the economical mode for an instance in a VPC](~~63353#default~~) are met and you have enabled this mode in the ECS console, the default value is `StopCharging`. Otherwise, the default value is `KeepCharging`.
    shared_ptr<string> stoppedMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
