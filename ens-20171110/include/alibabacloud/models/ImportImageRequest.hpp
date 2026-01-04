// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DiskDeviceMapping : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskDeviceMapping& obj) { 
        DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
        DARABONBA_PTR_TO_JSON(OSSObject, OSSObject_);
        DARABONBA_PTR_TO_JSON(OSSRegion, OSSRegion_);
      };
      friend void from_json(const Darabonba::Json& j, DiskDeviceMapping& obj) { 
        DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
        DARABONBA_PTR_FROM_JSON(OSSObject, OSSObject_);
        DARABONBA_PTR_FROM_JSON(OSSRegion, OSSRegion_);
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
      virtual bool empty() const override { return this->OSSBucket_ == nullptr
        && this->OSSObject_ == nullptr && this->OSSRegion_ == nullptr; };
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


      // OSSRegion Field Functions 
      bool hasOSSRegion() const { return this->OSSRegion_ != nullptr;};
      void deleteOSSRegion() { this->OSSRegion_ = nullptr;};
      inline string getOSSRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSRegion_, "") };
      inline DiskDeviceMapping& setOSSRegion(string OSSRegion) { DARABONBA_PTR_SET_VALUE(OSSRegion_, OSSRegion) };


    protected:
      // The OSS Bucket where the image is stored.
      shared_ptr<string> OSSBucket_ {};
      // The filename (key) of the image file after it is uploaded to the OSS Bucket.
      shared_ptr<string> OSSObject_ {};
      // The Region where the image is located.
      shared_ptr<string> OSSRegion_ {};
    };

    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->computeType_ == nullptr && this->diskDeviceMapping_ == nullptr && this->imageFormat_ == nullptr && this->imageName_ == nullptr && this->licenseType_ == nullptr
        && this->OSSBucket_ == nullptr && this->OSSObject_ == nullptr && this->OSSRegion_ == nullptr && this->OSType_ == nullptr && this->OSVersion_ == nullptr
        && this->platform_ == nullptr && this->targetOSSRegionId_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ImportImageRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // computeType Field Functions 
    bool hasComputeType() const { return this->computeType_ != nullptr;};
    void deleteComputeType() { this->computeType_ = nullptr;};
    inline string getComputeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
    inline ImportImageRequest& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<ImportImageRequest::DiskDeviceMapping> & getDiskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<ImportImageRequest::DiskDeviceMapping>) };
    inline vector<ImportImageRequest::DiskDeviceMapping> getDiskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<ImportImageRequest::DiskDeviceMapping>) };
    inline ImportImageRequest& setDiskDeviceMapping(const vector<ImportImageRequest::DiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline ImportImageRequest& setDiskDeviceMapping(vector<ImportImageRequest::DiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string getImageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline ImportImageRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


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


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ImportImageRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSObject Field Functions 
    bool hasOSSObject() const { return this->OSSObject_ != nullptr;};
    void deleteOSSObject() { this->OSSObject_ = nullptr;};
    inline string getOSSObject() const { DARABONBA_PTR_GET_DEFAULT(OSSObject_, "") };
    inline ImportImageRequest& setOSSObject(string OSSObject) { DARABONBA_PTR_SET_VALUE(OSSObject_, OSSObject) };


    // OSSRegion Field Functions 
    bool hasOSSRegion() const { return this->OSSRegion_ != nullptr;};
    void deleteOSSRegion() { this->OSSRegion_ = nullptr;};
    inline string getOSSRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSRegion_, "") };
    inline ImportImageRequest& setOSSRegion(string OSSRegion) { DARABONBA_PTR_SET_VALUE(OSSRegion_, OSSRegion) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ImportImageRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // OSVersion Field Functions 
    bool hasOSVersion() const { return this->OSVersion_ != nullptr;};
    void deleteOSVersion() { this->OSVersion_ = nullptr;};
    inline string getOSVersion() const { DARABONBA_PTR_GET_DEFAULT(OSVersion_, "") };
    inline ImportImageRequest& setOSVersion(string OSVersion) { DARABONBA_PTR_SET_VALUE(OSVersion_, OSVersion) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ImportImageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // targetOSSRegionId Field Functions 
    bool hasTargetOSSRegionId() const { return this->targetOSSRegionId_ != nullptr;};
    void deleteTargetOSSRegionId() { this->targetOSSRegionId_ = nullptr;};
    inline string getTargetOSSRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetOSSRegionId_, "") };
    inline ImportImageRequest& setTargetOSSRegionId(string targetOSSRegionId) { DARABONBA_PTR_SET_VALUE(targetOSSRegionId_, targetOSSRegionId) };


  protected:
    // System architecture. Allowed values:</br>
    // 
    // - x86_64.</br>
    // 
    // Currently, only x86_64 is supported.
    // 
    // This parameter is required.
    shared_ptr<string> architecture_ {};
    // `Image Type`
    // ens_vm: ens virtual machine image (default)
    // 
    // This parameter is required.
    shared_ptr<string> computeType_ {};
    // List of custom image information being created.
    shared_ptr<vector<ImportImageRequest::DiskDeviceMapping>> diskDeviceMapping_ {};
    // Image format. Allowed values:</br>
    // qcow2.</br>
    // Currently, only qcow2 is supported.
    // 
    // This parameter is required.
    shared_ptr<string> imageFormat_ {};
    // Image name. The length should be [2, 128] English or Chinese characters. It must start with a letter (uppercase or lowercase) or a Chinese character, and cannot start with http:// or https://. It can contain numbers, colons (:), underscores (_), or hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> imageName_ {};
    shared_ptr<string> licenseType_ {};
    // The OSS Bucket where the image file is located.
    shared_ptr<string> OSSBucket_ {};
    // The name of the image file.
    shared_ptr<string> OSSObject_ {};
    // The Region where the image is located. Currently, only cn-beijing is supported.
    shared_ptr<string> OSSRegion_ {};
    // Operating system platform type. Allowed values:
    // 
    // - windows.
    // - linux.
    // 
    // Currently, only linux is supported.
    // 
    // This parameter is required.
    shared_ptr<string> OSType_ {};
    // Operating system distribution version
    shared_ptr<string> OSVersion_ {};
    // Operating system distribution. Allowed values:
    // * centos
    // * ubuntu
    shared_ptr<string> platform_ {};
    // The target OSS region where the image will be stored.</br>
    // 
    // > Currently, only cn-beijing and ap-southeast-1 are supported.
    shared_ptr<string> targetOSSRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
