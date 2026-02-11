// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageResponseBody() = default ;
    ListImageResponseBody(const ListImageResponseBody &) = default ;
    ListImageResponseBody(ListImageResponseBody &&) = default ;
    ListImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageResponseBody() = default ;
    ListImageResponseBody& operator=(const ListImageResponseBody &) = default ;
    ListImageResponseBody& operator=(ListImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AppList, appList_);
        DARABONBA_PTR_TO_JSON(BaseImageId, baseImageId_);
        DARABONBA_PTR_TO_JSON(BaseImageVersion, baseImageVersion_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(CompatibleMode, compatibleMode_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Distro, distro_);
        DARABONBA_PTR_TO_JSON(DriverList, driverList_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(FeatureList, featureList_);
        DARABONBA_PTR_TO_JSON(FotaChannel, fotaChannel_);
        DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageCreateMode, imageCreateMode_);
        DARABONBA_PTR_TO_JSON(ImageIconUrl, imageIconUrl_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_TO_JSON(ImageType, imageType_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(LatestVersionId, latestVersionId_);
        DARABONBA_PTR_TO_JSON(OnlineVersion, onlineVersion_);
        DARABONBA_PTR_TO_JSON(OnlineVersionId, onlineVersionId_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(ParentImageId, parentImageId_);
        DARABONBA_PTR_TO_JSON(ParentImageVersion, parentImageVersion_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Rating, rating_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceCategory, resourceInstanceCategory_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(SnapshotList, snapshotList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportedLanguageList, supportedLanguageList_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AppList, appList_);
        DARABONBA_PTR_FROM_JSON(BaseImageId, baseImageId_);
        DARABONBA_PTR_FROM_JSON(BaseImageVersion, baseImageVersion_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(CompatibleMode, compatibleMode_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Distro, distro_);
        DARABONBA_PTR_FROM_JSON(DriverList, driverList_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(FeatureList, featureList_);
        DARABONBA_PTR_FROM_JSON(FotaChannel, fotaChannel_);
        DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageCreateMode, imageCreateMode_);
        DARABONBA_PTR_FROM_JSON(ImageIconUrl, imageIconUrl_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(LatestVersionId, latestVersionId_);
        DARABONBA_PTR_FROM_JSON(OnlineVersion, onlineVersion_);
        DARABONBA_PTR_FROM_JSON(OnlineVersionId, onlineVersionId_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(ParentImageId, parentImageId_);
        DARABONBA_PTR_FROM_JSON(ParentImageVersion, parentImageVersion_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Rating, rating_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceCategory, resourceInstanceCategory_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(SnapshotList, snapshotList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportedLanguageList, supportedLanguageList_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
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
        inline TagList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TagList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class SnapshotList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotList& obj) { 
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_TO_JSON(DiskSubType, diskSubType_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotList& obj) { 
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_FROM_JSON(DiskSubType, diskSubType_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        SnapshotList() = default ;
        SnapshotList(const SnapshotList &) = default ;
        SnapshotList(SnapshotList &&) = default ;
        SnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotList() = default ;
        SnapshotList& operator=(const SnapshotList &) = default ;
        SnapshotList& operator=(SnapshotList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindType_ == nullptr
        && this->diskCategory_ == nullptr && this->diskSubType_ == nullptr && this->diskType_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr
        && this->versionId_ == nullptr; };
        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline string getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
        inline SnapshotList& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // diskCategory Field Functions 
        bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
        void deleteDiskCategory() { this->diskCategory_ = nullptr;};
        inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
        inline SnapshotList& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


        // diskSubType Field Functions 
        bool hasDiskSubType() const { return this->diskSubType_ != nullptr;};
        void deleteDiskSubType() { this->diskSubType_ = nullptr;};
        inline string getDiskSubType() const { DARABONBA_PTR_GET_DEFAULT(diskSubType_, "") };
        inline SnapshotList& setDiskSubType(string diskSubType) { DARABONBA_PTR_SET_VALUE(diskSubType_, diskSubType) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline SnapshotList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline SnapshotList& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline SnapshotList& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline SnapshotList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        shared_ptr<string> bindType_ {};
        shared_ptr<string> diskCategory_ {};
        shared_ptr<string> diskSubType_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> size_ {};
        shared_ptr<string> snapshotId_ {};
        shared_ptr<string> versionId_ {};
      };

      class ImageRegionDistributeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        ImageRegionDistributeList() = default ;
        ImageRegionDistributeList(const ImageRegionDistributeList &) = default ;
        ImageRegionDistributeList(ImageRegionDistributeList &&) = default ;
        ImageRegionDistributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageRegionDistributeList() = default ;
        ImageRegionDistributeList& operator=(const ImageRegionDistributeList &) = default ;
        ImageRegionDistributeList& operator=(ImageRegionDistributeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->progress_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->versionId_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImageRegionDistributeList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline ImageRegionDistributeList& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ImageRegionDistributeList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ImageRegionDistributeList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline ImageRegionDistributeList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // System image IDs follow a descriptive, human-readable format, while custom image IDs are automatically generated by the system.
        shared_ptr<string> imageId_ {};
        // The progress.
        shared_ptr<string> progress_ {};
        // The supported region.
        shared_ptr<string> regionId_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The version of the image.
        shared_ptr<string> versionId_ {};
      };

      class AppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
        };
        friend void from_json(const Darabonba::Json& j, AppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
        };
        AppList() = default ;
        AppList(const AppList &) = default ;
        AppList(AppList &&) = default ;
        AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppList() = default ;
        AppList& operator=(const AppList &) = default ;
        AppList& operator=(AppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->appList_ == nullptr && this->baseImageId_ == nullptr && this->baseImageVersion_ == nullptr && this->bizType_ == nullptr && this->compatibleMode_ == nullptr
        && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->distro_ == nullptr && this->driverList_ == nullptr && this->environmentId_ == nullptr
        && this->featureList_ == nullptr && this->fotaChannel_ == nullptr && this->fotaVersion_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->imageCreateMode_ == nullptr && this->imageIconUrl_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageRegionDistributeList_ == nullptr
        && this->imageRegionList_ == nullptr && this->imageType_ == nullptr && this->language_ == nullptr && this->latestVersionId_ == nullptr && this->onlineVersion_ == nullptr
        && this->onlineVersionId_ == nullptr && this->osType_ == nullptr && this->packageType_ == nullptr && this->parentImageId_ == nullptr && this->parentImageVersion_ == nullptr
        && this->platform_ == nullptr && this->platformName_ == nullptr && this->productType_ == nullptr && this->protocolType_ == nullptr && this->rating_ == nullptr
        && this->resourceInstanceCategory_ == nullptr && this->scene_ == nullptr && this->sessionType_ == nullptr && this->snapshotList_ == nullptr && this->status_ == nullptr
        && this->supportedLanguageList_ == nullptr && this->systemDiskSize_ == nullptr && this->tagList_ == nullptr && this->versionId_ == nullptr && this->versionName_ == nullptr
        && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // appList Field Functions 
      bool hasAppList() const { return this->appList_ != nullptr;};
      void deleteAppList() { this->appList_ = nullptr;};
      inline const vector<Data::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Data::AppList>) };
      inline vector<Data::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<Data::AppList>) };
      inline Data& setAppList(const vector<Data::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
      inline Data& setAppList(vector<Data::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


      // baseImageId Field Functions 
      bool hasBaseImageId() const { return this->baseImageId_ != nullptr;};
      void deleteBaseImageId() { this->baseImageId_ = nullptr;};
      inline string getBaseImageId() const { DARABONBA_PTR_GET_DEFAULT(baseImageId_, "") };
      inline Data& setBaseImageId(string baseImageId) { DARABONBA_PTR_SET_VALUE(baseImageId_, baseImageId) };


      // baseImageVersion Field Functions 
      bool hasBaseImageVersion() const { return this->baseImageVersion_ != nullptr;};
      void deleteBaseImageVersion() { this->baseImageVersion_ = nullptr;};
      inline string getBaseImageVersion() const { DARABONBA_PTR_GET_DEFAULT(baseImageVersion_, "") };
      inline Data& setBaseImageVersion(string baseImageVersion) { DARABONBA_PTR_SET_VALUE(baseImageVersion_, baseImageVersion) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
      inline Data& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // compatibleMode Field Functions 
      bool hasCompatibleMode() const { return this->compatibleMode_ != nullptr;};
      void deleteCompatibleMode() { this->compatibleMode_ = nullptr;};
      inline bool getCompatibleMode() const { DARABONBA_PTR_GET_DEFAULT(compatibleMode_, false) };
      inline Data& setCompatibleMode(bool compatibleMode) { DARABONBA_PTR_SET_VALUE(compatibleMode_, compatibleMode) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline Data& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // distro Field Functions 
      bool hasDistro() const { return this->distro_ != nullptr;};
      void deleteDistro() { this->distro_ = nullptr;};
      inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
      inline Data& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


      // driverList Field Functions 
      bool hasDriverList() const { return this->driverList_ != nullptr;};
      void deleteDriverList() { this->driverList_ = nullptr;};
      inline const vector<string> & getDriverList() const { DARABONBA_PTR_GET_CONST(driverList_, vector<string>) };
      inline vector<string> getDriverList() { DARABONBA_PTR_GET(driverList_, vector<string>) };
      inline Data& setDriverList(const vector<string> & driverList) { DARABONBA_PTR_SET_VALUE(driverList_, driverList) };
      inline Data& setDriverList(vector<string> && driverList) { DARABONBA_PTR_SET_RVALUE(driverList_, driverList) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // featureList Field Functions 
      bool hasFeatureList() const { return this->featureList_ != nullptr;};
      void deleteFeatureList() { this->featureList_ = nullptr;};
      inline const vector<string> & getFeatureList() const { DARABONBA_PTR_GET_CONST(featureList_, vector<string>) };
      inline vector<string> getFeatureList() { DARABONBA_PTR_GET(featureList_, vector<string>) };
      inline Data& setFeatureList(const vector<string> & featureList) { DARABONBA_PTR_SET_VALUE(featureList_, featureList) };
      inline Data& setFeatureList(vector<string> && featureList) { DARABONBA_PTR_SET_RVALUE(featureList_, featureList) };


      // fotaChannel Field Functions 
      bool hasFotaChannel() const { return this->fotaChannel_ != nullptr;};
      void deleteFotaChannel() { this->fotaChannel_ = nullptr;};
      inline string getFotaChannel() const { DARABONBA_PTR_GET_DEFAULT(fotaChannel_, "") };
      inline Data& setFotaChannel(string fotaChannel) { DARABONBA_PTR_SET_VALUE(fotaChannel_, fotaChannel) };


      // fotaVersion Field Functions 
      bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
      void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
      inline string getFotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
      inline Data& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageCreateMode Field Functions 
      bool hasImageCreateMode() const { return this->imageCreateMode_ != nullptr;};
      void deleteImageCreateMode() { this->imageCreateMode_ = nullptr;};
      inline string getImageCreateMode() const { DARABONBA_PTR_GET_DEFAULT(imageCreateMode_, "") };
      inline Data& setImageCreateMode(string imageCreateMode) { DARABONBA_PTR_SET_VALUE(imageCreateMode_, imageCreateMode) };


      // imageIconUrl Field Functions 
      bool hasImageIconUrl() const { return this->imageIconUrl_ != nullptr;};
      void deleteImageIconUrl() { this->imageIconUrl_ = nullptr;};
      inline string getImageIconUrl() const { DARABONBA_PTR_GET_DEFAULT(imageIconUrl_, "") };
      inline Data& setImageIconUrl(string imageIconUrl) { DARABONBA_PTR_SET_VALUE(imageIconUrl_, imageIconUrl) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageRegionDistributeList Field Functions 
      bool hasImageRegionDistributeList() const { return this->imageRegionDistributeList_ != nullptr;};
      void deleteImageRegionDistributeList() { this->imageRegionDistributeList_ = nullptr;};
      inline const vector<Data::ImageRegionDistributeList> & getImageRegionDistributeList() const { DARABONBA_PTR_GET_CONST(imageRegionDistributeList_, vector<Data::ImageRegionDistributeList>) };
      inline vector<Data::ImageRegionDistributeList> getImageRegionDistributeList() { DARABONBA_PTR_GET(imageRegionDistributeList_, vector<Data::ImageRegionDistributeList>) };
      inline Data& setImageRegionDistributeList(const vector<Data::ImageRegionDistributeList> & imageRegionDistributeList) { DARABONBA_PTR_SET_VALUE(imageRegionDistributeList_, imageRegionDistributeList) };
      inline Data& setImageRegionDistributeList(vector<Data::ImageRegionDistributeList> && imageRegionDistributeList) { DARABONBA_PTR_SET_RVALUE(imageRegionDistributeList_, imageRegionDistributeList) };


      // imageRegionList Field Functions 
      bool hasImageRegionList() const { return this->imageRegionList_ != nullptr;};
      void deleteImageRegionList() { this->imageRegionList_ = nullptr;};
      inline const vector<string> & getImageRegionList() const { DARABONBA_PTR_GET_CONST(imageRegionList_, vector<string>) };
      inline vector<string> getImageRegionList() { DARABONBA_PTR_GET(imageRegionList_, vector<string>) };
      inline Data& setImageRegionList(const vector<string> & imageRegionList) { DARABONBA_PTR_SET_VALUE(imageRegionList_, imageRegionList) };
      inline Data& setImageRegionList(vector<string> && imageRegionList) { DARABONBA_PTR_SET_RVALUE(imageRegionList_, imageRegionList) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Data& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // latestVersionId Field Functions 
      bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
      void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
      inline string getLatestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
      inline Data& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


      // onlineVersion Field Functions 
      bool hasOnlineVersion() const { return this->onlineVersion_ != nullptr;};
      void deleteOnlineVersion() { this->onlineVersion_ = nullptr;};
      inline bool getOnlineVersion() const { DARABONBA_PTR_GET_DEFAULT(onlineVersion_, false) };
      inline Data& setOnlineVersion(bool onlineVersion) { DARABONBA_PTR_SET_VALUE(onlineVersion_, onlineVersion) };


      // onlineVersionId Field Functions 
      bool hasOnlineVersionId() const { return this->onlineVersionId_ != nullptr;};
      void deleteOnlineVersionId() { this->onlineVersionId_ = nullptr;};
      inline string getOnlineVersionId() const { DARABONBA_PTR_GET_DEFAULT(onlineVersionId_, "") };
      inline Data& setOnlineVersionId(string onlineVersionId) { DARABONBA_PTR_SET_VALUE(onlineVersionId_, onlineVersionId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // parentImageId Field Functions 
      bool hasParentImageId() const { return this->parentImageId_ != nullptr;};
      void deleteParentImageId() { this->parentImageId_ = nullptr;};
      inline string getParentImageId() const { DARABONBA_PTR_GET_DEFAULT(parentImageId_, "") };
      inline Data& setParentImageId(string parentImageId) { DARABONBA_PTR_SET_VALUE(parentImageId_, parentImageId) };


      // parentImageVersion Field Functions 
      bool hasParentImageVersion() const { return this->parentImageVersion_ != nullptr;};
      void deleteParentImageVersion() { this->parentImageVersion_ = nullptr;};
      inline string getParentImageVersion() const { DARABONBA_PTR_GET_DEFAULT(parentImageVersion_, "") };
      inline Data& setParentImageVersion(string parentImageVersion) { DARABONBA_PTR_SET_VALUE(parentImageVersion_, parentImageVersion) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline int32_t getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, 0) };
      inline Data& setPlatform(int32_t platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // platformName Field Functions 
      bool hasPlatformName() const { return this->platformName_ != nullptr;};
      void deletePlatformName() { this->platformName_ = nullptr;};
      inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
      inline Data& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Data& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // rating Field Functions 
      bool hasRating() const { return this->rating_ != nullptr;};
      void deleteRating() { this->rating_ = nullptr;};
      inline int32_t getRating() const { DARABONBA_PTR_GET_DEFAULT(rating_, 0) };
      inline Data& setRating(int32_t rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


      // resourceInstanceCategory Field Functions 
      bool hasResourceInstanceCategory() const { return this->resourceInstanceCategory_ != nullptr;};
      void deleteResourceInstanceCategory() { this->resourceInstanceCategory_ = nullptr;};
      inline string getResourceInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceCategory_, "") };
      inline Data& setResourceInstanceCategory(string resourceInstanceCategory) { DARABONBA_PTR_SET_VALUE(resourceInstanceCategory_, resourceInstanceCategory) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Data& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Data& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // snapshotList Field Functions 
      bool hasSnapshotList() const { return this->snapshotList_ != nullptr;};
      void deleteSnapshotList() { this->snapshotList_ = nullptr;};
      inline const vector<Data::SnapshotList> & getSnapshotList() const { DARABONBA_PTR_GET_CONST(snapshotList_, vector<Data::SnapshotList>) };
      inline vector<Data::SnapshotList> getSnapshotList() { DARABONBA_PTR_GET(snapshotList_, vector<Data::SnapshotList>) };
      inline Data& setSnapshotList(const vector<Data::SnapshotList> & snapshotList) { DARABONBA_PTR_SET_VALUE(snapshotList_, snapshotList) };
      inline Data& setSnapshotList(vector<Data::SnapshotList> && snapshotList) { DARABONBA_PTR_SET_RVALUE(snapshotList_, snapshotList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportedLanguageList Field Functions 
      bool hasSupportedLanguageList() const { return this->supportedLanguageList_ != nullptr;};
      void deleteSupportedLanguageList() { this->supportedLanguageList_ = nullptr;};
      inline const vector<string> & getSupportedLanguageList() const { DARABONBA_PTR_GET_CONST(supportedLanguageList_, vector<string>) };
      inline vector<string> getSupportedLanguageList() { DARABONBA_PTR_GET(supportedLanguageList_, vector<string>) };
      inline Data& setSupportedLanguageList(const vector<string> & supportedLanguageList) { DARABONBA_PTR_SET_VALUE(supportedLanguageList_, supportedLanguageList) };
      inline Data& setSupportedLanguageList(vector<string> && supportedLanguageList) { DARABONBA_PTR_SET_RVALUE(supportedLanguageList_, supportedLanguageList) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<Data::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Data::TagList>) };
      inline vector<Data::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<Data::TagList>) };
      inline Data& setTagList(const vector<Data::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline Data& setTagList(vector<Data::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline Data& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Data& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline Data& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline Data& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The tenant ID.
      shared_ptr<int64_t> aliUid_ {};
      // The application configuration.
      shared_ptr<vector<Data::AppList>> appList_ {};
      // The base image ID.
      shared_ptr<string> baseImageId_ {};
      // The version of the base image.
      shared_ptr<string> baseImageVersion_ {};
      // The service type.
      shared_ptr<int32_t> bizType_ {};
      // Specifies whether to use the compatibility mode.
      shared_ptr<bool> compatibleMode_ {};
      // The size of the data disk. Unit: GiB.
      shared_ptr<int32_t> dataDiskSize_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // The name of the release.
      shared_ptr<string> distro_ {};
      // The information about each driver.
      shared_ptr<vector<string>> driverList_ {};
      shared_ptr<string> environmentId_ {};
      // The image feature tags.
      shared_ptr<vector<string>> featureList_ {};
      // >  This parameter is not available for public use.
      shared_ptr<string> fotaChannel_ {};
      // The FOTA version.
      shared_ptr<string> fotaVersion_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The update time.
      shared_ptr<string> gmtModified_ {};
      // The image creation type.
      // 
      // Valid values:
      // 
      // *   BY_SNAPSHOT_ID: The image is created from the snapshot or contains only a system disk.
      // *   BUILDER_MANUAL: The image is manually generated.
      // *   INSTANCE_AUTO: The image is automatically generated based on an instance.
      // *   BY_INSTANCE_ID: The image is created from an instance or contains both a system disk and data disks.
      shared_ptr<string> imageCreateMode_ {};
      shared_ptr<string> imageIconUrl_ {};
      // System image IDs follow a descriptive, human-readable format, while custom image IDs are automatically generated by the system.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // Layered supported regions information.
      shared_ptr<vector<Data::ImageRegionDistributeList>> imageRegionDistributeList_ {};
      // The region ID.
      shared_ptr<vector<string>> imageRegionList_ {};
      // The type of the image.
      shared_ptr<string> imageType_ {};
      // The image language. When the packaging type is VHD or Container, the image inherits its properties from the ECS-type image within the same image bundle.
      shared_ptr<string> language_ {};
      // The latest sub-version of the image. (An image consists of multiple sub-versions.)
      shared_ptr<string> latestVersionId_ {};
      // Indicates whether the current version is the active version.
      shared_ptr<bool> onlineVersion_ {};
      // This image tag currently points to the specified sub-version of the parent image. (An image consists of multiple sub-versions.)
      shared_ptr<string> onlineVersionId_ {};
      // The type of the image.
      shared_ptr<string> osType_ {};
      // The image encapsulation type.
      shared_ptr<string> packageType_ {};
      // The ID of the parent image from which this image is derived. Note: This field is only applicable to custom images, as system images do not have a parent.
      shared_ptr<string> parentImageId_ {};
      // The version of the parent image.
      shared_ptr<string> parentImageVersion_ {};
      // The operating system platform of the image.
      // 
      // >  When the packaging type is VHD or Container, the image inherits its properties from the ECS-type image within the same image bundle.
      shared_ptr<int32_t> platform_ {};
      // The name of the operating system platform.
      shared_ptr<string> platformName_ {};
      // The product type.
      shared_ptr<string> productType_ {};
      // The protocol type.
      shared_ptr<string> protocolType_ {};
      shared_ptr<int32_t> rating_ {};
      // The types of resources that are supported by the images.
      shared_ptr<string> resourceInstanceCategory_ {};
      shared_ptr<string> scene_ {};
      // The type of the session.
      // 
      // Valid values:
      // 
      // *   SINGLE_SESSION
      // *   MULTIPLE_SESSION
      shared_ptr<string> sessionType_ {};
      shared_ptr<vector<Data::SnapshotList>> snapshotList_ {};
      // The state of the image.
      shared_ptr<string> status_ {};
      // The supported languages.
      shared_ptr<vector<string>> supportedLanguageList_ {};
      // The size of the system disk. Unit: GiB.
      // 
      // >  The system disk must be at least as large as the image.
      shared_ptr<int32_t> systemDiskSize_ {};
      shared_ptr<vector<Data::TagList>> tagList_ {};
      // The version of the image.
      shared_ptr<string> versionId_ {};
      // The version number.
      shared_ptr<string> versionName_ {};
      // Specifies whether to enable disk encryption.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key that is used to encrypt the disk.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListImageResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListImageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListImageResponseBody::Data>) };
    inline vector<ListImageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListImageResponseBody::Data>) };
    inline ListImageResponseBody& setData(const vector<ListImageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListImageResponseBody& setData(vector<ListImageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<string> code_ {};
    // The total number of entries.
    shared_ptr<int32_t> count_ {};
    // The returned data.
    shared_ptr<vector<ListImageResponseBody::Data>> data_ {};
    // The message that is returned for the request.
    shared_ptr<string> message_ {};
    // The page number returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // Valid values:
    // 
    // *   true: The request is successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
