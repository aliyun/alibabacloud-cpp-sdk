// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyImageAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyImageAttributeRequest() = default ;
    ModifyImageAttributeRequest(const ModifyImageAttributeRequest &) = default ;
    ModifyImageAttributeRequest(ModifyImageAttributeRequest &&) = default ;
    ModifyImageAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageAttributeRequest() = default ;
    ModifyImageAttributeRequest& operator=(const ModifyImageAttributeRequest &) = default ;
    ModifyImageAttributeRequest& operator=(ModifyImageAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // - v1: When you create an ECS instance from this image, you cannot set the metadata access mode to IMDSv2 only (hardened mode).
      // - v2: When you create an ECS instance from this image, you can set the metadata access mode to IMDSv2 only (hardened mode).
      // <notice>
      // 
      //   ImdsSupport cannot be changed from v2 to v1. If you need to change it, create a new image from the snapshot associated with this image and set the value to v1.
      // 
      // </notice>
      shared_ptr<string> imdsSupport_ {};
      // Modifies the NVMe support attribute of the image. If this parameter is not specified, the current value is retained.
      // >Notice: Before enabling this feature, make sure that the NVMe driver is pre-installed in the operating system. Recommended procedure: install the driver on an instance, create a custom image, and then call this operation. Forcibly enabling this feature without the driver will cause instance startup failures.
      shared_ptr<string> nvmeSupport_ {};
    };

    virtual bool empty() const override { return this->bootMode_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->features_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->licenseType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->status_ == nullptr; };
    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline ModifyImageAttributeRequest& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyImageAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyImageAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const ModifyImageAttributeRequest::Features & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, ModifyImageAttributeRequest::Features) };
    inline ModifyImageAttributeRequest::Features getFeatures() { DARABONBA_PTR_GET(features_, ModifyImageAttributeRequest::Features) };
    inline ModifyImageAttributeRequest& setFeatures(const ModifyImageAttributeRequest::Features & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ModifyImageAttributeRequest& setFeatures(ModifyImageAttributeRequest::Features && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline ModifyImageAttributeRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyImageAttributeRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ModifyImageAttributeRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline ModifyImageAttributeRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyImageAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyImageAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyImageAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyImageAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyImageAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyImageAttributeRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The boot mode of the image. Valid values:
    // - BIOS: Basic Input/Output System (BIOS) boot mode.
    // - UEFI: Unified Extensible Firmware Interface (UEFI) boot mode.
    // - UEFI-Preferred: dual boot mode.
    // 
    // 
    // <notice>
    // 
    //    To prevent instances from failing to start due to an unsupported boot mode, make sure that you understand the boot modes supported by the image before you modify this parameter. For more information about image boot modes, see [Image boot modes](~~2244655#b9caa9b8bb1wf~~).
    // 
    // </notice>
    shared_ptr<string> bootMode_ {};
    // The description of the custom image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // Default value: null, which indicates that the original description is retained.
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // The image feature attributes.
    shared_ptr<ModifyImageAttributeRequest::Features> features_ {};
    // The name of the image family. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`. It can contain digits, periods (.), colons (:), underscores (_), or hyphens (-).
    // 
    // Default value: null.
    shared_ptr<string> imageFamily_ {};
    // The ID of the custom image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The name of the custom image. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`. It can contain digits, periods (.), colons (:), underscores (_), or hyphens (-).
    // 
    // Default value: null, which indicates that the original name is retained.
    shared_ptr<string> imageName_ {};
    // The license type used to activate the operating system after the image is imported. Currently, only BYOL is supported.
    // 
    // BYOL: The license that comes with the source operating system. When you use BYOL, make sure that your license key supports use on Alibaba Cloud.
    shared_ptr<string> licenseType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the custom image. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The image status. Valid values:
    // 
    // - Deprecated: Sets the image to the deprecated state. If you have shared the custom image, you must unshare it before you can set it to the deprecated state. A deprecated image cannot be shared or copied. However, you can use the image to create instances or replace system disks.
    // - Available: Sets the image to the available state. You can restore a deprecated image to the available state.
    // 
    // > To roll back a custom image in an image family to the previous version, you can set the latest available custom image to the deprecated state. However, if the image is the only available custom image in the image family, the image family will have no available custom image for creating instances after the image is deprecated. Proceed with caution.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
