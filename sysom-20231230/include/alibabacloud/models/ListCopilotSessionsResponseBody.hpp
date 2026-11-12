// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListCopilotSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCopilotSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCopilotSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListCopilotSessionsResponseBody() = default ;
    ListCopilotSessionsResponseBody(const ListCopilotSessionsResponseBody &) = default ;
    ListCopilotSessionsResponseBody(ListCopilotSessionsResponseBody &&) = default ;
    ListCopilotSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCopilotSessionsResponseBody() = default ;
    ListCopilotSessionsResponseBody& operator=(const ListCopilotSessionsResponseBody &) = default ;
    ListCopilotSessionsResponseBody& operator=(ListCopilotSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(sessions, sessions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(sessions, sessions_);
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
      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(activeTurn, activeTurn_);
          DARABONBA_PTR_TO_JSON(activeTurnId, activeTurnId_);
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(scheduledTask, scheduledTask_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(sessionType, sessionType_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(activeTurn, activeTurn_);
          DARABONBA_PTR_FROM_JSON(activeTurnId, activeTurnId_);
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(scheduledTask, scheduledTask_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(sessionType, sessionType_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
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
          // The ID of the current scheduled execution. Different runIds are used for multiple triggers of the same scheduled task.
          shared_ptr<string> runId_ {};
          // The scheduled trigger time, in ISO 8601 format with time zone. This field is empty when no record exists.
          shared_ptr<string> scheduledAt_ {};
          // The time when Copilot started processing the current schedule, in ISO 8601 format with time zone. This is not the time when the model outputs the first token.
          shared_ptr<string> startedAt_ {};
          // The ID of the associated scheduled task.
          shared_ptr<int64_t> taskId_ {};
          // The name of the scheduled task at the time of this trigger.
          shared_ptr<string> taskName_ {};
          // The scheduling time zone of the scheduled task.
          shared_ptr<string> timezone_ {};
        };

        class ActiveTurn : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActiveTurn& obj) { 
            DARABONBA_PTR_TO_JSON(agentId, agentId_);
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
            DARABONBA_PTR_FROM_JSON(agentId, agentId_);
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
          virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createdAt_ == nullptr && this->finishedAt_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->pendingInputId_ == nullptr
        && this->status_ == nullptr && this->turnId_ == nullptr && this->updatedAt_ == nullptr; };
          // agentId Field Functions 
          bool hasAgentId() const { return this->agentId_ != nullptr;};
          void deleteAgentId() { this->agentId_ = nullptr;};
          inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
          inline ActiveTurn& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


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
          // The Agent ID bound to the current execution round.
          shared_ptr<string> agentId_ {};
          // The time when the current execution round was created, in ISO 8601 format.
          shared_ptr<string> createdAt_ {};
          // The time when the execution ended, in ISO 8601 format. This field is empty if the execution has not ended.
          shared_ptr<string> finishedAt_ {};
          // The cumulative number of input tokens in the current round, which is not the incremental usage of the current event.
          shared_ptr<int64_t> inputTokens_ {};
          // The cumulative number of output tokens in the current round.
          shared_ptr<int64_t> outputTokens_ {};
          // The ID of the form that is currently waiting for the user to fill out. This field is used when user input is submitted. This field is empty when no form needs to be filled out.
          shared_ptr<string> pendingInputId_ {};
          // The execution status. Valid values:
          // - running: The execution is in progress.
          // - waiting_input: Waiting for user input.
          // - cancelling: The execution is being canceled.
          // - completed: The execution is completed.
          // - failed: The execution failed.
          // - cancelled: The execution is canceled.
          // - outcome_unknown: The result is unknown, and the session may still be occupied. The execution should not be automatically rerun.
          shared_ptr<string> status_ {};
          // The ID of the current execution round, which is used to submit user input, reconnect, or stop the execution.
          shared_ptr<string> turnId_ {};
          // The time when the current execution round was last updated, in ISO 8601 format.
          shared_ptr<string> updatedAt_ {};
        };

        virtual bool empty() const override { return this->activeTurn_ == nullptr
        && this->activeTurnId_ == nullptr && this->agentId_ == nullptr && this->createdAt_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->scheduledTask_ == nullptr && this->sessionId_ == nullptr && this->sessionType_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr
        && this->userId_ == nullptr; };
        // activeTurn Field Functions 
        bool hasActiveTurn() const { return this->activeTurn_ != nullptr;};
        void deleteActiveTurn() { this->activeTurn_ = nullptr;};
        inline const Sessions::ActiveTurn & getActiveTurn() const { DARABONBA_PTR_GET_CONST(activeTurn_, Sessions::ActiveTurn) };
        inline Sessions::ActiveTurn getActiveTurn() { DARABONBA_PTR_GET(activeTurn_, Sessions::ActiveTurn) };
        inline Sessions& setActiveTurn(const Sessions::ActiveTurn & activeTurn) { DARABONBA_PTR_SET_VALUE(activeTurn_, activeTurn) };
        inline Sessions& setActiveTurn(Sessions::ActiveTurn && activeTurn) { DARABONBA_PTR_SET_RVALUE(activeTurn_, activeTurn) };


        // activeTurnId Field Functions 
        bool hasActiveTurnId() const { return this->activeTurnId_ != nullptr;};
        void deleteActiveTurnId() { this->activeTurnId_ = nullptr;};
        inline string getActiveTurnId() const { DARABONBA_PTR_GET_DEFAULT(activeTurnId_, "") };
        inline Sessions& setActiveTurnId(string activeTurnId) { DARABONBA_PTR_SET_VALUE(activeTurnId_, activeTurnId) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Sessions& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Sessions& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Sessions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sessions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scheduledTask Field Functions 
        bool hasScheduledTask() const { return this->scheduledTask_ != nullptr;};
        void deleteScheduledTask() { this->scheduledTask_ = nullptr;};
        inline const Sessions::ScheduledTask & getScheduledTask() const { DARABONBA_PTR_GET_CONST(scheduledTask_, Sessions::ScheduledTask) };
        inline Sessions::ScheduledTask getScheduledTask() { DARABONBA_PTR_GET(scheduledTask_, Sessions::ScheduledTask) };
        inline Sessions& setScheduledTask(const Sessions::ScheduledTask & scheduledTask) { DARABONBA_PTR_SET_VALUE(scheduledTask_, scheduledTask) };
        inline Sessions& setScheduledTask(Sessions::ScheduledTask && scheduledTask) { DARABONBA_PTR_SET_RVALUE(scheduledTask_, scheduledTask) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Sessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // sessionType Field Functions 
        bool hasSessionType() const { return this->sessionType_ != nullptr;};
        void deleteSessionType() { this->sessionType_ = nullptr;};
        inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
        inline Sessions& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Sessions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Sessions& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Sessions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The information about the execution that currently occupies the session.
        shared_ptr<Sessions::ActiveTurn> activeTurn_ {};
        // The ID of the execution that currently occupies the session. This field is empty when no active execution exists.
        shared_ptr<string> activeTurnId_ {};
        // The Agent tag of the session. The current executor is subject to activeTurn.agentId.
        shared_ptr<string> agentId_ {};
        // The time when the session was created, in ISO 8601 format.
        shared_ptr<string> createdAt_ {};
        // The session ID.
        shared_ptr<string> id_ {};
        // The session title.
        shared_ptr<string> name_ {};
        // The snapshot information when the scheduled task is triggered. This field is returned only for scheduled task sessions and is empty for sessions from other sources.
        shared_ptr<Sessions::ScheduledTask> scheduledTask_ {};
        // The session ID. Use this value when you send questions, query history, and delete sessions later.
        shared_ptr<string> sessionId_ {};
        // The source from which the session was created. Valid values:
        // - openapi: API call.
        // - cron: Scheduled task.
        // - im_dingtalk: DingTalk.
        // - im_feishu: Lark.
        // - alert: Alert.
        // This value is determined by the server and is not changed by subsequent follow-up questions.
        shared_ptr<string> sessionType_ {};
        // The session status. Valid values:
        // - active: Not archived.
        // - archived: Archived.
        // This field does not indicate whether the execution has ended.
        shared_ptr<string> status_ {};
        // The time when the session was last updated, in ISO 8601 format.
        shared_ptr<string> updatedAt_ {};
        // The ID of the user to whom the session belongs. This value is determined by the server based on the caller identity and is not used as a parameter for the client to specify the identity.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->sessions_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
      inline Data& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Data::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Data::Sessions>) };
      inline vector<Data::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Data::Sessions>) };
      inline Data& setSessions(const vector<Data::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Data& setSessions(vector<Data::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    protected:
      // The page size used for the current request.
      shared_ptr<int64_t> maxResults_ {};
      // The pagination token for the next page. Pass this value back as is in the next request. An empty value indicates that no more pages are available.
      shared_ptr<string> nextToken_ {};
      // The session list.
      shared_ptr<vector<Data::Sessions>> sessions_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCopilotSessionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCopilotSessionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCopilotSessionsResponseBody::Data) };
    inline ListCopilotSessionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCopilotSessionsResponseBody::Data) };
    inline ListCopilotSessionsResponseBody& setData(const ListCopilotSessionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCopilotSessionsResponseBody& setData(ListCopilotSessionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCopilotSessionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCopilotSessionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCopilotSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned status code. Success indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListCopilotSessionsResponseBody::Data> data_ {};
    // The page size used for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The error message. If code is Success, this field is empty. Otherwise, this field contains the request error message.
    shared_ptr<string> message_ {};
    // The request ID, which can be used for end-to-end diagnostics.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
