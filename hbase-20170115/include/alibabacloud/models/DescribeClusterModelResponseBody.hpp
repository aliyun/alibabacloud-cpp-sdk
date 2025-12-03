// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterModelResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ColdStorageStatus, coldStorageStatus_);
      DARABONBA_PTR_TO_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HaType, haType_);
      DARABONBA_PTR_TO_JSON(HasUser, hasUser_);
      DARABONBA_PTR_TO_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_TO_JSON(MasterDiskSize, masterDiskSize_);
      DARABONBA_PTR_TO_JSON(MasterDiskType, masterDiskType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ColdStorageStatus, coldStorageStatus_);
      DARABONBA_PTR_FROM_JSON(CoreDiskQuantity, coreDiskQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceQuantity, coreInstanceQuantity_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HaType, haType_);
      DARABONBA_PTR_FROM_JSON(HasUser, hasUser_);
      DARABONBA_PTR_FROM_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_FROM_JSON(MasterDiskSize, masterDiskSize_);
      DARABONBA_PTR_FROM_JSON(MasterDiskType, masterDiskType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeClusterModelResponseBody() = default ;
    DescribeClusterModelResponseBody(const DescribeClusterModelResponseBody &) = default ;
    DescribeClusterModelResponseBody(DescribeClusterModelResponseBody &&) = default ;
    DescribeClusterModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterModelResponseBody() = default ;
    DescribeClusterModelResponseBody& operator=(const DescribeClusterModelResponseBody &) = default ;
    DescribeClusterModelResponseBody& operator=(DescribeClusterModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->backupStatus_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->coldStorageStatus_ == nullptr
        && return this->coreDiskQuantity_ == nullptr && return this->coreDiskSize_ == nullptr && return this->coreDiskType_ == nullptr && return this->coreInstanceQuantity_ == nullptr && return this->coreInstanceType_ == nullptr
        && return this->createTime_ == nullptr && return this->dbType_ == nullptr && return this->expireTime_ == nullptr && return this->haType_ == nullptr && return this->hasUser_ == nullptr
        && return this->isMultimod_ == nullptr && return this->lockMode_ == nullptr && return this->mainVersion_ == nullptr && return this->masterDiskSize_ == nullptr && return this->masterDiskType_ == nullptr
        && return this->masterInstanceType_ == nullptr && return this->minorVersion_ == nullptr && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->updateStatus_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline DescribeClusterModelResponseBody& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeClusterModelResponseBody& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterModelResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeClusterModelResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterModelResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // coldStorageStatus Field Functions 
    bool hasColdStorageStatus() const { return this->coldStorageStatus_ != nullptr;};
    void deleteColdStorageStatus() { this->coldStorageStatus_ = nullptr;};
    inline string coldStorageStatus() const { DARABONBA_PTR_GET_DEFAULT(coldStorageStatus_, "") };
    inline DescribeClusterModelResponseBody& setColdStorageStatus(string coldStorageStatus) { DARABONBA_PTR_SET_VALUE(coldStorageStatus_, coldStorageStatus) };


    // coreDiskQuantity Field Functions 
    bool hasCoreDiskQuantity() const { return this->coreDiskQuantity_ != nullptr;};
    void deleteCoreDiskQuantity() { this->coreDiskQuantity_ = nullptr;};
    inline int32_t coreDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreDiskQuantity_, 0) };
    inline DescribeClusterModelResponseBody& setCoreDiskQuantity(int32_t coreDiskQuantity) { DARABONBA_PTR_SET_VALUE(coreDiskQuantity_, coreDiskQuantity) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline string coreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, "") };
    inline DescribeClusterModelResponseBody& setCoreDiskSize(string coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string coreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline DescribeClusterModelResponseBody& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceQuantity Field Functions 
    bool hasCoreInstanceQuantity() const { return this->coreInstanceQuantity_ != nullptr;};
    void deleteCoreInstanceQuantity() { this->coreInstanceQuantity_ = nullptr;};
    inline int32_t coreInstanceQuantity() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceQuantity_, 0) };
    inline DescribeClusterModelResponseBody& setCoreInstanceQuantity(int32_t coreInstanceQuantity) { DARABONBA_PTR_SET_VALUE(coreInstanceQuantity_, coreInstanceQuantity) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string coreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline DescribeClusterModelResponseBody& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeClusterModelResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeClusterModelResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeClusterModelResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // haType Field Functions 
    bool hasHaType() const { return this->haType_ != nullptr;};
    void deleteHaType() { this->haType_ = nullptr;};
    inline string haType() const { DARABONBA_PTR_GET_DEFAULT(haType_, "") };
    inline DescribeClusterModelResponseBody& setHaType(string haType) { DARABONBA_PTR_SET_VALUE(haType_, haType) };


    // hasUser Field Functions 
    bool hasHasUser() const { return this->hasUser_ != nullptr;};
    void deleteHasUser() { this->hasUser_ = nullptr;};
    inline string hasUser() const { DARABONBA_PTR_GET_DEFAULT(hasUser_, "") };
    inline DescribeClusterModelResponseBody& setHasUser(string hasUser) { DARABONBA_PTR_SET_VALUE(hasUser_, hasUser) };


    // isMultimod Field Functions 
    bool hasIsMultimod() const { return this->isMultimod_ != nullptr;};
    void deleteIsMultimod() { this->isMultimod_ = nullptr;};
    inline string isMultimod() const { DARABONBA_PTR_GET_DEFAULT(isMultimod_, "") };
    inline DescribeClusterModelResponseBody& setIsMultimod(string isMultimod) { DARABONBA_PTR_SET_VALUE(isMultimod_, isMultimod) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeClusterModelResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // mainVersion Field Functions 
    bool hasMainVersion() const { return this->mainVersion_ != nullptr;};
    void deleteMainVersion() { this->mainVersion_ = nullptr;};
    inline string mainVersion() const { DARABONBA_PTR_GET_DEFAULT(mainVersion_, "") };
    inline DescribeClusterModelResponseBody& setMainVersion(string mainVersion) { DARABONBA_PTR_SET_VALUE(mainVersion_, mainVersion) };


    // masterDiskSize Field Functions 
    bool hasMasterDiskSize() const { return this->masterDiskSize_ != nullptr;};
    void deleteMasterDiskSize() { this->masterDiskSize_ = nullptr;};
    inline int32_t masterDiskSize() const { DARABONBA_PTR_GET_DEFAULT(masterDiskSize_, 0) };
    inline DescribeClusterModelResponseBody& setMasterDiskSize(int32_t masterDiskSize) { DARABONBA_PTR_SET_VALUE(masterDiskSize_, masterDiskSize) };


    // masterDiskType Field Functions 
    bool hasMasterDiskType() const { return this->masterDiskType_ != nullptr;};
    void deleteMasterDiskType() { this->masterDiskType_ = nullptr;};
    inline string masterDiskType() const { DARABONBA_PTR_GET_DEFAULT(masterDiskType_, "") };
    inline DescribeClusterModelResponseBody& setMasterDiskType(string masterDiskType) { DARABONBA_PTR_SET_VALUE(masterDiskType_, masterDiskType) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string masterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline DescribeClusterModelResponseBody& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeClusterModelResponseBody& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeClusterModelResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterModelResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClusterModelResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeClusterModelResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeClusterModelResponseBodyTags) };
    inline DescribeClusterModelResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeClusterModelResponseBodyTags) };
    inline DescribeClusterModelResponseBody& setTags(const DescribeClusterModelResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClusterModelResponseBody& setTags(DescribeClusterModelResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string updateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline DescribeClusterModelResponseBody& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeClusterModelResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<string> backupStatus_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> coldStorageStatus_ = nullptr;
    std::shared_ptr<int32_t> coreDiskQuantity_ = nullptr;
    std::shared_ptr<string> coreDiskSize_ = nullptr;
    std::shared_ptr<string> coreDiskType_ = nullptr;
    std::shared_ptr<int32_t> coreInstanceQuantity_ = nullptr;
    std::shared_ptr<string> coreInstanceType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> haType_ = nullptr;
    std::shared_ptr<string> hasUser_ = nullptr;
    std::shared_ptr<string> isMultimod_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> mainVersion_ = nullptr;
    std::shared_ptr<int32_t> masterDiskSize_ = nullptr;
    std::shared_ptr<string> masterDiskType_ = nullptr;
    std::shared_ptr<string> masterInstanceType_ = nullptr;
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<DescribeClusterModelResponseBodyTags> tags_ = nullptr;
    std::shared_ptr<string> updateStatus_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
