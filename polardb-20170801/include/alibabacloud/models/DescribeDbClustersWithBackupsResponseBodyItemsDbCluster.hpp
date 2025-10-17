// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersWithBackupsResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_TO_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
      DARABONBA_PTR_FROM_JSON(DeletionLock, deletionLock_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster(const DescribeDBClustersWithBackupsResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster(DescribeDBClustersWithBackupsResponseBodyItemsDBCluster &&) = default ;
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersWithBackupsResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& operator=(const DescribeDBClustersWithBackupsResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& operator=(DescribeDBClustersWithBackupsResponseBodyItemsDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBNodeClass_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->deletedTime_ == nullptr && return this->deletionLock_ == nullptr && return this->engine_ == nullptr
        && return this->expireTime_ == nullptr && return this->expired_ == nullptr && return this->isDeleted_ == nullptr && return this->lockMode_ == nullptr && return this->payType_ == nullptr
        && return this->regionId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // deletedTime Field Functions 
    bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
    void deleteDeletedTime() { this->deletedTime_ = nullptr;};
    inline string deletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


    // deletionLock Field Functions 
    bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
    void deleteDeletionLock() { this->deletionLock_ = nullptr;};
    inline int32_t deletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int32_t isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersWithBackupsResponseBodyItemsDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   Creating: The cluster is being created.
    // *   Running: The cluster is running.
    // *   Deleting: The cluster is being released.
    // *   Rebooting: The cluster is restarting.
    // *   DBNodeCreating: The node is being added.
    // *   DBNodeDeleting: The node is being deleted.
    // *   ClassChanging: The specifications of the node are being changed.
    // *   NetAddressCreating: The network connection is being created.
    // *   NetAddressDeleting: The network connection is being deleted.
    // *   NetAddressModifying: The network connection is being modified.
    // *   Deleted: The cluster has been released.
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The specifications of the node.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The time when the cluster was deleted.
    std::shared_ptr<string> deletedTime_ = nullptr;
    // Indicates whether the cluster is locked and can be deleted. Valid values:
    // 
    // *   **0**: The cluster is not locked and can be deleted.
    // *   **1**: The cluster is locked and cannot be deleted.
    std::shared_ptr<int32_t> deletionLock_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The time when the cluster expires.
    // 
    // > A specific value will be returned only for subscription clusters. For pay-as-you-go clusters, an empty string will be returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the cluster has expired.
    // 
    // > A specific value will be returned only for subscription clusters.
    std::shared_ptr<string> expired_ = nullptr;
    // Indicates whether the cluster was released. Valid values:
    // 
    // *   1: released
    // *   0: not released
    std::shared_ptr<int32_t> isDeleted_ = nullptr;
    // The state of the cluster lock. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked after the cluster expires.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The VPC ID of the cluster.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone in which the instance is located.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
