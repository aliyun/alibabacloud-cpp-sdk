// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterDBNodes.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AiType, aiType_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeNumber, DBNodeNumber_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteMemorySize, remoteMemorySize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SearchStorageUsed, searchStorageUsed_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AiType, aiType_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeNumber, DBNodeNumber_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteMemorySize, remoteMemorySize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SearchStorageUsed, searchStorageUsed_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(const DescribeDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(DescribeDBClustersResponseBodyItemsDBCluster &&) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersResponseBodyItemsDBCluster& operator=(const DescribeDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster& operator=(DescribeDBClustersResponseBodyItemsDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiType_ == nullptr
        && return this->category_ == nullptr && return this->cpuCores_ == nullptr && return this->createTime_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr
        && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeNumber_ == nullptr && return this->DBNodes_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->deletionLock_ == nullptr && return this->engine_ == nullptr && return this->expireTime_ == nullptr
        && return this->expired_ == nullptr && return this->hotStandbyCluster_ == nullptr && return this->lockMode_ == nullptr && return this->memorySize_ == nullptr && return this->payType_ == nullptr
        && return this->regionId_ == nullptr && return this->remoteMemorySize_ == nullptr && return this->resourceGroupId_ == nullptr && return this->searchStorageUsed_ == nullptr && return this->serverlessType_ == nullptr
        && return this->storagePayType_ == nullptr && return this->storageSpace_ == nullptr && return this->storageType_ == nullptr && return this->storageUsed_ == nullptr && return this->strictConsistency_ == nullptr
        && return this->subCategory_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // aiType Field Functions 
    bool hasAiType() const { return this->aiType_ != nullptr;};
    void deleteAiType() { this->aiType_ = nullptr;};
    inline string aiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeNumber Field Functions 
    bool hasDBNodeNumber() const { return this->DBNodeNumber_ != nullptr;};
    void deleteDBNodeNumber() { this->DBNodeNumber_ = nullptr;};
    inline int32_t DBNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNumber_, 0) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodeNumber(int32_t DBNodeNumber) { DARABONBA_PTR_SET_VALUE(DBNodeNumber_, DBNodeNumber) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes) };
    inline Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes DBNodes() { DARABONBA_PTR_GET(DBNodes_, Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodes(const Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodes(Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // deletionLock Field Functions 
    bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
    void deleteDeletionLock() { this->deletionLock_ = nullptr;};
    inline int32_t deletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string hotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteMemorySize Field Functions 
    bool hasRemoteMemorySize() const { return this->remoteMemorySize_ != nullptr;};
    void deleteRemoteMemorySize() { this->remoteMemorySize_ = nullptr;};
    inline string remoteMemorySize() const { DARABONBA_PTR_GET_DEFAULT(remoteMemorySize_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setRemoteMemorySize(string remoteMemorySize) { DARABONBA_PTR_SET_VALUE(remoteMemorySize_, remoteMemorySize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // searchStorageUsed Field Functions 
    bool hasSearchStorageUsed() const { return this->searchStorageUsed_ != nullptr;};
    void deleteSearchStorageUsed() { this->searchStorageUsed_ = nullptr;};
    inline int64_t searchStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(searchStorageUsed_, 0L) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setSearchStorageUsed(int64_t searchStorageUsed) { DARABONBA_PTR_SET_VALUE(searchStorageUsed_, searchStorageUsed) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string storagePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string strictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string subCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyItemsDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBClustersResponseBodyItemsDBClusterTags) };
    inline Models::DescribeDBClustersResponseBodyItemsDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBClustersResponseBodyItemsDBClusterTags) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTags(const Models::DescribeDBClustersResponseBodyItemsDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTags(Models::DescribeDBClustersResponseBodyItemsDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The type of the AI node. Valid values:
    // 
    // *   SearchNode: search node
    // *   DLNode: AI node
    // 
    // Enumeration values:
    // 
    // *   SearchNode | DLNode: both
    // *   DLNode: AI node
    // *   SearchNode: search node
    std::shared_ptr<string> aiType_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Normal**: Cluster Edition
    // *   **Basic**: Single Node Edition
    // *   **Archive**: X-Engine Edition
    // *   **NormalMultimaster**: Multi-master Cluster (Database/Table) Edition
    std::shared_ptr<string> category_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<string> cpuCores_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The state of the cluster.
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The specifications of the node.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int32_t> DBNodeNumber_ = nullptr;
    // The information about the nodes.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyItemsDBClusterDBNodes> DBNodes_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // Indicates whether the cluster is protected from deletion. Valid values:
    // 
    // *   **0**: The cluster is not protected from deletion.
    // *   **1**: The cluster is protected from deletion.
    // 
    // >  You cannot delete clusters that are protected from deletion.
    std::shared_ptr<int32_t> deletionLock_ = nullptr;
    // The database engine of the cluster.
    std::shared_ptr<string> engine_ = nullptr;
    // The expiration time of the cluster.
    // 
    // >  A specific value is returned only for subscription (**Prepaid**) clusters. For pay-as-you-go (**Postpaid**) clusters, no value is returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the cluster has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  A specific value is returned only for subscription (**Prepaid**) clusters.
    std::shared_ptr<string> expired_ = nullptr;
    // Indicates whether the hot standby storage cluster feature is enabled. Valid values:
    // 
    // *   ON
    // *   OFF
    std::shared_ptr<string> hotStandbyCluster_ = nullptr;
    // The lock state of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is unlocked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is locked due to cluster expiration.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The memory size for local operations. Unit: MB.
    std::shared_ptr<string> memorySize_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The memory size for distributed operations. Unit: MB.
    std::shared_ptr<string> remoteMemorySize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> searchStorageUsed_ = nullptr;
    // Indicates whether the cluster is a serverless cluster. **AgileServerless** indicates the cluster is a serverless cluster. No value is returned for a common cluster.
    std::shared_ptr<string> serverlessType_ = nullptr;
    // The storage billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    std::shared_ptr<string> storagePayType_ = nullptr;
    // The storage that is billed based on the subscription billing method. Unit: bytes.
    std::shared_ptr<int64_t> storageSpace_ = nullptr;
    // The storage type.
    std::shared_ptr<string> storageType_ = nullptr;
    // The used storage. Unit: bytes.
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    // Indicates whether multi-zone data consistency is enabled for the cluster. Valid values:
    // 
    // *   **ON**: Multi-zone data consistency is enabled. For Standard Edition clusters of Multi-zone Edition, this value is returned.
    // *   **OFF**: Multi-zone data consistency is disabled.
    std::shared_ptr<string> strictConsistency_ = nullptr;
    // The specification type of the compute node. Valid values:
    // 
    // *   **Exclusive**: dedicated.
    // *   **General**: general-purpose.
    std::shared_ptr<string> subCategory_ = nullptr;
    // The information about the tags.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyItemsDBClusterTags> tags_ = nullptr;
    // The virtual private cloud (VPC) ID of the cluster.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The vSwitch ID of the cluster.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
