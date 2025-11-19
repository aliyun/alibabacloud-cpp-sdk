// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASK_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODYTRANSCODETASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTaskResponseBodyTranscodeTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBodyTranscodeTask& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBodyTranscodeTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetTranscodeTaskResponseBodyTranscodeTask() = default ;
    GetTranscodeTaskResponseBodyTranscodeTask(const GetTranscodeTaskResponseBodyTranscodeTask &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTask(GetTranscodeTaskResponseBodyTranscodeTask &&) = default ;
    GetTranscodeTaskResponseBodyTranscodeTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBodyTranscodeTask() = default ;
    GetTranscodeTaskResponseBodyTranscodeTask& operator=(const GetTranscodeTaskResponseBodyTranscodeTask &) = default ;
    GetTranscodeTaskResponseBodyTranscodeTask& operator=(GetTranscodeTaskResponseBodyTranscodeTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->creationTime_ == nullptr && return this->taskStatus_ == nullptr && return this->transcodeJobInfoList_ == nullptr && return this->transcodeTaskId_ == nullptr && return this->transcodeTemplateGroupId_ == nullptr
        && return this->trigger_ == nullptr && return this->videoId_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // transcodeJobInfoList Field Functions 
    bool hasTranscodeJobInfoList() const { return this->transcodeJobInfoList_ != nullptr;};
    void deleteTranscodeJobInfoList() { this->transcodeJobInfoList_ = nullptr;};
    inline const vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList> & transcodeJobInfoList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoList_, vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList>) };
    inline vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList> transcodeJobInfoList() { DARABONBA_PTR_GET(transcodeJobInfoList_, vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList>) };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTranscodeJobInfoList(const vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList> & transcodeJobInfoList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoList_, transcodeJobInfoList) };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTranscodeJobInfoList(vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList> && transcodeJobInfoList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoList_, transcodeJobInfoList) };


    // transcodeTaskId Field Functions 
    bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
    void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
    inline string transcodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetTranscodeTaskResponseBodyTranscodeTask& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The time when the transcoding task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the transcoding task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The status of the transcoding task. Valid values:
    // 
    // *   **Processing**: In progress.
    // *   **Partial**: Some transcoding jobs were complete.
    // *   **CompleteAllSucc**: All transcoding jobs were successful.
    // *   **CompleteAllFail**: All transcoding jobs failed. If an exception occurs in the source file, no transcoding job is initiated and the transcoding task fails.
    // *   **CompletePartialSucc**: All transcoding jobs were complete but only some were successful.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // Details about transcoding jobs.
    std::shared_ptr<vector<Models::GetTranscodeTaskResponseBodyTranscodeTaskTranscodeJobInfoList>> transcodeJobInfoList_ = nullptr;
    // The ID of the transcoding task.
    std::shared_ptr<string> transcodeTaskId_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // The mode in which the transcoding task is triggered. Valid values:
    // 
    // *   **Auto**: The transcoding task is automatically triggered when the video is uploaded.
    // *   **Manual**: The transcoding task is triggered by calling the SubmitTranscodeJobs operation.
    std::shared_ptr<string> trigger_ = nullptr;
    // The ID of the audio or video file.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
