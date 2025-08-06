// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMPORTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTIMPORTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings.hpp>
#include <alibabacloud/models/CreateImagePipelineRequestImportImageOptionsFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequestImportImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequestImportImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RetainImportedImage, retainImportedImage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequestImportImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RetainImportedImage, retainImportedImage_);
    };
    CreateImagePipelineRequestImportImageOptions() = default ;
    CreateImagePipelineRequestImportImageOptions(const CreateImagePipelineRequestImportImageOptions &) = default ;
    CreateImagePipelineRequestImportImageOptions(CreateImagePipelineRequestImportImageOptions &&) = default ;
    CreateImagePipelineRequestImportImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequestImportImageOptions() = default ;
    CreateImagePipelineRequestImportImageOptions& operator=(const CreateImagePipelineRequestImportImageOptions &) = default ;
    CreateImagePipelineRequestImportImageOptions& operator=(CreateImagePipelineRequestImportImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->bootMode_ != nullptr && this->diskDeviceMappings_ != nullptr && this->features_ != nullptr && this->licenseType_ != nullptr && this->OSType_ != nullptr
        && this->platform_ != nullptr && this->retainImportedImage_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateImagePipelineRequestImportImageOptions& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string bootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline CreateImagePipelineRequestImportImageOptions& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings> & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings>) };
    inline vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings> diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings>) };
    inline CreateImagePipelineRequestImportImageOptions& setDiskDeviceMappings(const vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings> & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline CreateImagePipelineRequestImportImageOptions& setDiskDeviceMappings(vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings> && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const Models::CreateImagePipelineRequestImportImageOptionsFeatures & features() const { DARABONBA_PTR_GET_CONST(features_, Models::CreateImagePipelineRequestImportImageOptionsFeatures) };
    inline Models::CreateImagePipelineRequestImportImageOptionsFeatures features() { DARABONBA_PTR_GET(features_, Models::CreateImagePipelineRequestImportImageOptionsFeatures) };
    inline CreateImagePipelineRequestImportImageOptions& setFeatures(const Models::CreateImagePipelineRequestImportImageOptionsFeatures & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline CreateImagePipelineRequestImportImageOptions& setFeatures(Models::CreateImagePipelineRequestImportImageOptionsFeatures && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string licenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline CreateImagePipelineRequestImportImageOptions& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline CreateImagePipelineRequestImportImageOptions& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateImagePipelineRequestImportImageOptions& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // retainImportedImage Field Functions 
    bool hasRetainImportedImage() const { return this->retainImportedImage_ != nullptr;};
    void deleteRetainImportedImage() { this->retainImportedImage_ = nullptr;};
    inline bool retainImportedImage() const { DARABONBA_PTR_GET_DEFAULT(retainImportedImage_, false) };
    inline CreateImagePipelineRequestImportImageOptions& setRetainImportedImage(bool retainImportedImage) { DARABONBA_PTR_SET_VALUE(retainImportedImage_, retainImportedImage) };


  protected:
    // The system architecture of the system disk. If you specify a data disk snapshot to create the system disk of the image, use Architecture to specify the system architecture of the system disk. Valid values:
    // 
    // *   x86_64
    // *   arm64
    // 
    // Default value: x86_64.
    std::shared_ptr<string> architecture_ = nullptr;
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS: BIOS mode
    // *   UEFI: Unified Extensible Firmware Interface (UEFI) mode
    // 
    // Default value: BIOS. If you set Architecture to `arm64`, set this parameter to UEFI.
    // 
    // >  Before you specify this parameter, make sure that you are familiar with the boot modes supported by the image. If you specify a boot mode that is not supported by the image, ECS instances created from the image cannot start as expected. For information about the boot modes of images, see the [Boot modes of images](~~2244655#b9caa9b8bb1wf~~) section of the "Best practices for ECS instance boot modes" topic.
    std::shared_ptr<string> bootMode_ = nullptr;
    // The information of disks from which the custom images are created.
    // 
    // *   When the N value is 1, this parameter creates a custom image from the system disk.
    // *   When the N value is an integer in the range of 2 to 17, this parameter creates a custom image from a data disk.
    std::shared_ptr<vector<Models::CreateImagePipelineRequestImportImageOptionsDiskDeviceMappings>> diskDeviceMappings_ = nullptr;
    // The attributes of the image.
    std::shared_ptr<Models::CreateImagePipelineRequestImportImageOptionsFeatures> features_ = nullptr;
    // The type of the license to use to activate the operating system after the image is imported. Valid values:
    // 
    // *   Auto: ECS detects the operating system of the image and allocates a license to the operating system. In this mode, the system first checks whether a license allocated by an official Alibaba Cloud channel is available for the operating system version specified by `Platform`. If a license allocated by an official Alibaba Cloud channel is available for the operating system version, the system allocates the license to the imported image. If no such license is available, the Bring Your Own License (BYOL) mode is used.
    // *   Aliyun: The license allocated by an official Alibaba Cloud channel for the operating system version specified by `Platform` is used.
    // *   BYOL: The license that comes with the source operating system is used. When you use the BYOL license, make sure that your license key is supported by Alibaba Cloud.
    // 
    // Default value: Auto.
    std::shared_ptr<string> licenseType_ = nullptr;
    // The operating system type. Valid values:
    // 
    // *   windows
    // *   linux
    // 
    // Default value: linux.
    std::shared_ptr<string> OSType_ = nullptr;
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
    // 
    // Default value: Others Linux when the operating system type is linux, and Other Windows when the operating system type is windows.
    std::shared_ptr<string> platform_ = nullptr;
    // >  This parameter is in invitational preview.
    std::shared_ptr<bool> retainImportedImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
