// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskExecutionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskExecutionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskExecutionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
    };
    GetScheduledTaskExecutionRecordsResponseBody() = default ;
    GetScheduledTaskExecutionRecordsResponseBody(const GetScheduledTaskExecutionRecordsResponseBody &) = default ;
    GetScheduledTaskExecutionRecordsResponseBody(GetScheduledTaskExecutionRecordsResponseBody &&) = default ;
    GetScheduledTaskExecutionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskExecutionRecordsResponseBody() = default ;
    GetScheduledTaskExecutionRecordsResponseBody& operator=(const GetScheduledTaskExecutionRecordsResponseBody &) = default ;
    GetScheduledTaskExecutionRecordsResponseBody& operator=(GetScheduledTaskExecutionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(timeline, timeline_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(timeline, timeline_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeline& obj) { 
          DARABONBA_PTR_TO_JSON(actualTime, actualTime_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(executionId, executionId_);
          DARABONBA_PTR_TO_JSON(outputContent, outputContent_);
          DARABONBA_PTR_TO_JSON(scheduledTime, scheduledTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Timeline& obj) { 
          DARABONBA_PTR_FROM_JSON(actualTime, actualTime_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(executionId, executionId_);
          DARABONBA_PTR_FROM_JSON(outputContent, outputContent_);
          DARABONBA_PTR_FROM_JSON(scheduledTime, scheduledTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Timeline() = default ;
        Timeline(const Timeline &) = default ;
        Timeline(Timeline &&) = default ;
        Timeline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timeline() = default ;
        Timeline& operator=(const Timeline &) = default ;
        Timeline& operator=(Timeline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->displayName_ == nullptr && this->errorMessage_ == nullptr && this->executionId_ == nullptr && this->outputContent_ == nullptr && this->scheduledTime_ == nullptr
        && this->status_ == nullptr; };
        // actualTime Field Functions 
        bool hasActualTime() const { return this->actualTime_ != nullptr;};
        void deleteActualTime() { this->actualTime_ = nullptr;};
        inline string getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, "") };
        inline Timeline& setActualTime(string actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Timeline& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Timeline& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executionId Field Functions 
        bool hasExecutionId() const { return this->executionId_ != nullptr;};
        void deleteExecutionId() { this->executionId_ = nullptr;};
        inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
        inline Timeline& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


        // outputContent Field Functions 
        bool hasOutputContent() const { return this->outputContent_ != nullptr;};
        void deleteOutputContent() { this->outputContent_ = nullptr;};
        inline string getOutputContent() const { DARABONBA_PTR_GET_DEFAULT(outputContent_, "") };
        inline Timeline& setOutputContent(string outputContent) { DARABONBA_PTR_SET_VALUE(outputContent_, outputContent) };


        // scheduledTime Field Functions 
        bool hasScheduledTime() const { return this->scheduledTime_ != nullptr;};
        void deleteScheduledTime() { this->scheduledTime_ = nullptr;};
        inline string getScheduledTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledTime_, "") };
        inline Timeline& setScheduledTime(string scheduledTime) { DARABONBA_PTR_SET_VALUE(scheduledTime_, scheduledTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Timeline& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // 实际执行时间（仅历史记录）
        shared_ptr<string> actualTime_ {};
        // 执行记录展示名称
        shared_ptr<string> displayName_ {};
        // 错误信息（仅失败记录）
        shared_ptr<string> errorMessage_ {};
        // 执行记录 ID（历史记录才有）
        shared_ptr<string> executionId_ {};
        // 执行输出内容（仅历史记录）
        shared_ptr<string> outputContent_ {};
        // 计划执行时间 ISO8601
        shared_ptr<string> scheduledTime_ {};
        // 状态：PENDING/RUNNING/SUCCESS/FAILED/SCHEDULED
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->description_ == nullptr && this->isOpen_ == nullptr && this->name_ == nullptr && this->taskId_ == nullptr && this->timeline_ == nullptr
        && this->timezone_ == nullptr && this->triggerType_ == nullptr; };
      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Tasks& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isOpen Field Functions 
      bool hasIsOpen() const { return this->isOpen_ != nullptr;};
      void deleteIsOpen() { this->isOpen_ = nullptr;};
      inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
      inline Tasks& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline const vector<Tasks::Timeline> & getTimeline() const { DARABONBA_PTR_GET_CONST(timeline_, vector<Tasks::Timeline>) };
      inline vector<Tasks::Timeline> getTimeline() { DARABONBA_PTR_GET(timeline_, vector<Tasks::Timeline>) };
      inline Tasks& setTimeline(const vector<Tasks::Timeline> & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
      inline Tasks& setTimeline(vector<Tasks::Timeline> && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Tasks& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Tasks& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // Cron 表达式
      shared_ptr<string> cronExpression_ {};
      // 任务简述
      shared_ptr<string> description_ {};
      // 是否公开
      shared_ptr<bool> isOpen_ {};
      // 文件名
      shared_ptr<string> name_ {};
      // 任务 ID
      shared_ptr<string> taskId_ {};
      shared_ptr<vector<Tasks::Timeline>> timeline_ {};
      // 时区
      shared_ptr<string> timezone_ {};
      // 触发类型 cron/manual/event
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>) };
    inline vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setTasks(const vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setTasks(vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
