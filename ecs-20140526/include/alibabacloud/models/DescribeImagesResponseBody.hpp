// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
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
  class DescribeImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
          DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DetectionOptions, detectionOptions_);
          DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_TO_JSON(ImageOwnerId, imageOwnerId_);
          DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_TO_JSON(IsCopied, isCopied_);
          DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
          DARABONBA_PTR_TO_JSON(IsSelfShared, isSelfShared_);
          DARABONBA_PTR_TO_JSON(IsSubscribed, isSubscribed_);
          DARABONBA_PTR_TO_JSON(IsSupportCloudinit, isSupportCloudinit_);
          DARABONBA_PTR_TO_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
          DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
          DARABONBA_PTR_TO_JSON(LoginAsNonRootSupported, loginAsNonRootSupported_);
          DARABONBA_PTR_TO_JSON(OSName, OSName_);
          DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
          DARABONBA_PTR_TO_JSON(OSType, OSType_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
          DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DetectionOptions, detectionOptions_);
          DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
          DARABONBA_PTR_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_FROM_JSON(ImageOwnerId, imageOwnerId_);
          DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_FROM_JSON(IsCopied, isCopied_);
          DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
          DARABONBA_PTR_FROM_JSON(IsSelfShared, isSelfShared_);
          DARABONBA_PTR_FROM_JSON(IsSubscribed, isSubscribed_);
          DARABONBA_PTR_FROM_JSON(IsSupportCloudinit, isSupportCloudinit_);
          DARABONBA_PTR_FROM_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
          DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
          DARABONBA_PTR_FROM_JSON(LoginAsNonRootSupported, loginAsNonRootSupported_);
          DARABONBA_PTR_FROM_JSON(OSName, OSName_);
          DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
          DARABONBA_PTR_FROM_JSON(OSType, OSType_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
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
            // The tag key of the image.
            shared_ptr<string> tagKey_ {};
            // The tag value of the image.
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

        class Features : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Features& obj) { 
            DARABONBA_PTR_TO_JSON(CpuOnlineDowngrade, cpuOnlineDowngrade_);
            DARABONBA_PTR_TO_JSON(CpuOnlineUpgrade, cpuOnlineUpgrade_);
            DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
            DARABONBA_PTR_TO_JSON(MemoryOnlineDowngrade, memoryOnlineDowngrade_);
            DARABONBA_PTR_TO_JSON(MemoryOnlineUpgrade, memoryOnlineUpgrade_);
            DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
          };
          friend void from_json(const Darabonba::Json& j, Features& obj) { 
            DARABONBA_PTR_FROM_JSON(CpuOnlineDowngrade, cpuOnlineDowngrade_);
            DARABONBA_PTR_FROM_JSON(CpuOnlineUpgrade, cpuOnlineUpgrade_);
            DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
            DARABONBA_PTR_FROM_JSON(MemoryOnlineDowngrade, memoryOnlineDowngrade_);
            DARABONBA_PTR_FROM_JSON(MemoryOnlineUpgrade, memoryOnlineUpgrade_);
            DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
          };
          Features() = default ;
          Features(const Features &) = default ;
          Features(Features &&) = default ;
          Features(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Features() = default ;
          Features& operator=(const Features &) = default ;
          Features& operator=(Features &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cpuOnlineDowngrade_ == nullptr
        && this->cpuOnlineUpgrade_ == nullptr && this->imdsSupport_ == nullptr && this->memoryOnlineDowngrade_ == nullptr && this->memoryOnlineUpgrade_ == nullptr && this->nvmeSupport_ == nullptr; };
          // cpuOnlineDowngrade Field Functions 
          bool hasCpuOnlineDowngrade() const { return this->cpuOnlineDowngrade_ != nullptr;};
          void deleteCpuOnlineDowngrade() { this->cpuOnlineDowngrade_ = nullptr;};
          inline string getCpuOnlineDowngrade() const { DARABONBA_PTR_GET_DEFAULT(cpuOnlineDowngrade_, "") };
          inline Features& setCpuOnlineDowngrade(string cpuOnlineDowngrade) { DARABONBA_PTR_SET_VALUE(cpuOnlineDowngrade_, cpuOnlineDowngrade) };


          // cpuOnlineUpgrade Field Functions 
          bool hasCpuOnlineUpgrade() const { return this->cpuOnlineUpgrade_ != nullptr;};
          void deleteCpuOnlineUpgrade() { this->cpuOnlineUpgrade_ = nullptr;};
          inline string getCpuOnlineUpgrade() const { DARABONBA_PTR_GET_DEFAULT(cpuOnlineUpgrade_, "") };
          inline Features& setCpuOnlineUpgrade(string cpuOnlineUpgrade) { DARABONBA_PTR_SET_VALUE(cpuOnlineUpgrade_, cpuOnlineUpgrade) };


          // imdsSupport Field Functions 
          bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
          void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
          inline string getImdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
          inline Features& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


          // memoryOnlineDowngrade Field Functions 
          bool hasMemoryOnlineDowngrade() const { return this->memoryOnlineDowngrade_ != nullptr;};
          void deleteMemoryOnlineDowngrade() { this->memoryOnlineDowngrade_ = nullptr;};
          inline string getMemoryOnlineDowngrade() const { DARABONBA_PTR_GET_DEFAULT(memoryOnlineDowngrade_, "") };
          inline Features& setMemoryOnlineDowngrade(string memoryOnlineDowngrade) { DARABONBA_PTR_SET_VALUE(memoryOnlineDowngrade_, memoryOnlineDowngrade) };


          // memoryOnlineUpgrade Field Functions 
          bool hasMemoryOnlineUpgrade() const { return this->memoryOnlineUpgrade_ != nullptr;};
          void deleteMemoryOnlineUpgrade() { this->memoryOnlineUpgrade_ = nullptr;};
          inline string getMemoryOnlineUpgrade() const { DARABONBA_PTR_GET_DEFAULT(memoryOnlineUpgrade_, "") };
          inline Features& setMemoryOnlineUpgrade(string memoryOnlineUpgrade) { DARABONBA_PTR_SET_VALUE(memoryOnlineUpgrade_, memoryOnlineUpgrade) };


          // nvmeSupport Field Functions 
          bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
          void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
          inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
          inline Features& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


        protected:
          shared_ptr<string> cpuOnlineDowngrade_ {};
          shared_ptr<string> cpuOnlineUpgrade_ {};
          // The image metadata access mode. Valid values:
          // 
          // *   v1: You cannot set the image metadata access mode to security hardening when you create instances from the image.
          // *   v2: You can set the image metadata access mode to security hardening when you create instances from the image.
          // 
          // [Overview of instance metadata](https://help.aliyun.com/document_detail/108460.html).
          shared_ptr<string> imdsSupport_ {};
          shared_ptr<string> memoryOnlineDowngrade_ {};
          shared_ptr<string> memoryOnlineUpgrade_ {};
          // Indicates whether the image supports the Non-Volatile Memory Express (NVMe) protocol. Valid values:
          // 
          // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
          // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
          shared_ptr<string> nvmeSupport_ {};
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
              DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(ImportOSSBucket, importOSSBucket_);
              DARABONBA_PTR_TO_JSON(ImportOSSObject, importOSSObject_);
              DARABONBA_PTR_TO_JSON(Progress, progress_);
              DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
              DARABONBA_PTR_FROM_JSON(Device, device_);
              DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(ImportOSSBucket, importOSSBucket_);
              DARABONBA_PTR_FROM_JSON(ImportOSSObject, importOSSObject_);
              DARABONBA_PTR_FROM_JSON(Progress, progress_);
              DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
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
        && this->encrypted_ == nullptr && this->format_ == nullptr && this->importOSSBucket_ == nullptr && this->importOSSObject_ == nullptr && this->progress_ == nullptr
        && this->remainTime_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr && this->type_ == nullptr; };
            // device Field Functions 
            bool hasDevice() const { return this->device_ != nullptr;};
            void deleteDevice() { this->device_ = nullptr;};
            inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
            inline DiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


            // encrypted Field Functions 
            bool hasEncrypted() const { return this->encrypted_ != nullptr;};
            void deleteEncrypted() { this->encrypted_ = nullptr;};
            inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
            inline DiskDeviceMapping& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


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


            // progress Field Functions 
            bool hasProgress() const { return this->progress_ != nullptr;};
            void deleteProgress() { this->progress_ = nullptr;};
            inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
            inline DiskDeviceMapping& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


            // remainTime Field Functions 
            bool hasRemainTime() const { return this->remainTime_ != nullptr;};
            void deleteRemainTime() { this->remainTime_ = nullptr;};
            inline int32_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
            inline DiskDeviceMapping& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


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
            shared_ptr<string> device_ {};
            // >  This parameter is in invitational preview.
            shared_ptr<bool> encrypted_ {};
            // The format of the image.
            shared_ptr<string> format_ {};
            // The Object Storage Service (OSS) bucket that contains the imported image file.
            shared_ptr<string> importOSSBucket_ {};
            // The OSS object that corresponds to the imported image file.
            shared_ptr<string> importOSSObject_ {};
            // The progress of the image copy task.
            shared_ptr<string> progress_ {};
            // The remaining time of the image copy task. Unit: seconds.
            shared_ptr<int32_t> remainTime_ {};
            // The size of the disk. Unit: GiB.
            shared_ptr<string> size_ {};
            // The ID of the snapshot.
            shared_ptr<string> snapshotId_ {};
            // The type of the image.
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

        class DetectionOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetectionOptions& obj) { 
            DARABONBA_PTR_TO_JSON(Items, items_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DetectionOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(Items, items_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DetectionOptions() = default ;
          DetectionOptions(const DetectionOptions &) = default ;
          DetectionOptions(DetectionOptions &&) = default ;
          DetectionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetectionOptions() = default ;
          DetectionOptions& operator=(const DetectionOptions &) = default ;
          DetectionOptions& operator=(DetectionOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(Item, item_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(Item, item_);
            };
            Items() = default ;
            Items(const Items &) = default ;
            Items(Items &&) = default ;
            Items(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Items() = default ;
            Items& operator=(const Items &) = default ;
            Items& operator=(Items &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Item : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Item& obj) { 
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
                DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Item& obj) { 
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
                DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Item() = default ;
              Item(const Item &) = default ;
              Item(Item &&) = default ;
              Item(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Item() = default ;
              Item& operator=(const Item &) = default ;
              Item& operator=(Item &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->name_ == nullptr
        && this->riskCode_ == nullptr && this->riskLevel_ == nullptr && this->value_ == nullptr; };
              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // riskCode Field Functions 
              bool hasRiskCode() const { return this->riskCode_ != nullptr;};
              void deleteRiskCode() { this->riskCode_ = nullptr;};
              inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
              inline Item& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


              // riskLevel Field Functions 
              bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
              void deleteRiskLevel() { this->riskLevel_ = nullptr;};
              inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
              inline Item& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Item& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The name of the check item.
              shared_ptr<string> name_ {};
              // The risk that the check item may have.
              shared_ptr<string> riskCode_ {};
              // The severity of the risk that the check item of the imported custom image has. If the check item is at risk, this parameter is returned. If the check item is not at risk, this parameter is not returned.
              // 
              // Valid values:
              // 
              // *   High: The check item is a high-risk item that may affect the startup of the instance. We recommend that you handle the risk.
              // *   Medium: The check item is a medium-risk item that may affect the startup performance or configurations of the instance. We recommend that you handle the risk.
              shared_ptr<string> riskLevel_ {};
              // The result of the check item.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->item_ == nullptr; };
            // item Field Functions 
            bool hasItem() const { return this->item_ != nullptr;};
            void deleteItem() { this->item_ = nullptr;};
            inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
            inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
            inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
            inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


          protected:
            shared_ptr<vector<Items::Item>> item_ {};
          };

          virtual bool empty() const override { return this->items_ == nullptr
        && this->status_ == nullptr; };
          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const DetectionOptions::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DetectionOptions::Items) };
          inline DetectionOptions::Items getItems() { DARABONBA_PTR_GET(items_, DetectionOptions::Items) };
          inline DetectionOptions& setItems(const DetectionOptions::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline DetectionOptions& setItems(DetectionOptions::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DetectionOptions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The check items.
          shared_ptr<DetectionOptions::Items> items_ {};
          // The state of the image check task. Valid values:
          // 
          // *   Processing
          // *   Finished
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->architecture_ == nullptr
        && this->bootMode_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->detectionOptions_ == nullptr && this->diskDeviceMappings_ == nullptr
        && this->features_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageOwnerAlias_ == nullptr
        && this->imageOwnerId_ == nullptr && this->imageVersion_ == nullptr && this->isCopied_ == nullptr && this->isPublic_ == nullptr && this->isSelfShared_ == nullptr
        && this->isSubscribed_ == nullptr && this->isSupportCloudinit_ == nullptr && this->isSupportIoOptimized_ == nullptr && this->licenseType_ == nullptr && this->loginAsNonRootSupported_ == nullptr
        && this->OSName_ == nullptr && this->OSNameEn_ == nullptr && this->OSType_ == nullptr && this->platform_ == nullptr && this->productCode_ == nullptr
        && this->progress_ == nullptr && this->resourceGroupId_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr
        && this->tags_ == nullptr && this->usage_ == nullptr; };
        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline Image& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


        // bootMode Field Functions 
        bool hasBootMode() const { return this->bootMode_ != nullptr;};
        void deleteBootMode() { this->bootMode_ = nullptr;};
        inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
        inline Image& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


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


        // detectionOptions Field Functions 
        bool hasDetectionOptions() const { return this->detectionOptions_ != nullptr;};
        void deleteDetectionOptions() { this->detectionOptions_ = nullptr;};
        inline const Image::DetectionOptions & getDetectionOptions() const { DARABONBA_PTR_GET_CONST(detectionOptions_, Image::DetectionOptions) };
        inline Image::DetectionOptions getDetectionOptions() { DARABONBA_PTR_GET(detectionOptions_, Image::DetectionOptions) };
        inline Image& setDetectionOptions(const Image::DetectionOptions & detectionOptions) { DARABONBA_PTR_SET_VALUE(detectionOptions_, detectionOptions) };
        inline Image& setDetectionOptions(Image::DetectionOptions && detectionOptions) { DARABONBA_PTR_SET_RVALUE(detectionOptions_, detectionOptions) };


        // diskDeviceMappings Field Functions 
        bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
        void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
        inline const Image::DiskDeviceMappings & getDiskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Image::DiskDeviceMappings) };
        inline Image::DiskDeviceMappings getDiskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Image::DiskDeviceMappings) };
        inline Image& setDiskDeviceMappings(const Image::DiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
        inline Image& setDiskDeviceMappings(Image::DiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline const Image::Features & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, Image::Features) };
        inline Image::Features getFeatures() { DARABONBA_PTR_GET(features_, Image::Features) };
        inline Image& setFeatures(const Image::Features & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
        inline Image& setFeatures(Image::Features && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


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


        // imageOwnerId Field Functions 
        bool hasImageOwnerId() const { return this->imageOwnerId_ != nullptr;};
        void deleteImageOwnerId() { this->imageOwnerId_ = nullptr;};
        inline int64_t getImageOwnerId() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerId_, 0L) };
        inline Image& setImageOwnerId(int64_t imageOwnerId) { DARABONBA_PTR_SET_VALUE(imageOwnerId_, imageOwnerId) };


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


        // isPublic Field Functions 
        bool hasIsPublic() const { return this->isPublic_ != nullptr;};
        void deleteIsPublic() { this->isPublic_ = nullptr;};
        inline bool getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
        inline Image& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


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


        // licenseType Field Functions 
        bool hasLicenseType() const { return this->licenseType_ != nullptr;};
        void deleteLicenseType() { this->licenseType_ = nullptr;};
        inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
        inline Image& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


        // loginAsNonRootSupported Field Functions 
        bool hasLoginAsNonRootSupported() const { return this->loginAsNonRootSupported_ != nullptr;};
        void deleteLoginAsNonRootSupported() { this->loginAsNonRootSupported_ = nullptr;};
        inline bool getLoginAsNonRootSupported() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRootSupported_, false) };
        inline Image& setLoginAsNonRootSupported(bool loginAsNonRootSupported) { DARABONBA_PTR_SET_VALUE(loginAsNonRootSupported_, loginAsNonRootSupported) };


        // OSName Field Functions 
        bool hasOSName() const { return this->OSName_ != nullptr;};
        void deleteOSName() { this->OSName_ = nullptr;};
        inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
        inline Image& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


        // OSNameEn Field Functions 
        bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
        void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
        inline string getOSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
        inline Image& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


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


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Image& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


        // supplierName Field Functions 
        bool hasSupplierName() const { return this->supplierName_ != nullptr;};
        void deleteSupplierName() { this->supplierName_ = nullptr;};
        inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
        inline Image& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


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
        // *   arm64
        shared_ptr<string> architecture_ {};
        // The boot mode of the image. Valid values:
        // 
        // *   BIOS: Basic Input/Output System (BIOS)
        // *   UEFI: Unified Extensible Firmware Interface (UEFI)
        // *   UEFI-Preferred: BIOS and UEFI
        // 
        // For information about the image boot modes, see [Image boot modes](~~2244655#b9caa9b8bb1wf~~).
        shared_ptr<string> bootMode_ {};
        // The time when the image was created.
        shared_ptr<string> creationTime_ {};
        // The description of the image.
        shared_ptr<string> description_ {};
        // Details about the check performed on the image.
        shared_ptr<Image::DetectionOptions> detectionOptions_ {};
        // The mappings between disks and snapshots in the image.
        shared_ptr<Image::DiskDeviceMappings> diskDeviceMappings_ {};
        // The feature attributes of the image.
        shared_ptr<Image::Features> features_ {};
        // The name of the image family.
        shared_ptr<string> imageFamily_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The name of the image.
        shared_ptr<string> imageName_ {};
        // The source of the image. Valid values:
        // 
        // *   system: a public image provided by Alibaba Cloud
        // *   self: a custom image that you created
        // *   others: a shared image from another Alibaba Cloud account or a community image published by another Alibaba Cloud account
        // *   marketplace: an Alibaba Cloud Marketplace image
        shared_ptr<string> imageOwnerAlias_ {};
        // The ID of the Alibaba Cloud account to which the image belongs. This parameter takes effect only if you query shared images or community images.
        shared_ptr<int64_t> imageOwnerId_ {};
        // The version of the image.
        shared_ptr<string> imageVersion_ {};
        // Indicates whether the image is a copy of another image.
        shared_ptr<bool> isCopied_ {};
        // Indicates whether the image is publicly available. Publicly available images include public images provided by Alibaba Cloud and custom images published as community images. Valid values:
        // 
        // *   true: The image is publicly available.
        // *   false: The image is publicly unavailable.
        shared_ptr<bool> isPublic_ {};
        // Indicates whether the custom image was shared to other Alibaba Cloud accounts.
        shared_ptr<string> isSelfShared_ {};
        // Indicates whether you accepted the Terms of Service of the image service that corresponds to the product code.
        shared_ptr<bool> isSubscribed_ {};
        // Indicates whether the image supports cloud-init.
        shared_ptr<bool> isSupportCloudinit_ {};
        // Indicates whether the image can be used on I/O optimized instances.
        shared_ptr<bool> isSupportIoOptimized_ {};
        shared_ptr<string> licenseType_ {};
        // Indicates whether the image supports logons of non-root users. Valid values:
        // 
        // *   true: The image supports logons of non-root users.
        // *   false: The image does not support logons of non-root users.
        shared_ptr<bool> loginAsNonRootSupported_ {};
        // The display name of the operating system in Chinese.
        shared_ptr<string> OSName_ {};
        // The display name of the operating system in English.
        shared_ptr<string> OSNameEn_ {};
        // The type of the operating system. Valid values:
        // 
        // *   windows
        // *   linux
        shared_ptr<string> OSType_ {};
        // The operating system platform.
        shared_ptr<string> platform_ {};
        // The Alibaba Cloud Marketplace product code of the image.
        shared_ptr<string> productCode_ {};
        // The creation progress of the image. Unit: percent (%).
        shared_ptr<string> progress_ {};
        // The ID of the resource group to which the image belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The size of the image. Unit: GiB.
        // 
        // >  If the image contains data disk snapshots, this parameter indicates only the size of the system disk snapshot contained in the image.
        shared_ptr<int32_t> size_ {};
        // The state of the image. Valid values:
        // 
        // *   UnAvailable: The image is unavailable.
        // *   Available: The image is available.
        // *   Creating: The image is being created.
        // *   CreateFailed: The image failed to be created.
        shared_ptr<string> status_ {};
        // The name of the supplier that published the community image.
        shared_ptr<string> supplierName_ {};
        // The tags of the image.
        shared_ptr<Image::Tags> tags_ {};
        // Indicates whether the image was used to create ECS instances. Valid values:
        // 
        // *   instance: The image was used to create one or more ECS instances.
        // *   none: The image was not used to create ECS instances.
        shared_ptr<string> usage_ {};
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

    virtual bool empty() const override { return this->images_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImagesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // The information of the images.
    shared_ptr<DescribeImagesResponseBody::Images> images_ {};
    // The page number returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the image.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of images.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
