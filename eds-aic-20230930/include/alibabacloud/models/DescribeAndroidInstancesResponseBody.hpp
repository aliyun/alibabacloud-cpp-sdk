// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceModel, instanceModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceModel, instanceModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAndroidInstancesResponseBody() = default ;
    DescribeAndroidInstancesResponseBody(const DescribeAndroidInstancesResponseBody &) = default ;
    DescribeAndroidInstancesResponseBody(DescribeAndroidInstancesResponseBody &&) = default ;
    DescribeAndroidInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesResponseBody() = default ;
    DescribeAndroidInstancesResponseBody& operator=(const DescribeAndroidInstancesResponseBody &) = default ;
    DescribeAndroidInstancesResponseBody& operator=(DescribeAndroidInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceModel& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceGroupId, androidInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AndroidInstanceGroupName, androidInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(AndroidInstanceName, androidInstanceName_);
        DARABONBA_PTR_TO_JSON(AndroidInstanceStatus, androidInstanceStatus_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(AppManagePolicy, appManagePolicy_);
        DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_TO_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_TO_JSON(BizImageType, bizImageType_);
        DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
        DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InternetStatus, internetStatus_);
        DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIpv6Address, networkInterfaceIpv6Address_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
        DARABONBA_PTR_TO_JSON(PhoneDataInfo, phoneDataInfo_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_TO_JSON(PublicIpv6Address, publicIpv6Address_);
        DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_TO_JSON(Rate, rate_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_TO_JSON(ServerStatus, serverStatus_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
        DARABONBA_PTR_TO_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceGroupId, androidInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AndroidInstanceGroupName, androidInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_FROM_JSON(AndroidInstanceName, androidInstanceName_);
        DARABONBA_PTR_FROM_JSON(AndroidInstanceStatus, androidInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppManagePolicy, appManagePolicy_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_FROM_JSON(BindUserId, bindUserId_);
        DARABONBA_PTR_FROM_JSON(BizImageType, bizImageType_);
        DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
        DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InternetStatus, internetStatus_);
        DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIpv6Address, networkInterfaceIpv6Address_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(PersistentAppInstanceId, persistentAppInstanceId_);
        DARABONBA_PTR_FROM_JSON(PhoneDataInfo, phoneDataInfo_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_FROM_JSON(PublicIpv6Address, publicIpv6Address_);
        DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
        DARABONBA_PTR_FROM_JSON(Rate, rate_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_FROM_JSON(ServerStatus, serverStatus_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
        DARABONBA_PTR_FROM_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      InstanceModel() = default ;
      InstanceModel(const InstanceModel &) = default ;
      InstanceModel(InstanceModel &&) = default ;
      InstanceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceModel() = default ;
      InstanceModel& operator=(const InstanceModel &) = default ;
      InstanceModel& operator=(InstanceModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      class PhoneDataInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PhoneDataInfo& obj) { 
          DARABONBA_PTR_TO_JSON(PhoneDataId, phoneDataId_);
          DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        friend void from_json(const Darabonba::Json& j, PhoneDataInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(PhoneDataId, phoneDataId_);
          DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        PhoneDataInfo() = default ;
        PhoneDataInfo(const PhoneDataInfo &) = default ;
        PhoneDataInfo(PhoneDataInfo &&) = default ;
        PhoneDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PhoneDataInfo() = default ;
        PhoneDataInfo& operator=(const PhoneDataInfo &) = default ;
        PhoneDataInfo& operator=(PhoneDataInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->phoneDataId_ == nullptr
        && this->phoneDataVolume_ == nullptr; };
        // phoneDataId Field Functions 
        bool hasPhoneDataId() const { return this->phoneDataId_ != nullptr;};
        void deletePhoneDataId() { this->phoneDataId_ = nullptr;};
        inline string getPhoneDataId() const { DARABONBA_PTR_GET_DEFAULT(phoneDataId_, "") };
        inline PhoneDataInfo& setPhoneDataId(string phoneDataId) { DARABONBA_PTR_SET_VALUE(phoneDataId_, phoneDataId) };


        // phoneDataVolume Field Functions 
        bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
        void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
        inline int32_t getPhoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
        inline PhoneDataInfo& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


      protected:
        shared_ptr<string> phoneDataId_ {};
        shared_ptr<int32_t> phoneDataVolume_ {};
      };

      class DisplayConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DisplayConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Dpi, dpi_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
          DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
          DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
        };
        friend void from_json(const Darabonba::Json& j, DisplayConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Dpi, dpi_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
          DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
          DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
        };
        DisplayConfig() = default ;
        DisplayConfig(const DisplayConfig &) = default ;
        DisplayConfig(DisplayConfig &&) = default ;
        DisplayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DisplayConfig() = default ;
        DisplayConfig& operator=(const DisplayConfig &) = default ;
        DisplayConfig& operator=(DisplayConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dpi_ == nullptr
        && this->fps_ == nullptr && this->lockResolution_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr; };
        // dpi Field Functions 
        bool hasDpi() const { return this->dpi_ != nullptr;};
        void deleteDpi() { this->dpi_ = nullptr;};
        inline int32_t getDpi() const { DARABONBA_PTR_GET_DEFAULT(dpi_, 0) };
        inline DisplayConfig& setDpi(int32_t dpi) { DARABONBA_PTR_SET_VALUE(dpi_, dpi) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline int32_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
        inline DisplayConfig& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // lockResolution Field Functions 
        bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
        void deleteLockResolution() { this->lockResolution_ = nullptr;};
        inline string getLockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
        inline DisplayConfig& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


        // resolutionHeight Field Functions 
        bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
        void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
        inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
        inline DisplayConfig& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


        // resolutionWidth Field Functions 
        bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
        void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
        inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
        inline DisplayConfig& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


      protected:
        shared_ptr<int32_t> dpi_ {};
        shared_ptr<int32_t> fps_ {};
        shared_ptr<string> lockResolution_ {};
        shared_ptr<int32_t> resolutionHeight_ {};
        shared_ptr<int32_t> resolutionWidth_ {};
      };

      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        };
        Disks() = default ;
        Disks(const Disks &) = default ;
        Disks(Disks &&) = default ;
        Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disks() = default ;
        Disks& operator=(const Disks &) = default ;
        Disks& operator=(Disks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskSize_ == nullptr
        && this->diskType_ == nullptr; };
        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Disks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        // The disk size. Unit: GB.
        shared_ptr<int32_t> diskSize_ {};
        // The type of the disk.
        shared_ptr<string> diskType_ {};
      };

      class BizTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, BizTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        BizTags() = default ;
        BizTags(const BizTags &) = default ;
        BizTags(BizTags &&) = default ;
        BizTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizTags() = default ;
        BizTags& operator=(const BizTags &) = default ;
        BizTags& operator=(BizTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline BizTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline BizTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class AppManagePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppManagePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AppManagePolicyId, appManagePolicyId_);
          DARABONBA_PTR_TO_JSON(AppManagePolicyName, appManagePolicyName_);
        };
        friend void from_json(const Darabonba::Json& j, AppManagePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AppManagePolicyId, appManagePolicyId_);
          DARABONBA_PTR_FROM_JSON(AppManagePolicyName, appManagePolicyName_);
        };
        AppManagePolicy() = default ;
        AppManagePolicy(const AppManagePolicy &) = default ;
        AppManagePolicy(AppManagePolicy &&) = default ;
        AppManagePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppManagePolicy() = default ;
        AppManagePolicy& operator=(const AppManagePolicy &) = default ;
        AppManagePolicy& operator=(AppManagePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appManagePolicyId_ == nullptr
        && this->appManagePolicyName_ == nullptr; };
        // appManagePolicyId Field Functions 
        bool hasAppManagePolicyId() const { return this->appManagePolicyId_ != nullptr;};
        void deleteAppManagePolicyId() { this->appManagePolicyId_ = nullptr;};
        inline string getAppManagePolicyId() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyId_, "") };
        inline AppManagePolicy& setAppManagePolicyId(string appManagePolicyId) { DARABONBA_PTR_SET_VALUE(appManagePolicyId_, appManagePolicyId) };


        // appManagePolicyName Field Functions 
        bool hasAppManagePolicyName() const { return this->appManagePolicyName_ != nullptr;};
        void deleteAppManagePolicyName() { this->appManagePolicyName_ = nullptr;};
        inline string getAppManagePolicyName() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyName_, "") };
        inline AppManagePolicy& setAppManagePolicyName(string appManagePolicyName) { DARABONBA_PTR_SET_VALUE(appManagePolicyName_, appManagePolicyName) };


      protected:
        shared_ptr<string> appManagePolicyId_ {};
        shared_ptr<string> appManagePolicyName_ {};
      };

      virtual bool empty() const override { return this->androidInstanceGroupId_ == nullptr
        && this->androidInstanceGroupName_ == nullptr && this->androidInstanceId_ == nullptr && this->androidInstanceName_ == nullptr && this->androidInstanceStatus_ == nullptr && this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->appManagePolicy_ == nullptr && this->authorizedUserId_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthPackageType_ == nullptr
        && this->bindUserId_ == nullptr && this->bizImageType_ == nullptr && this->bizTags_ == nullptr && this->chargeType_ == nullptr && this->cpu_ == nullptr
        && this->disks_ == nullptr && this->displayConfig_ == nullptr && this->downBandwidthLimit_ == nullptr && this->errorCode_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtExpired_ == nullptr && this->gmtModified_ == nullptr && this->imageId_ == nullptr && this->imageVersion_ == nullptr && this->instanceType_ == nullptr
        && this->internetStatus_ == nullptr && this->keyPairId_ == nullptr && this->memory_ == nullptr && this->networkInterfaceIp_ == nullptr && this->networkInterfaceIpv6Address_ == nullptr
        && this->networkType_ == nullptr && this->officeSiteId_ == nullptr && this->persistentAppInstanceId_ == nullptr && this->phoneDataInfo_ == nullptr && this->policyGroupId_ == nullptr
        && this->publicIpAddress_ == nullptr && this->publicIpv6Address_ == nullptr && this->qosRuleId_ == nullptr && this->rate_ == nullptr && this->regionId_ == nullptr
        && this->renderingType_ == nullptr && this->serverStatus_ == nullptr && this->serverType_ == nullptr && this->sessionStatus_ == nullptr && this->streamMode_ == nullptr
        && this->systemVersion_ == nullptr && this->tags_ == nullptr && this->upBandwidthLimit_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // androidInstanceGroupId Field Functions 
      bool hasAndroidInstanceGroupId() const { return this->androidInstanceGroupId_ != nullptr;};
      void deleteAndroidInstanceGroupId() { this->androidInstanceGroupId_ = nullptr;};
      inline string getAndroidInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceGroupId_, "") };
      inline InstanceModel& setAndroidInstanceGroupId(string androidInstanceGroupId) { DARABONBA_PTR_SET_VALUE(androidInstanceGroupId_, androidInstanceGroupId) };


      // androidInstanceGroupName Field Functions 
      bool hasAndroidInstanceGroupName() const { return this->androidInstanceGroupName_ != nullptr;};
      void deleteAndroidInstanceGroupName() { this->androidInstanceGroupName_ = nullptr;};
      inline string getAndroidInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceGroupName_, "") };
      inline InstanceModel& setAndroidInstanceGroupName(string androidInstanceGroupName) { DARABONBA_PTR_SET_VALUE(androidInstanceGroupName_, androidInstanceGroupName) };


      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline InstanceModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // androidInstanceName Field Functions 
      bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
      void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
      inline string getAndroidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
      inline InstanceModel& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


      // androidInstanceStatus Field Functions 
      bool hasAndroidInstanceStatus() const { return this->androidInstanceStatus_ != nullptr;};
      void deleteAndroidInstanceStatus() { this->androidInstanceStatus_ = nullptr;};
      inline string getAndroidInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceStatus_, "") };
      inline InstanceModel& setAndroidInstanceStatus(string androidInstanceStatus) { DARABONBA_PTR_SET_VALUE(androidInstanceStatus_, androidInstanceStatus) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline InstanceModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline InstanceModel& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // appManagePolicy Field Functions 
      bool hasAppManagePolicy() const { return this->appManagePolicy_ != nullptr;};
      void deleteAppManagePolicy() { this->appManagePolicy_ = nullptr;};
      inline const InstanceModel::AppManagePolicy & getAppManagePolicy() const { DARABONBA_PTR_GET_CONST(appManagePolicy_, InstanceModel::AppManagePolicy) };
      inline InstanceModel::AppManagePolicy getAppManagePolicy() { DARABONBA_PTR_GET(appManagePolicy_, InstanceModel::AppManagePolicy) };
      inline InstanceModel& setAppManagePolicy(const InstanceModel::AppManagePolicy & appManagePolicy) { DARABONBA_PTR_SET_VALUE(appManagePolicy_, appManagePolicy) };
      inline InstanceModel& setAppManagePolicy(InstanceModel::AppManagePolicy && appManagePolicy) { DARABONBA_PTR_SET_RVALUE(appManagePolicy_, appManagePolicy) };


      // authorizedUserId Field Functions 
      bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
      void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
      inline string getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
      inline InstanceModel& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline InstanceModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // bandwidthPackageType Field Functions 
      bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
      void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
      inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
      inline InstanceModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


      // bindUserId Field Functions 
      bool hasBindUserId() const { return this->bindUserId_ != nullptr;};
      void deleteBindUserId() { this->bindUserId_ = nullptr;};
      inline string getBindUserId() const { DARABONBA_PTR_GET_DEFAULT(bindUserId_, "") };
      inline InstanceModel& setBindUserId(string bindUserId) { DARABONBA_PTR_SET_VALUE(bindUserId_, bindUserId) };


      // bizImageType Field Functions 
      bool hasBizImageType() const { return this->bizImageType_ != nullptr;};
      void deleteBizImageType() { this->bizImageType_ = nullptr;};
      inline string getBizImageType() const { DARABONBA_PTR_GET_DEFAULT(bizImageType_, "") };
      inline InstanceModel& setBizImageType(string bizImageType) { DARABONBA_PTR_SET_VALUE(bizImageType_, bizImageType) };


      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline const vector<InstanceModel::BizTags> & getBizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<InstanceModel::BizTags>) };
      inline vector<InstanceModel::BizTags> getBizTags() { DARABONBA_PTR_GET(bizTags_, vector<InstanceModel::BizTags>) };
      inline InstanceModel& setBizTags(const vector<InstanceModel::BizTags> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
      inline InstanceModel& setBizTags(vector<InstanceModel::BizTags> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline InstanceModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline InstanceModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<InstanceModel::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<InstanceModel::Disks>) };
      inline vector<InstanceModel::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<InstanceModel::Disks>) };
      inline InstanceModel& setDisks(const vector<InstanceModel::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline InstanceModel& setDisks(vector<InstanceModel::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // displayConfig Field Functions 
      bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
      void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
      inline const InstanceModel::DisplayConfig & getDisplayConfig() const { DARABONBA_PTR_GET_CONST(displayConfig_, InstanceModel::DisplayConfig) };
      inline InstanceModel::DisplayConfig getDisplayConfig() { DARABONBA_PTR_GET(displayConfig_, InstanceModel::DisplayConfig) };
      inline InstanceModel& setDisplayConfig(const InstanceModel::DisplayConfig & displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };
      inline InstanceModel& setDisplayConfig(InstanceModel::DisplayConfig && displayConfig) { DARABONBA_PTR_SET_RVALUE(displayConfig_, displayConfig) };


      // downBandwidthLimit Field Functions 
      bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
      void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
      inline int32_t getDownBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
      inline InstanceModel& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InstanceModel& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline InstanceModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline string getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
      inline InstanceModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline InstanceModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline InstanceModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline InstanceModel& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceModel& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // internetStatus Field Functions 
      bool hasInternetStatus() const { return this->internetStatus_ != nullptr;};
      void deleteInternetStatus() { this->internetStatus_ = nullptr;};
      inline string getInternetStatus() const { DARABONBA_PTR_GET_DEFAULT(internetStatus_, "") };
      inline InstanceModel& setInternetStatus(string internetStatus) { DARABONBA_PTR_SET_VALUE(internetStatus_, internetStatus) };


      // keyPairId Field Functions 
      bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
      void deleteKeyPairId() { this->keyPairId_ = nullptr;};
      inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
      inline InstanceModel& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline InstanceModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline InstanceModel& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // networkInterfaceIpv6Address Field Functions 
      bool hasNetworkInterfaceIpv6Address() const { return this->networkInterfaceIpv6Address_ != nullptr;};
      void deleteNetworkInterfaceIpv6Address() { this->networkInterfaceIpv6Address_ = nullptr;};
      inline string getNetworkInterfaceIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIpv6Address_, "") };
      inline InstanceModel& setNetworkInterfaceIpv6Address(string networkInterfaceIpv6Address) { DARABONBA_PTR_SET_VALUE(networkInterfaceIpv6Address_, networkInterfaceIpv6Address) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline InstanceModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline InstanceModel& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // persistentAppInstanceId Field Functions 
      bool hasPersistentAppInstanceId() const { return this->persistentAppInstanceId_ != nullptr;};
      void deletePersistentAppInstanceId() { this->persistentAppInstanceId_ = nullptr;};
      inline string getPersistentAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceId_, "") };
      inline InstanceModel& setPersistentAppInstanceId(string persistentAppInstanceId) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceId_, persistentAppInstanceId) };


      // phoneDataInfo Field Functions 
      bool hasPhoneDataInfo() const { return this->phoneDataInfo_ != nullptr;};
      void deletePhoneDataInfo() { this->phoneDataInfo_ = nullptr;};
      inline const InstanceModel::PhoneDataInfo & getPhoneDataInfo() const { DARABONBA_PTR_GET_CONST(phoneDataInfo_, InstanceModel::PhoneDataInfo) };
      inline InstanceModel::PhoneDataInfo getPhoneDataInfo() { DARABONBA_PTR_GET(phoneDataInfo_, InstanceModel::PhoneDataInfo) };
      inline InstanceModel& setPhoneDataInfo(const InstanceModel::PhoneDataInfo & phoneDataInfo) { DARABONBA_PTR_SET_VALUE(phoneDataInfo_, phoneDataInfo) };
      inline InstanceModel& setPhoneDataInfo(InstanceModel::PhoneDataInfo && phoneDataInfo) { DARABONBA_PTR_SET_RVALUE(phoneDataInfo_, phoneDataInfo) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline InstanceModel& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline InstanceModel& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      // publicIpv6Address Field Functions 
      bool hasPublicIpv6Address() const { return this->publicIpv6Address_ != nullptr;};
      void deletePublicIpv6Address() { this->publicIpv6Address_ = nullptr;};
      inline string getPublicIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(publicIpv6Address_, "") };
      inline InstanceModel& setPublicIpv6Address(string publicIpv6Address) { DARABONBA_PTR_SET_VALUE(publicIpv6Address_, publicIpv6Address) };


      // qosRuleId Field Functions 
      bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
      void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
      inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
      inline InstanceModel& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


      // rate Field Functions 
      bool hasRate() const { return this->rate_ != nullptr;};
      void deleteRate() { this->rate_ = nullptr;};
      inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
      inline InstanceModel& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // renderingType Field Functions 
      bool hasRenderingType() const { return this->renderingType_ != nullptr;};
      void deleteRenderingType() { this->renderingType_ = nullptr;};
      inline string getRenderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
      inline InstanceModel& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


      // serverStatus Field Functions 
      bool hasServerStatus() const { return this->serverStatus_ != nullptr;};
      void deleteServerStatus() { this->serverStatus_ = nullptr;};
      inline string getServerStatus() const { DARABONBA_PTR_GET_DEFAULT(serverStatus_, "") };
      inline InstanceModel& setServerStatus(string serverStatus) { DARABONBA_PTR_SET_VALUE(serverStatus_, serverStatus) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline InstanceModel& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline InstanceModel& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


      // streamMode Field Functions 
      bool hasStreamMode() const { return this->streamMode_ != nullptr;};
      void deleteStreamMode() { this->streamMode_ = nullptr;};
      inline int32_t getStreamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
      inline InstanceModel& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


      // systemVersion Field Functions 
      bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
      void deleteSystemVersion() { this->systemVersion_ = nullptr;};
      inline string getSystemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
      inline InstanceModel& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<InstanceModel::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceModel::Tags>) };
      inline vector<InstanceModel::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceModel::Tags>) };
      inline InstanceModel& setTags(const vector<InstanceModel::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline InstanceModel& setTags(vector<InstanceModel::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // upBandwidthLimit Field Functions 
      bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
      void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
      inline int32_t getUpBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
      inline InstanceModel& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline InstanceModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline InstanceModel& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the instance group.
      shared_ptr<string> androidInstanceGroupId_ {};
      // The name of the instance group.
      shared_ptr<string> androidInstanceGroupName_ {};
      // The ID of the instance.
      shared_ptr<string> androidInstanceId_ {};
      // The name of the instance.
      shared_ptr<string> androidInstanceName_ {};
      // The state of the instance.
      shared_ptr<string> androidInstanceStatus_ {};
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the physical instance.
      shared_ptr<string> appInstanceId_ {};
      shared_ptr<InstanceModel::AppManagePolicy> appManagePolicy_ {};
      // The ID of the user to whom the instance is assigned.
      shared_ptr<string> authorizedUserId_ {};
      shared_ptr<string> bandwidthPackageId_ {};
      shared_ptr<string> bandwidthPackageType_ {};
      // The ID of the bound user.
      shared_ptr<string> bindUserId_ {};
      shared_ptr<string> bizImageType_ {};
      shared_ptr<vector<InstanceModel::BizTags>> bizTags_ {};
      // The billing method of the instance.
      shared_ptr<string> chargeType_ {};
      // The number of vCPUs.
      shared_ptr<string> cpu_ {};
      // The disks.
      shared_ptr<vector<InstanceModel::Disks>> disks_ {};
      shared_ptr<InstanceModel::DisplayConfig> displayConfig_ {};
      shared_ptr<int32_t> downBandwidthLimit_ {};
      // The cause of the instance data backup failure or restoration failure.
      shared_ptr<string> errorCode_ {};
      // The time when the instance was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the subscription instance group expires.
      shared_ptr<string> gmtExpired_ {};
      // The time when the instance was modified.
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> imageId_ {};
      // The version of the image.
      shared_ptr<string> imageVersion_ {};
      // The type of the instance.
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> internetStatus_ {};
      // The ID of the key pair.
      shared_ptr<string> keyPairId_ {};
      // The memory size.
      shared_ptr<int32_t> memory_ {};
      // The IP address of the ENI.
      shared_ptr<string> networkInterfaceIp_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> networkInterfaceIpv6Address_ {};
      shared_ptr<string> networkType_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The ID of the persistent session.
      shared_ptr<string> persistentAppInstanceId_ {};
      shared_ptr<InstanceModel::PhoneDataInfo> phoneDataInfo_ {};
      // The ID of the policy.
      shared_ptr<string> policyGroupId_ {};
      // The public IP address.
      shared_ptr<string> publicIpAddress_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> publicIpv6Address_ {};
      shared_ptr<string> qosRuleId_ {};
      // The progress of instance data backup or restoration.
      shared_ptr<int32_t> rate_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The rendering type.
      shared_ptr<string> renderingType_ {};
      shared_ptr<string> serverStatus_ {};
      shared_ptr<string> serverType_ {};
      // The session status.
      // 
      // Valid values:
      // 
      // *   disConnect: The session is disconnected.
      // *   connect: The session is connected.
      shared_ptr<string> sessionStatus_ {};
      shared_ptr<int32_t> streamMode_ {};
      shared_ptr<string> systemVersion_ {};
      // The tags.
      shared_ptr<vector<InstanceModel::Tags>> tags_ {};
      shared_ptr<int32_t> upBandwidthLimit_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instanceModel_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceModel Field Functions 
    bool hasInstanceModel() const { return this->instanceModel_ != nullptr;};
    void deleteInstanceModel() { this->instanceModel_ = nullptr;};
    inline const vector<DescribeAndroidInstancesResponseBody::InstanceModel> & getInstanceModel() const { DARABONBA_PTR_GET_CONST(instanceModel_, vector<DescribeAndroidInstancesResponseBody::InstanceModel>) };
    inline vector<DescribeAndroidInstancesResponseBody::InstanceModel> getInstanceModel() { DARABONBA_PTR_GET(instanceModel_, vector<DescribeAndroidInstancesResponseBody::InstanceModel>) };
    inline DescribeAndroidInstancesResponseBody& setInstanceModel(const vector<DescribeAndroidInstancesResponseBody::InstanceModel> & instanceModel) { DARABONBA_PTR_SET_VALUE(instanceModel_, instanceModel) };
    inline DescribeAndroidInstancesResponseBody& setInstanceModel(vector<DescribeAndroidInstancesResponseBody::InstanceModel> && instanceModel) { DARABONBA_PTR_SET_RVALUE(instanceModel_, instanceModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAndroidInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAndroidInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud phone instances.
    shared_ptr<vector<DescribeAndroidInstancesResponseBody::InstanceModel>> instanceModel_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
