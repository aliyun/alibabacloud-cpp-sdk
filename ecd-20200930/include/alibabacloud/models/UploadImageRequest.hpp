// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UploadImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableSecurityCheck, enableSecurityCheck_);
      DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_TO_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OssObjectPath, ossObjectPath_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, UploadImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableSecurityCheck, enableSecurityCheck_);
      DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_FROM_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OssObjectPath, ossObjectPath_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    UploadImageRequest() = default ;
    UploadImageRequest(const UploadImageRequest &) = default ;
    UploadImageRequest(UploadImageRequest &&) = default ;
    UploadImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadImageRequest() = default ;
    UploadImageRequest& operator=(const UploadImageRequest &) = default ;
    UploadImageRequest& operator=(UploadImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskSize_ == nullptr
        && this->description_ == nullptr && this->enableSecurityCheck_ == nullptr && this->gpuCategory_ == nullptr && this->gpuDriverType_ == nullptr && this->imageName_ == nullptr
        && this->licenseType_ == nullptr && this->osType_ == nullptr && this->ossObjectPath_ == nullptr && this->protocolType_ == nullptr && this->regionId_ == nullptr
        && this->systemDiskSize_ == nullptr; };
    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline UploadImageRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSecurityCheck Field Functions 
    bool hasEnableSecurityCheck() const { return this->enableSecurityCheck_ != nullptr;};
    void deleteEnableSecurityCheck() { this->enableSecurityCheck_ = nullptr;};
    inline bool getEnableSecurityCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSecurityCheck_, false) };
    inline UploadImageRequest& setEnableSecurityCheck(bool enableSecurityCheck) { DARABONBA_PTR_SET_VALUE(enableSecurityCheck_, enableSecurityCheck) };


    // gpuCategory Field Functions 
    bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
    void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
    inline bool getGpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, false) };
    inline UploadImageRequest& setGpuCategory(bool gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


    // gpuDriverType Field Functions 
    bool hasGpuDriverType() const { return this->gpuDriverType_ != nullptr;};
    void deleteGpuDriverType() { this->gpuDriverType_ = nullptr;};
    inline string getGpuDriverType() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverType_, "") };
    inline UploadImageRequest& setGpuDriverType(string gpuDriverType) { DARABONBA_PTR_SET_VALUE(gpuDriverType_, gpuDriverType) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline UploadImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline UploadImageRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline UploadImageRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ossObjectPath Field Functions 
    bool hasOssObjectPath() const { return this->ossObjectPath_ != nullptr;};
    void deleteOssObjectPath() { this->ossObjectPath_ = nullptr;};
    inline string getOssObjectPath() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPath_, "") };
    inline UploadImageRequest& setOssObjectPath(string ossObjectPath) { DARABONBA_PTR_SET_VALUE(ossObjectPath_, ossObjectPath) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline UploadImageRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline string getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, "") };
    inline UploadImageRequest& setSystemDiskSize(string systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The size of the data disk. Valid values: 80 to 500. Unit: GiB.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The description of the image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable security check.
    shared_ptr<bool> enableSecurityCheck_ {};
    // Specifies whether the image is a GPU-accelerated image.
    shared_ptr<bool> gpuCategory_ {};
    // The type of the pre-installed GPU driver.
    // 
    // Valid values:
    // 
    // *   gpu_grid9: This GPU driver is used on cloud computers of the following two specifications: graphics – 4 vCPUs, 23 GiB memory, 4 GiB GPU memory, and graphics – 10 vCPUs, 46 GiB memory, 8 GiB GPU memory.
    // *   gpu_custom: You can install the driver later.
    // *   gpu_grid12: This GPU driver is used on graphical cloud computers of specifications other than the following two specifications: graphics – 4 vCPUs, 23 GiB memory, & 4 GiB GPU memory, and graphics – 10 vCPUs, 46 GiB memory, & 8 GiB GPU memory.
    shared_ptr<string> gpuDriverType_ {};
    // The name of the image. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> imageName_ {};
    // The type of the license that is used to activate the operating system after the image is imported. Valid values:
    // 
    // *   Auto: Elastic Desktop Service detects the operating system of the image and allocates a license to the operating system. In this mode, the system first checks whether a license allocated by an official Alibaba Cloud channel is specified in the `Platform`. If a license allocated by an official Alibaba Cloud channel is specified, the system allocates the license to the imported image. If no such license is specified, the BYOL (Bring Your Own License) mode is used.
    // *   Aliyun: The license that is allocated by an official Alibaba Cloud channel and is specified by `Platform` is used for the operating system distribution.
    // *   BYOL: The license that comes with the source operating system is used. When you use the BYOL mode, make sure that your license key is supported by Alibaba Cloud.
    // 
    // Default value: Auto.
    // 
    // >  Windows 10 cannot be activated by Alibaba Cloud. Set the `LicenseType` to BYOL for Windows 10.
    shared_ptr<string> licenseType_ {};
    // The type of the operating system.
    // 
    // Valid values:
    // 
    // *   Linux
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> osType_ {};
    // The object path of the image file in Object Storage Service (OSS).
    // 
    // This parameter is required.
    shared_ptr<string> ossObjectPath_ {};
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   ASP: in-house Adaptive Streaming Protocol (ASP)
    shared_ptr<string> protocolType_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The size of the system disk. Unit: GiB.
    // 
    // >  The system disk must be at least as large as the image.
    shared_ptr<string> systemDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
