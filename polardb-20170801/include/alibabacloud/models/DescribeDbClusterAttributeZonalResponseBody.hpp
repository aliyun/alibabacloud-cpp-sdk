// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODY_HPP_
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
  class DescribeDbClusterAttributeZonalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbClusterAttributeZonalResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(DBClusterClass, DBClusterClass_);
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
    friend void from_json(const Darabonba::Json& j, DescribeDbClusterAttributeZonalResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(DBClusterClass, DBClusterClass_);
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
    DescribeDbClusterAttributeZonalResponseBody() = default ;
    DescribeDbClusterAttributeZonalResponseBody(const DescribeDbClusterAttributeZonalResponseBody &) = default ;
    DescribeDbClusterAttributeZonalResponseBody(DescribeDbClusterAttributeZonalResponseBody &&) = default ;
    DescribeDbClusterAttributeZonalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbClusterAttributeZonalResponseBody() = default ;
    DescribeDbClusterAttributeZonalResponseBody& operator=(const DescribeDbClusterAttributeZonalResponseBody &) = default ;
    DescribeDbClusterAttributeZonalResponseBody& operator=(DescribeDbClusterAttributeZonalResponseBody &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class DBNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
        DARABONBA_PTR_TO_JSON(AddedCpuCores, addedCpuCores_);
        DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
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
        && this->cpuCores_ == nullptr && this->creationTime_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeDescription_ == nullptr && this->DBNodeId_ == nullptr
        && this->DBNodeRole_ == nullptr && this->DBNodeStatus_ == nullptr && this->failoverPriority_ == nullptr && this->hotReplicaMode_ == nullptr && this->imciSwitch_ == nullptr
        && this->masterId_ == nullptr && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr && this->memorySize_ == nullptr && this->mirrorInsName_ == nullptr
        && this->multiMasterLocalStandby_ == nullptr && this->multiMasterPrimaryNode_ == nullptr && this->orca_ == nullptr && this->remoteMemorySize_ == nullptr && this->sccMode_ == nullptr
        && this->serverWeight_ == nullptr && this->serverlessType_ == nullptr && this->subCluster_ == nullptr && this->subGroupDescription_ == nullptr && this->zoneId_ == nullptr; };
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
      // The number of CPU cores for bursting.
      shared_ptr<string> addedCpuCores_ {};
      // The number of CPU cores in the node.
      shared_ptr<string> cpuCores_ {};
      // The time when the cluster was created.
      shared_ptr<string> creationTime_ {};
      // The node specifications.
      shared_ptr<string> DBNodeClass_ {};
      // The node description.
      shared_ptr<string> DBNodeDescription_ {};
      // The node ID.
      shared_ptr<string> DBNodeId_ {};
      // The node role. Valid values:
      // 
      // - **Writer**: The primary node.
      // 
      // - **Reader**: The read-only node.
      shared_ptr<string> DBNodeRole_ {};
      // The node status. Valid values:
      // 
      // - **Creating**: The node is being created.
      // 
      // - **Running**: The node is running.
      // 
      // - **Deleting**: The node is being deleted.
      // 
      // - **Rebooting**: The node is being restarted.
      // 
      // - **DBNodeCreating**: A node is being added.
      // 
      // - **DBNodeDeleting**: A node is being deleted.
      // 
      // - **ClassChanging**: The node specifications are being changed.
      // 
      // - **NetAddressCreating**: A network connection is being created.
      // 
      // - **NetAddressDeleting**: A network connection is being deleted.
      // 
      // - **NetAddressModifying**: A network connection is being modified.
      // 
      // - **MinorVersionUpgrading**: The minor version is being updated.
      // 
      // - **Maintaining**: The instance is under maintenance.
      // 
      // - **Switching**: A failover is in progress.
      shared_ptr<string> DBNodeStatus_ {};
      // The failover priority. Each node has a failover priority. A higher priority value indicates a higher probability that the node is elected as the primary node during a failover.
      // Valid values: 1 to 15.
      shared_ptr<int32_t> failoverPriority_ {};
      // Indicates whether hot standby is enabled. Valid values:
      // 
      // - **ON**: Enabled
      // 
      // - **OFF**: Disabled
      shared_ptr<string> hotReplicaMode_ {};
      // Indicates whether the In-Memory Column Index (IMCI) feature is enabled. Valid values:
      // 
      // - **ON**: Enabled
      // 
      // - **OFF**: Disabled
      shared_ptr<string> imciSwitch_ {};
      // The ID of the primary node in a Multi-master Cluster Edition cluster.
      shared_ptr<string> masterId_ {};
      // The maximum number of concurrent connections to the cluster.
      shared_ptr<int32_t> maxConnections_ {};
      // The maximum number of input/output operations per second (IOPS).
      shared_ptr<int32_t> maxIOPS_ {};
      // The memory size of the node. Unit: MB.
      shared_ptr<string> memorySize_ {};
      // The name of the hot replica compute node that corresponds to the node in an architecture where hot standby storage and hot standby compute are enabled.
      shared_ptr<string> mirrorInsName_ {};
      // MultiMasterLocalStandby
      shared_ptr<string> multiMasterLocalStandby_ {};
      // MultiMasterPrimaryNode
      shared_ptr<string> multiMasterPrimaryNode_ {};
      // The Orca feature. Valid values:
      // 
      // - on: Enabled
      // 
      // - off: Disabled
      shared_ptr<string> orca_ {};
      // The size of the remote memory. Unit: MB.
      shared_ptr<string> remoteMemorySize_ {};
      // Indicates whether the global consistency (high-performance mode) feature is enabled for the node. Valid values:
      // 
      // - **ON**: Enabled
      // 
      // - **OFF**: Disabled
      // 
      // This parameter is required.
      shared_ptr<string> sccMode_ {};
      // The routing weight.
      // Valid values: 1 to 100. Default value: 1.
      shared_ptr<string> serverWeight_ {};
      // The Serverless type. Valid values:
      // 
      // - AgileServerless: Agile
      // 
      // - SteadyServerless: Steady
      shared_ptr<string> serverlessType_ {};
      // Indicates whether the node is in the primary or secondary zone. This parameter is mainly used for resource peering.
      // Valid values:
      // 
      // - Primary: The primary zone
      // 
      // - Standby: The secondary zone
      shared_ptr<string> subCluster_ {};
      // SubGroupDescription
      shared_ptr<string> subGroupDescription_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->aiCreatingTime_ == nullptr
        && this->aiType_ == nullptr && this->architecture_ == nullptr && this->autoUpgradeMinorVersion_ == nullptr && this->blktagTotal_ == nullptr && this->blktagUsed_ == nullptr
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->compressStorageMode_ == nullptr && this->compressStorageUsed_ == nullptr && this->creationTime_ == nullptr
        && this->DBClusterClass_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr
        && this->DBNodes_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->DBVersionStatus_ == nullptr && this->dataLevel1BackupChainSize_ == nullptr
        && this->dataSyncMode_ == nullptr && this->deletionLock_ == nullptr && this->engine_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr
        && this->hasCompleteStandbyRes_ == nullptr && this->hotStandbyCluster_ == nullptr && this->imciAutoIndex_ == nullptr && this->imperceptibleSwitch_ == nullptr && this->inodeTotal_ == nullptr
        && this->inodeUsed_ == nullptr && this->isLatestVersion_ == nullptr && this->isProxyLatestVersion_ == nullptr && this->lockMode_ == nullptr && this->maintainTime_ == nullptr
        && this->orca_ == nullptr && this->payType_ == nullptr && this->provisionedIops_ == nullptr && this->proxyCpuCores_ == nullptr && this->proxyServerlessType_ == nullptr
        && this->proxyStandardCpuCores_ == nullptr && this->proxyStatus_ == nullptr && this->proxyType_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->restoreDataPoint_ == nullptr && this->restoreType_ == nullptr && this->rowCompression_ == nullptr && this->SQLSize_ == nullptr
        && this->serverlessType_ == nullptr && this->sourceDBCluster_ == nullptr && this->sourceRegionId_ == nullptr && this->standbyHAMode_ == nullptr && this->storageMax_ == nullptr
        && this->storagePayType_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->storageUsed_ == nullptr && this->strictConsistency_ == nullptr
        && this->subCategory_ == nullptr && this->supportInstantSwitchWithImci_ == nullptr && this->tags_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneIds_ == nullptr; };
    // aiCreatingTime Field Functions 
    bool hasAiCreatingTime() const { return this->aiCreatingTime_ != nullptr;};
    void deleteAiCreatingTime() { this->aiCreatingTime_ = nullptr;};
    inline string getAiCreatingTime() const { DARABONBA_PTR_GET_DEFAULT(aiCreatingTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAiCreatingTime(string aiCreatingTime) { DARABONBA_PTR_SET_VALUE(aiCreatingTime_, aiCreatingTime) };


    // aiType Field Functions 
    bool hasAiType() const { return this->aiType_ != nullptr;};
    void deleteAiType() { this->aiType_ = nullptr;};
    inline string getAiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string getAutoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // blktagTotal Field Functions 
    bool hasBlktagTotal() const { return this->blktagTotal_ != nullptr;};
    void deleteBlktagTotal() { this->blktagTotal_ = nullptr;};
    inline int64_t getBlktagTotal() const { DARABONBA_PTR_GET_DEFAULT(blktagTotal_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setBlktagTotal(int64_t blktagTotal) { DARABONBA_PTR_SET_VALUE(blktagTotal_, blktagTotal) };


    // blktagUsed Field Functions 
    bool hasBlktagUsed() const { return this->blktagUsed_ != nullptr;};
    void deleteBlktagUsed() { this->blktagUsed_ = nullptr;};
    inline int64_t getBlktagUsed() const { DARABONBA_PTR_GET_DEFAULT(blktagUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setBlktagUsed(int64_t blktagUsed) { DARABONBA_PTR_SET_VALUE(blktagUsed_, blktagUsed) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressStorageMode Field Functions 
    bool hasCompressStorageMode() const { return this->compressStorageMode_ != nullptr;};
    void deleteCompressStorageMode() { this->compressStorageMode_ = nullptr;};
    inline string getCompressStorageMode() const { DARABONBA_PTR_GET_DEFAULT(compressStorageMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCompressStorageMode(string compressStorageMode) { DARABONBA_PTR_SET_VALUE(compressStorageMode_, compressStorageMode) };


    // compressStorageUsed Field Functions 
    bool hasCompressStorageUsed() const { return this->compressStorageUsed_ != nullptr;};
    void deleteCompressStorageUsed() { this->compressStorageUsed_ = nullptr;};
    inline int64_t getCompressStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(compressStorageUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setCompressStorageUsed(int64_t compressStorageUsed) { DARABONBA_PTR_SET_VALUE(compressStorageUsed_, compressStorageUsed) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string getDBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes>) };
    inline vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes>) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBNodes(const vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBNodes(vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // DBVersionStatus Field Functions 
    bool hasDBVersionStatus() const { return this->DBVersionStatus_ != nullptr;};
    void deleteDBVersionStatus() { this->DBVersionStatus_ = nullptr;};
    inline string getDBVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBVersionStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBVersionStatus(string DBVersionStatus) { DARABONBA_PTR_SET_VALUE(DBVersionStatus_, DBVersionStatus) };


    // dataLevel1BackupChainSize Field Functions 
    bool hasDataLevel1BackupChainSize() const { return this->dataLevel1BackupChainSize_ != nullptr;};
    void deleteDataLevel1BackupChainSize() { this->dataLevel1BackupChainSize_ = nullptr;};
    inline int64_t getDataLevel1BackupChainSize() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupChainSize_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDataLevel1BackupChainSize(int64_t dataLevel1BackupChainSize) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupChainSize_, dataLevel1BackupChainSize) };


    // dataSyncMode Field Functions 
    bool hasDataSyncMode() const { return this->dataSyncMode_ != nullptr;};
    void deleteDataSyncMode() { this->dataSyncMode_ = nullptr;};
    inline string getDataSyncMode() const { DARABONBA_PTR_GET_DEFAULT(dataSyncMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDataSyncMode(string dataSyncMode) { DARABONBA_PTR_SET_VALUE(dataSyncMode_, dataSyncMode) };


    // deletionLock Field Functions 
    bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
    void deleteDeletionLock() { this->deletionLock_ = nullptr;};
    inline int32_t getDeletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // hasCompleteStandbyRes Field Functions 
    bool hasHasCompleteStandbyRes() const { return this->hasCompleteStandbyRes_ != nullptr;};
    void deleteHasCompleteStandbyRes() { this->hasCompleteStandbyRes_ = nullptr;};
    inline bool getHasCompleteStandbyRes() const { DARABONBA_PTR_GET_DEFAULT(hasCompleteStandbyRes_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setHasCompleteStandbyRes(bool hasCompleteStandbyRes) { DARABONBA_PTR_SET_VALUE(hasCompleteStandbyRes_, hasCompleteStandbyRes) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // imciAutoIndex Field Functions 
    bool hasImciAutoIndex() const { return this->imciAutoIndex_ != nullptr;};
    void deleteImciAutoIndex() { this->imciAutoIndex_ = nullptr;};
    inline string getImciAutoIndex() const { DARABONBA_PTR_GET_DEFAULT(imciAutoIndex_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setImciAutoIndex(string imciAutoIndex) { DARABONBA_PTR_SET_VALUE(imciAutoIndex_, imciAutoIndex) };


    // imperceptibleSwitch Field Functions 
    bool hasImperceptibleSwitch() const { return this->imperceptibleSwitch_ != nullptr;};
    void deleteImperceptibleSwitch() { this->imperceptibleSwitch_ = nullptr;};
    inline string getImperceptibleSwitch() const { DARABONBA_PTR_GET_DEFAULT(imperceptibleSwitch_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setImperceptibleSwitch(string imperceptibleSwitch) { DARABONBA_PTR_SET_VALUE(imperceptibleSwitch_, imperceptibleSwitch) };


    // inodeTotal Field Functions 
    bool hasInodeTotal() const { return this->inodeTotal_ != nullptr;};
    void deleteInodeTotal() { this->inodeTotal_ = nullptr;};
    inline int64_t getInodeTotal() const { DARABONBA_PTR_GET_DEFAULT(inodeTotal_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setInodeTotal(int64_t inodeTotal) { DARABONBA_PTR_SET_VALUE(inodeTotal_, inodeTotal) };


    // inodeUsed Field Functions 
    bool hasInodeUsed() const { return this->inodeUsed_ != nullptr;};
    void deleteInodeUsed() { this->inodeUsed_ = nullptr;};
    inline int64_t getInodeUsed() const { DARABONBA_PTR_GET_DEFAULT(inodeUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setInodeUsed(int64_t inodeUsed) { DARABONBA_PTR_SET_VALUE(inodeUsed_, inodeUsed) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isProxyLatestVersion Field Functions 
    bool hasIsProxyLatestVersion() const { return this->isProxyLatestVersion_ != nullptr;};
    void deleteIsProxyLatestVersion() { this->isProxyLatestVersion_ = nullptr;};
    inline bool getIsProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isProxyLatestVersion_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setIsProxyLatestVersion(bool isProxyLatestVersion) { DARABONBA_PTR_SET_VALUE(isProxyLatestVersion_, isProxyLatestVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // orca Field Functions 
    bool hasOrca() const { return this->orca_ != nullptr;};
    void deleteOrca() { this->orca_ = nullptr;};
    inline string getOrca() const { DARABONBA_PTR_GET_DEFAULT(orca_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setOrca(string orca) { DARABONBA_PTR_SET_VALUE(orca_, orca) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline string getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProvisionedIops(string provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // proxyCpuCores Field Functions 
    bool hasProxyCpuCores() const { return this->proxyCpuCores_ != nullptr;};
    void deleteProxyCpuCores() { this->proxyCpuCores_ = nullptr;};
    inline string getProxyCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyCpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyCpuCores(string proxyCpuCores) { DARABONBA_PTR_SET_VALUE(proxyCpuCores_, proxyCpuCores) };


    // proxyServerlessType Field Functions 
    bool hasProxyServerlessType() const { return this->proxyServerlessType_ != nullptr;};
    void deleteProxyServerlessType() { this->proxyServerlessType_ = nullptr;};
    inline string getProxyServerlessType() const { DARABONBA_PTR_GET_DEFAULT(proxyServerlessType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyServerlessType(string proxyServerlessType) { DARABONBA_PTR_SET_VALUE(proxyServerlessType_, proxyServerlessType) };


    // proxyStandardCpuCores Field Functions 
    bool hasProxyStandardCpuCores() const { return this->proxyStandardCpuCores_ != nullptr;};
    void deleteProxyStandardCpuCores() { this->proxyStandardCpuCores_ = nullptr;};
    inline string getProxyStandardCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyStandardCpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyStandardCpuCores(string proxyStandardCpuCores) { DARABONBA_PTR_SET_VALUE(proxyStandardCpuCores_, proxyStandardCpuCores) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restoreDataPoint Field Functions 
    bool hasRestoreDataPoint() const { return this->restoreDataPoint_ != nullptr;};
    void deleteRestoreDataPoint() { this->restoreDataPoint_ = nullptr;};
    inline string getRestoreDataPoint() const { DARABONBA_PTR_GET_DEFAULT(restoreDataPoint_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRestoreDataPoint(string restoreDataPoint) { DARABONBA_PTR_SET_VALUE(restoreDataPoint_, restoreDataPoint) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // rowCompression Field Functions 
    bool hasRowCompression() const { return this->rowCompression_ != nullptr;};
    void deleteRowCompression() { this->rowCompression_ = nullptr;};
    inline string getRowCompression() const { DARABONBA_PTR_GET_DEFAULT(rowCompression_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRowCompression(string rowCompression) { DARABONBA_PTR_SET_VALUE(rowCompression_, rowCompression) };


    // SQLSize Field Functions 
    bool hasSQLSize() const { return this->SQLSize_ != nullptr;};
    void deleteSQLSize() { this->SQLSize_ = nullptr;};
    inline int64_t getSQLSize() const { DARABONBA_PTR_GET_DEFAULT(SQLSize_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setSQLSize(int64_t SQLSize) { DARABONBA_PTR_SET_VALUE(SQLSize_, SQLSize) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline string getSourceDBCluster() const { DARABONBA_PTR_GET_DEFAULT(sourceDBCluster_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSourceDBCluster(string sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // standbyHAMode Field Functions 
    bool hasStandbyHAMode() const { return this->standbyHAMode_ != nullptr;};
    void deleteStandbyHAMode() { this->standbyHAMode_ = nullptr;};
    inline string getStandbyHAMode() const { DARABONBA_PTR_GET_DEFAULT(standbyHAMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStandbyHAMode(string standbyHAMode) { DARABONBA_PTR_SET_VALUE(standbyHAMode_, standbyHAMode) };


    // storageMax Field Functions 
    bool hasStorageMax() const { return this->storageMax_ != nullptr;};
    void deleteStorageMax() { this->storageMax_ = nullptr;};
    inline int64_t getStorageMax() const { DARABONBA_PTR_GET_DEFAULT(storageMax_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageMax(int64_t storageMax) { DARABONBA_PTR_SET_VALUE(storageMax_, storageMax) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string getStoragePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string getStrictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


    // supportInstantSwitchWithImci Field Functions 
    bool hasSupportInstantSwitchWithImci() const { return this->supportInstantSwitchWithImci_ != nullptr;};
    void deleteSupportInstantSwitchWithImci() { this->supportInstantSwitchWithImci_ = nullptr;};
    inline string getSupportInstantSwitchWithImci() const { DARABONBA_PTR_GET_DEFAULT(supportInstantSwitchWithImci_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSupportInstantSwitchWithImci(string supportInstantSwitchWithImci) { DARABONBA_PTR_SET_VALUE(supportInstantSwitchWithImci_, supportInstantSwitchWithImci) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDbClusterAttributeZonalResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDbClusterAttributeZonalResponseBody::Tags>) };
    inline vector<DescribeDbClusterAttributeZonalResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeDbClusterAttributeZonalResponseBody::Tags>) };
    inline DescribeDbClusterAttributeZonalResponseBody& setTags(const vector<DescribeDbClusterAttributeZonalResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDbClusterAttributeZonalResponseBody& setTags(vector<DescribeDbClusterAttributeZonalResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    // The start time of the free trial for the AI feature
    shared_ptr<string> aiCreatingTime_ {};
    // The AI node type. Valid values:
    // 
    // - **SearchNode**: Search node.
    // 
    // - **DLNode**: AI node.
    shared_ptr<string> aiType_ {};
    // The CPU architecture. Valid values:
    // 
    // - **X86**
    // 
    // - **ARM**
    shared_ptr<string> architecture_ {};
    // The upgrade method for the minor version
    // 
    // - Auto: Automatic upgrade
    // 
    // - Manual: Manual upgrade
    shared_ptr<string> autoUpgradeMinorVersion_ {};
    // The maximum number of blktags for the file system.
    shared_ptr<int64_t> blktagTotal_ {};
    // The number of used blktags.
    shared_ptr<int64_t> blktagUsed_ {};
    // Indicates whether the I/O performance burst feature is enabled for the ESSD AutoPL disk. Valid values:
    // 
    // - **true**: Enabled
    // 
    // - **false**: Disabled
    shared_ptr<string> burstingEnabled_ {};
    // The [product edition](https://help.aliyun.com/document_detail/183258.html). Valid values:
    // 
    // - **Normal**: Cluster Edition
    // 
    // - **Basic**: Single Node
    // 
    // - **Archive**: X-Engine
    // 
    // - **NormalMultimaster**: Multi-master Cluster Edition
    // 
    // - **SENormal**: Standard Edition
    // 
    // > * PolarDB for PostgreSQL clusters of PostgreSQL 11 do not support the single node edition.
    // >
    // > * PolarDB for MySQL clusters of 8.0 and 5.7, and PolarDB for PostgreSQL clusters of PostgreSQL 14 support the Standard Edition.
    // >
    // > * PolarDB for MySQL clusters of 8.0 support X-Engine and the Multi-master Cluster Edition.
    shared_ptr<string> category_ {};
    // Indicates whether storage compression is enabled. Valid values:
    // 
    // - ON: Enabled
    // 
    // - OFF: Disabled
    shared_ptr<string> compressStorageMode_ {};
    // The size of the compressed data in storage.
    // 
    // > This parameter is returned only when storage compression is enabled for the cluster.
    shared_ptr<int64_t> compressStorageUsed_ {};
    // The time when the cluster was created.
    shared_ptr<string> creationTime_ {};
    // The cluster specifications.
    shared_ptr<string> DBClusterClass_ {};
    // The cluster description.
    shared_ptr<string> DBClusterDescription_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The network type of the cluster.
    shared_ptr<string> DBClusterNetworkType_ {};
    // The cluster status. Valid values:
    // 
    // - **Creating**: The cluster is being created.
    // 
    // - **Running**: The cluster is running.
    // 
    // - **Deleting**: The cluster is being released.
    // 
    // - **Rebooting**: The cluster is being restarted.
    // 
    // - **DBNodeCreating**: A node is being added.
    // 
    // - **DBNodeDeleting**: A node is being deleted.
    // 
    // - **ClassChanging**: The node specifications are being changed.
    // 
    // - **NetAddressCreating**: A network connection is being created.
    // 
    // - **NetAddressDeleting**: A network connection is being deleted.
    // 
    // - **NetAddressModifying**: A network connection is being modified.
    // 
    // - **Deleted**: The cluster is released.
    // 
    // - **ClassChanged**: Resources are being reclaimed after an upgrade or downgrade.
    shared_ptr<string> DBClusterStatus_ {};
    // The details of the node information.
    shared_ptr<vector<DescribeDbClusterAttributeZonalResponseBody::DBNodes>> DBNodes_ {};
    // The database engine type.
    shared_ptr<string> DBType_ {};
    // The database engine version.
    shared_ptr<string> DBVersion_ {};
    // The status of the current minor version of the database. Valid values:
    // 
    // - **Stable**: The current version is stable.
    // 
    // - **Old**: The current version is old. We recommend that you upgrade the cluster to the latest version.
    // 
    // - **HighRisk**: The current version has critical bugs. Upgrade the cluster to the latest version immediately.
    // 
    // - **Beta**: The current version is a beta version.
    // 
    // > * For more information about how to upgrade the minor engine version, see [Upgrade versions](https://help.aliyun.com/document_detail/158572.html).
    // >
    // > * This parameter is returned only when the **DBType** parameter is set to **MySQL**.
    shared_ptr<string> DBVersionStatus_ {};
    // The total size of level-1 backups (snapshots). Unit: bytes.
    shared_ptr<int64_t> dataLevel1BackupChainSize_ {};
    // The data replication relationship mode. Valid values:
    // 
    // - **AsyncSync**: Asynchronous
    // 
    // - **SemiSync**: Semi-synchronous
    shared_ptr<string> dataSyncMode_ {};
    // The lock state of the cluster for deletion. Valid values:
    // 
    // - **0**: The cluster is not locked and can be deleted.
    // 
    // - **1**: The cluster is locked and cannot be deleted.
    shared_ptr<int32_t> deletionLock_ {};
    // The database engine.
    shared_ptr<string> engine_ {};
    // The expiration time of the cluster.
    // 
    // > This parameter is returned only for **Prepaid** (subscription) clusters. An empty value is returned for **Postpaid** (pay-as-you-go) clusters.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the cluster has expired.
    // 
    // > This parameter is returned only for subscription clusters.
    shared_ptr<string> expired_ {};
    // Indicates whether resources of the new primary database are supplemented after a cross-zone failover. Valid values:
    // 
    // - **true**: Yes
    // 
    // - **false**: No
    shared_ptr<bool> hasCompleteStandbyRes_ {};
    // Indicates whether the hot standby storage cluster (and standby compute nodes) feature is enabled. Valid values:
    // 
    // - **StandbyClusterON**: The hot standby storage cluster feature or both the hot standby storage cluster and standby compute node features are enabled.
    // 
    // - **StandbyClusterOFF**: The hot standby storage cluster feature or both the hot standby storage cluster and standby compute node features are disabled.
    shared_ptr<string> hotStandbyCluster_ {};
    // The automatic IMCI-based query acceleration feature. Valid values:
    // 
    // - `ON`: Enabled.
    // 
    // - `OFF`: Disabled.
    shared_ptr<string> imciAutoIndex_ {};
    // Failover with hot replica. Valid values:
    // 
    // - `true`: Enabled.
    // 
    // - `false`: Disabled.
    shared_ptr<string> imperceptibleSwitch_ {};
    // The maximum number of inodes for the file system.
    shared_ptr<int64_t> inodeTotal_ {};
    // The number of used inodes.
    shared_ptr<int64_t> inodeUsed_ {};
    // Indicates whether the cluster uses the latest kernel version. Valid values:
    // 
    // - **true**: Yes
    // 
    // - **false**: No
    shared_ptr<bool> isLatestVersion_ {};
    // Indicates whether the database proxy uses the latest version. Valid values:
    // 
    // - **true**: Yes
    // 
    // - **false**: No
    shared_ptr<bool> isProxyLatestVersion_ {};
    // The lock mode. Valid values:
    // 
    // - **Unlock**: The cluster is not locked.
    // 
    // - **ManualLock**: The cluster is manually locked.
    // 
    // - **LockByExpiration**: The cluster is automatically locked upon expiration.
    shared_ptr<string> lockMode_ {};
    // The maintenance window of the cluster. The time is in the `HH:mmZ-HH:mmZ` format and is displayed in UTC. For example, `16:00Z-17:00Z` indicates that routine maintenance can be performed from 00:00 to 01:00 (UTC+8).
    shared_ptr<string> maintainTime_ {};
    // The Orca feature. Valid values:
    // 
    // - on: Enabled
    // 
    // - off: Disabled
    shared_ptr<string> orca_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: Pay-as-you-go.
    // 
    // - **Prepaid**: Subscription.
    shared_ptr<string> payType_ {};
    // <props="china">
    // 
    // The read and write IOPS that are preconfigured for the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
    // 
    // 
    // 
    // <props="china">
    // 
    // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // 
    // 
    // <props="china">
    // 
    // > This parameter is supported only when StorageType is set to ESSDAUTOPL.
    shared_ptr<string> provisionedIops_ {};
    // The number of CPU cores for the database proxy.
    shared_ptr<string> proxyCpuCores_ {};
    // The Serverless type of the database proxy. Valid values:
    // 
    // - AgileServerless: Agile. This indicates a Serverless cluster.
    // 
    // - SteadyServerless: Steady. This indicates a cluster with defined specifications (a subscription or pay-as-you-go cluster).
    shared_ptr<string> proxyServerlessType_ {};
    // The number of CPU cores for the database proxy with standard specifications.
    shared_ptr<string> proxyStandardCpuCores_ {};
    // The status of the database proxy. Valid values:
    // 
    // - **Creating**: The proxy is being created.
    // 
    // - **Running**: The proxy is running.
    // 
    // - **Deleting**: The proxy is being released.
    // 
    // - **Rebooting**: The proxy is being restarted.
    // 
    // - **DBNodeCreating**: A node is being added.
    // 
    // - **DBNodeDeleting**: A node is being deleted.
    // 
    // - **ClassChanging**: The node specifications are being changed.
    // 
    // - **NetAddressCreating**: A network connection is being created.
    // 
    // - **NetAddressDeleting**: A network connection is being deleted.
    // 
    // - **NetAddressModifying**: A network connection is being modified.
    // 
    // - **Deleted**: The proxy is released.
    shared_ptr<string> proxyStatus_ {};
    // The type of the database proxy. Valid values:
    // 
    // - **Exclusive**: Dedicated Enterprise Edition
    // 
    // - **General**: Standard Enterprise Edition
    shared_ptr<string> proxyType_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // - If RestoreType is set to **RestoreByTime** or **RestoreByTimeOss**, this parameter indicates the point in time for the restoration.
    // 
    // - If RestoreType is set to **RestoreByBackupSet** or **RestoreByBackupSetOss**, this parameter indicates the ID of the backup set that is used for the restoration.
    // 
    // > This parameter is supported only for clusters that are restored from a backup set or a point in time after June 1, 2024.
    shared_ptr<string> restoreDataPoint_ {};
    // The method used to restore the cluster. Valid values:
    // 
    // - **RestoreByTime**: The cluster is restored from a point in time based on a level-1 backup.
    // 
    // - **RestoreByBackupSet**: The cluster is restored from a backup set based on a level-1 backup.
    // 
    // - **RestoreByTimeOss**: The cluster is restored from a point in time based on a level-2 backup.
    // 
    // - **RestoreByBackupSetOss**: The cluster is restored from a backup set based on a level-2 backup.
    // 
    // - **CloneFromSourceCluster**: The cluster is cloned from a source cluster.
    // 
    // > This parameter is supported only for clusters that are restored from a backup set or a point in time after June 1, 2024.
    shared_ptr<string> restoreType_ {};
    // RowCompression
    shared_ptr<string> rowCompression_ {};
    // The storage usage for SQL. Unit: bytes. A value of -1 indicates that no data is available.
    shared_ptr<int64_t> SQLSize_ {};
    // The Serverless type. Valid values:
    // 
    // - AgileServerless: Agile
    // 
    // - SteadyServerless: Steady
    shared_ptr<string> serverlessType_ {};
    // The source cluster ID.
    // 
    // > This parameter is supported only for clusters that are restored from a backup set or a point in time after June 1, 2024.
    shared_ptr<string> sourceDBCluster_ {};
    // The ID of the region where the source cluster resides.
    // 
    // > This parameter is returned only if a source cluster ID exists.
    shared_ptr<string> sourceRegionId_ {};
    // The cross-zone disaster recovery mode. Valid values:
    // 
    // - **ON**: The cross-zone disaster recovery mode is enabled.
    // 
    // - **OFF**: The cross-zone disaster recovery mode is disabled.
    // 
    // - **0**: Customer drill mode.
    shared_ptr<string> standbyHAMode_ {};
    // The maximum storage capacity of the current cluster specifications. Unit: bytes.
    shared_ptr<int64_t> storageMax_ {};
    // The billing method for storage. Valid values:
    // 
    // - **Postpaid**: Pay-as-you-go.
    // 
    // - **Prepaid**: Subscription.
    shared_ptr<string> storagePayType_ {};
    // The storage capacity. Unit: GB.
    shared_ptr<int64_t> storageSpace_ {};
    // The storage class of the Enterprise Edition. Valid values:
    // 
    // - **PSL5**
    // 
    // - **PSL4**
    // 
    // The storage class of the Standard Edition. Valid values:
    // 
    // - **ESSDPL0**
    // 
    // - **ESSDPL1**
    // 
    // - **ESSDPL2**
    // 
    // - **ESSDPL3**
    // 
    // - **ESSDAUTOPL**
    shared_ptr<string> storageType_ {};
    // The used storage space. Unit: bytes.
    shared_ptr<int64_t> storageUsed_ {};
    // Indicates whether strong consistency is enabled for the multi-zone cluster. Valid values:
    // 
    // - **ON**: Strong consistency is enabled for the multi-zone cluster. This applies to Standard Edition clusters that are deployed in three zones.
    // 
    // - **OFF**: Strong consistency is not enabled for the multi-zone cluster.
    shared_ptr<string> strictConsistency_ {};
    // The specification type of the compute node. Valid values:
    // 
    // - **Exclusive**: Dedicated
    // 
    // - **General**: General-purpose
    // 
    // > This parameter is returned only for PolarDB for MySQL Cluster Edition clusters.
    shared_ptr<string> subCategory_ {};
    // Indicates whether the failover with hot replica feature that is compatible with the IMCI feature is supported.
    shared_ptr<string> supportInstantSwitchWithImci_ {};
    // The details of the tags.
    shared_ptr<vector<DescribeDbClusterAttributeZonalResponseBody::Tags>> tags_ {};
    // The virtual private cloud (VPC) ID.
    shared_ptr<string> VPCId_ {};
    // The virtual switch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
