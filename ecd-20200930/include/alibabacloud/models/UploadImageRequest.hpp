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
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
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
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
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
    virtual bool empty() const override { return this->bootMode_ == nullptr
        && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->enableSecurityCheck_ == nullptr && this->gpuCategory_ == nullptr && this->gpuDriverType_ == nullptr
        && this->imageName_ == nullptr && this->licenseType_ == nullptr && this->osType_ == nullptr && this->ossObjectPath_ == nullptr && this->protocolType_ == nullptr
        && this->regionId_ == nullptr && this->systemDiskSize_ == nullptr; };
    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline UploadImageRequest& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


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
    shared_ptr<string> bootMode_ {};
    // The data cloud disk size. Valid values: 80 to 500. Unit: GiB.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The description of the image. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable security check.
    shared_ptr<bool> enableSecurityCheck_ {};
    // Specifies whether the image is a GPU image.
    shared_ptr<bool> gpuCategory_ {};
    // The type of the pre-installed GPU driver.
    shared_ptr<string> gpuDriverType_ {};
    // The image name. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), or hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> imageName_ {};
    // The license type used to activate the operating system after the image is imported. Valid values:
    // 
    // - Auto: Alibaba Cloud detects the source operating system and assigns a license. In automatic mode, the system first checks whether an Alibaba Cloud official license is available for the `Platform` you specified and assigns it to the imported image. If no such license is available, the system switches to BYOL (Bring Your Own License) mode.
    // - Aliyun: Uses an Alibaba Cloud official license based on the `Platform` you specified.
    // - BYOL: Uses the license that comes with the source operating system. When you use BYOL, make sure that your license key supports use on Alibaba Cloud.
    // 
    // Default value: Auto.
    // 
    // > Systems such as Windows 10 cannot be activated through Alibaba Cloud. Set `LicenseType` to BYOL for custom activation.
    shared_ptr<string> licenseType_ {};
    // The operating system type.
    shared_ptr<string> osType_ {};
    // The OSS object path of the image file.
    // 
    // This parameter is required.
    shared_ptr<string> ossObjectPath_ {};
    // The protocol type.
    shared_ptr<string> protocolType_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The system cloud disk size. Unit: GiB.
    // 
    // > The system cloud disk size cannot be smaller than the image file size.
    shared_ptr<string> systemDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
