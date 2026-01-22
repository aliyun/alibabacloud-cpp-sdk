// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_TO_JSON(EnableFS, enableFS_);
      DARABONBA_PTR_TO_JSON(EnableStoreTDE, enableStoreTDE_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_TO_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(WhiteIpList, whiteIpList_);
      DARABONBA_ANY_TO_JSON(ZoneEngineInfoMap, zoneEngineInfoMap_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_FROM_JSON(EnableFS, enableFS_);
      DARABONBA_PTR_FROM_JSON(EnableStoreTDE, enableStoreTDE_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_FROM_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(WhiteIpList, whiteIpList_);
      DARABONBA_ANY_FROM_JSON(ZoneEngineInfoMap, zoneEngineInfoMap_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetLindormV2InstanceResponseBody() = default ;
    GetLindormV2InstanceResponseBody(const GetLindormV2InstanceResponseBody &) = default ;
    GetLindormV2InstanceResponseBody(GetLindormV2InstanceResponseBody &&) = default ;
    GetLindormV2InstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceResponseBody() = default ;
    GetLindormV2InstanceResponseBody& operator=(const GetLindormV2InstanceResponseBody &) = default ;
    GetLindormV2InstanceResponseBody& operator=(GetLindormV2InstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WhiteIpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WhiteIpList& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IpList, ipList_);
      };
      friend void from_json(const Darabonba::Json& j, WhiteIpList& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      };
      WhiteIpList() = default ;
      WhiteIpList(const WhiteIpList &) = default ;
      WhiteIpList(WhiteIpList &&) = default ;
      WhiteIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WhiteIpList() = default ;
      WhiteIpList& operator=(const WhiteIpList &) = default ;
      WhiteIpList& operator=(WhiteIpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ipList_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline WhiteIpList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipList Field Functions 
      bool hasIpList() const { return this->ipList_ != nullptr;};
      void deleteIpList() { this->ipList_ = nullptr;};
      inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
      inline WhiteIpList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    protected:
      shared_ptr<string> groupName_ {};
      shared_ptr<string> ipList_ {};
    };

    class StorageUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageUsage& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
        DARABONBA_ANY_TO_JSON(EngineUsage, engineUsage_);
      };
      friend void from_json(const Darabonba::Json& j, StorageUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
        DARABONBA_ANY_FROM_JSON(EngineUsage, engineUsage_);
      };
      StorageUsage() = default ;
      StorageUsage(const StorageUsage &) = default ;
      StorageUsage(StorageUsage &&) = default ;
      StorageUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageUsage() = default ;
      StorageUsage& operator=(const StorageUsage &) = default ;
      StorageUsage& operator=(StorageUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityByDiskCategory_ == nullptr
        && this->engineUsage_ == nullptr; };
      // capacityByDiskCategory Field Functions 
      bool hasCapacityByDiskCategory() const { return this->capacityByDiskCategory_ != nullptr;};
      void deleteCapacityByDiskCategory() { this->capacityByDiskCategory_ = nullptr;};
      inline const vector<Darabonba::Json> & getCapacityByDiskCategory() const { DARABONBA_PTR_GET_CONST(capacityByDiskCategory_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getCapacityByDiskCategory() { DARABONBA_PTR_GET(capacityByDiskCategory_, vector<Darabonba::Json>) };
      inline StorageUsage& setCapacityByDiskCategory(const vector<Darabonba::Json> & capacityByDiskCategory) { DARABONBA_PTR_SET_VALUE(capacityByDiskCategory_, capacityByDiskCategory) };
      inline StorageUsage& setCapacityByDiskCategory(vector<Darabonba::Json> && capacityByDiskCategory) { DARABONBA_PTR_SET_RVALUE(capacityByDiskCategory_, capacityByDiskCategory) };


      // engineUsage Field Functions 
      bool hasEngineUsage() const { return this->engineUsage_ != nullptr;};
      void deleteEngineUsage() { this->engineUsage_ = nullptr;};
      inline       const Darabonba::Json & getEngineUsage() const { DARABONBA_GET(engineUsage_) };
      Darabonba::Json & getEngineUsage() { DARABONBA_GET(engineUsage_) };
      inline StorageUsage& setEngineUsage(const Darabonba::Json & engineUsage) { DARABONBA_SET_VALUE(engineUsage_, engineUsage) };
      inline StorageUsage& setEngineUsage(Darabonba::Json && engineUsage) { DARABONBA_SET_RVALUE(engineUsage_, engineUsage) };


    protected:
      shared_ptr<vector<Darabonba::Json>> capacityByDiskCategory_ {};
      Darabonba::Json engineUsage_ {};
    };

    class EngineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineList& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectAddressList, connectAddressList_);
        DARABONBA_PTR_TO_JSON(EnableBackup, enableBackup_);
        DARABONBA_PTR_TO_JSON(EnableCDC, enableCDC_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(IsLastVersion, isLastVersion_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, EngineList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectAddressList, connectAddressList_);
        DARABONBA_PTR_FROM_JSON(EnableBackup, enableBackup_);
        DARABONBA_PTR_FROM_JSON(EnableCDC, enableCDC_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(IsLastVersion, isLastVersion_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      EngineList() = default ;
      EngineList(const EngineList &) = default ;
      EngineList(EngineList &&) = default ;
      EngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineList() = default ;
      EngineList& operator=(const EngineList &) = default ;
      EngineList& operator=(EngineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_TO_JSON(EnableAttachLocalDisk, enableAttachLocalDisk_);
          DARABONBA_PTR_TO_JSON(IsScaleSpecGroup, isScaleSpecGroup_);
          DARABONBA_PTR_TO_JSON(LocalDiskCapacity, localDiskCapacity_);
          DARABONBA_PTR_TO_JSON(LocalDiskCategory, localDiskCategory_);
          DARABONBA_PTR_TO_JSON(MemorySizeGiB, memorySizeGiB_);
          DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_TO_JSON(Quantity, quantity_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(SpecId, specId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, NodeGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(EnableAttachLocalDisk, enableAttachLocalDisk_);
          DARABONBA_PTR_FROM_JSON(IsScaleSpecGroup, isScaleSpecGroup_);
          DARABONBA_PTR_FROM_JSON(LocalDiskCapacity, localDiskCapacity_);
          DARABONBA_PTR_FROM_JSON(LocalDiskCategory, localDiskCategory_);
          DARABONBA_PTR_FROM_JSON(MemorySizeGiB, memorySizeGiB_);
          DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(SpecId, specId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        NodeGroup() = default ;
        NodeGroup(const NodeGroup &) = default ;
        NodeGroup(NodeGroup &&) = default ;
        NodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeGroup() = default ;
        NodeGroup& operator=(const NodeGroup &) = default ;
        NodeGroup& operator=(NodeGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->cpuCoreCount_ == nullptr && this->enableAttachLocalDisk_ == nullptr && this->isScaleSpecGroup_ == nullptr && this->localDiskCapacity_ == nullptr && this->localDiskCategory_ == nullptr
        && this->memorySizeGiB_ == nullptr && this->nodeSpec_ == nullptr && this->quantity_ == nullptr && this->resourceGroupName_ == nullptr && this->specId_ == nullptr
        && this->status_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline NodeGroup& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // cpuCoreCount Field Functions 
        bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
        void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
        inline int32_t getCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
        inline NodeGroup& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


        // enableAttachLocalDisk Field Functions 
        bool hasEnableAttachLocalDisk() const { return this->enableAttachLocalDisk_ != nullptr;};
        void deleteEnableAttachLocalDisk() { this->enableAttachLocalDisk_ = nullptr;};
        inline bool getEnableAttachLocalDisk() const { DARABONBA_PTR_GET_DEFAULT(enableAttachLocalDisk_, false) };
        inline NodeGroup& setEnableAttachLocalDisk(bool enableAttachLocalDisk) { DARABONBA_PTR_SET_VALUE(enableAttachLocalDisk_, enableAttachLocalDisk) };


        // isScaleSpecGroup Field Functions 
        bool hasIsScaleSpecGroup() const { return this->isScaleSpecGroup_ != nullptr;};
        void deleteIsScaleSpecGroup() { this->isScaleSpecGroup_ = nullptr;};
        inline bool getIsScaleSpecGroup() const { DARABONBA_PTR_GET_DEFAULT(isScaleSpecGroup_, false) };
        inline NodeGroup& setIsScaleSpecGroup(bool isScaleSpecGroup) { DARABONBA_PTR_SET_VALUE(isScaleSpecGroup_, isScaleSpecGroup) };


        // localDiskCapacity Field Functions 
        bool hasLocalDiskCapacity() const { return this->localDiskCapacity_ != nullptr;};
        void deleteLocalDiskCapacity() { this->localDiskCapacity_ = nullptr;};
        inline int64_t getLocalDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(localDiskCapacity_, 0L) };
        inline NodeGroup& setLocalDiskCapacity(int64_t localDiskCapacity) { DARABONBA_PTR_SET_VALUE(localDiskCapacity_, localDiskCapacity) };


        // localDiskCategory Field Functions 
        bool hasLocalDiskCategory() const { return this->localDiskCategory_ != nullptr;};
        void deleteLocalDiskCategory() { this->localDiskCategory_ = nullptr;};
        inline string getLocalDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(localDiskCategory_, "") };
        inline NodeGroup& setLocalDiskCategory(string localDiskCategory) { DARABONBA_PTR_SET_VALUE(localDiskCategory_, localDiskCategory) };


        // memorySizeGiB Field Functions 
        bool hasMemorySizeGiB() const { return this->memorySizeGiB_ != nullptr;};
        void deleteMemorySizeGiB() { this->memorySizeGiB_ = nullptr;};
        inline int32_t getMemorySizeGiB() const { DARABONBA_PTR_GET_DEFAULT(memorySizeGiB_, 0) };
        inline NodeGroup& setMemorySizeGiB(int32_t memorySizeGiB) { DARABONBA_PTR_SET_VALUE(memorySizeGiB_, memorySizeGiB) };


        // nodeSpec Field Functions 
        bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
        void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
        inline string getNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
        inline NodeGroup& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
        inline NodeGroup& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline NodeGroup& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // specId Field Functions 
        bool hasSpecId() const { return this->specId_ != nullptr;};
        void deleteSpecId() { this->specId_ = nullptr;};
        inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
        inline NodeGroup& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NodeGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<int32_t> cpuCoreCount_ {};
        shared_ptr<bool> enableAttachLocalDisk_ {};
        shared_ptr<bool> isScaleSpecGroup_ {};
        shared_ptr<int64_t> localDiskCapacity_ {};
        shared_ptr<string> localDiskCategory_ {};
        shared_ptr<int32_t> memorySizeGiB_ {};
        shared_ptr<string> nodeSpec_ {};
        shared_ptr<int32_t> quantity_ {};
        shared_ptr<string> resourceGroupName_ {};
        shared_ptr<string> specId_ {};
        shared_ptr<string> status_ {};
      };

      class ConnectAddressList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectAddressList& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectAddressList& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ConnectAddressList() = default ;
        ConnectAddressList(const ConnectAddressList &) = default ;
        ConnectAddressList(ConnectAddressList &&) = default ;
        ConnectAddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectAddressList() = default ;
        ConnectAddressList& operator=(const ConnectAddressList &) = default ;
        ConnectAddressList& operator=(ConnectAddressList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->port_ == nullptr && this->type_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline ConnectAddressList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline ConnectAddressList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ConnectAddressList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->connectAddressList_ == nullptr
        && this->enableBackup_ == nullptr && this->enableCDC_ == nullptr && this->engine_ == nullptr && this->isLastVersion_ == nullptr && this->latestVersion_ == nullptr
        && this->nodeGroup_ == nullptr && this->version_ == nullptr; };
      // connectAddressList Field Functions 
      bool hasConnectAddressList() const { return this->connectAddressList_ != nullptr;};
      void deleteConnectAddressList() { this->connectAddressList_ = nullptr;};
      inline const vector<EngineList::ConnectAddressList> & getConnectAddressList() const { DARABONBA_PTR_GET_CONST(connectAddressList_, vector<EngineList::ConnectAddressList>) };
      inline vector<EngineList::ConnectAddressList> getConnectAddressList() { DARABONBA_PTR_GET(connectAddressList_, vector<EngineList::ConnectAddressList>) };
      inline EngineList& setConnectAddressList(const vector<EngineList::ConnectAddressList> & connectAddressList) { DARABONBA_PTR_SET_VALUE(connectAddressList_, connectAddressList) };
      inline EngineList& setConnectAddressList(vector<EngineList::ConnectAddressList> && connectAddressList) { DARABONBA_PTR_SET_RVALUE(connectAddressList_, connectAddressList) };


      // enableBackup Field Functions 
      bool hasEnableBackup() const { return this->enableBackup_ != nullptr;};
      void deleteEnableBackup() { this->enableBackup_ = nullptr;};
      inline string getEnableBackup() const { DARABONBA_PTR_GET_DEFAULT(enableBackup_, "") };
      inline EngineList& setEnableBackup(string enableBackup) { DARABONBA_PTR_SET_VALUE(enableBackup_, enableBackup) };


      // enableCDC Field Functions 
      bool hasEnableCDC() const { return this->enableCDC_ != nullptr;};
      void deleteEnableCDC() { this->enableCDC_ = nullptr;};
      inline string getEnableCDC() const { DARABONBA_PTR_GET_DEFAULT(enableCDC_, "") };
      inline EngineList& setEnableCDC(string enableCDC) { DARABONBA_PTR_SET_VALUE(enableCDC_, enableCDC) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline EngineList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // isLastVersion Field Functions 
      bool hasIsLastVersion() const { return this->isLastVersion_ != nullptr;};
      void deleteIsLastVersion() { this->isLastVersion_ = nullptr;};
      inline bool getIsLastVersion() const { DARABONBA_PTR_GET_DEFAULT(isLastVersion_, false) };
      inline EngineList& setIsLastVersion(bool isLastVersion) { DARABONBA_PTR_SET_VALUE(isLastVersion_, isLastVersion) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline EngineList& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // nodeGroup Field Functions 
      bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
      void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
      inline const vector<EngineList::NodeGroup> & getNodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, vector<EngineList::NodeGroup>) };
      inline vector<EngineList::NodeGroup> getNodeGroup() { DARABONBA_PTR_GET(nodeGroup_, vector<EngineList::NodeGroup>) };
      inline EngineList& setNodeGroup(const vector<EngineList::NodeGroup> & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
      inline EngineList& setNodeGroup(vector<EngineList::NodeGroup> && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline EngineList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<EngineList::ConnectAddressList>> connectAddressList_ {};
      shared_ptr<string> enableBackup_ {};
      shared_ptr<string> enableCDC_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<bool> isLastVersion_ {};
      shared_ptr<string> latestVersion_ {};
      shared_ptr<vector<EngineList::NodeGroup>> nodeGroup_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->arbiterVSwitchId_ == nullptr && this->arbiterZoneId_ == nullptr && this->autoRenew_ == nullptr && this->cloudStorageSize_ == nullptr && this->coldStorage_ == nullptr
        && this->createMilliseconds_ == nullptr && this->deletionProtection_ == nullptr && this->diskCategory_ == nullptr && this->diskThreshold_ == nullptr && this->diskUsage_ == nullptr
        && this->enableCompute_ == nullptr && this->enableFS_ == nullptr && this->enableStoreTDE_ == nullptr && this->engineList_ == nullptr && this->expiredMilliseconds_ == nullptr
        && this->initialRootPassword_ == nullptr && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr && this->primaryVSwitchId_ == nullptr
        && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceType_ == nullptr
        && this->standbyVSwitchId_ == nullptr && this->standbyZoneId_ == nullptr && this->storageUsage_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr
        && this->whiteIpList_ == nullptr && this->zoneEngineInfoMap_ == nullptr && this->zoneId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetLindormV2InstanceResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string getArbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline GetLindormV2InstanceResponseBody& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string getArbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline GetLindormV2InstanceResponseBody& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline GetLindormV2InstanceResponseBody& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int64_t getCloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0L) };
    inline GetLindormV2InstanceResponseBody& setCloudStorageSize(int64_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t getColdStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline GetLindormV2InstanceResponseBody& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // createMilliseconds Field Functions 
    bool hasCreateMilliseconds() const { return this->createMilliseconds_ != nullptr;};
    void deleteCreateMilliseconds() { this->createMilliseconds_ = nullptr;};
    inline int64_t getCreateMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(createMilliseconds_, 0L) };
    inline GetLindormV2InstanceResponseBody& setCreateMilliseconds(int64_t createMilliseconds) { DARABONBA_PTR_SET_VALUE(createMilliseconds_, createMilliseconds) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline GetLindormV2InstanceResponseBody& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline GetLindormV2InstanceResponseBody& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskThreshold Field Functions 
    bool hasDiskThreshold() const { return this->diskThreshold_ != nullptr;};
    void deleteDiskThreshold() { this->diskThreshold_ = nullptr;};
    inline string getDiskThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskThreshold_, "") };
    inline GetLindormV2InstanceResponseBody& setDiskThreshold(string diskThreshold) { DARABONBA_PTR_SET_VALUE(diskThreshold_, diskThreshold) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline string getDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, "") };
    inline GetLindormV2InstanceResponseBody& setDiskUsage(string diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // enableCompute Field Functions 
    bool hasEnableCompute() const { return this->enableCompute_ != nullptr;};
    void deleteEnableCompute() { this->enableCompute_ = nullptr;};
    inline bool getEnableCompute() const { DARABONBA_PTR_GET_DEFAULT(enableCompute_, false) };
    inline GetLindormV2InstanceResponseBody& setEnableCompute(bool enableCompute) { DARABONBA_PTR_SET_VALUE(enableCompute_, enableCompute) };


    // enableFS Field Functions 
    bool hasEnableFS() const { return this->enableFS_ != nullptr;};
    void deleteEnableFS() { this->enableFS_ = nullptr;};
    inline bool getEnableFS() const { DARABONBA_PTR_GET_DEFAULT(enableFS_, false) };
    inline GetLindormV2InstanceResponseBody& setEnableFS(bool enableFS) { DARABONBA_PTR_SET_VALUE(enableFS_, enableFS) };


    // enableStoreTDE Field Functions 
    bool hasEnableStoreTDE() const { return this->enableStoreTDE_ != nullptr;};
    void deleteEnableStoreTDE() { this->enableStoreTDE_ = nullptr;};
    inline bool getEnableStoreTDE() const { DARABONBA_PTR_GET_DEFAULT(enableStoreTDE_, false) };
    inline GetLindormV2InstanceResponseBody& setEnableStoreTDE(bool enableStoreTDE) { DARABONBA_PTR_SET_VALUE(enableStoreTDE_, enableStoreTDE) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormV2InstanceResponseBody::EngineList> & getEngineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormV2InstanceResponseBody::EngineList>) };
    inline vector<GetLindormV2InstanceResponseBody::EngineList> getEngineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormV2InstanceResponseBody::EngineList>) };
    inline GetLindormV2InstanceResponseBody& setEngineList(const vector<GetLindormV2InstanceResponseBody::EngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormV2InstanceResponseBody& setEngineList(vector<GetLindormV2InstanceResponseBody::EngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // expiredMilliseconds Field Functions 
    bool hasExpiredMilliseconds() const { return this->expiredMilliseconds_ != nullptr;};
    void deleteExpiredMilliseconds() { this->expiredMilliseconds_ = nullptr;};
    inline int64_t getExpiredMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(expiredMilliseconds_, 0L) };
    inline GetLindormV2InstanceResponseBody& setExpiredMilliseconds(int64_t expiredMilliseconds) { DARABONBA_PTR_SET_VALUE(expiredMilliseconds_, expiredMilliseconds) };


    // initialRootPassword Field Functions 
    bool hasInitialRootPassword() const { return this->initialRootPassword_ != nullptr;};
    void deleteInitialRootPassword() { this->initialRootPassword_ = nullptr;};
    inline string getInitialRootPassword() const { DARABONBA_PTR_GET_DEFAULT(initialRootPassword_, "") };
    inline GetLindormV2InstanceResponseBody& setInitialRootPassword(string initialRootPassword) { DARABONBA_PTR_SET_VALUE(initialRootPassword_, initialRootPassword) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetLindormV2InstanceResponseBody& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2InstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetLindormV2InstanceResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetLindormV2InstanceResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline GetLindormV2InstanceResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline GetLindormV2InstanceResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetLindormV2InstanceResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetLindormV2InstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline GetLindormV2InstanceResponseBody& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline GetLindormV2InstanceResponseBody& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLindormV2InstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2InstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLindormV2InstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetLindormV2InstanceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline GetLindormV2InstanceResponseBody& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline GetLindormV2InstanceResponseBody& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // storageUsage Field Functions 
    bool hasStorageUsage() const { return this->storageUsage_ != nullptr;};
    void deleteStorageUsage() { this->storageUsage_ = nullptr;};
    inline const GetLindormV2InstanceResponseBody::StorageUsage & getStorageUsage() const { DARABONBA_PTR_GET_CONST(storageUsage_, GetLindormV2InstanceResponseBody::StorageUsage) };
    inline GetLindormV2InstanceResponseBody::StorageUsage getStorageUsage() { DARABONBA_PTR_GET(storageUsage_, GetLindormV2InstanceResponseBody::StorageUsage) };
    inline GetLindormV2InstanceResponseBody& setStorageUsage(const GetLindormV2InstanceResponseBody::StorageUsage & storageUsage) { DARABONBA_PTR_SET_VALUE(storageUsage_, storageUsage) };
    inline GetLindormV2InstanceResponseBody& setStorageUsage(GetLindormV2InstanceResponseBody::StorageUsage && storageUsage) { DARABONBA_PTR_SET_RVALUE(storageUsage_, storageUsage) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLindormV2InstanceResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetLindormV2InstanceResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // whiteIpList Field Functions 
    bool hasWhiteIpList() const { return this->whiteIpList_ != nullptr;};
    void deleteWhiteIpList() { this->whiteIpList_ = nullptr;};
    inline const vector<GetLindormV2InstanceResponseBody::WhiteIpList> & getWhiteIpList() const { DARABONBA_PTR_GET_CONST(whiteIpList_, vector<GetLindormV2InstanceResponseBody::WhiteIpList>) };
    inline vector<GetLindormV2InstanceResponseBody::WhiteIpList> getWhiteIpList() { DARABONBA_PTR_GET(whiteIpList_, vector<GetLindormV2InstanceResponseBody::WhiteIpList>) };
    inline GetLindormV2InstanceResponseBody& setWhiteIpList(const vector<GetLindormV2InstanceResponseBody::WhiteIpList> & whiteIpList) { DARABONBA_PTR_SET_VALUE(whiteIpList_, whiteIpList) };
    inline GetLindormV2InstanceResponseBody& setWhiteIpList(vector<GetLindormV2InstanceResponseBody::WhiteIpList> && whiteIpList) { DARABONBA_PTR_SET_RVALUE(whiteIpList_, whiteIpList) };


    // zoneEngineInfoMap Field Functions 
    bool hasZoneEngineInfoMap() const { return this->zoneEngineInfoMap_ != nullptr;};
    void deleteZoneEngineInfoMap() { this->zoneEngineInfoMap_ = nullptr;};
    inline     const Darabonba::Json & getZoneEngineInfoMap() const { DARABONBA_GET(zoneEngineInfoMap_) };
    Darabonba::Json & getZoneEngineInfoMap() { DARABONBA_GET(zoneEngineInfoMap_) };
    inline GetLindormV2InstanceResponseBody& setZoneEngineInfoMap(const Darabonba::Json & zoneEngineInfoMap) { DARABONBA_SET_VALUE(zoneEngineInfoMap_, zoneEngineInfoMap) };
    inline GetLindormV2InstanceResponseBody& setZoneEngineInfoMap(Darabonba::Json && zoneEngineInfoMap) { DARABONBA_SET_RVALUE(zoneEngineInfoMap_, zoneEngineInfoMap) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetLindormV2InstanceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<int64_t> aliUid_ {};
    shared_ptr<string> arbiterVSwitchId_ {};
    shared_ptr<string> arbiterZoneId_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<int64_t> cloudStorageSize_ {};
    shared_ptr<int32_t> coldStorage_ {};
    shared_ptr<int64_t> createMilliseconds_ {};
    shared_ptr<string> deletionProtection_ {};
    shared_ptr<string> diskCategory_ {};
    shared_ptr<string> diskThreshold_ {};
    shared_ptr<string> diskUsage_ {};
    shared_ptr<bool> enableCompute_ {};
    shared_ptr<bool> enableFS_ {};
    shared_ptr<bool> enableStoreTDE_ {};
    shared_ptr<vector<GetLindormV2InstanceResponseBody::EngineList>> engineList_ {};
    shared_ptr<int64_t> expiredMilliseconds_ {};
    shared_ptr<string> initialRootPassword_ {};
    shared_ptr<string> instanceAlias_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceStatus_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> maintainEndTime_ {};
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> primaryVSwitchId_ {};
    shared_ptr<string> primaryZoneId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> serviceType_ {};
    shared_ptr<string> standbyVSwitchId_ {};
    shared_ptr<string> standbyZoneId_ {};
    shared_ptr<GetLindormV2InstanceResponseBody::StorageUsage> storageUsage_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> vswitchId_ {};
    shared_ptr<vector<GetLindormV2InstanceResponseBody::WhiteIpList>> whiteIpList_ {};
    Darabonba::Json zoneEngineInfoMap_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
