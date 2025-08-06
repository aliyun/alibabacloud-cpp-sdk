// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODETASKRESPONSEBODYTRANSCODETASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODETASKRESPONSEBODYTRANSCODETASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTranscodeTaskResponseBodyTranscodeTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeTaskResponseBodyTranscodeTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeTaskResponseBodyTranscodeTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListTranscodeTaskResponseBodyTranscodeTaskList() = default ;
    ListTranscodeTaskResponseBodyTranscodeTaskList(const ListTranscodeTaskResponseBodyTranscodeTaskList &) = default ;
    ListTranscodeTaskResponseBodyTranscodeTaskList(ListTranscodeTaskResponseBodyTranscodeTaskList &&) = default ;
    ListTranscodeTaskResponseBodyTranscodeTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeTaskResponseBodyTranscodeTaskList() = default ;
    ListTranscodeTaskResponseBodyTranscodeTaskList& operator=(const ListTranscodeTaskResponseBodyTranscodeTaskList &) = default ;
    ListTranscodeTaskResponseBodyTranscodeTaskList& operator=(ListTranscodeTaskResponseBodyTranscodeTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->creationTime_ != nullptr && this->taskStatus_ != nullptr && this->transcodeTaskId_ != nullptr && this->transcodeTemplateGroupId_ != nullptr && this->trigger_ != nullptr
        && this->videoId_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // transcodeTaskId Field Functions 
    bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
    void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
    inline string transcodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListTranscodeTaskResponseBodyTranscodeTaskList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The time when the transcoding task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the transcoding task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The status of the transcoding task. Valid values:
    // *   **Processing**: In progress.
    // *   **Partial**: Some transcoding jobs were complete.
    // *   **CompleteAllSucc**: All transcoding jobs were successful.
    // *   **CompleteAllFail**: All transcoding jobs failed. If an exception occurs in the source file, no transcoding job is initiated and the transcoding task fails.
    // *   **CompletePartialSucc**: All transcoding jobs were complete but only some were successful.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The ID of the transcoding task.
    std::shared_ptr<string> transcodeTaskId_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // The mode in which the transcoding task is triggered. Valid values:
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
