// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMPORTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMPORTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RetainImportedImage, retainImportedImage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RetainImportedImage, retainImportedImage_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions &&) = default ;
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
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string bootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setDiskDeviceMappings(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setDiskDeviceMappings(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures & features() const { DARABONBA_PTR_GET_CONST(features_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures features() { DARABONBA_PTR_GET(features_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setFeatures(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setFeatures(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string licenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // retainImportedImage Field Functions 
    bool hasRetainImportedImage() const { return this->retainImportedImage_ != nullptr;};
    void deleteRetainImportedImage() { this->retainImportedImage_ = nullptr;};
    inline bool retainImportedImage() const { DARABONBA_PTR_GET_DEFAULT(retainImportedImage_, false) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions& setRetainImportedImage(bool retainImportedImage) { DARABONBA_PTR_SET_VALUE(retainImportedImage_, retainImportedImage) };


  protected:
    // The operating system architecture. Valid values:
    // 
    // *   x86_64
    // *   arm64
    std::shared_ptr<string> architecture_ = nullptr;
    // The boot mode of the image. Valid values:
    // 
    // *   BIOS: BIOS mode
    // *   UEFI: Unified Extensible Firmware Interface (UEFI) mode
    std::shared_ptr<string> bootMode_ = nullptr;
    // The information of disks from which the custom images are created.
    // 
    // *   When the value of N is 1, a custom image is created from the system disk.
    // *   When the value of N is an integer in the range of 2 to 17, a custom image is created from a data disk.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The feature attributes of the image.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptionsFeatures> features_ = nullptr;
    // The type of the license to use to activate the operating system after the image is imported. Valid values:
    // 
    // *   Auto: ECS detects the operating system of the image and allocates a license to the operating system In this mode, the system first checks whether a license allocated by an official Alibaba Cloud channel is specified in the `Platform`. If a license allocated by an official Alibaba Cloud channel is specified, the system allocates the license to the imported image. If no such license is specified, the Bring Your Own License (BYOL) mode is used.
    // *   Aliyun: The license allocated through an official Alibaba Cloud channel is used for the operating system distribution specified by `Platform`.
    // *   BYOL: The license that comes with the source operating system is used. When you use the BYOL license, make sure that your license key is supported by Alibaba Cloud.
    std::shared_ptr<string> licenseType_ = nullptr;
    // The operating system type. Valid values:
    // 
    // *   windows: Windows operating systems
    // *   linux: Linux operating systems
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
    std::shared_ptr<string> platform_ = nullptr;
    // >  This parameter is in invitational preview.
    std::shared_ptr<bool> retainImportedImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
