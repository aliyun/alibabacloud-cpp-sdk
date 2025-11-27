// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoModerationResultResponseBodyModerationResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModerationResult, moderationResult_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModerationResult, moderationResult_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetVideoModerationResultResponseBody() = default ;
    GetVideoModerationResultResponseBody(const GetVideoModerationResultResponseBody &) = default ;
    GetVideoModerationResultResponseBody(GetVideoModerationResultResponseBody &&) = default ;
    GetVideoModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoModerationResultResponseBody() = default ;
    GetVideoModerationResultResponseBody& operator=(const GetVideoModerationResultResponseBody &) = default ;
    GetVideoModerationResultResponseBody& operator=(GetVideoModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->endTime_ == nullptr && return this->eventId_ == nullptr && return this->message_ == nullptr && return this->moderationResult_ == nullptr && return this->projectName_ == nullptr
        && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskType_ == nullptr
        && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVideoModerationResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetVideoModerationResultResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetVideoModerationResultResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVideoModerationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moderationResult Field Functions 
    bool hasModerationResult() const { return this->moderationResult_ != nullptr;};
    void deleteModerationResult() { this->moderationResult_ = nullptr;};
    inline const GetVideoModerationResultResponseBodyModerationResult & moderationResult() const { DARABONBA_PTR_GET_CONST(moderationResult_, GetVideoModerationResultResponseBodyModerationResult) };
    inline GetVideoModerationResultResponseBodyModerationResult moderationResult() { DARABONBA_PTR_GET(moderationResult_, GetVideoModerationResultResponseBodyModerationResult) };
    inline GetVideoModerationResultResponseBody& setModerationResult(const GetVideoModerationResultResponseBodyModerationResult & moderationResult) { DARABONBA_PTR_SET_VALUE(moderationResult_, moderationResult) };
    inline GetVideoModerationResultResponseBody& setModerationResult(GetVideoModerationResultResponseBodyModerationResult && moderationResult) { DARABONBA_PTR_SET_RVALUE(moderationResult_, moderationResult) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetVideoModerationResultResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetVideoModerationResultResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoModerationResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoModerationResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVideoModerationResultResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetVideoModerationResultResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code of the task.
    std::shared_ptr<string> code_ = nullptr;
    // The end time of the task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The error message of the task.
    std::shared_ptr<string> message_ = nullptr;
    // The result of the image compliance detection task.
    std::shared_ptr<GetVideoModerationResultResponseBodyModerationResult> moderationResult_ = nullptr;
    // The project name.
    std::shared_ptr<string> projectName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time of the task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The task status. Valid values:
    // 
    // *   Running: The task is running.
    // *   Succeeded: The task is successful.
    // *   Failed: The task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
