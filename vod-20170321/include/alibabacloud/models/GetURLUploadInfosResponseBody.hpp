// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetURLUploadInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetURLUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExists, nonExists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetURLUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExists, nonExists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(URLUploadInfoList, URLUploadInfoList_);
    };
    GetURLUploadInfosResponseBody() = default ;
    GetURLUploadInfosResponseBody(const GetURLUploadInfosResponseBody &) = default ;
    GetURLUploadInfosResponseBody(GetURLUploadInfosResponseBody &&) = default ;
    GetURLUploadInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetURLUploadInfosResponseBody() = default ;
    GetURLUploadInfosResponseBody& operator=(const GetURLUploadInfosResponseBody &) = default ;
    GetURLUploadInfosResponseBody& operator=(GetURLUploadInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class URLUploadInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const URLUploadInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(RegisteredMediaId, registeredMediaId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UploadURL, uploadURL_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, URLUploadInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(RegisteredMediaId, registeredMediaId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UploadURL, uploadURL_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      URLUploadInfoList() = default ;
      URLUploadInfoList(const URLUploadInfoList &) = default ;
      URLUploadInfoList(URLUploadInfoList &&) = default ;
      URLUploadInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~URLUploadInfoList() = default ;
      URLUploadInfoList& operator=(const URLUploadInfoList &) = default ;
      URLUploadInfoList& operator=(URLUploadInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->fileSize_ == nullptr && this->jobId_ == nullptr
        && this->mediaId_ == nullptr && this->registeredMediaId_ == nullptr && this->status_ == nullptr && this->uploadURL_ == nullptr && this->userData_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline URLUploadInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline URLUploadInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline URLUploadInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline URLUploadInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
      inline URLUploadInfoList& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline URLUploadInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline URLUploadInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // registeredMediaId Field Functions 
      bool hasRegisteredMediaId() const { return this->registeredMediaId_ != nullptr;};
      void deleteRegisteredMediaId() { this->registeredMediaId_ = nullptr;};
      inline string getRegisteredMediaId() const { DARABONBA_PTR_GET_DEFAULT(registeredMediaId_, "") };
      inline URLUploadInfoList& setRegisteredMediaId(string registeredMediaId) { DARABONBA_PTR_SET_VALUE(registeredMediaId_, registeredMediaId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline URLUploadInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uploadURL Field Functions 
      bool hasUploadURL() const { return this->uploadURL_ != nullptr;};
      void deleteUploadURL() { this->uploadURL_ = nullptr;};
      inline string getUploadURL() const { DARABONBA_PTR_GET_DEFAULT(uploadURL_, "") };
      inline URLUploadInfoList& setUploadURL(string uploadURL) { DARABONBA_PTR_SET_VALUE(uploadURL_, uploadURL) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline URLUploadInfoList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The completion time. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> completeTime_ {};
      // The creation time. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> creationTime_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The file size. Unit: bytes.
      shared_ptr<string> fileSize_ {};
      // The upload task ID.
      shared_ptr<string> jobId_ {};
      // The media ID.
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> registeredMediaId_ {};
      // The status of the URL-based upload task. For more information about the status values and descriptions, see [Status](https://help.aliyun.com/document_detail/52839.html).
      shared_ptr<string> status_ {};
      // The URL of the source video file.
      // 
      // > A maximum of 100 records can be returned.
      shared_ptr<string> uploadURL_ {};
      // The custom settings. The value is a JSON string. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->nonExists_ == nullptr
        && this->requestId_ == nullptr && this->URLUploadInfoList_ == nullptr; };
    // nonExists Field Functions 
    bool hasNonExists() const { return this->nonExists_ != nullptr;};
    void deleteNonExists() { this->nonExists_ = nullptr;};
    inline const vector<string> & getNonExists() const { DARABONBA_PTR_GET_CONST(nonExists_, vector<string>) };
    inline vector<string> getNonExists() { DARABONBA_PTR_GET(nonExists_, vector<string>) };
    inline GetURLUploadInfosResponseBody& setNonExists(const vector<string> & nonExists) { DARABONBA_PTR_SET_VALUE(nonExists_, nonExists) };
    inline GetURLUploadInfosResponseBody& setNonExists(vector<string> && nonExists) { DARABONBA_PTR_SET_RVALUE(nonExists_, nonExists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetURLUploadInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // URLUploadInfoList Field Functions 
    bool hasURLUploadInfoList() const { return this->URLUploadInfoList_ != nullptr;};
    void deleteURLUploadInfoList() { this->URLUploadInfoList_ = nullptr;};
    inline const vector<GetURLUploadInfosResponseBody::URLUploadInfoList> & getURLUploadInfoList() const { DARABONBA_PTR_GET_CONST(URLUploadInfoList_, vector<GetURLUploadInfosResponseBody::URLUploadInfoList>) };
    inline vector<GetURLUploadInfosResponseBody::URLUploadInfoList> getURLUploadInfoList() { DARABONBA_PTR_GET(URLUploadInfoList_, vector<GetURLUploadInfosResponseBody::URLUploadInfoList>) };
    inline GetURLUploadInfosResponseBody& setURLUploadInfoList(const vector<GetURLUploadInfosResponseBody::URLUploadInfoList> & uRLUploadInfoList) { DARABONBA_PTR_SET_VALUE(URLUploadInfoList_, uRLUploadInfoList) };
    inline GetURLUploadInfosResponseBody& setURLUploadInfoList(vector<GetURLUploadInfosResponseBody::URLUploadInfoList> && uRLUploadInfoList) { DARABONBA_PTR_SET_RVALUE(URLUploadInfoList_, uRLUploadInfoList) };


  protected:
    // The list of upload task IDs or URLs that do not exist.
    shared_ptr<vector<string>> nonExists_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of URL upload information. For more information about the fields and descriptions, see [URLUploadInfo](https://help.aliyun.com/document_detail/52839.html).
    shared_ptr<vector<GetURLUploadInfosResponseBody::URLUploadInfoList>> URLUploadInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
