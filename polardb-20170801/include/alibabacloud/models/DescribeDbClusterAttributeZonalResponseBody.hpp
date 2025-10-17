// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDbClusterAttributeZonalResponseBodyDBNodes.hpp>
#include <alibabacloud/models/DescribeDbClusterAttributeZonalResponseBodyTags.hpp>
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
    virtual bool empty() const override { return this->aiCreatingTime_ == nullptr
        && return this->aiType_ == nullptr && return this->architecture_ == nullptr && return this->autoUpgradeMinorVersion_ == nullptr && return this->blktagTotal_ == nullptr && return this->blktagUsed_ == nullptr
        && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr && return this->compressStorageMode_ == nullptr && return this->compressStorageUsed_ == nullptr && return this->creationTime_ == nullptr
        && return this->DBClusterClass_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterStatus_ == nullptr
        && return this->DBNodes_ == nullptr && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->DBVersionStatus_ == nullptr && return this->dataLevel1BackupChainSize_ == nullptr
        && return this->dataSyncMode_ == nullptr && return this->deletionLock_ == nullptr && return this->engine_ == nullptr && return this->expireTime_ == nullptr && return this->expired_ == nullptr
        && return this->hasCompleteStandbyRes_ == nullptr && return this->hotStandbyCluster_ == nullptr && return this->imciAutoIndex_ == nullptr && return this->imperceptibleSwitch_ == nullptr && return this->inodeTotal_ == nullptr
        && return this->inodeUsed_ == nullptr && return this->isLatestVersion_ == nullptr && return this->isProxyLatestVersion_ == nullptr && return this->lockMode_ == nullptr && return this->maintainTime_ == nullptr
        && return this->orca_ == nullptr && return this->payType_ == nullptr && return this->provisionedIops_ == nullptr && return this->proxyCpuCores_ == nullptr && return this->proxyServerlessType_ == nullptr
        && return this->proxyStandardCpuCores_ == nullptr && return this->proxyStatus_ == nullptr && return this->proxyType_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->restoreDataPoint_ == nullptr && return this->restoreType_ == nullptr && return this->rowCompression_ == nullptr && return this->SQLSize_ == nullptr
        && return this->serverlessType_ == nullptr && return this->sourceDBCluster_ == nullptr && return this->sourceRegionId_ == nullptr && return this->standbyHAMode_ == nullptr && return this->storageMax_ == nullptr
        && return this->storagePayType_ == nullptr && return this->storageSpace_ == nullptr && return this->storageType_ == nullptr && return this->storageUsed_ == nullptr && return this->strictConsistency_ == nullptr
        && return this->subCategory_ == nullptr && return this->supportInstantSwitchWithImci_ == nullptr && return this->tags_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->zoneIds_ == nullptr; };
    // aiCreatingTime Field Functions 
    bool hasAiCreatingTime() const { return this->aiCreatingTime_ != nullptr;};
    void deleteAiCreatingTime() { this->aiCreatingTime_ = nullptr;};
    inline string aiCreatingTime() const { DARABONBA_PTR_GET_DEFAULT(aiCreatingTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAiCreatingTime(string aiCreatingTime) { DARABONBA_PTR_SET_VALUE(aiCreatingTime_, aiCreatingTime) };


    // aiType Field Functions 
    bool hasAiType() const { return this->aiType_ != nullptr;};
    void deleteAiType() { this->aiType_ = nullptr;};
    inline string aiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string autoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // blktagTotal Field Functions 
    bool hasBlktagTotal() const { return this->blktagTotal_ != nullptr;};
    void deleteBlktagTotal() { this->blktagTotal_ = nullptr;};
    inline int64_t blktagTotal() const { DARABONBA_PTR_GET_DEFAULT(blktagTotal_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setBlktagTotal(int64_t blktagTotal) { DARABONBA_PTR_SET_VALUE(blktagTotal_, blktagTotal) };


    // blktagUsed Field Functions 
    bool hasBlktagUsed() const { return this->blktagUsed_ != nullptr;};
    void deleteBlktagUsed() { this->blktagUsed_ = nullptr;};
    inline int64_t blktagUsed() const { DARABONBA_PTR_GET_DEFAULT(blktagUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setBlktagUsed(int64_t blktagUsed) { DARABONBA_PTR_SET_VALUE(blktagUsed_, blktagUsed) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressStorageMode Field Functions 
    bool hasCompressStorageMode() const { return this->compressStorageMode_ != nullptr;};
    void deleteCompressStorageMode() { this->compressStorageMode_ = nullptr;};
    inline string compressStorageMode() const { DARABONBA_PTR_GET_DEFAULT(compressStorageMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCompressStorageMode(string compressStorageMode) { DARABONBA_PTR_SET_VALUE(compressStorageMode_, compressStorageMode) };


    // compressStorageUsed Field Functions 
    bool hasCompressStorageUsed() const { return this->compressStorageUsed_ != nullptr;};
    void deleteCompressStorageUsed() { this->compressStorageUsed_ = nullptr;};
    inline int64_t compressStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(compressStorageUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setCompressStorageUsed(int64_t compressStorageUsed) { DARABONBA_PTR_SET_VALUE(compressStorageUsed_, compressStorageUsed) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string DBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes> & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes>) };
    inline vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes> DBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes>) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBNodes(const vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes> & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBNodes(vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes> && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // DBVersionStatus Field Functions 
    bool hasDBVersionStatus() const { return this->DBVersionStatus_ != nullptr;};
    void deleteDBVersionStatus() { this->DBVersionStatus_ = nullptr;};
    inline string DBVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBVersionStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDBVersionStatus(string DBVersionStatus) { DARABONBA_PTR_SET_VALUE(DBVersionStatus_, DBVersionStatus) };


    // dataLevel1BackupChainSize Field Functions 
    bool hasDataLevel1BackupChainSize() const { return this->dataLevel1BackupChainSize_ != nullptr;};
    void deleteDataLevel1BackupChainSize() { this->dataLevel1BackupChainSize_ = nullptr;};
    inline int64_t dataLevel1BackupChainSize() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupChainSize_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDataLevel1BackupChainSize(int64_t dataLevel1BackupChainSize) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupChainSize_, dataLevel1BackupChainSize) };


    // dataSyncMode Field Functions 
    bool hasDataSyncMode() const { return this->dataSyncMode_ != nullptr;};
    void deleteDataSyncMode() { this->dataSyncMode_ = nullptr;};
    inline string dataSyncMode() const { DARABONBA_PTR_GET_DEFAULT(dataSyncMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setDataSyncMode(string dataSyncMode) { DARABONBA_PTR_SET_VALUE(dataSyncMode_, dataSyncMode) };


    // deletionLock Field Functions 
    bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
    void deleteDeletionLock() { this->deletionLock_ = nullptr;};
    inline int32_t deletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
    inline DescribeDbClusterAttributeZonalResponseBody& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // hasCompleteStandbyRes Field Functions 
    bool hasHasCompleteStandbyRes() const { return this->hasCompleteStandbyRes_ != nullptr;};
    void deleteHasCompleteStandbyRes() { this->hasCompleteStandbyRes_ = nullptr;};
    inline bool hasCompleteStandbyRes() const { DARABONBA_PTR_GET_DEFAULT(hasCompleteStandbyRes_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setHasCompleteStandbyRes(bool hasCompleteStandbyRes) { DARABONBA_PTR_SET_VALUE(hasCompleteStandbyRes_, hasCompleteStandbyRes) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string hotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // imciAutoIndex Field Functions 
    bool hasImciAutoIndex() const { return this->imciAutoIndex_ != nullptr;};
    void deleteImciAutoIndex() { this->imciAutoIndex_ = nullptr;};
    inline string imciAutoIndex() const { DARABONBA_PTR_GET_DEFAULT(imciAutoIndex_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setImciAutoIndex(string imciAutoIndex) { DARABONBA_PTR_SET_VALUE(imciAutoIndex_, imciAutoIndex) };


    // imperceptibleSwitch Field Functions 
    bool hasImperceptibleSwitch() const { return this->imperceptibleSwitch_ != nullptr;};
    void deleteImperceptibleSwitch() { this->imperceptibleSwitch_ = nullptr;};
    inline string imperceptibleSwitch() const { DARABONBA_PTR_GET_DEFAULT(imperceptibleSwitch_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setImperceptibleSwitch(string imperceptibleSwitch) { DARABONBA_PTR_SET_VALUE(imperceptibleSwitch_, imperceptibleSwitch) };


    // inodeTotal Field Functions 
    bool hasInodeTotal() const { return this->inodeTotal_ != nullptr;};
    void deleteInodeTotal() { this->inodeTotal_ = nullptr;};
    inline int64_t inodeTotal() const { DARABONBA_PTR_GET_DEFAULT(inodeTotal_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setInodeTotal(int64_t inodeTotal) { DARABONBA_PTR_SET_VALUE(inodeTotal_, inodeTotal) };


    // inodeUsed Field Functions 
    bool hasInodeUsed() const { return this->inodeUsed_ != nullptr;};
    void deleteInodeUsed() { this->inodeUsed_ = nullptr;};
    inline int64_t inodeUsed() const { DARABONBA_PTR_GET_DEFAULT(inodeUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setInodeUsed(int64_t inodeUsed) { DARABONBA_PTR_SET_VALUE(inodeUsed_, inodeUsed) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool isLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isProxyLatestVersion Field Functions 
    bool hasIsProxyLatestVersion() const { return this->isProxyLatestVersion_ != nullptr;};
    void deleteIsProxyLatestVersion() { this->isProxyLatestVersion_ = nullptr;};
    inline bool isProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isProxyLatestVersion_, false) };
    inline DescribeDbClusterAttributeZonalResponseBody& setIsProxyLatestVersion(bool isProxyLatestVersion) { DARABONBA_PTR_SET_VALUE(isProxyLatestVersion_, isProxyLatestVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // orca Field Functions 
    bool hasOrca() const { return this->orca_ != nullptr;};
    void deleteOrca() { this->orca_ = nullptr;};
    inline string orca() const { DARABONBA_PTR_GET_DEFAULT(orca_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setOrca(string orca) { DARABONBA_PTR_SET_VALUE(orca_, orca) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline string provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProvisionedIops(string provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // proxyCpuCores Field Functions 
    bool hasProxyCpuCores() const { return this->proxyCpuCores_ != nullptr;};
    void deleteProxyCpuCores() { this->proxyCpuCores_ = nullptr;};
    inline string proxyCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyCpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyCpuCores(string proxyCpuCores) { DARABONBA_PTR_SET_VALUE(proxyCpuCores_, proxyCpuCores) };


    // proxyServerlessType Field Functions 
    bool hasProxyServerlessType() const { return this->proxyServerlessType_ != nullptr;};
    void deleteProxyServerlessType() { this->proxyServerlessType_ = nullptr;};
    inline string proxyServerlessType() const { DARABONBA_PTR_GET_DEFAULT(proxyServerlessType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyServerlessType(string proxyServerlessType) { DARABONBA_PTR_SET_VALUE(proxyServerlessType_, proxyServerlessType) };


    // proxyStandardCpuCores Field Functions 
    bool hasProxyStandardCpuCores() const { return this->proxyStandardCpuCores_ != nullptr;};
    void deleteProxyStandardCpuCores() { this->proxyStandardCpuCores_ = nullptr;};
    inline string proxyStandardCpuCores() const { DARABONBA_PTR_GET_DEFAULT(proxyStandardCpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyStandardCpuCores(string proxyStandardCpuCores) { DARABONBA_PTR_SET_VALUE(proxyStandardCpuCores_, proxyStandardCpuCores) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restoreDataPoint Field Functions 
    bool hasRestoreDataPoint() const { return this->restoreDataPoint_ != nullptr;};
    void deleteRestoreDataPoint() { this->restoreDataPoint_ = nullptr;};
    inline string restoreDataPoint() const { DARABONBA_PTR_GET_DEFAULT(restoreDataPoint_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRestoreDataPoint(string restoreDataPoint) { DARABONBA_PTR_SET_VALUE(restoreDataPoint_, restoreDataPoint) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // rowCompression Field Functions 
    bool hasRowCompression() const { return this->rowCompression_ != nullptr;};
    void deleteRowCompression() { this->rowCompression_ = nullptr;};
    inline string rowCompression() const { DARABONBA_PTR_GET_DEFAULT(rowCompression_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setRowCompression(string rowCompression) { DARABONBA_PTR_SET_VALUE(rowCompression_, rowCompression) };


    // SQLSize Field Functions 
    bool hasSQLSize() const { return this->SQLSize_ != nullptr;};
    void deleteSQLSize() { this->SQLSize_ = nullptr;};
    inline int64_t SQLSize() const { DARABONBA_PTR_GET_DEFAULT(SQLSize_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setSQLSize(int64_t SQLSize) { DARABONBA_PTR_SET_VALUE(SQLSize_, SQLSize) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline string sourceDBCluster() const { DARABONBA_PTR_GET_DEFAULT(sourceDBCluster_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSourceDBCluster(string sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // standbyHAMode Field Functions 
    bool hasStandbyHAMode() const { return this->standbyHAMode_ != nullptr;};
    void deleteStandbyHAMode() { this->standbyHAMode_ = nullptr;};
    inline string standbyHAMode() const { DARABONBA_PTR_GET_DEFAULT(standbyHAMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStandbyHAMode(string standbyHAMode) { DARABONBA_PTR_SET_VALUE(standbyHAMode_, standbyHAMode) };


    // storageMax Field Functions 
    bool hasStorageMax() const { return this->storageMax_ != nullptr;};
    void deleteStorageMax() { this->storageMax_ = nullptr;};
    inline int64_t storageMax() const { DARABONBA_PTR_GET_DEFAULT(storageMax_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageMax(int64_t storageMax) { DARABONBA_PTR_SET_VALUE(storageMax_, storageMax) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string storagePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDbClusterAttributeZonalResponseBody& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string strictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string subCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


    // supportInstantSwitchWithImci Field Functions 
    bool hasSupportInstantSwitchWithImci() const { return this->supportInstantSwitchWithImci_ != nullptr;};
    void deleteSupportInstantSwitchWithImci() { this->supportInstantSwitchWithImci_ = nullptr;};
    inline string supportInstantSwitchWithImci() const { DARABONBA_PTR_GET_DEFAULT(supportInstantSwitchWithImci_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setSupportInstantSwitchWithImci(string supportInstantSwitchWithImci) { DARABONBA_PTR_SET_VALUE(supportInstantSwitchWithImci_, supportInstantSwitchWithImci) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDbClusterAttributeZonalResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDbClusterAttributeZonalResponseBodyTags>) };
    inline vector<DescribeDbClusterAttributeZonalResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeDbClusterAttributeZonalResponseBodyTags>) };
    inline DescribeDbClusterAttributeZonalResponseBody& setTags(const vector<DescribeDbClusterAttributeZonalResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDbClusterAttributeZonalResponseBody& setTags(vector<DescribeDbClusterAttributeZonalResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string zoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeDbClusterAttributeZonalResponseBody& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    std::shared_ptr<string> aiCreatingTime_ = nullptr;
    std::shared_ptr<string> aiType_ = nullptr;
    std::shared_ptr<string> architecture_ = nullptr;
    std::shared_ptr<string> autoUpgradeMinorVersion_ = nullptr;
    std::shared_ptr<int64_t> blktagTotal_ = nullptr;
    std::shared_ptr<int64_t> blktagUsed_ = nullptr;
    std::shared_ptr<string> burstingEnabled_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> compressStorageMode_ = nullptr;
    std::shared_ptr<int64_t> compressStorageUsed_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DBClusterClass_ = nullptr;
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    std::shared_ptr<vector<DescribeDbClusterAttributeZonalResponseBodyDBNodes>> DBNodes_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> DBVersionStatus_ = nullptr;
    std::shared_ptr<int64_t> dataLevel1BackupChainSize_ = nullptr;
    std::shared_ptr<string> dataSyncMode_ = nullptr;
    std::shared_ptr<int32_t> deletionLock_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
    std::shared_ptr<bool> hasCompleteStandbyRes_ = nullptr;
    std::shared_ptr<string> hotStandbyCluster_ = nullptr;
    std::shared_ptr<string> imciAutoIndex_ = nullptr;
    std::shared_ptr<string> imperceptibleSwitch_ = nullptr;
    std::shared_ptr<int64_t> inodeTotal_ = nullptr;
    std::shared_ptr<int64_t> inodeUsed_ = nullptr;
    std::shared_ptr<bool> isLatestVersion_ = nullptr;
    std::shared_ptr<bool> isProxyLatestVersion_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> maintainTime_ = nullptr;
    std::shared_ptr<string> orca_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> provisionedIops_ = nullptr;
    std::shared_ptr<string> proxyCpuCores_ = nullptr;
    std::shared_ptr<string> proxyServerlessType_ = nullptr;
    std::shared_ptr<string> proxyStandardCpuCores_ = nullptr;
    std::shared_ptr<string> proxyStatus_ = nullptr;
    std::shared_ptr<string> proxyType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> restoreDataPoint_ = nullptr;
    std::shared_ptr<string> restoreType_ = nullptr;
    // RowCompression
    std::shared_ptr<string> rowCompression_ = nullptr;
    std::shared_ptr<int64_t> SQLSize_ = nullptr;
    std::shared_ptr<string> serverlessType_ = nullptr;
    std::shared_ptr<string> sourceDBCluster_ = nullptr;
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    std::shared_ptr<string> standbyHAMode_ = nullptr;
    std::shared_ptr<int64_t> storageMax_ = nullptr;
    std::shared_ptr<string> storagePayType_ = nullptr;
    std::shared_ptr<int64_t> storageSpace_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    std::shared_ptr<string> strictConsistency_ = nullptr;
    std::shared_ptr<string> subCategory_ = nullptr;
    std::shared_ptr<string> supportInstantSwitchWithImci_ = nullptr;
    std::shared_ptr<vector<DescribeDbClusterAttributeZonalResponseBodyTags>> tags_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
