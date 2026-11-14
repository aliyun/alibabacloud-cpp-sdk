// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetImageByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetImageByIdResponseBody() = default ;
    GetImageByIdResponseBody(const GetImageByIdResponseBody &) = default ;
    GetImageByIdResponseBody(GetImageByIdResponseBody &&) = default ;
    GetImageByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageByIdResponseBody() = default ;
    GetImageByIdResponseBody& operator=(const GetImageByIdResponseBody &) = default ;
    GetImageByIdResponseBody& operator=(GetImageByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdaptorInfoBOList, adaptorInfoBOList_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(BaseImageId, baseImageId_);
        DARABONBA_PTR_TO_JSON(BaseImageVersion, baseImageVersion_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FeatureList, featureList_);
        DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageCreateMode, imageCreateMode_);
        DARABONBA_PTR_TO_JSON(ImageExtendInfoModel, imageExtendInfoModel_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_TO_JSON(ImageSource, imageSource_);
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
        DARABONBA_PTR_TO_JSON(PropertyMap, propertyMap_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdaptorInfoBOList, adaptorInfoBOList_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(BaseImageId, baseImageId_);
        DARABONBA_PTR_FROM_JSON(BaseImageVersion, baseImageVersion_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FeatureList, featureList_);
        DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageCreateMode, imageCreateMode_);
        DARABONBA_PTR_FROM_JSON(ImageExtendInfoModel, imageExtendInfoModel_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_FROM_JSON(ImageSource, imageSource_);
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
        DARABONBA_PTR_FROM_JSON(PropertyMap, propertyMap_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
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
      class ImageRegionDistributeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(EcsImageId, ecsImageId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UnitImageId, unitImageId_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(EcsImageId, ecsImageId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UnitImageId, unitImageId_);
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
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->ecsImageId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageId_ == nullptr && this->message_ == nullptr
        && this->progress_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->unitImageId_ == nullptr && this->versionId_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline ImageRegionDistributeList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // ecsImageId Field Functions 
        bool hasEcsImageId() const { return this->ecsImageId_ != nullptr;};
        void deleteEcsImageId() { this->ecsImageId_ = nullptr;};
        inline string getEcsImageId() const { DARABONBA_PTR_GET_DEFAULT(ecsImageId_, "") };
        inline ImageRegionDistributeList& setEcsImageId(string ecsImageId) { DARABONBA_PTR_SET_VALUE(ecsImageId_, ecsImageId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ImageRegionDistributeList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ImageRegionDistributeList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImageRegionDistributeList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ImageRegionDistributeList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


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


        // unitImageId Field Functions 
        bool hasUnitImageId() const { return this->unitImageId_ != nullptr;};
        void deleteUnitImageId() { this->unitImageId_ = nullptr;};
        inline string getUnitImageId() const { DARABONBA_PTR_GET_DEFAULT(unitImageId_, "") };
        inline ImageRegionDistributeList& setUnitImageId(string unitImageId) { DARABONBA_PTR_SET_VALUE(unitImageId_, unitImageId) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline ImageRegionDistributeList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The ID of the Alibaba Cloud account to which the image belongs. The account ID for system images is 0.
        shared_ptr<int64_t> aliUid_ {};
        // The ID of the ECS image corresponding to the region.
        shared_ptr<string> ecsImageId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The last update time.
        shared_ptr<string> gmtModified_ {};
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The processing message reported by the region distribution task.
        shared_ptr<string> message_ {};
        // The distribution progress of the image in the region, expressed as a percentage.
        shared_ptr<string> progress_ {};
        // The ID of the region where the image is distributed.
        shared_ptr<string> regionId_ {};
        // The region distribution status. Valid values:
        // - CREATING: Distributing
        // - AVAILABLE: Available
        // - CREATE_FAILED: Distribution failed
        // - DELETE: Deleted
        shared_ptr<string> status_ {};
        // The logical ID of the image on the unit side, which can be different from the central image ID.
        shared_ptr<string> unitImageId_ {};
        // The image version ID.
        shared_ptr<string> versionId_ {};
      };

      class ImageExtendInfoModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageExtendInfoModel& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
          DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, ImageExtendInfoModel& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
          DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        ImageExtendInfoModel() = default ;
        ImageExtendInfoModel(const ImageExtendInfoModel &) = default ;
        ImageExtendInfoModel(ImageExtendInfoModel &&) = default ;
        ImageExtendInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageExtendInfoModel() = default ;
        ImageExtendInfoModel& operator=(const ImageExtendInfoModel &) = default ;
        ImageExtendInfoModel& operator=(ImageExtendInfoModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->dataDiskSize_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->gpuCategory_ == nullptr && this->gpuDriverVersion_ == nullptr
        && this->imageId_ == nullptr && this->packageType_ == nullptr && this->systemDiskSize_ == nullptr && this->versionId_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline ImageExtendInfoModel& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // dataDiskSize Field Functions 
        bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
        void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
        inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
        inline ImageExtendInfoModel& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ImageExtendInfoModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ImageExtendInfoModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gpuCategory Field Functions 
        bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
        void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
        inline int32_t getGpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, 0) };
        inline ImageExtendInfoModel& setGpuCategory(int32_t gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


        // gpuDriverVersion Field Functions 
        bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
        void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
        inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
        inline ImageExtendInfoModel& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImageExtendInfoModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline ImageExtendInfoModel& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // systemDiskSize Field Functions 
        bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
        void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
        inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
        inline ImageExtendInfoModel& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline ImageExtendInfoModel& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The ID of the Alibaba Cloud account to which the image belongs. The account ID for system images is 0.
        shared_ptr<int64_t> aliUid_ {};
        // The size of the data cloud disk. Unit: GiB.
        shared_ptr<int32_t> dataDiskSize_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The last update time.
        shared_ptr<string> gmtModified_ {};
        // The GPU category.
        shared_ptr<int32_t> gpuCategory_ {};
        // The GPU driver version.
        shared_ptr<string> gpuDriverVersion_ {};
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The image package type. Valid values:
        // - Ecs: ECS image
        // - Vhd: Virtual disk image
        // - Container: Container image
        // - Ecs_Container: ECS and container composite image
        // - K8s_Node: Kubernetes node image
        shared_ptr<string> packageType_ {};
        // The size of the system cloud disk. Unit: GiB.
        shared_ptr<int32_t> systemDiskSize_ {};
        // The image version ID.
        shared_ptr<string> versionId_ {};
      };

      class AdaptorInfoBOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdaptorInfoBOList& obj) { 
          DARABONBA_PTR_TO_JSON(AdaptorId, adaptorId_);
          DARABONBA_PTR_TO_JSON(AdaptorMessage, adaptorMessage_);
          DARABONBA_PTR_TO_JSON(AdaptorMode, adaptorMode_);
          DARABONBA_PTR_TO_JSON(AdaptorStep, adaptorStep_);
          DARABONBA_PTR_TO_JSON(Aid, aid_);
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(AppIconUrl, appIconUrl_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppScript, appScript_);
          DARABONBA_PTR_TO_JSON(AppThemeColor, appThemeColor_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
          DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
          DARABONBA_PTR_TO_JSON(AppVersionNumber, appVersionNumber_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_TO_JSON(ControlParam, controlParam_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(ExecuteFileAddress, executeFileAddress_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FilePath, filePath_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(OptimizeParam, optimizeParam_);
          DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
          DARABONBA_PTR_TO_JSON(OsType, osType_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(RuntimeEnv, runtimeEnv_);
          DARABONBA_PTR_TO_JSON(SilenceFlag, silenceFlag_);
          DARABONBA_PTR_TO_JSON(SilenceParam, silenceParam_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubAppType, subAppType_);
        };
        friend void from_json(const Darabonba::Json& j, AdaptorInfoBOList& obj) { 
          DARABONBA_PTR_FROM_JSON(AdaptorId, adaptorId_);
          DARABONBA_PTR_FROM_JSON(AdaptorMessage, adaptorMessage_);
          DARABONBA_PTR_FROM_JSON(AdaptorMode, adaptorMode_);
          DARABONBA_PTR_FROM_JSON(AdaptorStep, adaptorStep_);
          DARABONBA_PTR_FROM_JSON(Aid, aid_);
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(AppIconUrl, appIconUrl_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppScript, appScript_);
          DARABONBA_PTR_FROM_JSON(AppThemeColor, appThemeColor_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
          DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
          DARABONBA_PTR_FROM_JSON(AppVersionNumber, appVersionNumber_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
          DARABONBA_PTR_FROM_JSON(ControlParam, controlParam_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(ExecuteFileAddress, executeFileAddress_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(OptimizeParam, optimizeParam_);
          DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
          DARABONBA_PTR_FROM_JSON(OsType, osType_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(RuntimeEnv, runtimeEnv_);
          DARABONBA_PTR_FROM_JSON(SilenceFlag, silenceFlag_);
          DARABONBA_PTR_FROM_JSON(SilenceParam, silenceParam_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubAppType, subAppType_);
        };
        AdaptorInfoBOList() = default ;
        AdaptorInfoBOList(const AdaptorInfoBOList &) = default ;
        AdaptorInfoBOList(AdaptorInfoBOList &&) = default ;
        AdaptorInfoBOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdaptorInfoBOList() = default ;
        AdaptorInfoBOList& operator=(const AdaptorInfoBOList &) = default ;
        AdaptorInfoBOList& operator=(AdaptorInfoBOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adaptorId_ == nullptr
        && this->adaptorMessage_ == nullptr && this->adaptorMode_ == nullptr && this->adaptorStep_ == nullptr && this->aid_ == nullptr && this->aliUid_ == nullptr
        && this->appIconUrl_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appScript_ == nullptr && this->appThemeColor_ == nullptr
        && this->appType_ == nullptr && this->appVersionId_ == nullptr && this->appVersionName_ == nullptr && this->appVersionNumber_ == nullptr && this->bizType_ == nullptr
        && this->bucketName_ == nullptr && this->categoryId_ == nullptr && this->categoryType_ == nullptr && this->controlParam_ == nullptr && this->diskId_ == nullptr
        && this->executeFileAddress_ == nullptr && this->extend_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr && this->fileSize_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->optimizeParam_ == nullptr && this->originAppType_ == nullptr && this->osType_ == nullptr
        && this->productType_ == nullptr && this->runtimeEnv_ == nullptr && this->silenceFlag_ == nullptr && this->silenceParam_ == nullptr && this->status_ == nullptr
        && this->subAppType_ == nullptr; };
        // adaptorId Field Functions 
        bool hasAdaptorId() const { return this->adaptorId_ != nullptr;};
        void deleteAdaptorId() { this->adaptorId_ = nullptr;};
        inline string getAdaptorId() const { DARABONBA_PTR_GET_DEFAULT(adaptorId_, "") };
        inline AdaptorInfoBOList& setAdaptorId(string adaptorId) { DARABONBA_PTR_SET_VALUE(adaptorId_, adaptorId) };


        // adaptorMessage Field Functions 
        bool hasAdaptorMessage() const { return this->adaptorMessage_ != nullptr;};
        void deleteAdaptorMessage() { this->adaptorMessage_ = nullptr;};
        inline string getAdaptorMessage() const { DARABONBA_PTR_GET_DEFAULT(adaptorMessage_, "") };
        inline AdaptorInfoBOList& setAdaptorMessage(string adaptorMessage) { DARABONBA_PTR_SET_VALUE(adaptorMessage_, adaptorMessage) };


        // adaptorMode Field Functions 
        bool hasAdaptorMode() const { return this->adaptorMode_ != nullptr;};
        void deleteAdaptorMode() { this->adaptorMode_ = nullptr;};
        inline string getAdaptorMode() const { DARABONBA_PTR_GET_DEFAULT(adaptorMode_, "") };
        inline AdaptorInfoBOList& setAdaptorMode(string adaptorMode) { DARABONBA_PTR_SET_VALUE(adaptorMode_, adaptorMode) };


        // adaptorStep Field Functions 
        bool hasAdaptorStep() const { return this->adaptorStep_ != nullptr;};
        void deleteAdaptorStep() { this->adaptorStep_ = nullptr;};
        inline string getAdaptorStep() const { DARABONBA_PTR_GET_DEFAULT(adaptorStep_, "") };
        inline AdaptorInfoBOList& setAdaptorStep(string adaptorStep) { DARABONBA_PTR_SET_VALUE(adaptorStep_, adaptorStep) };


        // aid Field Functions 
        bool hasAid() const { return this->aid_ != nullptr;};
        void deleteAid() { this->aid_ = nullptr;};
        inline int64_t getAid() const { DARABONBA_PTR_GET_DEFAULT(aid_, 0L) };
        inline AdaptorInfoBOList& setAid(int64_t aid) { DARABONBA_PTR_SET_VALUE(aid_, aid) };


        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline AdaptorInfoBOList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // appIconUrl Field Functions 
        bool hasAppIconUrl() const { return this->appIconUrl_ != nullptr;};
        void deleteAppIconUrl() { this->appIconUrl_ = nullptr;};
        inline string getAppIconUrl() const { DARABONBA_PTR_GET_DEFAULT(appIconUrl_, "") };
        inline AdaptorInfoBOList& setAppIconUrl(string appIconUrl) { DARABONBA_PTR_SET_VALUE(appIconUrl_, appIconUrl) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AdaptorInfoBOList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AdaptorInfoBOList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appScript Field Functions 
        bool hasAppScript() const { return this->appScript_ != nullptr;};
        void deleteAppScript() { this->appScript_ = nullptr;};
        inline string getAppScript() const { DARABONBA_PTR_GET_DEFAULT(appScript_, "") };
        inline AdaptorInfoBOList& setAppScript(string appScript) { DARABONBA_PTR_SET_VALUE(appScript_, appScript) };


        // appThemeColor Field Functions 
        bool hasAppThemeColor() const { return this->appThemeColor_ != nullptr;};
        void deleteAppThemeColor() { this->appThemeColor_ = nullptr;};
        inline string getAppThemeColor() const { DARABONBA_PTR_GET_DEFAULT(appThemeColor_, "") };
        inline AdaptorInfoBOList& setAppThemeColor(string appThemeColor) { DARABONBA_PTR_SET_VALUE(appThemeColor_, appThemeColor) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline AdaptorInfoBOList& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // appVersionId Field Functions 
        bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
        void deleteAppVersionId() { this->appVersionId_ = nullptr;};
        inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
        inline AdaptorInfoBOList& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


        // appVersionName Field Functions 
        bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
        void deleteAppVersionName() { this->appVersionName_ = nullptr;};
        inline string getAppVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
        inline AdaptorInfoBOList& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


        // appVersionNumber Field Functions 
        bool hasAppVersionNumber() const { return this->appVersionNumber_ != nullptr;};
        void deleteAppVersionNumber() { this->appVersionNumber_ = nullptr;};
        inline string getAppVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(appVersionNumber_, "") };
        inline AdaptorInfoBOList& setAppVersionNumber(string appVersionNumber) { DARABONBA_PTR_SET_VALUE(appVersionNumber_, appVersionNumber) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
        inline AdaptorInfoBOList& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline AdaptorInfoBOList& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
        inline AdaptorInfoBOList& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline int32_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
        inline AdaptorInfoBOList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


        // controlParam Field Functions 
        bool hasControlParam() const { return this->controlParam_ != nullptr;};
        void deleteControlParam() { this->controlParam_ = nullptr;};
        inline string getControlParam() const { DARABONBA_PTR_GET_DEFAULT(controlParam_, "") };
        inline AdaptorInfoBOList& setControlParam(string controlParam) { DARABONBA_PTR_SET_VALUE(controlParam_, controlParam) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline AdaptorInfoBOList& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // executeFileAddress Field Functions 
        bool hasExecuteFileAddress() const { return this->executeFileAddress_ != nullptr;};
        void deleteExecuteFileAddress() { this->executeFileAddress_ = nullptr;};
        inline string getExecuteFileAddress() const { DARABONBA_PTR_GET_DEFAULT(executeFileAddress_, "") };
        inline AdaptorInfoBOList& setExecuteFileAddress(string executeFileAddress) { DARABONBA_PTR_SET_VALUE(executeFileAddress_, executeFileAddress) };


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
        inline AdaptorInfoBOList& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline AdaptorInfoBOList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // filePath Field Functions 
        bool hasFilePath() const { return this->filePath_ != nullptr;};
        void deleteFilePath() { this->filePath_ = nullptr;};
        inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
        inline AdaptorInfoBOList& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline AdaptorInfoBOList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline AdaptorInfoBOList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline AdaptorInfoBOList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // optimizeParam Field Functions 
        bool hasOptimizeParam() const { return this->optimizeParam_ != nullptr;};
        void deleteOptimizeParam() { this->optimizeParam_ = nullptr;};
        inline string getOptimizeParam() const { DARABONBA_PTR_GET_DEFAULT(optimizeParam_, "") };
        inline AdaptorInfoBOList& setOptimizeParam(string optimizeParam) { DARABONBA_PTR_SET_VALUE(optimizeParam_, optimizeParam) };


        // originAppType Field Functions 
        bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
        void deleteOriginAppType() { this->originAppType_ = nullptr;};
        inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
        inline AdaptorInfoBOList& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


        // osType Field Functions 
        bool hasOsType() const { return this->osType_ != nullptr;};
        void deleteOsType() { this->osType_ = nullptr;};
        inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
        inline AdaptorInfoBOList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline AdaptorInfoBOList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // runtimeEnv Field Functions 
        bool hasRuntimeEnv() const { return this->runtimeEnv_ != nullptr;};
        void deleteRuntimeEnv() { this->runtimeEnv_ = nullptr;};
        inline string getRuntimeEnv() const { DARABONBA_PTR_GET_DEFAULT(runtimeEnv_, "") };
        inline AdaptorInfoBOList& setRuntimeEnv(string runtimeEnv) { DARABONBA_PTR_SET_VALUE(runtimeEnv_, runtimeEnv) };


        // silenceFlag Field Functions 
        bool hasSilenceFlag() const { return this->silenceFlag_ != nullptr;};
        void deleteSilenceFlag() { this->silenceFlag_ = nullptr;};
        inline string getSilenceFlag() const { DARABONBA_PTR_GET_DEFAULT(silenceFlag_, "") };
        inline AdaptorInfoBOList& setSilenceFlag(string silenceFlag) { DARABONBA_PTR_SET_VALUE(silenceFlag_, silenceFlag) };


        // silenceParam Field Functions 
        bool hasSilenceParam() const { return this->silenceParam_ != nullptr;};
        void deleteSilenceParam() { this->silenceParam_ = nullptr;};
        inline string getSilenceParam() const { DARABONBA_PTR_GET_DEFAULT(silenceParam_, "") };
        inline AdaptorInfoBOList& setSilenceParam(string silenceParam) { DARABONBA_PTR_SET_VALUE(silenceParam_, silenceParam) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdaptorInfoBOList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subAppType Field Functions 
        bool hasSubAppType() const { return this->subAppType_ != nullptr;};
        void deleteSubAppType() { this->subAppType_ = nullptr;};
        inline string getSubAppType() const { DARABONBA_PTR_GET_DEFAULT(subAppType_, "") };
        inline AdaptorInfoBOList& setSubAppType(string subAppType) { DARABONBA_PTR_SET_VALUE(subAppType_, subAppType) };


      protected:
        // The adaptor ID.
        shared_ptr<string> adaptorId_ {};
        // The adaptor message.
        shared_ptr<string> adaptorMessage_ {};
        // The execution mode.
        shared_ptr<string> adaptorMode_ {};
        // The execution step.
        shared_ptr<string> adaptorStep_ {};
        // The numeric ID of the application.
        shared_ptr<int64_t> aid_ {};
        // The ID of the Alibaba Cloud account to which the application belongs.
        shared_ptr<int64_t> aliUid_ {};
        // The application icon.
        shared_ptr<string> appIconUrl_ {};
        // The application ID.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The application script.
        shared_ptr<string> appScript_ {};
        // The theme color.
        shared_ptr<string> appThemeColor_ {};
        // The application type.
        shared_ptr<string> appType_ {};
        // The application version ID.
        shared_ptr<string> appVersionId_ {};
        // The version name.
        shared_ptr<string> appVersionName_ {};
        // The version number.
        shared_ptr<string> appVersionNumber_ {};
        // The number of the business line to which the application belongs.
        shared_ptr<int32_t> bizType_ {};
        // The name of the OSS bucket where the application file is stored.
        shared_ptr<string> bucketName_ {};
        // The level-2 category of the application.
        shared_ptr<int32_t> categoryId_ {};
        // The level-1 category of the application.
        shared_ptr<int32_t> categoryType_ {};
        // The control parameters that can be configured by tenants and administrators.
        shared_ptr<string> controlParam_ {};
        // The ID of the disk where the application file is stored.
        shared_ptr<string> diskId_ {};
        // The path of the executable file after the cloud application is installed.
        shared_ptr<string> executeFileAddress_ {};
        // The extension information of the adapted application.
        shared_ptr<string> extend_ {};
        // The file name.
        shared_ptr<string> fileName_ {};
        // The file path.
        shared_ptr<string> filePath_ {};
        // The file size.
        shared_ptr<int64_t> fileSize_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The last update time.
        shared_ptr<string> gmtModified_ {};
        // The optimization parameters that can be configured by administrators in the backend.
        shared_ptr<string> optimizeParam_ {};
        // The original application type.
        shared_ptr<string> originAppType_ {};
        // The operating system type applicable to the application.
        shared_ptr<string> osType_ {};
        // The product type to which the application belongs.
        shared_ptr<string> productType_ {};
        // The runtime environment.
        shared_ptr<string> runtimeEnv_ {};
        // Specifies whether to skip installation. This parameter can be configured by tenants and administrators.
        shared_ptr<string> silenceFlag_ {};
        // The installation parameters that can be configured by tenants and administrators.
        shared_ptr<string> silenceParam_ {};
        // The application adaptation status. For example, ADAPT_DONE indicates that the adaptation is complete.
        shared_ptr<string> status_ {};
        // The sub-application type.
        shared_ptr<string> subAppType_ {};
      };

      virtual bool empty() const override { return this->adaptorInfoBOList_ == nullptr
        && this->aliUid_ == nullptr && this->baseImageId_ == nullptr && this->baseImageVersion_ == nullptr && this->bizType_ == nullptr && this->bucketName_ == nullptr
        && this->description_ == nullptr && this->featureList_ == nullptr && this->fotaVersion_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->imageCreateMode_ == nullptr && this->imageExtendInfoModel_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageRegionDistributeList_ == nullptr
        && this->imageRegionList_ == nullptr && this->imageSource_ == nullptr && this->imageType_ == nullptr && this->language_ == nullptr && this->latestVersionId_ == nullptr
        && this->onlineVersion_ == nullptr && this->onlineVersionId_ == nullptr && this->osType_ == nullptr && this->packageType_ == nullptr && this->parentImageId_ == nullptr
        && this->parentImageVersion_ == nullptr && this->platform_ == nullptr && this->platformName_ == nullptr && this->productType_ == nullptr && this->propertyMap_ == nullptr
        && this->protocolType_ == nullptr && this->status_ == nullptr && this->versionId_ == nullptr; };
      // adaptorInfoBOList Field Functions 
      bool hasAdaptorInfoBOList() const { return this->adaptorInfoBOList_ != nullptr;};
      void deleteAdaptorInfoBOList() { this->adaptorInfoBOList_ = nullptr;};
      inline const vector<Data::AdaptorInfoBOList> & getAdaptorInfoBOList() const { DARABONBA_PTR_GET_CONST(adaptorInfoBOList_, vector<Data::AdaptorInfoBOList>) };
      inline vector<Data::AdaptorInfoBOList> getAdaptorInfoBOList() { DARABONBA_PTR_GET(adaptorInfoBOList_, vector<Data::AdaptorInfoBOList>) };
      inline Data& setAdaptorInfoBOList(const vector<Data::AdaptorInfoBOList> & adaptorInfoBOList) { DARABONBA_PTR_SET_VALUE(adaptorInfoBOList_, adaptorInfoBOList) };
      inline Data& setAdaptorInfoBOList(vector<Data::AdaptorInfoBOList> && adaptorInfoBOList) { DARABONBA_PTR_SET_RVALUE(adaptorInfoBOList_, adaptorInfoBOList) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


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


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // featureList Field Functions 
      bool hasFeatureList() const { return this->featureList_ != nullptr;};
      void deleteFeatureList() { this->featureList_ = nullptr;};
      inline const vector<string> & getFeatureList() const { DARABONBA_PTR_GET_CONST(featureList_, vector<string>) };
      inline vector<string> getFeatureList() { DARABONBA_PTR_GET(featureList_, vector<string>) };
      inline Data& setFeatureList(const vector<string> & featureList) { DARABONBA_PTR_SET_VALUE(featureList_, featureList) };
      inline Data& setFeatureList(vector<string> && featureList) { DARABONBA_PTR_SET_RVALUE(featureList_, featureList) };


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


      // imageExtendInfoModel Field Functions 
      bool hasImageExtendInfoModel() const { return this->imageExtendInfoModel_ != nullptr;};
      void deleteImageExtendInfoModel() { this->imageExtendInfoModel_ = nullptr;};
      inline const Data::ImageExtendInfoModel & getImageExtendInfoModel() const { DARABONBA_PTR_GET_CONST(imageExtendInfoModel_, Data::ImageExtendInfoModel) };
      inline Data::ImageExtendInfoModel getImageExtendInfoModel() { DARABONBA_PTR_GET(imageExtendInfoModel_, Data::ImageExtendInfoModel) };
      inline Data& setImageExtendInfoModel(const Data::ImageExtendInfoModel & imageExtendInfoModel) { DARABONBA_PTR_SET_VALUE(imageExtendInfoModel_, imageExtendInfoModel) };
      inline Data& setImageExtendInfoModel(Data::ImageExtendInfoModel && imageExtendInfoModel) { DARABONBA_PTR_SET_RVALUE(imageExtendInfoModel_, imageExtendInfoModel) };


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


      // imageSource Field Functions 
      bool hasImageSource() const { return this->imageSource_ != nullptr;};
      void deleteImageSource() { this->imageSource_ = nullptr;};
      inline string getImageSource() const { DARABONBA_PTR_GET_DEFAULT(imageSource_, "") };
      inline Data& setImageSource(string imageSource) { DARABONBA_PTR_SET_VALUE(imageSource_, imageSource) };


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


      // propertyMap Field Functions 
      bool hasPropertyMap() const { return this->propertyMap_ != nullptr;};
      void deletePropertyMap() { this->propertyMap_ = nullptr;};
      inline const map<string, string> & getPropertyMap() const { DARABONBA_PTR_GET_CONST(propertyMap_, map<string, string>) };
      inline map<string, string> getPropertyMap() { DARABONBA_PTR_GET(propertyMap_, map<string, string>) };
      inline Data& setPropertyMap(const map<string, string> & propertyMap) { DARABONBA_PTR_SET_VALUE(propertyMap_, propertyMap) };
      inline Data& setPropertyMap(map<string, string> && propertyMap) { DARABONBA_PTR_SET_RVALUE(propertyMap_, propertyMap) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Data& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline Data& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The list of adapted applications for the image version.
      shared_ptr<vector<Data::AdaptorInfoBOList>> adaptorInfoBOList_ {};
      // The ID of the Alibaba Cloud account to which the image belongs. The account ID for system images is 0.
      shared_ptr<int64_t> aliUid_ {};
      // The ID of the base image.
      shared_ptr<string> baseImageId_ {};
      // The base image version ID.
      shared_ptr<string> baseImageVersion_ {};
      // The business line to which the image belongs. Valid values:
      // - 1: basic business
      // - 2: personal edition
      // - 3: cloud office
      // - 4: cloud streaming
      // - 10: standard edition
      shared_ptr<int32_t> bizType_ {};
      // The name of the OSS bucket where the image file is stored.
      shared_ptr<string> bucketName_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // The list of feature tags supported by the image.
      shared_ptr<vector<string>> featureList_ {};
      // The FOTA version.
      shared_ptr<string> fotaVersion_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last update time.
      shared_ptr<string> gmtModified_ {};
      // The image creation method. For example, BUILDER_MANUAL indicates manual creation.
      shared_ptr<string> imageCreateMode_ {};
      // The image extended information, which includes cloud disk specifications and GPU driver information. For VHD or container images, the extended information of the base image and base version is used.
      shared_ptr<Data::ImageExtendInfoModel> imageExtendInfoModel_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The name of the image.
      shared_ptr<string> imageName_ {};
      // The list of region distribution information for the image version.
      shared_ptr<vector<Data::ImageRegionDistributeList>> imageRegionDistributeList_ {};
      // The list of region IDs supported by the image.
      shared_ptr<vector<string>> imageRegionList_ {};
      // The source of the image. For example, center indicates the central image service.
      shared_ptr<string> imageSource_ {};
      // The image type. Valid values:
      // - System: system image
      // - User: custom image
      // - Shared: shared image
      // - Community: community image
      shared_ptr<string> imageType_ {};
      // The image language. If the packaging type is VHD or Container, this property is inherited from the image with the ECS packaging type in the same image combination.
      shared_ptr<string> language_ {};
      // The ID of the latest image version.
      shared_ptr<string> latestVersionId_ {};
      // Indicates whether the returned version is the online version. Valid values:
      // - true: Yes.
      // - false: No.
      shared_ptr<bool> onlineVersion_ {};
      // The ID of the current online version of the image.
      shared_ptr<string> onlineVersionId_ {};
      // The operating system type of the image. Valid values:
      // - Windows: Windows system
      // - Linux: Linux system
      // - Android: Android system
      // - Unknown: unknown system
      shared_ptr<string> osType_ {};
      // The image package type. Valid values:
      // - Ecs: ECS image
      // - Vhd: Virtual disk image
      // - Container: Container image
      // - Ecs_Container: ECS and container composite image
      // - K8s_Node: Kubernetes node image
      shared_ptr<string> packageType_ {};
      // The ID of the parent image, which indicates the image inheritance relationship. System images do not have parent images.
      shared_ptr<string> parentImageId_ {};
      // The parent image version ID.
      shared_ptr<string> parentImageVersion_ {};
      // The operating system platform ID. For example, 33 indicates Windows Server 2022.
      shared_ptr<int32_t> platform_ {};
      // The name of the operating system platform, which corresponds to Platform.
      shared_ptr<string> platformName_ {};
      // The product type to which the image belongs, such as CloudDesktop (Cloud Desktop), CloudApp (cloud application), and WuyingServer (WUYING Workspace Enterprise Edition workstation).
      shared_ptr<string> productType_ {};
      // The extended properties of the image version in key-value pairs.
      shared_ptr<map<string, string>> propertyMap_ {};
      // The connection protocol used by the image. Valid values:
      // - ASP: Alibaba Cloud Streaming Protocol
      // - HDX: HDX protocol
      shared_ptr<string> protocolType_ {};
      // The image status. Valid values:
      // - INIT: Initial.
      // - CREATING: Creating.
      // - AVAILABLE: Available.
      // - CREATE_FAILED: Creation failed.
      // - DELETE: Deleted.
      shared_ptr<string> status_ {};
      // The image version ID.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageByIdResponseBody::Data) };
    inline GetImageByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageByIdResponseBody::Data) };
    inline GetImageByIdResponseBody& setData(const GetImageByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageByIdResponseBody& setData(GetImageByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. 200 indicates success. If the call fails, the corresponding error code is returned.
    shared_ptr<string> code_ {};
    // The image information returned by the query.
    shared_ptr<GetImageByIdResponseBody::Data> data_ {};
    // The message returned by the API.
    shared_ptr<string> message_ {};
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
