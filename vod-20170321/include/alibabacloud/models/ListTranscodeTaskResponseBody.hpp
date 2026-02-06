// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODETASKRESPONSEBODY_HPP_
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
  class ListTranscodeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskList, transcodeTaskList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskList, transcodeTaskList_);
    };
    ListTranscodeTaskResponseBody() = default ;
    ListTranscodeTaskResponseBody(const ListTranscodeTaskResponseBody &) = default ;
    ListTranscodeTaskResponseBody(ListTranscodeTaskResponseBody &&) = default ;
    ListTranscodeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeTaskResponseBody() = default ;
    ListTranscodeTaskResponseBody& operator=(const ListTranscodeTaskResponseBody &) = default ;
    ListTranscodeTaskResponseBody& operator=(ListTranscodeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeTaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeTaskList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeTaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      TranscodeTaskList() = default ;
      TranscodeTaskList(const TranscodeTaskList &) = default ;
      TranscodeTaskList(TranscodeTaskList &&) = default ;
      TranscodeTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeTaskList() = default ;
      TranscodeTaskList& operator=(const TranscodeTaskList &) = default ;
      TranscodeTaskList& operator=(TranscodeTaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->taskStatus_ == nullptr && this->transcodeTaskId_ == nullptr && this->transcodeTemplateGroupId_ == nullptr && this->trigger_ == nullptr
        && this->videoId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline TranscodeTaskList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeTaskList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline TranscodeTaskList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // transcodeTaskId Field Functions 
      bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
      void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
      inline string getTranscodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
      inline TranscodeTaskList& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


      // transcodeTemplateGroupId Field Functions 
      bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
      void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
      inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
      inline TranscodeTaskList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline TranscodeTaskList& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline TranscodeTaskList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The time when the transcoding task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the transcoding task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The status of the transcoding task. Valid values:
      // *   **Processing**: In progress.
      // *   **Partial**: Some transcoding jobs were complete.
      // *   **CompleteAllSucc**: All transcoding jobs were successful.
      // *   **CompleteAllFail**: All transcoding jobs failed. If an exception occurs in the source file, no transcoding job is initiated and the transcoding task fails.
      // *   **CompletePartialSucc**: All transcoding jobs were complete but only some were successful.
      shared_ptr<string> taskStatus_ {};
      // The ID of the transcoding task.
      shared_ptr<string> transcodeTaskId_ {};
      // The ID of the transcoding template group.
      shared_ptr<string> transcodeTemplateGroupId_ {};
      // The mode in which the transcoding task is triggered. Valid values:
      // *   **Auto**: The transcoding task is automatically triggered when the video is uploaded.
      // *   **Manual**: The transcoding task is triggered by calling the SubmitTranscodeJobs operation.
      shared_ptr<string> trigger_ {};
      // The ID of the audio or video file.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeTaskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscodeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTaskList Field Functions 
    bool hasTranscodeTaskList() const { return this->transcodeTaskList_ != nullptr;};
    void deleteTranscodeTaskList() { this->transcodeTaskList_ = nullptr;};
    inline const vector<ListTranscodeTaskResponseBody::TranscodeTaskList> & getTranscodeTaskList() const { DARABONBA_PTR_GET_CONST(transcodeTaskList_, vector<ListTranscodeTaskResponseBody::TranscodeTaskList>) };
    inline vector<ListTranscodeTaskResponseBody::TranscodeTaskList> getTranscodeTaskList() { DARABONBA_PTR_GET(transcodeTaskList_, vector<ListTranscodeTaskResponseBody::TranscodeTaskList>) };
    inline ListTranscodeTaskResponseBody& setTranscodeTaskList(const vector<ListTranscodeTaskResponseBody::TranscodeTaskList> & transcodeTaskList) { DARABONBA_PTR_SET_VALUE(transcodeTaskList_, transcodeTaskList) };
    inline ListTranscodeTaskResponseBody& setTranscodeTaskList(vector<ListTranscodeTaskResponseBody::TranscodeTaskList> && transcodeTaskList) { DARABONBA_PTR_SET_RVALUE(transcodeTaskList_, transcodeTaskList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about transcoding tasks.
    shared_ptr<vector<ListTranscodeTaskResponseBody::TranscodeTaskList>> transcodeTaskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
