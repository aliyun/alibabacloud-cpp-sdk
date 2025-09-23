// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAIDBClustersResponseBodyItemsDBClusterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunType, runType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunType, runType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAIDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeAIDBClustersResponseBodyItemsDBCluster(const DescribeAIDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeAIDBClustersResponseBodyItemsDBCluster(DescribeAIDBClustersResponseBodyItemsDBCluster &&) = default ;
    DescribeAIDBClustersResponseBodyItemsDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeAIDBClustersResponseBodyItemsDBCluster& operator=(const DescribeAIDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeAIDBClustersResponseBodyItemsDBCluster& operator=(DescribeAIDBClustersResponseBodyItemsDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiNodeType_ != nullptr
        && this->createTime_ != nullptr && this->DBClusterDescription_ != nullptr && this->DBClusterId_ != nullptr && this->DBClusterStatus_ != nullptr && this->DBNodeClass_ != nullptr
        && this->DBType_ != nullptr && this->expireTime_ != nullptr && this->expired_ != nullptr && this->kubeClusterId_ != nullptr && this->lockMode_ != nullptr
        && this->payType_ != nullptr && this->regionId_ != nullptr && this->runType_ != nullptr && this->storageSpace_ != nullptr && this->storageType_ != nullptr
        && this->tags_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr && this->zoneId_ != nullptr; };
    // aiNodeType Field Functions 
    bool hasAiNodeType() const { return this->aiNodeType_ != nullptr;};
    void deleteAiNodeType() { this->aiNodeType_ = nullptr;};
    inline string aiNodeType() const { DARABONBA_PTR_GET_DEFAULT(aiNodeType_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setAiNodeType(string aiNodeType) { DARABONBA_PTR_SET_VALUE(aiNodeType_, aiNodeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // kubeClusterId Field Functions 
    bool hasKubeClusterId() const { return this->kubeClusterId_ != nullptr;};
    void deleteKubeClusterId() { this->kubeClusterId_ = nullptr;};
    inline string kubeClusterId() const { DARABONBA_PTR_GET_DEFAULT(kubeClusterId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setKubeClusterId(string kubeClusterId) { DARABONBA_PTR_SET_VALUE(kubeClusterId_, kubeClusterId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string runType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int32_t storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0) };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setStorageSpace(int32_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags) };
    inline Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags) };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setTags(const Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setTags(Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAIDBClustersResponseBodyItemsDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> aiNodeType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<bool> expired_ = nullptr;
    std::shared_ptr<string> kubeClusterId_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> runType_ = nullptr;
    std::shared_ptr<int32_t> storageSpace_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<Models::DescribeAIDBClustersResponseBodyItemsDBClusterTags> tags_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
