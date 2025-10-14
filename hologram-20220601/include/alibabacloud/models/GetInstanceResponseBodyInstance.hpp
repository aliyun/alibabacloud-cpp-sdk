// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceEndpoints.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComputeNodeCount, computeNodeCount_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(EnableHiveAccess, enableHiveAccess_);
      DARABONBA_PTR_TO_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(GatewayCount, gatewayCount_);
      DARABONBA_PTR_TO_JSON(GatewayCpu, gatewayCpu_);
      DARABONBA_PTR_TO_JSON(GatewayMemory, gatewayMemory_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceOwner, instanceOwner_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(LeaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaRole, replicaRole_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SuspendReason, suspendReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComputeNodeCount, computeNodeCount_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(EnableHiveAccess, enableHiveAccess_);
      DARABONBA_PTR_FROM_JSON(EnableServerless, enableServerless_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(GatewayCount, gatewayCount_);
      DARABONBA_PTR_FROM_JSON(GatewayCpu, gatewayCpu_);
      DARABONBA_PTR_FROM_JSON(GatewayMemory, gatewayMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceOwner, instanceOwner_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(LeaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaRole, replicaRole_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SuspendReason, suspendReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance(GetInstanceResponseBodyInstance &&) = default ;
    GetInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance& operator=(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance& operator=(GetInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && return this->coldStorage_ == nullptr && return this->commodityCode_ == nullptr && return this->computeNodeCount_ == nullptr && return this->cpu_ == nullptr && return this->creationTime_ == nullptr
        && return this->disk_ == nullptr && return this->enableHiveAccess_ == nullptr && return this->enableServerless_ == nullptr && return this->endpoints_ == nullptr && return this->expirationTime_ == nullptr
        && return this->gatewayCount_ == nullptr && return this->gatewayCpu_ == nullptr && return this->gatewayMemory_ == nullptr && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->instanceOwner_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceType_ == nullptr && return this->leaderInstanceId_ == nullptr
        && return this->memory_ == nullptr && return this->regionId_ == nullptr && return this->replicaRole_ == nullptr && return this->resourceGroupId_ == nullptr && return this->storageType_ == nullptr
        && return this->suspendReason_ == nullptr && return this->tags_ == nullptr && return this->version_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline string autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
    inline GetInstanceResponseBodyInstance& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int64_t coldStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0L) };
    inline GetInstanceResponseBodyInstance& setColdStorage(int64_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetInstanceResponseBodyInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // computeNodeCount Field Functions 
    bool hasComputeNodeCount() const { return this->computeNodeCount_ != nullptr;};
    void deleteComputeNodeCount() { this->computeNodeCount_ = nullptr;};
    inline int64_t computeNodeCount() const { DARABONBA_PTR_GET_DEFAULT(computeNodeCount_, 0L) };
    inline GetInstanceResponseBodyInstance& setComputeNodeCount(int64_t computeNodeCount) { DARABONBA_PTR_SET_VALUE(computeNodeCount_, computeNodeCount) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline GetInstanceResponseBodyInstance& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetInstanceResponseBodyInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline string disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
    inline GetInstanceResponseBodyInstance& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // enableHiveAccess Field Functions 
    bool hasEnableHiveAccess() const { return this->enableHiveAccess_ != nullptr;};
    void deleteEnableHiveAccess() { this->enableHiveAccess_ = nullptr;};
    inline string enableHiveAccess() const { DARABONBA_PTR_GET_DEFAULT(enableHiveAccess_, "") };
    inline GetInstanceResponseBodyInstance& setEnableHiveAccess(string enableHiveAccess) { DARABONBA_PTR_SET_VALUE(enableHiveAccess_, enableHiveAccess) };


    // enableServerless Field Functions 
    bool hasEnableServerless() const { return this->enableServerless_ != nullptr;};
    void deleteEnableServerless() { this->enableServerless_ = nullptr;};
    inline bool enableServerless() const { DARABONBA_PTR_GET_DEFAULT(enableServerless_, false) };
    inline GetInstanceResponseBodyInstance& setEnableServerless(bool enableServerless) { DARABONBA_PTR_SET_VALUE(enableServerless_, enableServerless) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyInstanceEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::GetInstanceResponseBodyInstanceEndpoints>) };
    inline vector<Models::GetInstanceResponseBodyInstanceEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::GetInstanceResponseBodyInstanceEndpoints>) };
    inline GetInstanceResponseBodyInstance& setEndpoints(const vector<Models::GetInstanceResponseBodyInstanceEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline GetInstanceResponseBodyInstance& setEndpoints(vector<Models::GetInstanceResponseBodyInstanceEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline GetInstanceResponseBodyInstance& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // gatewayCount Field Functions 
    bool hasGatewayCount() const { return this->gatewayCount_ != nullptr;};
    void deleteGatewayCount() { this->gatewayCount_ = nullptr;};
    inline int64_t gatewayCount() const { DARABONBA_PTR_GET_DEFAULT(gatewayCount_, 0L) };
    inline GetInstanceResponseBodyInstance& setGatewayCount(int64_t gatewayCount) { DARABONBA_PTR_SET_VALUE(gatewayCount_, gatewayCount) };


    // gatewayCpu Field Functions 
    bool hasGatewayCpu() const { return this->gatewayCpu_ != nullptr;};
    void deleteGatewayCpu() { this->gatewayCpu_ = nullptr;};
    inline int64_t gatewayCpu() const { DARABONBA_PTR_GET_DEFAULT(gatewayCpu_, 0L) };
    inline GetInstanceResponseBodyInstance& setGatewayCpu(int64_t gatewayCpu) { DARABONBA_PTR_SET_VALUE(gatewayCpu_, gatewayCpu) };


    // gatewayMemory Field Functions 
    bool hasGatewayMemory() const { return this->gatewayMemory_ != nullptr;};
    void deleteGatewayMemory() { this->gatewayMemory_ = nullptr;};
    inline int64_t gatewayMemory() const { DARABONBA_PTR_GET_DEFAULT(gatewayMemory_, 0L) };
    inline GetInstanceResponseBodyInstance& setGatewayMemory(int64_t gatewayMemory) { DARABONBA_PTR_SET_VALUE(gatewayMemory_, gatewayMemory) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceOwner Field Functions 
    bool hasInstanceOwner() const { return this->instanceOwner_ != nullptr;};
    void deleteInstanceOwner() { this->instanceOwner_ = nullptr;};
    inline string instanceOwner() const { DARABONBA_PTR_GET_DEFAULT(instanceOwner_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceOwner(string instanceOwner) { DARABONBA_PTR_SET_VALUE(instanceOwner_, instanceOwner) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // leaderInstanceId Field Functions 
    bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
    void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
    inline string leaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
    inline GetInstanceResponseBodyInstance& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline GetInstanceResponseBodyInstance& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceResponseBodyInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaRole Field Functions 
    bool hasReplicaRole() const { return this->replicaRole_ != nullptr;};
    void deleteReplicaRole() { this->replicaRole_ = nullptr;};
    inline string replicaRole() const { DARABONBA_PTR_GET_DEFAULT(replicaRole_, "") };
    inline GetInstanceResponseBodyInstance& setReplicaRole(string replicaRole) { DARABONBA_PTR_SET_VALUE(replicaRole_, replicaRole) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceResponseBodyInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetInstanceResponseBodyInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // suspendReason Field Functions 
    bool hasSuspendReason() const { return this->suspendReason_ != nullptr;};
    void deleteSuspendReason() { this->suspendReason_ = nullptr;};
    inline string suspendReason() const { DARABONBA_PTR_GET_DEFAULT(suspendReason_, "") };
    inline GetInstanceResponseBodyInstance& setSuspendReason(string suspendReason) { DARABONBA_PTR_SET_VALUE(suspendReason_, suspendReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyInstanceTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetInstanceResponseBodyInstanceTags>) };
    inline vector<Models::GetInstanceResponseBodyInstanceTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetInstanceResponseBodyInstanceTags>) };
    inline GetInstanceResponseBodyInstance& setTags(const vector<Models::GetInstanceResponseBodyInstanceTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBodyInstance& setTags(vector<Models::GetInstanceResponseBodyInstanceTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetInstanceResponseBodyInstance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetInstanceResponseBodyInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether auto-renewal is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> autoRenewal_ = nullptr;
    // The cold storage capacity of the instance. Unit: GB. Standard SSD is used for hot storage, and HDD is used for cold storage.
    std::shared_ptr<int64_t> coldStorage_ = nullptr;
    // The commodity code.
    // 
    // Valid values:
    // 
    // *   hologram_maxcomputeAccelerate_public_cn
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     China site/Lakehouse Acceleration Edition
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_combo_public_cn
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     China site/Subscription
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_prepay_public_intl
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     International site/Subscription
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_storage_dp_cn
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     China site/Storage plan
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_postpay_public_cn
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     China site/Pay-as-you-go
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_postpay_public_intl
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     International site/Pay-as-you-go
    // 
    //     <!-- -->
    // 
    // *   hologram_maxcomputeAccelerate_public_intl
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     International site/Lakehouse Acceleration Edition
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   hologram_cu_dp_cn
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     China site/Compute plan
    // 
    //     <!-- -->
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The number of compute nodes. In a typical configuration, a node has 16 CPU cores and 32 GB of memory.
    std::shared_ptr<int64_t> computeNodeCount_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The amount of data that can be stored in the disk of the Standard storage class. Unit: GB.
    std::shared_ptr<string> disk_ = nullptr;
    // Indicates whether data lake acceleration is enabled.
    std::shared_ptr<string> enableHiveAccess_ = nullptr;
    // EnableServerless
    std::shared_ptr<bool> enableServerless_ = nullptr;
    // The list of endpoints.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyInstanceEndpoints>> endpoints_ = nullptr;
    // The expiration time. This parameter is invalid for pay-as-you-go instances.
    std::shared_ptr<string> expirationTime_ = nullptr;
    // The number of gateway nodes.
    std::shared_ptr<int64_t> gatewayCount_ = nullptr;
    // The number of CPU cores of the gateway. Unit: core.
    std::shared_ptr<int64_t> gatewayCpu_ = nullptr;
    // The size of memory resources of the gateway. Unit: GB.
    std::shared_ptr<int64_t> gatewayMemory_ = nullptr;
    // The billing method of the instance.
    // 
    // Valid values:
    // 
    // *   PostPaid
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     pay-as-you-go
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   PrePaid
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     subscription
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name. The instance name must be 2 to 64 characters in length.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The owner of the instance.
    std::shared_ptr<string> instanceOwner_ = nullptr;
    // The status of the instance.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Suspended
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Allocating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the instance.
    // 
    // Valid values:
    // 
    // *   Follower
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     read-only secondary instance
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Standard
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     normal instance
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the primary instance.
    std::shared_ptr<string> leaderInstanceId_ = nullptr;
    // The memory size. Unit: GB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // Disaster recovery instance role. 
    // * Active: Primary disaster recovery instance.
    // * Passive: Disaster tolerance instance.
    // * PreActive: Primary disaster recovery instance not yet in final state.
    std::shared_ptr<string> replicaRole_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The storage type.
    // 
    // *   redundant: 3 copies
    // *   local: single copy
    std::shared_ptr<string> storageType_ = nullptr;
    // The reason for the suspension.
    // 
    // Valid values:
    // 
    // *   Indebet
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instance has an overdue payment
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Manual
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instance is manually suspended
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Overdue
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instance has expired
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> suspendReason_ = nullptr;
    // The instance tag.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyInstanceTags>> tags_ = nullptr;
    // The instance version.
    std::shared_ptr<string> version_ = nullptr;
    // The ID of the zone where the instance resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
