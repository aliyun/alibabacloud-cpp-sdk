// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPSDEDICATEDHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPSDEDICATEDHOSTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationPolicy, allocationPolicy_);
      DARABONBA_PTR_TO_JSON(BastionInstanceId, bastionInstanceId_);
      DARABONBA_PTR_TO_JSON(CpuAllocateRation, cpuAllocateRation_);
      DARABONBA_PTR_TO_JSON(CpuAllocatedAmount, cpuAllocatedAmount_);
      DARABONBA_PTR_TO_JSON(CpuAllocationRatio, cpuAllocationRatio_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_ANY_TO_JSON(DedicatedHostCountGroupByHostType, dedicatedHostCountGroupByHostType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupDesc, dedicatedHostGroupDesc_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DiskAllocateRation, diskAllocateRation_);
      DARABONBA_PTR_TO_JSON(DiskAllocatedAmount, diskAllocatedAmount_);
      DARABONBA_PTR_TO_JSON(DiskAllocationRatio, diskAllocationRatio_);
      DARABONBA_PTR_TO_JSON(DiskUsedAmount, diskUsedAmount_);
      DARABONBA_PTR_TO_JSON(DiskUtility, diskUtility_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(HostNumber, hostNumber_);
      DARABONBA_PTR_TO_JSON(HostReplacePolicy, hostReplacePolicy_);
      DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_TO_JSON(MemAllocateRation, memAllocateRation_);
      DARABONBA_PTR_TO_JSON(MemAllocatedAmount, memAllocatedAmount_);
      DARABONBA_PTR_TO_JSON(MemAllocationRatio, memAllocationRatio_);
      DARABONBA_PTR_TO_JSON(MemUsedAmount, memUsedAmount_);
      DARABONBA_PTR_TO_JSON(MemUtility, memUtility_);
      DARABONBA_PTR_TO_JSON(OpenPermission, openPermission_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(ZoneIDList, zoneIDList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationPolicy, allocationPolicy_);
      DARABONBA_PTR_FROM_JSON(BastionInstanceId, bastionInstanceId_);
      DARABONBA_PTR_FROM_JSON(CpuAllocateRation, cpuAllocateRation_);
      DARABONBA_PTR_FROM_JSON(CpuAllocatedAmount, cpuAllocatedAmount_);
      DARABONBA_PTR_FROM_JSON(CpuAllocationRatio, cpuAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_ANY_FROM_JSON(DedicatedHostCountGroupByHostType, dedicatedHostCountGroupByHostType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupDesc, dedicatedHostGroupDesc_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DiskAllocateRation, diskAllocateRation_);
      DARABONBA_PTR_FROM_JSON(DiskAllocatedAmount, diskAllocatedAmount_);
      DARABONBA_PTR_FROM_JSON(DiskAllocationRatio, diskAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(DiskUsedAmount, diskUsedAmount_);
      DARABONBA_PTR_FROM_JSON(DiskUtility, diskUtility_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(HostNumber, hostNumber_);
      DARABONBA_PTR_FROM_JSON(HostReplacePolicy, hostReplacePolicy_);
      DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_FROM_JSON(MemAllocateRation, memAllocateRation_);
      DARABONBA_PTR_FROM_JSON(MemAllocatedAmount, memAllocatedAmount_);
      DARABONBA_PTR_FROM_JSON(MemAllocationRatio, memAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(MemUsedAmount, memUsedAmount_);
      DARABONBA_PTR_FROM_JSON(MemUtility, memUtility_);
      DARABONBA_PTR_FROM_JSON(OpenPermission, openPermission_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(ZoneIDList, zoneIDList_);
    };
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups &&) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& operator=(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& operator=(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationPolicy_ == nullptr
        && return this->bastionInstanceId_ == nullptr && return this->cpuAllocateRation_ == nullptr && return this->cpuAllocatedAmount_ == nullptr && return this->cpuAllocationRatio_ == nullptr && return this->createTime_ == nullptr
        && return this->dedicatedHostCountGroupByHostType_ == nullptr && return this->dedicatedHostGroupDesc_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->diskAllocateRation_ == nullptr && return this->diskAllocatedAmount_ == nullptr
        && return this->diskAllocationRatio_ == nullptr && return this->diskUsedAmount_ == nullptr && return this->diskUtility_ == nullptr && return this->engine_ == nullptr && return this->hostNumber_ == nullptr
        && return this->hostReplacePolicy_ == nullptr && return this->instanceNumber_ == nullptr && return this->memAllocateRation_ == nullptr && return this->memAllocatedAmount_ == nullptr && return this->memAllocationRatio_ == nullptr
        && return this->memUsedAmount_ == nullptr && return this->memUtility_ == nullptr && return this->openPermission_ == nullptr && return this->text_ == nullptr && return this->VPCId_ == nullptr
        && return this->zoneIDList_ == nullptr; };
    // allocationPolicy Field Functions 
    bool hasAllocationPolicy() const { return this->allocationPolicy_ != nullptr;};
    void deleteAllocationPolicy() { this->allocationPolicy_ = nullptr;};
    inline string allocationPolicy() const { DARABONBA_PTR_GET_DEFAULT(allocationPolicy_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setAllocationPolicy(string allocationPolicy) { DARABONBA_PTR_SET_VALUE(allocationPolicy_, allocationPolicy) };


    // bastionInstanceId Field Functions 
    bool hasBastionInstanceId() const { return this->bastionInstanceId_ != nullptr;};
    void deleteBastionInstanceId() { this->bastionInstanceId_ = nullptr;};
    inline string bastionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bastionInstanceId_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setBastionInstanceId(string bastionInstanceId) { DARABONBA_PTR_SET_VALUE(bastionInstanceId_, bastionInstanceId) };


    // cpuAllocateRation Field Functions 
    bool hasCpuAllocateRation() const { return this->cpuAllocateRation_ != nullptr;};
    void deleteCpuAllocateRation() { this->cpuAllocateRation_ = nullptr;};
    inline float cpuAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocateRation_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setCpuAllocateRation(float cpuAllocateRation) { DARABONBA_PTR_SET_VALUE(cpuAllocateRation_, cpuAllocateRation) };


    // cpuAllocatedAmount Field Functions 
    bool hasCpuAllocatedAmount() const { return this->cpuAllocatedAmount_ != nullptr;};
    void deleteCpuAllocatedAmount() { this->cpuAllocatedAmount_ = nullptr;};
    inline float cpuAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocatedAmount_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setCpuAllocatedAmount(float cpuAllocatedAmount) { DARABONBA_PTR_SET_VALUE(cpuAllocatedAmount_, cpuAllocatedAmount) };


    // cpuAllocationRatio Field Functions 
    bool hasCpuAllocationRatio() const { return this->cpuAllocationRatio_ != nullptr;};
    void deleteCpuAllocationRatio() { this->cpuAllocationRatio_ = nullptr;};
    inline int32_t cpuAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocationRatio_, 0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setCpuAllocationRatio(int32_t cpuAllocationRatio) { DARABONBA_PTR_SET_VALUE(cpuAllocationRatio_, cpuAllocationRatio) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dedicatedHostCountGroupByHostType Field Functions 
    bool hasDedicatedHostCountGroupByHostType() const { return this->dedicatedHostCountGroupByHostType_ != nullptr;};
    void deleteDedicatedHostCountGroupByHostType() { this->dedicatedHostCountGroupByHostType_ = nullptr;};
    inline     const Darabonba::Json & dedicatedHostCountGroupByHostType() const { DARABONBA_GET(dedicatedHostCountGroupByHostType_) };
    Darabonba::Json & dedicatedHostCountGroupByHostType() { DARABONBA_GET(dedicatedHostCountGroupByHostType_) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDedicatedHostCountGroupByHostType(const Darabonba::Json & dedicatedHostCountGroupByHostType) { DARABONBA_SET_VALUE(dedicatedHostCountGroupByHostType_, dedicatedHostCountGroupByHostType) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDedicatedHostCountGroupByHostType(Darabonba::Json & dedicatedHostCountGroupByHostType) { DARABONBA_SET_RVALUE(dedicatedHostCountGroupByHostType_, dedicatedHostCountGroupByHostType) };


    // dedicatedHostGroupDesc Field Functions 
    bool hasDedicatedHostGroupDesc() const { return this->dedicatedHostGroupDesc_ != nullptr;};
    void deleteDedicatedHostGroupDesc() { this->dedicatedHostGroupDesc_ = nullptr;};
    inline string dedicatedHostGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupDesc_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDedicatedHostGroupDesc(string dedicatedHostGroupDesc) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupDesc_, dedicatedHostGroupDesc) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // diskAllocateRation Field Functions 
    bool hasDiskAllocateRation() const { return this->diskAllocateRation_ != nullptr;};
    void deleteDiskAllocateRation() { this->diskAllocateRation_ = nullptr;};
    inline float diskAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(diskAllocateRation_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDiskAllocateRation(float diskAllocateRation) { DARABONBA_PTR_SET_VALUE(diskAllocateRation_, diskAllocateRation) };


    // diskAllocatedAmount Field Functions 
    bool hasDiskAllocatedAmount() const { return this->diskAllocatedAmount_ != nullptr;};
    void deleteDiskAllocatedAmount() { this->diskAllocatedAmount_ = nullptr;};
    inline float diskAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(diskAllocatedAmount_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDiskAllocatedAmount(float diskAllocatedAmount) { DARABONBA_PTR_SET_VALUE(diskAllocatedAmount_, diskAllocatedAmount) };


    // diskAllocationRatio Field Functions 
    bool hasDiskAllocationRatio() const { return this->diskAllocationRatio_ != nullptr;};
    void deleteDiskAllocationRatio() { this->diskAllocationRatio_ = nullptr;};
    inline int32_t diskAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(diskAllocationRatio_, 0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDiskAllocationRatio(int32_t diskAllocationRatio) { DARABONBA_PTR_SET_VALUE(diskAllocationRatio_, diskAllocationRatio) };


    // diskUsedAmount Field Functions 
    bool hasDiskUsedAmount() const { return this->diskUsedAmount_ != nullptr;};
    void deleteDiskUsedAmount() { this->diskUsedAmount_ = nullptr;};
    inline float diskUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(diskUsedAmount_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDiskUsedAmount(float diskUsedAmount) { DARABONBA_PTR_SET_VALUE(diskUsedAmount_, diskUsedAmount) };


    // diskUtility Field Functions 
    bool hasDiskUtility() const { return this->diskUtility_ != nullptr;};
    void deleteDiskUtility() { this->diskUtility_ = nullptr;};
    inline float diskUtility() const { DARABONBA_PTR_GET_DEFAULT(diskUtility_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setDiskUtility(float diskUtility) { DARABONBA_PTR_SET_VALUE(diskUtility_, diskUtility) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // hostNumber Field Functions 
    bool hasHostNumber() const { return this->hostNumber_ != nullptr;};
    void deleteHostNumber() { this->hostNumber_ = nullptr;};
    inline int32_t hostNumber() const { DARABONBA_PTR_GET_DEFAULT(hostNumber_, 0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setHostNumber(int32_t hostNumber) { DARABONBA_PTR_SET_VALUE(hostNumber_, hostNumber) };


    // hostReplacePolicy Field Functions 
    bool hasHostReplacePolicy() const { return this->hostReplacePolicy_ != nullptr;};
    void deleteHostReplacePolicy() { this->hostReplacePolicy_ = nullptr;};
    inline string hostReplacePolicy() const { DARABONBA_PTR_GET_DEFAULT(hostReplacePolicy_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setHostReplacePolicy(string hostReplacePolicy) { DARABONBA_PTR_SET_VALUE(hostReplacePolicy_, hostReplacePolicy) };


    // instanceNumber Field Functions 
    bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
    void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
    inline int32_t instanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


    // memAllocateRation Field Functions 
    bool hasMemAllocateRation() const { return this->memAllocateRation_ != nullptr;};
    void deleteMemAllocateRation() { this->memAllocateRation_ = nullptr;};
    inline float memAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(memAllocateRation_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setMemAllocateRation(float memAllocateRation) { DARABONBA_PTR_SET_VALUE(memAllocateRation_, memAllocateRation) };


    // memAllocatedAmount Field Functions 
    bool hasMemAllocatedAmount() const { return this->memAllocatedAmount_ != nullptr;};
    void deleteMemAllocatedAmount() { this->memAllocatedAmount_ = nullptr;};
    inline float memAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(memAllocatedAmount_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setMemAllocatedAmount(float memAllocatedAmount) { DARABONBA_PTR_SET_VALUE(memAllocatedAmount_, memAllocatedAmount) };


    // memAllocationRatio Field Functions 
    bool hasMemAllocationRatio() const { return this->memAllocationRatio_ != nullptr;};
    void deleteMemAllocationRatio() { this->memAllocationRatio_ = nullptr;};
    inline int32_t memAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(memAllocationRatio_, 0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setMemAllocationRatio(int32_t memAllocationRatio) { DARABONBA_PTR_SET_VALUE(memAllocationRatio_, memAllocationRatio) };


    // memUsedAmount Field Functions 
    bool hasMemUsedAmount() const { return this->memUsedAmount_ != nullptr;};
    void deleteMemUsedAmount() { this->memUsedAmount_ = nullptr;};
    inline float memUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(memUsedAmount_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setMemUsedAmount(float memUsedAmount) { DARABONBA_PTR_SET_VALUE(memUsedAmount_, memUsedAmount) };


    // memUtility Field Functions 
    bool hasMemUtility() const { return this->memUtility_ != nullptr;};
    void deleteMemUtility() { this->memUtility_ = nullptr;};
    inline float memUtility() const { DARABONBA_PTR_GET_DEFAULT(memUtility_, 0.0) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setMemUtility(float memUtility) { DARABONBA_PTR_SET_VALUE(memUtility_, memUtility) };


    // openPermission Field Functions 
    bool hasOpenPermission() const { return this->openPermission_ != nullptr;};
    void deleteOpenPermission() { this->openPermission_ = nullptr;};
    inline string openPermission() const { DARABONBA_PTR_GET_DEFAULT(openPermission_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setOpenPermission(string openPermission) { DARABONBA_PTR_SET_VALUE(openPermission_, openPermission) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // zoneIDList Field Functions 
    bool hasZoneIDList() const { return this->zoneIDList_ != nullptr;};
    void deleteZoneIDList() { this->zoneIDList_ = nullptr;};
    inline const Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList & zoneIDList() const { DARABONBA_PTR_GET_CONST(zoneIDList_, Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList) };
    inline Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList zoneIDList() { DARABONBA_PTR_GET(zoneIDList_, Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setZoneIDList(const Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList & zoneIDList) { DARABONBA_PTR_SET_VALUE(zoneIDList_, zoneIDList) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups& setZoneIDList(Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList && zoneIDList) { DARABONBA_PTR_SET_RVALUE(zoneIDList_, zoneIDList) };


  protected:
    // The policy based on which the system allocates resources in the dedicated cluster. Valid values:
    // 
    // *   **Evenly**: The system evenly allocates the resources to all the hosts in the dedicated cluster.
    // *   **Intensively**: The system preferentially allocates the resources to the heavily loaded hosts in the dedicated cluster.
    std::shared_ptr<string> allocationPolicy_ = nullptr;
    // The ID of the bastion host.
    std::shared_ptr<string> bastionInstanceId_ = nullptr;
    // The percentage of allocated cores in the dedicated cluster. Unit: %.
    std::shared_ptr<float> cpuAllocateRation_ = nullptr;
    // The number of allocated cores in the dedicated cluster.
    std::shared_ptr<float> cpuAllocatedAmount_ = nullptr;
    // The core overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
    std::shared_ptr<int32_t> cpuAllocationRatio_ = nullptr;
    // The timestamp when the dedicated cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The type of storage media that is used for the hosts in the dedicated cluster. Valid values:
    // 
    // *   **dhg_cloud_ssd**: cloud disks
    // *   **dhg_local_ssd**: local disks
    Darabonba::Json dedicatedHostCountGroupByHostType_ = nullptr;
    // The name of the dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupDesc_ = nullptr;
    // The ID of the dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The percentage of allocated disk space in the dedicated cluster. Unit: %.
    std::shared_ptr<float> diskAllocateRation_ = nullptr;
    // The amount of allocated disk space in the dedicated cluster. Unit: GB.
    std::shared_ptr<float> diskAllocatedAmount_ = nullptr;
    // The disk overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
    std::shared_ptr<int32_t> diskAllocationRatio_ = nullptr;
    // The amount of used disk space in the dedicated cluster. Unit: GB.
    std::shared_ptr<float> diskUsedAmount_ = nullptr;
    // The disk usage of the dedicated cluster. Unit: %.
    std::shared_ptr<float> diskUtility_ = nullptr;
    // The database engine of the instances in the dedicated cluster.
    std::shared_ptr<string> engine_ = nullptr;
    // The total number of hosts in the dedicated cluster.
    std::shared_ptr<int32_t> hostNumber_ = nullptr;
    // The policy that is used to handle host failures. Valid values:
    // 
    // *   **Auto**: The system automatically replaces faulty hosts.
    // *   **Manual**: You must manually replace faulty hosts.
    std::shared_ptr<string> hostReplacePolicy_ = nullptr;
    // The total number of instances in the dedicated cluster.
    std::shared_ptr<int32_t> instanceNumber_ = nullptr;
    // The percentage of allocated memory space in the dedicated cluster. Unit: %.
    std::shared_ptr<float> memAllocateRation_ = nullptr;
    // The amount of allocated memory space in the dedicated cluster.
    std::shared_ptr<float> memAllocatedAmount_ = nullptr;
    // The memory overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
    std::shared_ptr<int32_t> memAllocationRatio_ = nullptr;
    // The amount of used memory space in the dedicated cluster. Unit: MB.
    std::shared_ptr<float> memUsedAmount_ = nullptr;
    // The memory usage of the dedicated cluster. Unit: %.
    std::shared_ptr<float> memUtility_ = nullptr;
    // Indicates whether the feature that allows you to have the OS permissions on the host is enabled. Valid values:
    // 
    // *   **0** or **null**: The permissions cannot be granted.
    // *   **1**: The permissions can be granted.
    // *   **3**: The permissions have been granted.
    std::shared_ptr<string> openPermission_ = nullptr;
    // The name and ID of the dedicated cluster. The value consists of **DedicatedHostGroupDesc** and **DedicatedHostGroupId**. Format: DedicatedHostGroupDesc/DedicatedHostGroupId.
    std::shared_ptr<string> text_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the dedicated cluster belongs.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The zones to which the hosts of the dedicated cluster belong.
    std::shared_ptr<Models::DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList> zoneIDList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
