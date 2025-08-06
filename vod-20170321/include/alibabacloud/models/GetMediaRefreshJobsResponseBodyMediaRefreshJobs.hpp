// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODYMEDIAREFRESHJOBS_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODYMEDIAREFRESHJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaRefreshJobsResponseBodyMediaRefreshJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaRefreshJobsResponseBodyMediaRefreshJobs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMediaRefreshJobsResponseBodyMediaRefreshJobs& obj) { 
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
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs() = default ;
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs(const GetMediaRefreshJobsResponseBodyMediaRefreshJobs &) = default ;
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs(GetMediaRefreshJobsResponseBodyMediaRefreshJobs &&) = default ;
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaRefreshJobsResponseBodyMediaRefreshJobs() = default ;
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs& operator=(const GetMediaRefreshJobsResponseBodyMediaRefreshJobs &) = default ;
    GetMediaRefreshJobsResponseBodyMediaRefreshJobs& operator=(GetMediaRefreshJobsResponseBodyMediaRefreshJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->filterPolicy_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->mediaId_ != nullptr
        && this->mediaRefreshJobId_ != nullptr && this->status_ != nullptr && this->successPlayUrls_ != nullptr && this->taskIds_ != nullptr && this->taskType_ != nullptr
        && this->userData_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // filterPolicy Field Functions 
    bool hasFilterPolicy() const { return this->filterPolicy_ != nullptr;};
    void deleteFilterPolicy() { this->filterPolicy_ = nullptr;};
    inline string filterPolicy() const { DARABONBA_PTR_GET_DEFAULT(filterPolicy_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setFilterPolicy(string filterPolicy) { DARABONBA_PTR_SET_VALUE(filterPolicy_, filterPolicy) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaRefreshJobId Field Functions 
    bool hasMediaRefreshJobId() const { return this->mediaRefreshJobId_ != nullptr;};
    void deleteMediaRefreshJobId() { this->mediaRefreshJobId_ = nullptr;};
    inline string mediaRefreshJobId() const { DARABONBA_PTR_GET_DEFAULT(mediaRefreshJobId_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setMediaRefreshJobId(string mediaRefreshJobId) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobId_, mediaRefreshJobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successPlayUrls Field Functions 
    bool hasSuccessPlayUrls() const { return this->successPlayUrls_ != nullptr;};
    void deleteSuccessPlayUrls() { this->successPlayUrls_ = nullptr;};
    inline string successPlayUrls() const { DARABONBA_PTR_GET_DEFAULT(successPlayUrls_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setSuccessPlayUrls(string successPlayUrls) { DARABONBA_PTR_SET_VALUE(successPlayUrls_, successPlayUrls) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string taskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetMediaRefreshJobsResponseBodyMediaRefreshJobs& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code. This parameter is returned if the refresh or prefetch task fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message. This parameter is returned if the refresh or prefetch task fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The filtering conditions for stream playback. The value is a JSON string. This parameter is used as a request parameter of the [RefreshMediaPlayUrls](~~RefreshMediaPlayUrls~~) operation.
    std::shared_ptr<string> filterPolicy_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the media file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> mediaRefreshJobId_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
    // The playback URLs that were refreshed or prefetched.
    std::shared_ptr<string> successPlayUrls_ = nullptr;
    // The IDs of the refresh or prefetch tasks for the playback URLs of media files. Only one URL can be refreshed or prefetched in a task. This value is used in the [DescribeVodRefreshTasks](~~DescribeVodRefreshTasks~~) operation, which queries the status of refresh or prefetch tasks for playback URLs of media files.
    std::shared_ptr<string> taskIds_ = nullptr;
    // The type of the job. Valid values:
    // 
    // *   **Refresh**
    // *   **Preload**
    std::shared_ptr<string> taskType_ = nullptr;
    // The user data that you passed when you submit a refresh or prefetch task.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
