// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKINFO_HPP_
#define ALIBABACLOUD_MODELS_TASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskRequestDefinition, taskRequestDefinition_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskRequestDefinition, taskRequestDefinition_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    TaskInfo() = default ;
    TaskInfo(const TaskInfo &) = default ;
    TaskInfo(TaskInfo &&) = default ;
    TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskInfo() = default ;
    TaskInfo& operator=(const TaskInfo &) = default ;
    TaskInfo& operator=(TaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->endTime_ == nullptr && this->message_ == nullptr && this->progress_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->taskId_ == nullptr && this->taskRequestDefinition_ == nullptr && this->taskType_ == nullptr && this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TaskInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TaskInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline TaskInfo& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline TaskInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline TaskInfo& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline TaskInfo& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskRequestDefinition Field Functions 
    bool hasTaskRequestDefinition() const { return this->taskRequestDefinition_ != nullptr;};
    void deleteTaskRequestDefinition() { this->taskRequestDefinition_ = nullptr;};
    inline string getTaskRequestDefinition() const { DARABONBA_PTR_GET_DEFAULT(taskRequestDefinition_, "") };
    inline TaskInfo& setTaskRequestDefinition(string taskRequestDefinition) { DARABONBA_PTR_SET_VALUE(taskRequestDefinition_, taskRequestDefinition) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline TaskInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline TaskInfo& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The end time of the task.
    shared_ptr<string> endTime_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The progress of the task.
    shared_ptr<int32_t> progress_ {};
    // The start time of the task.
    shared_ptr<string> startTime_ {};
    // The status of the task. Valid values:
    // 
    // *   Running: The task is running.
    // *   Succeeded: The task is successful.
    // *   Failed: The task failed.
    shared_ptr<string> status_ {};
    // The tags of the task. You can search for tasks by tag.
    Darabonba::Json tags_ {};
    // The ID of the task.
    shared_ptr<string> taskId_ {};
    // The parameter definition in the JSON string format. For more information, see the Request parameters section of the topic about an asynchronous processing task.
    shared_ptr<string> taskRequestDefinition_ {};
    // The type of the task.
    shared_ptr<string> taskType_ {};
    // The custom user data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
