// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODYURLUPLOADINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODYURLUPLOADINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetURLUploadInfosResponseBodyURLUploadInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetURLUploadInfosResponseBodyURLUploadInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UploadURL, uploadURL_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetURLUploadInfosResponseBodyURLUploadInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UploadURL, uploadURL_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetURLUploadInfosResponseBodyURLUploadInfoList() = default ;
    GetURLUploadInfosResponseBodyURLUploadInfoList(const GetURLUploadInfosResponseBodyURLUploadInfoList &) = default ;
    GetURLUploadInfosResponseBodyURLUploadInfoList(GetURLUploadInfosResponseBodyURLUploadInfoList &&) = default ;
    GetURLUploadInfosResponseBodyURLUploadInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetURLUploadInfosResponseBodyURLUploadInfoList() = default ;
    GetURLUploadInfosResponseBodyURLUploadInfoList& operator=(const GetURLUploadInfosResponseBodyURLUploadInfoList &) = default ;
    GetURLUploadInfosResponseBodyURLUploadInfoList& operator=(GetURLUploadInfosResponseBodyURLUploadInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->creationTime_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->fileSize_ != nullptr && this->jobId_ != nullptr
        && this->mediaId_ != nullptr && this->status_ != nullptr && this->uploadURL_ != nullptr && this->userData_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uploadURL Field Functions 
    bool hasUploadURL() const { return this->uploadURL_ != nullptr;};
    void deleteUploadURL() { this->uploadURL_ = nullptr;};
    inline string uploadURL() const { DARABONBA_PTR_GET_DEFAULT(uploadURL_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setUploadURL(string uploadURL) { DARABONBA_PTR_SET_VALUE(uploadURL_, uploadURL) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetURLUploadInfosResponseBodyURLUploadInfoList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the upload job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the upload job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The size of the uploaded media file. Unit: byte.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The ID of the upload job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the uploaded media file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The status of the URL-based upload job. For more information about the valid values and value description of the parameter, see the "Status: the status of a video" section of the [Basic structures](https://help.aliyun.com/document_detail/52839.html) topic.
    std::shared_ptr<string> status_ = nullptr;
    // The upload URL of the source file.
    // 
    // > A maximum of 100 URLs can be returned.
    std::shared_ptr<string> uploadURL_ = nullptr;
    // The custom configurations. The value is a JSON string. For more information, see the "UserData: specifies the custom configurations for media upload" section of the [Request parameters](https://help.aliyun.com/document_detail/86952.html) topic.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
