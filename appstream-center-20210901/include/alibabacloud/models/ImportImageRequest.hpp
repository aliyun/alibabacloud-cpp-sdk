// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ImportImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableSecurityCheck, enableSecurityCheck_);
      DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_TO_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OssObjectPath, ossObjectPath_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableSecurityCheck, enableSecurityCheck_);
      DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_FROM_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OssObjectPath, ossObjectPath_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
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
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->bizType_ == nullptr && this->bootMode_ == nullptr && this->description_ == nullptr && this->enableSecurityCheck_ == nullptr && this->gpuCategory_ == nullptr
        && this->gpuDriverType_ == nullptr && this->imageName_ == nullptr && this->licenseType_ == nullptr && this->osType_ == nullptr && this->ossObjectPath_ == nullptr
        && this->productType_ == nullptr && this->protocolType_ == nullptr && this->systemDiskSize_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ImportImageRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ImportImageRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bootMode Field Functions 
    bool hasBootMode() const { return this->bootMode_ != nullptr;};
    void deleteBootMode() { this->bootMode_ = nullptr;};
    inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
    inline ImportImageRequest& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSecurityCheck Field Functions 
    bool hasEnableSecurityCheck() const { return this->enableSecurityCheck_ != nullptr;};
    void deleteEnableSecurityCheck() { this->enableSecurityCheck_ = nullptr;};
    inline bool getEnableSecurityCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSecurityCheck_, false) };
    inline ImportImageRequest& setEnableSecurityCheck(bool enableSecurityCheck) { DARABONBA_PTR_SET_VALUE(enableSecurityCheck_, enableSecurityCheck) };


    // gpuCategory Field Functions 
    bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
    void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
    inline bool getGpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, false) };
    inline ImportImageRequest& setGpuCategory(bool gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


    // gpuDriverType Field Functions 
    bool hasGpuDriverType() const { return this->gpuDriverType_ != nullptr;};
    void deleteGpuDriverType() { this->gpuDriverType_ = nullptr;};
    inline string getGpuDriverType() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverType_, "") };
    inline ImportImageRequest& setGpuDriverType(string gpuDriverType) { DARABONBA_PTR_SET_VALUE(gpuDriverType_, gpuDriverType) };


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


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ImportImageRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ossObjectPath Field Functions 
    bool hasOssObjectPath() const { return this->ossObjectPath_ != nullptr;};
    void deleteOssObjectPath() { this->ossObjectPath_ = nullptr;};
    inline string getOssObjectPath() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPath_, "") };
    inline ImportImageRequest& setOssObjectPath(string ossObjectPath) { DARABONBA_PTR_SET_VALUE(ossObjectPath_, ossObjectPath) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ImportImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ImportImageRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline ImportImageRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The business region ID, such as cn-hangzhou.
    shared_ptr<string> bizRegionId_ {};
    // The business line to which the image belongs. Default value: 1.
    shared_ptr<int32_t> bizType_ {};
    // The image boot mode. Valid values:
    // - BIOS: Legacy BIOS boot.
    // - UEFI: UEFI boot.
    shared_ptr<string> bootMode_ {};
    // The description of the image.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the image security check. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enableSecurityCheck_ {};
    // Specifies whether the image is a GPU image. Valid values:
    // - true: Yes.
    // - false: No.
    shared_ptr<bool> gpuCategory_ {};
    // The GPU driver type. Valid values:
    // - gpu_grid9: GRID 9 driver.
    // - gpu_grid12: GRID 12 driver.
    // - gpu_custom: Custom driver.
    shared_ptr<string> gpuDriverType_ {};
    // The name of the image after it is imported. This parameter cannot be empty.
    shared_ptr<string> imageName_ {};
    // The operating system license type. Valid values:
    // - Auto: Automatically selected.
    // - Aliyun: Provided by Alibaba Cloud.
    // - BYOL: Bring your own license.
    // Default value: Auto.
    shared_ptr<string> licenseType_ {};
    // The operating system type of the image file. It must be consistent with the actual operating system of the image, such as Windows or Linux.
    shared_ptr<string> osType_ {};
    // The complete OSS object URL of the image file to be imported, including the bucket domain name and file path. The file must be uploaded before you call this operation. Example: https://BucketName.oss-cn-hangzhou.aliyuncs.com/FilePath.
    shared_ptr<string> ossObjectPath_ {};
    // The product type. Currently, only CloudDesktop (Cloud Desktop) is supported.
    shared_ptr<string> productType_ {};
    // The image connection protocol. Valid values: ASP and HDX. Default value: ASP.
    shared_ptr<string> protocolType_ {};
    // The size of the system cloud disk. Unit: GiB.
    shared_ptr<int32_t> systemDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
