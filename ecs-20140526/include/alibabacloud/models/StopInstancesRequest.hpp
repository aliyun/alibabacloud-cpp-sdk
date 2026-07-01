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
    // The batch operation mode. Valid values:
    // 
    // - AllTogether: All operations must succeed for the entire batch operation to be considered successful. If any operation fails, the entire batch operation fails and all completed operations are rolled back to the previous state.
    // 
    // - SuccessFirst: Each operation in the batch is executed independently. If an operation fails, other operations can still be executed and confirmed as successful. Successful operations are committed, and failed operations are marked as failed without affecting the results of other operations.
    // 
    // Default value: AllTogether.
    shared_ptr<string> batchOptimization_ {};
    // Specifies whether to send a dry run request. Valid values:
    // 
    // - true: sends a dry run request without stopping the instances. The system checks the required parameters, request format, and instance status. If the check fails, the corresponding error is returned. If the check succeeds, `DRYRUN.SUCCESS` is returned.
    // > If the BatchOptimization parameter is set to `SuccessFirst`, the dry run result for `DryRun=true` returns only `DRYRUN.SUCCESS`.
    // 
    // - false: sends a normal request. After the request passes the check, the instances are stopped.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully stop the instances. Valid values:
    // 
    // - true: forcefully stops the instances.
    //   >Warning: A forced stop is equivalent to a power-off. Data that is not written to disks in the instance operating system may be lost. Proceed with caution.
    // - false: normally stops the instances.
    // 
    // Default value: false.
    shared_ptr<bool> forceStop_ {};
    // The instance IDs. Array length: 1 to 100.
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
    // The stop mode. Valid values:
    //   - StopCharging: economical mode. After economical mode is enabled:
    //     - Billing for compute resources (vCPUs, memory, and GPUs), image license fees, and fixed bandwidth of static public IP addresses is suspended.
    //     - Billing for system disks, data disks, and fixed bandwidth of Elastic IP Addresses (EIPs) continues.
    //     - Because compute resources are released, the instance may fail to start due to insufficient resources. Try again later or change the instance type.
    //     - If an EIP is associated with the instance before it is stopped, the IP address remains unchanged after the instance is restarted. Otherwise, the static public IP address may change, but the private IP address remains unchanged. 
    // 
    //     For more information, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
    //     >Notice: 
    // If the instance does not support economical mode, the API does not return an error. Stopping the instance takes priority. Instance types that do not support economical mode include instances with local SSDs and subscription instances.
    //     
    // 
    //   - KeepCharging: standard stop mode. After the instance is stopped, resources are retained and billing continues. The instance type inventory and public IP address are also retained. If you stop the instance to replace the operating system, reinitialize a disk, change the instance type, or modify the private IP address, select this mode to avoid startup failures.
    // 
    // Default value: If you [enable economical mode for VPC-connected instances](~~63353#default~~) and the conditions are met, the default value is `StopCharging`. Otherwise, the default value is `KeepCharging`.
    shared_ptr<string> stoppedMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
