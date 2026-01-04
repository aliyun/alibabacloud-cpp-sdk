// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImagesResponseBody() = default ;
    DescribeImagesResponseBody(const DescribeImagesResponseBody &) = default ;
    DescribeImagesResponseBody(DescribeImagesResponseBody &&) = default ;
    DescribeImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBody() = default ;
    DescribeImagesResponseBody& operator=(const DescribeImagesResponseBody &) = default ;
    DescribeImagesResponseBody& operator=(DescribeImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Image, image_);
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
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(Architecture, architecture_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiskDeviceMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskDeviceMappings& obj) { 
            DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
          };
          friend void from_json(const Darabonba::Json& j, DiskDeviceMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
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
          class DiskDeviceMapping : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiskDeviceMapping& obj) { 
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(imageId, imageId_);
            };
            friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(Size, size_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(imageId, imageId_);
            };
            DiskDeviceMapping() = default ;
            DiskDeviceMapping(const DiskDeviceMapping &) = default ;
            DiskDeviceMapping(DiskDeviceMapping &&) = default ;
            DiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiskDeviceMapping() = default ;
            DiskDeviceMapping& operator=(const DiskDeviceMapping &) = default ;
            DiskDeviceMapping& operator=(DiskDeviceMapping &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->format_ == nullptr
        && this->size_ == nullptr && this->type_ == nullptr && this->imageId_ == nullptr; };
            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline DiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
            inline DiskDeviceMapping& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline DiskDeviceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // imageId Field Functions 
            bool hasImageId() const { return this->imageId_ != nullptr;};
            void deleteImageId() { this->imageId_ = nullptr;};
            inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
            inline DiskDeviceMapping& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


          protected:
            // The format of the image.
            shared_ptr<string> format_ {};
            // The size of the disk. Unit: GiB.
            shared_ptr<string> size_ {};
            // The type of the disk. Valid values:
            // 
            // *   system: system disk.
            // *   data: data disk.
            shared_ptr<string> type_ {};
            // The ID of image.
            shared_ptr<string> imageId_ {};
          };

          virtual bool empty() const override { return this->diskDeviceMapping_ == nullptr; };
          // diskDeviceMapping Field Functions 
          bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
          void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
          inline const vector<DiskDeviceMappings::DiskDeviceMapping> & getDiskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<DiskDeviceMappings::DiskDeviceMapping>) };
          inline vector<DiskDeviceMappings::DiskDeviceMapping> getDiskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<DiskDeviceMappings::DiskDeviceMapping>) };
          inline DiskDeviceMappings& setDiskDeviceMapping(const vector<DiskDeviceMappings::DiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
          inline DiskDeviceMappings& setDiskDeviceMapping(vector<DiskDeviceMappings::DiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


        protected:
          shared_ptr<vector<DiskDeviceMappings::DiskDeviceMapping>> diskDeviceMapping_ {};
        };

        virtual bool empty() const override { return this->architecture_ == nullptr
        && this->creationTime_ == nullptr && this->diskDeviceMappings_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageOwnerAlias_ == nullptr
        && this->imageSize_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->snapshotId_ == nullptr; };
        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline Image& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Image& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // diskDeviceMappings Field Functions 
        bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
        void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
        inline const Image::DiskDeviceMappings & getDiskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Image::DiskDeviceMappings) };
        inline Image::DiskDeviceMappings getDiskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Image::DiskDeviceMappings) };
        inline Image& setDiskDeviceMappings(const Image::DiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
        inline Image& setDiskDeviceMappings(Image::DiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Image& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Image& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // imageOwnerAlias Field Functions 
        bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
        void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
        inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
        inline Image& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


        // imageSize Field Functions 
        bool hasImageSize() const { return this->imageSize_ != nullptr;};
        void deleteImageSize() { this->imageSize_ = nullptr;};
        inline string getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
        inline Image& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline Image& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Image& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline Image& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      protected:
        // The architecture of the image. Example: **x86_64**.
        shared_ptr<string> architecture_ {};
        // The time when the image was created. The time follows the ISO 8601 standard.
        shared_ptr<string> creationTime_ {};
        // The mappings between the disk and the snapshot in the image.
        shared_ptr<Image::DiskDeviceMappings> diskDeviceMappings_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The name of the image.
        shared_ptr<string> imageName_ {};
        // The source of the image. Valid values:
        // 
        // *   system: Alibaba Cloud public images
        // *   self: your custom images
        // *   others: shared images from other Alibaba Cloud accounts, or community images published by other Alibaba Cloud accounts
        shared_ptr<string> imageOwnerAlias_ {};
        // The size of the image. Unit: GiB.
        shared_ptr<string> imageSize_ {};
        // The operating system type of the image. Valid values:
        // 
        // *   Linux
        // *   Windows
        shared_ptr<string> platform_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the snapshot.
        shared_ptr<string> snapshotId_ {};
      };

      virtual bool empty() const override { return this->image_ == nullptr; };
      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const vector<Images::Image> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<Images::Image>) };
      inline vector<Images::Image> getImage() { DARABONBA_PTR_GET(image_, vector<Images::Image>) };
      inline Images& setImage(const vector<Images::Image> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Images& setImage(vector<Images::Image> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    protected:
      shared_ptr<vector<Images::Image>> image_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->images_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeImagesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeImagesResponseBody::Images & getImages() const { DARABONBA_PTR_GET_CONST(images_, DescribeImagesResponseBody::Images) };
    inline DescribeImagesResponseBody::Images getImages() { DARABONBA_PTR_GET(images_, DescribeImagesResponseBody::Images) };
    inline DescribeImagesResponseBody& setImages(const DescribeImagesResponseBody::Images & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeImagesResponseBody& setImages(DescribeImagesResponseBody::Images && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeImagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The information about the images.
    shared_ptr<DescribeImagesResponseBody::Images> images_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of images.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
