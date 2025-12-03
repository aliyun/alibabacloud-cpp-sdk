// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QuerySparkRelateHBaseResponseBodyClusterListCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySparkRelateHBaseResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IsRelated, isRelated_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySparkRelateHBaseResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IsRelated, isRelated_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    QuerySparkRelateHBaseResponseBodyClusterListCluster() = default ;
    QuerySparkRelateHBaseResponseBodyClusterListCluster(const QuerySparkRelateHBaseResponseBodyClusterListCluster &) = default ;
    QuerySparkRelateHBaseResponseBodyClusterListCluster(QuerySparkRelateHBaseResponseBodyClusterListCluster &&) = default ;
    QuerySparkRelateHBaseResponseBodyClusterListCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySparkRelateHBaseResponseBodyClusterListCluster() = default ;
    QuerySparkRelateHBaseResponseBodyClusterListCluster& operator=(const QuerySparkRelateHBaseResponseBodyClusterListCluster &) = default ;
    QuerySparkRelateHBaseResponseBodyClusterListCluster& operator=(QuerySparkRelateHBaseResponseBodyClusterListCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->coreDiskType_ == nullptr && return this->coreInstanceQuantity_ == nullptr && return this->createTime_ == nullptr
        && return this->dbType_ == nullptr && return this->expireTime_ == nullptr && return this->isRelated_ == nullptr && return this->lockMode_ == nullptr && return this->mainVersion_ == nullptr
        && return this->netType_ == nullptr && return this->payType_ == nullptr && return this->reason_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->userId_ == nullptr && return this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string coreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceQuantity Field Functions 
    bool hasCoreInstanceQuantity() const { return this->coreInstanceQuantity_ != nullptr;};
    void deleteCoreInstanceQuantity() { this->coreInstanceQuantity_ = nullptr;};
    inline int32_t coreInstanceQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceQuantity_, 0) };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setCoreInstanceQuantity(int32_t coreInstanceQuantity) { DARABONBA_PTR_SET_VALUE(coreInstanceQuantity_, coreInstanceQuantity) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // isRelated Field Functions 
    bool hasIsRelated() const { return this->isRelated_ != nullptr;};
    void deleteIsRelated() { this->isRelated_ = nullptr;};
    inline bool isRelated() const { DARABONBA_PTR_GET_DEFAULT(isRelated_, false) };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setIsRelated(bool isRelated) { DARABONBA_PTR_SET_VALUE(isRelated_, isRelated) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // mainVersion Field Functions 
    bool hasMainVersion() const { return this->mainVersion_ != nullptr;};
    void deleteMainVersion() { this->mainVersion_ = nullptr;};
    inline string mainVersion() const { DARABONBA_PTR_GET_DEFAULT(mainVersion_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setMainVersion(string mainVersion) { DARABONBA_PTR_SET_VALUE(mainVersion_, mainVersion) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline QuerySparkRelateHBaseResponseBodyClusterListCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> coreDiskType_ = nullptr;
    std::shared_ptr<int32_t> coreInstanceQuantity_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<bool> isRelated_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> mainVersion_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
