// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageFromFamilyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFromFamilyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFromFamilyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageFromFamilyResponseBody() = default ;
    DescribeImageFromFamilyResponseBody(const DescribeImageFromFamilyResponseBody &) = default ;
    DescribeImageFromFamilyResponseBody(DescribeImageFromFamilyResponseBody &&) = default ;
    DescribeImageFromFamilyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFromFamilyResponseBody() = default ;
    DescribeImageFromFamilyResponseBody& operator=(const DescribeImageFromFamilyResponseBody &) = default ;
    DescribeImageFromFamilyResponseBody& operator=(DescribeImageFromFamilyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Image : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Image& obj) { 
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
        DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_TO_JSON(IsCopied, isCopied_);
        DARABONBA_PTR_TO_JSON(IsSelfShared, isSelfShared_);
        DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
        DARABONBA_PTR_TO_JSON(IsSupportCloudinit, isSupportCloudinit_);
        DARABONBA_PTR_TO_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
        DARABONBA_PTR_TO_JSON(OSName, OSName_);
        DARABONBA_PTR_TO_JSON(OSType, OSType_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Image& obj) { 
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
        DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_FROM_JSON(IsCopied, isCopied_);
        DARABONBA_PTR_FROM_JSON(IsSelfShared, isSelfShared_);
        DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
        DARABONBA_PTR_FROM_JSON(IsSupportCloudinit, isSupportCloudinit_);
        DARABONBA_PTR_FROM_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
        DARABONBA_PTR_FROM_JSON(OSName, OSName_);
        DARABONBA_PTR_FROM_JSON(OSType, OSType_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
        class Tag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tag& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tag& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tag() = default ;
          Tag(const Tag &) = default ;
          Tag(Tag &&) = default ;
          Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tag() = default ;
          Tag& operator=(const Tag &) = default ;
          Tag& operator=(Tag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key of the custom image.
          shared_ptr<string> tagKey_ {};
          // The tag value of the custom image.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->tag_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
        inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
        inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      protected:
        shared_ptr<vector<Tags::Tag>> tag_ {};
      };

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
            DARABONBA_PTR_TO_JSON(Device, device_);
            DARABONBA_PTR_TO_JSON(Format, format_);
            DARABONBA_PTR_TO_JSON(ImportOSSBucket, importOSSBucket_);
            DARABONBA_PTR_TO_JSON(ImportOSSObject, importOSSObject_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
            DARABONBA_PTR_FROM_JSON(Device, device_);
            DARABONBA_PTR_FROM_JSON(Format, format_);
            DARABONBA_PTR_FROM_JSON(ImportOSSBucket, importOSSBucket_);
            DARABONBA_PTR_FROM_JSON(ImportOSSObject, importOSSObject_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
          virtual bool empty() const override { return this->device_ == nullptr
        && this->format_ == nullptr && this->importOSSBucket_ == nullptr && this->importOSSObject_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr
        && this->type_ == nullptr; };
          // device Field Functions 
          bool hasDevice() const { return this->device_ != nullptr;};
          void deleteDevice() { this->device_ = nullptr;};
          inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
          inline DiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline DiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // importOSSBucket Field Functions 
          bool hasImportOSSBucket() const { return this->importOSSBucket_ != nullptr;};
          void deleteImportOSSBucket() { this->importOSSBucket_ = nullptr;};
          inline string getImportOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(importOSSBucket_, "") };
          inline DiskDeviceMapping& setImportOSSBucket(string importOSSBucket) { DARABONBA_PTR_SET_VALUE(importOSSBucket_, importOSSBucket) };


          // importOSSObject Field Functions 
          bool hasImportOSSObject() const { return this->importOSSObject_ != nullptr;};
          void deleteImportOSSObject() { this->importOSSObject_ = nullptr;};
          inline string getImportOSSObject() const { DARABONBA_PTR_GET_DEFAULT(importOSSObject_, "") };
          inline DiskDeviceMapping& setImportOSSObject(string importOSSObject) { DARABONBA_PTR_SET_VALUE(importOSSObject_, importOSSObject) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
          inline DiskDeviceMapping& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // snapshotId Field Functions 
          bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
          void deleteSnapshotId() { this->snapshotId_ = nullptr;};
          inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
          inline DiskDeviceMapping& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DiskDeviceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The device name of the disk. Example: /dev/xvdb.
          // 
          // >  This parameter will be removed in the future. To ensure compatibility, we recommend that you use other parameters.
          shared_ptr<string> device_ {};
          // The image format.
          shared_ptr<string> format_ {};
          // The OSS bucket that contains the imported image file.
          shared_ptr<string> importOSSBucket_ {};
          // The OSS object to which the imported image belongs.
          shared_ptr<string> importOSSObject_ {};
          // The size of the disk. Unit: GiB.
          shared_ptr<string> size_ {};
          // The snapshot ID.
          shared_ptr<string> snapshotId_ {};
          // The image type.
          shared_ptr<string> type_ {};
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
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->diskDeviceMappings_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageOwnerAlias_ == nullptr && this->imageVersion_ == nullptr && this->isCopied_ == nullptr && this->isSelfShared_ == nullptr
        && this->isSubscribed_ == nullptr && this->isSupportCloudinit_ == nullptr && this->isSupportIoOptimized_ == nullptr && this->OSName_ == nullptr && this->OSType_ == nullptr
        && this->platform_ == nullptr && this->productCode_ == nullptr && this->progress_ == nullptr && this->size_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->usage_ == nullptr; };
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


      // imageFamily Field Functions 
      bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
      void deleteImageFamily() { this->imageFamily_ = nullptr;};
      inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
      inline Image& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


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


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline Image& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // isCopied Field Functions 
      bool hasIsCopied() const { return this->isCopied_ != nullptr;};
      void deleteIsCopied() { this->isCopied_ = nullptr;};
      inline bool getIsCopied() const { DARABONBA_PTR_GET_DEFAULT(isCopied_, false) };
      inline Image& setIsCopied(bool isCopied) { DARABONBA_PTR_SET_VALUE(isCopied_, isCopied) };


      // isSelfShared Field Functions 
      bool hasIsSelfShared() const { return this->isSelfShared_ != nullptr;};
      void deleteIsSelfShared() { this->isSelfShared_ = nullptr;};
      inline string getIsSelfShared() const { DARABONBA_PTR_GET_DEFAULT(isSelfShared_, "") };
      inline Image& setIsSelfShared(string isSelfShared) { DARABONBA_PTR_SET_VALUE(isSelfShared_, isSelfShared) };


      // isSubscribed Field Functions 
      bool hasIsSubscribed() const { return this->isSubscribed_ != nullptr;};
      void deleteIsSubscribed() { this->isSubscribed_ = nullptr;};
      inline bool getIsSubscribed() const { DARABONBA_PTR_GET_DEFAULT(isSubscribed_, false) };
      inline Image& setIsSubscribed(bool isSubscribed) { DARABONBA_PTR_SET_VALUE(isSubscribed_, isSubscribed) };


      // isSupportCloudinit Field Functions 
      bool hasIsSupportCloudinit() const { return this->isSupportCloudinit_ != nullptr;};
      void deleteIsSupportCloudinit() { this->isSupportCloudinit_ = nullptr;};
      inline bool getIsSupportCloudinit() const { DARABONBA_PTR_GET_DEFAULT(isSupportCloudinit_, false) };
      inline Image& setIsSupportCloudinit(bool isSupportCloudinit) { DARABONBA_PTR_SET_VALUE(isSupportCloudinit_, isSupportCloudinit) };


      // isSupportIoOptimized Field Functions 
      bool hasIsSupportIoOptimized() const { return this->isSupportIoOptimized_ != nullptr;};
      void deleteIsSupportIoOptimized() { this->isSupportIoOptimized_ = nullptr;};
      inline bool getIsSupportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(isSupportIoOptimized_, false) };
      inline Image& setIsSupportIoOptimized(bool isSupportIoOptimized) { DARABONBA_PTR_SET_VALUE(isSupportIoOptimized_, isSupportIoOptimized) };


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


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Image& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Image& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Image& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Image& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Image& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const Image::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Image::Tags) };
      inline Image::Tags getTags() { DARABONBA_PTR_GET(tags_, Image::Tags) };
      inline Image& setTags(const Image::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Image& setTags(Image::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Image& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The architecture of the image. Valid values:
      // 
      // *   i386
      // *   x86_64
      shared_ptr<string> architecture_ {};
      // The time when the image was created.
      shared_ptr<string> creationTime_ {};
      // The description of the volume.
      shared_ptr<string> description_ {};
      // The mappings between the disk and the snapshot in the image.
      shared_ptr<Image::DiskDeviceMappings> diskDeviceMappings_ {};
      // The name of the image family.
      shared_ptr<string> imageFamily_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The name of the image.
      shared_ptr<string> imageName_ {};
      // The alias of the image owner. Valid values:
      // 
      // *   system: public images provided by Alibaba Cloud
      // *   self: your custom images
      // *   others: shared images from other Alibaba Cloud accounts
      // *   marketplace: Alibaba Cloud Marketplace images
      shared_ptr<string> imageOwnerAlias_ {};
      // The image version.
      shared_ptr<string> imageVersion_ {};
      // Indicates whether the image is a copy of another image.
      shared_ptr<bool> isCopied_ {};
      // Indicates whether the custom image was shared to other Alibaba Cloud accounts.
      shared_ptr<string> isSelfShared_ {};
      // Indicates whether you have subscribed to the service terms of the image product corresponding to the image product code.
      shared_ptr<bool> isSubscribed_ {};
      // Indicates whether cloud-init is supported.
      shared_ptr<bool> isSupportCloudinit_ {};
      // Indicates whether the image can be used on I/O optimized instances.
      shared_ptr<bool> isSupportIoOptimized_ {};
      // The display name of the operating system in Chinese.
      shared_ptr<string> OSName_ {};
      // The type of the operating system. Valid values:
      // 
      // *   windows
      // *   linux
      shared_ptr<string> OSType_ {};
      // The operating system.
      shared_ptr<string> platform_ {};
      // The product code of the Alibaba Cloud Marketplace image.
      shared_ptr<string> productCode_ {};
      // The image creation progress in percentage.
      shared_ptr<string> progress_ {};
      // The size of the image. Unit: GiB.
      shared_ptr<int32_t> size_ {};
      // The state of the image. Valid values:
      // 
      // *   UnAvailable
      // *   Available
      // *   Creating
      // *   CreateFailed
      shared_ptr<string> status_ {};
      // The tags of the image.
      shared_ptr<Image::Tags> tags_ {};
      // Indicates whether the image has been used to create ECS instances. Valid values:
      // 
      // *   instance: The image was used to create one or more ECS instances.
      // *   none: The image was not used to create ECS instances.
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->image_ == nullptr
        && this->requestId_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const DescribeImageFromFamilyResponseBody::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, DescribeImageFromFamilyResponseBody::Image) };
    inline DescribeImageFromFamilyResponseBody::Image getImage() { DARABONBA_PTR_GET(image_, DescribeImageFromFamilyResponseBody::Image) };
    inline DescribeImageFromFamilyResponseBody& setImage(const DescribeImageFromFamilyResponseBody::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline DescribeImageFromFamilyResponseBody& setImage(DescribeImageFromFamilyResponseBody::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageFromFamilyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image information.
    shared_ptr<DescribeImageFromFamilyResponseBody::Image> image_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
