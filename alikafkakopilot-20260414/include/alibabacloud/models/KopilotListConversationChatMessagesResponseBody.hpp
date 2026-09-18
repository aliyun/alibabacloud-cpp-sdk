// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotListConversationChatMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotListConversationChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotListConversationChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    KopilotListConversationChatMessagesResponseBody() = default ;
    KopilotListConversationChatMessagesResponseBody(const KopilotListConversationChatMessagesResponseBody &) = default ;
    KopilotListConversationChatMessagesResponseBody(KopilotListConversationChatMessagesResponseBody &&) = default ;
    KopilotListConversationChatMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotListConversationChatMessagesResponseBody() = default ;
    KopilotListConversationChatMessagesResponseBody& operator=(const KopilotListConversationChatMessagesResponseBody &) = default ;
    KopilotListConversationChatMessagesResponseBody& operator=(KopilotListConversationChatMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(NextBeforeTurnId, nextBeforeTurnId_);
        DARABONBA_PTR_TO_JSON(ScheduledTaskInfo, scheduledTaskInfo_);
        DARABONBA_PTR_TO_JSON(ScheduledTaskQuota, scheduledTaskQuota_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TotalTurns, totalTurns_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(NextBeforeTurnId, nextBeforeTurnId_);
        DARABONBA_PTR_FROM_JSON(ScheduledTaskInfo, scheduledTaskInfo_);
        DARABONBA_PTR_FROM_JSON(ScheduledTaskQuota, scheduledTaskQuota_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TotalTurns, totalTurns_);
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
      class ScheduledTaskQuota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduledTaskQuota& obj) { 
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(Remaining, remaining_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduledTaskQuota& obj) { 
          DARABONBA_PTR_FROM_JSON(Limit, limit_);
          DARABONBA_PTR_FROM_JSON(Remaining, remaining_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        ScheduledTaskQuota() = default ;
        ScheduledTaskQuota(const ScheduledTaskQuota &) = default ;
        ScheduledTaskQuota(ScheduledTaskQuota &&) = default ;
        ScheduledTaskQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduledTaskQuota() = default ;
        ScheduledTaskQuota& operator=(const ScheduledTaskQuota &) = default ;
        ScheduledTaskQuota& operator=(ScheduledTaskQuota &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->limit_ == nullptr
        && this->remaining_ == nullptr && this->used_ == nullptr; };
        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
        inline ScheduledTaskQuota& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // remaining Field Functions 
        bool hasRemaining() const { return this->remaining_ != nullptr;};
        void deleteRemaining() { this->remaining_ = nullptr;};
        inline int64_t getRemaining() const { DARABONBA_PTR_GET_DEFAULT(remaining_, 0L) };
        inline ScheduledTaskQuota& setRemaining(int64_t remaining) { DARABONBA_PTR_SET_VALUE(remaining_, remaining) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ScheduledTaskQuota& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // The maximum number of tasks or channels allowed, subject to the actual configuration.
        shared_ptr<int32_t> limit_ {};
        // The remaining quota, calculated as the limit minus the used quota. The minimum value is 0.
        shared_ptr<int64_t> remaining_ {};
        // The used task quota. Tasks in the DRAFT, ENABLED, PAUSED, or NEEDS_AUTH state are counted. Completed or deleted tasks do not consume the quota.
        shared_ptr<int64_t> used_ {};
      };

      class ScheduledTaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduledTaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AsOf, asOf_);
          DARABONBA_PTR_TO_JSON(EnabledCount, enabledCount_);
          DARABONBA_PTR_TO_JSON(HasMoreTasks, hasMoreTasks_);
          DARABONBA_PTR_TO_JSON(HasScheduledTask, hasScheduledTask_);
          DARABONBA_PTR_TO_JSON(NextTaskCursor, nextTaskCursor_);
          DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
          DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduledTaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AsOf, asOf_);
          DARABONBA_PTR_FROM_JSON(EnabledCount, enabledCount_);
          DARABONBA_PTR_FROM_JSON(HasMoreTasks, hasMoreTasks_);
          DARABONBA_PTR_FROM_JSON(HasScheduledTask, hasScheduledTask_);
          DARABONBA_PTR_FROM_JSON(NextTaskCursor, nextTaskCursor_);
          DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
          DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        };
        ScheduledTaskInfo() = default ;
        ScheduledTaskInfo(const ScheduledTaskInfo &) = default ;
        ScheduledTaskInfo(ScheduledTaskInfo &&) = default ;
        ScheduledTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduledTaskInfo() = default ;
        ScheduledTaskInfo& operator=(const ScheduledTaskInfo &) = default ;
        ScheduledTaskInfo& operator=(ScheduledTaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
            DARABONBA_PTR_TO_JSON(ActiveRun, activeRun_);
            DARABONBA_PTR_TO_JSON(LastCompletedRun, lastCompletedRun_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NextRunAt, nextRunAt_);
            DARABONBA_PTR_TO_JSON(ScheduleDescription, scheduleDescription_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          };
          friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
            DARABONBA_PTR_FROM_JSON(ActiveRun, activeRun_);
            DARABONBA_PTR_FROM_JSON(LastCompletedRun, lastCompletedRun_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NextRunAt, nextRunAt_);
            DARABONBA_PTR_FROM_JSON(ScheduleDescription, scheduleDescription_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
          class LastCompletedRun : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LastCompletedRun& obj) { 
              DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
              DARABONBA_PTR_TO_JSON(RunId, runId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, LastCompletedRun& obj) { 
              DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
              DARABONBA_PTR_FROM_JSON(RunId, runId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            LastCompletedRun() = default ;
            LastCompletedRun(const LastCompletedRun &) = default ;
            LastCompletedRun(LastCompletedRun &&) = default ;
            LastCompletedRun(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LastCompletedRun() = default ;
            LastCompletedRun& operator=(const LastCompletedRun &) = default ;
            LastCompletedRun& operator=(LastCompletedRun &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->finishedAt_ == nullptr
        && this->runId_ == nullptr && this->status_ == nullptr; };
            // finishedAt Field Functions 
            bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
            void deleteFinishedAt() { this->finishedAt_ = nullptr;};
            inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
            inline LastCompletedRun& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


            // runId Field Functions 
            bool hasRunId() const { return this->runId_ != nullptr;};
            void deleteRunId() { this->runId_ = nullptr;};
            inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
            inline LastCompletedRun& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline LastCompletedRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The time when the run ended, in UTC ISO 8601 format. This value is empty if the run has not ended.
            shared_ptr<string> finishedAt_ {};
            // The unique identifier of a single run.
            shared_ptr<string> runId_ {};
            // The status of the most recent completed run. For example, SUCCEEDED indicates success and FAILED indicates failure.
            shared_ptr<string> status_ {};
          };

          class ActiveRun : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ActiveRun& obj) { 
              DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
              DARABONBA_PTR_TO_JSON(RunId, runId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, ActiveRun& obj) { 
              DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
              DARABONBA_PTR_FROM_JSON(RunId, runId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            ActiveRun() = default ;
            ActiveRun(const ActiveRun &) = default ;
            ActiveRun(ActiveRun &&) = default ;
            ActiveRun(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ActiveRun() = default ;
            ActiveRun& operator=(const ActiveRun &) = default ;
            ActiveRun& operator=(ActiveRun &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->finishedAt_ == nullptr
        && this->runId_ == nullptr && this->status_ == nullptr; };
            // finishedAt Field Functions 
            bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
            void deleteFinishedAt() { this->finishedAt_ = nullptr;};
            inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
            inline ActiveRun& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


            // runId Field Functions 
            bool hasRunId() const { return this->runId_ != nullptr;};
            void deleteRunId() { this->runId_ = nullptr;};
            inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
            inline ActiveRun& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline ActiveRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The time when the run ended, in UTC ISO 8601 format. This value is typically empty for queued or running tasks.
            shared_ptr<string> finishedAt_ {};
            // The unique identifier of a single run.
            shared_ptr<string> runId_ {};
            // The status of a single run. A value of QUEUED indicates that the run is queued. A value of RUNNING indicates that the run is in progress.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->activeRun_ == nullptr
        && this->lastCompletedRun_ == nullptr && this->name_ == nullptr && this->nextRunAt_ == nullptr && this->scheduleDescription_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr; };
          // activeRun Field Functions 
          bool hasActiveRun() const { return this->activeRun_ != nullptr;};
          void deleteActiveRun() { this->activeRun_ = nullptr;};
          inline const Tasks::ActiveRun & getActiveRun() const { DARABONBA_PTR_GET_CONST(activeRun_, Tasks::ActiveRun) };
          inline Tasks::ActiveRun getActiveRun() { DARABONBA_PTR_GET(activeRun_, Tasks::ActiveRun) };
          inline Tasks& setActiveRun(const Tasks::ActiveRun & activeRun) { DARABONBA_PTR_SET_VALUE(activeRun_, activeRun) };
          inline Tasks& setActiveRun(Tasks::ActiveRun && activeRun) { DARABONBA_PTR_SET_RVALUE(activeRun_, activeRun) };


          // lastCompletedRun Field Functions 
          bool hasLastCompletedRun() const { return this->lastCompletedRun_ != nullptr;};
          void deleteLastCompletedRun() { this->lastCompletedRun_ = nullptr;};
          inline const Tasks::LastCompletedRun & getLastCompletedRun() const { DARABONBA_PTR_GET_CONST(lastCompletedRun_, Tasks::LastCompletedRun) };
          inline Tasks::LastCompletedRun getLastCompletedRun() { DARABONBA_PTR_GET(lastCompletedRun_, Tasks::LastCompletedRun) };
          inline Tasks& setLastCompletedRun(const Tasks::LastCompletedRun & lastCompletedRun) { DARABONBA_PTR_SET_VALUE(lastCompletedRun_, lastCompletedRun) };
          inline Tasks& setLastCompletedRun(Tasks::LastCompletedRun && lastCompletedRun) { DARABONBA_PTR_SET_RVALUE(lastCompletedRun_, lastCompletedRun) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nextRunAt Field Functions 
          bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
          void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
          inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
          inline Tasks& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


          // scheduleDescription Field Functions 
          bool hasScheduleDescription() const { return this->scheduleDescription_ != nullptr;};
          void deleteScheduleDescription() { this->scheduleDescription_ = nullptr;};
          inline string getScheduleDescription() const { DARABONBA_PTR_GET_DEFAULT(scheduleDescription_, "") };
          inline Tasks& setScheduleDescription(string scheduleDescription) { DARABONBA_PTR_SET_VALUE(scheduleDescription_, scheduleDescription) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        protected:
          // The run record that is currently queued or running. This value is empty if there is no active run.
          shared_ptr<Tasks::ActiveRun> activeRun_ {};
          // The most recent completed run record, including failed runs. This value is empty if no record exists.
          shared_ptr<Tasks::LastCompletedRun> lastCompletedRun_ {};
          // The name of the scheduled task.
          shared_ptr<string> name_ {};
          // The next scheduled execution time, in UTC ISO 8601 format. This value is empty if no next execution is scheduled.
          shared_ptr<string> nextRunAt_ {};
          // The human-readable description of the execution schedule.
          shared_ptr<string> scheduleDescription_ {};
          // The status of the scheduled task. Valid values:
          // - DRAFT: The task is a draft.
          // - ENABLED: The task is enabled.
          // - PAUSED: The task is paused.
          // - NEEDS_AUTH: The task is pending authorization.
          // - COMPLETED: The task is completed.
          // 
          // This status is independent of the run status.
          shared_ptr<string> status_ {};
          // The unique identifier of the scheduled task.
          shared_ptr<string> taskId_ {};
        };

        virtual bool empty() const override { return this->asOf_ == nullptr
        && this->enabledCount_ == nullptr && this->hasMoreTasks_ == nullptr && this->hasScheduledTask_ == nullptr && this->nextTaskCursor_ == nullptr && this->taskCount_ == nullptr
        && this->tasks_ == nullptr; };
        // asOf Field Functions 
        bool hasAsOf() const { return this->asOf_ != nullptr;};
        void deleteAsOf() { this->asOf_ = nullptr;};
        inline string getAsOf() const { DARABONBA_PTR_GET_DEFAULT(asOf_, "") };
        inline ScheduledTaskInfo& setAsOf(string asOf) { DARABONBA_PTR_SET_VALUE(asOf_, asOf) };


        // enabledCount Field Functions 
        bool hasEnabledCount() const { return this->enabledCount_ != nullptr;};
        void deleteEnabledCount() { this->enabledCount_ = nullptr;};
        inline int64_t getEnabledCount() const { DARABONBA_PTR_GET_DEFAULT(enabledCount_, 0L) };
        inline ScheduledTaskInfo& setEnabledCount(int64_t enabledCount) { DARABONBA_PTR_SET_VALUE(enabledCount_, enabledCount) };


        // hasMoreTasks Field Functions 
        bool hasHasMoreTasks() const { return this->hasMoreTasks_ != nullptr;};
        void deleteHasMoreTasks() { this->hasMoreTasks_ = nullptr;};
        inline bool getHasMoreTasks() const { DARABONBA_PTR_GET_DEFAULT(hasMoreTasks_, false) };
        inline ScheduledTaskInfo& setHasMoreTasks(bool hasMoreTasks) { DARABONBA_PTR_SET_VALUE(hasMoreTasks_, hasMoreTasks) };


        // hasScheduledTask Field Functions 
        bool hasHasScheduledTask() const { return this->hasScheduledTask_ != nullptr;};
        void deleteHasScheduledTask() { this->hasScheduledTask_ = nullptr;};
        inline bool getHasScheduledTask() const { DARABONBA_PTR_GET_DEFAULT(hasScheduledTask_, false) };
        inline ScheduledTaskInfo& setHasScheduledTask(bool hasScheduledTask) { DARABONBA_PTR_SET_VALUE(hasScheduledTask_, hasScheduledTask) };


        // nextTaskCursor Field Functions 
        bool hasNextTaskCursor() const { return this->nextTaskCursor_ != nullptr;};
        void deleteNextTaskCursor() { this->nextTaskCursor_ = nullptr;};
        inline string getNextTaskCursor() const { DARABONBA_PTR_GET_DEFAULT(nextTaskCursor_, "") };
        inline ScheduledTaskInfo& setNextTaskCursor(string nextTaskCursor) { DARABONBA_PTR_SET_VALUE(nextTaskCursor_, nextTaskCursor) };


        // taskCount Field Functions 
        bool hasTaskCount() const { return this->taskCount_ != nullptr;};
        void deleteTaskCount() { this->taskCount_ = nullptr;};
        inline int64_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0L) };
        inline ScheduledTaskInfo& setTaskCount(int64_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


        // tasks Field Functions 
        bool hasTasks() const { return this->tasks_ != nullptr;};
        void deleteTasks() { this->tasks_ = nullptr;};
        inline const vector<ScheduledTaskInfo::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ScheduledTaskInfo::Tasks>) };
        inline vector<ScheduledTaskInfo::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ScheduledTaskInfo::Tasks>) };
        inline ScheduledTaskInfo& setTasks(const vector<ScheduledTaskInfo::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
        inline ScheduledTaskInfo& setTasks(vector<ScheduledTaskInfo::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      protected:
        // The time when the overview was generated, in UTC ISO 8601 format.
        shared_ptr<string> asOf_ {};
        // The number of associated tasks in the ENABLED state.
        shared_ptr<int64_t> enabledCount_ {};
        // Indicates whether there is a next page of associated tasks.
        shared_ptr<bool> hasMoreTasks_ {};
        // Indicates whether the current session has associated scheduled tasks in the enabled, paused, or pending authorization state.
        shared_ptr<bool> hasScheduledTask_ {};
        // The cursor for the next page. This value is empty if there is no next page.
        shared_ptr<string> nextTaskCursor_ {};
        // The total number of associated tasks. Only tasks in the ENABLED, PAUSED, or NEEDS_AUTH state are counted.
        shared_ptr<int64_t> taskCount_ {};
        // The list of associated tasks on the current page.
        shared_ptr<vector<ScheduledTaskInfo::Tasks>> tasks_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Feedback, feedback_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(TurnId, turnId_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->feedback_ == nullptr && this->role_ == nullptr && this->turnId_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Messages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // feedback Field Functions 
        bool hasFeedback() const { return this->feedback_ != nullptr;};
        void deleteFeedback() { this->feedback_ = nullptr;};
        inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
        inline Messages& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


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


      protected:
        // The actual content of the message.
        shared_ptr<string> content_ {};
        // The UNIX timestamp when the message was created, in milliseconds.
        shared_ptr<string> createTime_ {};
        // The user satisfaction level.
        shared_ptr<string> feedback_ {};
        // The role identifier.
        shared_ptr<string> role_ {};
        // The primary key ID.
        shared_ptr<string> turnId_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->messages_ == nullptr && this->nextBeforeTurnId_ == nullptr && this->scheduledTaskInfo_ == nullptr && this->scheduledTaskQuota_ == nullptr && this->sessionId_ == nullptr
        && this->totalTurns_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // nextBeforeTurnId Field Functions 
      bool hasNextBeforeTurnId() const { return this->nextBeforeTurnId_ != nullptr;};
      void deleteNextBeforeTurnId() { this->nextBeforeTurnId_ = nullptr;};
      inline int64_t getNextBeforeTurnId() const { DARABONBA_PTR_GET_DEFAULT(nextBeforeTurnId_, 0L) };
      inline Data& setNextBeforeTurnId(int64_t nextBeforeTurnId) { DARABONBA_PTR_SET_VALUE(nextBeforeTurnId_, nextBeforeTurnId) };


      // scheduledTaskInfo Field Functions 
      bool hasScheduledTaskInfo() const { return this->scheduledTaskInfo_ != nullptr;};
      void deleteScheduledTaskInfo() { this->scheduledTaskInfo_ = nullptr;};
      inline const Data::ScheduledTaskInfo & getScheduledTaskInfo() const { DARABONBA_PTR_GET_CONST(scheduledTaskInfo_, Data::ScheduledTaskInfo) };
      inline Data::ScheduledTaskInfo getScheduledTaskInfo() { DARABONBA_PTR_GET(scheduledTaskInfo_, Data::ScheduledTaskInfo) };
      inline Data& setScheduledTaskInfo(const Data::ScheduledTaskInfo & scheduledTaskInfo) { DARABONBA_PTR_SET_VALUE(scheduledTaskInfo_, scheduledTaskInfo) };
      inline Data& setScheduledTaskInfo(Data::ScheduledTaskInfo && scheduledTaskInfo) { DARABONBA_PTR_SET_RVALUE(scheduledTaskInfo_, scheduledTaskInfo) };


      // scheduledTaskQuota Field Functions 
      bool hasScheduledTaskQuota() const { return this->scheduledTaskQuota_ != nullptr;};
      void deleteScheduledTaskQuota() { this->scheduledTaskQuota_ = nullptr;};
      inline const Data::ScheduledTaskQuota & getScheduledTaskQuota() const { DARABONBA_PTR_GET_CONST(scheduledTaskQuota_, Data::ScheduledTaskQuota) };
      inline Data::ScheduledTaskQuota getScheduledTaskQuota() { DARABONBA_PTR_GET(scheduledTaskQuota_, Data::ScheduledTaskQuota) };
      inline Data& setScheduledTaskQuota(const Data::ScheduledTaskQuota & scheduledTaskQuota) { DARABONBA_PTR_SET_VALUE(scheduledTaskQuota_, scheduledTaskQuota) };
      inline Data& setScheduledTaskQuota(Data::ScheduledTaskQuota && scheduledTaskQuota) { DARABONBA_PTR_SET_RVALUE(scheduledTaskQuota_, scheduledTaskQuota) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // totalTurns Field Functions 
      bool hasTotalTurns() const { return this->totalTurns_ != nullptr;};
      void deleteTotalTurns() { this->totalTurns_ = nullptr;};
      inline int64_t getTotalTurns() const { DARABONBA_PTR_GET_DEFAULT(totalTurns_, 0L) };
      inline Data& setTotalTurns(int64_t totalTurns) { DARABONBA_PTR_SET_VALUE(totalTurns_, totalTurns) };


    protected:
      // Indicates whether more data is available.
      shared_ptr<bool> hasMore_ {};
      // The list of messages.
      shared_ptr<vector<Data::Messages>> messages_ {};
      // The cursor for the next page.
      shared_ptr<int64_t> nextBeforeTurnId_ {};
      // The details of scheduled tasks associated with the current session. Only tasks in the enabled, paused, or pending authorization state are counted.
      shared_ptr<Data::ScheduledTaskInfo> scheduledTaskInfo_ {};
      // The scheduled task quota for the current Alibaba Cloud account in this environment, counted across regions.
      shared_ptr<Data::ScheduledTaskQuota> scheduledTaskQuota_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
      // The total number of turn IDs.
      shared_ptr<int64_t> totalTurns_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline KopilotListConversationChatMessagesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KopilotListConversationChatMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, KopilotListConversationChatMessagesResponseBody::Data) };
    inline KopilotListConversationChatMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, KopilotListConversationChatMessagesResponseBody::Data) };
    inline KopilotListConversationChatMessagesResponseBody& setData(const KopilotListConversationChatMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KopilotListConversationChatMessagesResponseBody& setData(KopilotListConversationChatMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotListConversationChatMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline KopilotListConversationChatMessagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. A value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // The data returned when the call is successful.
    shared_ptr<KopilotListConversationChatMessagesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
