// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(SharedCount, sharedCount_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedLanguages, supportedLanguages_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(SharedCount, sharedCount_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedLanguages, supportedLanguages_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    DescribeImagesResponseBodyImages() = default ;
    DescribeImagesResponseBodyImages(const DescribeImagesResponseBodyImages &) = default ;
    DescribeImagesResponseBodyImages(DescribeImagesResponseBodyImages &&) = default ;
    DescribeImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImages() = default ;
    DescribeImagesResponseBodyImages& operator=(const DescribeImagesResponseBodyImages &) = default ;
    DescribeImagesResponseBodyImages& operator=(DescribeImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && return this->creationTime_ == nullptr && return this->dataDiskSize_ == nullptr && return this->description_ == nullptr && return this->gpuCategory_ == nullptr && return this->gpuDriverVersion_ == nullptr
        && return this->imageId_ == nullptr && return this->imageType_ == nullptr && return this->name_ == nullptr && return this->osType_ == nullptr && return this->platform_ == nullptr
        && return this->progress_ == nullptr && return this->protocolType_ == nullptr && return this->sessionType_ == nullptr && return this->sharedCount_ == nullptr && return this->size_ == nullptr
        && return this->status_ == nullptr && return this->supportedLanguages_ == nullptr && return this->updateTime_ == nullptr && return this->volumeEncryptionEnabled_ == nullptr && return this->volumeEncryptionKey_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline DescribeImagesResponseBodyImages& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImagesResponseBodyImages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribeImagesResponseBodyImages& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gpuCategory Field Functions 
    bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
    void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
    inline bool gpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, false) };
    inline DescribeImagesResponseBodyImages& setGpuCategory(bool gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeImagesResponseBodyImages& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeImagesResponseBodyImages& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImagesResponseBodyImages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeImagesResponseBodyImages& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeImagesResponseBodyImages& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeImagesResponseBodyImages& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeImagesResponseBodyImages& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeImagesResponseBodyImages& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // sharedCount Field Functions 
    bool hasSharedCount() const { return this->sharedCount_ != nullptr;};
    void deleteSharedCount() { this->sharedCount_ = nullptr;};
    inline int32_t sharedCount() const { DARABONBA_PTR_GET_DEFAULT(sharedCount_, 0) };
    inline DescribeImagesResponseBodyImages& setSharedCount(int32_t sharedCount) { DARABONBA_PTR_SET_VALUE(sharedCount_, sharedCount) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeImagesResponseBodyImages& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImagesResponseBodyImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedLanguages Field Functions 
    bool hasSupportedLanguages() const { return this->supportedLanguages_ != nullptr;};
    void deleteSupportedLanguages() { this->supportedLanguages_ = nullptr;};
    inline const vector<string> & supportedLanguages() const { DARABONBA_PTR_GET_CONST(supportedLanguages_, vector<string>) };
    inline vector<string> supportedLanguages() { DARABONBA_PTR_GET(supportedLanguages_, vector<string>) };
    inline DescribeImagesResponseBodyImages& setSupportedLanguages(const vector<string> & supportedLanguages) { DARABONBA_PTR_SET_VALUE(supportedLanguages_, supportedLanguages) };
    inline DescribeImagesResponseBodyImages& setSupportedLanguages(vector<string> && supportedLanguages) { DARABONBA_PTR_SET_RVALUE(supportedLanguages_, supportedLanguages) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeImagesResponseBodyImages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeImagesResponseBodyImages& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeImagesResponseBodyImages& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The version of the image.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the image is a GPU-accelerated image.
    std::shared_ptr<bool> gpuCategory_ = nullptr;
    // The version number of the GPU driver.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the image.
    // 
    // Valid values:
    // 
    // *   SYSTEM
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CUSTOM
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> imageType_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> osType_ = nullptr;
    // The operating system type of the image.
    // 
    // Valid values:
    // 
    // *   Ubuntu
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows Server 2022
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   UOS
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CentOS
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows Server 2019
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   SQL Server 2016
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows 10
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> platform_ = nullptr;
    // The creation progress of the image. Unit: %.
    std::shared_ptr<string> progress_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX) protocol
    // *   ASP: in-house Adaptive Streaming Protocol (ASP) (recommended)
    std::shared_ptr<string> protocolType_ = nullptr;
    // The type of the image session.
    // 
    // Valid values:
    // 
    // *   SINGLE_SESSION: single-session image.
    // 
    // *   MULTIPLE_SESSION: multi-session image.
    std::shared_ptr<string> sessionType_ = nullptr;
    // The number of shared images.
    std::shared_ptr<int32_t> sharedCount_ = nullptr;
    // The size of the image. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The status of the image.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Available
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CreateFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The languages of the operating system.
    std::shared_ptr<vector<string>> supportedLanguages_ = nullptr;
    // The time when the image was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
