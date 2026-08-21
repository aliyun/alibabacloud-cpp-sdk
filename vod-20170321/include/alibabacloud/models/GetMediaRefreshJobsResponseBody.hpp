// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODY_HPP_
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
  class GetMediaRefreshJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaRefreshJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaRefreshJobs, mediaRefreshJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaRefreshJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaRefreshJobs, mediaRefreshJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaRefreshJobsResponseBody() = default ;
    GetMediaRefreshJobsResponseBody(const GetMediaRefreshJobsResponseBody &) = default ;
    GetMediaRefreshJobsResponseBody(GetMediaRefreshJobsResponseBody &&) = default ;
    GetMediaRefreshJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaRefreshJobsResponseBody() = default ;
    GetMediaRefreshJobsResponseBody& operator=(const GetMediaRefreshJobsResponseBody &) = default ;
    GetMediaRefreshJobsResponseBody& operator=(GetMediaRefreshJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaRefreshJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaRefreshJobs& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FilterPolicy, filterPolicy_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaRefreshJobId, mediaRefreshJobId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuccessPlayUrls, successPlayUrls_);
        DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, MediaRefreshJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FilterPolicy, filterPolicy_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaRefreshJobId, mediaRefreshJobId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuccessPlayUrls, successPlayUrls_);
        DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      MediaRefreshJobs() = default ;
      MediaRefreshJobs(const MediaRefreshJobs &) = default ;
      MediaRefreshJobs(MediaRefreshJobs &&) = default ;
      MediaRefreshJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaRefreshJobs() = default ;
      MediaRefreshJobs& operator=(const MediaRefreshJobs &) = default ;
      MediaRefreshJobs& operator=(MediaRefreshJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->filterPolicy_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->mediaId_ == nullptr
        && this->mediaRefreshJobId_ == nullptr && this->status_ == nullptr && this->successPlayUrls_ == nullptr && this->taskIds_ == nullptr && this->taskType_ == nullptr
        && this->userData_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline MediaRefreshJobs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline MediaRefreshJobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // filterPolicy Field Functions 
      bool hasFilterPolicy() const { return this->filterPolicy_ != nullptr;};
      void deleteFilterPolicy() { this->filterPolicy_ = nullptr;};
      inline string getFilterPolicy() const { DARABONBA_PTR_GET_DEFAULT(filterPolicy_, "") };
      inline MediaRefreshJobs& setFilterPolicy(string filterPolicy) { DARABONBA_PTR_SET_VALUE(filterPolicy_, filterPolicy) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline MediaRefreshJobs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline MediaRefreshJobs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaRefreshJobs& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaRefreshJobId Field Functions 
      bool hasMediaRefreshJobId() const { return this->mediaRefreshJobId_ != nullptr;};
      void deleteMediaRefreshJobId() { this->mediaRefreshJobId_ = nullptr;};
      inline string getMediaRefreshJobId() const { DARABONBA_PTR_GET_DEFAULT(mediaRefreshJobId_, "") };
      inline MediaRefreshJobs& setMediaRefreshJobId(string mediaRefreshJobId) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobId_, mediaRefreshJobId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaRefreshJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successPlayUrls Field Functions 
      bool hasSuccessPlayUrls() const { return this->successPlayUrls_ != nullptr;};
      void deleteSuccessPlayUrls() { this->successPlayUrls_ = nullptr;};
      inline string getSuccessPlayUrls() const { DARABONBA_PTR_GET_DEFAULT(successPlayUrls_, "") };
      inline MediaRefreshJobs& setSuccessPlayUrls(string successPlayUrls) { DARABONBA_PTR_SET_VALUE(successPlayUrls_, successPlayUrls) };


      // taskIds Field Functions 
      bool hasTaskIds() const { return this->taskIds_ != nullptr;};
      void deleteTaskIds() { this->taskIds_ = nullptr;};
      inline string getTaskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
      inline MediaRefreshJobs& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline MediaRefreshJobs& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaRefreshJobs& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code. This field is returned when the purge or prefetch task fails to be submitted.
      shared_ptr<string> errorCode_ {};
      // The error message. This field is returned when the purge or prefetch task fails to be submitted.
      shared_ptr<string> errorMessage_ {};
      // The filtering policy for playback streams. The value is in JSON format and contains the request parameters of the [SubmitMediaRefreshJob](https://help.aliyun.com/document_detail/431095.html) operation.
      shared_ptr<string> filterPolicy_ {};
      // The time when the task was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the task was last modified.
      shared_ptr<string> gmtModified_ {};
      // The audio or video ID.
      shared_ptr<string> mediaId_ {};
      // The ID of the audio or video purge or prefetch task.
      shared_ptr<string> mediaRefreshJobId_ {};
      // The task status. Valid values:
      // - **success**: succeeded
      // - **fail**: failed
      shared_ptr<string> status_ {};
      // The playback URLs that were successfully purged or prefetched.
      shared_ptr<string> successPlayUrls_ {};
      // The task IDs for the purge or prefetch of playback URLs. Each URL corresponds to one task ID. You can use the task ID to call the [DescribeVodRefreshTasks](https://help.aliyun.com/document_detail/69214.html) operation to query the purge or prefetch status of each playback URL.
      shared_ptr<string> taskIds_ {};
      // The task type. Valid values:
      // - **Refresh**: purge
      // - **Preload**: prefetch
      shared_ptr<string> taskType_ {};
      // The UserData information specified when the purge or prefetch task was submitted.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->mediaRefreshJobs_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaRefreshJobs Field Functions 
    bool hasMediaRefreshJobs() const { return this->mediaRefreshJobs_ != nullptr;};
    void deleteMediaRefreshJobs() { this->mediaRefreshJobs_ = nullptr;};
    inline const vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs> & getMediaRefreshJobs() const { DARABONBA_PTR_GET_CONST(mediaRefreshJobs_, vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs>) };
    inline vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs> getMediaRefreshJobs() { DARABONBA_PTR_GET(mediaRefreshJobs_, vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs>) };
    inline GetMediaRefreshJobsResponseBody& setMediaRefreshJobs(const vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs> & mediaRefreshJobs) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobs_, mediaRefreshJobs) };
    inline GetMediaRefreshJobsResponseBody& setMediaRefreshJobs(vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs> && mediaRefreshJobs) { DARABONBA_PTR_SET_RVALUE(mediaRefreshJobs_, mediaRefreshJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaRefreshJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of audio or video purge or prefetch task information.
    shared_ptr<vector<GetMediaRefreshJobsResponseBody::MediaRefreshJobs>> mediaRefreshJobs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
