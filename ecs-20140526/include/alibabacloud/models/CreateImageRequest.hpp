// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEREQUEST_HPP_
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
  class CreateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectionStrategy, detectionStrategy_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectionStrategy, detectionStrategy_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateImageRequest() = default ;
    CreateImageRequest(const CreateImageRequest &) = default ;
    CreateImageRequest(CreateImageRequest &&) = default ;
    CreateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageRequest() = default ;
    CreateImageRequest& operator=(const CreateImageRequest &) = default ;
    CreateImageRequest& operator=(CreateImageRequest &&) = default ;
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
      // The key of tag N of the custom image. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N of the custom image. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
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
      virtual bool empty() const override { return this->imdsSupport_ == nullptr; };
      // imdsSupport Field Functions 
      bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
      void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
      inline string getImdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
      inline Features& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


    protected:
      // The image metadata access mode. Valid values:
      // 
      // *   v1: You cannot set the image metadata access mode to security hardening when you create instances from the image.
      // *   v2: You can set the image metadata access mode to security hardening when you create instances from the image.
      // 
      // When you use a snapshot to create instances, the default value is set to 1. If you use an instance to create an image, the value of the ImdsSupport parameter is used by default.
      shared_ptr<string> imdsSupport_ {};
    };

    class DiskDeviceMapping : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskDeviceMapping& obj) { 
        DARABONBA_PTR_TO_JSON(Device, device_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      };
      friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
        DARABONBA_PTR_FROM_JSON(Device, device_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
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
        && this->diskType_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr; };
      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
      inline DiskDeviceMapping& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline DiskDeviceMapping& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DiskDeviceMapping& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline DiskDeviceMapping& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    protected:
      // The device name of disk N in the custom image. Valid values:
      // 
      // *   The device name of the system disk must be /dev/xvda.
      // *   The device names of the data disks are unique and range from /dev/xvdb to /dev/xvdz in alphabetical order.
      shared_ptr<string> device_ {};
      // The type of disk N in the custom image. You can specify this parameter to create the system disk of the custom image from a data disk snapshot. If you do not specify this parameter, the disk type is determined by the corresponding snapshot. Valid values:
      // 
      // *   system: system disk. You can specify only one snapshot to use to create the system disk in the custom image.
      // *   data: data disk. You can specify up to 16 snapshots to use to create data disks in the custom image.
      shared_ptr<string> diskType_ {};
      // The size of disk N in the custom image. Unit: GiB. The valid values and default value of DiskDeviceMapping.N.Size vary based on the value of DiskDeviceMapping.N.SnapshotId.
      // 
      // *   If you leave DiskDeviceMapping.N.SnapshotId empty, DiskDeviceMapping.N.Size has the following valid values and default values:
      // 
      //     *   For basic disks, the valid values range from 5 to 2000, and the default value is 5.
      //     *   For other disks, the valid values range from 20 to 32768, and the default value is 20.
      // 
      // *   If you specify DiskDeviceMapping.N.SnapshotId, the value of DiskDeviceMapping.N.Size must be greater than or equal to the size of the specified snapshot. The default value of DiskDeviceMapping.N.Size is the size of the specified snapshot.
      shared_ptr<int32_t> size_ {};
      // The ID of the snapshot.
      shared_ptr<string> snapshotId_ {};
    };

    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->bootMode_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->detectionStrategy_ == nullptr && this->diskDeviceMapping_ == nullptr
        && this->dryRun_ == nullptr && this->features_ == nullptr && this->imageFamily_ == nullptr && this->imageName_ == nullptr && this->imageVersion_ == nullptr
        && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->snapshotId_ == nullptr && this->tag_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateImageRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline CreateImageRequest& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectionStrategy Field Functions 
    bool hasDetectionStrategy() const { return this->detectionStrategy_ != nullptr;};
    void deleteDetectionStrategy() { this->detectionStrategy_ = nullptr;};
    inline string getDetectionStrategy() const { DARABONBA_PTR_GET_DEFAULT(detectionStrategy_, "") };
    inline CreateImageRequest& setDetectionStrategy(string detectionStrategy) { DARABONBA_PTR_SET_VALUE(detectionStrategy_, detectionStrategy) };


    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<CreateImageRequest::DiskDeviceMapping> & getDiskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<CreateImageRequest::DiskDeviceMapping>) };
    inline vector<CreateImageRequest::DiskDeviceMapping> getDiskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<CreateImageRequest::DiskDeviceMapping>) };
    inline CreateImageRequest& setDiskDeviceMapping(const vector<CreateImageRequest::DiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline CreateImageRequest& setDiskDeviceMapping(vector<CreateImageRequest::DiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateImageRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const CreateImageRequest::Features & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, CreateImageRequest::Features) };
    inline CreateImageRequest::Features getFeatures() { DARABONBA_PTR_GET(features_, CreateImageRequest::Features) };
    inline CreateImageRequest& setFeatures(const CreateImageRequest::Features & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline CreateImageRequest& setFeatures(CreateImageRequest::Features && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateImageRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline CreateImageRequest& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateImageRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateImageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateImageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateImageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateImageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateImageRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateImageRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateImageRequest::Tag>) };
    inline vector<CreateImageRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateImageRequest::Tag>) };
    inline CreateImageRequest& setTag(const vector<CreateImageRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateImageRequest& setTag(vector<CreateImageRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The system architecture of the system disk. If you specify a data disk snapshot to create the system disk of the custom image, use Architecture to specify the system architecture of the system disk. Valid values:
    // 
    // *   i386
    // *   x86_64
    // *   arm64
    // 
    // Default value: x86_64.
    shared_ptr<string> architecture_ {};
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS: BIOS mode
    // *   UEFI: Unified Extensible Firmware Interface (UEFI) mode
    // *   UEFI-Preferred (default): BIOS mode and UEFI mode
    // 
    // >  Before you specify this parameter, make sure that you are familiar with the boot modes supported by the image. If you specify a boot mode that is not supported by the image, ECS instances created from the image cannot start as expected. For information about the boot modes of images, see the [Boot modes of images](~~2244655#b9caa9b8bb1wf~~) section of the "Best practices for ECS instance boot modes" topic.
    shared_ptr<string> bootMode_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The value of **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The image description. The description must be 2 to 256 characters in length and cannot start with [http:// or https://.](http://https://。)
    shared_ptr<string> description_ {};
    // The mode in which to check the custom image. If you do not specify this parameter, the image is not checked. Only the standard check mode is supported.
    // 
    // >  This parameter is supported for most Linux and Windows operating system versions. For information about image check items and operating system limits for image check, see [Overview of image check](https://help.aliyun.com/document_detail/439819.html) and [Operating system limits for image check](https://help.aliyun.com/document_detail/475800.html).
    shared_ptr<string> detectionStrategy_ {};
    // Details of the disks and snapshots from which the custom image is created. If you want to create a custom image based on a system disk snapshot and data disk snapshots, use this parameter to specify the snapshots.
    shared_ptr<vector<CreateImageRequest::DiskDeviceMapping>> diskDeviceMapping_ {};
    shared_ptr<bool> dryRun_ {};
    // The attributes of the custom image.
    shared_ptr<CreateImageRequest::Features> features_ {};
    // The name of the image family. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with acs: or aliyun. The name cannot contain http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> imageFamily_ {};
    // The name of the custom image. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> imageName_ {};
    // The image version.
    // 
    // >  If you specify an ECS instance that runs an Alibaba Cloud Marketplace image or a custom image derived from an Alibaba Cloud Marketplace image by using `InstanceId`, you must leave this parameter empty or set this parameter to the `ImageVersion` value of the image run by the specified ECS instance.
    shared_ptr<string> imageVersion_ {};
    // The ID of the ECS instance from which to create the custom image. To create a custom image from an ECS instance, you must specify this parameter.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The operating system distribution for the system disk in the custom image. If you specify a data disk snapshot to create the system disk of the custom image, use Platform to specify the operating system distribution for the system disk. Valid values:
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
    // The region ID of the custom image that you want to create. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent list of regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the custom image. If you leave this parameter empty, the image is assigned to the default resource group.
    // 
    // >  If you call the CreateImage operation as a Resource Access Management (RAM) user who does not have permissions on the default resource group and leave `ResourceGroupId` empty, the `Forbidden: User not authorized to operate on the specified resource` error message is returned. You must specify the ID of a resource group on which the RAM user has permissions or grant the RAM user permissions on the default resource group, and then call the CreateImage operation again.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the snapshot from which to create the custom image.
    // 
    // >  To create a custom image from only a system disk snapshot of an ECS instance, you can specify this parameter or `DiskDeviceMapping.N.SnapshotId` to specify the snapshot ID. If you add data disk snapshots, you can use only `DiskDeviceMapping.N.SnapshotId` to specify snapshots.
    shared_ptr<string> snapshotId_ {};
    // The tags.
    shared_ptr<vector<CreateImageRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
