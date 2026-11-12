// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOPILOTSESSIONMESSAGESRESPONSEBODY_HPP_
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
  class ListCopilotSessionMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCopilotSessionMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCopilotSessionMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListCopilotSessionMessagesResponseBody() = default ;
    ListCopilotSessionMessagesResponseBody(const ListCopilotSessionMessagesResponseBody &) = default ;
    ListCopilotSessionMessagesResponseBody(ListCopilotSessionMessagesResponseBody &&) = default ;
    ListCopilotSessionMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCopilotSessionMessagesResponseBody() = default ;
    ListCopilotSessionMessagesResponseBody& operator=(const ListCopilotSessionMessagesResponseBody &) = default ;
    ListCopilotSessionMessagesResponseBody& operator=(ListCopilotSessionMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cursor, cursor_);
        DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(messages, messages_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(session, session_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cursor, cursor_);
        DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(messages, messages_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(session, session_);
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
      class Session : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Session& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(scheduledTask, scheduledTask_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(sessionType, sessionType_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Session& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(scheduledTask, scheduledTask_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(sessionType, sessionType_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Session() = default ;
        Session(const Session &) = default ;
        Session(Session &&) = default ;
        Session(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Session() = default ;
        Session& operator=(const Session &) = default ;
        Session& operator=(Session &&) = default ;
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
          // The ID of this scheduled execution. Different runIds are used for multiple triggers of the same scheduled task.
          shared_ptr<string> runId_ {};
          // The scheduled trigger time, in ISO 8601 format with time zone. This field is empty if there is no record.
          shared_ptr<string> scheduledAt_ {};
          // The time when Copilot started processing this schedule, in ISO 8601 format with time zone. This is not the time when the model outputs the first token.
          shared_ptr<string> startedAt_ {};
          // The ID of the associated scheduled task.
          shared_ptr<int64_t> taskId_ {};
          // The name of the scheduled task at the time of this trigger.
          shared_ptr<string> taskName_ {};
          // The scheduling time zone of the scheduled task, such as Asia/Shanghai.
          shared_ptr<string> timezone_ {};
        };

        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createdAt_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scheduledTask_ == nullptr && this->sessionId_ == nullptr
        && this->sessionType_ == nullptr && this->updatedAt_ == nullptr && this->userId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Session& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Session& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Session& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Session& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scheduledTask Field Functions 
        bool hasScheduledTask() const { return this->scheduledTask_ != nullptr;};
        void deleteScheduledTask() { this->scheduledTask_ = nullptr;};
        inline const Session::ScheduledTask & getScheduledTask() const { DARABONBA_PTR_GET_CONST(scheduledTask_, Session::ScheduledTask) };
        inline Session::ScheduledTask getScheduledTask() { DARABONBA_PTR_GET(scheduledTask_, Session::ScheduledTask) };
        inline Session& setScheduledTask(const Session::ScheduledTask & scheduledTask) { DARABONBA_PTR_SET_VALUE(scheduledTask_, scheduledTask) };
        inline Session& setScheduledTask(Session::ScheduledTask && scheduledTask) { DARABONBA_PTR_SET_RVALUE(scheduledTask_, scheduledTask) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Session& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // sessionType Field Functions 
        bool hasSessionType() const { return this->sessionType_ != nullptr;};
        void deleteSessionType() { this->sessionType_ = nullptr;};
        inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
        inline Session& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Session& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Session& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The agent identifier in the session summary, which does not represent the current executor. The current executor is subject to activeTurn.agentId.
        shared_ptr<string> agentId_ {};
        // The time when the session was created, in ISO 8601 format.
        shared_ptr<string> createdAt_ {};
        // The session ID, which is the same as sessionId. We recommend using sessionId to initiate subsequent requests.
        shared_ptr<string> id_ {};
        // The session title.
        shared_ptr<string> name_ {};
        // The snapshot information when the scheduled task is triggered. This field is returned only for scheduled task sessions and is empty for sessions from other sources. Subsequent renaming or deletion of the task does not change the historical snapshot.
        shared_ptr<Session::ScheduledTask> scheduledTask_ {};
        // The session ID. Use this value when you send follow-up questions, query history, or delete the session.
        shared_ptr<string> sessionId_ {};
        // The source from which the session was created. Valid values:
        // - openapi: Active call.
        // - cron: Scheduled task.
        // - im_dingtalk: DingTalk.
        // - im_feishu: Lark.
        // - alert: Alert.
        // This value is determined by the server and is not changed by follow-up questions.
        shared_ptr<string> sessionType_ {};
        // The time when the session was last updated, in ISO 8601 format.
        shared_ptr<string> updatedAt_ {};
        // The ID of the user to whom the session belongs. This value is determined by the server based on the caller identity and is not used as a parameter for the client to specify the identity.
        shared_ptr<string> userId_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(eventId, eventId_);
          DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_ANY_TO_JSON(metadata, metadata_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(turnId, turnId_);
          DARABONBA_ANY_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(eventId, eventId_);
          DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_ANY_FROM_JSON(metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(turnId, turnId_);
          DARABONBA_ANY_FROM_JSON(usage, usage_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(text, text_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(text, text_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->text_ == nullptr
        && this->type_ == nullptr; };
          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The readable text content in the event. This field is empty if no readable string is available.
          shared_ptr<string> text_ {};
          // The event type, such as USER_MESSAGE, TEXT_MESSAGE_CONTENT, or TOOL_CALL_ARGS. This is not fixed to text.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->createdAt_ == nullptr && this->eventId_ == nullptr && this->finishedAt_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr
        && this->name_ == nullptr && this->role_ == nullptr && this->turnId_ == nullptr && this->usage_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
        inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
        inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Messages& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline Messages& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // finishedAt Field Functions 
        bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
        void deleteFinishedAt() { this->finishedAt_ = nullptr;};
        inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
        inline Messages& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Messages& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Messages& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Messages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // turnId Field Functions 
        bool hasTurnId() const { return this->turnId_ != nullptr;};
        void deleteTurnId() { this->turnId_ = nullptr;};
        inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
        inline Messages& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline         const Darabonba::Json & getUsage() const { DARABONBA_GET(usage_) };
        Darabonba::Json & getUsage() { DARABONBA_GET(usage_) };
        inline Messages& setUsage(const Darabonba::Json & usage) { DARABONBA_SET_VALUE(usage_, usage) };
        inline Messages& setUsage(Darabonba::Json && usage) { DARABONBA_SET_RVALUE(usage_, usage) };


      protected:
        // The human-readable content summary of the event. To restore the complete interactive interface, use the original event in metadata.
        shared_ptr<vector<Messages::Content>> content_ {};
        // The time when the historical event record was created, in ISO 8601 format.
        shared_ptr<string> createdAt_ {};
        // The position of the event within the session, used for sorting and deduplication.
        shared_ptr<string> eventId_ {};
        // Currently, an empty string is returned. This field is not used to determine whether the execution has finished.
        shared_ptr<string> finishedAt_ {};
        // The ID of the historical event record.
        shared_ptr<string> id_ {};
        // The complete original event object. The internal fields retain their original protocol names, without recursive naming conversion or the need for further JSON string parsing.
        Darabonba::Json metadata_ {};
        // Currently, an empty string is returned. This field is not used to identify the event type.
        shared_ptr<string> name_ {};
        // The role in the original event. An empty string is returned if the event does not contain a role.
        shared_ptr<string> role_ {};
        // The ID of the associated execution. This field is empty if there is no associated execution.
        shared_ptr<string> turnId_ {};
        // The token usage per event. This data is not currently returned. To query the cumulative usage of an execution, call GetCopilotSession.
        Darabonba::Json usage_ {};
      };

      virtual bool empty() const override { return this->cursor_ == nullptr
        && this->hasMore_ == nullptr && this->maxResults_ == nullptr && this->messages_ == nullptr && this->nextToken_ == nullptr && this->session_ == nullptr; };
      // cursor Field Functions 
      bool hasCursor() const { return this->cursor_ != nullptr;};
      void deleteCursor() { this->cursor_ = nullptr;};
      inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
      inline Data& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
      inline Data& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // session Field Functions 
      bool hasSession() const { return this->session_ != nullptr;};
      void deleteSession() { this->session_ = nullptr;};
      inline const Data::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, Data::Session) };
      inline Data::Session getSession() { DARABONBA_PTR_GET(session_, Data::Session) };
      inline Data& setSession(const Data::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
      inline Data& setSession(Data::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


    protected:
      // The cursor of the last event on the current page, returned as a decimal string. The value is 0 for an empty page. This is not the pagination nextToken and does not indicate that a round of execution has finished.
      shared_ptr<string> cursor_ {};
      // Indicates whether there are subsequent historical events. Valid values:
      // - true: Yes.
      // - false: No.
      shared_ptr<bool> hasMore_ {};
      // The page size used for the current request.
      shared_ptr<int64_t> maxResults_ {};
      // The history event records on the current page, sorted in ascending order by eventId. A record does not necessarily represent a complete chat message and may be a chunk of text or a tool calling (invoke) event.
      shared_ptr<vector<Data::Messages>> messages_ {};
      // The token for the next page. Pass this value back as is in the next request. An empty value indicates that there is no next page.
      shared_ptr<string> nextToken_ {};
      // The session summary of the current user. This object does not contain the active execution summary. To query the execution status, call GetCopilotSession.
      shared_ptr<Data::Session> session_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCopilotSessionMessagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCopilotSessionMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCopilotSessionMessagesResponseBody::Data) };
    inline ListCopilotSessionMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCopilotSessionMessagesResponseBody::Data) };
    inline ListCopilotSessionMessagesResponseBody& setData(const ListCopilotSessionMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCopilotSessionMessagesResponseBody& setData(ListCopilotSessionMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCopilotSessionMessagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCopilotSessionMessagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCopilotSessionMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned status code. Success indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListCopilotSessionMessagesResponseBody::Data> data_ {};
    // A field retained for historical compatibility, which may be omitted. Use data.maxResults instead.
    shared_ptr<int32_t> maxResults_ {};
    // The error message. If the code is Success, this field is empty. Otherwise, this field contains the error message of the request.
    shared_ptr<string> message_ {};
    // The request ID, which can be used for end-to-end diagnostics.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
