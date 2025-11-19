// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODYUPLOADDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODYUPLOADDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadDetailsResponseBodyUploadDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDetailsResponseBodyUploadDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UploadIP, uploadIP_);
      DARABONBA_PTR_TO_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_TO_JSON(UploadSize, uploadSize_);
      DARABONBA_PTR_TO_JSON(UploadSource, uploadSource_);
      DARABONBA_PTR_TO_JSON(UploadStatus, uploadStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDetailsResponseBodyUploadDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UploadIP, uploadIP_);
      DARABONBA_PTR_FROM_JSON(UploadRatio, uploadRatio_);
      DARABONBA_PTR_FROM_JSON(UploadSize, uploadSize_);
      DARABONBA_PTR_FROM_JSON(UploadSource, uploadSource_);
      DARABONBA_PTR_FROM_JSON(UploadStatus, uploadStatus_);
    };
    GetUploadDetailsResponseBodyUploadDetails() = default ;
    GetUploadDetailsResponseBodyUploadDetails(const GetUploadDetailsResponseBodyUploadDetails &) = default ;
    GetUploadDetailsResponseBodyUploadDetails(GetUploadDetailsResponseBodyUploadDetails &&) = default ;
    GetUploadDetailsResponseBodyUploadDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDetailsResponseBodyUploadDetails() = default ;
    GetUploadDetailsResponseBodyUploadDetails& operator=(const GetUploadDetailsResponseBodyUploadDetails &) = default ;
    GetUploadDetailsResponseBodyUploadDetails& operator=(GetUploadDetailsResponseBodyUploadDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completionTime_ == nullptr
        && return this->creationTime_ == nullptr && return this->deviceModel_ == nullptr && return this->fileSize_ == nullptr && return this->mediaId_ == nullptr && return this->modificationTime_ == nullptr
        && return this->status_ == nullptr && return this->title_ == nullptr && return this->uploadIP_ == nullptr && return this->uploadRatio_ == nullptr && return this->uploadSize_ == nullptr
        && return this->uploadSource_ == nullptr && return this->uploadStatus_ == nullptr; };
    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline string completionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetUploadDetailsResponseBodyUploadDetails& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uploadIP Field Functions 
    bool hasUploadIP() const { return this->uploadIP_ != nullptr;};
    void deleteUploadIP() { this->uploadIP_ = nullptr;};
    inline string uploadIP() const { DARABONBA_PTR_GET_DEFAULT(uploadIP_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setUploadIP(string uploadIP) { DARABONBA_PTR_SET_VALUE(uploadIP_, uploadIP) };


    // uploadRatio Field Functions 
    bool hasUploadRatio() const { return this->uploadRatio_ != nullptr;};
    void deleteUploadRatio() { this->uploadRatio_ = nullptr;};
    inline float uploadRatio() const { DARABONBA_PTR_GET_DEFAULT(uploadRatio_, 0.0) };
    inline GetUploadDetailsResponseBodyUploadDetails& setUploadRatio(float uploadRatio) { DARABONBA_PTR_SET_VALUE(uploadRatio_, uploadRatio) };


    // uploadSize Field Functions 
    bool hasUploadSize() const { return this->uploadSize_ != nullptr;};
    void deleteUploadSize() { this->uploadSize_ = nullptr;};
    inline int64_t uploadSize() const { DARABONBA_PTR_GET_DEFAULT(uploadSize_, 0L) };
    inline GetUploadDetailsResponseBodyUploadDetails& setUploadSize(int64_t uploadSize) { DARABONBA_PTR_SET_VALUE(uploadSize_, uploadSize) };


    // uploadSource Field Functions 
    bool hasUploadSource() const { return this->uploadSource_ != nullptr;};
    void deleteUploadSource() { this->uploadSource_ = nullptr;};
    inline string uploadSource() const { DARABONBA_PTR_GET_DEFAULT(uploadSource_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setUploadSource(string uploadSource) { DARABONBA_PTR_SET_VALUE(uploadSource_, uploadSource) };


    // uploadStatus Field Functions 
    bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
    void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
    inline string uploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
    inline GetUploadDetailsResponseBodyUploadDetails& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


  protected:
    // The time when the upload job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completionTime_ = nullptr;
    // The time when the upload job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The device model.
    std::shared_ptr<string> deviceModel_ = nullptr;
    // The size of the uploaded file. Unit: byte.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The ID of the uploaded audio or video.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The time when the information about the media file was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The status of the video. For more information about the valid values and value description of the parameter, see the "Status: the status of a video" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
    std::shared_ptr<string> status_ = nullptr;
    // The title of the media file.
    std::shared_ptr<string> title_ = nullptr;
    // The IP address of the server that uploads the media file.
    std::shared_ptr<string> uploadIP_ = nullptr;
    // The upload ratio.
    std::shared_ptr<float> uploadRatio_ = nullptr;
    // The upload size. Unit: byte.
    std::shared_ptr<int64_t> uploadSize_ = nullptr;
    // The method that is used to upload the media file.
    std::shared_ptr<string> uploadSource_ = nullptr;
    // The status of the upload job. For more information about the valid values and value description of the parameter, see the "Status: the status of a URL-based upload job" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
    std::shared_ptr<string> uploadStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
