// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODY_HPP_
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
  class DescribeImageInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageInfosResponseBody() = default ;
    DescribeImageInfosResponseBody(const DescribeImageInfosResponseBody &) = default ;
    DescribeImageInfosResponseBody(DescribeImageInfosResponseBody &&) = default ;
    DescribeImageInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosResponseBody() = default ;
    DescribeImageInfosResponseBody& operator=(const DescribeImageInfosResponseBody &) = default ;
    DescribeImageInfosResponseBody& operator=(DescribeImageInfosResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
          DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_TO_JSON(OSName, OSName_);
          DARABONBA_PTR_TO_JSON(OSType, OSType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
          DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_FROM_JSON(OSName, OSName_);
          DARABONBA_PTR_FROM_JSON(OSType, OSType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
            // The size of the image. Unit: GB.
            shared_ptr<string> size_ {};
            // The type of the disk. Valid values: System and Data.
            shared_ptr<string> type_ {};
            // The ID of the image.
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

        virtual bool empty() const override { return this->computeType_ == nullptr
        && this->description_ == nullptr && this->diskDeviceMappings_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->imageVersion_ == nullptr
        && this->OSName_ == nullptr && this->OSType_ == nullptr && this->regionId_ == nullptr; };
        // computeType Field Functions 
        bool hasComputeType() const { return this->computeType_ != nullptr;};
        void deleteComputeType() { this->computeType_ = nullptr;};
        inline string getComputeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
        inline Image& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Image& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


        // imageSize Field Functions 
        bool hasImageSize() const { return this->imageSize_ != nullptr;};
        void deleteImageSize() { this->imageSize_ = nullptr;};
        inline string getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
        inline Image& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


        // imageVersion Field Functions 
        bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
        void deleteImageVersion() { this->imageVersion_ = nullptr;};
        inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
        inline Image& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


        // OSName Field Functions 
        bool hasOSName() const { return this->OSName_ != nullptr;};
        void deleteOSName() { this->OSName_ = nullptr;};
        inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
        inline Image& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


        // OSType Field Functions 
        bool hasOSType() const { return this->OSType_ != nullptr;};
        void deleteOSType() { this->OSType_ = nullptr;};
        inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
        inline Image& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Image& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The computing type of the image. Valid values:
        // 
        // *   ens_vm: x86 computing.
        // *   arm_vm: ARM computing.
        // *   bare_metal: x86 bare machine.
        // *   pcfarm: heterogeneous computing.
        shared_ptr<string> computeType_ {};
        // The description of the image.
        shared_ptr<string> description_ {};
        // The mappings between disks and snapshots in the image.
        shared_ptr<Image::DiskDeviceMappings> diskDeviceMappings_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The size of the image. Unit: GiB.
        shared_ptr<string> imageSize_ {};
        // The version of the image.
        shared_ptr<string> imageVersion_ {};
        // The type of the image. Valid values: **centos**, **debian**, **ubuntu**, and **windows**.
        shared_ptr<string> OSName_ {};
        // The type of the operating system.
        shared_ptr<string> OSType_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
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
        && this->images_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeImageInfosResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeImageInfosResponseBody::Images & getImages() const { DARABONBA_PTR_GET_CONST(images_, DescribeImageInfosResponseBody::Images) };
    inline DescribeImageInfosResponseBody::Images getImages() { DARABONBA_PTR_GET(images_, DescribeImageInfosResponseBody::Images) };
    inline DescribeImageInfosResponseBody& setImages(const DescribeImageInfosResponseBody::Images & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeImageInfosResponseBody& setImages(DescribeImageInfosResponseBody::Images && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The information about images.
    shared_ptr<DescribeImageInfosResponseBody::Images> images_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
