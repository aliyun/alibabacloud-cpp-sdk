// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYDBCLUSTERSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyDBClustersDBClusterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClustersResponseBodyDBClustersDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyDBClustersDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ControlVersion, controlVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExtStorageSize, extStorageSize_);
      DARABONBA_PTR_TO_JSON(ExtStorageType, extStorageType_);
      DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScaleOutDisableWriteWindows, scaleOutDisableWriteWindows_);
      DARABONBA_PTR_TO_JSON(ScaleOutStatus, scaleOutStatus_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyDBClustersDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ControlVersion, controlVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExtStorageSize, extStorageSize_);
      DARABONBA_PTR_FROM_JSON(ExtStorageType, extStorageType_);
      DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScaleOutDisableWriteWindows, scaleOutDisableWriteWindows_);
      DARABONBA_PTR_FROM_JSON(ScaleOutStatus, scaleOutStatus_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClustersResponseBodyDBClustersDBCluster() = default ;
    DescribeDBClustersResponseBodyDBClustersDBCluster(const DescribeDBClustersResponseBodyDBClustersDBCluster &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBCluster(DescribeDBClustersResponseBodyDBClustersDBCluster &&) = default ;
    DescribeDBClustersResponseBodyDBClustersDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyDBClustersDBCluster() = default ;
    DescribeDBClustersResponseBodyDBClustersDBCluster& operator=(const DescribeDBClustersResponseBodyDBClustersDBCluster &) = default ;
    DescribeDBClustersResponseBodyDBClustersDBCluster& operator=(DescribeDBClustersResponseBodyDBClustersDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->bid_ == nullptr && return this->category_ == nullptr && return this->commodityCode_ == nullptr && return this->connectionString_ == nullptr && return this->controlVersion_ == nullptr
        && return this->createTime_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterStatus_ == nullptr
        && return this->DBNodeClass_ == nullptr && return this->DBNodeCount_ == nullptr && return this->DBNodeStorage_ == nullptr && return this->dbVersion_ == nullptr && return this->expireTime_ == nullptr
        && return this->extStorageSize_ == nullptr && return this->extStorageType_ == nullptr && return this->isExpired_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr
        && return this->payType_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scaleOutDisableWriteWindows_ == nullptr
        && return this->scaleOutStatus_ == nullptr && return this->storageType_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcCloudInstanceId_ == nullptr
        && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // controlVersion Field Functions 
    bool hasControlVersion() const { return this->controlVersion_ != nullptr;};
    void deleteControlVersion() { this->controlVersion_ = nullptr;};
    inline string controlVersion() const { DARABONBA_PTR_GET_DEFAULT(controlVersion_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setControlVersion(string controlVersion) { DARABONBA_PTR_SET_VALUE(controlVersion_, controlVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int64_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline int64_t DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string dbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // extStorageSize Field Functions 
    bool hasExtStorageSize() const { return this->extStorageSize_ != nullptr;};
    void deleteExtStorageSize() { this->extStorageSize_ = nullptr;};
    inline int32_t extStorageSize() const { DARABONBA_PTR_GET_DEFAULT(extStorageSize_, 0) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setExtStorageSize(int32_t extStorageSize) { DARABONBA_PTR_SET_VALUE(extStorageSize_, extStorageSize) };


    // extStorageType Field Functions 
    bool hasExtStorageType() const { return this->extStorageType_ != nullptr;};
    void deleteExtStorageType() { this->extStorageType_ = nullptr;};
    inline string extStorageType() const { DARABONBA_PTR_GET_DEFAULT(extStorageType_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setExtStorageType(string extStorageType) { DARABONBA_PTR_SET_VALUE(extStorageType_, extStorageType) };


    // isExpired Field Functions 
    bool hasIsExpired() const { return this->isExpired_ != nullptr;};
    void deleteIsExpired() { this->isExpired_ = nullptr;};
    inline string isExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setIsExpired(string isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scaleOutDisableWriteWindows Field Functions 
    bool hasScaleOutDisableWriteWindows() const { return this->scaleOutDisableWriteWindows_ != nullptr;};
    void deleteScaleOutDisableWriteWindows() { this->scaleOutDisableWriteWindows_ = nullptr;};
    inline string scaleOutDisableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(scaleOutDisableWriteWindows_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setScaleOutDisableWriteWindows(string scaleOutDisableWriteWindows) { DARABONBA_PTR_SET_VALUE(scaleOutDisableWriteWindows_, scaleOutDisableWriteWindows) };


    // scaleOutStatus Field Functions 
    bool hasScaleOutStatus() const { return this->scaleOutStatus_ != nullptr;};
    void deleteScaleOutStatus() { this->scaleOutStatus_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus & scaleOutStatus() const { DARABONBA_PTR_GET_CONST(scaleOutStatus_, Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus) };
    inline Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus scaleOutStatus() { DARABONBA_PTR_GET(scaleOutStatus_, Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setScaleOutStatus(const Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus & scaleOutStatus) { DARABONBA_PTR_SET_VALUE(scaleOutStatus_, scaleOutStatus) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setScaleOutStatus(Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus && scaleOutStatus) { DARABONBA_PTR_SET_RVALUE(scaleOutStatus_, scaleOutStatus) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags) };
    inline Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setTags(const Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setTags(Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersResponseBodyDBClustersDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The site ID. Valid values:
    // 
    // *   **26842**: the China site (aliyun.com)
    // *   **26888**: the international site (alibabacloud.com)
    std::shared_ptr<string> bid_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Basic**: Single-replica Edition
    // *   **HighAvailability**: Double-replica Edition
    std::shared_ptr<string> category_ = nullptr;
    // The commodity code of the cluster.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The VPC endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The version number of the backend management system of ApsaraDB for ClickHouse. Valid values:
    // 
    // *   **v1**
    // *   **v2**
    std::shared_ptr<string> controlVersion_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster. Only VPC is supported.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The state of the cluster. Valid values:
    // 
    // *   **Preparing**: The cluster is being prepared.
    // *   **Creating**: The cluster is being created.
    // *   **Running**: The cluster is running.
    // *   **Deleting**: The cluster is being deleted.
    // *   **SCALING_OUT**: The storage capacity of the cluster is being expanded.
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The specifications of the cluster.
    // 
    // *   Valid values when the cluster is of Single-replica Edition: -**S4**: 4 CPU cores and 16 GB of memory -**S8**: 8 CPU cores and 32 GB of memory
    // 
    //     *   **S16**: 16 CPU cores and 64 GB of memory
    //     *   **S32**: 32 CPU cores and 128 GB of memory
    //     *   **S64**: 64 CPU cores and 256 GB of memory
    //     *   **S104**: 104 CPU cores and 384 GB of memory
    // 
    // *   Valid values when the cluster is of Double-replica Edition: -**C4**: 4 CPU cores and 16 GB of memory -**C8**: 8 CPU cores and 32 GB of memory -**C16**: 16 CPU cores and 64 GB of memory -**C32**: 32 CPU cores and 128 GB of memory -**C64**: 64 CPU cores and 256 GB of memory -**C104**: 104 CPU cores and 384 GB of memory
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of nodes.
    // 
    // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
    // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
    std::shared_ptr<int64_t> DBNodeCount_ = nullptr;
    // The storage capacity of each node. Valid values: 100 to 32000. Unit: GB.
    // 
    // >  This value is a multiple of 100.
    std::shared_ptr<int64_t> DBNodeStorage_ = nullptr;
    // The engine version of the cluster.
    std::shared_ptr<string> dbVersion_ = nullptr;
    // The time when the cluster expired. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The extended storage space.
    std::shared_ptr<int32_t> extStorageSize_ = nullptr;
    // The extended storage type. Valid values:
    // 
    // *   **CloudSSD**: standard SSD.
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    std::shared_ptr<string> extStorageType_ = nullptr;
    // Indicates whether the cluster has expired. Valid values:
    // 
    // *   **true**: The cluster has expired.
    // *   **false**: The cluster has not expired.
    std::shared_ptr<string> isExpired_ = nullptr;
    // The lock mode of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
    // *   **LockByRestoration**: The cluster is automatically locked because the cluster is about to be rolled back.
    // *   **LockByDiskQuota**: The cluster is automatically locked because the disk space is exhausted.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The cause why the cluster was locked.
    // 
    // >  If the value of the LockMode parameter is Unlock, an empty string is returned for this parameter.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: The cluster uses the pay-as-you-go billing method.
    // *   **Prepaid**: The cluster uses the subscription billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The HTTP port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The time window during which write operations are stopped for specification changes.
    std::shared_ptr<string> scaleOutDisableWriteWindows_ = nullptr;
    // The status of a data migration task.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus> scaleOutStatus_ = nullptr;
    // The storage type of the cluster. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    std::shared_ptr<string> storageType_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyDBClustersDBClusterTags> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC in which the cluster is deployed.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the cluster is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
