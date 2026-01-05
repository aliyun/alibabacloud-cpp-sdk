// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODY_HPP_
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
  class DescribeImagePipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipeline, imagePipeline_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipeline, imagePipeline_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImagePipelinesResponseBody() = default ;
    DescribeImagePipelinesResponseBody(const DescribeImagePipelinesResponseBody &) = default ;
    DescribeImagePipelinesResponseBody(DescribeImagePipelinesResponseBody &&) = default ;
    DescribeImagePipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBody() = default ;
    DescribeImagePipelinesResponseBody& operator=(const DescribeImagePipelinesResponseBody &) = default ;
    DescribeImagePipelinesResponseBody& operator=(DescribeImagePipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImagePipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImagePipeline& obj) { 
        DARABONBA_PTR_TO_JSON(ImagePipelineSet, imagePipelineSet_);
      };
      friend void from_json(const Darabonba::Json& j, ImagePipeline& obj) { 
        DARABONBA_PTR_FROM_JSON(ImagePipelineSet, imagePipelineSet_);
      };
      ImagePipeline() = default ;
      ImagePipeline(const ImagePipeline &) = default ;
      ImagePipeline(ImagePipeline &&) = default ;
      ImagePipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImagePipeline() = default ;
      ImagePipeline& operator=(const ImagePipeline &) = default ;
      ImagePipeline& operator=(ImagePipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImagePipelineSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImagePipelineSet& obj) { 
          DARABONBA_PTR_TO_JSON(AddAccounts, addAccounts_);
          DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
          DARABONBA_PTR_TO_JSON(BaseImage, baseImage_);
          DARABONBA_PTR_TO_JSON(BaseImageType, baseImageType_);
          DARABONBA_PTR_TO_JSON(BuildContent, buildContent_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
          DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
          DARABONBA_PTR_TO_JSON(ImportImageOptions, importImageOptions_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
          DARABONBA_PTR_TO_JSON(RepairMode, repairMode_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TestContent, testContent_);
          DARABONBA_PTR_TO_JSON(ToRegionIds, toRegionIds_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, ImagePipelineSet& obj) { 
          DARABONBA_PTR_FROM_JSON(AddAccounts, addAccounts_);
          DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
          DARABONBA_PTR_FROM_JSON(BaseImage, baseImage_);
          DARABONBA_PTR_FROM_JSON(BaseImageType, baseImageType_);
          DARABONBA_PTR_FROM_JSON(BuildContent, buildContent_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
          DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
          DARABONBA_PTR_FROM_JSON(ImportImageOptions, importImageOptions_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
          DARABONBA_PTR_FROM_JSON(RepairMode, repairMode_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
          DARABONBA_PTR_FROM_JSON(ToRegionIds, toRegionIds_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        ImagePipelineSet() = default ;
        ImagePipelineSet(const ImagePipelineSet &) = default ;
        ImagePipelineSet(ImagePipelineSet &&) = default ;
        ImagePipelineSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImagePipelineSet() = default ;
        ImagePipelineSet& operator=(const ImagePipelineSet &) = default ;
        ImagePipelineSet& operator=(ImagePipelineSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ToRegionIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ToRegionIds& obj) { 
            DARABONBA_PTR_TO_JSON(ToRegionId, toRegionId_);
          };
          friend void from_json(const Darabonba::Json& j, ToRegionIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ToRegionId, toRegionId_);
          };
          ToRegionIds() = default ;
          ToRegionIds(const ToRegionIds &) = default ;
          ToRegionIds(ToRegionIds &&) = default ;
          ToRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ToRegionIds() = default ;
          ToRegionIds& operator=(const ToRegionIds &) = default ;
          ToRegionIds& operator=(ToRegionIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->toRegionId_ == nullptr; };
          // toRegionId Field Functions 
          bool hasToRegionId() const { return this->toRegionId_ != nullptr;};
          void deleteToRegionId() { this->toRegionId_ = nullptr;};
          inline const vector<string> & getToRegionId() const { DARABONBA_PTR_GET_CONST(toRegionId_, vector<string>) };
          inline vector<string> getToRegionId() { DARABONBA_PTR_GET(toRegionId_, vector<string>) };
          inline ToRegionIds& setToRegionId(const vector<string> & toRegionId) { DARABONBA_PTR_SET_VALUE(toRegionId_, toRegionId) };
          inline ToRegionIds& setToRegionId(vector<string> && toRegionId) { DARABONBA_PTR_SET_RVALUE(toRegionId_, toRegionId) };


        protected:
          shared_ptr<vector<string>> toRegionId_ {};
        };

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
            // The key of the tag.
            shared_ptr<string> tagKey_ {};
            // The value of the tag.
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

        class ImportImageOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImportImageOptions& obj) { 
            DARABONBA_PTR_TO_JSON(Architecture, architecture_);
            DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
            DARABONBA_PTR_TO_JSON(Features, features_);
            DARABONBA_PTR_TO_JSON(ImageName, imageName_);
            DARABONBA_PTR_TO_JSON(ImportImageTags, importImageTags_);
            DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
            DARABONBA_PTR_TO_JSON(OSType, OSType_);
            DARABONBA_PTR_TO_JSON(Platform, platform_);
            DARABONBA_PTR_TO_JSON(RetainImportedImage, retainImportedImage_);
            DARABONBA_PTR_TO_JSON(RetentionStrategy, retentionStrategy_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          };
          friend void from_json(const Darabonba::Json& j, ImportImageOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
            DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
            DARABONBA_PTR_FROM_JSON(Features, features_);
            DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
            DARABONBA_PTR_FROM_JSON(ImportImageTags, importImageTags_);
            DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
            DARABONBA_PTR_FROM_JSON(OSType, OSType_);
            DARABONBA_PTR_FROM_JSON(Platform, platform_);
            DARABONBA_PTR_FROM_JSON(RetainImportedImage, retainImportedImage_);
            DARABONBA_PTR_FROM_JSON(RetentionStrategy, retentionStrategy_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          };
          ImportImageOptions() = default ;
          ImportImageOptions(const ImportImageOptions &) = default ;
          ImportImageOptions(ImportImageOptions &&) = default ;
          ImportImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImportImageOptions() = default ;
          ImportImageOptions& operator=(const ImportImageOptions &) = default ;
          ImportImageOptions& operator=(ImportImageOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ImportImageTags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImportImageTags& obj) { 
              DARABONBA_PTR_TO_JSON(ImportImageTag, importImageTag_);
            };
            friend void from_json(const Darabonba::Json& j, ImportImageTags& obj) { 
              DARABONBA_PTR_FROM_JSON(ImportImageTag, importImageTag_);
            };
            ImportImageTags() = default ;
            ImportImageTags(const ImportImageTags &) = default ;
            ImportImageTags(ImportImageTags &&) = default ;
            ImportImageTags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImportImageTags() = default ;
            ImportImageTags& operator=(const ImportImageTags &) = default ;
            ImportImageTags& operator=(ImportImageTags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ImportImageTag : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ImportImageTag& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, ImportImageTag& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              ImportImageTag() = default ;
              ImportImageTag(const ImportImageTag &) = default ;
              ImportImageTag(ImportImageTag &&) = default ;
              ImportImageTag(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ImportImageTag() = default ;
              ImportImageTag& operator=(const ImportImageTag &) = default ;
              ImportImageTag& operator=(ImportImageTag &&) = default ;
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
              inline ImportImageTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline ImportImageTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              shared_ptr<string> key_ {};
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->importImageTag_ == nullptr; };
            // importImageTag Field Functions 
            bool hasImportImageTag() const { return this->importImageTag_ != nullptr;};
            void deleteImportImageTag() { this->importImageTag_ = nullptr;};
            inline const vector<ImportImageTags::ImportImageTag> & getImportImageTag() const { DARABONBA_PTR_GET_CONST(importImageTag_, vector<ImportImageTags::ImportImageTag>) };
            inline vector<ImportImageTags::ImportImageTag> getImportImageTag() { DARABONBA_PTR_GET(importImageTag_, vector<ImportImageTags::ImportImageTag>) };
            inline ImportImageTags& setImportImageTag(const vector<ImportImageTags::ImportImageTag> & importImageTag) { DARABONBA_PTR_SET_VALUE(importImageTag_, importImageTag) };
            inline ImportImageTags& setImportImageTag(vector<ImportImageTags::ImportImageTag> && importImageTag) { DARABONBA_PTR_SET_RVALUE(importImageTag_, importImageTag) };


          protected:
            shared_ptr<vector<ImportImageTags::ImportImageTag>> importImageTag_ {};
          };

          class Features : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Features& obj) { 
              DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
              DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
            };
            friend void from_json(const Darabonba::Json& j, Features& obj) { 
              DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
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
            virtual bool empty() const override { return this->imdsSupport_ == nullptr
        && this->nvmeSupport_ == nullptr; };
            // imdsSupport Field Functions 
            bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
            void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
            inline string getImdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
            inline Features& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


            // nvmeSupport Field Functions 
            bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
            void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
            inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
            inline Features& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


          protected:
            shared_ptr<string> imdsSupport_ {};
            // Indicates whether the image supports the NVMe protocol. Valid values:
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
                DARABONBA_PTR_TO_JSON(DiskImageSize, diskImageSize_);
                DARABONBA_PTR_TO_JSON(Format, format_);
                DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
                DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
              };
              friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
                DARABONBA_PTR_FROM_JSON(DiskImageSize, diskImageSize_);
                DARABONBA_PTR_FROM_JSON(Format, format_);
                DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
                DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
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
              virtual bool empty() const override { return this->diskImageSize_ == nullptr
        && this->format_ == nullptr && this->OSSBucket_ == nullptr && this->OSSObject_ == nullptr; };
              // diskImageSize Field Functions 
              bool hasDiskImageSize() const { return this->diskImageSize_ != nullptr;};
              void deleteDiskImageSize() { this->diskImageSize_ = nullptr;};
              inline int32_t getDiskImageSize() const { DARABONBA_PTR_GET_DEFAULT(diskImageSize_, 0) };
              inline DiskDeviceMapping& setDiskImageSize(int32_t diskImageSize) { DARABONBA_PTR_SET_VALUE(diskImageSize_, diskImageSize) };


              // format Field Functions 
              bool hasFormat() const { return this->format_ != nullptr;};
              void deleteFormat() { this->format_ = nullptr;};
              inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
              inline DiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


              // OSSBucket Field Functions 
              bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
              void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
              inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
              inline DiskDeviceMapping& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


              // OSSObject Field Functions 
              bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
              void deleteOSSObject() { this->OSSObject_ = nullptr;};
              inline string getOSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
              inline DiskDeviceMapping& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


            protected:
              // The size of disk N in the custom image after the image is imported.
              // 
              // You can use this parameter to specify the sizes of the system disk and data disks in the custom image. When you specify the size of the system disk, make sure that the specified size is greater than or equal to the size of the source image file. Unit: GiB. Valid values:
              // 
              // *   When N is set to 1, this parameter indicates the size of the system disk in the custom image. Valid values: 1 to 2048.
              // *   When N is set to an integer in the range of 2 to 17, this parameter indicates the size of a data disk in the custom image. Valid values: 1 to 2048.
              // 
              // After the image file is uploaded to an OSS bucket, you can view the size of the image file in the OSS bucket.
              shared_ptr<int32_t> diskImageSize_ {};
              // The format of the image. Valid values:
              // 
              // *   RAW
              // *   VHD
              // *   QCOW2
              shared_ptr<string> format_ {};
              // The Object Storage Service (OSS) bucket where the image file is stored.
              shared_ptr<string> OSSBucket_ {};
              // The name (key) of the object that the image file is stored as in the OSS bucket.
              shared_ptr<string> OSSObject_ {};
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
        && this->bootMode_ == nullptr && this->description_ == nullptr && this->diskDeviceMappings_ == nullptr && this->features_ == nullptr && this->imageName_ == nullptr
        && this->importImageTags_ == nullptr && this->licenseType_ == nullptr && this->OSType_ == nullptr && this->platform_ == nullptr && this->retainImportedImage_ == nullptr
        && this->retentionStrategy_ == nullptr && this->roleName_ == nullptr; };
          // architecture Field Functions 
          bool hasArchitecture() const { return this->architecture_ != nullptr;};
          void deleteArchitecture() { this->architecture_ = nullptr;};
          inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
          inline ImportImageOptions& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


          // bootMode Field Functions 
          bool hasBootMode() const { return this->bootMode_ != nullptr;};
          void deleteBootMode() { this->bootMode_ = nullptr;};
          inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
          inline ImportImageOptions& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ImportImageOptions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // diskDeviceMappings Field Functions 
          bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
          void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
          inline const ImportImageOptions::DiskDeviceMappings & getDiskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, ImportImageOptions::DiskDeviceMappings) };
          inline ImportImageOptions::DiskDeviceMappings getDiskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, ImportImageOptions::DiskDeviceMappings) };
          inline ImportImageOptions& setDiskDeviceMappings(const ImportImageOptions::DiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
          inline ImportImageOptions& setDiskDeviceMappings(ImportImageOptions::DiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


          // features Field Functions 
          bool hasFeatures() const { return this->features_ != nullptr;};
          void deleteFeatures() { this->features_ = nullptr;};
          inline const ImportImageOptions::Features & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, ImportImageOptions::Features) };
          inline ImportImageOptions::Features getFeatures() { DARABONBA_PTR_GET(features_, ImportImageOptions::Features) };
          inline ImportImageOptions& setFeatures(const ImportImageOptions::Features & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
          inline ImportImageOptions& setFeatures(ImportImageOptions::Features && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


          // imageName Field Functions 
          bool hasImageName() const { return this->imageName_ != nullptr;};
          void deleteImageName() { this->imageName_ = nullptr;};
          inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
          inline ImportImageOptions& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


          // importImageTags Field Functions 
          bool hasImportImageTags() const { return this->importImageTags_ != nullptr;};
          void deleteImportImageTags() { this->importImageTags_ = nullptr;};
          inline const ImportImageOptions::ImportImageTags & getImportImageTags() const { DARABONBA_PTR_GET_CONST(importImageTags_, ImportImageOptions::ImportImageTags) };
          inline ImportImageOptions::ImportImageTags getImportImageTags() { DARABONBA_PTR_GET(importImageTags_, ImportImageOptions::ImportImageTags) };
          inline ImportImageOptions& setImportImageTags(const ImportImageOptions::ImportImageTags & importImageTags) { DARABONBA_PTR_SET_VALUE(importImageTags_, importImageTags) };
          inline ImportImageOptions& setImportImageTags(ImportImageOptions::ImportImageTags && importImageTags) { DARABONBA_PTR_SET_RVALUE(importImageTags_, importImageTags) };


          // licenseType Field Functions 
          bool hasLicenseType() const { return this->licenseType_ != nullptr;};
          void deleteLicenseType() { this->licenseType_ = nullptr;};
          inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
          inline ImportImageOptions& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


          // OSType Field Functions 
          bool hasOSType() const { return this->OSType_ != nullptr;};
          void deleteOSType() { this->OSType_ = nullptr;};
          inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
          inline ImportImageOptions& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline ImportImageOptions& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // retainImportedImage Field Functions 
          bool hasRetainImportedImage() const { return this->retainImportedImage_ != nullptr;};
          void deleteRetainImportedImage() { this->retainImportedImage_ = nullptr;};
          inline bool getRetainImportedImage() const { DARABONBA_PTR_GET_DEFAULT(retainImportedImage_, false) };
          inline ImportImageOptions& setRetainImportedImage(bool retainImportedImage) { DARABONBA_PTR_SET_VALUE(retainImportedImage_, retainImportedImage) };


          // retentionStrategy Field Functions 
          bool hasRetentionStrategy() const { return this->retentionStrategy_ != nullptr;};
          void deleteRetentionStrategy() { this->retentionStrategy_ = nullptr;};
          inline string getRetentionStrategy() const { DARABONBA_PTR_GET_DEFAULT(retentionStrategy_, "") };
          inline ImportImageOptions& setRetentionStrategy(string retentionStrategy) { DARABONBA_PTR_SET_VALUE(retentionStrategy_, retentionStrategy) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline ImportImageOptions& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        protected:
          // The operating system architecture. Valid values:
          // 
          // *   x86_64
          // *   arm64
          shared_ptr<string> architecture_ {};
          // The boot mode of the image. Valid values:
          // 
          // *   BIOS: BIOS mode
          // *   UEFI: Unified Extensible Firmware Interface (UEFI) mode
          shared_ptr<string> bootMode_ {};
          shared_ptr<string> description_ {};
          // The information of disks from which the custom images are created.
          // 
          // *   When the value of N is 1, a custom image is created from the system disk.
          // *   When the value of N is an integer in the range of 2 to 17, a custom image is created from a data disk.
          shared_ptr<ImportImageOptions::DiskDeviceMappings> diskDeviceMappings_ {};
          // The attributes of the custom image.
          shared_ptr<ImportImageOptions::Features> features_ {};
          shared_ptr<string> imageName_ {};
          shared_ptr<ImportImageOptions::ImportImageTags> importImageTags_ {};
          // The type of the license to use to activate the operating system after the image is imported. Valid values:
          // 
          // *   Auto: ECS detects the operating system of the image and allocates a license to the operating system In this mode, the system first checks whether a license allocated by an official Alibaba Cloud channel is specified in the `Platform`. If a license allocated by an official Alibaba Cloud channel is specified, the system allocates the license to the imported image. If no such license is specified, the Bring Your Own License (BYOL) mode is used.
          // *   Aliyun: The license allocated through an official Alibaba Cloud channel is used for the operating system distribution specified by `Platform`.
          // *   BYOL: The license that comes with the source operating system is used. When you use the BYOL license, make sure that your license key is supported by Alibaba Cloud.
          shared_ptr<string> licenseType_ {};
          // The operating system type. Valid values:
          // 
          // *   windows: Windows operating systems
          // *   linux: Linux operating systems
          shared_ptr<string> OSType_ {};
          // The version of the operating system. Valid values:
          // 
          // *   Aliyun
          // *   Anolis
          // *   CentOS
          // *   Ubuntu
          // *   CoreOS
          // *   SUSE
          // *   Debian
          // *   OpenSUSE
          // *   FreeBSD
          // *   RedHat
          // *   Kylin
          // *   UOS
          // *   Fedora
          // *   Fedora CoreOS
          // *   CentOS Stream
          // *   AlmaLinux
          // *   Rocky Linux
          // *   Gentoo
          // *   Customized Linux
          // *   Others Linux
          // *   Windows Server 2022
          // *   Windows Server 2019
          // *   Windows Server 2016
          // *   Windows Server 2012
          // *   Windows Server 2008
          // *   Windows Server 2003
          // *   Other Windows
          shared_ptr<string> platform_ {};
          // >  This parameter is in invitational preview.
          shared_ptr<bool> retainImportedImage_ {};
          shared_ptr<string> retentionStrategy_ {};
          shared_ptr<string> roleName_ {};
        };

        class ImageOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageOptions& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
            DARABONBA_PTR_TO_JSON(ImageFeatures, imageFeatures_);
            DARABONBA_PTR_TO_JSON(ImageName, imageName_);
            DARABONBA_PTR_TO_JSON(ImageTags, imageTags_);
          };
          friend void from_json(const Darabonba::Json& j, ImageOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
            DARABONBA_PTR_FROM_JSON(ImageFeatures, imageFeatures_);
            DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
            DARABONBA_PTR_FROM_JSON(ImageTags, imageTags_);
          };
          ImageOptions() = default ;
          ImageOptions(const ImageOptions &) = default ;
          ImageOptions(ImageOptions &&) = default ;
          ImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageOptions() = default ;
          ImageOptions& operator=(const ImageOptions &) = default ;
          ImageOptions& operator=(ImageOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ImageTags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageTags& obj) { 
              DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
            };
            friend void from_json(const Darabonba::Json& j, ImageTags& obj) { 
              DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
            };
            ImageTags() = default ;
            ImageTags(const ImageTags &) = default ;
            ImageTags(ImageTags &&) = default ;
            ImageTags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageTags() = default ;
            ImageTags& operator=(const ImageTags &) = default ;
            ImageTags& operator=(ImageTags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ImageTag : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ImageTag& obj) { 
                DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
                DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              };
              friend void from_json(const Darabonba::Json& j, ImageTag& obj) { 
                DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
                DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
              };
              ImageTag() = default ;
              ImageTag(const ImageTag &) = default ;
              ImageTag(ImageTag &&) = default ;
              ImageTag(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ImageTag() = default ;
              ImageTag& operator=(const ImageTag &) = default ;
              ImageTag& operator=(ImageTag &&) = default ;
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
              inline ImageTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


              // tagValue Field Functions 
              bool hasTagValue() const { return this->tagValue_ != nullptr;};
              void deleteTagValue() { this->tagValue_ = nullptr;};
              inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
              inline ImageTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


            protected:
              // The tag key of the image.
              shared_ptr<string> tagKey_ {};
              // The tag value of the image.
              shared_ptr<string> tagValue_ {};
            };

            virtual bool empty() const override { return this->imageTag_ == nullptr; };
            // imageTag Field Functions 
            bool hasImageTag() const { return this->imageTag_ != nullptr;};
            void deleteImageTag() { this->imageTag_ = nullptr;};
            inline const vector<ImageTags::ImageTag> & getImageTag() const { DARABONBA_PTR_GET_CONST(imageTag_, vector<ImageTags::ImageTag>) };
            inline vector<ImageTags::ImageTag> getImageTag() { DARABONBA_PTR_GET(imageTag_, vector<ImageTags::ImageTag>) };
            inline ImageTags& setImageTag(const vector<ImageTags::ImageTag> & imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };
            inline ImageTags& setImageTag(vector<ImageTags::ImageTag> && imageTag) { DARABONBA_PTR_SET_RVALUE(imageTag_, imageTag) };


          protected:
            shared_ptr<vector<ImageTags::ImageTag>> imageTag_ {};
          };

          class ImageFeatures : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageFeatures& obj) { 
              DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
            };
            friend void from_json(const Darabonba::Json& j, ImageFeatures& obj) { 
              DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
            };
            ImageFeatures() = default ;
            ImageFeatures(const ImageFeatures &) = default ;
            ImageFeatures(ImageFeatures &&) = default ;
            ImageFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageFeatures() = default ;
            ImageFeatures& operator=(const ImageFeatures &) = default ;
            ImageFeatures& operator=(ImageFeatures &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->nvmeSupport_ == nullptr; };
            // nvmeSupport Field Functions 
            bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
            void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
            inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
            inline ImageFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


          protected:
            // Indicates whether the image supports the NVMe protocol. Valid values:
            // 
            // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
            // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
            // *   auto: The system automatically checks whether the image supports the NVMe protocol. The system automatically checks whether the NVMe driver is installed on your image before the image is built. If you install or uninstall the NVMe driver during the image building task, the check result may be incorrect. We recommend that you set the value to supported or unsupported based on the image building content.
            shared_ptr<string> nvmeSupport_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->imageFamily_ == nullptr && this->imageFeatures_ == nullptr && this->imageName_ == nullptr && this->imageTags_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ImageOptions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // imageFamily Field Functions 
          bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
          void deleteImageFamily() { this->imageFamily_ = nullptr;};
          inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
          inline ImageOptions& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


          // imageFeatures Field Functions 
          bool hasImageFeatures() const { return this->imageFeatures_ != nullptr;};
          void deleteImageFeatures() { this->imageFeatures_ = nullptr;};
          inline const ImageOptions::ImageFeatures & getImageFeatures() const { DARABONBA_PTR_GET_CONST(imageFeatures_, ImageOptions::ImageFeatures) };
          inline ImageOptions::ImageFeatures getImageFeatures() { DARABONBA_PTR_GET(imageFeatures_, ImageOptions::ImageFeatures) };
          inline ImageOptions& setImageFeatures(const ImageOptions::ImageFeatures & imageFeatures) { DARABONBA_PTR_SET_VALUE(imageFeatures_, imageFeatures) };
          inline ImageOptions& setImageFeatures(ImageOptions::ImageFeatures && imageFeatures) { DARABONBA_PTR_SET_RVALUE(imageFeatures_, imageFeatures) };


          // imageName Field Functions 
          bool hasImageName() const { return this->imageName_ != nullptr;};
          void deleteImageName() { this->imageName_ = nullptr;};
          inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
          inline ImageOptions& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


          // imageTags Field Functions 
          bool hasImageTags() const { return this->imageTags_ != nullptr;};
          void deleteImageTags() { this->imageTags_ = nullptr;};
          inline const ImageOptions::ImageTags & getImageTags() const { DARABONBA_PTR_GET_CONST(imageTags_, ImageOptions::ImageTags) };
          inline ImageOptions::ImageTags getImageTags() { DARABONBA_PTR_GET(imageTags_, ImageOptions::ImageTags) };
          inline ImageOptions& setImageTags(const ImageOptions::ImageTags & imageTags) { DARABONBA_PTR_SET_VALUE(imageTags_, imageTags) };
          inline ImageOptions& setImageTags(ImageOptions::ImageTags && imageTags) { DARABONBA_PTR_SET_RVALUE(imageTags_, imageTags) };


        protected:
          // The description of the image.
          shared_ptr<string> description_ {};
          // The image family.
          shared_ptr<string> imageFamily_ {};
          // The feature attributes of the image.
          shared_ptr<ImageOptions::ImageFeatures> imageFeatures_ {};
          // The prefix of the image name.
          shared_ptr<string> imageName_ {};
          // The tags of the image.
          shared_ptr<ImageOptions::ImageTags> imageTags_ {};
        };

        class AdvancedOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdvancedOptions& obj) { 
            DARABONBA_PTR_TO_JSON(ImageNameSuffix, imageNameSuffix_);
            DARABONBA_PTR_TO_JSON(RetainCloudAssistant, retainCloudAssistant_);
          };
          friend void from_json(const Darabonba::Json& j, AdvancedOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(ImageNameSuffix, imageNameSuffix_);
            DARABONBA_PTR_FROM_JSON(RetainCloudAssistant, retainCloudAssistant_);
          };
          AdvancedOptions() = default ;
          AdvancedOptions(const AdvancedOptions &) = default ;
          AdvancedOptions(AdvancedOptions &&) = default ;
          AdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdvancedOptions() = default ;
          AdvancedOptions& operator=(const AdvancedOptions &) = default ;
          AdvancedOptions& operator=(AdvancedOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->imageNameSuffix_ == nullptr
        && this->retainCloudAssistant_ == nullptr; };
          // imageNameSuffix Field Functions 
          bool hasImageNameSuffix() const { return this->imageNameSuffix_ != nullptr;};
          void deleteImageNameSuffix() { this->imageNameSuffix_ = nullptr;};
          inline string getImageNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(imageNameSuffix_, "") };
          inline AdvancedOptions& setImageNameSuffix(string imageNameSuffix) { DARABONBA_PTR_SET_VALUE(imageNameSuffix_, imageNameSuffix) };


          // retainCloudAssistant Field Functions 
          bool hasRetainCloudAssistant() const { return this->retainCloudAssistant_ != nullptr;};
          void deleteRetainCloudAssistant() { this->retainCloudAssistant_ = nullptr;};
          inline bool getRetainCloudAssistant() const { DARABONBA_PTR_GET_DEFAULT(retainCloudAssistant_, false) };
          inline AdvancedOptions& setRetainCloudAssistant(bool retainCloudAssistant) { DARABONBA_PTR_SET_VALUE(retainCloudAssistant_, retainCloudAssistant) };


        protected:
          // Indicates whether to disable the feature that automatically adds a suffix to the name of the image created based on the image template. Valid value:
          // 
          // *   disable
          shared_ptr<string> imageNameSuffix_ {};
          // Indicates whether to retain Cloud Assistant. During the image building process, the system automatically installs Cloud Assistant in the intermediate instance to run commands. You can choose whether to retain Cloud Assistant in the new image created based on the image template. Valid values:
          // 
          // *   true: retains Cloud Assistant.
          // *   false: does not retain Cloud Assistant.
          // 
          // >  This parameter does not affect Cloud Assistant that comes with your image.
          shared_ptr<bool> retainCloudAssistant_ {};
        };

        class AddAccounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AddAccounts& obj) { 
            DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
          };
          friend void from_json(const Darabonba::Json& j, AddAccounts& obj) { 
            DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
          };
          AddAccounts() = default ;
          AddAccounts(const AddAccounts &) = default ;
          AddAccounts(AddAccounts &&) = default ;
          AddAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AddAccounts() = default ;
          AddAccounts& operator=(const AddAccounts &) = default ;
          AddAccounts& operator=(AddAccounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->addAccount_ == nullptr; };
          // addAccount Field Functions 
          bool hasAddAccount() const { return this->addAccount_ != nullptr;};
          void deleteAddAccount() { this->addAccount_ = nullptr;};
          inline const vector<string> & getAddAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<string>) };
          inline vector<string> getAddAccount() { DARABONBA_PTR_GET(addAccount_, vector<string>) };
          inline AddAccounts& setAddAccount(const vector<string> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
          inline AddAccounts& setAddAccount(vector<string> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


        protected:
          shared_ptr<vector<string>> addAccount_ {};
        };

        virtual bool empty() const override { return this->addAccounts_ == nullptr
        && this->advancedOptions_ == nullptr && this->baseImage_ == nullptr && this->baseImageType_ == nullptr && this->buildContent_ == nullptr && this->creationTime_ == nullptr
        && this->deleteInstanceOnFailure_ == nullptr && this->description_ == nullptr && this->imageFamily_ == nullptr && this->imageName_ == nullptr && this->imageOptions_ == nullptr
        && this->imagePipelineId_ == nullptr && this->importImageOptions_ == nullptr && this->instanceType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->name_ == nullptr
        && this->nvmeSupport_ == nullptr && this->repairMode_ == nullptr && this->resourceGroupId_ == nullptr && this->systemDiskSize_ == nullptr && this->tags_ == nullptr
        && this->testContent_ == nullptr && this->toRegionIds_ == nullptr && this->vSwitchId_ == nullptr; };
        // addAccounts Field Functions 
        bool hasAddAccounts() const { return this->addAccounts_ != nullptr;};
        void deleteAddAccounts() { this->addAccounts_ = nullptr;};
        inline const ImagePipelineSet::AddAccounts & getAddAccounts() const { DARABONBA_PTR_GET_CONST(addAccounts_, ImagePipelineSet::AddAccounts) };
        inline ImagePipelineSet::AddAccounts getAddAccounts() { DARABONBA_PTR_GET(addAccounts_, ImagePipelineSet::AddAccounts) };
        inline ImagePipelineSet& setAddAccounts(const ImagePipelineSet::AddAccounts & addAccounts) { DARABONBA_PTR_SET_VALUE(addAccounts_, addAccounts) };
        inline ImagePipelineSet& setAddAccounts(ImagePipelineSet::AddAccounts && addAccounts) { DARABONBA_PTR_SET_RVALUE(addAccounts_, addAccounts) };


        // advancedOptions Field Functions 
        bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
        void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
        inline const ImagePipelineSet::AdvancedOptions & getAdvancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, ImagePipelineSet::AdvancedOptions) };
        inline ImagePipelineSet::AdvancedOptions getAdvancedOptions() { DARABONBA_PTR_GET(advancedOptions_, ImagePipelineSet::AdvancedOptions) };
        inline ImagePipelineSet& setAdvancedOptions(const ImagePipelineSet::AdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
        inline ImagePipelineSet& setAdvancedOptions(ImagePipelineSet::AdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


        // baseImage Field Functions 
        bool hasBaseImage() const { return this->baseImage_ != nullptr;};
        void deleteBaseImage() { this->baseImage_ = nullptr;};
        inline string getBaseImage() const { DARABONBA_PTR_GET_DEFAULT(baseImage_, "") };
        inline ImagePipelineSet& setBaseImage(string baseImage) { DARABONBA_PTR_SET_VALUE(baseImage_, baseImage) };


        // baseImageType Field Functions 
        bool hasBaseImageType() const { return this->baseImageType_ != nullptr;};
        void deleteBaseImageType() { this->baseImageType_ = nullptr;};
        inline string getBaseImageType() const { DARABONBA_PTR_GET_DEFAULT(baseImageType_, "") };
        inline ImagePipelineSet& setBaseImageType(string baseImageType) { DARABONBA_PTR_SET_VALUE(baseImageType_, baseImageType) };


        // buildContent Field Functions 
        bool hasBuildContent() const { return this->buildContent_ != nullptr;};
        void deleteBuildContent() { this->buildContent_ = nullptr;};
        inline string getBuildContent() const { DARABONBA_PTR_GET_DEFAULT(buildContent_, "") };
        inline ImagePipelineSet& setBuildContent(string buildContent) { DARABONBA_PTR_SET_VALUE(buildContent_, buildContent) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline ImagePipelineSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deleteInstanceOnFailure Field Functions 
        bool hasDeleteInstanceOnFailure() const { return this->deleteInstanceOnFailure_ != nullptr;};
        void deleteDeleteInstanceOnFailure() { this->deleteInstanceOnFailure_ = nullptr;};
        inline bool getDeleteInstanceOnFailure() const { DARABONBA_PTR_GET_DEFAULT(deleteInstanceOnFailure_, false) };
        inline ImagePipelineSet& setDeleteInstanceOnFailure(bool deleteInstanceOnFailure) { DARABONBA_PTR_SET_VALUE(deleteInstanceOnFailure_, deleteInstanceOnFailure) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ImagePipelineSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // imageFamily Field Functions 
        bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
        void deleteImageFamily() { this->imageFamily_ = nullptr;};
        inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
        inline ImagePipelineSet& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline ImagePipelineSet& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // imageOptions Field Functions 
        bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
        void deleteImageOptions() { this->imageOptions_ = nullptr;};
        inline const ImagePipelineSet::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, ImagePipelineSet::ImageOptions) };
        inline ImagePipelineSet::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, ImagePipelineSet::ImageOptions) };
        inline ImagePipelineSet& setImageOptions(const ImagePipelineSet::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
        inline ImagePipelineSet& setImageOptions(ImagePipelineSet::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


        // imagePipelineId Field Functions 
        bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
        void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
        inline string getImagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
        inline ImagePipelineSet& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


        // importImageOptions Field Functions 
        bool hasImportImageOptions() const { return this->importImageOptions_ != nullptr;};
        void deleteImportImageOptions() { this->importImageOptions_ = nullptr;};
        inline const ImagePipelineSet::ImportImageOptions & getImportImageOptions() const { DARABONBA_PTR_GET_CONST(importImageOptions_, ImagePipelineSet::ImportImageOptions) };
        inline ImagePipelineSet::ImportImageOptions getImportImageOptions() { DARABONBA_PTR_GET(importImageOptions_, ImagePipelineSet::ImportImageOptions) };
        inline ImagePipelineSet& setImportImageOptions(const ImagePipelineSet::ImportImageOptions & importImageOptions) { DARABONBA_PTR_SET_VALUE(importImageOptions_, importImageOptions) };
        inline ImagePipelineSet& setImportImageOptions(ImagePipelineSet::ImportImageOptions && importImageOptions) { DARABONBA_PTR_SET_RVALUE(importImageOptions_, importImageOptions) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ImagePipelineSet& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // internetMaxBandwidthOut Field Functions 
        bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
        void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
        inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
        inline ImagePipelineSet& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ImagePipelineSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nvmeSupport Field Functions 
        bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
        void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
        inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
        inline ImagePipelineSet& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


        // repairMode Field Functions 
        bool hasRepairMode() const { return this->repairMode_ != nullptr;};
        void deleteRepairMode() { this->repairMode_ = nullptr;};
        inline string getRepairMode() const { DARABONBA_PTR_GET_DEFAULT(repairMode_, "") };
        inline ImagePipelineSet& setRepairMode(string repairMode) { DARABONBA_PTR_SET_VALUE(repairMode_, repairMode) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ImagePipelineSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // systemDiskSize Field Functions 
        bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
        void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
        inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
        inline ImagePipelineSet& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ImagePipelineSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ImagePipelineSet::Tags) };
        inline ImagePipelineSet::Tags getTags() { DARABONBA_PTR_GET(tags_, ImagePipelineSet::Tags) };
        inline ImagePipelineSet& setTags(const ImagePipelineSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ImagePipelineSet& setTags(ImagePipelineSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // testContent Field Functions 
        bool hasTestContent() const { return this->testContent_ != nullptr;};
        void deleteTestContent() { this->testContent_ = nullptr;};
        inline string getTestContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
        inline ImagePipelineSet& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


        // toRegionIds Field Functions 
        bool hasToRegionIds() const { return this->toRegionIds_ != nullptr;};
        void deleteToRegionIds() { this->toRegionIds_ = nullptr;};
        inline const ImagePipelineSet::ToRegionIds & getToRegionIds() const { DARABONBA_PTR_GET_CONST(toRegionIds_, ImagePipelineSet::ToRegionIds) };
        inline ImagePipelineSet::ToRegionIds getToRegionIds() { DARABONBA_PTR_GET(toRegionIds_, ImagePipelineSet::ToRegionIds) };
        inline ImagePipelineSet& setToRegionIds(const ImagePipelineSet::ToRegionIds & toRegionIds) { DARABONBA_PTR_SET_VALUE(toRegionIds_, toRegionIds) };
        inline ImagePipelineSet& setToRegionIds(ImagePipelineSet::ToRegionIds && toRegionIds) { DARABONBA_PTR_SET_RVALUE(toRegionIds_, toRegionIds) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ImagePipelineSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The IDs of Alibaba Cloud accounts to which to share the image that will be created based on the image template.
        shared_ptr<ImagePipelineSet::AddAccounts> addAccounts_ {};
        // The advanced settings.
        shared_ptr<ImagePipelineSet::AdvancedOptions> advancedOptions_ {};
        // The source image.
        // 
        // *   When `BaseImageType` is set to IMAGE, the value of this parameter is the ID of a custom image.
        // *   When `BaseImageType` is set to IMAGE_FAMILY, the value of this parameter is the name of an image family.
        shared_ptr<string> baseImage_ {};
        // The type of the source image. Valid values:
        // 
        // *   IMAGE: custom image
        // *   IMAGE_FAMILY: image family
        shared_ptr<string> baseImageType_ {};
        // The content of the image template.
        shared_ptr<string> buildContent_ {};
        // The time when the image template was created.
        shared_ptr<string> creationTime_ {};
        // Indicates whether to release the intermediate instance when the image fails to be created.
        shared_ptr<bool> deleteInstanceOnFailure_ {};
        // The description of the image template.
        shared_ptr<string> description_ {};
        // The family of the image created based on the image template.
        // 
        // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageFamily.
        shared_ptr<string> imageFamily_ {};
        // The name prefix of the image created based on the image template.
        // 
        // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageName.
        shared_ptr<string> imageName_ {};
        // The attributes of the image created based on the image template.
        shared_ptr<ImagePipelineSet::ImageOptions> imageOptions_ {};
        // The ID of the image template.
        shared_ptr<string> imagePipelineId_ {};
        // The attributes and settings of the imported image.
        shared_ptr<ImagePipelineSet::ImportImageOptions> importImageOptions_ {};
        // The instance type.
        shared_ptr<string> instanceType_ {};
        // The size of the outbound public bandwidth for the intermediate instance. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthOut_ {};
        // The name of the image template.
        shared_ptr<string> name_ {};
        // Indicates whether the image created based on the image template supports the Non-Volatile Memory Express (NVMe) protocol.
        // 
        // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageFeatures.NvmeSupport.
        shared_ptr<string> nvmeSupport_ {};
        // The repair mode of the image template.
        // 
        // Valid values:
        // 
        // *   Standard: the standard mode
        shared_ptr<string> repairMode_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The system disk size of the intermediate instance. Unit: GiB
        shared_ptr<int32_t> systemDiskSize_ {};
        // The tags of the image template.
        shared_ptr<ImagePipelineSet::Tags> tags_ {};
        // The content of the image test template.
        shared_ptr<string> testContent_ {};
        // The IDs of regions to which to distribute the image that will be created based on the image template.
        shared_ptr<ImagePipelineSet::ToRegionIds> toRegionIds_ {};
        // The ID of the vSwitch in the virtual private cloud (VPC).
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->imagePipelineSet_ == nullptr; };
      // imagePipelineSet Field Functions 
      bool hasImagePipelineSet() const { return this->imagePipelineSet_ != nullptr;};
      void deleteImagePipelineSet() { this->imagePipelineSet_ = nullptr;};
      inline const vector<ImagePipeline::ImagePipelineSet> & getImagePipelineSet() const { DARABONBA_PTR_GET_CONST(imagePipelineSet_, vector<ImagePipeline::ImagePipelineSet>) };
      inline vector<ImagePipeline::ImagePipelineSet> getImagePipelineSet() { DARABONBA_PTR_GET(imagePipelineSet_, vector<ImagePipeline::ImagePipelineSet>) };
      inline ImagePipeline& setImagePipelineSet(const vector<ImagePipeline::ImagePipelineSet> & imagePipelineSet) { DARABONBA_PTR_SET_VALUE(imagePipelineSet_, imagePipelineSet) };
      inline ImagePipeline& setImagePipelineSet(vector<ImagePipeline::ImagePipelineSet> && imagePipelineSet) { DARABONBA_PTR_SET_RVALUE(imagePipelineSet_, imagePipelineSet) };


    protected:
      shared_ptr<vector<ImagePipeline::ImagePipelineSet>> imagePipelineSet_ {};
    };

    virtual bool empty() const override { return this->imagePipeline_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imagePipeline Field Functions 
    bool hasImagePipeline() const { return this->imagePipeline_ != nullptr;};
    void deleteImagePipeline() { this->imagePipeline_ = nullptr;};
    inline const DescribeImagePipelinesResponseBody::ImagePipeline & getImagePipeline() const { DARABONBA_PTR_GET_CONST(imagePipeline_, DescribeImagePipelinesResponseBody::ImagePipeline) };
    inline DescribeImagePipelinesResponseBody::ImagePipeline getImagePipeline() { DARABONBA_PTR_GET(imagePipeline_, DescribeImagePipelinesResponseBody::ImagePipeline) };
    inline DescribeImagePipelinesResponseBody& setImagePipeline(const DescribeImagePipelinesResponseBody::ImagePipeline & imagePipeline) { DARABONBA_PTR_SET_VALUE(imagePipeline_, imagePipeline) };
    inline DescribeImagePipelinesResponseBody& setImagePipeline(DescribeImagePipelinesResponseBody::ImagePipeline && imagePipeline) { DARABONBA_PTR_SET_RVALUE(imagePipeline_, imagePipeline) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImagePipelinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagePipelinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagePipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImagePipelinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the image templates.
    shared_ptr<DescribeImagePipelinesResponseBody::ImagePipeline> imagePipeline_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. For information about how to use the return value, see the "Usage notes" section of this topic.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of image templates returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
