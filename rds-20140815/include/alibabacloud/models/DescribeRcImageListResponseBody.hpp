// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCImageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCImageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCImageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCImageListResponseBody() = default ;
    DescribeRCImageListResponseBody(const DescribeRCImageListResponseBody &) = default ;
    DescribeRCImageListResponseBody(DescribeRCImageListResponseBody &&) = default ;
    DescribeRCImageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCImageListResponseBody() = default ;
    DescribeRCImageListResponseBody& operator=(const DescribeRCImageListResponseBody &) = default ;
    DescribeRCImageListResponseBody& operator=(DescribeRCImageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
        DARABONBA_PTR_TO_JSON(IsSupportRdsCustom, isSupportRdsCustom_);
        DARABONBA_PTR_TO_JSON(OSName, OSName_);
        DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
        DARABONBA_PTR_TO_JSON(OSType, OSType_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
        DARABONBA_PTR_FROM_JSON(IsSupportRdsCustom, isSupportRdsCustom_);
        DARABONBA_PTR_FROM_JSON(OSName, OSName_);
        DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
        DARABONBA_PTR_FROM_JSON(OSType, OSType_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DiskDeviceMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskDeviceMappings& obj) { 
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DiskDeviceMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DiskDeviceMappings() = default ;
        DiskDeviceMappings(const DiskDeviceMappings &) = default ;
        DiskDeviceMappings(DiskDeviceMappings &&) = default ;
        DiskDeviceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskDeviceMappings() = default ;
        DiskDeviceMappings& operator=(const DiskDeviceMappings &) = default ;
        DiskDeviceMappings& operator=(DiskDeviceMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->device_ == nullptr
        && this->size_ == nullptr && this->type_ == nullptr; };
        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline DiskDeviceMappings& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline DiskDeviceMappings& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DiskDeviceMappings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> device_ {};
        shared_ptr<string> size_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->architecture_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->diskDeviceMappings_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr
        && this->imageVersion_ == nullptr && this->isPublic_ == nullptr && this->isSupportRdsCustom_ == nullptr && this->OSName_ == nullptr && this->OSNameEn_ == nullptr
        && this->OSType_ == nullptr && this->platform_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->usage_ == nullptr; };
      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
      inline Images& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Images& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Images& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diskDeviceMappings Field Functions 
      bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
      void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
      inline const vector<Images::DiskDeviceMappings> & getDiskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, vector<Images::DiskDeviceMappings>) };
      inline vector<Images::DiskDeviceMappings> getDiskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, vector<Images::DiskDeviceMappings>) };
      inline Images& setDiskDeviceMappings(const vector<Images::DiskDeviceMappings> & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
      inline Images& setDiskDeviceMappings(vector<Images::DiskDeviceMappings> && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Images& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline Images& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // isPublic Field Functions 
      bool hasIsPublic() const { return this->isPublic_ != nullptr;};
      void deleteIsPublic() { this->isPublic_ = nullptr;};
      inline bool getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
      inline Images& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


      // isSupportRdsCustom Field Functions 
      bool hasIsSupportRdsCustom() const { return this->isSupportRdsCustom_ != nullptr;};
      void deleteIsSupportRdsCustom() { this->isSupportRdsCustom_ = nullptr;};
      inline bool getIsSupportRdsCustom() const { DARABONBA_PTR_GET_DEFAULT(isSupportRdsCustom_, false) };
      inline Images& setIsSupportRdsCustom(bool isSupportRdsCustom) { DARABONBA_PTR_SET_VALUE(isSupportRdsCustom_, isSupportRdsCustom) };


      // OSName Field Functions 
      bool hasOSName() const { return this->OSName_ != nullptr;};
      void deleteOSName() { this->OSName_ = nullptr;};
      inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
      inline Images& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


      // OSNameEn Field Functions 
      bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
      void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
      inline string getOSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
      inline Images& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


      // OSType Field Functions 
      bool hasOSType() const { return this->OSType_ != nullptr;};
      void deleteOSType() { this->OSType_ = nullptr;};
      inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
      inline Images& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Images& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Images& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Images& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Images& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The image architecture. Valid values:
      // 
      // *   x86_64
      // *   arm64
      shared_ptr<string> architecture_ {};
      // The time when the image was created.
      shared_ptr<string> creationTime_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      shared_ptr<vector<Images::DiskDeviceMappings>> diskDeviceMappings_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The image version.
      shared_ptr<string> imageVersion_ {};
      // Indicates whether the image is a public image. Public images include public images provided by Alibaba Cloud and custom images published as community images.
      // 
      // *   **true**: The image is a public image.
      // *   **false**: The image is not a public image.
      shared_ptr<bool> isPublic_ {};
      shared_ptr<bool> isSupportRdsCustom_ {};
      // The display name of the operating system in Chinese.
      shared_ptr<string> OSName_ {};
      // The display name of the operating system in English.
      shared_ptr<string> OSNameEn_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**
      // *   **linux**
      shared_ptr<string> OSType_ {};
      shared_ptr<string> platform_ {};
      // The image size. Unit: GiB.
      shared_ptr<int64_t> size_ {};
      // The image status. Valid values:
      // 
      // *   **Unavailable**
      // *   **Available**
      // *   **Creating**
      // *   **CreateFailed**
      shared_ptr<string> status_ {};
      // Indicates whether the image is used by the RDS Custom instance. Valid values:
      // 
      // *   **instance**: The image is used to create one or more RDS Custom instances.
      // *   **none**: The image is not used to create RDS Custom instances.
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->images_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<DescribeRCImageListResponseBody::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<DescribeRCImageListResponseBody::Images>) };
    inline vector<DescribeRCImageListResponseBody::Images> getImages() { DARABONBA_PTR_GET(images_, vector<DescribeRCImageListResponseBody::Images>) };
    inline DescribeRCImageListResponseBody& setImages(const vector<DescribeRCImageListResponseBody::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeRCImageListResponseBody& setImages(vector<DescribeRCImageListResponseBody::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCImageListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCImageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCImageListResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCImageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCImageListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the images.
    shared_ptr<vector<DescribeRCImageListResponseBody::Images>> images_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of images.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
