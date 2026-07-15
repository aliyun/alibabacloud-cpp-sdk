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
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ColumnTable, columnTable_);
      DARABONBA_PTR_TO_JSON(CompressStorageMode, compressStorageMode_);
      DARABONBA_PTR_TO_JSON(CompressStorageUsed, compressStorageUsed_);
      DARABONBA_PTR_TO_JSON(ConnectionResourceQuota, connectionResourceQuota_);
      DARABONBA_PTR_TO_JSON(ConnectionResourceUsed, connectionResourceUsed_);
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
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageMax, storageMax_);
      DARABONBA_PTR_TO_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
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
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ColumnTable, columnTable_);
      DARABONBA_PTR_FROM_JSON(CompressStorageMode, compressStorageMode_);
      DARABONBA_PTR_FROM_JSON(CompressStorageUsed, compressStorageUsed_);
      DARABONBA_PTR_FROM_JSON(ConnectionResourceQuota, connectionResourceQuota_);
      DARABONBA_PTR_FROM_JSON(ConnectionResourceUsed, connectionResourceUsed_);
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
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageMax, storageMax_);
      DARABONBA_PTR_FROM_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
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
        DARABONBA_PTR_TO_JSON(RemoteMemoryMax, remoteMemoryMax_);
        DARABONBA_PTR_TO_JSON(RemoteMemoryMin, remoteMemoryMin_);
        DARABONBA_PTR_TO_JSON(RemoteMemoryRecommended, remoteMemoryRecommended_);
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
        DARABONBA_PTR_FROM_JSON(RemoteMemoryMax, remoteMemoryMax_);
        DARABONBA_PTR_FROM_JSON(RemoteMemoryMin, remoteMemoryMin_);
        DARABONBA_PTR_FROM_JSON(RemoteMemoryRecommended, remoteMemoryRecommended_);
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
        && this->mirrorInsName_ == nullptr && this->multiMasterLocalStandby_ == nullptr && this->multiMasterPrimaryNode_ == nullptr && this->orca_ == nullptr && this->remoteMemoryMax_ == nullptr
        && this->remoteMemoryMin_ == nullptr && this->remoteMemoryRecommended_ == nullptr && this->remoteMemorySize_ == nullptr && this->sccMode_ == nullptr && this->serverWeight_ == nullptr
        && this->serverlessType_ == nullptr && this->subCluster_ == nullptr && this->subGroupDescription_ == nullptr && this->zoneId_ == nullptr; };
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


      // remoteMemoryMax Field Functions 
      bool hasRemoteMemoryMax() const { return this->remoteMemoryMax_ != nullptr;};
      void deleteRemoteMemoryMax() { this->remoteMemoryMax_ = nullptr;};
      inline int32_t getRemoteMemoryMax() const { DARABONBA_PTR_GET_DEFAULT(remoteMemoryMax_, 0) };
      inline DBNodes& setRemoteMemoryMax(int32_t remoteMemoryMax) { DARABONBA_PTR_SET_VALUE(remoteMemoryMax_, remoteMemoryMax) };


      // remoteMemoryMin Field Functions 
      bool hasRemoteMemoryMin() const { return this->remoteMemoryMin_ != nullptr;};
      void deleteRemoteMemoryMin() { this->remoteMemoryMin_ = nullptr;};
      inline int32_t getRemoteMemoryMin() const { DARABONBA_PTR_GET_DEFAULT(remoteMemoryMin_, 0) };
      inline DBNodes& setRemoteMemoryMin(int32_t remoteMemoryMin) { DARABONBA_PTR_SET_VALUE(remoteMemoryMin_, remoteMemoryMin) };


      // remoteMemoryRecommended Field Functions 
      bool hasRemoteMemoryRecommended() const { return this->remoteMemoryRecommended_ != nullptr;};
      void deleteRemoteMemoryRecommended() { this->remoteMemoryRecommended_ = nullptr;};
      inline int32_t getRemoteMemoryRecommended() const { DARABONBA_PTR_GET_DEFAULT(remoteMemoryRecommended_, 0) };
      inline DBNodes& setRemoteMemoryRecommended(int32_t remoteMemoryRecommended) { DARABONBA_PTR_SET_VALUE(remoteMemoryRecommended_, remoteMemoryRecommended) };


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
      // The number of CPU cores added by second-level rapid scaling.
      shared_ptr<string> addedCpuCores_ {};
      // The number of CPU cores of the node.
      shared_ptr<string> cpuCores_ {};
      // The time when the node was created.
      shared_ptr<string> creationTime_ {};
      // The CXL remote memory configuration.
      shared_ptr<string> DBNodeCXLRemoteMemory_ {};
      // The node specifications.
      shared_ptr<string> DBNodeClass_ {};
      // The node description.
      shared_ptr<string> DBNodeDescription_ {};
      // The node ID.
      shared_ptr<string> DBNodeId_ {};
      // The role of the node. Valid values: 
      // 
      // - **Writer**: primary node.
      // - **Reader**: read-only node.
      shared_ptr<string> DBNodeRole_ {};
      // The node status. Valid values:
      // * **Creating**: Being created. 
      // * **Running**: Running. 
      // * **Deleting**: Being deleted.  
      // * **Rebooting**: Being restarted.  
      // * **DBNodeCreating**: Increase node in progress.  
      // * **DBNodeDeleting**: Deleting a node. 
      // * **ClassChanging**: Changing node specifications.  
      // * **NetAddressCreating**: Creating network connectivity.  
      // * **NetAddressDeleting**: Deleting network connectivity.  
      // * **NetAddressModifying**: Modifying network connectivity.
      // * **MinorVersionUpgrading**: Upgrade of the minor version in progress.
      // * **Maintaining**: Instance under maintenance.  
      // * **Switching**: Switching over.
      shared_ptr<string> DBNodeStatus_ {};
      // The failover priority. Each node has a failover priority that determines the probability of the node being elected as the primary node during a failover. A higher value indicates a higher priority.
      // Valid values: 1 to 15.
      shared_ptr<int32_t> failoverPriority_ {};
      // Indicates whether hot standby is enabled. Valid values:
      // 
      // - **ON**: Enabled.
      // 
      // - **OFF**: Disabled.
      shared_ptr<string> hotReplicaMode_ {};
      // Indicates whether In-Memory Column Index (IMCI) is enabled. Valid values:
      // 
      // - **ON**: Enabled.
      // 
      // - **OFF**: Disabled.
      shared_ptr<string> imciSwitch_ {};
      // The primary node ID of the Multi-master Cluster Edition.
      shared_ptr<string> masterId_ {};
      // The maximum number of concurrent connections to the cluster.
      shared_ptr<int32_t> maxConnections_ {};
      // The maximum number of I/O requests per second (IOPS).
      shared_ptr<int32_t> maxIOPS_ {};
      // The memory size of the node. Unit: MB.
      shared_ptr<string> memorySize_ {};
      // The name of the hot replica that corresponds to this node in the hot standby storage and compute architecture.
      shared_ptr<string> mirrorInsName_ {};
      // The multi-master local standby node.
      shared_ptr<string> multiMasterLocalStandby_ {};
      // The multi-master primary node.
      shared_ptr<string> multiMasterPrimaryNode_ {};
      // The Orca feature. Valid values:
      // 
      // - on: Enabled.
      // 
      // - off: Disabled.
      shared_ptr<string> orca_ {};
      shared_ptr<int32_t> remoteMemoryMax_ {};
      shared_ptr<int32_t> remoteMemoryMin_ {};
      shared_ptr<int32_t> remoteMemoryRecommended_ {};
      // The remote memory size. Unit: MB.
      shared_ptr<string> remoteMemorySize_ {};
      // Indicates whether the global consistency (high-performance mode) feature is enabled for the node. Valid values:
      // 
      // - **ON**: Enabled.
      // 
      // - **OFF**: Disabled.
      // 
      // This parameter is required.
      shared_ptr<string> sccMode_ {};
      // The routing weight.
      // Valid values: 1 to 100. Default value: 1.
      shared_ptr<string> serverWeight_ {};
      // The serverless type of the node. Valid values:
      // 
      // - AgileServerless: agile serverless node.
      // - SteadyServerless: steady serverless node, which is a node in a cluster with defined specifications that has serverless capabilities enabled.
      // 
      // > This parameter is supported only for serverless clusters or clusters with defined specifications that have the serverless feature enabled. For more information, see [Serverless](https://help.aliyun.com/document_detail/452274.html).
      shared_ptr<string> serverlessType_ {};
      // Indicates whether the node is in the primary zone or secondary zone. This parameter is mainly used for resource-equivalent deployments.
      // Valid values:
      // - Primary: primary zone.
      // - Standby: secondary zone.
      shared_ptr<string> subCluster_ {};
      // The cluster subgroup description.
      shared_ptr<string> subGroupDescription_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    class Branch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Branch& obj) { 
        DARABONBA_PTR_TO_JSON(BranchLsn, branchLsn_);
        DARABONBA_PTR_TO_JSON(BranchTime, branchTime_);
        DARABONBA_PTR_TO_JSON(ChildBranch, childBranch_);
        DARABONBA_PTR_TO_JSON(ParentInsName, parentInsName_);
      };
      friend void from_json(const Darabonba::Json& j, Branch& obj) { 
        DARABONBA_PTR_FROM_JSON(BranchLsn, branchLsn_);
        DARABONBA_PTR_FROM_JSON(BranchTime, branchTime_);
        DARABONBA_PTR_FROM_JSON(ChildBranch, childBranch_);
        DARABONBA_PTR_FROM_JSON(ParentInsName, parentInsName_);
      };
      Branch() = default ;
      Branch(const Branch &) = default ;
      Branch(Branch &&) = default ;
      Branch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Branch() = default ;
      Branch& operator=(const Branch &) = default ;
      Branch& operator=(Branch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChildBranch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChildBranch& obj) { 
          DARABONBA_PTR_TO_JSON(BranchLsn, branchLsn_);
          DARABONBA_PTR_TO_JSON(BranchTime, branchTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(HasChild, hasChild_);
          DARABONBA_PTR_TO_JSON(InsName, insName_);
        };
        friend void from_json(const Darabonba::Json& j, ChildBranch& obj) { 
          DARABONBA_PTR_FROM_JSON(BranchLsn, branchLsn_);
          DARABONBA_PTR_FROM_JSON(BranchTime, branchTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(HasChild, hasChild_);
          DARABONBA_PTR_FROM_JSON(InsName, insName_);
        };
        ChildBranch() = default ;
        ChildBranch(const ChildBranch &) = default ;
        ChildBranch(ChildBranch &&) = default ;
        ChildBranch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChildBranch() = default ;
        ChildBranch& operator=(const ChildBranch &) = default ;
        ChildBranch& operator=(ChildBranch &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->branchLsn_ == nullptr
        && this->branchTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->hasChild_ == nullptr && this->insName_ == nullptr; };
        // branchLsn Field Functions 
        bool hasBranchLsn() const { return this->branchLsn_ != nullptr;};
        void deleteBranchLsn() { this->branchLsn_ = nullptr;};
        inline string getBranchLsn() const { DARABONBA_PTR_GET_DEFAULT(branchLsn_, "") };
        inline ChildBranch& setBranchLsn(string branchLsn) { DARABONBA_PTR_SET_VALUE(branchLsn_, branchLsn) };


        // branchTime Field Functions 
        bool hasBranchTime() const { return this->branchTime_ != nullptr;};
        void deleteBranchTime() { this->branchTime_ = nullptr;};
        inline string getBranchTime() const { DARABONBA_PTR_GET_DEFAULT(branchTime_, "") };
        inline ChildBranch& setBranchTime(string branchTime) { DARABONBA_PTR_SET_VALUE(branchTime_, branchTime) };


        // DBClusterDescription Field Functions 
        bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
        void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
        inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
        inline ChildBranch& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


        // hasChild Field Functions 
        bool hasHasChild() const { return this->hasChild_ != nullptr;};
        void deleteHasChild() { this->hasChild_ = nullptr;};
        inline bool getHasChild() const { DARABONBA_PTR_GET_DEFAULT(hasChild_, false) };
        inline ChildBranch& setHasChild(bool hasChild) { DARABONBA_PTR_SET_VALUE(hasChild_, hasChild) };


        // insName Field Functions 
        bool hasInsName() const { return this->insName_ != nullptr;};
        void deleteInsName() { this->insName_ = nullptr;};
        inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
        inline ChildBranch& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


      protected:
        shared_ptr<string> branchLsn_ {};
        shared_ptr<string> branchTime_ {};
        shared_ptr<string> DBClusterDescription_ {};
        shared_ptr<bool> hasChild_ {};
        shared_ptr<string> insName_ {};
      };

      virtual bool empty() const override { return this->branchLsn_ == nullptr
        && this->branchTime_ == nullptr && this->childBranch_ == nullptr && this->parentInsName_ == nullptr; };
      // branchLsn Field Functions 
      bool hasBranchLsn() const { return this->branchLsn_ != nullptr;};
      void deleteBranchLsn() { this->branchLsn_ = nullptr;};
      inline string getBranchLsn() const { DARABONBA_PTR_GET_DEFAULT(branchLsn_, "") };
      inline Branch& setBranchLsn(string branchLsn) { DARABONBA_PTR_SET_VALUE(branchLsn_, branchLsn) };


      // branchTime Field Functions 
      bool hasBranchTime() const { return this->branchTime_ != nullptr;};
      void deleteBranchTime() { this->branchTime_ = nullptr;};
      inline string getBranchTime() const { DARABONBA_PTR_GET_DEFAULT(branchTime_, "") };
      inline Branch& setBranchTime(string branchTime) { DARABONBA_PTR_SET_VALUE(branchTime_, branchTime) };


      // childBranch Field Functions 
      bool hasChildBranch() const { return this->childBranch_ != nullptr;};
      void deleteChildBranch() { this->childBranch_ = nullptr;};
      inline const vector<Branch::ChildBranch> & getChildBranch() const { DARABONBA_PTR_GET_CONST(childBranch_, vector<Branch::ChildBranch>) };
      inline vector<Branch::ChildBranch> getChildBranch() { DARABONBA_PTR_GET(childBranch_, vector<Branch::ChildBranch>) };
      inline Branch& setChildBranch(const vector<Branch::ChildBranch> & childBranch) { DARABONBA_PTR_SET_VALUE(childBranch_, childBranch) };
      inline Branch& setChildBranch(vector<Branch::ChildBranch> && childBranch) { DARABONBA_PTR_SET_RVALUE(childBranch_, childBranch) };


      // parentInsName Field Functions 
      bool hasParentInsName() const { return this->parentInsName_ != nullptr;};
      void deleteParentInsName() { this->parentInsName_ = nullptr;};
      inline string getParentInsName() const { DARABONBA_PTR_GET_DEFAULT(parentInsName_, "") };
      inline Branch& setParentInsName(string parentInsName) { DARABONBA_PTR_SET_VALUE(parentInsName_, parentInsName) };


    protected:
      shared_ptr<string> branchLsn_ {};
      shared_ptr<string> branchTime_ {};
      shared_ptr<vector<Branch::ChildBranch>> childBranch_ {};
      shared_ptr<string> parentInsName_ {};
    };

    virtual bool empty() const override { return this->aiCreatingTime_ == nullptr
        && this->aiType_ == nullptr && this->architecture_ == nullptr && this->autoUpgradeMinorVersion_ == nullptr && this->blktagTotal_ == nullptr && this->blktagUsed_ == nullptr
        && this->branch_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->columnTable_ == nullptr && this->compressStorageMode_ == nullptr
        && this->compressStorageUsed_ == nullptr && this->connectionResourceQuota_ == nullptr && this->connectionResourceUsed_ == nullptr && this->creationTime_ == nullptr && this->DBClusterDescription_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodes_ == nullptr && this->DBType_ == nullptr
        && this->DBVersion_ == nullptr && this->DBVersionStatus_ == nullptr && this->dataLevel1BackupChainSize_ == nullptr && this->dataSyncMode_ == nullptr && this->deletionLock_ == nullptr
        && this->engine_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->hasCompleteStandbyRes_ == nullptr && this->hotStandbyCluster_ == nullptr
        && this->imciAutoIndex_ == nullptr && this->imperceptibleSwitch_ == nullptr && this->inodeTotal_ == nullptr && this->inodeUsed_ == nullptr && this->isLatestVersion_ == nullptr
        && this->isProxyLatestVersion_ == nullptr && this->lockMode_ == nullptr && this->maintainTime_ == nullptr && this->orca_ == nullptr && this->payType_ == nullptr
        && this->provisionedIops_ == nullptr && this->proxyCpuCores_ == nullptr && this->proxyServerlessType_ == nullptr && this->proxyStandardCpuCores_ == nullptr && this->proxyStatus_ == nullptr
        && this->proxyType_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->restoreDataPoint_ == nullptr
        && this->restoreType_ == nullptr && this->rowCompression_ == nullptr && this->SQLSize_ == nullptr && this->searchClusterStatus_ == nullptr && this->searchCompressStorageUsed_ == nullptr
        && this->searchStorageUsed_ == nullptr && this->serverlessType_ == nullptr && this->sourceDBCluster_ == nullptr && this->sourceRegionId_ == nullptr && this->standbyHAMode_ == nullptr
        && this->storageAutoScale_ == nullptr && this->storageMax_ == nullptr && this->storagePayType_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr
        && this->storageUpperBound_ == nullptr && this->storageUsed_ == nullptr && this->strictConsistency_ == nullptr && this->subCategory_ == nullptr && this->supportInstantSwitchWithImci_ == nullptr
        && this->tags_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneIds_ == nullptr; };
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


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline const DescribeDBClusterAttributeResponseBody::Branch & getBranch() const { DARABONBA_PTR_GET_CONST(branch_, DescribeDBClusterAttributeResponseBody::Branch) };
    inline DescribeDBClusterAttributeResponseBody::Branch getBranch() { DARABONBA_PTR_GET(branch_, DescribeDBClusterAttributeResponseBody::Branch) };
    inline DescribeDBClusterAttributeResponseBody& setBranch(const DescribeDBClusterAttributeResponseBody::Branch & branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };
    inline DescribeDBClusterAttributeResponseBody& setBranch(DescribeDBClusterAttributeResponseBody::Branch && branch) { DARABONBA_PTR_SET_RVALUE(branch_, branch) };


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


    // columnTable Field Functions 
    bool hasColumnTable() const { return this->columnTable_ != nullptr;};
    void deleteColumnTable() { this->columnTable_ = nullptr;};
    inline string getColumnTable() const { DARABONBA_PTR_GET_DEFAULT(columnTable_, "") };
    inline DescribeDBClusterAttributeResponseBody& setColumnTable(string columnTable) { DARABONBA_PTR_SET_VALUE(columnTable_, columnTable) };


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


    // connectionResourceQuota Field Functions 
    bool hasConnectionResourceQuota() const { return this->connectionResourceQuota_ != nullptr;};
    void deleteConnectionResourceQuota() { this->connectionResourceQuota_ = nullptr;};
    inline int64_t getConnectionResourceQuota() const { DARABONBA_PTR_GET_DEFAULT(connectionResourceQuota_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setConnectionResourceQuota(int64_t connectionResourceQuota) { DARABONBA_PTR_SET_VALUE(connectionResourceQuota_, connectionResourceQuota) };


    // connectionResourceUsed Field Functions 
    bool hasConnectionResourceUsed() const { return this->connectionResourceUsed_ != nullptr;};
    void deleteConnectionResourceUsed() { this->connectionResourceUsed_ = nullptr;};
    inline int64_t getConnectionResourceUsed() const { DARABONBA_PTR_GET_DEFAULT(connectionResourceUsed_, 0L) };
    inline DescribeDBClusterAttributeResponseBody& setConnectionResourceUsed(int64_t connectionResourceUsed) { DARABONBA_PTR_SET_VALUE(connectionResourceUsed_, connectionResourceUsed) };


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


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string getStorageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline DescribeDBClusterAttributeResponseBody& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


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


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int32_t getStorageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0) };
    inline DescribeDBClusterAttributeResponseBody& setStorageUpperBound(int32_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


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
    // The start time of the free AI feature.
    shared_ptr<string> aiCreatingTime_ {};
    // The AI node type. Valid values:
    //      
    // - **SearchNode**: search node.
    // - **DLNode**: AI node.
    shared_ptr<string> aiType_ {};
    // The CPU architecture. Valid values:
    // - **X86**
    // - **ARM**
    shared_ptr<string> architecture_ {};
    // The minor version update method. Valid values:
    // 
    // - Auto: Automatic update.
    // - Manual: Manual update.
    shared_ptr<string> autoUpgradeMinorVersion_ {};
    // The maximum number of blktags in the file system.
    shared_ptr<int64_t> blktagTotal_ {};
    // The current blktag usage.
    shared_ptr<int64_t> blktagUsed_ {};
    shared_ptr<DescribeDBClusterAttributeResponseBody::Branch> branch_ {};
    // Indicates whether I/O performance burst is enabled for the ESSD AutoPL cloud disk. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<string> burstingEnabled_ {};
    // The [edition](https://help.aliyun.com/document_detail/183258.html) of the cluster. Valid values:
    // * **Normal**: Cluster Edition
    // * **Basic**: Single Node Edition
    // * **Archive**: X-Engine Edition
    // * **NormalMultimaster**: Multi-master Cluster Edition
    // * **SENormal**: Standard Edition
    // 
    // > * PolarDB for PostgreSQL 11 does not support Single Node Edition.
    // >* PolarDB for MySQL 8.0, PolarDB for MySQL 5.7, and PolarDB for PostgreSQL 14 support Standard Edition.
    // >* PolarDB for MySQL 8.0 supports X-Engine Edition and Multi-master Cluster Edition.
    shared_ptr<string> category_ {};
    // Indicates whether column store tables are enabled.
    shared_ptr<string> columnTable_ {};
    // Indicates whether storage compression is enabled. Valid values:
    // - ON: Enabled.
    // - OFF: Disabled.
    shared_ptr<string> compressStorageMode_ {};
    // The compressed storage data size.
    // >This parameter is returned only when the storage compression feature is enabled for the cluster.
    shared_ptr<int64_t> compressStorageUsed_ {};
    shared_ptr<int64_t> connectionResourceQuota_ {};
    shared_ptr<int64_t> connectionResourceUsed_ {};
    // The time when the cluster was created.
    shared_ptr<string> creationTime_ {};
    // The cluster description.
    shared_ptr<string> DBClusterDescription_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The network type of the cluster.
    shared_ptr<string> DBClusterNetworkType_ {};
    // The cluster status. For more information, see [Cluster status table](https://help.aliyun.com/document_detail/99286.html).
    shared_ptr<string> DBClusterStatus_ {};
    // The node information.
    shared_ptr<vector<DescribeDBClusterAttributeResponseBody::DBNodes>> DBNodes_ {};
    // The database engine type.
    shared_ptr<string> DBType_ {};
    // The database engine version.
    shared_ptr<string> DBVersion_ {};
    // The status of the current minor database version. Valid values:
    // * **Stable**: The current version is stable.
    // * **Old**: The current version is outdated. Upgrade to the latest version.
    // * **HighRisk**: The current version has critical defects. Upgrade to the latest version immediately.
    // * **Beta**: The current version is a beta version.
    // 
    // > * For information about how to upgrade the minor database version, see [Version upgrade](https://help.aliyun.com/document_detail/158572.html).
    // > * This parameter is returned only when the database engine type (**DBType**) is **MySQL**.
    shared_ptr<string> DBVersionStatus_ {};
    // The total size of level-1 backups (snapshots), in bytes.
    shared_ptr<int64_t> dataLevel1BackupChainSize_ {};
    // The data replication relationship mode. Valid values:
    // - **AsyncSync**: asynchronous
    // - **SemiSync**: semi-synchronous
    shared_ptr<string> dataSyncMode_ {};
    // The lock status for cluster deletion. Valid values:
    // * **0**: Unlocked. The cluster can be deleted.
    // * **1**: Locked. The cluster cannot be deleted.
    shared_ptr<int32_t> deletionLock_ {};
    // The cluster engine.
    shared_ptr<string> engine_ {};
    // The expiration time of the cluster.
    // 
    // > A specific value is returned only for clusters whose billing method is **Prepaid** (subscription). An empty value is returned for **Postpaid** (pay-as-you-go) clusters.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the cluster has expired.
    // > This parameter is returned only for clusters whose billing method is **Prepaid** (subscription).
    shared_ptr<string> expired_ {};
    // Indicates whether resources are replenished for the new primary node after a cross-zone failover. Valid values:
    // - **true**: Resources are replenished.
    // - **false**: Resources are not replenished.
    shared_ptr<bool> hasCompleteStandbyRes_ {};
    // Indicates whether the Hot Standby Cluster (and standby compute nodes) is enabled. Valid values:
    // - **StandbyClusterON**: The Hot Standby Cluster or both the Hot Standby Cluster and standby compute nodes are enabled. 
    // - **StandbyClusterOFF**: The Hot Standby Cluster or both the Hot Standby Cluster and standby compute nodes are disabled.
    shared_ptr<string> hotStandbyCluster_ {};
    // The automatic IMCI-based query acceleration feature. Valid values:
    // - `ON`: Enabled.
    // - `OFF`: Disabled.
    shared_ptr<string> imciAutoIndex_ {};
    // The failover with hot replica feature. Valid values:
    // - `true`: Enabled.
    // - `false`: Disabled.
    shared_ptr<string> imperceptibleSwitch_ {};
    // The maximum number of inodes in the file system.
    shared_ptr<int64_t> inodeTotal_ {};
    // The current inode usage.
    shared_ptr<int64_t> inodeUsed_ {};
    // Indicates whether the cluster runs the latest Milvus version. Valid values:
    // 
    // - **true**: The cluster runs the latest Milvus version.
    // 
    // - **false**: The cluster does not run the latest Milvus version.
    shared_ptr<bool> isLatestVersion_ {};
    // Indicates whether the database proxy is the latest version. Valid values:
    // 
    // - **true**: The database proxy is the latest version.
    // - **false**: The database proxy is not the latest version.
    shared_ptr<bool> isProxyLatestVersion_ {};
    // The lock mode. Valid values: 
    // 
    // - **Unlock**: Not locked.
    // - **ManualLock**: Manually locked. 
    // - **LockByExpiration**: Automatically locked due to cluster expiration.
    shared_ptr<string> lockMode_ {};
    // The maintenance window of the cluster. The time is in the `HH:mmZ-HH:mmZ` format (UTC). For example, `16:00Z-17:00Z` indicates that routine maintenance can be performed from 00:00 to 01:00 (UTC+08:00).
    shared_ptr<string> maintainTime_ {};
    // The Orca feature. Valid values:
    // 
    // - on: Enabled.
    // 
    // - off: Disabled.
    shared_ptr<string> orca_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // <p id="p_wyg_t4a_glm" props="china" icmsditafragmentmagic=1>The provisioned read/write IOPS of the ESSD AutoPL cloud disk. Valid values: 0 to min{50,000, 1000 × capacity - baseline performance}.</p>
    // <p id="p_6de_jxy_k2g" props="china" icmsditafragmentmagic=1>Baseline performance = min{1,800 + 50 × capacity, 50,000}.</p>
    // <note id="note_7kj_j0o_rgs" props="china" icmsditafragmentmagic=1>This parameter is supported only when StorageType is set to ESSDAUTOPL.</note>
    shared_ptr<string> provisionedIops_ {};
    // The number of CPU cores of the database proxy.
    shared_ptr<string> proxyCpuCores_ {};
    // The serverless type of the database proxy. Valid values:
    // - AgileServerless: agile serverless cluster.
    // - SteadyServerless: steady serverless, which is a cluster with defined specifications (billing method is subscription or pay-as-you-go).
    shared_ptr<string> proxyServerlessType_ {};
    // The number of CPU cores in the standard configuration of the database proxy.
    shared_ptr<string> proxyStandardCpuCores_ {};
    // The status of the database proxy. Valid values:
    // 
    // - **Creating**: Being created.
    // - **Running**: Running.
    // - **Deleting**: Being released.
    // - **Rebooting**: Being restarted.
    // - **DBNodeCreating**: Increase node in progress.
    // - **DBNodeDeleting**: Deleting a node.
    // - **ClassChanging**: Changing node specifications.
    // - **NetAddressCreating**: Creating network connectivity.
    // - **NetAddressDeleting**: Deleting network connectivity.
    // - **NetAddressModifying**: Modifying network connectivity.
    // - **Deleted**: Released.
    shared_ptr<string> proxyStatus_ {};
    // The database proxy type. Valid values:
    // 
    // - **Exclusive**: Dedicated Enterprise Edition
    // - **General**: Standard Enterprise Edition
    shared_ptr<string> proxyType_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // * If RestoreType is **RestoreByTime** or **RestoreByTimeOss**, this value indicates the point in time to which the cluster was restored.
    // * If RestoreType is **RestoreByBackupSet** or **RestoreByBackupSetOss**, this value indicates the backup set ID used for the restoration.
    // 
    // <note>This parameter is supported only for clusters restored from a backup set or point in time after June 1, 2024.</note>
    shared_ptr<string> restoreDataPoint_ {};
    // The cluster restoration method. Valid values:
    // 
    // * **RestoreByTime**: Restored from a point in time based on a level-1 backup.
    // * **RestoreByBackupSet**: Restored from a backup set based on a level-1 backup.
    // * **RestoreByTimeOss**: Restored from a point in time based on a level-2 backup.
    // * **RestoreByBackupSetOss**: Restored from a backup set based on a level-2 backup.
    // * **CloneFromSourceCluster**: Cloned from the source cluster.
    // 
    // <note>This parameter is supported only for clusters restored from a backup set or point in time after June 1, 2024.</note>
    shared_ptr<string> restoreType_ {};
    // The row compression setting.
    shared_ptr<string> rowCompression_ {};
    // The storage size of SQL statements, in bytes. A value of -1 indicates that no data is available.
    shared_ptr<int64_t> SQLSize_ {};
    // The running status of the search node.
    shared_ptr<string> searchClusterStatus_ {};
    // The compressed storage data size of the search node.
    // >This parameter is returned only when the storage compression feature is enabled for the cluster.
    shared_ptr<int64_t> searchCompressStorageUsed_ {};
    // The storage usage of the search node.
    shared_ptr<int64_t> searchStorageUsed_ {};
    // The serverless type of the cluster. Valid values:
    // 
    // - AgileServerless: agile serverless cluster.
    // - SteadyServerless: steady serverless, which is a cluster with defined specifications that has the serverless feature enabled.
    // 
    // > This parameter is supported only for serverless clusters or clusters with defined specifications that have the serverless feature enabled.
    shared_ptr<string> serverlessType_ {};
    // The source cluster ID.
    // <note>This parameter is supported only for clusters restored from a backup set or point in time after June 1, 2024.</note>
    shared_ptr<string> sourceDBCluster_ {};
    // The region ID of the source cluster.
    // <note>This parameter is returned only when the source cluster ID exists.</note>
    shared_ptr<string> sourceRegionId_ {};
    // The cross-zone disaster recovery mode. Valid values:
    // - **ON**: Cross-zone disaster recovery is enabled.
    // - **OFF**: Cross-zone disaster recovery is disabled.
    // - **0**: Customer drill mode.
    shared_ptr<string> standbyHAMode_ {};
    shared_ptr<string> storageAutoScale_ {};
    // The maximum storage capacity for the current cluster specifications, in bytes.
    shared_ptr<int64_t> storageMax_ {};
    // The storage billing type. Valid values:
    // 
    // - **Postpaid**: pay-by-capacity (pay-as-you-go).
    // - **Prepaid**: pay-by-space (subscription).
    shared_ptr<string> storagePayType_ {};
    // The storage space for pay-by-space (subscription) billing. Unit: bytes.
    shared_ptr<int64_t> storageSpace_ {};
    // The storage type. The value is fixed as **HighPerformance**.
    shared_ptr<string> storageType_ {};
    shared_ptr<int32_t> storageUpperBound_ {};
    // The storage usage, in bytes.
    shared_ptr<int64_t> storageUsed_ {};
    // Indicates whether multi-zone data strong consistency is enabled for the cluster. Valid values:
    // 
    // - **ON**: Multi-zone data strong consistency is enabled. This applies to Standard Edition clusters deployed across three zones.
    // 
    // - **OFF**: Multi-zone data strong consistency is not enabled.
    shared_ptr<string> strictConsistency_ {};
    // The specification type of compute nodes. Valid values:
    // * **Exclusive**: Dedicated
    // * **General**: General-purpose
    // 
    // > This parameter is returned only for PolarDB for MySQL clusters of the Cluster Edition.
    shared_ptr<string> subCategory_ {};
    // Indicates whether the failover with hot replica feature that is compatible with IMCI is supported.
    shared_ptr<string> supportInstantSwitchWithImci_ {};
    // The tag information.
    shared_ptr<vector<DescribeDBClusterAttributeResponseBody::Tags>> tags_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
