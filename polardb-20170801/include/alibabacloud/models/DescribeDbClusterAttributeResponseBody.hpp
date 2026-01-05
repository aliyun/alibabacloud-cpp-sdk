// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiCreatingTime, aiCreatingTime_);
      DARABONBA_PTR_TO_JSON(AiType, aiType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_TO_JSON(BlktagTotal, blktagTotal_);
      DARABONBA_PTR_TO_JSON(BlktagUsed, blktagUsed_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CompressStorageMode, compressStorageMode_);
      DARABONBA_PTR_TO_JSON(CompressStorageUsed, compressStorageUsed_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DBVersionStatus, DBVersionStatus_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupChainSize, dataLevel1BackupChainSize_);
      DARABONBA_PTR_TO_JSON(DataSyncMode, dataSyncMode_);
      DARABONBA_PTR_TO_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(HasCompleteStandbyRes, hasCompleteStandbyRes_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(ImciAutoIndex, imciAutoIndex_);
      DARABONBA_PTR_TO_JSON(ImperceptibleSwitch, imperceptibleSwitch_);
      DARABONBA_PTR_TO_JSON(InodeTotal, inodeTotal_);
      DARABONBA_PTR_TO_JSON(InodeUsed, inodeUsed_);
      DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_TO_JSON(IsProxyLatestVersion, isProxyLatestVersion_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(Orca, orca_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ProxyCpuCores, proxyCpuCores_);
      DARABONBA_PTR_TO_JSON(ProxyServerlessType, proxyServerlessType_);
      DARABONBA_PTR_TO_JSON(ProxyStandardCpuCores, proxyStandardCpuCores_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RestoreDataPoint, restoreDataPoint_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(RowCompression, rowCompression_);
      DARABONBA_PTR_TO_JSON(SQLSize, SQLSize_);
      DARABONBA_PTR_TO_JSON(SearchClusterStatus, searchClusterStatus_);
      DARABONBA_PTR_TO_JSON(SearchCompressStorageUsed, searchCompressStorageUsed_);
      DARABONBA_PTR_TO_JSON(SearchStorageUsed, searchStorageUsed_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(StandbyHAMode, standbyHAMode_);
      DARABONBA_PTR_TO_JSON(StorageMax, storageMax_);
      DARABONBA_PTR_TO_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
      DARABONBA_PTR_TO_JSON(SupportInstantSwitchWithImci, supportInstantSwitchWithImci_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiCreatingTime, aiCreatingTime_);
      DARABONBA_PTR_FROM_JSON(AiType, aiType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_FROM_JSON(BlktagTotal, blktagTotal_);
      DARABONBA_PTR_FROM_JSON(BlktagUsed, blktagUsed_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CompressStorageMode, compressStorageMode_);
      DARABONBA_PTR_FROM_JSON(CompressStorageUsed, compressStorageUsed_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DBVersionStatus, DBVersionStatus_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupChainSize, dataLevel1BackupChainSize_);
      DARABONBA_PTR_FROM_JSON(DataSyncMode, dataSyncMode_);
      DARABONBA_PTR_FROM_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(HasCompleteStandbyRes, hasCompleteStandbyRes_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(ImciAutoIndex, imciAutoIndex_);
      DARABONBA_PTR_FROM_JSON(ImperceptibleSwitch, imperceptibleSwitch_);
      DARABONBA_PTR_FROM_JSON(InodeTotal, inodeTotal_);
      DARABONBA_PTR_FROM_JSON(InodeUsed, inodeUsed_);
      DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_FROM_JSON(IsProxyLatestVersion, isProxyLatestVersion_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(Orca, orca_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ProxyCpuCores, proxyCpuCores_);
      DARABONBA_PTR_FROM_JSON(ProxyServerlessType, proxyServerlessType_);
      DARABONBA_PTR_FROM_JSON(ProxyStandardCpuCores, proxyStandardCpuCores_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RestoreDataPoint, restoreDataPoint_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(RowCompression, rowCompression_);
      DARABONBA_PTR_FROM_JSON(SQLSize, SQLSize_);
      DARABONBA_PTR_FROM_JSON(SearchClusterStatus, searchClusterStatus_);
      DARABONBA_PTR_FROM_JSON(SearchCompressStorageUsed, searchCompressStorageUsed_);
      DARABONBA_PTR_FROM_JSON(SearchStorageUsed, searchStorageUsed_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(StandbyHAMode, standbyHAMode_);
      DARABONBA_PTR_FROM_JSON(StorageMax, storageMax_);
      DARABONBA_PTR_FROM_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
      DARABONBA_PTR_FROM_JSON(SupportInstantSwitchWithImci, supportInstantSwitchWithImci_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody(DescribeDBClusterAttributeResponseBody &&) = default ;
    DescribeDBClusterAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody& operator=(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody& operator=(DescribeDBClusterAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag key.
      shared_ptr<string> key_ {};
      // Tag value.
      shared_ptr<string> value_ {};
    };

    class DBNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
        DARABONBA_PTR_TO_JSON(AddedCpuCores, addedCpuCores_);
        DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DBNodeCXLRemoteMemory, DBNodeCXLRemoteMemory_);
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
        DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_TO_JSON(FailoverPriority, failoverPriority_);
        DARABONBA_PTR_TO_JSON(HotReplicaMode, hotReplicaMode_);
        DARABONBA_PTR_TO_JSON(ImciSwitch, imciSwitch_);
        DARABONBA_PTR_TO_JSON(MasterId, masterId_);
        DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
        DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_TO_JSON(MirrorInsName, mirrorInsName_);
        DARABONBA_PTR_TO_JSON(MultiMasterLocalStandby, multiMasterLocalStandby_);
        DARABONBA_PTR_TO_JSON(MultiMasterPrimaryNode, multiMasterPrimaryNode_);
        DARABONBA_PTR_TO_JSON(Orca, orca_);
        DARABONBA_PTR_TO_JSON(RemoteMemorySize, remoteMemorySize_);
        DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
        DARABONBA_PTR_TO_JSON(ServerWeight, serverWeight_);
        DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_TO_JSON(SubCluster, subCluster_);
        DARABONBA_PTR_TO_JSON(SubGroupDescription, subGroupDescription_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(AddedCpuCores, addedCpuCores_);
        DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DBNodeCXLRemoteMemory, DBNodeCXLRemoteMemory_);
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
        DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_FROM_JSON(FailoverPriority, failoverPriority_);
        DARABONBA_PTR_FROM_JSON(HotReplicaMode, hotReplicaMode_);
        DARABONBA_PTR_FROM_JSON(ImciSwitch, imciSwitch_);
        DARABONBA_PTR_FROM_JSON(MasterId, masterId_);
        DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
        DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_FROM_JSON(MirrorInsName, mirrorInsName_);
        DARABONBA_PTR_FROM_JSON(MultiMasterLocalStandby, multiMasterLocalStandby_);
        DARABONBA_PTR_FROM_JSON(MultiMasterPrimaryNode, multiMasterPrimaryNode_);
        DARABONBA_PTR_FROM_JSON(Orca, orca_);
        DARABONBA_PTR_FROM_JSON(RemoteMemorySize, remoteMemorySize_);
        DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
        DARABONBA_PTR_FROM_JSON(ServerWeight, serverWeight_);
        DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_FROM_JSON(SubCluster, subCluster_);
        DARABONBA_PTR_FROM_JSON(SubGroupDescription, subGroupDescription_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBNodes() = default ;
      DBNodes(const DBNodes &) = default ;
      DBNodes(DBNodes &&) = default ;
      DBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodes() = default ;
      DBNodes& operator=(const DBNodes &) = default ;
      DBNodes& operator=(DBNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addedCpuCores_ == nullptr
        && this->cpuCores_ == nullptr && this->creationTime_ == nullptr && this->DBNodeCXLRemoteMemory_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeDescription_ == nullptr
        && this->DBNodeId_ == nullptr && this->DBNodeRole_ == nullptr && this->DBNodeStatus_ == nullptr && this->failoverPriority_ == nullptr && this->hotReplicaMode_ == nullptr
        && this->imciSwitch_ == nullptr && this->masterId_ == nullptr && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr && this->memorySize_ == nullptr
        && this->mirrorInsName_ == nullptr && this->multiMasterLocalStandby_ == nullptr && this->multiMasterPrimaryNode_ == nullptr && this->orca_ == nullptr && this->remoteMemorySize_ == nullptr
        && this->sccMode_ == nullptr && this->serverWeight_ == nullptr && this->serverlessType_ == nullptr && this->subCluster_ == nullptr && this->subGroupDescription_ == nullptr
        && this->zoneId_ == nullptr; };
      // addedCpuCores Field Functions 
      bool hasAddedCpuCores() const { return this->addedCpuCores_ != nullptr;};
      void deleteAddedCpuCores() { this->addedCpuCores_ = nullptr;};
      inline string getAddedCpuCores() const { DARABONBA_PTR_GET_DEFAULT(addedCpuCores_, "") };
      inline DBNodes& setAddedCpuCores(string addedCpuCores) { DARABONBA_PTR_SET_VALUE(addedCpuCores_, addedCpuCores) };


      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
      inline DBNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // DBNodeCXLRemoteMemory Field Functions 
      bool hasDBNodeCXLRemoteMemory() const { return this->DBNodeCXLRemoteMemory_ != nullptr;};
      void deleteDBNodeCXLRemoteMemory() { this->DBNodeCXLRemoteMemory_ = nullptr;};
      inline string getDBNodeCXLRemoteMemory() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCXLRemoteMemory_, "") };
      inline DBNodes& setDBNodeCXLRemoteMemory(string DBNodeCXLRemoteMemory) { DARABONBA_PTR_SET_VALUE(DBNodeCXLRemoteMemory_, DBNodeCXLRemoteMemory) };


      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodeDescription Field Functions 
      bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
      void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
      inline string getDBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
      inline DBNodes& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline DBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // DBNodeRole Field Functions 
      bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
      void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
      inline string getDBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
      inline DBNodes& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


      // DBNodeStatus Field Functions 
      bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
      void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
      inline string getDBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
      inline DBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


      // failoverPriority Field Functions 
      bool hasFailoverPriority() const { return this->failoverPriority_ != nullptr;};
      void deleteFailoverPriority() { this->failoverPriority_ = nullptr;};
      inline int32_t getFailoverPriority() const { DARABONBA_PTR_GET_DEFAULT(failoverPriority_, 0) };
      inline DBNodes& setFailoverPriority(int32_t failoverPriority) { DARABONBA_PTR_SET_VALUE(failoverPriority_, failoverPriority) };


      // hotReplicaMode Field Functions 
      bool hasHotReplicaMode() const { return this->hotReplicaMode_ != nullptr;};
      void deleteHotReplicaMode() { this->hotReplicaMode_ = nullptr;};
      inline string getHotReplicaMode() const { DARABONBA_PTR_GET_DEFAULT(hotReplicaMode_, "") };
      inline DBNodes& setHotReplicaMode(string hotReplicaMode) { DARABONBA_PTR_SET_VALUE(hotReplicaMode_, hotReplicaMode) };


      // imciSwitch Field Functions 
      bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
      void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
      inline string getImciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
      inline DBNodes& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


      // masterId Field Functions 
      bool hasMasterId() const { return this->masterId_ != nullptr;};
      void deleteMasterId() { this->masterId_ = nullptr;};
      inline string getMasterId() const { DARABONBA_PTR_GET_DEFAULT(masterId_, "") };
      inline DBNodes& setMasterId(string masterId) { DARABONBA_PTR_SET_VALUE(masterId_, masterId) };


      // maxConnections Field Functions 
      bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
      void deleteMaxConnections() { this->maxConnections_ = nullptr;};
      inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
      inline DBNodes& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


      // maxIOPS Field Functions 
      bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
      void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
      inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
      inline DBNodes& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


      // memorySize Field Functions 
      bool hasMemorySize() const { return this->memorySize_ != nullptr;};
      void deleteMemorySize() { this->memorySize_ = nullptr;};
      inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
      inline DBNodes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      // mirrorInsName Field Functions 
      bool hasMirrorInsName() const { return this->mirrorInsName_ != nullptr;};
      void deleteMirrorInsName() { this->mirrorInsName_ = nullptr;};
      inline string getMirrorInsName() const { DARABONBA_PTR_GET_DEFAULT(mirrorInsName_, "") };
      inline DBNodes& setMirrorInsName(string mirrorInsName) { DARABONBA_PTR_SET_VALUE(mirrorInsName_, mirrorInsName) };


      // multiMasterLocalStandby Field Functions 
      bool hasMultiMasterLocalStandby() const { return this->multiMasterLocalStandby_ != nullptr;};
      void deleteMultiMasterLocalStandby() { this->multiMasterLocalStandby_ = nullptr;};
      inline string getMultiMasterLocalStandby() const { DARABONBA_PTR_GET_DEFAULT(multiMasterLocalStandby_, "") };
      inline DBNodes& setMultiMasterLocalStandby(string multiMasterLocalStandby) { DARABONBA_PTR_SET_VALUE(multiMasterLocalStandby_, multiMasterLocalStandby) };


      // multiMasterPrimaryNode Field Functions 
      bool hasMultiMasterPrimaryNode() const { return this->multiMasterPrimaryNode_ != nullptr;};
      void deleteMultiMasterPrimaryNode() { this->multiMasterPrimaryNode_ = nullptr;};
      inline string getMultiMasterPrimaryNode() const { DARABONBA_PTR_GET_DEFAULT(multiMasterPrimaryNode_, "") };
      inline DBNodes& setMultiMasterPrimaryNode(string multiMasterPrimaryNode) { DARABONBA_PTR_SET_VALUE(multiMasterPrimaryNode_, multiMasterPrimaryNode) };


      // orca Field Functions 
      bool hasOrca() const { return this->orca_ != nullptr;};
      void deleteOrca() { this->orca_ = nullptr;};
      inline string getOrca() const { DARABONBA_PTR_GET_DEFAULT(orca_, "") };
      inline DBNodes& setOrca(string orca) { DARABONBA_PTR_SET_VALUE(orca_, orca) };


      // remoteMemorySize Field Functions 
      bool hasRemoteMemorySize() const { return this->remoteMemorySize_ != nullptr;};
      void deleteRemoteMemorySize() { this->remoteMemorySize_ = nullptr;};
      inline string getRemoteMemorySize() const { DARABONBA_PTR_GET_DEFAULT(remoteMemorySize_, "") };
      inline DBNodes& setRemoteMemorySize(string remoteMemorySize) { DARABONBA_PTR_SET_VALUE(remoteMemorySize_, remoteMemorySize) };


      // sccMode Field Functions 
      bool hasSccMode() const { return this->sccMode_ != nullptr;};
      void deleteSccMode() { this->sccMode_ = nullptr;};
      inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
      inline DBNodes& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


      // serverWeight Field Functions 
      bool hasServerWeight() const { return this->serverWeight_ != nullptr;};
      void deleteServerWeight() { this->serverWeight_ = nullptr;};
      inline string getServerWeight() const { DARABONBA_PTR_GET_DEFAULT(serverWeight_, "") };
      inline DBNodes& setServerWeight(string serverWeight) { DARABONBA_PTR_SET_VALUE(serverWeight_, serverWeight) };


      // serverlessType Field Functions 
      bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
      void deleteServerlessType() { this->serverlessType_ = nullptr;};
      inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
      inline DBNodes& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


      // subCluster Field Functions 
      bool hasSubCluster() const { return this->subCluster_ != nullptr;};
      void deleteSubCluster() { this->subCluster_ = nullptr;};
      inline string getSubCluster() const { DARABONBA_PTR_GET_DEFAULT(subCluster_, "") };
      inline DBNodes& setSubCluster(string subCluster) { DARABONBA_PTR_SET_VALUE(subCluster_, subCluster) };


      // subGroupDescription Field Functions 
      bool hasSubGroupDescription() const { return this->subGroupDescription_ != nullptr;};
      void deleteSubGroupDescription() { this->subGroupDescription_ = nullptr;};
      inline string getSubGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(subGroupDescription_, "") };
      inline DBNodes& setSubGroupDescription(string subGroupDescription) { DARABONBA_PTR_SET_VALUE(subGroupDescription_, subGroupDescription) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Number of CPU cores for second-level elastic scaling.
      shared_ptr<string> addedCpuCores_ {};
      // Number of CPU cores for the node.
      shared_ptr<string> cpuCores_ {};
      // Node creation time.
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> DBNodeCXLRemoteMemory_ {};
      // Node specification.
      shared_ptr<string> DBNodeClass_ {};
      shared_ptr<string> DBNodeDescription_ {};
      // Node ID.
      shared_ptr<string> DBNodeId_ {};
      // Node role, with possible values as follows:
      // 
      // - **Writer**: Primary node.
      // - **Reader**: Read-only node.
      shared_ptr<string> DBNodeRole_ {};
      // Node status, with possible values as follows:
      // * **Creating**: Creating
      // * **Running**: Running
      // * **Deleting**: Deleting
      // * **Rebooting**: Rebooting
      // * **DBNodeCreating**: Adding node
      // * **DBNodeDeleting**: Removing node
      // * **ClassChanging**: Modifying node specification
      // * **NetAddressCreating**: Creating network connection
      // * **NetAddressDeleting**: Deleting network connection
      // * **NetAddressModifying**: Modifying network connection
      // * **MinorVersionUpgrading**: Upgrading minor version
      // * **Maintaining**: Instance maintenance
      // * **Switching**: Switching
      shared_ptr<string> DBNodeStatus_ {};
      // Failover priority. Each node has a failover priority, determining the likelihood of being elected as the primary node during a failover. A higher value indicates a higher priority.
      // Range: 1 to 15.
      shared_ptr<int32_t> failoverPriority_ {};
      // Whether hot standby is enabled. Possible values are:
      // 
      // - **ON**: Enabled
      // - **OFF**: Disabled
      shared_ptr<string> hotReplicaMode_ {};
      // Whether columnar index is enabled. Possible values are:
      // 
      // - **ON**: Enabled
      // - **OFF**: Disabled
      shared_ptr<string> imciSwitch_ {};
      // Primary node ID of the multi-master architecture cluster edition.
      shared_ptr<string> masterId_ {};
      // Maximum concurrent connections of the cluster.
      shared_ptr<int32_t> maxConnections_ {};
      // Maximum number of I/O requests, that is, IOPS.
      shared_ptr<int32_t> maxIOPS_ {};
      // Node memory size, in MB.
      shared_ptr<string> memorySize_ {};
      // The name of the hot standby compute node corresponding to the node when the hot standby storage and compute clusters feature is enabled.
      shared_ptr<string> mirrorInsName_ {};
      shared_ptr<string> multiMasterLocalStandby_ {};
      shared_ptr<string> multiMasterPrimaryNode_ {};
      // Orca feature, valid values are:
      // - on: enabled
      // - off: disabled
      shared_ptr<string> orca_ {};
      // Remote memory size, in MB.
      shared_ptr<string> remoteMemorySize_ {};
      // Whether the node has the global consistency (high-performance mode) feature enabled. Possible values are:
      // 
      // - **ON**: Enabled
      // 
      // - **OFF**: Disabled
      // 
      // This parameter is required.
      shared_ptr<string> sccMode_ {};
      // Routing weight.
      // Range: 1~100. Default is 1.
      shared_ptr<string> serverWeight_ {};
      // Serverless type. Possible values include:
      // 
      // - **AgileServerless**: Agile
      // - **SteadyServerless**: Steady
      // 
      // > This parameter is only supported by Serverless clusters.
      shared_ptr<string> serverlessType_ {};
      // Identifies whether the node is in the primary or standby availability zone, primarily used in resource mirroring scenarios.
      // Values include:
      // - **Primary**: Primary Availability Zone
      // - **Standby**: Standby Availability Zone
      shared_ptr<string> subCluster_ {};
      shared_ptr<string> subGroupDescription_ {};
      // Availability zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->aiCreatingTime_ == nullptr
        && this->aiType_ == nullptr && this->architecture_ == nullptr && this->autoUpgradeMinorVersion_ == nullptr && this->blktagTotal_ == nullptr && this->blktagUsed_ == nullptr
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->compressStorageMode_ == nullptr && this->compressStorageUsed_ == nullptr && this->creationTime_ == nullptr
        && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodes_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->DBVersionStatus_ == nullptr && this->dataLevel1BackupChainSize_ == nullptr && this->dataSyncMode_ == nullptr
        && this->deletionLock_ == nullptr && this->engine_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->hasCompleteStandbyRes_ == nullptr
        && this->hotStandbyCluster_ == nullptr && this->imciAutoIndex_ == nullptr && this->imperceptibleSwitch_ == nullptr && this->inodeTotal_ == nullptr && this->inodeUsed_ == nullptr
        && this->isLatestVersion_ == nullptr && this->isProxyLatestVersion_ == nullptr && this->lockMode_ == nullptr && this->maintainTime_ == nullptr && this->orca_ == nullptr
        && this->payType_ == nullptr && this->provisionedIops_ == nullptr && this->proxyCpuCores_ == nullptr && this->proxyServerlessType_ == nullptr && this->proxyStandardCpuCores_ == nullptr
        && this->proxyStatus_ == nullptr && this->proxyType_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->restoreDataPoint_ == nullptr && this->restoreType_ == nullptr && this->rowCompression_ == nullptr && this->SQLSize_ == nullptr && this->searchClusterStatus_ == nullptr
        && this->searchCompressStorageUsed_ == nullptr && this->searchStorageUsed_ == nullptr && this->serverlessType_ == nullptr && this->sourceDBCluster_ == nullptr && this->sourceRegionId_ == nullptr
        && this->standbyHAMode_ == nullptr && this->storageMax_ == nullptr && this->storagePayType_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr
        && this->storageUsed_ == nullptr && this->strictConsistency_ == nullptr && this->subCategory_ == nullptr && this->supportInstantSwitchWithImci_ == nullptr && this->tags_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneIds_ == nullptr; };
    // aiCreatingTime Field Functions 
    bool hasAiCreatingTime() const { return this->aiCreatingTime_ != nullptr;};
    void deleteAiCreatingTime() { this->aiCreatingTime_ = nullptr;};
    inline string getAiCreatingTime() const { DARABONBA_PTR_GET_DEFAULT(aiCreatingTime_, "") };
    inline DescribeDBClusterAttributeResponseBody& setAiCreatingTime(string aiCreatingTime) { DARABONBA_PTR_SET_VALUE(aiCreatingTime_, aiCreatingTime) };


    // aiType Field Functions 
    bool hasAiType() const { return this->aiType_ != nullptr;};
    void deleteAiType() { this->aiType_ = nullptr;};
    inline string getAiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeDBClusterAttributeResponseBody& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string getAutoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline DescribeDBClusterAttributeResponseBody& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // blktagTotal Field Functions 
    bool hasBlktagTotal() const { return this->blktagTotal_ != nullptr;};
    void deleteBlktagTotal() { this->blktagTotal_ = nullptr;};
    inline int64_t getBlktagTotal() const { DARABONBA_PTR_GET_DEFAULT(blktagTotal_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setBlktagTotal(int64_t blktagTotal) { DARABONBA_PTR_SET_VALUE(blktagTotal_, blktagTotal) };


    // blktagUsed Field Functions 
    bool hasBlktagUsed() const { return this->blktagUsed_ != nullptr;};
    void deleteBlktagUsed() { this->blktagUsed_ = nullptr;};
    inline int64_t getBlktagUsed() const { DARABONBA_PTR_GET_DEFAULT(blktagUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setBlktagUsed(int64_t blktagUsed) { DARABONBA_PTR_SET_VALUE(blktagUsed_, blktagUsed) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline DescribeDBClusterAttributeResponseBody& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClusterAttributeResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressStorageMode Field Functions 
    bool hasCompressStorageMode() const { return this->compressStorageMode_ != nullptr;};
    void deleteCompressStorageMode() { this->compressStorageMode_ = nullptr;};
    inline string getCompressStorageMode() const { DARABONBA_PTR_GET_DEFAULT(compressStorageMode_, "") };
    inline DescribeDBClusterAttributeResponseBody& setCompressStorageMode(string compressStorageMode) { DARABONBA_PTR_SET_VALUE(compressStorageMode_, compressStorageMode) };


    // compressStorageUsed Field Functions 
    bool hasCompressStorageUsed() const { return this->compressStorageUsed_ != nullptr;};
    void deleteCompressStorageUsed() { this->compressStorageUsed_ = nullptr;};
    inline int64_t getCompressStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(compressStorageUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setCompressStorageUsed(int64_t compressStorageUsed) { DARABONBA_PTR_SET_VALUE(compressStorageUsed_, compressStorageUsed) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDBClusterAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<DescribeDBClusterAttributeResponseBody::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DescribeDBClusterAttributeResponseBody::DBNodes>) };
    inline vector<DescribeDBClusterAttributeResponseBody::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DescribeDBClusterAttributeResponseBody::DBNodes>) };
    inline DescribeDBClusterAttributeResponseBody& setDBNodes(const vector<DescribeDBClusterAttributeResponseBody::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
    inline DescribeDBClusterAttributeResponseBody& setDBNodes(vector<DescribeDBClusterAttributeResponseBody::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // DBVersionStatus Field Functions 
    bool hasDBVersionStatus() const { return this->DBVersionStatus_ != nullptr;};
    void deleteDBVersionStatus() { this->DBVersionStatus_ = nullptr;};
    inline string getDBVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBVersionStatus_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDBVersionStatus(string DBVersionStatus) { DARABONBA_PTR_SET_VALUE(DBVersionStatus_, DBVersionStatus) };


    // dataLevel1BackupChainSize Field Functions 
    bool hasDataLevel1BackupChainSize() const { return this->dataLevel1BackupChainSize_ != nullptr;};
    void deleteDataLevel1BackupChainSize() { this->dataLevel1BackupChainSize_ = nullptr;};
    inline int64_t getDataLevel1BackupChainSize() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupChainSize_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setDataLevel1BackupChainSize(int64_t dataLevel1BackupChainSize) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupChainSize_, dataLevel1BackupChainSize) };


    // dataSyncMode Field Functions 
    bool hasDataSyncMode() const { return this->dataSyncMode_ != nullptr;};
    void deleteDataSyncMode() { this->dataSyncMode_ = nullptr;};
    inline string getDataSyncMode() const { DARABONBA_PTR_GET_DEFAULT(dataSyncMode_, "") };
    inline DescribeDBClusterAttributeResponseBody& setDataSyncMode(string dataSyncMode) { DARABONBA_PTR_SET_VALUE(dataSyncMode_, dataSyncMode) };


    // deletionLock Field Functions 
    bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
    void deleteDeletionLock() { this->deletionLock_ = nullptr;};
    inline int32_t getDeletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
    inline DescribeDBClusterAttributeResponseBody& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterAttributeResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClusterAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClusterAttributeResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // hasCompleteStandbyRes Field Functions 
    bool hasHasCompleteStandbyRes() const { return this->hasCompleteStandbyRes_ != nullptr;};
    void deleteHasCompleteStandbyRes() { this->hasCompleteStandbyRes_ = nullptr;};
    inline bool getHasCompleteStandbyRes() const { DARABONBA_PTR_GET_DEFAULT(hasCompleteStandbyRes_, false) };
    inline DescribeDBClusterAttributeResponseBody& setHasCompleteStandbyRes(bool hasCompleteStandbyRes) { DARABONBA_PTR_SET_VALUE(hasCompleteStandbyRes_, hasCompleteStandbyRes) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline DescribeDBClusterAttributeResponseBody& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // imciAutoIndex Field Functions 
    bool hasImciAutoIndex() const { return this->imciAutoIndex_ != nullptr;};
    void deleteImciAutoIndex() { this->imciAutoIndex_ = nullptr;};
    inline string getImciAutoIndex() const { DARABONBA_PTR_GET_DEFAULT(imciAutoIndex_, "") };
    inline DescribeDBClusterAttributeResponseBody& setImciAutoIndex(string imciAutoIndex) { DARABONBA_PTR_SET_VALUE(imciAutoIndex_, imciAutoIndex) };


    // imperceptibleSwitch Field Functions 
    bool hasImperceptibleSwitch() const { return this->imperceptibleSwitch_ != nullptr;};
    void deleteImperceptibleSwitch() { this->imperceptibleSwitch_ = nullptr;};
    inline string getImperceptibleSwitch() const { DARABONBA_PTR_GET_DEFAULT(imperceptibleSwitch_, "") };
    inline DescribeDBClusterAttributeResponseBody& setImperceptibleSwitch(string imperceptibleSwitch) { DARABONBA_PTR_SET_VALUE(imperceptibleSwitch_, imperceptibleSwitch) };


    // inodeTotal Field Functions 
    bool hasInodeTotal() const { return this->inodeTotal_ != nullptr;};
    void deleteInodeTotal() { this->inodeTotal_ = nullptr;};
    inline int64_t getInodeTotal() const { DARABONBA_PTR_GET_DEFAULT(inodeTotal_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setInodeTotal(int64_t inodeTotal) { DARABONBA_PTR_SET_VALUE(inodeTotal_, inodeTotal) };


    // inodeUsed Field Functions 
    bool hasInodeUsed() const { return this->inodeUsed_ != nullptr;};
    void deleteInodeUsed() { this->inodeUsed_ = nullptr;};
    inline int64_t getInodeUsed() const { DARABONBA_PTR_GET_DEFAULT(inodeUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setInodeUsed(int64_t inodeUsed) { DARABONBA_PTR_SET_VALUE(inodeUsed_, inodeUsed) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeDBClusterAttributeResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isProxyLatestVersion Field Functions 
    bool hasIsProxyLatestVersion() const { return this->isProxyLatestVersion_ != nullptr;};
    void deleteIsProxyLatestVersion() { this->isProxyLatestVersion_ = nullptr;};
    inline bool getIsProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isProxyLatestVersion_, false) };
    inline DescribeDBClusterAttributeResponseBody& setIsProxyLatestVersion(bool isProxyLatestVersion) { DARABONBA_PTR_SET_VALUE(isProxyLatestVersion_, isProxyLatestVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClusterAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDBClusterAttributeResponseBody& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // orca Field Functions 
    bool hasOrca() const { return this->orca_ != nullptr;};
    void deleteOrca() { this->orca_ = nullptr;};
    inline string getOrca() const { DARABONBA_PTR_GET_DEFAULT(orca_, "") };
    inline DescribeDBClusterAttributeResponseBody& setOrca(string orca) { DARABONBA_PTR_SET_VALUE(orca_, orca) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline string getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProvisionedIops(string provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // proxyCpuCores Field Functions 
    bool hasProxyCpuCores() const { return this->proxyCpuCores_ != nullptr;};
    void deleteProxyCpuCores() { this->proxyCpuCores_ = nullptr;};
    inline string getProxyCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyCpuCores_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProxyCpuCores(string proxyCpuCores) { DARABONBA_PTR_SET_VALUE(proxyCpuCores_, proxyCpuCores) };


    // proxyServerlessType Field Functions 
    bool hasProxyServerlessType() const { return this->proxyServerlessType_ != nullptr;};
    void deleteProxyServerlessType() { this->proxyServerlessType_ = nullptr;};
    inline string getProxyServerlessType() const { DARABONBA_PTR_GET_DEFAULT(proxyServerlessType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProxyServerlessType(string proxyServerlessType) { DARABONBA_PTR_SET_VALUE(proxyServerlessType_, proxyServerlessType) };


    // proxyStandardCpuCores Field Functions 
    bool hasProxyStandardCpuCores() const { return this->proxyStandardCpuCores_ != nullptr;};
    void deleteProxyStandardCpuCores() { this->proxyStandardCpuCores_ = nullptr;};
    inline string getProxyStandardCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyStandardCpuCores_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProxyStandardCpuCores(string proxyStandardCpuCores) { DARABONBA_PTR_SET_VALUE(proxyStandardCpuCores_, proxyStandardCpuCores) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restoreDataPoint Field Functions 
    bool hasRestoreDataPoint() const { return this->restoreDataPoint_ != nullptr;};
    void deleteRestoreDataPoint() { this->restoreDataPoint_ = nullptr;};
    inline string getRestoreDataPoint() const { DARABONBA_PTR_GET_DEFAULT(restoreDataPoint_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRestoreDataPoint(string restoreDataPoint) { DARABONBA_PTR_SET_VALUE(restoreDataPoint_, restoreDataPoint) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // rowCompression Field Functions 
    bool hasRowCompression() const { return this->rowCompression_ != nullptr;};
    void deleteRowCompression() { this->rowCompression_ = nullptr;};
    inline string getRowCompression() const { DARABONBA_PTR_GET_DEFAULT(rowCompression_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRowCompression(string rowCompression) { DARABONBA_PTR_SET_VALUE(rowCompression_, rowCompression) };


    // SQLSize Field Functions 
    bool hasSQLSize() const { return this->SQLSize_ != nullptr;};
    void deleteSQLSize() { this->SQLSize_ = nullptr;};
    inline int64_t getSQLSize() const { DARABONBA_PTR_GET_DEFAULT(SQLSize_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setSQLSize(int64_t SQLSize) { DARABONBA_PTR_SET_VALUE(SQLSize_, SQLSize) };


    // searchClusterStatus Field Functions 
    bool hasSearchClusterStatus() const { return this->searchClusterStatus_ != nullptr;};
    void deleteSearchClusterStatus() { this->searchClusterStatus_ = nullptr;};
    inline string getSearchClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(searchClusterStatus_, "") };
    inline DescribeDBClusterAttributeResponseBody& setSearchClusterStatus(string searchClusterStatus) { DARABONBA_PTR_SET_VALUE(searchClusterStatus_, searchClusterStatus) };


    // searchCompressStorageUsed Field Functions 
    bool hasSearchCompressStorageUsed() const { return this->searchCompressStorageUsed_ != nullptr;};
    void deleteSearchCompressStorageUsed() { this->searchCompressStorageUsed_ = nullptr;};
    inline int64_t getSearchCompressStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(searchCompressStorageUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setSearchCompressStorageUsed(int64_t searchCompressStorageUsed) { DARABONBA_PTR_SET_VALUE(searchCompressStorageUsed_, searchCompressStorageUsed) };


    // searchStorageUsed Field Functions 
    bool hasSearchStorageUsed() const { return this->searchStorageUsed_ != nullptr;};
    void deleteSearchStorageUsed() { this->searchStorageUsed_ = nullptr;};
    inline int64_t getSearchStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(searchStorageUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setSearchStorageUsed(int64_t searchStorageUsed) { DARABONBA_PTR_SET_VALUE(searchStorageUsed_, searchStorageUsed) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline string getSourceDBCluster() const { DARABONBA_PTR_GET_DEFAULT(sourceDBCluster_, "") };
    inline DescribeDBClusterAttributeResponseBody& setSourceDBCluster(string sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // standbyHAMode Field Functions 
    bool hasStandbyHAMode() const { return this->standbyHAMode_ != nullptr;};
    void deleteStandbyHAMode() { this->standbyHAMode_ = nullptr;};
    inline string getStandbyHAMode() const { DARABONBA_PTR_GET_DEFAULT(standbyHAMode_, "") };
    inline DescribeDBClusterAttributeResponseBody& setStandbyHAMode(string standbyHAMode) { DARABONBA_PTR_SET_VALUE(standbyHAMode_, standbyHAMode) };


    // storageMax Field Functions 
    bool hasStorageMax() const { return this->storageMax_ != nullptr;};
    void deleteStorageMax() { this->storageMax_ = nullptr;};
    inline int64_t getStorageMax() const { DARABONBA_PTR_GET_DEFAULT(storageMax_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setStorageMax(int64_t storageMax) { DARABONBA_PTR_SET_VALUE(storageMax_, storageMax) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string getStoragePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClusterAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string getStrictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline DescribeDBClusterAttributeResponseBody& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline DescribeDBClusterAttributeResponseBody& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


    // supportInstantSwitchWithImci Field Functions 
    bool hasSupportInstantSwitchWithImci() const { return this->supportInstantSwitchWithImci_ != nullptr;};
    void deleteSupportInstantSwitchWithImci() { this->supportInstantSwitchWithImci_ = nullptr;};
    inline string getSupportInstantSwitchWithImci() const { DARABONBA_PTR_GET_DEFAULT(supportInstantSwitchWithImci_, "") };
    inline DescribeDBClusterAttributeResponseBody& setSupportInstantSwitchWithImci(string supportInstantSwitchWithImci) { DARABONBA_PTR_SET_VALUE(supportInstantSwitchWithImci_, supportInstantSwitchWithImci) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDBClusterAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDBClusterAttributeResponseBody::Tags>) };
    inline vector<DescribeDBClusterAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeDBClusterAttributeResponseBody::Tags>) };
    inline DescribeDBClusterAttributeResponseBody& setTags(const vector<DescribeDBClusterAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClusterAttributeResponseBody& setTags(vector<DescribeDBClusterAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeDBClusterAttributeResponseBody& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    // Start time for free AI activation
    shared_ptr<string> aiCreatingTime_ {};
    // Types of AI nodes. Values include:
    // 
    // - **SearchNode**: Search node.
    // - **DLNode**: AI node.
    shared_ptr<string> aiType_ {};
    // CPU architecture. Available options are:
    // - **X86**
    // - **ARM**
    shared_ptr<string> architecture_ {};
    // The minor version upgrade method.
    // 
    // *   Auto
    // *   Manual
    shared_ptr<string> autoUpgradeMinorVersion_ {};
    // Maximum number of blktags in the file system.
    shared_ptr<int64_t> blktagTotal_ {};
    // Current blktag usage.
    shared_ptr<int64_t> blktagUsed_ {};
    shared_ptr<string> burstingEnabled_ {};
    // [Product Series](https://help.aliyun.com/document_detail/183258.html), with values as follows:
    // * **Normal**: Cluster Edition
    // * **Basic**: Single Node
    // * **Archive**: High Compression Engine (X-Engine)
    // * **NormalMultimaster**: Multi-Master Cluster Edition
    // * **SENormal**: Standard Edition
    // 
    // > * PolarDB PostgreSQL version 11 does not support single-node.
    // >* PolarDB MySQL versions 8.0 and 5.7, and PolarDB PostgreSQL version 14 support the Standard Edition.
    // >* PolarDB MySQL version 8.0 supports High Compression Engine (X-Engine) and Multi-Master Cluster Edition.
    shared_ptr<string> category_ {};
    // Whether storage compression is enabled. Values are as follows:
    // - ON: Enabled
    // - OFF: Disabled
    shared_ptr<string> compressStorageMode_ {};
    // Compressed storage data size.
    // > This parameter is supported only when the cluster\\"s storage compression feature is enabled.
    shared_ptr<int64_t> compressStorageUsed_ {};
    // Cluster creation time.
    shared_ptr<string> creationTime_ {};
    // Cluster description.
    shared_ptr<string> DBClusterDescription_ {};
    // Cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // Network type of the cluster.
    shared_ptr<string> DBClusterNetworkType_ {};
    // Cluster status. For the full list of values, refer to [Cluster Status Table](https://help.aliyun.com/document_detail/99286.html).
    shared_ptr<string> DBClusterStatus_ {};
    // The information about the nodes.
    shared_ptr<vector<DescribeDBClusterAttributeResponseBody::DBNodes>> DBNodes_ {};
    // Database engine type.
    shared_ptr<string> DBType_ {};
    // Database engine version.
    shared_ptr<string> DBVersion_ {};
    // The status of the minor version. Valid values:
    // 
    // *   **Stable**: The minor version is stable.
    // *   **Old**: The minor version is outdated. We recommend that you update it to the latest version.
    // *   **HighRisk**: The minor version has critical defects. We recommend that you immediately update it to the latest version.
    // *   **Beta**: The minor version is a Beta version.
    // 
    // >  For information about how to update the minor version, see [Minor version update](https://help.aliyun.com/document_detail/158572.html).
    shared_ptr<string> DBVersionStatus_ {};
    // Total size of Level 1 backups (snapshots), in bytes.
    shared_ptr<int64_t> dataLevel1BackupChainSize_ {};
    // Data replication relationship mode. Values are as follows:
    // - **AsyncSync**: Asynchronous
    // - **SemiSync**: Semi-synchronous
    shared_ptr<string> dataSyncMode_ {};
    // Lock status for cluster deletion, with values as follows:
    // * **0**: Unlocked, cluster can be deleted.
    // * **1**: Locked, cluster cannot be deleted.
    shared_ptr<int32_t> deletionLock_ {};
    // Cluster engine.
    shared_ptr<string> engine_ {};
    // Cluster expiration time.
    // 
    // > Only clusters with **Prepaid** (subscription) payment methods return specific parameter values; **Postpaid** (pay-as-you-go) clusters return empty values.
    shared_ptr<string> expireTime_ {};
    // Whether the cluster has expired.
    // > This parameter is only supported for clusters with **Prepaid** (Subscription) payment methods.
    shared_ptr<string> expired_ {};
    // Whether to replenish resources for the new primary after cross-AZ switch. Values are as follows:
    // - **true**: Yes
    // - **false**: No
    shared_ptr<bool> hasCompleteStandbyRes_ {};
    // Whether to enable storage hot backup cluster (and Standby compute nodes). Values are as follows:
    // - **StandbyClusterON**: Enable storage hot backup/Enable storage hot backup and Standby compute nodes.
    // - **StandbyClusterOFF**: Disable storage hot backup/Disable storage hot backup and Standby compute nodes.
    shared_ptr<string> hotStandbyCluster_ {};
    // Indicates whether the automatic IMCI-based query acceleration feature is enabled. Valid values:
    // 
    // *   `ON`: enabled
    // *   `OFF`: disabled
    shared_ptr<string> imciAutoIndex_ {};
    // Indicates whether failover with hot replica is enabled. Valid values:
    // 
    // *   `true`
    // *   `false` (default)
    shared_ptr<string> imperceptibleSwitch_ {};
    // Maximum number of inodes in the file system.
    shared_ptr<int64_t> inodeTotal_ {};
    // Current inode usage.
    shared_ptr<int64_t> inodeUsed_ {};
    // Indicates whether it is the latest kernel version. Values are as follows:
    // 
    // - **true**: Yes
    // 
    // - **false**: No
    shared_ptr<bool> isLatestVersion_ {};
    // Indicates whether it is the latest version of the database proxy, with possible values as follows:
    // 
    // - **true**: Yes
    // - **false**: No
    shared_ptr<bool> isProxyLatestVersion_ {};
    // Lock mode. Possible values are as follows:
    // 
    // - **Unlock**: Unlocked.
    // - **ManualLock**: Manually triggered lock.
    // - **LockByExpiration**: Automatic cluster lock upon expiration.
    shared_ptr<string> lockMode_ {};
    // The maintenance window for the cluster, formatted as `HH:mmZ-HH:mmZ` (UTC time). For example, `16:00Z-17:00Z` indicates that routine maintenance can be performed from 0:00 to 1:00 (UTC+08:00).
    shared_ptr<string> maintainTime_ {};
    // Orca function with possible values as follows:
    // 
    // - **on**: Enabled
    // 
    // - **off**: Disabled
    shared_ptr<string> orca_ {};
    // Payment type. Possible values are:
    // 
    // - **Postpaid**: Pay-As-You-Go
    // - **Prepaid**: Prepaid (Subscription).
    shared_ptr<string> payType_ {};
    // Describes the preconfigured read and write IOPS for ESSD AutoPL cloud disks. Possible values: 0 to min{50,000, 1000*capacity - baseline performance}.<br>Baseline performance = min{1,800 + 50*capacity, 50000}.<br>Note: This parameter is supported only when StorageType is ESSDAUTOPL.
    shared_ptr<string> provisionedIops_ {};
    // Number of CPU cores for the database proxy.
    shared_ptr<string> proxyCpuCores_ {};
    // Serverless type for the database proxy. Currently, the value is fixed to AgileServerless.
    shared_ptr<string> proxyServerlessType_ {};
    // Standard configuration CPU cores for the database proxy.
    shared_ptr<string> proxyStandardCpuCores_ {};
    // Status of the database proxy. Possible values include:
    // 
    // - **Creating**: Creating
    // - **Running**: Running
    // - **Deleting**: Releasing
    // - **Rebooting**: Restarting
    // - **DBNodeCreating**: Adding nodes
    // - **DBNodeDeleting**: Deleting nodes
    // - **ClassChanging**: Changing node specifications
    // - **NetAddressCreating**: Creating network connections
    // - **NetAddressDeleting**: Deleting network connections
    // - **NetAddressModifying**: Modifying network connections
    // - **Deleted**: Released
    shared_ptr<string> proxyStatus_ {};
    // Database proxy types, with the following values:
    // 
    // - **Exclusive**: Enterprise Exclusive Edition
    // - **General**: Enterprise General Purpose Edition
    shared_ptr<string> proxyType_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // If RestoreType is **RestoreByTime** or **RestoreByTimeOss**, this value represents the recovery time point. If RestoreType is **RestoreByBackupSet** or **RestoreByBackupSetOss**, this value indicates the ID of the backup set on which the recovery is based.
    // <note>Only clusters restored from a backup set or time point after June 1, 2024, support this parameter.</note>
    shared_ptr<string> restoreDataPoint_ {};
    // Cluster recovery method, with possible values:
    // * **RestoreByTime**: Restore from a time point based on primary backup. * **RestoreByBackupSet**: Restore from a backup set based on primary backup. * **RestoreByTimeOss**: Restore from a time point based on secondary backup. * **RestoreByBackupSetOss**: Restore from a backup set based on secondary backup. * **CloneFromSourceCluster**: Clone from the source cluster.
    // <note>This parameter is only supported for clusters restored from a backup set or time point after June 1, 2024.</note>
    shared_ptr<string> restoreType_ {};
    shared_ptr<string> rowCompression_ {};
    // Storage amount of SQL, in bytes. If the value is -1, it indicates no data.
    shared_ptr<int64_t> SQLSize_ {};
    shared_ptr<string> searchClusterStatus_ {};
    shared_ptr<int64_t> searchCompressStorageUsed_ {};
    shared_ptr<int64_t> searchStorageUsed_ {};
    // Serverless type. Valid values are as follows:
    // - AgileServerless: Agile - SteadyServerless: Stable
    shared_ptr<string> serverlessType_ {};
    // Source cluster ID. <note>Clusters restored from backup sets or specific points in time after June 1, 2024, support this parameter.</note>
    shared_ptr<string> sourceDBCluster_ {};
    // The region ID of the source cluster.
    // 
    // >  This parameter is returned only if the source cluster ID exists.
    shared_ptr<string> sourceRegionId_ {};
    // Cross-AZ disaster recovery mode. Values are as follows:
    // - **ON**: Enable cross-AZ disaster recovery mode.
    // - **OFF**: Disable cross-AZ disaster recovery mode.
    // - **0**: Customer drill mode.
    shared_ptr<string> standbyHAMode_ {};
    // The maximum storage capacity of the current cluster specification, in bytes.
    shared_ptr<int64_t> storageMax_ {};
    // Storage billing type. Valid values are as follows:
    // - **Postpaid**: Pay-as-you-go (by capacity).
    // - **Prepaid**: Subscription (by space).
    shared_ptr<string> storagePayType_ {};
    // Storage space for pay-by-space (subscription) billing. Unit: Byte.
    shared_ptr<int64_t> storageSpace_ {};
    // Storage type, with a fixed value of **HighPerformance**.
    shared_ptr<string> storageType_ {};
    // Amount of used storage space, in bytes.
    shared_ptr<int64_t> storageUsed_ {};
    // Indicates whether multi-AZ data strong consistency is enabled for the cluster. The value ranges are as follows:
    // - **ON**: Indicates that multi-AZ data strong consistency is enabled, applicable to the Standard 3AZ scenario.
    // - **OFF**: Indicates that multi-AZ data strong consistency is not enabled.
    shared_ptr<string> strictConsistency_ {};
    // Specification type of compute nodes, with possible values as follows:
    // * **Exclusive**: Dedicated specification
    // * **General**: General-purpose specification
    // 
    // > This parameter is supported only for PolarDB MySQL Edition with the product series set to Cluster Edition.
    shared_ptr<string> subCategory_ {};
    // Indicates whether queries based on In-Memory Column Indexes (IMCIs) are supported during and after a failover with hot replica.
    shared_ptr<string> supportInstantSwitchWithImci_ {};
    // Details of tags.
    shared_ptr<vector<DescribeDBClusterAttributeResponseBody::Tags>> tags_ {};
    // VPC ID.
    shared_ptr<string> VPCId_ {};
    // VSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // Availability Zone IDs.
    shared_ptr<string> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
