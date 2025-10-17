// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSZONALRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSZONALRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersZonalResponseBodyItemsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersZonalResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersZonalResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AiType, aiType_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CentralControlRegionId, centralControlRegionId_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeNumber, DBNodeNumber_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(ENSRegionId, ENSRegionId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
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
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersZonalResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AiType, aiType_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CentralControlRegionId, centralControlRegionId_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeNumber, DBNodeNumber_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(ENSRegionId, ENSRegionId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
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
    DescribeDBClustersZonalResponseBodyItems() = default ;
    DescribeDBClustersZonalResponseBodyItems(const DescribeDBClustersZonalResponseBodyItems &) = default ;
    DescribeDBClustersZonalResponseBodyItems(DescribeDBClustersZonalResponseBodyItems &&) = default ;
    DescribeDBClustersZonalResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersZonalResponseBodyItems() = default ;
    DescribeDBClustersZonalResponseBodyItems& operator=(const DescribeDBClustersZonalResponseBodyItems &) = default ;
    DescribeDBClustersZonalResponseBodyItems& operator=(DescribeDBClustersZonalResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiType_ == nullptr
        && return this->category_ == nullptr && return this->centralControlRegionId_ == nullptr && return this->cloudProvider_ == nullptr && return this->cpuCores_ == nullptr && return this->createTime_ == nullptr
        && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeNumber_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->ENSRegionId_ == nullptr && return this->expireTime_ == nullptr && return this->expired_ == nullptr
        && return this->lockMode_ == nullptr && return this->payType_ == nullptr && return this->serverlessType_ == nullptr && return this->storageSpace_ == nullptr && return this->storageType_ == nullptr
        && return this->storageUsed_ == nullptr && return this->strictConsistency_ == nullptr && return this->subCategory_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr
        && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // aiType Field Functions 
    bool hasAiType() const { return this->aiType_ != nullptr;};
    void deleteAiType() { this->aiType_ = nullptr;};
    inline string aiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // centralControlRegionId Field Functions 
    bool hasCentralControlRegionId() const { return this->centralControlRegionId_ != nullptr;};
    void deleteCentralControlRegionId() { this->centralControlRegionId_ = nullptr;};
    inline string centralControlRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralControlRegionId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setCentralControlRegionId(string centralControlRegionId) { DARABONBA_PTR_SET_VALUE(centralControlRegionId_, centralControlRegionId) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string cloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeNumber Field Functions 
    bool hasDBNodeNumber() const { return this->DBNodeNumber_ != nullptr;};
    void deleteDBNodeNumber() { this->DBNodeNumber_ = nullptr;};
    inline int32_t DBNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNumber_, 0) };
    inline DescribeDBClustersZonalResponseBodyItems& setDBNodeNumber(int32_t DBNodeNumber) { DARABONBA_PTR_SET_VALUE(DBNodeNumber_, DBNodeNumber) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // ENSRegionId Field Functions 
    bool hasENSRegionId() const { return this->ENSRegionId_ != nullptr;};
    void deleteENSRegionId() { this->ENSRegionId_ = nullptr;};
    inline string ENSRegionId() const { DARABONBA_PTR_GET_DEFAULT(ENSRegionId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setENSRegionId(string ENSRegionId) { DARABONBA_PTR_SET_VALUE(ENSRegionId_, ENSRegionId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline DescribeDBClustersZonalResponseBodyItems& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBClustersZonalResponseBodyItems& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string strictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string subCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDBClustersZonalResponseBodyItemsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDBClustersZonalResponseBodyItemsTags>) };
    inline vector<Models::DescribeDBClustersZonalResponseBodyItemsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDBClustersZonalResponseBodyItemsTags>) };
    inline DescribeDBClustersZonalResponseBodyItems& setTags(const vector<Models::DescribeDBClustersZonalResponseBodyItemsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClustersZonalResponseBodyItems& setTags(vector<Models::DescribeDBClustersZonalResponseBodyItemsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersZonalResponseBodyItems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> aiType_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> centralControlRegionId_ = nullptr;
    std::shared_ptr<string> cloudProvider_ = nullptr;
    std::shared_ptr<string> cpuCores_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<int32_t> DBNodeNumber_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> ENSRegionId_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> serverlessType_ = nullptr;
    std::shared_ptr<int64_t> storageSpace_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    std::shared_ptr<string> strictConsistency_ = nullptr;
    std::shared_ptr<string> subCategory_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBClustersZonalResponseBodyItemsTags>> tags_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
