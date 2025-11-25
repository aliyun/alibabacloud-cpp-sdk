// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolarFsAttributeResponseBodyMountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
      DARABONBA_PTR_TO_JSON(AcceleratingEnable, acceleratingEnable_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthBaseLine, bandwidthBaseLine_);
      DARABONBA_PTR_TO_JSON(BucketId, bucketId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientDownloadPath, clientDownloadPath_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MetaUrl, metaUrl_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(MountInfo, mountInfo_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_TO_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_TO_JSON(PolarFsVersion, polarFsVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_TO_JSON(RelativePfsClusterId, relativePfsClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
      DARABONBA_PTR_FROM_JSON(AcceleratingEnable, acceleratingEnable_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthBaseLine, bandwidthBaseLine_);
      DARABONBA_PTR_FROM_JSON(BucketId, bucketId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientDownloadPath, clientDownloadPath_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MetaUrl, metaUrl_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(MountInfo, mountInfo_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_FROM_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_FROM_JSON(PolarFsVersion, polarFsVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_FROM_JSON(RelativePfsClusterId, relativePfsClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePolarFsAttributeResponseBody() = default ;
    DescribePolarFsAttributeResponseBody(const DescribePolarFsAttributeResponseBody &) = default ;
    DescribePolarFsAttributeResponseBody(DescribePolarFsAttributeResponseBody &&) = default ;
    DescribePolarFsAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsAttributeResponseBody() = default ;
    DescribePolarFsAttributeResponseBody& operator=(const DescribePolarFsAttributeResponseBody &) = default ;
    DescribePolarFsAttributeResponseBody& operator=(DescribePolarFsAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratedStorageSpace_ == nullptr
        && return this->acceleratingEnable_ == nullptr && return this->bandwidth_ == nullptr && return this->bandwidthBaseLine_ == nullptr && return this->bucketId_ == nullptr && return this->category_ == nullptr
        && return this->clientDownloadPath_ == nullptr && return this->createTime_ == nullptr && return this->DBType_ == nullptr && return this->expireTime_ == nullptr && return this->expired_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->lockMode_ == nullptr && return this->metaUrl_ == nullptr && return this->minorVersion_ == nullptr && return this->mountInfo_ == nullptr
        && return this->payType_ == nullptr && return this->polarFsInstanceDescription_ == nullptr && return this->polarFsInstanceId_ == nullptr && return this->polarFsStatus_ == nullptr && return this->polarFsType_ == nullptr
        && return this->polarFsVersion_ == nullptr && return this->regionId_ == nullptr && return this->relativeDbClusterId_ == nullptr && return this->relativePfsClusterId_ == nullptr && return this->requestId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->storageSpace_ == nullptr && return this->storageType_ == nullptr && return this->storageUsed_ == nullptr && return this->VPCId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // acceleratedStorageSpace Field Functions 
    bool hasAcceleratedStorageSpace() const { return this->acceleratedStorageSpace_ != nullptr;};
    void deleteAcceleratedStorageSpace() { this->acceleratedStorageSpace_ = nullptr;};
    inline double acceleratedStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(acceleratedStorageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setAcceleratedStorageSpace(double acceleratedStorageSpace) { DARABONBA_PTR_SET_VALUE(acceleratedStorageSpace_, acceleratedStorageSpace) };


    // acceleratingEnable Field Functions 
    bool hasAcceleratingEnable() const { return this->acceleratingEnable_ != nullptr;};
    void deleteAcceleratingEnable() { this->acceleratingEnable_ = nullptr;};
    inline string acceleratingEnable() const { DARABONBA_PTR_GET_DEFAULT(acceleratingEnable_, "") };
    inline DescribePolarFsAttributeResponseBody& setAcceleratingEnable(string acceleratingEnable) { DARABONBA_PTR_SET_VALUE(acceleratingEnable_, acceleratingEnable) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline double bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidth(double bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthBaseLine Field Functions 
    bool hasBandwidthBaseLine() const { return this->bandwidthBaseLine_ != nullptr;};
    void deleteBandwidthBaseLine() { this->bandwidthBaseLine_ = nullptr;};
    inline double bandwidthBaseLine() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBaseLine_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidthBaseLine(double bandwidthBaseLine) { DARABONBA_PTR_SET_VALUE(bandwidthBaseLine_, bandwidthBaseLine) };


    // bucketId Field Functions 
    bool hasBucketId() const { return this->bucketId_ != nullptr;};
    void deleteBucketId() { this->bucketId_ = nullptr;};
    inline string bucketId() const { DARABONBA_PTR_GET_DEFAULT(bucketId_, "") };
    inline DescribePolarFsAttributeResponseBody& setBucketId(string bucketId) { DARABONBA_PTR_SET_VALUE(bucketId_, bucketId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribePolarFsAttributeResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientDownloadPath Field Functions 
    bool hasClientDownloadPath() const { return this->clientDownloadPath_ != nullptr;};
    void deleteClientDownloadPath() { this->clientDownloadPath_ = nullptr;};
    inline string clientDownloadPath() const { DARABONBA_PTR_GET_DEFAULT(clientDownloadPath_, "") };
    inline DescribePolarFsAttributeResponseBody& setClientDownloadPath(string clientDownloadPath) { DARABONBA_PTR_SET_VALUE(clientDownloadPath_, clientDownloadPath) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribePolarFsAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribePolarFsAttributeResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribePolarFsAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // metaUrl Field Functions 
    bool hasMetaUrl() const { return this->metaUrl_ != nullptr;};
    void deleteMetaUrl() { this->metaUrl_ = nullptr;};
    inline string metaUrl() const { DARABONBA_PTR_GET_DEFAULT(metaUrl_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaUrl(string metaUrl) { DARABONBA_PTR_SET_VALUE(metaUrl_, metaUrl) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // mountInfo Field Functions 
    bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
    void deleteMountInfo() { this->mountInfo_ = nullptr;};
    inline const DescribePolarFsAttributeResponseBodyMountInfo & mountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, DescribePolarFsAttributeResponseBodyMountInfo) };
    inline DescribePolarFsAttributeResponseBodyMountInfo mountInfo() { DARABONBA_PTR_GET(mountInfo_, DescribePolarFsAttributeResponseBodyMountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(const DescribePolarFsAttributeResponseBodyMountInfo & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(DescribePolarFsAttributeResponseBodyMountInfo && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFsInstanceDescription Field Functions 
    bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
    void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
    inline string polarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string polarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarFsStatus Field Functions 
    bool hasPolarFsStatus() const { return this->polarFsStatus_ != nullptr;};
    void deletePolarFsStatus() { this->polarFsStatus_ = nullptr;};
    inline string polarFsStatus() const { DARABONBA_PTR_GET_DEFAULT(polarFsStatus_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsStatus(string polarFsStatus) { DARABONBA_PTR_SET_VALUE(polarFsStatus_, polarFsStatus) };


    // polarFsType Field Functions 
    bool hasPolarFsType() const { return this->polarFsType_ != nullptr;};
    void deletePolarFsType() { this->polarFsType_ = nullptr;};
    inline string polarFsType() const { DARABONBA_PTR_GET_DEFAULT(polarFsType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsType(string polarFsType) { DARABONBA_PTR_SET_VALUE(polarFsType_, polarFsType) };


    // polarFsVersion Field Functions 
    bool hasPolarFsVersion() const { return this->polarFsVersion_ != nullptr;};
    void deletePolarFsVersion() { this->polarFsVersion_ = nullptr;};
    inline string polarFsVersion() const { DARABONBA_PTR_GET_DEFAULT(polarFsVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsVersion(string polarFsVersion) { DARABONBA_PTR_SET_VALUE(polarFsVersion_, polarFsVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relativeDbClusterId Field Functions 
    bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
    void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
    inline string relativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


    // relativePfsClusterId Field Functions 
    bool hasRelativePfsClusterId() const { return this->relativePfsClusterId_ != nullptr;};
    void deleteRelativePfsClusterId() { this->relativePfsClusterId_ = nullptr;};
    inline string relativePfsClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativePfsClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativePfsClusterId(string relativePfsClusterId) { DARABONBA_PTR_SET_VALUE(relativePfsClusterId_, relativePfsClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribePolarFsAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline double storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageSpace(double storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribePolarFsAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline double storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageUsed(double storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePolarFsAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<double> acceleratedStorageSpace_ = nullptr;
    std::shared_ptr<string> acceleratingEnable_ = nullptr;
    std::shared_ptr<double> bandwidth_ = nullptr;
    std::shared_ptr<double> bandwidthBaseLine_ = nullptr;
    std::shared_ptr<string> bucketId_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> clientDownloadPath_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> metaUrl_ = nullptr;
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<DescribePolarFsAttributeResponseBodyMountInfo> mountInfo_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> polarFsInstanceDescription_ = nullptr;
    std::shared_ptr<string> polarFsInstanceId_ = nullptr;
    std::shared_ptr<string> polarFsStatus_ = nullptr;
    std::shared_ptr<string> polarFsType_ = nullptr;
    std::shared_ptr<string> polarFsVersion_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> relativeDbClusterId_ = nullptr;
    std::shared_ptr<string> relativePfsClusterId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<double> storageSpace_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<double> storageUsed_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
