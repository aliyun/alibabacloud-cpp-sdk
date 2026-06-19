// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
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
  class ImportImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectionStrategy, detectionStrategy_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectionStrategy, detectionStrategy_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ImportImageRequest() = default ;
    ImportImageRequest(const ImportImageRequest &) = default ;
    ImportImageRequest(ImportImageRequest &&) = default ;
    ImportImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportImageRequest() = default ;
    ImportImageRequest& operator=(const ImportImageRequest &) = default ;
    ImportImageRequest& operator=(ImportImageRequest &&) = default ;
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
      // The key of the image tag. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of the image tag. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot start with `acs:`. It cannot contain `http://` or `https://`.
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
      // The metadata access mode of the image. Valid values:
      // - v1: When you create an ECS instance from this image, you cannot set the metadata access mode to hardened mode only.
      // - v2: When you create an ECS instance from this image, you can set the metadata access mode to hardened mode only.
      // 
      // Default value: v1.
      shared_ptr<string> imdsSupport_ {};
      // Specifies whether the image supports NVMe. Valid values:
      // 
      //  - supported: Instances created from this image support NVMe.
      //  - unsupported: Instances created from this image do not support NVMe.
      shared_ptr<string> nvmeSupport_ {};
    };

    class DiskDeviceMapping : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskDeviceMapping& obj) { 
        DARABONBA_PTR_TO_JSON(Device, device_);
        DARABONBA_PTR_TO_JSON(DiskImSize, diskImSize_);
        DARABONBA_PTR_TO_JSON(DiskImageSize, diskImageSize_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
        DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
      };
      friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
        DARABONBA_PTR_FROM_JSON(Device, device_);
        DARABONBA_PTR_FROM_JSON(DiskImSize, diskImSize_);
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
      virtual bool empty() const override { return this->device_ == nullptr
        && this->diskImSize_ == nullptr && this->diskImageSize_ == nullptr && this->format_ == nullptr && this->OSSBucket_ == nullptr && this->OSSObject_ == nullptr; };
      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
      inline DiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


      // diskImSize Field Functions 
      bool hasDiskImSize() const { return this->diskImSize_ != nullptr;};
      void deleteDiskImSize() { this->diskImSize_ = nullptr;};
      inline int32_t getDiskImSize() const { DARABONBA_PTR_GET_DEFAULT(diskImSize_, 0) };
      inline DiskDeviceMapping& setDiskImSize(int32_t diskImSize) { DARABONBA_PTR_SET_VALUE(diskImSize_, diskImSize) };


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
      // The device name of DiskDeviceMapping.N.Device in the custom image.
      // 
      // > This parameter will be deprecated. For better compatibility, do not use this parameter.
      shared_ptr<string> device_ {};
      // The size of the custom image. Unit: GiB.
      // 
      // The size includes the system disk and data disks. Make sure that the system disk space is greater than or equal to the size of the imported image file. Valid values:
      // 
      // - When N is 1, the value specifies the system disk size. Valid values: 1 to 2048.
      // - When N is 2 to 17, the value specifies the data disk size. Valid values: 1 to 2048.
      // 
      // After you upload the source image file to OSS, you can view the image file size in the OSS bucket.
      // 
      // > This parameter will be deprecated. For better compatibility, use `DiskDeviceMapping.N.DiskImageSize`.
      shared_ptr<int32_t> diskImSize_ {};
      // The size of the custom image after the image is imported.
      // 
      // The size includes the system disk and data disks. Make sure that the system disk space is greater than or equal to the size of the imported image file. Valid values:
      // 
      // - When N is 1, the value specifies the system disk size. Valid values: 1 to 2048. Unit: GiB.
      // - When N is 2 to 17, the value specifies the data disk size. Valid values: 1 to 2048. Unit: GiB.
      // 
      // After you upload the source image file to OSS, you can view the image file size in the OSS bucket.
      shared_ptr<int32_t> diskImageSize_ {};
      // The image format. Valid values:
      // 
      // - RAW.
      // - VHD.
      // - QCOW2.
      // - VMDK (in invitational preview).
      // 
      // Default value: null, which indicates that Alibaba Cloud automatically detects the image format. The detected format prevails.
      shared_ptr<string> format_ {};
      // The OSS bucket where the image file is stored.
      // 
      // > Before you import an image to this OSS bucket for the first time, add the RAM authorization policy as described in the **Operation description** section of this topic. Otherwise, the `NoSetRoletoECSServiceAccount` error is returned.
      shared_ptr<string> OSSBucket_ {};
      // The file name (key) of the image file stored in the OSS bucket after the image is uploaded to OSS.
      shared_ptr<string> OSSObject_ {};
    };

    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->bootMode_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->detectionStrategy_ == nullptr && this->diskDeviceMapping_ == nullptr
        && this->dryRun_ == nullptr && this->features_ == nullptr && this->imageName_ == nullptr && this->licenseType_ == nullptr && this->OSType_ == nullptr
        && this->ownerId_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->roleName_ == nullptr && this->storageLocationArn_ == nullptr && this->tag_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ImportImageRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline ImportImageRequest& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ImportImageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectionStrategy Field Functions 
    bool hasDetectionStrategy() const { return this->detectionStrategy_ != nullptr;};
    void deleteDetectionStrategy() { this->detectionStrategy_ = nullptr;};
    inline string getDetectionStrategy() const { DARABONBA_PTR_GET_DEFAULT(detectionStrategy_, "") };
    inline ImportImageRequest& setDetectionStrategy(string detectionStrategy) { DARABONBA_PTR_SET_VALUE(detectionStrategy_, detectionStrategy) };


    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<ImportImageRequest::DiskDeviceMapping> & getDiskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<ImportImageRequest::DiskDeviceMapping>) };
    inline vector<ImportImageRequest::DiskDeviceMapping> getDiskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<ImportImageRequest::DiskDeviceMapping>) };
    inline ImportImageRequest& setDiskDeviceMapping(const vector<ImportImageRequest::DiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline ImportImageRequest& setDiskDeviceMapping(vector<ImportImageRequest::DiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportImageRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const ImportImageRequest::Features & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, ImportImageRequest::Features) };
    inline ImportImageRequest::Features getFeatures() { DARABONBA_PTR_GET(features_, ImportImageRequest::Features) };
    inline ImportImageRequest& setFeatures(const ImportImageRequest::Features & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ImportImageRequest& setFeatures(ImportImageRequest::Features && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ImportImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline ImportImageRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ImportImageRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportImageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ImportImageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ImportImageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportImageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportImageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ImportImageRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // storageLocationArn Field Functions 
    bool hasStorageLocationArn() const { return this->storageLocationArn_ != nullptr;};
    void deleteStorageLocationArn() { this->storageLocationArn_ = nullptr;};
    inline string getStorageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(storageLocationArn_, "") };
    inline ImportImageRequest& setStorageLocationArn(string storageLocationArn) { DARABONBA_PTR_SET_VALUE(storageLocationArn_, storageLocationArn) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ImportImageRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ImportImageRequest::Tag>) };
    inline vector<ImportImageRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ImportImageRequest::Tag>) };
    inline ImportImageRequest& setTag(const vector<ImportImageRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ImportImageRequest& setTag(vector<ImportImageRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The system architecture. Valid values: 
    // 
    // - i386.
    // - x86_64.
    // - arm64.
    // 
    // Default value: x86_64.
    shared_ptr<string> architecture_ {};
    // The boot mode of the image. Valid values:
    // 
    // - BIOS: BIOS boot mode.
    // - UEFI: UEFI boot mode.
    // 
    // Default value: BIOS. If `Architecture=arm64`, the default value is UEFI, and only UEFI is supported.
    // 
    // <notice>
    // 
    // To prevent instances from failing to start due to an unsupported boot mode, make sure that you understand the boot mode supported by the target image before you set this parameter. For more information about image boot modes, see [Image boot modes](~~2244655#b9caa9b8bb1wf~~).
    // 
    // </notice>.
    shared_ptr<string> bootMode_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The image detection strategy. If this parameter is not specified, detection is not triggered. Only the Standard detection mode is supported.
    // 
    // > Most Linux and Windows versions are supported. For more information about image detection items and operating system limitations, see [Image detection overview](https://help.aliyun.com/document_detail/439819.html) and [Operating system limitations for image detection](https://help.aliyun.com/document_detail/475800.html).
    shared_ptr<string> detectionStrategy_ {};
    // The information list of the custom image to create.
    shared_ptr<vector<ImportImageRequest::DiskDeviceMapping>> diskDeviceMapping_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - true: performs only a dry run. The system checks the request for potential issues, including invalid AccessKey pairs, unauthorized RAM users, and missing parameter values. If the request fails the dry run, the corresponding error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - false: performs a dry run and sends the request. If the request passes the dry run, a 2XX HTTP status code is returned and the resource status is queried.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The image feature-related properties.
    shared_ptr<ImportImageRequest::Features> features_ {};
    // The name of the image. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`. It can contain digits, periods (.), colons (:), underscores (_), or hyphens (-).
    shared_ptr<string> imageName_ {};
    // The license type. This parameter specifies the authorization mode when instances are created by calling [RunInstances](https://help.aliyun.com/document_detail/2679677.html) with the image. This value takes effect only for Windows Server images. Valid values:
    // - Aliyun: Use the Alibaba Cloud official license. After the instance starts, the system attempts to automatically connect to the Alibaba Cloud KMS server for activation. The billing for the instance includes the Windows Server license fee.
    // - BYOL: Bring Your Own License. After the instance starts, Alibaba Cloud does not automatically activate it. You must manually activate it by using your own valid license key. The billing for the instance does not include the Windows Server license fee.
    // 
    // Default value: Aliyun.
    shared_ptr<string> licenseType_ {};
    // The operating system type. Valid values: 
    // 
    // - windows. You must also set `LicenseType`.
    // - linux.
    // 
    // Default value: linux.
    shared_ptr<string> OSType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The operating system version. Valid values: 
    // - Aliyun
    // - Anolis
    // - CentOS
    // - Ubuntu
    // - CoreOS
    // - SUSE
    // - Debian
    // - OpenSUSE
    // - FreeBSD
    // - RedHat
    // - Kylin
    // - UOS
    // - Fedora
    // - Fedora CoreOS
    // - CentOS Stream
    // - AlmaLinux
    // - Rocky Linux
    // - Gentoo
    // - Customized Linux
    // - Others Linux
    // - Windows Server 2022
    // - Windows Server 2019
    // - Windows Server 2016
    // - Windows Server 2012
    // - Windows Server 2008
    // - Windows Server 2003
    // - Other Windows
    // 
    // Default value: Others Linux.
    shared_ptr<string> platform_ {};
    // The region ID of the source custom image. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the enterprise resource group to which the imported image belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the RAM role used to import the image.
    shared_ptr<string> roleName_ {};
    // The Alibaba Cloud Resource Name (ARN) of the CloudBox, which is used to uniquely identify the cloud storage location.
    // 
    // > You need to specify this parameter only when you import an image file from OSS on CloudBox. If you do not use OSS on CloudBox, do not set this parameter. For more information, see [What is OSS on CloudBox](https://help.aliyun.com/document_detail/430190.html).
    // 
    // The ARN must follow this format: `arn:acs:cloudbox:{RegionId}:{AliUid}:cloudbox/{CloudBoxId}`, where `{RegionId}` is the region ID of the CloudBox, `{AliUid}` is the Alibaba Cloud account ID, and `{CloudBoxId}` is the CloudBox ID.
    shared_ptr<string> storageLocationArn_ {};
    // The tags of the image.
    shared_ptr<vector<ImportImageRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
