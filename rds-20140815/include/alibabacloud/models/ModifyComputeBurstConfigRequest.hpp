// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOMPUTEBURSTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOMPUTEBURSTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyComputeBurstConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyComputeBurstConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BurstStatus, burstStatus_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CpuEnlargeThreshold, cpuEnlargeThreshold_);
      DARABONBA_PTR_TO_JSON(CpuShrinkThreshold, cpuShrinkThreshold_);
      DARABONBA_PTR_TO_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MemoryEnlargeThreshold, memoryEnlargeThreshold_);
      DARABONBA_PTR_TO_JSON(MemoryShrinkThreshold, memoryShrinkThreshold_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScaleMaxCpus, scaleMaxCpus_);
      DARABONBA_PTR_TO_JSON(ScaleMaxMemory, scaleMaxMemory_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyComputeBurstConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BurstStatus, burstStatus_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CpuEnlargeThreshold, cpuEnlargeThreshold_);
      DARABONBA_PTR_FROM_JSON(CpuShrinkThreshold, cpuShrinkThreshold_);
      DARABONBA_PTR_FROM_JSON(CrontabJobId, crontabJobId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MemoryEnlargeThreshold, memoryEnlargeThreshold_);
      DARABONBA_PTR_FROM_JSON(MemoryShrinkThreshold, memoryShrinkThreshold_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScaleMaxCpus, scaleMaxCpus_);
      DARABONBA_PTR_FROM_JSON(ScaleMaxMemory, scaleMaxMemory_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyComputeBurstConfigRequest() = default ;
    ModifyComputeBurstConfigRequest(const ModifyComputeBurstConfigRequest &) = default ;
    ModifyComputeBurstConfigRequest(ModifyComputeBurstConfigRequest &&) = default ;
    ModifyComputeBurstConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyComputeBurstConfigRequest() = default ;
    ModifyComputeBurstConfigRequest& operator=(const ModifyComputeBurstConfigRequest &) = default ;
    ModifyComputeBurstConfigRequest& operator=(ModifyComputeBurstConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->burstStatus_ == nullptr
        && return this->clientToken_ == nullptr && return this->cpuEnlargeThreshold_ == nullptr && return this->cpuShrinkThreshold_ == nullptr && return this->crontabJobId_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->memoryEnlargeThreshold_ == nullptr && return this->memoryShrinkThreshold_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->scaleMaxCpus_ == nullptr && return this->scaleMaxMemory_ == nullptr && return this->switchTime_ == nullptr && return this->switchTimeMode_ == nullptr
        && return this->taskId_ == nullptr; };
    // burstStatus Field Functions 
    bool hasBurstStatus() const { return this->burstStatus_ != nullptr;};
    void deleteBurstStatus() { this->burstStatus_ = nullptr;};
    inline string burstStatus() const { DARABONBA_PTR_GET_DEFAULT(burstStatus_, "") };
    inline ModifyComputeBurstConfigRequest& setBurstStatus(string burstStatus) { DARABONBA_PTR_SET_VALUE(burstStatus_, burstStatus) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyComputeBurstConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cpuEnlargeThreshold Field Functions 
    bool hasCpuEnlargeThreshold() const { return this->cpuEnlargeThreshold_ != nullptr;};
    void deleteCpuEnlargeThreshold() { this->cpuEnlargeThreshold_ = nullptr;};
    inline string cpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuEnlargeThreshold_, "") };
    inline ModifyComputeBurstConfigRequest& setCpuEnlargeThreshold(string cpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(cpuEnlargeThreshold_, cpuEnlargeThreshold) };


    // cpuShrinkThreshold Field Functions 
    bool hasCpuShrinkThreshold() const { return this->cpuShrinkThreshold_ != nullptr;};
    void deleteCpuShrinkThreshold() { this->cpuShrinkThreshold_ = nullptr;};
    inline string cpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuShrinkThreshold_, "") };
    inline ModifyComputeBurstConfigRequest& setCpuShrinkThreshold(string cpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(cpuShrinkThreshold_, cpuShrinkThreshold) };


    // crontabJobId Field Functions 
    bool hasCrontabJobId() const { return this->crontabJobId_ != nullptr;};
    void deleteCrontabJobId() { this->crontabJobId_ = nullptr;};
    inline string crontabJobId() const { DARABONBA_PTR_GET_DEFAULT(crontabJobId_, "") };
    inline ModifyComputeBurstConfigRequest& setCrontabJobId(string crontabJobId) { DARABONBA_PTR_SET_VALUE(crontabJobId_, crontabJobId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyComputeBurstConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // memoryEnlargeThreshold Field Functions 
    bool hasMemoryEnlargeThreshold() const { return this->memoryEnlargeThreshold_ != nullptr;};
    void deleteMemoryEnlargeThreshold() { this->memoryEnlargeThreshold_ = nullptr;};
    inline string memoryEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(memoryEnlargeThreshold_, "") };
    inline ModifyComputeBurstConfigRequest& setMemoryEnlargeThreshold(string memoryEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(memoryEnlargeThreshold_, memoryEnlargeThreshold) };


    // memoryShrinkThreshold Field Functions 
    bool hasMemoryShrinkThreshold() const { return this->memoryShrinkThreshold_ != nullptr;};
    void deleteMemoryShrinkThreshold() { this->memoryShrinkThreshold_ = nullptr;};
    inline string memoryShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(memoryShrinkThreshold_, "") };
    inline ModifyComputeBurstConfigRequest& setMemoryShrinkThreshold(string memoryShrinkThreshold) { DARABONBA_PTR_SET_VALUE(memoryShrinkThreshold_, memoryShrinkThreshold) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyComputeBurstConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyComputeBurstConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyComputeBurstConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyComputeBurstConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scaleMaxCpus Field Functions 
    bool hasScaleMaxCpus() const { return this->scaleMaxCpus_ != nullptr;};
    void deleteScaleMaxCpus() { this->scaleMaxCpus_ = nullptr;};
    inline string scaleMaxCpus() const { DARABONBA_PTR_GET_DEFAULT(scaleMaxCpus_, "") };
    inline ModifyComputeBurstConfigRequest& setScaleMaxCpus(string scaleMaxCpus) { DARABONBA_PTR_SET_VALUE(scaleMaxCpus_, scaleMaxCpus) };


    // scaleMaxMemory Field Functions 
    bool hasScaleMaxMemory() const { return this->scaleMaxMemory_ != nullptr;};
    void deleteScaleMaxMemory() { this->scaleMaxMemory_ = nullptr;};
    inline string scaleMaxMemory() const { DARABONBA_PTR_GET_DEFAULT(scaleMaxMemory_, "") };
    inline ModifyComputeBurstConfigRequest& setScaleMaxMemory(string scaleMaxMemory) { DARABONBA_PTR_SET_VALUE(scaleMaxMemory_, scaleMaxMemory) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyComputeBurstConfigRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string switchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline ModifyComputeBurstConfigRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyComputeBurstConfigRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is set to **disabled** if the assured serverless feature is disabled.
    std::shared_ptr<string> burstStatus_ = nullptr;
    // The client token that is used to ensure the idempotence of requests and prevent repeated requests from being submitted. You can use the client to generate the value, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The CPU utilization threshold for **scale-out**. Valid values: 60 to 90. Unit: %.
    std::shared_ptr<string> cpuEnlargeThreshold_ = nullptr;
    // The CPU utilization threshold for **scale-in**. Valid values: 30 to 55. Unit: %.
    std::shared_ptr<string> cpuShrinkThreshold_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> crontabJobId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The memory usage threshold for **scale-out**. Valid values: 60 to 90. Unit: %.
    std::shared_ptr<string> memoryEnlargeThreshold_ = nullptr;
    // The memory usage threshold for **scale-in**. Valid values: 30 to 55. Unit: %.
    std::shared_ptr<string> memoryShrinkThreshold_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The maximum number of CPU cores for elastic scaling. The maximum value cannot exceed twice the initial CPU configuration.
    std::shared_ptr<string> scaleMaxCpus_ = nullptr;
    // The maximum memory for elastic scaling. The value cannot exceed twice the instance\\"s initial memory size. Unit: GB. Step size: 2 GB.
    std::shared_ptr<string> scaleMaxMemory_ = nullptr;
    // The time when the specified entry takes effect. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    // 
    // >  This parameter is required only if **SwitchTimeMode** is set to **2**.
    std::shared_ptr<string> switchTime_ = nullptr;
    // The effective policy. Valid values:
    // 
    // *   **0**: Immediately takes effect.
    // *   **1**: Takes effect within the maintenance window. You can call the **ModifyDBInstanceMaintainTime** operation to change the maintenance window of an instance.
    // *   **2**: Takes effect at a specified point in time.
    std::shared_ptr<string> switchTimeMode_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
