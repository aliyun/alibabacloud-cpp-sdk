// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(CustomBucketPath, customBucketPath_);
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
      DARABONBA_PTR_FROM_JSON(CustomBucketPath, customBucketPath_);
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
    class MountInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PolarDbProxy, polarDbProxy_);
        DARABONBA_PTR_TO_JSON(PolarFsCluster, polarFsCluster_);
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, MountInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PolarDbProxy, polarDbProxy_);
        DARABONBA_PTR_FROM_JSON(PolarFsCluster, polarFsCluster_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
      };
      MountInfo() = default ;
      MountInfo(const MountInfo &) = default ;
      MountInfo(MountInfo &&) = default ;
      MountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountInfo() = default ;
      MountInfo& operator=(const MountInfo &) = default ;
      MountInfo& operator=(MountInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->polarDbProxy_ == nullptr
        && this->polarFsCluster_ == nullptr && this->token_ == nullptr; };
      // polarDbProxy Field Functions 
      bool hasPolarDbProxy() const { return this->polarDbProxy_ != nullptr;};
      void deletePolarDbProxy() { this->polarDbProxy_ = nullptr;};
      inline string getPolarDbProxy() const { DARABONBA_PTR_GET_DEFAULT(polarDbProxy_, "") };
      inline MountInfo& setPolarDbProxy(string polarDbProxy) { DARABONBA_PTR_SET_VALUE(polarDbProxy_, polarDbProxy) };


      // polarFsCluster Field Functions 
      bool hasPolarFsCluster() const { return this->polarFsCluster_ != nullptr;};
      void deletePolarFsCluster() { this->polarFsCluster_ = nullptr;};
      inline string getPolarFsCluster() const { DARABONBA_PTR_GET_DEFAULT(polarFsCluster_, "") };
      inline MountInfo& setPolarFsCluster(string polarFsCluster) { DARABONBA_PTR_SET_VALUE(polarFsCluster_, polarFsCluster) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline MountInfo& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      shared_ptr<string> polarDbProxy_ {};
      shared_ptr<string> polarFsCluster_ {};
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->acceleratedStorageSpace_ == nullptr
        && this->acceleratingEnable_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthBaseLine_ == nullptr && this->bucketId_ == nullptr && this->category_ == nullptr
        && this->clientDownloadPath_ == nullptr && this->createTime_ == nullptr && this->customBucketPath_ == nullptr && this->DBType_ == nullptr && this->expireTime_ == nullptr
        && this->expired_ == nullptr && this->fileSystemId_ == nullptr && this->lockMode_ == nullptr && this->metaUrl_ == nullptr && this->minorVersion_ == nullptr
        && this->mountInfo_ == nullptr && this->payType_ == nullptr && this->polarFsInstanceDescription_ == nullptr && this->polarFsInstanceId_ == nullptr && this->polarFsStatus_ == nullptr
        && this->polarFsType_ == nullptr && this->polarFsVersion_ == nullptr && this->regionId_ == nullptr && this->relativeDbClusterId_ == nullptr && this->relativePfsClusterId_ == nullptr
        && this->requestId_ == nullptr && this->securityGroupId_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->storageUsed_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // acceleratedStorageSpace Field Functions 
    bool hasAcceleratedStorageSpace() const { return this->acceleratedStorageSpace_ != nullptr;};
    void deleteAcceleratedStorageSpace() { this->acceleratedStorageSpace_ = nullptr;};
    inline double getAcceleratedStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(acceleratedStorageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setAcceleratedStorageSpace(double acceleratedStorageSpace) { DARABONBA_PTR_SET_VALUE(acceleratedStorageSpace_, acceleratedStorageSpace) };


    // acceleratingEnable Field Functions 
    bool hasAcceleratingEnable() const { return this->acceleratingEnable_ != nullptr;};
    void deleteAcceleratingEnable() { this->acceleratingEnable_ = nullptr;};
    inline string getAcceleratingEnable() const { DARABONBA_PTR_GET_DEFAULT(acceleratingEnable_, "") };
    inline DescribePolarFsAttributeResponseBody& setAcceleratingEnable(string acceleratingEnable) { DARABONBA_PTR_SET_VALUE(acceleratingEnable_, acceleratingEnable) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline double getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidth(double bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthBaseLine Field Functions 
    bool hasBandwidthBaseLine() const { return this->bandwidthBaseLine_ != nullptr;};
    void deleteBandwidthBaseLine() { this->bandwidthBaseLine_ = nullptr;};
    inline double getBandwidthBaseLine() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBaseLine_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidthBaseLine(double bandwidthBaseLine) { DARABONBA_PTR_SET_VALUE(bandwidthBaseLine_, bandwidthBaseLine) };


    // bucketId Field Functions 
    bool hasBucketId() const { return this->bucketId_ != nullptr;};
    void deleteBucketId() { this->bucketId_ = nullptr;};
    inline string getBucketId() const { DARABONBA_PTR_GET_DEFAULT(bucketId_, "") };
    inline DescribePolarFsAttributeResponseBody& setBucketId(string bucketId) { DARABONBA_PTR_SET_VALUE(bucketId_, bucketId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribePolarFsAttributeResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientDownloadPath Field Functions 
    bool hasClientDownloadPath() const { return this->clientDownloadPath_ != nullptr;};
    void deleteClientDownloadPath() { this->clientDownloadPath_ = nullptr;};
    inline string getClientDownloadPath() const { DARABONBA_PTR_GET_DEFAULT(clientDownloadPath_, "") };
    inline DescribePolarFsAttributeResponseBody& setClientDownloadPath(string clientDownloadPath) { DARABONBA_PTR_SET_VALUE(clientDownloadPath_, clientDownloadPath) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customBucketPath Field Functions 
    bool hasCustomBucketPath() const { return this->customBucketPath_ != nullptr;};
    void deleteCustomBucketPath() { this->customBucketPath_ = nullptr;};
    inline string getCustomBucketPath() const { DARABONBA_PTR_GET_DEFAULT(customBucketPath_, "") };
    inline DescribePolarFsAttributeResponseBody& setCustomBucketPath(string customBucketPath) { DARABONBA_PTR_SET_VALUE(customBucketPath_, customBucketPath) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribePolarFsAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribePolarFsAttributeResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribePolarFsAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // metaUrl Field Functions 
    bool hasMetaUrl() const { return this->metaUrl_ != nullptr;};
    void deleteMetaUrl() { this->metaUrl_ = nullptr;};
    inline string getMetaUrl() const { DARABONBA_PTR_GET_DEFAULT(metaUrl_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaUrl(string metaUrl) { DARABONBA_PTR_SET_VALUE(metaUrl_, metaUrl) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // mountInfo Field Functions 
    bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
    void deleteMountInfo() { this->mountInfo_ = nullptr;};
    inline const DescribePolarFsAttributeResponseBody::MountInfo & getMountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, DescribePolarFsAttributeResponseBody::MountInfo) };
    inline DescribePolarFsAttributeResponseBody::MountInfo getMountInfo() { DARABONBA_PTR_GET(mountInfo_, DescribePolarFsAttributeResponseBody::MountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(const DescribePolarFsAttributeResponseBody::MountInfo & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(DescribePolarFsAttributeResponseBody::MountInfo && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFsInstanceDescription Field Functions 
    bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
    void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
    inline string getPolarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarFsStatus Field Functions 
    bool hasPolarFsStatus() const { return this->polarFsStatus_ != nullptr;};
    void deletePolarFsStatus() { this->polarFsStatus_ = nullptr;};
    inline string getPolarFsStatus() const { DARABONBA_PTR_GET_DEFAULT(polarFsStatus_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsStatus(string polarFsStatus) { DARABONBA_PTR_SET_VALUE(polarFsStatus_, polarFsStatus) };


    // polarFsType Field Functions 
    bool hasPolarFsType() const { return this->polarFsType_ != nullptr;};
    void deletePolarFsType() { this->polarFsType_ = nullptr;};
    inline string getPolarFsType() const { DARABONBA_PTR_GET_DEFAULT(polarFsType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsType(string polarFsType) { DARABONBA_PTR_SET_VALUE(polarFsType_, polarFsType) };


    // polarFsVersion Field Functions 
    bool hasPolarFsVersion() const { return this->polarFsVersion_ != nullptr;};
    void deletePolarFsVersion() { this->polarFsVersion_ = nullptr;};
    inline string getPolarFsVersion() const { DARABONBA_PTR_GET_DEFAULT(polarFsVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsVersion(string polarFsVersion) { DARABONBA_PTR_SET_VALUE(polarFsVersion_, polarFsVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relativeDbClusterId Field Functions 
    bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
    void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
    inline string getRelativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


    // relativePfsClusterId Field Functions 
    bool hasRelativePfsClusterId() const { return this->relativePfsClusterId_ != nullptr;};
    void deleteRelativePfsClusterId() { this->relativePfsClusterId_ = nullptr;};
    inline string getRelativePfsClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativePfsClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativePfsClusterId(string relativePfsClusterId) { DARABONBA_PTR_SET_VALUE(relativePfsClusterId_, relativePfsClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribePolarFsAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline double getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageSpace(double storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribePolarFsAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline double getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageUsed(double storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePolarFsAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<double> acceleratedStorageSpace_ {};
    shared_ptr<string> acceleratingEnable_ {};
    shared_ptr<double> bandwidth_ {};
    shared_ptr<double> bandwidthBaseLine_ {};
    shared_ptr<string> bucketId_ {};
    shared_ptr<string> category_ {};
    shared_ptr<string> clientDownloadPath_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> customBucketPath_ {};
    shared_ptr<string> DBType_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> expired_ {};
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> metaUrl_ {};
    shared_ptr<string> minorVersion_ {};
    shared_ptr<DescribePolarFsAttributeResponseBody::MountInfo> mountInfo_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> polarFsInstanceDescription_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    shared_ptr<string> polarFsStatus_ {};
    shared_ptr<string> polarFsType_ {};
    shared_ptr<string> polarFsVersion_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> relativeDbClusterId_ {};
    shared_ptr<string> relativePfsClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<double> storageSpace_ {};
    shared_ptr<string> storageType_ {};
    shared_ptr<double> storageUsed_ {};
    shared_ptr<string> VPCId_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
