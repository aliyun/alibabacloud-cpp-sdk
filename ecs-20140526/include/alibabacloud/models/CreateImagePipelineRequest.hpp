// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUEST_HPP_
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
  class CreateImagePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_TO_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_TO_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_TO_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TestContent, testContent_);
      DARABONBA_PTR_TO_JSON(ToRegionId, toRegionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_FROM_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_FROM_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_FROM_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
      DARABONBA_PTR_FROM_JSON(ToRegionId, toRegionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateImagePipelineRequest() = default ;
    CreateImagePipelineRequest(const CreateImagePipelineRequest &) = default ;
    CreateImagePipelineRequest(CreateImagePipelineRequest &&) = default ;
    CreateImagePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequest() = default ;
    CreateImagePipelineRequest& operator=(const CreateImagePipelineRequest &) = default ;
    CreateImagePipelineRequest& operator=(CreateImagePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N, where N is from 1 to 20. The tag key must be 1 to 128 characters in length. It cannot start with `aliyun` or `acs:` or contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N, where N is from 1 to 20. The tag value can be empty or up to 128 characters long. It cannot start with `acs:` or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
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
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ImportImageTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ImportImageTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ImportImageTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
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
        // Specifies whether the base image to be imported supports NVMe. Valid values:
        // 
        // - supported: Instances created from this image support the NVMe protocol.
        // 
        // - unsupported: Instances created from this image do not support the NVMe protocol.
        // 
        // Default value: unsupported.
        shared_ptr<string> nvmeSupport_ {};
      };

      class DiskDeviceMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskDeviceMappings& obj) { 
          DARABONBA_PTR_TO_JSON(DiskImageSize, diskImageSize_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
          DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
        };
        friend void from_json(const Darabonba::Json& j, DiskDeviceMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskImageSize, diskImageSize_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
          DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
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
        virtual bool empty() const override { return this->diskImageSize_ == nullptr
        && this->format_ == nullptr && this->OSSBucket_ == nullptr && this->OSSObject_ == nullptr; };
        // diskImageSize Field Functions 
        bool hasDiskImageSize() const { return this->diskImageSize_ != nullptr;};
        void deleteDiskImageSize() { this->diskImageSize_ = nullptr;};
        inline int32_t getDiskImageSize() const { DARABONBA_PTR_GET_DEFAULT(diskImageSize_, 0) };
        inline DiskDeviceMappings& setDiskImageSize(int32_t diskImageSize) { DARABONBA_PTR_SET_VALUE(diskImageSize_, diskImageSize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline DiskDeviceMappings& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // OSSBucket Field Functions 
        bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
        void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
        inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
        inline DiskDeviceMappings& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


        // OSSObject Field Functions 
        bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
        void deleteOSSObject() { this->OSSObject_ = nullptr;};
        inline string getOSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
        inline DiskDeviceMappings& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


      protected:
        // The size of the disk to create from the image file, in GiB. For the system disk, this value must be greater than or equal to the size of the image file.
        // 
        // Valid values:
        // 
        // - When N is 1, the disk is the system disk. The size of the system disk can range from 1 GiB to 2,048 GiB.
        // 
        // - When N is a value from 2 to 17, the disk is a data disk. The size of a data disk can range from 1 GiB to 2,048 GiB.
        // 
        // After you upload the base image file to an OSS bucket, you can view the size of the image file in the bucket.
        shared_ptr<int32_t> diskImageSize_ {};
        // The format of the image. Valid values:
        // 
        // - RAW
        // 
        // - VHD
        // 
        // - QCOW2
        // 
        // Default value: If left empty, the system automatically detects the image format.
        shared_ptr<string> format_ {};
        // The OSS bucket that contains the image file.
        shared_ptr<string> OSSBucket_ {};
        // The name (key) of the image file that is stored in the OSS bucket.
        shared_ptr<string> OSSObject_ {};
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
      inline const vector<ImportImageOptions::DiskDeviceMappings> & getDiskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, vector<ImportImageOptions::DiskDeviceMappings>) };
      inline vector<ImportImageOptions::DiskDeviceMappings> getDiskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, vector<ImportImageOptions::DiskDeviceMappings>) };
      inline ImportImageOptions& setDiskDeviceMappings(const vector<ImportImageOptions::DiskDeviceMappings> & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
      inline ImportImageOptions& setDiskDeviceMappings(vector<ImportImageOptions::DiskDeviceMappings> && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


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
      inline const vector<ImportImageOptions::ImportImageTags> & getImportImageTags() const { DARABONBA_PTR_GET_CONST(importImageTags_, vector<ImportImageOptions::ImportImageTags>) };
      inline vector<ImportImageOptions::ImportImageTags> getImportImageTags() { DARABONBA_PTR_GET(importImageTags_, vector<ImportImageOptions::ImportImageTags>) };
      inline ImportImageOptions& setImportImageTags(const vector<ImportImageOptions::ImportImageTags> & importImageTags) { DARABONBA_PTR_SET_VALUE(importImageTags_, importImageTags) };
      inline ImportImageOptions& setImportImageTags(vector<ImportImageOptions::ImportImageTags> && importImageTags) { DARABONBA_PTR_SET_RVALUE(importImageTags_, importImageTags) };


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
      // The architecture of the image to import. Valid values:
      // 
      // - x86_64
      // 
      // - arm64
      // 
      // Default value: x86_64.
      shared_ptr<string> architecture_ {};
      // The boot mode of the image. Valid values:
      // 
      // - BIOS: BIOS boot mode.
      // 
      // - UEFI: UEFI boot mode.
      // 
      // Default value: BIOS. If `Architecture` is set to `arm64`, the default value is UEFI and this parameter can be set only to UEFI.
      // 
      // >Notice: 
      // 
      // To prevent startup failures, ensure the boot mode is supported by the image.
      shared_ptr<string> bootMode_ {};
      shared_ptr<string> description_ {};
      // The information about the disks of the custom image.
      // 
      // - When N is 1, the disk is a system disk.
      // 
      // - When N is a value from 2 to 17, the disk is a data disk.
      shared_ptr<vector<ImportImageOptions::DiskDeviceMappings>> diskDeviceMappings_ {};
      // The image feature attributes.
      shared_ptr<ImportImageOptions::Features> features_ {};
      shared_ptr<string> imageName_ {};
      shared_ptr<vector<ImportImageOptions::ImportImageTags>> importImageTags_ {};
      // The license type used to activate the operating system after the image is imported. Valid values:
      // 
      // - Auto: Alibaba Cloud attempts to assign a license based on the detected operating system. If an official Alibaba Cloud license for the specified `Platform` is unavailable, the system defaults to BYOL.
      // 
      // - Aliyun: A license from an official Alibaba Cloud channel is used based on the specified `Platform`.
      // 
      // - BYOL: The license that comes with the base operating system is used. When you use the BYOL mode, you must make sure that your license key is supported in Alibaba Cloud.
      // 
      // Default value: Auto.
      shared_ptr<string> licenseType_ {};
      // The type of the operating system. Valid values:
      // 
      // - windows
      // 
      // - linux
      // 
      // Default value: linux.
      shared_ptr<string> OSType_ {};
      // The operating system distribution. Valid values:
      // 
      // - Aliyun
      // 
      // - Anolis
      // 
      // - CentOS
      // 
      // - Ubuntu
      // 
      // - CoreOS
      // 
      // - SUSE
      // 
      // - Debian
      // 
      // - OpenSUSE
      // 
      // - FreeBSD
      // 
      // - RedHat
      // 
      // - Kylin
      // 
      // - UOS
      // 
      // - Fedora
      // 
      // - Fedora CoreOS
      // 
      // - CentOS Stream
      // 
      // - AlmaLinux
      // 
      // - Rocky Linux
      // 
      // - Gentoo
      // 
      // - Customized Linux
      // 
      // - Others Linux
      // 
      // - Windows Server 2022
      // 
      // - Windows Server 2019
      // 
      // - Windows Server 2016
      // 
      // - Windows Server 2012
      // 
      // - Windows Server 2008
      // 
      // - Windows Server 2003
      // 
      // - Other Windows
      // 
      // Default value: Others Linux if OSType is set to Linux, or Other Windows if OSType is set to Windows.
      shared_ptr<string> platform_ {};
      // > This parameter is in invitational preview.
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
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ImageTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ImageTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ImageTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag. The tag key must be 1 to 128 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The value of the tag. The tag value can be empty or up to 128 characters long. It cannot start with `acs:` and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
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
        // Specifies whether the destination image supports NVMe. Valid values:
        // 
        // - supported: Instances created from this image support the NVMe protocol.
        // 
        // - unsupported: Instances created from this image do not support the NVMe protocol.
        // 
        // - auto: The system automatically checks whether the NVMe driver is installed on your image. This check is performed before the build phase. If you install or uninstall the NVMe driver during the build, the result may be inaccurate. We recommend that you set this parameter to supported or unsupported based on the build content.
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
      inline const vector<ImageOptions::ImageTags> & getImageTags() const { DARABONBA_PTR_GET_CONST(imageTags_, vector<ImageOptions::ImageTags>) };
      inline vector<ImageOptions::ImageTags> getImageTags() { DARABONBA_PTR_GET(imageTags_, vector<ImageOptions::ImageTags>) };
      inline ImageOptions& setImageTags(const vector<ImageOptions::ImageTags> & imageTags) { DARABONBA_PTR_SET_VALUE(imageTags_, imageTags) };
      inline ImageOptions& setImageTags(vector<ImageOptions::ImageTags> && imageTags) { DARABONBA_PTR_SET_RVALUE(imageTags_, imageTags) };


    protected:
      // The description of the destination image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the destination image family. The name must be 2 to 128 characters long and start with a letter or a Chinese character. It cannot start with `aliyun` or `acs:` or contain `http://` or `https://`. Allowed characters include letters, digits, Chinese characters, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> imageFamily_ {};
      // The feature attributes of the destination image.
      shared_ptr<ImageOptions::ImageFeatures> imageFeatures_ {};
      // The prefix of the destination image name. The prefix must be 2 to 64 characters in length. It must start with a letter or a Chinese character. It cannot start with `http://` or `https://`. It can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      // 
      // The complete image name is automatically generated by concatenating the prefix and the build task ID (`ExecutionId`) in the `{ImageName}_{ExecutionId}` format.
      shared_ptr<string> imageName_ {};
      // The tags of the destination image.
      shared_ptr<vector<ImageOptions::ImageTags>> imageTags_ {};
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
      // Specifies whether to disable the feature that automatically appends a suffix to the destination image name. Valid values:
      // 
      // - disable: Disables the feature.
      shared_ptr<string> imageNameSuffix_ {};
      // Specifies whether to retain Cloud Assistant in the destination image. During the image building process, Cloud Assistant is automatically installed on the intermediate instance to run commands. You can select whether to retain Cloud Assistant after the process is complete. Valid values:
      // 
      // - true: Retain Cloud Assistant.
      // 
      // - false: Do not retain Cloud Assistant.
      // 
      // Default value: false.
      // 
      // > This setting does not affect the Cloud Assistant client that is already installed in your image.
      shared_ptr<bool> retainCloudAssistant_ {};
    };

    virtual bool empty() const override { return this->addAccount_ == nullptr
        && this->advancedOptions_ == nullptr && this->baseImage_ == nullptr && this->baseImageType_ == nullptr && this->buildContent_ == nullptr && this->clientToken_ == nullptr
        && this->deleteInstanceOnFailure_ == nullptr && this->description_ == nullptr && this->imageFamily_ == nullptr && this->imageName_ == nullptr && this->imageOptions_ == nullptr
        && this->importImageOptions_ == nullptr && this->instanceType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->name_ == nullptr && this->nvmeSupport_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->repairMode_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->systemDiskSize_ == nullptr && this->tag_ == nullptr && this->testContent_ == nullptr
        && this->toRegionId_ == nullptr && this->vSwitchId_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<int64_t> & getAddAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<int64_t>) };
    inline vector<int64_t> getAddAccount() { DARABONBA_PTR_GET(addAccount_, vector<int64_t>) };
    inline CreateImagePipelineRequest& setAddAccount(const vector<int64_t> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline CreateImagePipelineRequest& setAddAccount(vector<int64_t> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const CreateImagePipelineRequest::AdvancedOptions & getAdvancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, CreateImagePipelineRequest::AdvancedOptions) };
    inline CreateImagePipelineRequest::AdvancedOptions getAdvancedOptions() { DARABONBA_PTR_GET(advancedOptions_, CreateImagePipelineRequest::AdvancedOptions) };
    inline CreateImagePipelineRequest& setAdvancedOptions(const CreateImagePipelineRequest::AdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline CreateImagePipelineRequest& setAdvancedOptions(CreateImagePipelineRequest::AdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // baseImage Field Functions 
    bool hasBaseImage() const { return this->baseImage_ != nullptr;};
    void deleteBaseImage() { this->baseImage_ = nullptr;};
    inline string getBaseImage() const { DARABONBA_PTR_GET_DEFAULT(baseImage_, "") };
    inline CreateImagePipelineRequest& setBaseImage(string baseImage) { DARABONBA_PTR_SET_VALUE(baseImage_, baseImage) };


    // baseImageType Field Functions 
    bool hasBaseImageType() const { return this->baseImageType_ != nullptr;};
    void deleteBaseImageType() { this->baseImageType_ = nullptr;};
    inline string getBaseImageType() const { DARABONBA_PTR_GET_DEFAULT(baseImageType_, "") };
    inline CreateImagePipelineRequest& setBaseImageType(string baseImageType) { DARABONBA_PTR_SET_VALUE(baseImageType_, baseImageType) };


    // buildContent Field Functions 
    bool hasBuildContent() const { return this->buildContent_ != nullptr;};
    void deleteBuildContent() { this->buildContent_ = nullptr;};
    inline string getBuildContent() const { DARABONBA_PTR_GET_DEFAULT(buildContent_, "") };
    inline CreateImagePipelineRequest& setBuildContent(string buildContent) { DARABONBA_PTR_SET_VALUE(buildContent_, buildContent) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImagePipelineRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteInstanceOnFailure Field Functions 
    bool hasDeleteInstanceOnFailure() const { return this->deleteInstanceOnFailure_ != nullptr;};
    void deleteDeleteInstanceOnFailure() { this->deleteInstanceOnFailure_ = nullptr;};
    inline bool getDeleteInstanceOnFailure() const { DARABONBA_PTR_GET_DEFAULT(deleteInstanceOnFailure_, false) };
    inline CreateImagePipelineRequest& setDeleteInstanceOnFailure(bool deleteInstanceOnFailure) { DARABONBA_PTR_SET_VALUE(deleteInstanceOnFailure_, deleteInstanceOnFailure) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImagePipelineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateImagePipelineRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImagePipelineRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateImagePipelineRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateImagePipelineRequest::ImageOptions) };
    inline CreateImagePipelineRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateImagePipelineRequest::ImageOptions) };
    inline CreateImagePipelineRequest& setImageOptions(const CreateImagePipelineRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateImagePipelineRequest& setImageOptions(CreateImagePipelineRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // importImageOptions Field Functions 
    bool hasImportImageOptions() const { return this->importImageOptions_ != nullptr;};
    void deleteImportImageOptions() { this->importImageOptions_ = nullptr;};
    inline const CreateImagePipelineRequest::ImportImageOptions & getImportImageOptions() const { DARABONBA_PTR_GET_CONST(importImageOptions_, CreateImagePipelineRequest::ImportImageOptions) };
    inline CreateImagePipelineRequest::ImportImageOptions getImportImageOptions() { DARABONBA_PTR_GET(importImageOptions_, CreateImagePipelineRequest::ImportImageOptions) };
    inline CreateImagePipelineRequest& setImportImageOptions(const CreateImagePipelineRequest::ImportImageOptions & importImageOptions) { DARABONBA_PTR_SET_VALUE(importImageOptions_, importImageOptions) };
    inline CreateImagePipelineRequest& setImportImageOptions(CreateImagePipelineRequest::ImportImageOptions && importImageOptions) { DARABONBA_PTR_SET_RVALUE(importImageOptions_, importImageOptions) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateImagePipelineRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateImagePipelineRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImagePipelineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline CreateImagePipelineRequest& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateImagePipelineRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateImagePipelineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImagePipelineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repairMode Field Functions 
    bool hasRepairMode() const { return this->repairMode_ != nullptr;};
    void deleteRepairMode() { this->repairMode_ = nullptr;};
    inline string getRepairMode() const { DARABONBA_PTR_GET_DEFAULT(repairMode_, "") };
    inline CreateImagePipelineRequest& setRepairMode(string repairMode) { DARABONBA_PTR_SET_VALUE(repairMode_, repairMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImagePipelineRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateImagePipelineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateImagePipelineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateImagePipelineRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateImagePipelineRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateImagePipelineRequest::Tag>) };
    inline vector<CreateImagePipelineRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateImagePipelineRequest::Tag>) };
    inline CreateImagePipelineRequest& setTag(const vector<CreateImagePipelineRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateImagePipelineRequest& setTag(vector<CreateImagePipelineRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // testContent Field Functions 
    bool hasTestContent() const { return this->testContent_ != nullptr;};
    void deleteTestContent() { this->testContent_ = nullptr;};
    inline string getTestContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
    inline CreateImagePipelineRequest& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


    // toRegionId Field Functions 
    bool hasToRegionId() const { return this->toRegionId_ != nullptr;};
    void deleteToRegionId() { this->toRegionId_ = nullptr;};
    inline const vector<string> & getToRegionId() const { DARABONBA_PTR_GET_CONST(toRegionId_, vector<string>) };
    inline vector<string> getToRegionId() { DARABONBA_PTR_GET(toRegionId_, vector<string>) };
    inline CreateImagePipelineRequest& setToRegionId(const vector<string> & toRegionId) { DARABONBA_PTR_SET_VALUE(toRegionId_, toRegionId) };
    inline CreateImagePipelineRequest& setToRegionId(vector<string> && toRegionId) { DARABONBA_PTR_SET_RVALUE(toRegionId_, toRegionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateImagePipelineRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IDs of the Alibaba Cloud accounts to share the destination images with. You can specify up to 20 account IDs.
    shared_ptr<vector<int64_t>> addAccount_ {};
    // The advanced settings.
    shared_ptr<CreateImagePipelineRequest::AdvancedOptions> advancedOptions_ {};
    // The base image. The value of this parameter varies based on the value of `BaseImageType`:
    // 
    // - If `BaseImageType` is `IMAGE`, specify the ID of the base image.
    // 
    // - If `BaseImageType` is `IMAGE_FAMILY`, specify the name of the base image family.
    // 
    // - If `BaseImageType` is `OSS`, this parameter is not required.
    shared_ptr<string> baseImage_ {};
    // The type of the base image. Valid values:
    // 
    // - IMAGE: An ECS image.
    // 
    // - IMAGE_FAMILY: An image family.
    // 
    // - OSS: An OSS object.
    // 
    // This parameter is required.
    shared_ptr<string> baseImageType_ {};
    // The content of the image build template. The content can be up to 16 KB in size. For more information about the supported commands, see [Command reference for Image Builder](https://help.aliyun.com/document_detail/200206.html).
    shared_ptr<string> buildContent_ {};
    // A client-generated, globally unique token to ensure the idempotence of the request. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Determines whether to release the intermediate instance when the image build fails. Valid values:
    // 
    // - true: The instance is released.
    // 
    // - false: The instance is not released.
    // 
    // Default value: true.
    // 
    // > If an intermediate instance cannot be started, it is not retained by default.
    shared_ptr<bool> deleteInstanceOnFailure_ {};
    // The description of the image pipeline template. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The name of the destination image family.
    // >Notice: This parameter is deprecated. Use `ImageOptions.ImageFamily` instead.
    shared_ptr<string> imageFamily_ {};
    // The prefix of the destination image name.
    // >Notice: This parameter is deprecated. Use `ImageOptions.ImageName` instead.
    shared_ptr<string> imageName_ {};
    // The properties of the destination image.
    shared_ptr<CreateImagePipelineRequest::ImageOptions> imageOptions_ {};
    // The settings for importing an image. This parameter is required when `BaseImageType` is set to `OSS`.
    shared_ptr<CreateImagePipelineRequest::ImportImageOptions> importImageOptions_ {};
    // The instance type of the intermediate instance. You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query instance types.
    // 
    // If you do not specify this parameter, the system automatically selects an instance type with the minimum vCPUs and memory, subject to inventory. For example, `ecs.g6.large` is selected by default. If `ecs.g6.large` is out of stock, `ecs.g6.xlarge` is selected.
    shared_ptr<string> instanceType_ {};
    // The outbound public bandwidth of the intermediate instance. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // The name of the image pipeline. It must be 2 to 128 characters long, start with a letter or a Chinese character, and cannot start with `http://` or `https://`. Allowed characters include letters, digits, Chinese characters, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // > If you do not specify this parameter, the value of `ImagePipelineId` is used as the name.
    shared_ptr<string> name_ {};
    // Specifies whether the destination image supports NVMe.
    // >Notice: This parameter is deprecated. Use `ImageOptions.ImageFeatures.NvmeSupport` instead.
    shared_ptr<string> nvmeSupport_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the latest list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The image repair mode in the image template.
    // 
    // Valid values:
    // 
    // - Standard: The standard mode.
    // 
    //   The check items for Linux systems include the following:
    // 
    //   - GUESTOS.CloudInit
    // 
    //   - GUESTOS.Dhcp
    // 
    //   - GUESTOS.Virtio
    // 
    //   - GUESTOS.OnlineResizeFS
    // 
    //   - GUESTOS.Grub
    // 
    //   - GUESTOS.Fstab
    // 
    //   The check items for Windows systems include the following:
    // 
    //   - GUESTOS.Virtio
    // 
    //   - GUESTOS.Update
    // 
    //   - GUESTOS.Hotfix
    // 
    //   - GUESTOS.Server
    // 
    // > The repair items may change as the check and repair capabilities are improved. For more information about each repair item, see [Image check overview](https://help.aliyun.com/document_detail/439819.html).
    shared_ptr<string> repairMode_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The size of the system disk of the intermediate instance. Unit: GiB. Valid values: 20 to 500.
    // 
    // Default value: 40.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The tags to add to the image pipeline.
    shared_ptr<vector<CreateImagePipelineRequest::Tag>> tag_ {};
    // The content of the image test template. The content can be up to 16 KB in size. For more information about the supported commands, see [Command reference for Image Builder](https://help.aliyun.com/document_detail/200206.html).
    shared_ptr<string> testContent_ {};
    // The IDs of destination regions for image distribution. You can specify up to 20 region IDs.
    // 
    // If you do not specify this parameter, the images are created only in the current region.
    shared_ptr<vector<string>> toRegionId_ {};
    // The ID of the VSwitch in the VPC that is used to launch the intermediate instance.
    // 
    // If you do not specify this parameter, a new VPC and VSwitch are created. Ensure that you have a sufficient quota of VPC resources. For more information, see [Usage limits](https://help.aliyun.com/document_detail/27750.html).
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
