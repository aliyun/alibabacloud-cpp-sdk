// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASESMARTINDEXCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASESMARTINDEXCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetKnowledgeBaseSmartIndexConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseSmartIndexConfigurationResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseSmartIndexConfigurationResponseBody& obj) { 
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
    GetKnowledgeBaseSmartIndexConfigurationResponseBody() = default ;
    GetKnowledgeBaseSmartIndexConfigurationResponseBody(const GetKnowledgeBaseSmartIndexConfigurationResponseBody &) = default ;
    GetKnowledgeBaseSmartIndexConfigurationResponseBody(GetKnowledgeBaseSmartIndexConfigurationResponseBody &&) = default ;
    GetKnowledgeBaseSmartIndexConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseSmartIndexConfigurationResponseBody() = default ;
    GetKnowledgeBaseSmartIndexConfigurationResponseBody& operator=(const GetKnowledgeBaseSmartIndexConfigurationResponseBody &) = default ;
    GetKnowledgeBaseSmartIndexConfigurationResponseBody& operator=(GetKnowledgeBaseSmartIndexConfigurationResponseBody &&) = default ;
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
      // 任务账单标识
      shared_ptr<string> billingId_ {};
      // 任务计费状态
      shared_ptr<string> billingStatus_ {};
      // 任务执行状态
      shared_ptr<string> executionStatus_ {};
      // 任务创建时间，ISO 8601 格式
      shared_ptr<string> gmtCreate_ {};
      // 任务更新时间，ISO 8601 格式
      shared_ptr<string> gmtModified_ {};
      // 最近一次任务错误
      shared_ptr<string> lastError_ {};
      // 任务操作类型
      shared_ptr<string> operation_ {};
      // 任务执行进度
      shared_ptr<int64_t> progress_ {};
      // 任务结果上报状态
      shared_ptr<string> reportStatus_ {};
      // 是否复用已有任务
      shared_ptr<bool> reused_ {};
      // 任务业务标识
      shared_ptr<string> taskKey_ {};
      // 任务触发类型
      shared_ptr<string> triggerType_ {};
      // 用量统计是否完成
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
      // Cron 表达式；空表示手动执行
      shared_ptr<string> cronExpression_ {};
      // 下次计划执行时间，ISO 8601 格式
      shared_ptr<string> nextRunAt_ {};
      // 计划使用的 IANA 时区
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
        // 产物资源业务 ID
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
        // 产物资源业务 ID
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
        // 产物目录业务 ID
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
        // 产物资源业务 ID
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
      // 知识洞察
      shared_ptr<Artifacts::KnowledgeInsights> knowledgeInsights_ {};
      // 主题卡片目录
      shared_ptr<Artifacts::TopicCards> topicCards_ {};
      // 主题关系图
      shared_ptr<Artifacts::TopicGraph> topicGraph_ {};
      // 主题概览
      shared_ptr<Artifacts::TopicOverview> topicOverview_ {};
    };

    virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->billingId_ == nullptr && this->code_ == nullptr && this->directoryId_ == nullptr && this->enabled_ == nullptr && this->lastError_ == nullptr
        && this->lastSuccessTaskId_ == nullptr && this->lifecycle_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->revision_ == nullptr
        && this->schedule_ == nullptr && this->targetDirId_ == nullptr && this->task_ == nullptr; };
    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts getArtifacts() { DARABONBA_PTR_GET(artifacts_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setArtifacts(const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setArtifacts(GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // billingId Field Functions 
    bool hasBillingId() const { return this->billingId_ != nullptr;};
    void deleteBillingId() { this->billingId_ = nullptr;};
    inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // lastError Field Functions 
    bool hasLastError() const { return this->lastError_ != nullptr;};
    void deleteLastError() { this->lastError_ = nullptr;};
    inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


    // lastSuccessTaskId Field Functions 
    bool hasLastSuccessTaskId() const { return this->lastSuccessTaskId_ != nullptr;};
    void deleteLastSuccessTaskId() { this->lastSuccessTaskId_ = nullptr;};
    inline string getLastSuccessTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessTaskId_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setLastSuccessTaskId(string lastSuccessTaskId) { DARABONBA_PTR_SET_VALUE(lastSuccessTaskId_, lastSuccessTaskId) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setSchedule(const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setSchedule(GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // targetDirId Field Functions 
    bool hasTargetDirId() const { return this->targetDirId_ != nullptr;};
    void deleteTargetDirId() { this->targetDirId_ = nullptr;};
    inline string getTargetDirId() const { DARABONBA_PTR_GET_DEFAULT(targetDirId_, "") };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setTargetDirId(string targetDirId) { DARABONBA_PTR_SET_VALUE(targetDirId_, targetDirId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setTask(const GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetKnowledgeBaseSmartIndexConfigurationResponseBody& setTask(GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // 已发布产物引用
    shared_ptr<GetKnowledgeBaseSmartIndexConfigurationResponseBody::Artifacts> artifacts_ {};
    // 当前或最近任务账单标识
    shared_ptr<string> billingId_ {};
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 企业知识库根目录业务 ID
    shared_ptr<string> directoryId_ {};
    // 是否开启 LLM Wiki 智能索引
    shared_ptr<bool> enabled_ {};
    // 最近一次配置或扫描错误
    shared_ptr<string> lastError_ {};
    // 最近成功任务标识
    shared_ptr<string> lastSuccessTaskId_ {};
    // 配置生命周期：DISABLED、ENABLED 或 DISABLING
    shared_ptr<string> lifecycle_ {};
    // 错误描述，成功时为 success
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 配置版本；更新时作为 expectedRevision 提交
    shared_ptr<int64_t> revision_ {};
    // 自动执行计划
    shared_ptr<GetKnowledgeBaseSmartIndexConfigurationResponseBody::Schedule> schedule_ {};
    // 智能索引产物目录业务 ID
    shared_ptr<string> targetDirId_ {};
    // 当前或最近任务状态
    shared_ptr<GetKnowledgeBaseSmartIndexConfigurationResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
