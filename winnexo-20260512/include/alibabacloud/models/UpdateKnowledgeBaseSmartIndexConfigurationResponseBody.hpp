// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESMARTINDEXCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESMARTINDEXCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateKnowledgeBaseSmartIndexConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(billingId, billingId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(lastError, lastError_);
      DARABONBA_PTR_TO_JSON(lastSuccessTaskId, lastSuccessTaskId_);
      DARABONBA_PTR_TO_JSON(lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(schedule, schedule_);
      DARABONBA_PTR_TO_JSON(targetDirId, targetDirId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(billingId, billingId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(lastError, lastError_);
      DARABONBA_PTR_FROM_JSON(lastSuccessTaskId, lastSuccessTaskId_);
      DARABONBA_PTR_FROM_JSON(lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(targetDirId, targetDirId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody() = default ;
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody(const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody &) = default ;
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody(UpdateKnowledgeBaseSmartIndexConfigurationResponseBody &&) = default ;
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseSmartIndexConfigurationResponseBody() = default ;
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& operator=(const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody &) = default ;
    UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& operator=(UpdateKnowledgeBaseSmartIndexConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(billingId, billingId_);
        DARABONBA_PTR_TO_JSON(billingStatus, billingStatus_);
        DARABONBA_PTR_TO_JSON(executionStatus, executionStatus_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(lastError, lastError_);
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
        DARABONBA_PTR_TO_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(reused, reused_);
        DARABONBA_PTR_TO_JSON(taskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(usageComplete, usageComplete_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(billingId, billingId_);
        DARABONBA_PTR_FROM_JSON(billingStatus, billingStatus_);
        DARABONBA_PTR_FROM_JSON(executionStatus, executionStatus_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(lastError, lastError_);
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
        DARABONBA_PTR_FROM_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(reused, reused_);
        DARABONBA_PTR_FROM_JSON(taskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(usageComplete, usageComplete_);
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
      virtual bool empty() const override { return this->billingId_ == nullptr
        && this->billingStatus_ == nullptr && this->executionStatus_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->lastError_ == nullptr
        && this->operation_ == nullptr && this->progress_ == nullptr && this->reportStatus_ == nullptr && this->reused_ == nullptr && this->taskKey_ == nullptr
        && this->triggerType_ == nullptr && this->usageComplete_ == nullptr; };
      // billingId Field Functions 
      bool hasBillingId() const { return this->billingId_ != nullptr;};
      void deleteBillingId() { this->billingId_ = nullptr;};
      inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
      inline Task& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


      // billingStatus Field Functions 
      bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
      void deleteBillingStatus() { this->billingStatus_ = nullptr;};
      inline string getBillingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, "") };
      inline Task& setBillingStatus(string billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


      // executionStatus Field Functions 
      bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
      void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
      inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
      inline Task& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Task& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Task& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // lastError Field Functions 
      bool hasLastError() const { return this->lastError_ != nullptr;};
      void deleteLastError() { this->lastError_ = nullptr;};
      inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
      inline Task& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Task& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
      inline Task& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline Task& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // reused Field Functions 
      bool hasReused() const { return this->reused_ != nullptr;};
      void deleteReused() { this->reused_ = nullptr;};
      inline bool getReused() const { DARABONBA_PTR_GET_DEFAULT(reused_, false) };
      inline Task& setReused(bool reused) { DARABONBA_PTR_SET_VALUE(reused_, reused) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Task& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Task& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // usageComplete Field Functions 
      bool hasUsageComplete() const { return this->usageComplete_ != nullptr;};
      void deleteUsageComplete() { this->usageComplete_ = nullptr;};
      inline bool getUsageComplete() const { DARABONBA_PTR_GET_DEFAULT(usageComplete_, false) };
      inline Task& setUsageComplete(bool usageComplete) { DARABONBA_PTR_SET_VALUE(usageComplete_, usageComplete) };


    protected:
      // The bill ID corresponding to the task. The existence of a bill ID does not indicate that the deduction is complete.
      shared_ptr<string> billingId_ {};
      // The billing status of the task. For example, PENDING indicates that settlement is not complete, and ENDED indicates that the billing process has ended. This status is returned separately from the task execution status.
      shared_ptr<string> billingStatus_ {};
      // The execution status of the task. For example, QUEUED indicates that the task is queued, RUNNING indicates that the task is running, SUCCEEDED indicates that the task succeeded, and FAILED indicates that the task failed. Evaluate the build result based on the task status. A successful configuration save does not indicate a successful task.
      shared_ptr<string> executionStatus_ {};
      // The time when the task was created, in ISO 8601 format.
      shared_ptr<string> gmtCreate_ {};
      // The time when the task was updated, in ISO 8601 format.
      shared_ptr<string> gmtModified_ {};
      // The description of the most recent task error. This value is empty if no error occurred.
      shared_ptr<string> lastError_ {};
      // The operation type of the smart index task. Valid values:
      // - full: Full build.
      // - incremental: Incremental update.
      shared_ptr<string> operation_ {};
      // The execution progress reported by the task. This value is empty if the task has not yet reported progress.
      shared_ptr<int64_t> progress_ {};
      // The reporting status of the task result. For example, pending indicates that the result is waiting to be reported, and not_required indicates that reporting is not required.
      shared_ptr<string> reportStatus_ {};
      // Indicates whether an existing task was reused. The value is false if no task was reused.
      shared_ptr<bool> reused_ {};
      // The business ID of the smart index task.
      shared_ptr<string> taskKey_ {};
      // The trigger type of the task. Valid values:
      // - manual: Manually triggered.
      // - scheduled: Triggered by an automatic schedule.
      // The build task generated upon the first enabling uses manual.
      shared_ptr<string> triggerType_ {};
      // Indicates whether the task usage statistics are complete. This status is independent of the task execution status and billing status.
      shared_ptr<bool> usageComplete_ {};
    };

    class Schedule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(nextRunAt, nextRunAt_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
      };
      friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(nextRunAt, nextRunAt_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      };
      Schedule() = default ;
      Schedule(const Schedule &) = default ;
      Schedule(Schedule &&) = default ;
      Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schedule() = default ;
      Schedule& operator=(const Schedule &) = default ;
      Schedule& operator=(Schedule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->nextRunAt_ == nullptr && this->timezone_ == nullptr; };
      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Schedule& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // nextRunAt Field Functions 
      bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
      void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
      inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
      inline Schedule& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Schedule& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    protected:
      // The current five-part cron automatic execution schedule. An empty value indicates manual execution.
      shared_ptr<string> cronExpression_ {};
      // The next scheduled execution time in ISO 8601 format. This value is empty when no automatic schedule is configured.
      shared_ptr<string> nextRunAt_ {};
      // The IANA time zone name for the execution schedule. Default value: Asia/Shanghai when not configured.
      shared_ptr<string> timezone_ {};
    };

    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
        DARABONBA_PTR_TO_JSON(knowledgeInsights, knowledgeInsights_);
        DARABONBA_PTR_TO_JSON(topicCards, topicCards_);
        DARABONBA_PTR_TO_JSON(topicGraph, topicGraph_);
        DARABONBA_PTR_TO_JSON(topicOverview, topicOverview_);
      };
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
        DARABONBA_PTR_FROM_JSON(knowledgeInsights, knowledgeInsights_);
        DARABONBA_PTR_FROM_JSON(topicCards, topicCards_);
        DARABONBA_PTR_FROM_JSON(topicGraph, topicGraph_);
        DARABONBA_PTR_FROM_JSON(topicOverview, topicOverview_);
      };
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TopicOverview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicOverview& obj) { 
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        };
        friend void from_json(const Darabonba::Json& j, TopicOverview& obj) { 
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        };
        TopicOverview() = default ;
        TopicOverview(const TopicOverview &) = default ;
        TopicOverview(TopicOverview &&) = default ;
        TopicOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicOverview() = default ;
        TopicOverview& operator=(const TopicOverview &) = default ;
        TopicOverview& operator=(TopicOverview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceId_ == nullptr; };
        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline TopicOverview& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      protected:
        // The business ID of the topic overview resource.
        shared_ptr<string> sourceId_ {};
      };

      class TopicGraph : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicGraph& obj) { 
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        };
        friend void from_json(const Darabonba::Json& j, TopicGraph& obj) { 
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        };
        TopicGraph() = default ;
        TopicGraph(const TopicGraph &) = default ;
        TopicGraph(TopicGraph &&) = default ;
        TopicGraph(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicGraph() = default ;
        TopicGraph& operator=(const TopicGraph &) = default ;
        TopicGraph& operator=(TopicGraph &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceId_ == nullptr; };
        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline TopicGraph& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      protected:
        // The business ID of the topic graph resource.
        shared_ptr<string> sourceId_ {};
      };

      class TopicCards : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicCards& obj) { 
          DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
        };
        friend void from_json(const Darabonba::Json& j, TopicCards& obj) { 
          DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
        };
        TopicCards() = default ;
        TopicCards(const TopicCards &) = default ;
        TopicCards(TopicCards &&) = default ;
        TopicCards(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicCards() = default ;
        TopicCards& operator=(const TopicCards &) = default ;
        TopicCards& operator=(TopicCards &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directoryId_ == nullptr; };
        // directoryId Field Functions 
        bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
        void deleteDirectoryId() { this->directoryId_ = nullptr;};
        inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
        inline TopicCards& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      protected:
        // The business ID of the topic card artifact directory.
        shared_ptr<string> directoryId_ {};
      };

      class KnowledgeInsights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeInsights& obj) { 
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeInsights& obj) { 
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        };
        KnowledgeInsights() = default ;
        KnowledgeInsights(const KnowledgeInsights &) = default ;
        KnowledgeInsights(KnowledgeInsights &&) = default ;
        KnowledgeInsights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeInsights() = default ;
        KnowledgeInsights& operator=(const KnowledgeInsights &) = default ;
        KnowledgeInsights& operator=(KnowledgeInsights &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceId_ == nullptr; };
        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline KnowledgeInsights& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      protected:
        // The business ID of the knowledge insights resource.
        shared_ptr<string> sourceId_ {};
      };

      virtual bool empty() const override { return this->knowledgeInsights_ == nullptr
        && this->topicCards_ == nullptr && this->topicGraph_ == nullptr && this->topicOverview_ == nullptr; };
      // knowledgeInsights Field Functions 
      bool hasKnowledgeInsights() const { return this->knowledgeInsights_ != nullptr;};
      void deleteKnowledgeInsights() { this->knowledgeInsights_ = nullptr;};
      inline const Artifacts::KnowledgeInsights & getKnowledgeInsights() const { DARABONBA_PTR_GET_CONST(knowledgeInsights_, Artifacts::KnowledgeInsights) };
      inline Artifacts::KnowledgeInsights getKnowledgeInsights() { DARABONBA_PTR_GET(knowledgeInsights_, Artifacts::KnowledgeInsights) };
      inline Artifacts& setKnowledgeInsights(const Artifacts::KnowledgeInsights & knowledgeInsights) { DARABONBA_PTR_SET_VALUE(knowledgeInsights_, knowledgeInsights) };
      inline Artifacts& setKnowledgeInsights(Artifacts::KnowledgeInsights && knowledgeInsights) { DARABONBA_PTR_SET_RVALUE(knowledgeInsights_, knowledgeInsights) };


      // topicCards Field Functions 
      bool hasTopicCards() const { return this->topicCards_ != nullptr;};
      void deleteTopicCards() { this->topicCards_ = nullptr;};
      inline const Artifacts::TopicCards & getTopicCards() const { DARABONBA_PTR_GET_CONST(topicCards_, Artifacts::TopicCards) };
      inline Artifacts::TopicCards getTopicCards() { DARABONBA_PTR_GET(topicCards_, Artifacts::TopicCards) };
      inline Artifacts& setTopicCards(const Artifacts::TopicCards & topicCards) { DARABONBA_PTR_SET_VALUE(topicCards_, topicCards) };
      inline Artifacts& setTopicCards(Artifacts::TopicCards && topicCards) { DARABONBA_PTR_SET_RVALUE(topicCards_, topicCards) };


      // topicGraph Field Functions 
      bool hasTopicGraph() const { return this->topicGraph_ != nullptr;};
      void deleteTopicGraph() { this->topicGraph_ = nullptr;};
      inline const Artifacts::TopicGraph & getTopicGraph() const { DARABONBA_PTR_GET_CONST(topicGraph_, Artifacts::TopicGraph) };
      inline Artifacts::TopicGraph getTopicGraph() { DARABONBA_PTR_GET(topicGraph_, Artifacts::TopicGraph) };
      inline Artifacts& setTopicGraph(const Artifacts::TopicGraph & topicGraph) { DARABONBA_PTR_SET_VALUE(topicGraph_, topicGraph) };
      inline Artifacts& setTopicGraph(Artifacts::TopicGraph && topicGraph) { DARABONBA_PTR_SET_RVALUE(topicGraph_, topicGraph) };


      // topicOverview Field Functions 
      bool hasTopicOverview() const { return this->topicOverview_ != nullptr;};
      void deleteTopicOverview() { this->topicOverview_ = nullptr;};
      inline const Artifacts::TopicOverview & getTopicOverview() const { DARABONBA_PTR_GET_CONST(topicOverview_, Artifacts::TopicOverview) };
      inline Artifacts::TopicOverview getTopicOverview() { DARABONBA_PTR_GET(topicOverview_, Artifacts::TopicOverview) };
      inline Artifacts& setTopicOverview(const Artifacts::TopicOverview & topicOverview) { DARABONBA_PTR_SET_VALUE(topicOverview_, topicOverview) };
      inline Artifacts& setTopicOverview(Artifacts::TopicOverview && topicOverview) { DARABONBA_PTR_SET_RVALUE(topicOverview_, topicOverview) };


    protected:
      // The resource reference for knowledge insights. This value is empty if the artifact is not yet available.
      shared_ptr<Artifacts::KnowledgeInsights> knowledgeInsights_ {};
      // The reference to the directory where topic cards are located. This value is empty if the artifact is not yet available.
      shared_ptr<Artifacts::TopicCards> topicCards_ {};
      // The resource reference for the topic graph. This value is empty if the artifact is not yet available.
      shared_ptr<Artifacts::TopicGraph> topicGraph_ {};
      // The resource reference for the topic overview. This value is empty if the artifact is not yet available.
      shared_ptr<Artifacts::TopicOverview> topicOverview_ {};
    };

    virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->billingId_ == nullptr && this->code_ == nullptr && this->directoryId_ == nullptr && this->enabled_ == nullptr && this->lastError_ == nullptr
        && this->lastSuccessTaskId_ == nullptr && this->lifecycle_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->revision_ == nullptr
        && this->schedule_ == nullptr && this->targetDirId_ == nullptr && this->task_ == nullptr; };
    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts getArtifacts() { DARABONBA_PTR_GET(artifacts_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setArtifacts(const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setArtifacts(UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // billingId Field Functions 
    bool hasBillingId() const { return this->billingId_ != nullptr;};
    void deleteBillingId() { this->billingId_ = nullptr;};
    inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // lastError Field Functions 
    bool hasLastError() const { return this->lastError_ != nullptr;};
    void deleteLastError() { this->lastError_ = nullptr;};
    inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


    // lastSuccessTaskId Field Functions 
    bool hasLastSuccessTaskId() const { return this->lastSuccessTaskId_ != nullptr;};
    void deleteLastSuccessTaskId() { this->lastSuccessTaskId_ = nullptr;};
    inline string getLastSuccessTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessTaskId_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setLastSuccessTaskId(string lastSuccessTaskId) { DARABONBA_PTR_SET_VALUE(lastSuccessTaskId_, lastSuccessTaskId) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setSchedule(const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setSchedule(UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // targetDirId Field Functions 
    bool hasTargetDirId() const { return this->targetDirId_ != nullptr;};
    void deleteTargetDirId() { this->targetDirId_ = nullptr;};
    inline string getTargetDirId() const { DARABONBA_PTR_GET_DEFAULT(targetDirId_, "") };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setTargetDirId(string targetDirId) { DARABONBA_PTR_SET_VALUE(targetDirId_, targetDirId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setTask(const UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline UpdateKnowledgeBaseSmartIndexConfigurationResponseBody& setTask(UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The references to published smart index artifacts. This value is empty if no artifacts are available or if the feature is disabled. Internal storage credentials are not included.
    shared_ptr<UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts> artifacts_ {};
    // The bill ID of the current or most recent task. This value is empty if no corresponding task exists. The existence of a bill ID does not indicate that the deduction is complete.
    shared_ptr<string> billingId_ {};
    // The business status code. A value of 200 indicates success. If the request fails, a specific business error code is returned.
    shared_ptr<string> code_ {};
    // The business ID of the root directory for the enterprise knowledge base. Subsequent configuration operations use this ID.
    shared_ptr<string> directoryId_ {};
    // Indicates whether the LLM Wiki smart index is currently enabled. This parameter indicates the configuration switch status and does not indicate whether the build task is complete.
    shared_ptr<bool> enabled_ {};
    // The description of the most recent configuration or scan error. This value is empty if no error occurred.
    shared_ptr<string> lastError_ {};
    // The business ID of the most recent successful build task. This value is empty if no successful task exists.
    shared_ptr<string> lastSuccessTaskId_ {};
    // The configuration lifecycle. Valid values:
    // - DISABLED: Disabled.
    // - ENABLED: Enabled.
    // - DISABLING: Artifacts are being cleaned up after disabling.
    shared_ptr<string> lifecycle_ {};
    // The response message. The value is success if the request is successful. If the request fails, this parameter describes the cause of the error.
    shared_ptr<string> message_ {};
    // The request tracking ID. You can use this ID to troubleshoot issues related to this call.
    shared_ptr<string> requestId_ {};
    // The current configuration version. Submit this value as expectedRevision during the next update. The value is 0 when not configured, and increments by 1 after each successful save.
    shared_ptr<int64_t> revision_ {};
    // The automatic execution schedule. An empty cronExpression indicates manual execution.
    shared_ptr<UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule> schedule_ {};
    // The business ID of the smart index artifact directory. This value is empty if no artifact directory exists or if the feature is disabled.
    shared_ptr<string> targetDirId_ {};
    // The status of the task generated by this save operation, or the current or most recent task status returned by the read operation. This value is empty if no corresponding task exists.
    shared_ptr<UpdateKnowledgeBaseSmartIndexConfigurationResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
