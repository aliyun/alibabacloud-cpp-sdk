// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOOPSTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOOPSTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetAutoOpsTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoOpsTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoOpsTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetAutoOpsTaskResponseBody() = default ;
    GetAutoOpsTaskResponseBody(const GetAutoOpsTaskResponseBody &) = default ;
    GetAutoOpsTaskResponseBody(GetAutoOpsTaskResponseBody &&) = default ;
    GetAutoOpsTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoOpsTaskResponseBody() = default ;
    GetAutoOpsTaskResponseBody& operator=(const GetAutoOpsTaskResponseBody &) = default ;
    GetAutoOpsTaskResponseBody& operator=(GetAutoOpsTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedOverTime, allowedOverTime_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScheduleTimeInfo, scheduleTimeInfo_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedOverTime, allowedOverTime_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScheduleTimeInfo, scheduleTimeInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedOverTime_ == nullptr
        && this->comment_ == nullptr && this->name_ == nullptr && this->scheduleTimeInfo_ == nullptr && this->scheduleType_ == nullptr && this->script_ == nullptr
        && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->scriptType_ == nullptr && this->taskId_ == nullptr && this->taskState_ == nullptr; };
      // allowedOverTime Field Functions 
      bool hasAllowedOverTime() const { return this->allowedOverTime_ != nullptr;};
      void deleteAllowedOverTime() { this->allowedOverTime_ = nullptr;};
      inline int64_t getAllowedOverTime() const { DARABONBA_PTR_GET_DEFAULT(allowedOverTime_, 0L) };
      inline Task& setAllowedOverTime(int64_t allowedOverTime) { DARABONBA_PTR_SET_VALUE(allowedOverTime_, allowedOverTime) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Task& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduleTimeInfo Field Functions 
      bool hasScheduleTimeInfo() const { return this->scheduleTimeInfo_ != nullptr;};
      void deleteScheduleTimeInfo() { this->scheduleTimeInfo_ = nullptr;};
      inline string getScheduleTimeInfo() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimeInfo_, "") };
      inline Task& setScheduleTimeInfo(string scheduleTimeInfo) { DARABONBA_PTR_SET_VALUE(scheduleTimeInfo_, scheduleTimeInfo) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Task& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline Task& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline int64_t getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, 0L) };
      inline Task& setScriptId(int64_t scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Task& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptType Field Functions 
      bool hasScriptType() const { return this->scriptType_ != nullptr;};
      void deleteScriptType() { this->scriptType_ = nullptr;};
      inline string getScriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
      inline Task& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskState Field Functions 
      bool hasTaskState() const { return this->taskState_ != nullptr;};
      void deleteTaskState() { this->taskState_ = nullptr;};
      inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
      inline Task& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    protected:
      // The time when the O&M task approval was completed, in seconds (UNIX timestamp format).
      shared_ptr<int64_t> allowedOverTime_ {};
      // The remarks of the O&M task.
      shared_ptr<string> comment_ {};
      // The name of the O&M task.
      shared_ptr<string> name_ {};
      // The execution plan of the O&M task.
      // - **ExecAt**: When the ScheduleType value is Manual, this parameter is not applicable. When the ScheduleType value is FixTime, this parameter indicates the scheduled execution time in seconds (UNIX timestamp format). When the ScheduleType value is CycleInterval, this parameter indicates the first execution time in seconds (UNIX timestamp format).
      // 
      // - **PeriodNum**: When the ScheduleType value is Manual or FixTime, this parameter is not applicable. When the ScheduleType value is CycleInterval, this parameter indicates the interval between periodic executions.
      // 
      // - **PeriodUnit**: When the ScheduleType value is Manual or FixTime, this parameter is not applicable. When the ScheduleType value is CycleInterval, this parameter indicates the unit of the periodic execution interval. Valid values: hour and day.
      shared_ptr<string> scheduleTimeInfo_ {};
      // The scheduling type of the task. Valid values:
      // - **FixTime**: Scheduled execution.
      // - **CycleInterval**: Periodic execution.
      // - **Manual**: Manually triggered by the user.
      shared_ptr<string> scheduleType_ {};
      // The script content to be executed by the O&M task. The value is Base64-encoded.
      shared_ptr<string> script_ {};
      // The ID of the script associated with the O&M task. This parameter is returned only when ScriptType is set to SpecificScript.
      shared_ptr<int64_t> scriptId_ {};
      // The name of the script associated with the O&M task.
      shared_ptr<string> scriptName_ {};
      // The script type of the O&M task. Valid values:
      // 
      // - **HandInput**: Manually entered script.
      // 
      // - **SpecificScript**: Associated with an existing script.
      shared_ptr<string> scriptType_ {};
      // The ID of the O&M task.
      shared_ptr<string> taskId_ {};
      // The status of the O&M task. Valid values:
      // 
      // - **PendingApproval**: Pending approval.
      // - **Rejected**: Rejected.
      // - **Cancelled**: Cancelled.
      // - **PendingExecution**: Approved and waiting for execution.
      // - **PrepareRun**: Preparing for execution.
      // - **Running**: Running.
      // - **Completed**: Completed.
      // - **Failed**: Failed.
      shared_ptr<string> taskState_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoOpsTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetAutoOpsTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetAutoOpsTaskResponseBody::Task) };
    inline GetAutoOpsTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetAutoOpsTaskResponseBody::Task) };
    inline GetAutoOpsTaskResponseBody& setTask(const GetAutoOpsTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetAutoOpsTaskResponseBody& setTask(GetAutoOpsTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // The O&M task details.
    shared_ptr<GetAutoOpsTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
