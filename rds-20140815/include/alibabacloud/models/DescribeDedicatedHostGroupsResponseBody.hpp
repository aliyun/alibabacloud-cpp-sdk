// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostGroupsResponseBody() = default ;
    DescribeDedicatedHostGroupsResponseBody(const DescribeDedicatedHostGroupsResponseBody &) = default ;
    DescribeDedicatedHostGroupsResponseBody(DescribeDedicatedHostGroupsResponseBody &&) = default ;
    DescribeDedicatedHostGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostGroupsResponseBody() = default ;
    DescribeDedicatedHostGroupsResponseBody& operator=(const DescribeDedicatedHostGroupsResponseBody &) = default ;
    DescribeDedicatedHostGroupsResponseBody& operator=(DescribeDedicatedHostGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHostGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostGroups& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      };
      DedicatedHostGroups() = default ;
      DedicatedHostGroups(const DedicatedHostGroups &) = default ;
      DedicatedHostGroups(DedicatedHostGroups &&) = default ;
      DedicatedHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHostGroups() = default ;
      DedicatedHostGroups& operator=(const DedicatedHostGroups &) = default ;
      DedicatedHostGroups& operator=(DedicatedHostGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHostGroupsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHostGroupsItem& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DedicatedHostGroupsItem& obj) { 
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
        DedicatedHostGroupsItem() = default ;
        DedicatedHostGroupsItem(const DedicatedHostGroupsItem &) = default ;
        DedicatedHostGroupsItem(DedicatedHostGroupsItem &&) = default ;
        DedicatedHostGroupsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHostGroupsItem() = default ;
        DedicatedHostGroupsItem& operator=(const DedicatedHostGroupsItem &) = default ;
        DedicatedHostGroupsItem& operator=(DedicatedHostGroupsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ZoneIDList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ZoneIDList& obj) { 
            DARABONBA_PTR_TO_JSON(ZoneIDList, zoneIDList_);
          };
          friend void from_json(const Darabonba::Json& j, ZoneIDList& obj) { 
            DARABONBA_PTR_FROM_JSON(ZoneIDList, zoneIDList_);
          };
          ZoneIDList() = default ;
          ZoneIDList(const ZoneIDList &) = default ;
          ZoneIDList(ZoneIDList &&) = default ;
          ZoneIDList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ZoneIDList() = default ;
          ZoneIDList& operator=(const ZoneIDList &) = default ;
          ZoneIDList& operator=(ZoneIDList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->zoneIDList_ == nullptr; };
          // zoneIDList Field Functions 
          bool hasZoneIDList() const { return this->zoneIDList_ != nullptr;};
          void deleteZoneIDList() { this->zoneIDList_ = nullptr;};
          inline const vector<string> & getZoneIDList() const { DARABONBA_PTR_GET_CONST(zoneIDList_, vector<string>) };
          inline vector<string> getZoneIDList() { DARABONBA_PTR_GET(zoneIDList_, vector<string>) };
          inline ZoneIDList& setZoneIDList(const vector<string> & zoneIDList) { DARABONBA_PTR_SET_VALUE(zoneIDList_, zoneIDList) };
          inline ZoneIDList& setZoneIDList(vector<string> && zoneIDList) { DARABONBA_PTR_SET_RVALUE(zoneIDList_, zoneIDList) };


        protected:
          shared_ptr<vector<string>> zoneIDList_ {};
        };

        virtual bool empty() const override { return this->allocationPolicy_ == nullptr
        && this->bastionInstanceId_ == nullptr && this->cpuAllocateRation_ == nullptr && this->cpuAllocatedAmount_ == nullptr && this->cpuAllocationRatio_ == nullptr && this->createTime_ == nullptr
        && this->dedicatedHostCountGroupByHostType_ == nullptr && this->dedicatedHostGroupDesc_ == nullptr && this->dedicatedHostGroupId_ == nullptr && this->diskAllocateRation_ == nullptr && this->diskAllocatedAmount_ == nullptr
        && this->diskAllocationRatio_ == nullptr && this->diskUsedAmount_ == nullptr && this->diskUtility_ == nullptr && this->engine_ == nullptr && this->hostNumber_ == nullptr
        && this->hostReplacePolicy_ == nullptr && this->instanceNumber_ == nullptr && this->memAllocateRation_ == nullptr && this->memAllocatedAmount_ == nullptr && this->memAllocationRatio_ == nullptr
        && this->memUsedAmount_ == nullptr && this->memUtility_ == nullptr && this->openPermission_ == nullptr && this->text_ == nullptr && this->VPCId_ == nullptr
        && this->zoneIDList_ == nullptr; };
        // allocationPolicy Field Functions 
        bool hasAllocationPolicy() const { return this->allocationPolicy_ != nullptr;};
        void deleteAllocationPolicy() { this->allocationPolicy_ = nullptr;};
        inline string getAllocationPolicy() const { DARABONBA_PTR_GET_DEFAULT(allocationPolicy_, "") };
        inline DedicatedHostGroupsItem& setAllocationPolicy(string allocationPolicy) { DARABONBA_PTR_SET_VALUE(allocationPolicy_, allocationPolicy) };


        // bastionInstanceId Field Functions 
        bool hasBastionInstanceId() const { return this->bastionInstanceId_ != nullptr;};
        void deleteBastionInstanceId() { this->bastionInstanceId_ = nullptr;};
        inline string getBastionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bastionInstanceId_, "") };
        inline DedicatedHostGroupsItem& setBastionInstanceId(string bastionInstanceId) { DARABONBA_PTR_SET_VALUE(bastionInstanceId_, bastionInstanceId) };


        // cpuAllocateRation Field Functions 
        bool hasCpuAllocateRation() const { return this->cpuAllocateRation_ != nullptr;};
        void deleteCpuAllocateRation() { this->cpuAllocateRation_ = nullptr;};
        inline float getCpuAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocateRation_, 0.0) };
        inline DedicatedHostGroupsItem& setCpuAllocateRation(float cpuAllocateRation) { DARABONBA_PTR_SET_VALUE(cpuAllocateRation_, cpuAllocateRation) };


        // cpuAllocatedAmount Field Functions 
        bool hasCpuAllocatedAmount() const { return this->cpuAllocatedAmount_ != nullptr;};
        void deleteCpuAllocatedAmount() { this->cpuAllocatedAmount_ = nullptr;};
        inline float getCpuAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocatedAmount_, 0.0) };
        inline DedicatedHostGroupsItem& setCpuAllocatedAmount(float cpuAllocatedAmount) { DARABONBA_PTR_SET_VALUE(cpuAllocatedAmount_, cpuAllocatedAmount) };


        // cpuAllocationRatio Field Functions 
        bool hasCpuAllocationRatio() const { return this->cpuAllocationRatio_ != nullptr;};
        void deleteCpuAllocationRatio() { this->cpuAllocationRatio_ = nullptr;};
        inline int32_t getCpuAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuAllocationRatio_, 0) };
        inline DedicatedHostGroupsItem& setCpuAllocationRatio(int32_t cpuAllocationRatio) { DARABONBA_PTR_SET_VALUE(cpuAllocationRatio_, cpuAllocationRatio) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DedicatedHostGroupsItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dedicatedHostCountGroupByHostType Field Functions 
        bool hasDedicatedHostCountGroupByHostType() const { return this->dedicatedHostCountGroupByHostType_ != nullptr;};
        void deleteDedicatedHostCountGroupByHostType() { this->dedicatedHostCountGroupByHostType_ = nullptr;};
        inline         const Darabonba::Json & getDedicatedHostCountGroupByHostType() const { DARABONBA_GET(dedicatedHostCountGroupByHostType_) };
        Darabonba::Json & getDedicatedHostCountGroupByHostType() { DARABONBA_GET(dedicatedHostCountGroupByHostType_) };
        inline DedicatedHostGroupsItem& setDedicatedHostCountGroupByHostType(const Darabonba::Json & dedicatedHostCountGroupByHostType) { DARABONBA_SET_VALUE(dedicatedHostCountGroupByHostType_, dedicatedHostCountGroupByHostType) };
        inline DedicatedHostGroupsItem& setDedicatedHostCountGroupByHostType(Darabonba::Json && dedicatedHostCountGroupByHostType) { DARABONBA_SET_RVALUE(dedicatedHostCountGroupByHostType_, dedicatedHostCountGroupByHostType) };


        // dedicatedHostGroupDesc Field Functions 
        bool hasDedicatedHostGroupDesc() const { return this->dedicatedHostGroupDesc_ != nullptr;};
        void deleteDedicatedHostGroupDesc() { this->dedicatedHostGroupDesc_ = nullptr;};
        inline string getDedicatedHostGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupDesc_, "") };
        inline DedicatedHostGroupsItem& setDedicatedHostGroupDesc(string dedicatedHostGroupDesc) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupDesc_, dedicatedHostGroupDesc) };


        // dedicatedHostGroupId Field Functions 
        bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
        void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
        inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
        inline DedicatedHostGroupsItem& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


        // diskAllocateRation Field Functions 
        bool hasDiskAllocateRation() const { return this->diskAllocateRation_ != nullptr;};
        void deleteDiskAllocateRation() { this->diskAllocateRation_ = nullptr;};
        inline float getDiskAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(diskAllocateRation_, 0.0) };
        inline DedicatedHostGroupsItem& setDiskAllocateRation(float diskAllocateRation) { DARABONBA_PTR_SET_VALUE(diskAllocateRation_, diskAllocateRation) };


        // diskAllocatedAmount Field Functions 
        bool hasDiskAllocatedAmount() const { return this->diskAllocatedAmount_ != nullptr;};
        void deleteDiskAllocatedAmount() { this->diskAllocatedAmount_ = nullptr;};
        inline float getDiskAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(diskAllocatedAmount_, 0.0) };
        inline DedicatedHostGroupsItem& setDiskAllocatedAmount(float diskAllocatedAmount) { DARABONBA_PTR_SET_VALUE(diskAllocatedAmount_, diskAllocatedAmount) };


        // diskAllocationRatio Field Functions 
        bool hasDiskAllocationRatio() const { return this->diskAllocationRatio_ != nullptr;};
        void deleteDiskAllocationRatio() { this->diskAllocationRatio_ = nullptr;};
        inline int32_t getDiskAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(diskAllocationRatio_, 0) };
        inline DedicatedHostGroupsItem& setDiskAllocationRatio(int32_t diskAllocationRatio) { DARABONBA_PTR_SET_VALUE(diskAllocationRatio_, diskAllocationRatio) };


        // diskUsedAmount Field Functions 
        bool hasDiskUsedAmount() const { return this->diskUsedAmount_ != nullptr;};
        void deleteDiskUsedAmount() { this->diskUsedAmount_ = nullptr;};
        inline float getDiskUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(diskUsedAmount_, 0.0) };
        inline DedicatedHostGroupsItem& setDiskUsedAmount(float diskUsedAmount) { DARABONBA_PTR_SET_VALUE(diskUsedAmount_, diskUsedAmount) };


        // diskUtility Field Functions 
        bool hasDiskUtility() const { return this->diskUtility_ != nullptr;};
        void deleteDiskUtility() { this->diskUtility_ = nullptr;};
        inline float getDiskUtility() const { DARABONBA_PTR_GET_DEFAULT(diskUtility_, 0.0) };
        inline DedicatedHostGroupsItem& setDiskUtility(float diskUtility) { DARABONBA_PTR_SET_VALUE(diskUtility_, diskUtility) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DedicatedHostGroupsItem& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // hostNumber Field Functions 
        bool hasHostNumber() const { return this->hostNumber_ != nullptr;};
        void deleteHostNumber() { this->hostNumber_ = nullptr;};
        inline int32_t getHostNumber() const { DARABONBA_PTR_GET_DEFAULT(hostNumber_, 0) };
        inline DedicatedHostGroupsItem& setHostNumber(int32_t hostNumber) { DARABONBA_PTR_SET_VALUE(hostNumber_, hostNumber) };


        // hostReplacePolicy Field Functions 
        bool hasHostReplacePolicy() const { return this->hostReplacePolicy_ != nullptr;};
        void deleteHostReplacePolicy() { this->hostReplacePolicy_ = nullptr;};
        inline string getHostReplacePolicy() const { DARABONBA_PTR_GET_DEFAULT(hostReplacePolicy_, "") };
        inline DedicatedHostGroupsItem& setHostReplacePolicy(string hostReplacePolicy) { DARABONBA_PTR_SET_VALUE(hostReplacePolicy_, hostReplacePolicy) };


        // instanceNumber Field Functions 
        bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
        void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
        inline int32_t getInstanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
        inline DedicatedHostGroupsItem& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


        // memAllocateRation Field Functions 
        bool hasMemAllocateRation() const { return this->memAllocateRation_ != nullptr;};
        void deleteMemAllocateRation() { this->memAllocateRation_ = nullptr;};
        inline float getMemAllocateRation() const { DARABONBA_PTR_GET_DEFAULT(memAllocateRation_, 0.0) };
        inline DedicatedHostGroupsItem& setMemAllocateRation(float memAllocateRation) { DARABONBA_PTR_SET_VALUE(memAllocateRation_, memAllocateRation) };


        // memAllocatedAmount Field Functions 
        bool hasMemAllocatedAmount() const { return this->memAllocatedAmount_ != nullptr;};
        void deleteMemAllocatedAmount() { this->memAllocatedAmount_ = nullptr;};
        inline float getMemAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(memAllocatedAmount_, 0.0) };
        inline DedicatedHostGroupsItem& setMemAllocatedAmount(float memAllocatedAmount) { DARABONBA_PTR_SET_VALUE(memAllocatedAmount_, memAllocatedAmount) };


        // memAllocationRatio Field Functions 
        bool hasMemAllocationRatio() const { return this->memAllocationRatio_ != nullptr;};
        void deleteMemAllocationRatio() { this->memAllocationRatio_ = nullptr;};
        inline int32_t getMemAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(memAllocationRatio_, 0) };
        inline DedicatedHostGroupsItem& setMemAllocationRatio(int32_t memAllocationRatio) { DARABONBA_PTR_SET_VALUE(memAllocationRatio_, memAllocationRatio) };


        // memUsedAmount Field Functions 
        bool hasMemUsedAmount() const { return this->memUsedAmount_ != nullptr;};
        void deleteMemUsedAmount() { this->memUsedAmount_ = nullptr;};
        inline float getMemUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(memUsedAmount_, 0.0) };
        inline DedicatedHostGroupsItem& setMemUsedAmount(float memUsedAmount) { DARABONBA_PTR_SET_VALUE(memUsedAmount_, memUsedAmount) };


        // memUtility Field Functions 
        bool hasMemUtility() const { return this->memUtility_ != nullptr;};
        void deleteMemUtility() { this->memUtility_ = nullptr;};
        inline float getMemUtility() const { DARABONBA_PTR_GET_DEFAULT(memUtility_, 0.0) };
        inline DedicatedHostGroupsItem& setMemUtility(float memUtility) { DARABONBA_PTR_SET_VALUE(memUtility_, memUtility) };


        // openPermission Field Functions 
        bool hasOpenPermission() const { return this->openPermission_ != nullptr;};
        void deleteOpenPermission() { this->openPermission_ = nullptr;};
        inline string getOpenPermission() const { DARABONBA_PTR_GET_DEFAULT(openPermission_, "") };
        inline DedicatedHostGroupsItem& setOpenPermission(string openPermission) { DARABONBA_PTR_SET_VALUE(openPermission_, openPermission) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DedicatedHostGroupsItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DedicatedHostGroupsItem& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // zoneIDList Field Functions 
        bool hasZoneIDList() const { return this->zoneIDList_ != nullptr;};
        void deleteZoneIDList() { this->zoneIDList_ = nullptr;};
        inline const DedicatedHostGroupsItem::ZoneIDList & getZoneIDList() const { DARABONBA_PTR_GET_CONST(zoneIDList_, DedicatedHostGroupsItem::ZoneIDList) };
        inline DedicatedHostGroupsItem::ZoneIDList getZoneIDList() { DARABONBA_PTR_GET(zoneIDList_, DedicatedHostGroupsItem::ZoneIDList) };
        inline DedicatedHostGroupsItem& setZoneIDList(const DedicatedHostGroupsItem::ZoneIDList & zoneIDList) { DARABONBA_PTR_SET_VALUE(zoneIDList_, zoneIDList) };
        inline DedicatedHostGroupsItem& setZoneIDList(DedicatedHostGroupsItem::ZoneIDList && zoneIDList) { DARABONBA_PTR_SET_RVALUE(zoneIDList_, zoneIDList) };


      protected:
        // The policy based on which the system allocates resources in the dedicated cluster. Valid values:
        // 
        // *   **Evenly**: The system evenly allocates the resources to all the hosts in the dedicated cluster.
        // *   **Intensively**: The system preferentially allocates the resources to the heavily loaded hosts in the dedicated cluster.
        shared_ptr<string> allocationPolicy_ {};
        // The ID of the bastion host.
        shared_ptr<string> bastionInstanceId_ {};
        // The percentage of allocated cores in the dedicated cluster. Unit: %.
        shared_ptr<float> cpuAllocateRation_ {};
        // The number of allocated cores in the dedicated cluster.
        shared_ptr<float> cpuAllocatedAmount_ {};
        // The core overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
        shared_ptr<int32_t> cpuAllocationRatio_ {};
        // The timestamp when the dedicated cluster was created.
        shared_ptr<string> createTime_ {};
        // The type of storage media that is used for the hosts in the dedicated cluster. Valid values:
        // 
        // *   **dhg_cloud_ssd**: cloud disks
        // *   **dhg_local_ssd**: local disks
        Darabonba::Json dedicatedHostCountGroupByHostType_ {};
        // The name of the dedicated cluster.
        shared_ptr<string> dedicatedHostGroupDesc_ {};
        // The ID of the dedicated cluster.
        shared_ptr<string> dedicatedHostGroupId_ {};
        // The percentage of allocated disk space in the dedicated cluster. Unit: %.
        shared_ptr<float> diskAllocateRation_ {};
        // The amount of allocated disk space in the dedicated cluster. Unit: GB.
        shared_ptr<float> diskAllocatedAmount_ {};
        // The disk overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
        shared_ptr<int32_t> diskAllocationRatio_ {};
        // The amount of used disk space in the dedicated cluster. Unit: GB.
        shared_ptr<float> diskUsedAmount_ {};
        // The disk usage of the dedicated cluster. Unit: %.
        shared_ptr<float> diskUtility_ {};
        // The database engine of the instances in the dedicated cluster.
        shared_ptr<string> engine_ {};
        // The total number of hosts in the dedicated cluster.
        shared_ptr<int32_t> hostNumber_ {};
        // The policy that is used to handle host failures. Valid values:
        // 
        // *   **Auto**: The system automatically replaces faulty hosts.
        // *   **Manual**: You must manually replace faulty hosts.
        shared_ptr<string> hostReplacePolicy_ {};
        // The total number of instances in the dedicated cluster.
        shared_ptr<int32_t> instanceNumber_ {};
        // The percentage of allocated memory space in the dedicated cluster. Unit: %.
        shared_ptr<float> memAllocateRation_ {};
        // The amount of allocated memory space in the dedicated cluster.
        shared_ptr<float> memAllocatedAmount_ {};
        // The memory overcommitment ratio of the dedicated cluster. Unit: %. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
        shared_ptr<int32_t> memAllocationRatio_ {};
        // The amount of used memory space in the dedicated cluster. Unit: MB.
        shared_ptr<float> memUsedAmount_ {};
        // The memory usage of the dedicated cluster. Unit: %.
        shared_ptr<float> memUtility_ {};
        // Indicates whether the feature that allows you to have the OS permissions on the host is enabled. Valid values:
        // 
        // *   **0** or **null**: The permissions cannot be granted.
        // *   **1**: The permissions can be granted.
        // *   **3**: The permissions have been granted.
        shared_ptr<string> openPermission_ {};
        // The name and ID of the dedicated cluster. The value consists of **DedicatedHostGroupDesc** and **DedicatedHostGroupId**. Format: DedicatedHostGroupDesc/DedicatedHostGroupId.
        shared_ptr<string> text_ {};
        // The ID of the virtual private cloud (VPC) to which the dedicated cluster belongs.
        shared_ptr<string> VPCId_ {};
        // The zones to which the hosts of the dedicated cluster belong.
        shared_ptr<DedicatedHostGroupsItem::ZoneIDList> zoneIDList_ {};
      };

      virtual bool empty() const override { return this->dedicatedHostGroups_ == nullptr; };
      // dedicatedHostGroups Field Functions 
      bool hasDedicatedHostGroups() const { return this->dedicatedHostGroups_ != nullptr;};
      void deleteDedicatedHostGroups() { this->dedicatedHostGroups_ = nullptr;};
      inline const vector<DedicatedHostGroups::DedicatedHostGroupsItem> & getDedicatedHostGroups() const { DARABONBA_PTR_GET_CONST(dedicatedHostGroups_, vector<DedicatedHostGroups::DedicatedHostGroupsItem>) };
      inline vector<DedicatedHostGroups::DedicatedHostGroupsItem> getDedicatedHostGroups() { DARABONBA_PTR_GET(dedicatedHostGroups_, vector<DedicatedHostGroups::DedicatedHostGroupsItem>) };
      inline DedicatedHostGroups& setDedicatedHostGroups(const vector<DedicatedHostGroups::DedicatedHostGroupsItem> & dedicatedHostGroups) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroups_, dedicatedHostGroups) };
      inline DedicatedHostGroups& setDedicatedHostGroups(vector<DedicatedHostGroups::DedicatedHostGroupsItem> && dedicatedHostGroups) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGroups_, dedicatedHostGroups) };


    protected:
      shared_ptr<vector<DedicatedHostGroups::DedicatedHostGroupsItem>> dedicatedHostGroups_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // dedicatedHostGroups Field Functions 
    bool hasDedicatedHostGroups() const { return this->dedicatedHostGroups_ != nullptr;};
    void deleteDedicatedHostGroups() { this->dedicatedHostGroups_ = nullptr;};
    inline const DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups & getDedicatedHostGroups() const { DARABONBA_PTR_GET_CONST(dedicatedHostGroups_, DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups getDedicatedHostGroups() { DARABONBA_PTR_GET(dedicatedHostGroups_, DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBody& setDedicatedHostGroups(const DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups & dedicatedHostGroups) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroups_, dedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBody& setDedicatedHostGroups(DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups && dedicatedHostGroups) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGroups_, dedicatedHostGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about dedicated clusters returned.
    shared_ptr<DescribeDedicatedHostGroupsResponseBody::DedicatedHostGroups> dedicatedHostGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
