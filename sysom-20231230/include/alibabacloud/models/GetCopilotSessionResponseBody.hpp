// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCopilotSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCopilotSessionResponseBody() = default ;
    GetCopilotSessionResponseBody(const GetCopilotSessionResponseBody &) = default ;
    GetCopilotSessionResponseBody(GetCopilotSessionResponseBody &&) = default ;
    GetCopilotSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotSessionResponseBody() = default ;
    GetCopilotSessionResponseBody& operator=(const GetCopilotSessionResponseBody &) = default ;
    GetCopilotSessionResponseBody& operator=(GetCopilotSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(activeTurn, activeTurn_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(cursor, cursor_);
        DARABONBA_PTR_TO_JSON(lastTurn, lastTurn_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(scheduledTask, scheduledTask_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(sessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(activeTurn, activeTurn_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(cursor, cursor_);
        DARABONBA_PTR_FROM_JSON(lastTurn, lastTurn_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(scheduledTask, scheduledTask_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(sessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduledTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduledTask& obj) { 
          DARABONBA_PTR_TO_JSON(runId, runId_);
          DARABONBA_PTR_TO_JSON(scheduledAt, scheduledAt_);
          DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
          DARABONBA_PTR_TO_JSON(taskName, taskName_);
          DARABONBA_PTR_TO_JSON(timezone, timezone_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduledTask& obj) { 
          DARABONBA_PTR_FROM_JSON(runId, runId_);
          DARABONBA_PTR_FROM_JSON(scheduledAt, scheduledAt_);
          DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
          DARABONBA_PTR_FROM_JSON(taskName, taskName_);
          DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        };
        ScheduledTask() = default ;
        ScheduledTask(const ScheduledTask &) = default ;
        ScheduledTask(ScheduledTask &&) = default ;
        ScheduledTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduledTask() = default ;
        ScheduledTask& operator=(const ScheduledTask &) = default ;
        ScheduledTask& operator=(ScheduledTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->runId_ == nullptr
        && this->scheduledAt_ == nullptr && this->startedAt_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->timezone_ == nullptr; };
        // runId Field Functions 
        bool hasRunId() const { return this->runId_ != nullptr;};
        void deleteRunId() { this->runId_ = nullptr;};
        inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
        inline ScheduledTask& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


        // scheduledAt Field Functions 
        bool hasScheduledAt() const { return this->scheduledAt_ != nullptr;};
        void deleteScheduledAt() { this->scheduledAt_ = nullptr;};
        inline string getScheduledAt() const { DARABONBA_PTR_GET_DEFAULT(scheduledAt_, "") };
        inline ScheduledTask& setScheduledAt(string scheduledAt) { DARABONBA_PTR_SET_VALUE(scheduledAt_, scheduledAt) };


        // startedAt Field Functions 
        bool hasStartedAt() const { return this->startedAt_ != nullptr;};
        void deleteStartedAt() { this->startedAt_ = nullptr;};
        inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
        inline ScheduledTask& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline ScheduledTask& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline ScheduledTask& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline ScheduledTask& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      protected:
        // 本次定时执行的 Run ID
        shared_ptr<string> runId_ {};
        // 计划触发时间，ISO 8601 含时区偏移
        shared_ptr<string> scheduledAt_ {};
        // Copilot 开始处理时间，ISO 8601 含时区偏移
        shared_ptr<string> startedAt_ {};
        // 任务 ID；任务删除后仍保留
        shared_ptr<int64_t> taskId_ {};
        // 触发时的任务名称快照
        shared_ptr<string> taskName_ {};
        // 任务的 cron 时区
        shared_ptr<string> timezone_ {};
      };

      class LastTurn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastTurn& obj) { 
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(pendingInputId, pendingInputId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(turnId, turnId_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, LastTurn& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(pendingInputId, pendingInputId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(turnId, turnId_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        };
        LastTurn() = default ;
        LastTurn(const LastTurn &) = default ;
        LastTurn(LastTurn &&) = default ;
        LastTurn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastTurn() = default ;
        LastTurn& operator=(const LastTurn &) = default ;
        LastTurn& operator=(LastTurn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->finishedAt_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->pendingInputId_ == nullptr && this->status_ == nullptr
        && this->turnId_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline LastTurn& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // finishedAt Field Functions 
        bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
        void deleteFinishedAt() { this->finishedAt_ = nullptr;};
        inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
        inline LastTurn& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline LastTurn& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline LastTurn& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // pendingInputId Field Functions 
        bool hasPendingInputId() const { return this->pendingInputId_ != nullptr;};
        void deletePendingInputId() { this->pendingInputId_ = nullptr;};
        inline string getPendingInputId() const { DARABONBA_PTR_GET_DEFAULT(pendingInputId_, "") };
        inline LastTurn& setPendingInputId(string pendingInputId) { DARABONBA_PTR_SET_VALUE(pendingInputId_, pendingInputId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LastTurn& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // turnId Field Functions 
        bool hasTurnId() const { return this->turnId_ != nullptr;};
        void deleteTurnId() { this->turnId_ = nullptr;};
        inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
        inline LastTurn& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline LastTurn& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> finishedAt_ {};
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<string> pendingInputId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> turnId_ {};
        shared_ptr<string> updatedAt_ {};
      };

      class ActiveTurn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActiveTurn& obj) { 
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(pendingInputId, pendingInputId_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(turnId, turnId_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, ActiveTurn& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(pendingInputId, pendingInputId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(turnId, turnId_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        };
        ActiveTurn() = default ;
        ActiveTurn(const ActiveTurn &) = default ;
        ActiveTurn(ActiveTurn &&) = default ;
        ActiveTurn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActiveTurn() = default ;
        ActiveTurn& operator=(const ActiveTurn &) = default ;
        ActiveTurn& operator=(ActiveTurn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->finishedAt_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->pendingInputId_ == nullptr && this->status_ == nullptr
        && this->turnId_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline ActiveTurn& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // finishedAt Field Functions 
        bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
        void deleteFinishedAt() { this->finishedAt_ = nullptr;};
        inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
        inline ActiveTurn& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline ActiveTurn& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline ActiveTurn& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // pendingInputId Field Functions 
        bool hasPendingInputId() const { return this->pendingInputId_ != nullptr;};
        void deletePendingInputId() { this->pendingInputId_ = nullptr;};
        inline string getPendingInputId() const { DARABONBA_PTR_GET_DEFAULT(pendingInputId_, "") };
        inline ActiveTurn& setPendingInputId(string pendingInputId) { DARABONBA_PTR_SET_VALUE(pendingInputId_, pendingInputId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ActiveTurn& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // turnId Field Functions 
        bool hasTurnId() const { return this->turnId_ != nullptr;};
        void deleteTurnId() { this->turnId_ = nullptr;};
        inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
        inline ActiveTurn& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline ActiveTurn& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> finishedAt_ {};
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<string> pendingInputId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> turnId_ {};
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->activeTurn_ == nullptr
        && this->createdAt_ == nullptr && this->cursor_ == nullptr && this->lastTurn_ == nullptr && this->name_ == nullptr && this->scheduledTask_ == nullptr
        && this->sessionId_ == nullptr && this->sessionType_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
      // activeTurn Field Functions 
      bool hasActiveTurn() const { return this->activeTurn_ != nullptr;};
      void deleteActiveTurn() { this->activeTurn_ = nullptr;};
      inline const Data::ActiveTurn & getActiveTurn() const { DARABONBA_PTR_GET_CONST(activeTurn_, Data::ActiveTurn) };
      inline Data::ActiveTurn getActiveTurn() { DARABONBA_PTR_GET(activeTurn_, Data::ActiveTurn) };
      inline Data& setActiveTurn(const Data::ActiveTurn & activeTurn) { DARABONBA_PTR_SET_VALUE(activeTurn_, activeTurn) };
      inline Data& setActiveTurn(Data::ActiveTurn && activeTurn) { DARABONBA_PTR_SET_RVALUE(activeTurn_, activeTurn) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // cursor Field Functions 
      bool hasCursor() const { return this->cursor_ != nullptr;};
      void deleteCursor() { this->cursor_ = nullptr;};
      inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
      inline Data& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


      // lastTurn Field Functions 
      bool hasLastTurn() const { return this->lastTurn_ != nullptr;};
      void deleteLastTurn() { this->lastTurn_ = nullptr;};
      inline const Data::LastTurn & getLastTurn() const { DARABONBA_PTR_GET_CONST(lastTurn_, Data::LastTurn) };
      inline Data::LastTurn getLastTurn() { DARABONBA_PTR_GET(lastTurn_, Data::LastTurn) };
      inline Data& setLastTurn(const Data::LastTurn & lastTurn) { DARABONBA_PTR_SET_VALUE(lastTurn_, lastTurn) };
      inline Data& setLastTurn(Data::LastTurn && lastTurn) { DARABONBA_PTR_SET_RVALUE(lastTurn_, lastTurn) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduledTask Field Functions 
      bool hasScheduledTask() const { return this->scheduledTask_ != nullptr;};
      void deleteScheduledTask() { this->scheduledTask_ = nullptr;};
      inline const Data::ScheduledTask & getScheduledTask() const { DARABONBA_PTR_GET_CONST(scheduledTask_, Data::ScheduledTask) };
      inline Data::ScheduledTask getScheduledTask() { DARABONBA_PTR_GET(scheduledTask_, Data::ScheduledTask) };
      inline Data& setScheduledTask(const Data::ScheduledTask & scheduledTask) { DARABONBA_PTR_SET_VALUE(scheduledTask_, scheduledTask) };
      inline Data& setScheduledTask(Data::ScheduledTask && scheduledTask) { DARABONBA_PTR_SET_RVALUE(scheduledTask_, scheduledTask) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Data& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      shared_ptr<Data::ActiveTurn> activeTurn_ {};
      shared_ptr<string> createdAt_ {};
      // 十进制事件序号字符串，范围 0..9223372036854775807；避免 JavaScript 精度丢失
      shared_ptr<string> cursor_ {};
      shared_ptr<Data::LastTurn> lastTurn_ {};
      shared_ptr<string> name_ {};
      // 定时任务触发快照；非定时会话为空
      shared_ptr<Data::ScheduledTask> scheduledTask_ {};
      shared_ptr<string> sessionId_ {};
      // 会话初始来源：chat、scheduled_task、alert；后续追问不改变来源
      shared_ptr<string> sessionType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCopilotSessionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCopilotSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCopilotSessionResponseBody::Data) };
    inline GetCopilotSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCopilotSessionResponseBody::Data) };
    inline GetCopilotSessionResponseBody& setData(const GetCopilotSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCopilotSessionResponseBody& setData(GetCopilotSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCopilotSessionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCopilotSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCopilotSessionResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
