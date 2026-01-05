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
      // The key of tag N of the image. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
      shared_ptr<string> key_ {};
      // The value of tag N of the image. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:`.
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
      // The metadata access mode version of the image. Valid values:
      // 
      // *   v1: You cannot set the metadata access mode to security hardening when you create instances from the image.
      // *   v2: You can set the metadata access mode to security hardening when you create instances from the image.
      // 
      // Default value: v1.
      shared_ptr<string> imdsSupport_ {};
      // Specifies whether the image supports the Non-Volatile Memory Express (NVMe) protocol. Valid values:
      // 
      // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
      // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
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
      // The device name of disk N in the custom image.
      // 
      // >  This parameter will be removed in the future. We recommend that you do not use this parameter to ensure future compatibility.
      shared_ptr<string> device_ {};
      // The size of disk N in the custom image. Unit: GiB.
      // 
      // You can use this parameter to specify the sizes of the system disk and data disks in the custom image. When you specify the size of the system disk, make sure that the specified size is greater than or equal to the size of the imported image file. Unit: GiB. Valid values:
      // 
      // *   When the N value is 1, this parameter specifies the size of the system disk in the custom image. Valid values: 1 to 2048.
      // *   When the N value is an integer in the range of 2 to 17, this parameter specifies the size of a data disk in the custom image. Valid values: 1 to 2048.
      // 
      // After the image file is uploaded to an OSS bucket, you can view the size of the image file in the OSS bucket.
      // 
      // >  This parameter will be removed in the future. We recommend that you use `DiskDeviceMapping.N.DiskImageSize` to ensure future compatibility.
      shared_ptr<int32_t> diskImSize_ {};
      // The size of disk N in the custom image after the source image is imported.
      // 
      // You can use this parameter to specify the sizes of the system disk and data disks in the custom image. When you specify the size of the system disk, make sure that the specified size is greater than or equal to the size of the imported image file. Unit: GiB. Valid values:
      // 
      // *   When the N value is 1, this parameter specifies the size of the system disk in the custom image. Valid values: 1 to 2048.
      // *   When the N value is an integer in the range of 2 to 17, this parameter specifies the size of a data disk in the custom image. Valid values: 1 to 2048.
      // 
      // After the image file is uploaded to an OSS bucket, you can view the size of the image file in the OSS bucket.
      shared_ptr<int32_t> diskImageSize_ {};
      // The format of the source image. Valid values:
      // 
      // *   RAW
      // *   VHD
      // *   QCOW2
      // *   VMDK (invitational preview)
      // 
      // This parameter is empty by default, which indicates that the system checks the image format and uses the check result as the value of this parameter.
      shared_ptr<string> format_ {};
      // The Object Storage Service (OSS) bucket where the image file is stored.
      // 
      // >  Before you import images for the first time, you must use RAM to authorize ECS to access your OSS buckets. If ECS is not authorized to access your OSS buckets, the `NoSetRoletoECSServiceAcount` error code is returned when you call the ImportImage operation. For more information, see **Usage notes**.
      shared_ptr<string> OSSBucket_ {};
      // The name (key) of the object that the image file is stored as in the OSS bucket.
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
    // *   i386
    // *   x86_64
    // *   arm64
    // 
    // Default value: x86_64.
    shared_ptr<string> architecture_ {};
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS
    // *   UEFI
    // 
    // Default value: BIOS. If you set `Architecture` to arm64, set this parameter to UEFI.
    // 
    // > Make sure that you are aware of the boot modes supported by the specified image, as thehe modified boot mode needs to be supported by the image. This way, instances that use this image can start.
    shared_ptr<string> bootMode_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. **The token can contain only ASCII characters and cannot exceed 64 characters in length.** For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The image description. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The mode in which to check the image. If you do not specify this parameter, the image is not checked. Only the standard check mode is supported.
    // 
    // >  This parameter is supported for most Linux and Windows operating system versions. For more information about image check items and operating system limits for image check, see [Overview](https://help.aliyun.com/document_detail/439819.html) and [Operating system limits for image check](https://help.aliyun.com/document_detail/475800.html).
    shared_ptr<string> detectionStrategy_ {};
    // Details about the custom images.
    shared_ptr<vector<ImportImageRequest::DiskDeviceMapping>> diskDeviceMapping_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks the request for potential issues, including invalid AccessKey pairs, unauthorized RAM users, and missing parameter values. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   false: performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The attributes of the image.
    shared_ptr<ImportImageRequest::Features> features_ {};
    // The image name. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `acs:` or `aliyun`. The name cannot contain `http://` or `https://`. The name can contain letters, digits, periods (.), colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> imageName_ {};
    // The type of the license used to activate the operating system after the image is imported. Valid values:
    // 
    // *   Auto: ECS checks the operating system of the image and allocates a license to the operating system. ECS first checks whether the operating system distribution specified by `Platform` has a license allocated through an official Alibaba Cloud channel. If yes, the allocated license is used. If no, the license that comes with the source operating system is used.
    // *   Aliyun: The license allocated through an official Alibaba Cloud channel is used for the operating system distribution specified by `Platform`.
    // *   BYOL: The license that comes with the source operating system is used. In this case, make sure that your license key is eligible for use in Alibaba Cloud.
    // 
    // Default value: Auto.
    shared_ptr<string> licenseType_ {};
    // The operating system platform. Valid values:
    // 
    // *   windows
    // *   linux
    // 
    // Default value: linux.
    shared_ptr<string> OSType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The operating system distribution. Valid values:
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
    // 
    // Default value: Others Linux.
    shared_ptr<string> platform_ {};
    // The region ID of the source image. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the image.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the RAM role used to import the image.
    shared_ptr<string> roleName_ {};
    // The Alibaba Cloud Resource Name (ARN) of the cloud box, which is used to uniquely identify a storage location in the cloud.
    // 
    // >  Specify this parameter only if you import an image from OSS on CloudBox. Otherwise, you do not need to specify this parameter. For more information, see [What is OSS on CloudBox?](https://help.aliyun.com/document_detail/430190.html)
    // 
    // The ARN must be in the following format: `arn:acs:cloudbox:{RegionId}:{AliUid}:cloudbox/{CloudBoxId}`. Replace `{RegionId}` with the region ID of the cloud box, `{AliUid}` with the ID of the Alibaba Cloud account to which the cloud box belongs, and `{CloudBoxId}` with the ID of the cloud box.
    shared_ptr<string> storageLocationArn_ {};
    // The image tags.
    shared_ptr<vector<ImportImageRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
