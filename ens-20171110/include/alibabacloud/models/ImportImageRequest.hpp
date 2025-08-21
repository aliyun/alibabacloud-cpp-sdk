// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportImageRequestDiskDeviceMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ImportImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_TO_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
      DARABONBA_PTR_TO_JSON(OSSRegion, OSSRegion_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(OSVersion, OSVersion_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TargetOSSRegionId, targetOSSRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
      DARABONBA_PTR_FROM_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
      DARABONBA_PTR_FROM_JSON(OSSRegion, OSSRegion_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(OSVersion, OSVersion_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(TargetOSSRegionId, targetOSSRegionId_);
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
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->computeType_ != nullptr && this->diskDeviceMapping_ != nullptr && this->imageFormat_ != nullptr && this->imageName_ != nullptr && this->licenseType_ != nullptr
        && this->OSSBucket_ != nullptr && this->OSSObject_ != nullptr && this->OSSRegion_ != nullptr && this->OSType_ != nullptr && this->OSVersion_ != nullptr
        && this->platform_ != nullptr && this->targetOSSRegionId_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ImportImageRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // computeType Field Functions 
    bool hasComputeType() const { return this->computeType_ != nullptr;};
    void deleteComputeType() { this->computeType_ = nullptr;};
    inline string computeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
    inline ImportImageRequest& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<ImportImageRequestDiskDeviceMapping> & diskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<ImportImageRequestDiskDeviceMapping>) };
    inline vector<ImportImageRequestDiskDeviceMapping> diskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<ImportImageRequestDiskDeviceMapping>) };
    inline ImportImageRequest& setDiskDeviceMapping(const vector<ImportImageRequestDiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline ImportImageRequest& setDiskDeviceMapping(vector<ImportImageRequestDiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string imageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline ImportImageRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ImportImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string licenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline ImportImageRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ImportImageRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSObject Field Functions 
    bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
    void deleteOSSObject() { this->OSSObject_ = nullptr;};
    inline string OSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
    inline ImportImageRequest& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


    // OSSRegion Field Functions 
    bool hasOSSRegion() const { return this->OSSRegion_ != nullptr;};
    void deleteOSSRegion() { this->OSSRegion_ = nullptr;};
    inline string OSSRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSRegion_, "") };
    inline ImportImageRequest& setOSSRegion(string OSSRegion) { DARABONBA_PTR_SET_VALUE(OSSRegion_, OSSRegion) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ImportImageRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // OSVersion Field Functions 
    bool hasOSVersion() const { return this->OSVersion_ != nullptr;};
    void deleteOSVersion() { this->OSVersion_ = nullptr;};
    inline string OSVersion() const { DARABONBA_PTR_GET_DEFAULT(OSVersion_, "") };
    inline ImportImageRequest& setOSVersion(string OSVersion) { DARABONBA_PTR_SET_VALUE(OSVersion_, OSVersion) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ImportImageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // targetOSSRegionId Field Functions 
    bool hasTargetOSSRegionId() const { return this->targetOSSRegionId_ != nullptr;};
    void deleteTargetOSSRegionId() { this->targetOSSRegionId_ = nullptr;};
    inline string targetOSSRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetOSSRegionId_, "") };
    inline ImportImageRequest& setTargetOSSRegionId(string targetOSSRegionId) { DARABONBA_PTR_SET_VALUE(targetOSSRegionId_, targetOSSRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> architecture_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> computeType_ = nullptr;
    std::shared_ptr<vector<ImportImageRequestDiskDeviceMapping>> diskDeviceMapping_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageFormat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<string> licenseType_ = nullptr;
    std::shared_ptr<string> OSSBucket_ = nullptr;
    std::shared_ptr<string> OSSObject_ = nullptr;
    std::shared_ptr<string> OSSRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> OSType_ = nullptr;
    std::shared_ptr<string> OSVersion_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> targetOSSRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
