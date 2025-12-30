// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODY_HPP_
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
  class DescribeImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImagesResponseBody() = default ;
    DescribeImagesResponseBody(const DescribeImagesResponseBody &) = default ;
    DescribeImagesResponseBody(DescribeImagesResponseBody &&) = default ;
    DescribeImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBody() = default ;
    DescribeImagesResponseBody& operator=(const DescribeImagesResponseBody &) = default ;
    DescribeImagesResponseBody& operator=(DescribeImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
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
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->creationTime_ == nullptr && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->gpuCategory_ == nullptr && this->gpuDriverVersion_ == nullptr
        && this->imageId_ == nullptr && this->imageType_ == nullptr && this->name_ == nullptr && this->osType_ == nullptr && this->platform_ == nullptr
        && this->progress_ == nullptr && this->protocolType_ == nullptr && this->sessionType_ == nullptr && this->sharedCount_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr && this->supportedLanguages_ == nullptr && this->updateTime_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr; };
      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Images& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Images& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline Images& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Images& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gpuCategory Field Functions 
      bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
      void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
      inline bool getGpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, false) };
      inline Images& setGpuCategory(bool gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


      // gpuDriverVersion Field Functions 
      bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
      void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
      inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
      inline Images& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Images& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Images& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Images& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Images& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Images& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Images& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Images& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // sharedCount Field Functions 
      bool hasSharedCount() const { return this->sharedCount_ != nullptr;};
      void deleteSharedCount() { this->sharedCount_ = nullptr;};
      inline int32_t getSharedCount() const { DARABONBA_PTR_GET_DEFAULT(sharedCount_, 0) };
      inline Images& setSharedCount(int32_t sharedCount) { DARABONBA_PTR_SET_VALUE(sharedCount_, sharedCount) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Images& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Images& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportedLanguages Field Functions 
      bool hasSupportedLanguages() const { return this->supportedLanguages_ != nullptr;};
      void deleteSupportedLanguages() { this->supportedLanguages_ = nullptr;};
      inline const vector<string> & getSupportedLanguages() const { DARABONBA_PTR_GET_CONST(supportedLanguages_, vector<string>) };
      inline vector<string> getSupportedLanguages() { DARABONBA_PTR_GET(supportedLanguages_, vector<string>) };
      inline Images& setSupportedLanguages(const vector<string> & supportedLanguages) { DARABONBA_PTR_SET_VALUE(supportedLanguages_, supportedLanguages) };
      inline Images& setSupportedLanguages(vector<string> && supportedLanguages) { DARABONBA_PTR_SET_RVALUE(supportedLanguages_, supportedLanguages) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Images& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline Images& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline Images& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The version of the image.
      shared_ptr<string> appVersion_ {};
      // The time when the image was created.
      shared_ptr<string> creationTime_ {};
      // The size of the data disk. Unit: GiB.
      shared_ptr<int32_t> dataDiskSize_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // Indicates whether the image is a GPU-accelerated image.
      shared_ptr<bool> gpuCategory_ {};
      // The version number of the GPU driver.
      shared_ptr<string> gpuDriverVersion_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
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
      shared_ptr<string> imageType_ {};
      // The name of the image.
      shared_ptr<string> name_ {};
      // The type of the operating system.
      shared_ptr<string> osType_ {};
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
      shared_ptr<string> platform_ {};
      // The creation progress of the image. Unit: %.
      shared_ptr<string> progress_ {};
      // The protocol type.
      // 
      // Valid values:
      // 
      // *   HDX: High-definition Experience (HDX) protocol
      // *   ASP: in-house Adaptive Streaming Protocol (ASP) (recommended)
      shared_ptr<string> protocolType_ {};
      // The type of the image session.
      // 
      // Valid values:
      // 
      // *   SINGLE_SESSION: single-session image.
      // 
      // *   MULTIPLE_SESSION: multi-session image.
      shared_ptr<string> sessionType_ {};
      // The number of shared images.
      shared_ptr<int32_t> sharedCount_ {};
      // The size of the image. Unit: GiB.
      shared_ptr<int32_t> size_ {};
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
      shared_ptr<string> status_ {};
      // The languages of the operating system.
      shared_ptr<vector<string>> supportedLanguages_ {};
      // The time when the image was last modified.
      shared_ptr<string> updateTime_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->images_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<DescribeImagesResponseBody::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<DescribeImagesResponseBody::Images>) };
    inline vector<DescribeImagesResponseBody::Images> getImages() { DARABONBA_PTR_GET(images_, vector<DescribeImagesResponseBody::Images>) };
    inline DescribeImagesResponseBody& setImages(const vector<DescribeImagesResponseBody::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeImagesResponseBody& setImages(vector<DescribeImagesResponseBody::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the images.
    shared_ptr<vector<DescribeImagesResponseBody::Images>> images_ {};
    // The token that determines the start point of the next query. If this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
