// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& obj) { 
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_TO_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostOwnerId, dedicatedHostOwnerId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_TO_JSON(HostDetailInfo, hostDetailInfo_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(MachineId, machineId_);
      DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PhysicalGpus, physicalGpus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SaleCycle, saleCycle_);
      DARABONBA_PTR_TO_JSON(Sockets, sockets_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedCustomInstanceTypeFamilies, supportedCustomInstanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& obj) { 
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostOwnerId, dedicatedHostOwnerId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_FROM_JSON(HostDetailInfo, hostDetailInfo_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(MachineId, machineId_);
      DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PhysicalGpus, physicalGpus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SaleCycle, saleCycle_);
      DARABONBA_PTR_FROM_JSON(Sockets, sockets_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedCustomInstanceTypeFamilies, supportedCustomInstanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schedulerOptions_ != nullptr
        && this->actionOnMaintenance_ != nullptr && this->autoPlacement_ != nullptr && this->autoReleaseTime_ != nullptr && this->capacity_ != nullptr && this->chargeType_ != nullptr
        && this->cores_ != nullptr && this->cpuOverCommitRatio_ != nullptr && this->creationTime_ != nullptr && this->dedicatedHostClusterId_ != nullptr && this->dedicatedHostId_ != nullptr
        && this->dedicatedHostName_ != nullptr && this->dedicatedHostOwnerId_ != nullptr && this->dedicatedHostType_ != nullptr && this->description_ != nullptr && this->expiredTime_ != nullptr
        && this->GPUSpec_ != nullptr && this->hostDetailInfo_ != nullptr && this->instances_ != nullptr && this->machineId_ != nullptr && this->networkAttributes_ != nullptr
        && this->operationLocks_ != nullptr && this->physicalGpus_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->saleCycle_ != nullptr
        && this->sockets_ != nullptr && this->status_ != nullptr && this->supportedCustomInstanceTypeFamilies_ != nullptr && this->supportedInstanceTypeFamilies_ != nullptr && this->supportedInstanceTypesList_ != nullptr
        && this->tags_ != nullptr && this->zoneId_ != nullptr; };
    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions & schedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions schedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSchedulerOptions(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSchedulerOptions(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline string actionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


    // autoPlacement Field Functions 
    bool hasAutoPlacement() const { return this->autoPlacement_ != nullptr;};
    void deleteAutoPlacement() { this->autoPlacement_ = nullptr;};
    inline string autoPlacement() const { DARABONBA_PTR_GET_DEFAULT(autoPlacement_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setAutoPlacement(string autoPlacement) { DARABONBA_PTR_SET_VALUE(autoPlacement_, autoPlacement) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity & capacity() const { DARABONBA_PTR_GET_CONST(capacity_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity capacity() { DARABONBA_PTR_GET(capacity_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setCapacity(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setCapacity(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // cpuOverCommitRatio Field Functions 
    bool hasCpuOverCommitRatio() const { return this->cpuOverCommitRatio_ != nullptr;};
    void deleteCpuOverCommitRatio() { this->cpuOverCommitRatio_ = nullptr;};
    inline float cpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatio_, 0.0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setCpuOverCommitRatio(float cpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatio_, cpuOverCommitRatio) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string dedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


    // dedicatedHostOwnerId Field Functions 
    bool hasDedicatedHostOwnerId() const { return this->dedicatedHostOwnerId_ != nullptr;};
    void deleteDedicatedHostOwnerId() { this->dedicatedHostOwnerId_ = nullptr;};
    inline int64_t dedicatedHostOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostOwnerId_, 0L) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDedicatedHostOwnerId(int64_t dedicatedHostOwnerId) { DARABONBA_PTR_SET_VALUE(dedicatedHostOwnerId_, dedicatedHostOwnerId) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string dedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // GPUSpec Field Functions 
    bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
    void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
    inline string GPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


    // hostDetailInfo Field Functions 
    bool hasHostDetailInfo() const { return this->hostDetailInfo_ != nullptr;};
    void deleteHostDetailInfo() { this->hostDetailInfo_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo & hostDetailInfo() const { DARABONBA_PTR_GET_CONST(hostDetailInfo_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo hostDetailInfo() { DARABONBA_PTR_GET(hostDetailInfo_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setHostDetailInfo(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo & hostDetailInfo) { DARABONBA_PTR_SET_VALUE(hostDetailInfo_, hostDetailInfo) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setHostDetailInfo(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo && hostDetailInfo) { DARABONBA_PTR_SET_RVALUE(hostDetailInfo_, hostDetailInfo) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances instances() { DARABONBA_PTR_GET(instances_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setInstances(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setInstances(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // machineId Field Functions 
    bool hasMachineId() const { return this->machineId_ != nullptr;};
    void deleteMachineId() { this->machineId_ = nullptr;};
    inline string machineId() const { DARABONBA_PTR_GET_DEFAULT(machineId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setMachineId(string machineId) { DARABONBA_PTR_SET_VALUE(machineId_, machineId) };


    // networkAttributes Field Functions 
    bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
    void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes & networkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes networkAttributes() { DARABONBA_PTR_GET(networkAttributes_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setNetworkAttributes(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setNetworkAttributes(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setOperationLocks(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setOperationLocks(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // physicalGpus Field Functions 
    bool hasPhysicalGpus() const { return this->physicalGpus_ != nullptr;};
    void deletePhysicalGpus() { this->physicalGpus_ = nullptr;};
    inline int32_t physicalGpus() const { DARABONBA_PTR_GET_DEFAULT(physicalGpus_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setPhysicalGpus(int32_t physicalGpus) { DARABONBA_PTR_SET_VALUE(physicalGpus_, physicalGpus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // saleCycle Field Functions 
    bool hasSaleCycle() const { return this->saleCycle_ != nullptr;};
    void deleteSaleCycle() { this->saleCycle_ = nullptr;};
    inline string saleCycle() const { DARABONBA_PTR_GET_DEFAULT(saleCycle_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSaleCycle(string saleCycle) { DARABONBA_PTR_SET_VALUE(saleCycle_, saleCycle) };


    // sockets Field Functions 
    bool hasSockets() const { return this->sockets_ != nullptr;};
    void deleteSockets() { this->sockets_ = nullptr;};
    inline int32_t sockets() const { DARABONBA_PTR_GET_DEFAULT(sockets_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSockets(int32_t sockets) { DARABONBA_PTR_SET_VALUE(sockets_, sockets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedCustomInstanceTypeFamilies Field Functions 
    bool hasSupportedCustomInstanceTypeFamilies() const { return this->supportedCustomInstanceTypeFamilies_ != nullptr;};
    void deleteSupportedCustomInstanceTypeFamilies() { this->supportedCustomInstanceTypeFamilies_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies & supportedCustomInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedCustomInstanceTypeFamilies_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies supportedCustomInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedCustomInstanceTypeFamilies_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedCustomInstanceTypeFamilies(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies & supportedCustomInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedCustomInstanceTypeFamilies_, supportedCustomInstanceTypeFamilies) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedCustomInstanceTypeFamilies(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies && supportedCustomInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedCustomInstanceTypeFamilies_, supportedCustomInstanceTypeFamilies) };


    // supportedInstanceTypeFamilies Field Functions 
    bool hasSupportedInstanceTypeFamilies() const { return this->supportedInstanceTypeFamilies_ != nullptr;};
    void deleteSupportedInstanceTypeFamilies() { this->supportedInstanceTypeFamilies_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies & supportedInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamilies_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies supportedInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedInstanceTypeFamilies_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedInstanceTypeFamilies(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies & supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedInstanceTypeFamilies(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies && supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };


    // supportedInstanceTypesList Field Functions 
    bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
    void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList & supportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList supportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedInstanceTypesList(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setSupportedInstanceTypesList(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setTags(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setTags(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHost& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSchedulerOptions> schedulerOptions_ = nullptr;
    // The policy used to migrate the ECS instances deployed on the dedicated host when the dedicated host fails. Valid values:
    // 
    // *   Migrate: The instances are migrated to another physical machine. Instances that are not in the Stopped state when the dedicated host fails are restarted.
    // *   Stop: The instances are stopped. If the dedicated host cannot be repaired, the instances are migrated to another physical machine and then restarted.
    // 
    // If the dedicated host has cloud disks attached, the default value is Migrate. If the dedicated host has local disks attached, the default value is Stop.
    std::shared_ptr<string> actionOnMaintenance_ = nullptr;
    // Indicates whether the dedicated host is added to the resource pool for automatic deployment. Valid values:
    // 
    // *   on: The dedicated host is added to the resource pool for automatic deployment.
    // *   off: The dedicated host is not added to the resource pool for automatic deployment.
    // 
    // For information about automatic deployment, see the "Automatic deployment" section in [Functions and features](https://help.aliyun.com/document_detail/118938.html).
    std::shared_ptr<string> autoPlacement_ = nullptr;
    // The automatic release time of the dedicated host. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> autoReleaseTime_ = nullptr;
    // The performance specifications of the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity> capacity_ = nullptr;
    // The billing method of the dedicated host.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of physical cores per CPU.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The CPU overcommit ratio. Valid values: 1 to 5.
    std::shared_ptr<float> cpuOverCommitRatio_ = nullptr;
    // The time when the dedicated host was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the dedicated host cluster to which the dedicated host belongs.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The ID of the dedicated host.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The name of the dedicated host.
    std::shared_ptr<string> dedicatedHostName_ = nullptr;
    // The ID of the dedicated host owner.
    std::shared_ptr<int64_t> dedicatedHostOwnerId_ = nullptr;
    // The type of the dedicated host.
    std::shared_ptr<string> dedicatedHostType_ = nullptr;
    // The description of the dedicated host.
    std::shared_ptr<string> description_ = nullptr;
    // The expiration time of the subscription dedicated host. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The GPU model.
    std::shared_ptr<string> GPUSpec_ = nullptr;
    // This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostHostDetailInfo> hostDetailInfo_ = nullptr;
    // The ECS instances that were created on the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostInstances> instances_ = nullptr;
    // The machine code of the dedicated host.
    std::shared_ptr<string> machineId_ = nullptr;
    // The network attributes of the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostNetworkAttributes> networkAttributes_ = nullptr;
    // The reasons why the resources of the dedicated host were locked.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostOperationLocks> operationLocks_ = nullptr;
    // The number of physical GPUs.
    std::shared_ptr<int32_t> physicalGpus_ = nullptr;
    // The region ID of the dedicated host.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the dedicated host belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   Month
    // *   Year
    std::shared_ptr<string> saleCycle_ = nullptr;
    // The number of physical CPUs.
    std::shared_ptr<int32_t> sockets_ = nullptr;
    // The status of the dedicated host. Valid values:
    // 
    // *   Available: The dedicated host is running as expected.
    // *   UnderAssessment: The dedicated host is available but has potential risks that may cause the ECS instances on the dedicated host to fail.
    // *   PermanentFailure: The dedicated host has permanent failures and is unavailable.
    std::shared_ptr<string> status_ = nullptr;
    // The custom ECS instance families that are supported by the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedCustomInstanceTypeFamilies> supportedCustomInstanceTypeFamilies_ = nullptr;
    // The ECS instance families that are supported by the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypeFamilies> supportedInstanceTypeFamilies_ = nullptr;
    // The ECS instance types that are supported by the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostSupportedInstanceTypesList> supportedInstanceTypesList_ = nullptr;
    // The tags of the dedicated host.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags> tags_ = nullptr;
    // The zone ID of the dedicated host.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
