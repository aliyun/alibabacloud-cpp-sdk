// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataScheduledTaskInfoBySessionIdValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotListConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotListConversationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotListConversationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    KopilotListConversationsResponseBody() = default ;
    KopilotListConversationsResponseBody(const KopilotListConversationsResponseBody &) = default ;
    KopilotListConversationsResponseBody(KopilotListConversationsResponseBody &&) = default ;
    KopilotListConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotListConversationsResponseBody() = default ;
    KopilotListConversationsResponseBody& operator=(const KopilotListConversationsResponseBody &) = default ;
    KopilotListConversationsResponseBody& operator=(KopilotListConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutomationOverview, automationOverview_);
        DARABONBA_PTR_TO_JSON(ConversationIds, conversationIds_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(ScheduledTaskInfoBySessionId, scheduledTaskInfoBySessionId_);
        DARABONBA_PTR_TO_JSON(ScheduledTaskQuota, scheduledTaskQuota_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutomationOverview, automationOverview_);
        DARABONBA_PTR_FROM_JSON(ConversationIds, conversationIds_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(ScheduledTaskInfoBySessionId, scheduledTaskInfoBySessionId_);
        DARABONBA_PTR_FROM_JSON(ScheduledTaskQuota, scheduledTaskQuota_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        // The remaining quota, calculated as the limit minus the used quantity. The minimum value is 0.
        shared_ptr<int64_t> remaining_ {};
        // The number of task quota slots consumed. Tasks in DRAFT, ENABLED, PAUSED, or NEEDS_AUTH status are counted. Completed and deleted tasks do not consume quota.
        shared_ptr<int64_t> used_ {};
      };

      class AutomationOverview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutomationOverview& obj) { 
          DARABONBA_PTR_TO_JSON(AsOf, asOf_);
          DARABONBA_PTR_TO_JSON(DestinationQuota, destinationQuota_);
          DARABONBA_PTR_TO_JSON(Destinations, destinations_);
          DARABONBA_PTR_TO_JSON(HomeRegion, homeRegion_);
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        };
        friend void from_json(const Darabonba::Json& j, AutomationOverview& obj) { 
          DARABONBA_PTR_FROM_JSON(AsOf, asOf_);
          DARABONBA_PTR_FROM_JSON(DestinationQuota, destinationQuota_);
          DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
          DARABONBA_PTR_FROM_JSON(HomeRegion, homeRegion_);
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        };
        AutomationOverview() = default ;
        AutomationOverview(const AutomationOverview &) = default ;
        AutomationOverview(AutomationOverview &&) = default ;
        AutomationOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutomationOverview() = default ;
        AutomationOverview& operator=(const AutomationOverview &) = default ;
        AutomationOverview& operator=(AutomationOverview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
            DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
            DARABONBA_PTR_TO_JSON(Items, items_);
            DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
            DARABONBA_PTR_TO_JSON(Total, total_);
          };
          friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
            DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
            DARABONBA_PTR_FROM_JSON(Items, items_);
            DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
            DARABONBA_PTR_FROM_JSON(Total, total_);
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
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(ActiveRun, activeRun_);
              DARABONBA_PTR_TO_JSON(Configuration, configuration_);
              DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
              DARABONBA_PTR_TO_JSON(LastCompletedRun, lastCompletedRun_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(NextRunAt, nextRunAt_);
              DARABONBA_PTR_TO_JSON(ScheduleDescription, scheduleDescription_);
              DARABONBA_PTR_TO_JSON(SessionMode, sessionMode_);
              DARABONBA_PTR_TO_JSON(SourceSessionId, sourceSessionId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TargetSessionId, targetSessionId_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
              DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
              DARABONBA_PTR_TO_JSON(Version, version_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(ActiveRun, activeRun_);
              DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
              DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
              DARABONBA_PTR_FROM_JSON(LastCompletedRun, lastCompletedRun_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(NextRunAt, nextRunAt_);
              DARABONBA_PTR_FROM_JSON(ScheduleDescription, scheduleDescription_);
              DARABONBA_PTR_FROM_JSON(SessionMode, sessionMode_);
              DARABONBA_PTR_FROM_JSON(SourceSessionId, sourceSessionId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TargetSessionId, targetSessionId_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
              DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
              DARABONBA_PTR_FROM_JSON(Version, version_);
            };
            Items() = default ;
            Items(const Items &) = default ;
            Items(Items &&) = default ;
            Items(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Items() = default ;
            Items& operator=(const Items &) = default ;
            Items& operator=(Items &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class LastCompletedRun : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const LastCompletedRun& obj) { 
                DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
                DARABONBA_PTR_TO_JSON(RunId, runId_);
                DARABONBA_PTR_TO_JSON(Status, status_);
              };
              friend void from_json(const Darabonba::Json& j, LastCompletedRun& obj) { 
                DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
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
              virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->finishedAt_ == nullptr && this->runId_ == nullptr && this->status_ == nullptr; };
              // errorCode Field Functions 
              bool hasErrorCode() const { return this->errorCode_ != nullptr;};
              void deleteErrorCode() { this->errorCode_ = nullptr;};
              inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
              inline LastCompletedRun& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline LastCompletedRun& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


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
              // The error code of a failed run. This field is empty if no error occurred.
              shared_ptr<string> errorCode_ {};
              // The user-facing failure reason. This field is empty if no error occurred.
              shared_ptr<string> errorMessage_ {};
              // The time when the run finished, in UTC ISO 8601 format. This field is empty if the run has not finished.
              shared_ptr<string> finishedAt_ {};
              // The unique identifier of a single run.
              shared_ptr<string> runId_ {};
              // The status of the most recent completed run. For example, SUCCEEDED indicates success and FAILED indicates failure.
              shared_ptr<string> status_ {};
            };

            class Configuration : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
                DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
                DARABONBA_PTR_TO_JSON(DestinationIds, destinationIds_);
                DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
                DARABONBA_PTR_TO_JSON(Instruction, instruction_);
                DARABONBA_PTR_TO_JSON(IntervalSeconds, intervalSeconds_);
                DARABONBA_PTR_TO_JSON(MaxRunSeconds, maxRunSeconds_);
                DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
                DARABONBA_PTR_TO_JSON(ResourceMode, resourceMode_);
                DARABONBA_PTR_TO_JSON(RunAt, runAt_);
                DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
                DARABONBA_PTR_TO_JSON(SessionMode, sessionMode_);
                DARABONBA_PTR_TO_JSON(TargetSessionId, targetSessionId_);
                DARABONBA_PTR_TO_JSON(Timezone, timezone_);
              };
              friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
                DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
                DARABONBA_PTR_FROM_JSON(DestinationIds, destinationIds_);
                DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
                DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
                DARABONBA_PTR_FROM_JSON(IntervalSeconds, intervalSeconds_);
                DARABONBA_PTR_FROM_JSON(MaxRunSeconds, maxRunSeconds_);
                DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
                DARABONBA_PTR_FROM_JSON(ResourceMode, resourceMode_);
                DARABONBA_PTR_FROM_JSON(RunAt, runAt_);
                DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
                DARABONBA_PTR_FROM_JSON(SessionMode, sessionMode_);
                DARABONBA_PTR_FROM_JSON(TargetSessionId, targetSessionId_);
                DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
              };
              Configuration() = default ;
              Configuration(const Configuration &) = default ;
              Configuration(Configuration &&) = default ;
              Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Configuration() = default ;
              Configuration& operator=(const Configuration &) = default ;
              Configuration& operator=(Configuration &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->destinationIds_ == nullptr && this->instanceIds_ == nullptr && this->instruction_ == nullptr && this->intervalSeconds_ == nullptr && this->maxRunSeconds_ == nullptr
        && this->maxTokens_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceMode_ == nullptr && this->runAt_ == nullptr
        && this->scheduleType_ == nullptr && this->sessionMode_ == nullptr && this->targetSessionId_ == nullptr && this->timezone_ == nullptr; };
              // cronExpression Field Functions 
              bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
              void deleteCronExpression() { this->cronExpression_ = nullptr;};
              inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
              inline Configuration& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


              // destinationIds Field Functions 
              bool hasDestinationIds() const { return this->destinationIds_ != nullptr;};
              void deleteDestinationIds() { this->destinationIds_ = nullptr;};
              inline const vector<string> & getDestinationIds() const { DARABONBA_PTR_GET_CONST(destinationIds_, vector<string>) };
              inline vector<string> getDestinationIds() { DARABONBA_PTR_GET(destinationIds_, vector<string>) };
              inline Configuration& setDestinationIds(const vector<string> & destinationIds) { DARABONBA_PTR_SET_VALUE(destinationIds_, destinationIds) };
              inline Configuration& setDestinationIds(vector<string> && destinationIds) { DARABONBA_PTR_SET_RVALUE(destinationIds_, destinationIds) };


              // instanceIds Field Functions 
              bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
              void deleteInstanceIds() { this->instanceIds_ = nullptr;};
              inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
              inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
              inline Configuration& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
              inline Configuration& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


              // instruction Field Functions 
              bool hasInstruction() const { return this->instruction_ != nullptr;};
              void deleteInstruction() { this->instruction_ = nullptr;};
              inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
              inline Configuration& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


              // intervalSeconds Field Functions 
              bool hasIntervalSeconds() const { return this->intervalSeconds_ != nullptr;};
              void deleteIntervalSeconds() { this->intervalSeconds_ = nullptr;};
              inline int32_t getIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(intervalSeconds_, 0) };
              inline Configuration& setIntervalSeconds(int32_t intervalSeconds) { DARABONBA_PTR_SET_VALUE(intervalSeconds_, intervalSeconds) };


              // maxRunSeconds Field Functions 
              bool hasMaxRunSeconds() const { return this->maxRunSeconds_ != nullptr;};
              void deleteMaxRunSeconds() { this->maxRunSeconds_ = nullptr;};
              inline int32_t getMaxRunSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunSeconds_, 0) };
              inline Configuration& setMaxRunSeconds(int32_t maxRunSeconds) { DARABONBA_PTR_SET_VALUE(maxRunSeconds_, maxRunSeconds) };


              // maxTokens Field Functions 
              bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
              void deleteMaxTokens() { this->maxTokens_ = nullptr;};
              inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
              inline Configuration& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Configuration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline Configuration& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


              // resourceMode Field Functions 
              bool hasResourceMode() const { return this->resourceMode_ != nullptr;};
              void deleteResourceMode() { this->resourceMode_ = nullptr;};
              inline string getResourceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceMode_, "") };
              inline Configuration& setResourceMode(string resourceMode) { DARABONBA_PTR_SET_VALUE(resourceMode_, resourceMode) };


              // runAt Field Functions 
              bool hasRunAt() const { return this->runAt_ != nullptr;};
              void deleteRunAt() { this->runAt_ = nullptr;};
              inline string getRunAt() const { DARABONBA_PTR_GET_DEFAULT(runAt_, "") };
              inline Configuration& setRunAt(string runAt) { DARABONBA_PTR_SET_VALUE(runAt_, runAt) };


              // scheduleType Field Functions 
              bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
              void deleteScheduleType() { this->scheduleType_ = nullptr;};
              inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
              inline Configuration& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


              // sessionMode Field Functions 
              bool hasSessionMode() const { return this->sessionMode_ != nullptr;};
              void deleteSessionMode() { this->sessionMode_ = nullptr;};
              inline string getSessionMode() const { DARABONBA_PTR_GET_DEFAULT(sessionMode_, "") };
              inline Configuration& setSessionMode(string sessionMode) { DARABONBA_PTR_SET_VALUE(sessionMode_, sessionMode) };


              // targetSessionId Field Functions 
              bool hasTargetSessionId() const { return this->targetSessionId_ != nullptr;};
              void deleteTargetSessionId() { this->targetSessionId_ = nullptr;};
              inline string getTargetSessionId() const { DARABONBA_PTR_GET_DEFAULT(targetSessionId_, "") };
              inline Configuration& setTargetSessionId(string targetSessionId) { DARABONBA_PTR_SET_VALUE(targetSessionId_, targetSessionId) };


              // timezone Field Functions 
              bool hasTimezone() const { return this->timezone_ != nullptr;};
              void deleteTimezone() { this->timezone_ = nullptr;};
              inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
              inline Configuration& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


            protected:
              // The six-field cron expression with the seconds field fixed to 0. This field is used only for the CRON schedule type.
              shared_ptr<string> cronExpression_ {};
              // The list of notification channel IDs that receive task results. A maximum of 3 IDs are supported.
              shared_ptr<vector<string>> destinationIds_ {};
              // The list of instance IDs within the query scope.
              shared_ptr<vector<string>> instanceIds_ {};
              // The instruction for the scheduled task execution.
              shared_ptr<string> instruction_ {};
              // The fixed interval in seconds. Valid values: 900 to 31536000. This field is used only for the FIXED_INTERVAL schedule type.
              shared_ptr<int32_t> intervalSeconds_ {};
              // The time budget for a single task run, in seconds. Default value: 600. Valid values: 30 to 1800.
              shared_ptr<int32_t> maxRunSeconds_ {};
              // The token budget for a single task run. Default value: 3000000. Valid values: 1000 to 10000000.
              shared_ptr<int64_t> maxTokens_ {};
              // The name of the scheduled task.
              shared_ptr<string> name_ {};
              // The region where the queried resources reside.
              shared_ptr<string> regionId_ {};
              // The resource scope mode. Valid values:
              // - ACCOUNT: account-level query.
              // - NONE: no resource task.
              // - EXPLICIT: specified instances.
              shared_ptr<string> resourceMode_ {};
              // The one-time execution time in ISO 8601 format with time zone. This field is used only for the ONCE schedule type.
              shared_ptr<string> runAt_ {};
              // The schedule type. Valid values:
              // - ONCE: one-time execution.
              // - CRON: cron expression.
              // - FIXED_INTERVAL: fixed interval.
              shared_ptr<string> scheduleType_ {};
              // The session mode for displaying results. Valid values:
              // - SHARED: shared session.
              // - PER_RUN: independent session for each run.
              shared_ptr<string> sessionMode_ {};
              // The ID of the target session that stores run results in shared mode.
              shared_ptr<string> targetSessionId_ {};
              // The scheduling time zone. Default value: Asia/Shanghai.
              shared_ptr<string> timezone_ {};
            };

            class ActiveRun : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ActiveRun& obj) { 
                DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
                DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
                DARABONBA_PTR_TO_JSON(RunId, runId_);
                DARABONBA_PTR_TO_JSON(Status, status_);
              };
              friend void from_json(const Darabonba::Json& j, ActiveRun& obj) { 
                DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
                DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
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
              virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->finishedAt_ == nullptr && this->runId_ == nullptr && this->status_ == nullptr; };
              // errorCode Field Functions 
              bool hasErrorCode() const { return this->errorCode_ != nullptr;};
              void deleteErrorCode() { this->errorCode_ = nullptr;};
              inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
              inline ActiveRun& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


              // errorMessage Field Functions 
              bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
              void deleteErrorMessage() { this->errorMessage_ = nullptr;};
              inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
              inline ActiveRun& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


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
              // The error code of a failed run. This field is empty if no error occurred.
              shared_ptr<string> errorCode_ {};
              // The user-facing failure reason. This field is empty if no error occurred.
              shared_ptr<string> errorMessage_ {};
              // The time when the run finished, in UTC ISO 8601 format. This field is typically empty for queued or running executions.
              shared_ptr<string> finishedAt_ {};
              // The unique identifier of a single run.
              shared_ptr<string> runId_ {};
              // The status of a single run. Valid values:
              // - QUEUED: queued.
              // - RUNNING: running.
              shared_ptr<string> status_ {};
            };

            virtual bool empty() const override { return this->activeRun_ == nullptr
        && this->configuration_ == nullptr && this->createdAt_ == nullptr && this->lastCompletedRun_ == nullptr && this->name_ == nullptr && this->nextRunAt_ == nullptr
        && this->scheduleDescription_ == nullptr && this->sessionMode_ == nullptr && this->sourceSessionId_ == nullptr && this->status_ == nullptr && this->targetSessionId_ == nullptr
        && this->taskId_ == nullptr && this->updatedAt_ == nullptr && this->version_ == nullptr; };
            // activeRun Field Functions 
            bool hasActiveRun() const { return this->activeRun_ != nullptr;};
            void deleteActiveRun() { this->activeRun_ = nullptr;};
            inline const Items::ActiveRun & getActiveRun() const { DARABONBA_PTR_GET_CONST(activeRun_, Items::ActiveRun) };
            inline Items::ActiveRun getActiveRun() { DARABONBA_PTR_GET(activeRun_, Items::ActiveRun) };
            inline Items& setActiveRun(const Items::ActiveRun & activeRun) { DARABONBA_PTR_SET_VALUE(activeRun_, activeRun) };
            inline Items& setActiveRun(Items::ActiveRun && activeRun) { DARABONBA_PTR_SET_RVALUE(activeRun_, activeRun) };


            // configuration Field Functions 
            bool hasConfiguration() const { return this->configuration_ != nullptr;};
            void deleteConfiguration() { this->configuration_ = nullptr;};
            inline const Items::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Items::Configuration) };
            inline Items::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Items::Configuration) };
            inline Items& setConfiguration(const Items::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
            inline Items& setConfiguration(Items::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


            // createdAt Field Functions 
            bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
            void deleteCreatedAt() { this->createdAt_ = nullptr;};
            inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
            inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


            // lastCompletedRun Field Functions 
            bool hasLastCompletedRun() const { return this->lastCompletedRun_ != nullptr;};
            void deleteLastCompletedRun() { this->lastCompletedRun_ = nullptr;};
            inline const Items::LastCompletedRun & getLastCompletedRun() const { DARABONBA_PTR_GET_CONST(lastCompletedRun_, Items::LastCompletedRun) };
            inline Items::LastCompletedRun getLastCompletedRun() { DARABONBA_PTR_GET(lastCompletedRun_, Items::LastCompletedRun) };
            inline Items& setLastCompletedRun(const Items::LastCompletedRun & lastCompletedRun) { DARABONBA_PTR_SET_VALUE(lastCompletedRun_, lastCompletedRun) };
            inline Items& setLastCompletedRun(Items::LastCompletedRun && lastCompletedRun) { DARABONBA_PTR_SET_RVALUE(lastCompletedRun_, lastCompletedRun) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // nextRunAt Field Functions 
            bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
            void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
            inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
            inline Items& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


            // scheduleDescription Field Functions 
            bool hasScheduleDescription() const { return this->scheduleDescription_ != nullptr;};
            void deleteScheduleDescription() { this->scheduleDescription_ = nullptr;};
            inline string getScheduleDescription() const { DARABONBA_PTR_GET_DEFAULT(scheduleDescription_, "") };
            inline Items& setScheduleDescription(string scheduleDescription) { DARABONBA_PTR_SET_VALUE(scheduleDescription_, scheduleDescription) };


            // sessionMode Field Functions 
            bool hasSessionMode() const { return this->sessionMode_ != nullptr;};
            void deleteSessionMode() { this->sessionMode_ = nullptr;};
            inline string getSessionMode() const { DARABONBA_PTR_GET_DEFAULT(sessionMode_, "") };
            inline Items& setSessionMode(string sessionMode) { DARABONBA_PTR_SET_VALUE(sessionMode_, sessionMode) };


            // sourceSessionId Field Functions 
            bool hasSourceSessionId() const { return this->sourceSessionId_ != nullptr;};
            void deleteSourceSessionId() { this->sourceSessionId_ = nullptr;};
            inline string getSourceSessionId() const { DARABONBA_PTR_GET_DEFAULT(sourceSessionId_, "") };
            inline Items& setSourceSessionId(string sourceSessionId) { DARABONBA_PTR_SET_VALUE(sourceSessionId_, sourceSessionId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // targetSessionId Field Functions 
            bool hasTargetSessionId() const { return this->targetSessionId_ != nullptr;};
            void deleteTargetSessionId() { this->targetSessionId_ = nullptr;};
            inline string getTargetSessionId() const { DARABONBA_PTR_GET_DEFAULT(targetSessionId_, "") };
            inline Items& setTargetSessionId(string targetSessionId) { DARABONBA_PTR_SET_VALUE(targetSessionId_, targetSessionId) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


            // updatedAt Field Functions 
            bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
            void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
            inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
            inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


            // version Field Functions 
            bool hasVersion() const { return this->version_ != nullptr;};
            void deleteVersion() { this->version_ = nullptr;};
            inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
            inline Items& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          protected:
            // The currently queued or running execution record. This field is empty if no active run exists.
            shared_ptr<Items::ActiveRun> activeRun_ {};
            // The task execution configuration.
            shared_ptr<Items::Configuration> configuration_ {};
            // The time when the record was created, in UTC ISO 8601 format.
            shared_ptr<string> createdAt_ {};
            // The most recent completed run record, including failed runs. This field is empty if no record exists.
            shared_ptr<Items::LastCompletedRun> lastCompletedRun_ {};
            // The name of the scheduled task.
            shared_ptr<string> name_ {};
            // The next scheduled execution time, in UTC ISO 8601 format. This field is empty if no next run is scheduled.
            shared_ptr<string> nextRunAt_ {};
            // The human-readable description of the execution schedule.
            shared_ptr<string> scheduleDescription_ {};
            // The session mode for displaying results. Valid values:
            // - SHARED: shared session.
            // - PER_RUN: independent session for each run.
            shared_ptr<string> sessionMode_ {};
            // The ID of the source session from which the task was created.
            shared_ptr<string> sourceSessionId_ {};
            // The status of the scheduled task. Valid values:
            // - DRAFT: Draft.
            // - ENABLED: Enabled.
            // - PAUSED: Paused.
            // - NEEDS_AUTH: Pending authorization.
            // - COMPLETED: Completed.
            // 
            // This status is independent of the running status.
            shared_ptr<string> status_ {};
            // The ID of the target session that stores run results in shared mode.
            shared_ptr<string> targetSessionId_ {};
            // The unique identifier of the scheduled task.
            shared_ptr<string> taskId_ {};
            // The time when the record was last updated, in UTC ISO 8601 format.
            shared_ptr<string> updatedAt_ {};
            // The version number used for concurrent update verification of the current record.
            shared_ptr<int64_t> version_ {};
          };

          virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->items_ == nullptr && this->nextCursor_ == nullptr && this->total_ == nullptr; };
          // hasMore Field Functions 
          bool hasHasMore() const { return this->hasMore_ != nullptr;};
          void deleteHasMore() { this->hasMore_ = nullptr;};
          inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
          inline Tasks& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<Tasks::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Tasks::Items>) };
          inline vector<Tasks::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Tasks::Items>) };
          inline Tasks& setItems(const vector<Tasks::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline Tasks& setItems(vector<Tasks::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // nextCursor Field Functions 
          bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
          void deleteNextCursor() { this->nextCursor_ = nullptr;};
          inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
          inline Tasks& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


          // total Field Functions 
          bool hasTotal() const { return this->total_ != nullptr;};
          void deleteTotal() { this->total_ = nullptr;};
          inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
          inline Tasks& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        protected:
          // Indicates whether more pages are available.
          shared_ptr<bool> hasMore_ {};
          // The list of tasks or notification channels on the current page.
          shared_ptr<vector<Tasks::Items>> items_ {};
          // The cursor for the next page. This field is empty if no more pages are available.
          shared_ptr<string> nextCursor_ {};
          // The total number of non-deleted records in the list.
          shared_ptr<int64_t> total_ {};
        };

        class Quota : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Quota& obj) { 
            DARABONBA_PTR_TO_JSON(Limit, limit_);
            DARABONBA_PTR_TO_JSON(Remaining, remaining_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, Quota& obj) { 
            DARABONBA_PTR_FROM_JSON(Limit, limit_);
            DARABONBA_PTR_FROM_JSON(Remaining, remaining_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          Quota() = default ;
          Quota(const Quota &) = default ;
          Quota(Quota &&) = default ;
          Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Quota() = default ;
          Quota& operator=(const Quota &) = default ;
          Quota& operator=(Quota &&) = default ;
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
          inline Quota& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


          // remaining Field Functions 
          bool hasRemaining() const { return this->remaining_ != nullptr;};
          void deleteRemaining() { this->remaining_ = nullptr;};
          inline int64_t getRemaining() const { DARABONBA_PTR_GET_DEFAULT(remaining_, 0L) };
          inline Quota& setRemaining(int64_t remaining) { DARABONBA_PTR_SET_VALUE(remaining_, remaining) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline Quota& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // The maximum number of tasks or channels allowed, subject to the actual configuration.
          shared_ptr<int32_t> limit_ {};
          // The remaining quota, calculated as the limit minus the used quantity. The minimum value is 0.
          shared_ptr<int64_t> remaining_ {};
          // The number of task quota slots consumed. Tasks in DRAFT, ENABLED, PAUSED, or NEEDS_AUTH status are counted. Completed and deleted tasks do not consume quota.
          shared_ptr<int64_t> used_ {};
        };

        class Destinations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Destinations& obj) { 
            DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
            DARABONBA_PTR_TO_JSON(Items, items_);
            DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
            DARABONBA_PTR_TO_JSON(Total, total_);
          };
          friend void from_json(const Darabonba::Json& j, Destinations& obj) { 
            DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
            DARABONBA_PTR_FROM_JSON(Items, items_);
            DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
            DARABONBA_PTR_FROM_JSON(Total, total_);
          };
          Destinations() = default ;
          Destinations(const Destinations &) = default ;
          Destinations(Destinations &&) = default ;
          Destinations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Destinations() = default ;
          Destinations& operator=(const Destinations &) = default ;
          Destinations& operator=(Destinations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
              DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
              DARABONBA_PTR_TO_JSON(LastDelivery, lastDelivery_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
              DARABONBA_PTR_TO_JSON(Version, version_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
              DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
              DARABONBA_PTR_FROM_JSON(LastDelivery, lastDelivery_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
              DARABONBA_PTR_FROM_JSON(Version, version_);
            };
            Items() = default ;
            Items(const Items &) = default ;
            Items(Items &&) = default ;
            Items(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Items() = default ;
            Items& operator=(const Items &) = default ;
            Items& operator=(Items &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class LastDelivery : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const LastDelivery& obj) { 
                DARABONBA_PTR_TO_JSON(AcceptedAt, acceptedAt_);
                DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
                DARABONBA_PTR_TO_JSON(DeliveryId, deliveryId_);
                DARABONBA_PTR_TO_JSON(LastAttemptAt, lastAttemptAt_);
                DARABONBA_PTR_TO_JSON(SendKind, sendKind_);
                DARABONBA_PTR_TO_JSON(Status, status_);
              };
              friend void from_json(const Darabonba::Json& j, LastDelivery& obj) { 
                DARABONBA_PTR_FROM_JSON(AcceptedAt, acceptedAt_);
                DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
                DARABONBA_PTR_FROM_JSON(DeliveryId, deliveryId_);
                DARABONBA_PTR_FROM_JSON(LastAttemptAt, lastAttemptAt_);
                DARABONBA_PTR_FROM_JSON(SendKind, sendKind_);
                DARABONBA_PTR_FROM_JSON(Status, status_);
              };
              LastDelivery() = default ;
              LastDelivery(const LastDelivery &) = default ;
              LastDelivery(LastDelivery &&) = default ;
              LastDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~LastDelivery() = default ;
              LastDelivery& operator=(const LastDelivery &) = default ;
              LastDelivery& operator=(LastDelivery &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->acceptedAt_ == nullptr
        && this->createdAt_ == nullptr && this->deliveryId_ == nullptr && this->lastAttemptAt_ == nullptr && this->sendKind_ == nullptr && this->status_ == nullptr; };
              // acceptedAt Field Functions 
              bool hasAcceptedAt() const { return this->acceptedAt_ != nullptr;};
              void deleteAcceptedAt() { this->acceptedAt_ = nullptr;};
              inline string getAcceptedAt() const { DARABONBA_PTR_GET_DEFAULT(acceptedAt_, "") };
              inline LastDelivery& setAcceptedAt(string acceptedAt) { DARABONBA_PTR_SET_VALUE(acceptedAt_, acceptedAt) };


              // createdAt Field Functions 
              bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
              void deleteCreatedAt() { this->createdAt_ = nullptr;};
              inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
              inline LastDelivery& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


              // deliveryId Field Functions 
              bool hasDeliveryId() const { return this->deliveryId_ != nullptr;};
              void deleteDeliveryId() { this->deliveryId_ = nullptr;};
              inline string getDeliveryId() const { DARABONBA_PTR_GET_DEFAULT(deliveryId_, "") };
              inline LastDelivery& setDeliveryId(string deliveryId) { DARABONBA_PTR_SET_VALUE(deliveryId_, deliveryId) };


              // lastAttemptAt Field Functions 
              bool hasLastAttemptAt() const { return this->lastAttemptAt_ != nullptr;};
              void deleteLastAttemptAt() { this->lastAttemptAt_ = nullptr;};
              inline string getLastAttemptAt() const { DARABONBA_PTR_GET_DEFAULT(lastAttemptAt_, "") };
              inline LastDelivery& setLastAttemptAt(string lastAttemptAt) { DARABONBA_PTR_SET_VALUE(lastAttemptAt_, lastAttemptAt) };


              // sendKind Field Functions 
              bool hasSendKind() const { return this->sendKind_ != nullptr;};
              void deleteSendKind() { this->sendKind_ = nullptr;};
              inline string getSendKind() const { DARABONBA_PTR_GET_DEFAULT(sendKind_, "") };
              inline LastDelivery& setSendKind(string sendKind) { DARABONBA_PTR_SET_VALUE(sendKind_, sendKind) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
              inline LastDelivery& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            protected:
              // The time when the notification service accepted the delivery, in UTC ISO 8601 format. This field is empty if the delivery has not been accepted.
              shared_ptr<string> acceptedAt_ {};
              // The time when the record was created, in UTC ISO 8601 format.
              shared_ptr<string> createdAt_ {};
              // The unique identifier of the delivery record.
              shared_ptr<string> deliveryId_ {};
              // The time of the most recent delivery attempt, in UTC ISO 8601 format.
              shared_ptr<string> lastAttemptAt_ {};
              // The delivery type. Valid values:
              // - AUTO: automatic delivery.
              // - MANUAL: manual delivery.
              // - TEST: connectivity test.
              shared_ptr<string> sendKind_ {};
              // The most recent delivery status. ACCEPTED indicates that the notification service has accepted the delivery, but does not mean the recipient has read it.
              shared_ptr<string> status_ {};
            };

            virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->destinationId_ == nullptr && this->lastDelivery_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->updatedAt_ == nullptr && this->version_ == nullptr; };
            // createdAt Field Functions 
            bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
            void deleteCreatedAt() { this->createdAt_ = nullptr;};
            inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
            inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


            // destinationId Field Functions 
            bool hasDestinationId() const { return this->destinationId_ != nullptr;};
            void deleteDestinationId() { this->destinationId_ = nullptr;};
            inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
            inline Items& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


            // lastDelivery Field Functions 
            bool hasLastDelivery() const { return this->lastDelivery_ != nullptr;};
            void deleteLastDelivery() { this->lastDelivery_ = nullptr;};
            inline const Items::LastDelivery & getLastDelivery() const { DARABONBA_PTR_GET_CONST(lastDelivery_, Items::LastDelivery) };
            inline Items::LastDelivery getLastDelivery() { DARABONBA_PTR_GET(lastDelivery_, Items::LastDelivery) };
            inline Items& setLastDelivery(const Items::LastDelivery & lastDelivery) { DARABONBA_PTR_SET_VALUE(lastDelivery_, lastDelivery) };
            inline Items& setLastDelivery(Items::LastDelivery && lastDelivery) { DARABONBA_PTR_SET_RVALUE(lastDelivery_, lastDelivery) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // updatedAt Field Functions 
            bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
            void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
            inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
            inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


            // version Field Functions 
            bool hasVersion() const { return this->version_ != nullptr;};
            void deleteVersion() { this->version_ = nullptr;};
            inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
            inline Items& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          protected:
            // The time when the record was created, in UTC ISO 8601 format.
            shared_ptr<string> createdAt_ {};
            // The unique identifier of the notification channel.
            shared_ptr<string> destinationId_ {};
            // The most recent delivery record. This field is empty if no delivery has been made.
            shared_ptr<Items::LastDelivery> lastDelivery_ {};
            // The name of the notification channel.
            shared_ptr<string> name_ {};
            // The configuration status of the channel. Valid values:
            // - ACTIVE: enabled.
            // - DISABLED: disabled.
            // Being enabled does not indicate that a delivery has been successfully sent.
            shared_ptr<string> status_ {};
            // The type of the notification channel. DINGTALK_WEBHOOK indicates a DingTalk custom chatbot.
            shared_ptr<string> type_ {};
            // The time when the record was last updated, in UTC ISO 8601 format.
            shared_ptr<string> updatedAt_ {};
            // The version number used for concurrent update verification of the record.
            shared_ptr<int64_t> version_ {};
          };

          virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->items_ == nullptr && this->nextCursor_ == nullptr && this->total_ == nullptr; };
          // hasMore Field Functions 
          bool hasHasMore() const { return this->hasMore_ != nullptr;};
          void deleteHasMore() { this->hasMore_ = nullptr;};
          inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
          inline Destinations& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<Destinations::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Destinations::Items>) };
          inline vector<Destinations::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Destinations::Items>) };
          inline Destinations& setItems(const vector<Destinations::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline Destinations& setItems(vector<Destinations::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // nextCursor Field Functions 
          bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
          void deleteNextCursor() { this->nextCursor_ = nullptr;};
          inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
          inline Destinations& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


          // total Field Functions 
          bool hasTotal() const { return this->total_ != nullptr;};
          void deleteTotal() { this->total_ = nullptr;};
          inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
          inline Destinations& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        protected:
          // Indicates whether more pages are available.
          shared_ptr<bool> hasMore_ {};
          // The list of tasks or notification channels on the current page.
          shared_ptr<vector<Destinations::Items>> items_ {};
          // The cursor for the next page. This field is empty if no more pages are available.
          shared_ptr<string> nextCursor_ {};
          // The total number of non-deleted records in the list.
          shared_ptr<int64_t> total_ {};
        };

        class DestinationQuota : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationQuota& obj) { 
            DARABONBA_PTR_TO_JSON(Limit, limit_);
            DARABONBA_PTR_TO_JSON(Remaining, remaining_);
            DARABONBA_PTR_TO_JSON(Used, used_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationQuota& obj) { 
            DARABONBA_PTR_FROM_JSON(Limit, limit_);
            DARABONBA_PTR_FROM_JSON(Remaining, remaining_);
            DARABONBA_PTR_FROM_JSON(Used, used_);
          };
          DestinationQuota() = default ;
          DestinationQuota(const DestinationQuota &) = default ;
          DestinationQuota(DestinationQuota &&) = default ;
          DestinationQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationQuota() = default ;
          DestinationQuota& operator=(const DestinationQuota &) = default ;
          DestinationQuota& operator=(DestinationQuota &&) = default ;
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
          inline DestinationQuota& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


          // remaining Field Functions 
          bool hasRemaining() const { return this->remaining_ != nullptr;};
          void deleteRemaining() { this->remaining_ = nullptr;};
          inline int64_t getRemaining() const { DARABONBA_PTR_GET_DEFAULT(remaining_, 0L) };
          inline DestinationQuota& setRemaining(int64_t remaining) { DARABONBA_PTR_SET_VALUE(remaining_, remaining) };


          // used Field Functions 
          bool hasUsed() const { return this->used_ != nullptr;};
          void deleteUsed() { this->used_ = nullptr;};
          inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
          inline DestinationQuota& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        protected:
          // The maximum number of tasks or channels allowed, subject to the actual configuration.
          shared_ptr<int32_t> limit_ {};
          // The remaining quota, calculated as the limit minus the used quantity. The minimum value is 0.
          shared_ptr<int64_t> remaining_ {};
          // The number of non-deleted notification channels. Disabled channels still consume quota.
          shared_ptr<int64_t> used_ {};
        };

        virtual bool empty() const override { return this->asOf_ == nullptr
        && this->destinationQuota_ == nullptr && this->destinations_ == nullptr && this->homeRegion_ == nullptr && this->quota_ == nullptr && this->tasks_ == nullptr; };
        // asOf Field Functions 
        bool hasAsOf() const { return this->asOf_ != nullptr;};
        void deleteAsOf() { this->asOf_ = nullptr;};
        inline string getAsOf() const { DARABONBA_PTR_GET_DEFAULT(asOf_, "") };
        inline AutomationOverview& setAsOf(string asOf) { DARABONBA_PTR_SET_VALUE(asOf_, asOf) };


        // destinationQuota Field Functions 
        bool hasDestinationQuota() const { return this->destinationQuota_ != nullptr;};
        void deleteDestinationQuota() { this->destinationQuota_ = nullptr;};
        inline const AutomationOverview::DestinationQuota & getDestinationQuota() const { DARABONBA_PTR_GET_CONST(destinationQuota_, AutomationOverview::DestinationQuota) };
        inline AutomationOverview::DestinationQuota getDestinationQuota() { DARABONBA_PTR_GET(destinationQuota_, AutomationOverview::DestinationQuota) };
        inline AutomationOverview& setDestinationQuota(const AutomationOverview::DestinationQuota & destinationQuota) { DARABONBA_PTR_SET_VALUE(destinationQuota_, destinationQuota) };
        inline AutomationOverview& setDestinationQuota(AutomationOverview::DestinationQuota && destinationQuota) { DARABONBA_PTR_SET_RVALUE(destinationQuota_, destinationQuota) };


        // destinations Field Functions 
        bool hasDestinations() const { return this->destinations_ != nullptr;};
        void deleteDestinations() { this->destinations_ = nullptr;};
        inline const AutomationOverview::Destinations & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, AutomationOverview::Destinations) };
        inline AutomationOverview::Destinations getDestinations() { DARABONBA_PTR_GET(destinations_, AutomationOverview::Destinations) };
        inline AutomationOverview& setDestinations(const AutomationOverview::Destinations & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
        inline AutomationOverview& setDestinations(AutomationOverview::Destinations && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


        // homeRegion Field Functions 
        bool hasHomeRegion() const { return this->homeRegion_ != nullptr;};
        void deleteHomeRegion() { this->homeRegion_ = nullptr;};
        inline string getHomeRegion() const { DARABONBA_PTR_GET_DEFAULT(homeRegion_, "") };
        inline AutomationOverview& setHomeRegion(string homeRegion) { DARABONBA_PTR_SET_VALUE(homeRegion_, homeRegion) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline const AutomationOverview::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, AutomationOverview::Quota) };
        inline AutomationOverview::Quota getQuota() { DARABONBA_PTR_GET(quota_, AutomationOverview::Quota) };
        inline AutomationOverview& setQuota(const AutomationOverview::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
        inline AutomationOverview& setQuota(AutomationOverview::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


        // tasks Field Functions 
        bool hasTasks() const { return this->tasks_ != nullptr;};
        void deleteTasks() { this->tasks_ = nullptr;};
        inline const AutomationOverview::Tasks & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, AutomationOverview::Tasks) };
        inline AutomationOverview::Tasks getTasks() { DARABONBA_PTR_GET(tasks_, AutomationOverview::Tasks) };
        inline AutomationOverview& setTasks(const AutomationOverview::Tasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
        inline AutomationOverview& setTasks(AutomationOverview::Tasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      protected:
        // The time when the overview was generated, in UTC ISO 8601 format.
        shared_ptr<string> asOf_ {};
        // The quota for the number of notification channels of the current primary account in this environment, counted across regions.
        shared_ptr<AutomationOverview::DestinationQuota> destinationQuota_ {};
        // The paginated results of notification channels. Webhook URLs and signing keys are not returned.
        shared_ptr<AutomationOverview::Destinations> destinations_ {};
        // The home region for tasks and notification channels.
        shared_ptr<string> homeRegion_ {};
        // The quota for the number of scheduled tasks of the current primary account in this environment, counted across regions.
        shared_ptr<AutomationOverview::Quota> quota_ {};
        // The paginated results of scheduled tasks for the account.
        shared_ptr<AutomationOverview::Tasks> tasks_ {};
      };

      virtual bool empty() const override { return this->automationOverview_ == nullptr
        && this->conversationIds_ == nullptr && this->count_ == nullptr && this->page_ == nullptr && this->scheduledTaskInfoBySessionId_ == nullptr && this->scheduledTaskQuota_ == nullptr
        && this->size_ == nullptr && this->total_ == nullptr && this->totalPages_ == nullptr && this->userId_ == nullptr; };
      // automationOverview Field Functions 
      bool hasAutomationOverview() const { return this->automationOverview_ != nullptr;};
      void deleteAutomationOverview() { this->automationOverview_ = nullptr;};
      inline const Data::AutomationOverview & getAutomationOverview() const { DARABONBA_PTR_GET_CONST(automationOverview_, Data::AutomationOverview) };
      inline Data::AutomationOverview getAutomationOverview() { DARABONBA_PTR_GET(automationOverview_, Data::AutomationOverview) };
      inline Data& setAutomationOverview(const Data::AutomationOverview & automationOverview) { DARABONBA_PTR_SET_VALUE(automationOverview_, automationOverview) };
      inline Data& setAutomationOverview(Data::AutomationOverview && automationOverview) { DARABONBA_PTR_SET_RVALUE(automationOverview_, automationOverview) };


      // conversationIds Field Functions 
      bool hasConversationIds() const { return this->conversationIds_ != nullptr;};
      void deleteConversationIds() { this->conversationIds_ = nullptr;};
      inline const vector<string> & getConversationIds() const { DARABONBA_PTR_GET_CONST(conversationIds_, vector<string>) };
      inline vector<string> getConversationIds() { DARABONBA_PTR_GET(conversationIds_, vector<string>) };
      inline Data& setConversationIds(const vector<string> & conversationIds) { DARABONBA_PTR_SET_VALUE(conversationIds_, conversationIds) };
      inline Data& setConversationIds(vector<string> && conversationIds) { DARABONBA_PTR_SET_RVALUE(conversationIds_, conversationIds) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // scheduledTaskInfoBySessionId Field Functions 
      bool hasScheduledTaskInfoBySessionId() const { return this->scheduledTaskInfoBySessionId_ != nullptr;};
      void deleteScheduledTaskInfoBySessionId() { this->scheduledTaskInfoBySessionId_ = nullptr;};
      inline const map<string, DataScheduledTaskInfoBySessionIdValue> & getScheduledTaskInfoBySessionId() const { DARABONBA_PTR_GET_CONST(scheduledTaskInfoBySessionId_, map<string, DataScheduledTaskInfoBySessionIdValue>) };
      inline map<string, DataScheduledTaskInfoBySessionIdValue> getScheduledTaskInfoBySessionId() { DARABONBA_PTR_GET(scheduledTaskInfoBySessionId_, map<string, DataScheduledTaskInfoBySessionIdValue>) };
      inline Data& setScheduledTaskInfoBySessionId(const map<string, DataScheduledTaskInfoBySessionIdValue> & scheduledTaskInfoBySessionId) { DARABONBA_PTR_SET_VALUE(scheduledTaskInfoBySessionId_, scheduledTaskInfoBySessionId) };
      inline Data& setScheduledTaskInfoBySessionId(map<string, DataScheduledTaskInfoBySessionIdValue> && scheduledTaskInfoBySessionId) { DARABONBA_PTR_SET_RVALUE(scheduledTaskInfoBySessionId_, scheduledTaskInfoBySessionId) };


      // scheduledTaskQuota Field Functions 
      bool hasScheduledTaskQuota() const { return this->scheduledTaskQuota_ != nullptr;};
      void deleteScheduledTaskQuota() { this->scheduledTaskQuota_ = nullptr;};
      inline const Data::ScheduledTaskQuota & getScheduledTaskQuota() const { DARABONBA_PTR_GET_CONST(scheduledTaskQuota_, Data::ScheduledTaskQuota) };
      inline Data::ScheduledTaskQuota getScheduledTaskQuota() { DARABONBA_PTR_GET(scheduledTaskQuota_, Data::ScheduledTaskQuota) };
      inline Data& setScheduledTaskQuota(const Data::ScheduledTaskQuota & scheduledTaskQuota) { DARABONBA_PTR_SET_VALUE(scheduledTaskQuota_, scheduledTaskQuota) };
      inline Data& setScheduledTaskQuota(Data::ScheduledTaskQuota && scheduledTaskQuota) { DARABONBA_PTR_SET_RVALUE(scheduledTaskQuota_, scheduledTaskQuota) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Data& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Data& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The overview of tasks, notification channels, and quotas for the current account. Returned only when the request includes the overview and the feature is available.
      shared_ptr<Data::AutomationOverview> automationOverview_ {};
      // The list of session IDs.
      shared_ptr<vector<string>> conversationIds_ {};
      // The number of entries returned on the current page in a paged query.
      shared_ptr<int32_t> count_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // A mapping that uses session IDs as keys and associated task summaries as values.
      shared_ptr<map<string, DataScheduledTaskInfoBySessionIdValue>> scheduledTaskInfoBySessionId_ {};
      // The quota for the number of scheduled tasks of the current primary account in this environment, counted across regions.
      shared_ptr<Data::ScheduledTaskQuota> scheduledTaskQuota_ {};
      // The number of entries on the current page.
      shared_ptr<int32_t> size_ {};
      // The total number of entries.
      shared_ptr<int64_t> total_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPages_ {};
      // The user UID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline KopilotListConversationsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KopilotListConversationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, KopilotListConversationsResponseBody::Data) };
    inline KopilotListConversationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, KopilotListConversationsResponseBody::Data) };
    inline KopilotListConversationsResponseBody& setData(const KopilotListConversationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KopilotListConversationsResponseBody& setData(KopilotListConversationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotListConversationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline KopilotListConversationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // The data returned when the call is successful.
    shared_ptr<KopilotListConversationsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
