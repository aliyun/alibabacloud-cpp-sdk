// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseSyncRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncRunsResponseBody() = default ;
    ListContextDatabaseSyncRunsResponseBody(const ListContextDatabaseSyncRunsResponseBody &) = default ;
    ListContextDatabaseSyncRunsResponseBody(ListContextDatabaseSyncRunsResponseBody &&) = default ;
    ListContextDatabaseSyncRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncRunsResponseBody() = default ;
    ListContextDatabaseSyncRunsResponseBody& operator=(const ListContextDatabaseSyncRunsResponseBody &) = default ;
    ListContextDatabaseSyncRunsResponseBody& operator=(ListContextDatabaseSyncRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Runs, runs_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Runs, runs_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Runs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Runs& obj) { 
          DARABONBA_PTR_TO_JSON(Attempt, attempt_);
          DARABONBA_PTR_TO_JSON(CancelRequestedAt, cancelRequestedAt_);
          DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
          DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
          DARABONBA_PTR_TO_JSON(JobConfigVersion, jobConfigVersion_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(LastError, lastError_);
          DARABONBA_PTR_TO_JSON(PluginRef, pluginRef_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(RunId, runId_);
          DARABONBA_PTR_TO_JSON(ScheduledAt, scheduledAt_);
          DARABONBA_PTR_TO_JSON(StartedAt, startedAt_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        };
        friend void from_json(const Darabonba::Json& j, Runs& obj) { 
          DARABONBA_PTR_FROM_JSON(Attempt, attempt_);
          DARABONBA_PTR_FROM_JSON(CancelRequestedAt, cancelRequestedAt_);
          DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
          DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
          DARABONBA_PTR_FROM_JSON(JobConfigVersion, jobConfigVersion_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(LastError, lastError_);
          DARABONBA_PTR_FROM_JSON(PluginRef, pluginRef_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(RunId, runId_);
          DARABONBA_PTR_FROM_JSON(ScheduledAt, scheduledAt_);
          DARABONBA_PTR_FROM_JSON(StartedAt, startedAt_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        };
        Runs() = default ;
        Runs(const Runs &) = default ;
        Runs(Runs &&) = default ;
        Runs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Runs() = default ;
        Runs& operator=(const Runs &) = default ;
        Runs& operator=(Runs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Summary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Summary& obj) { 
            DARABONBA_PTR_TO_JSON(Cancelled, cancelled_);
            DARABONBA_PTR_TO_JSON(Deferred, deferred_);
            DARABONBA_PTR_TO_JSON(Failed, failed_);
            DARABONBA_PTR_TO_JSON(MetadataUpdated, metadataUpdated_);
            DARABONBA_PTR_TO_JSON(Processing, processing_);
            DARABONBA_PTR_TO_JSON(Skipped, skipped_);
            DARABONBA_PTR_TO_JSON(Unchanged, unchanged_);
            DARABONBA_PTR_TO_JSON(UploadAccepted, uploadAccepted_);
            DARABONBA_PTR_TO_JSON(Uploaded, uploaded_);
          };
          friend void from_json(const Darabonba::Json& j, Summary& obj) { 
            DARABONBA_PTR_FROM_JSON(Cancelled, cancelled_);
            DARABONBA_PTR_FROM_JSON(Deferred, deferred_);
            DARABONBA_PTR_FROM_JSON(Failed, failed_);
            DARABONBA_PTR_FROM_JSON(MetadataUpdated, metadataUpdated_);
            DARABONBA_PTR_FROM_JSON(Processing, processing_);
            DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
            DARABONBA_PTR_FROM_JSON(Unchanged, unchanged_);
            DARABONBA_PTR_FROM_JSON(UploadAccepted, uploadAccepted_);
            DARABONBA_PTR_FROM_JSON(Uploaded, uploaded_);
          };
          Summary() = default ;
          Summary(const Summary &) = default ;
          Summary(Summary &&) = default ;
          Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Summary() = default ;
          Summary& operator=(const Summary &) = default ;
          Summary& operator=(Summary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cancelled_ == nullptr
        && this->deferred_ == nullptr && this->failed_ == nullptr && this->metadataUpdated_ == nullptr && this->processing_ == nullptr && this->skipped_ == nullptr
        && this->unchanged_ == nullptr && this->uploadAccepted_ == nullptr && this->uploaded_ == nullptr; };
          // cancelled Field Functions 
          bool hasCancelled() const { return this->cancelled_ != nullptr;};
          void deleteCancelled() { this->cancelled_ = nullptr;};
          inline int32_t getCancelled() const { DARABONBA_PTR_GET_DEFAULT(cancelled_, 0) };
          inline Summary& setCancelled(int32_t cancelled) { DARABONBA_PTR_SET_VALUE(cancelled_, cancelled) };


          // deferred Field Functions 
          bool hasDeferred() const { return this->deferred_ != nullptr;};
          void deleteDeferred() { this->deferred_ = nullptr;};
          inline int32_t getDeferred() const { DARABONBA_PTR_GET_DEFAULT(deferred_, 0) };
          inline Summary& setDeferred(int32_t deferred) { DARABONBA_PTR_SET_VALUE(deferred_, deferred) };


          // failed Field Functions 
          bool hasFailed() const { return this->failed_ != nullptr;};
          void deleteFailed() { this->failed_ = nullptr;};
          inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
          inline Summary& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


          // metadataUpdated Field Functions 
          bool hasMetadataUpdated() const { return this->metadataUpdated_ != nullptr;};
          void deleteMetadataUpdated() { this->metadataUpdated_ = nullptr;};
          inline int32_t getMetadataUpdated() const { DARABONBA_PTR_GET_DEFAULT(metadataUpdated_, 0) };
          inline Summary& setMetadataUpdated(int32_t metadataUpdated) { DARABONBA_PTR_SET_VALUE(metadataUpdated_, metadataUpdated) };


          // processing Field Functions 
          bool hasProcessing() const { return this->processing_ != nullptr;};
          void deleteProcessing() { this->processing_ = nullptr;};
          inline int32_t getProcessing() const { DARABONBA_PTR_GET_DEFAULT(processing_, 0) };
          inline Summary& setProcessing(int32_t processing) { DARABONBA_PTR_SET_VALUE(processing_, processing) };


          // skipped Field Functions 
          bool hasSkipped() const { return this->skipped_ != nullptr;};
          void deleteSkipped() { this->skipped_ = nullptr;};
          inline int32_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0) };
          inline Summary& setSkipped(int32_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


          // unchanged Field Functions 
          bool hasUnchanged() const { return this->unchanged_ != nullptr;};
          void deleteUnchanged() { this->unchanged_ = nullptr;};
          inline int32_t getUnchanged() const { DARABONBA_PTR_GET_DEFAULT(unchanged_, 0) };
          inline Summary& setUnchanged(int32_t unchanged) { DARABONBA_PTR_SET_VALUE(unchanged_, unchanged) };


          // uploadAccepted Field Functions 
          bool hasUploadAccepted() const { return this->uploadAccepted_ != nullptr;};
          void deleteUploadAccepted() { this->uploadAccepted_ = nullptr;};
          inline int32_t getUploadAccepted() const { DARABONBA_PTR_GET_DEFAULT(uploadAccepted_, 0) };
          inline Summary& setUploadAccepted(int32_t uploadAccepted) { DARABONBA_PTR_SET_VALUE(uploadAccepted_, uploadAccepted) };


          // uploaded Field Functions 
          bool hasUploaded() const { return this->uploaded_ != nullptr;};
          void deleteUploaded() { this->uploaded_ = nullptr;};
          inline int32_t getUploaded() const { DARABONBA_PTR_GET_DEFAULT(uploaded_, 0) };
          inline Summary& setUploaded(int32_t uploaded) { DARABONBA_PTR_SET_VALUE(uploaded_, uploaded) };


        protected:
          // The number of canceled items.
          shared_ptr<int32_t> cancelled_ {};
          // The number of deferred items.
          shared_ptr<int32_t> deferred_ {};
          // The number of failed items.
          shared_ptr<int32_t> failed_ {};
          // The number of items with updated metadata.
          shared_ptr<int32_t> metadataUpdated_ {};
          // The number of items being processed.
          shared_ptr<int32_t> processing_ {};
          // The number of skipped items.
          shared_ptr<int32_t> skipped_ {};
          // The number of unchanged items.
          shared_ptr<int32_t> unchanged_ {};
          // The number of accepted uploads.
          shared_ptr<int32_t> uploadAccepted_ {};
          // The number of uploaded items.
          shared_ptr<int32_t> uploaded_ {};
        };

        virtual bool empty() const override { return this->attempt_ == nullptr
        && this->cancelRequestedAt_ == nullptr && this->dryRun_ == nullptr && this->finishedAt_ == nullptr && this->jobConfigVersion_ == nullptr && this->jobId_ == nullptr
        && this->jobName_ == nullptr && this->knowledgeBaseId_ == nullptr && this->lastError_ == nullptr && this->pluginRef_ == nullptr && this->requestId_ == nullptr
        && this->runId_ == nullptr && this->scheduledAt_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr
        && this->trigger_ == nullptr; };
        // attempt Field Functions 
        bool hasAttempt() const { return this->attempt_ != nullptr;};
        void deleteAttempt() { this->attempt_ = nullptr;};
        inline int32_t getAttempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
        inline Runs& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


        // cancelRequestedAt Field Functions 
        bool hasCancelRequestedAt() const { return this->cancelRequestedAt_ != nullptr;};
        void deleteCancelRequestedAt() { this->cancelRequestedAt_ = nullptr;};
        inline string getCancelRequestedAt() const { DARABONBA_PTR_GET_DEFAULT(cancelRequestedAt_, "") };
        inline Runs& setCancelRequestedAt(string cancelRequestedAt) { DARABONBA_PTR_SET_VALUE(cancelRequestedAt_, cancelRequestedAt) };


        // dryRun Field Functions 
        bool hasDryRun() const { return this->dryRun_ != nullptr;};
        void deleteDryRun() { this->dryRun_ = nullptr;};
        inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
        inline Runs& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


        // finishedAt Field Functions 
        bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
        void deleteFinishedAt() { this->finishedAt_ = nullptr;};
        inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
        inline Runs& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


        // jobConfigVersion Field Functions 
        bool hasJobConfigVersion() const { return this->jobConfigVersion_ != nullptr;};
        void deleteJobConfigVersion() { this->jobConfigVersion_ = nullptr;};
        inline int32_t getJobConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(jobConfigVersion_, 0) };
        inline Runs& setJobConfigVersion(int32_t jobConfigVersion) { DARABONBA_PTR_SET_VALUE(jobConfigVersion_, jobConfigVersion) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Runs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Runs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Runs& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // lastError Field Functions 
        bool hasLastError() const { return this->lastError_ != nullptr;};
        void deleteLastError() { this->lastError_ = nullptr;};
        inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
        inline Runs& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


        // pluginRef Field Functions 
        bool hasPluginRef() const { return this->pluginRef_ != nullptr;};
        void deletePluginRef() { this->pluginRef_ = nullptr;};
        inline string getPluginRef() const { DARABONBA_PTR_GET_DEFAULT(pluginRef_, "") };
        inline Runs& setPluginRef(string pluginRef) { DARABONBA_PTR_SET_VALUE(pluginRef_, pluginRef) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Runs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // runId Field Functions 
        bool hasRunId() const { return this->runId_ != nullptr;};
        void deleteRunId() { this->runId_ = nullptr;};
        inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
        inline Runs& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


        // scheduledAt Field Functions 
        bool hasScheduledAt() const { return this->scheduledAt_ != nullptr;};
        void deleteScheduledAt() { this->scheduledAt_ = nullptr;};
        inline string getScheduledAt() const { DARABONBA_PTR_GET_DEFAULT(scheduledAt_, "") };
        inline Runs& setScheduledAt(string scheduledAt) { DARABONBA_PTR_SET_VALUE(scheduledAt_, scheduledAt) };


        // startedAt Field Functions 
        bool hasStartedAt() const { return this->startedAt_ != nullptr;};
        void deleteStartedAt() { this->startedAt_ = nullptr;};
        inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
        inline Runs& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Runs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline const Runs::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Runs::Summary) };
        inline Runs::Summary getSummary() { DARABONBA_PTR_GET(summary_, Runs::Summary) };
        inline Runs& setSummary(const Runs::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
        inline Runs& setSummary(Runs::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
        inline Runs& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      protected:
        // The number of attempts.
        shared_ptr<int32_t> attempt_ {};
        // The time when the cancellation was requested.
        shared_ptr<string> cancelRequestedAt_ {};
        // Specifies whether the run is a dry run.
        shared_ptr<bool> dryRun_ {};
        // The end time.
        shared_ptr<string> finishedAt_ {};
        // The configuration version number of the import job.
        shared_ptr<int32_t> jobConfigVersion_ {};
        // The job ID, which is a system-generated UUID.
        shared_ptr<string> jobId_ {};
        // The name of the import job.
        shared_ptr<string> jobName_ {};
        // The ID of the destination knowledge base.
        shared_ptr<string> knowledgeBaseId_ {};
        // The latest error message.
        shared_ptr<string> lastError_ {};
        // The plugin reference.
        shared_ptr<string> pluginRef_ {};
        // The request ID.
        shared_ptr<string> requestId_ {};
        // The run ID, which is a system-generated UUID.
        shared_ptr<string> runId_ {};
        // The scheduled run time.
        shared_ptr<string> scheduledAt_ {};
        // The start time.
        shared_ptr<string> startedAt_ {};
        // The run status. Valid values: queued, running, cancelling, succeeded, partial, failed, cancelled, skipped, and dead.
        shared_ptr<string> status_ {};
        // The summary of the run results.
        shared_ptr<Runs::Summary> summary_ {};
        // The trigger method of the run. Valid values: manual, schedule, and retry.
        shared_ptr<string> trigger_ {};
      };

      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->runs_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // runs Field Functions 
      bool hasRuns() const { return this->runs_ != nullptr;};
      void deleteRuns() { this->runs_ = nullptr;};
      inline const vector<Data::Runs> & getRuns() const { DARABONBA_PTR_GET_CONST(runs_, vector<Data::Runs>) };
      inline vector<Data::Runs> getRuns() { DARABONBA_PTR_GET(runs_, vector<Data::Runs>) };
      inline Data& setRuns(const vector<Data::Runs> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
      inline Data& setRuns(vector<Data::Runs> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The page number. Pages start from 1.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of runs.
      shared_ptr<vector<Data::Runs>> runs_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContextDatabaseSyncRunsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContextDatabaseSyncRunsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContextDatabaseSyncRunsResponseBody::Data) };
    inline ListContextDatabaseSyncRunsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContextDatabaseSyncRunsResponseBody::Data) };
    inline ListContextDatabaseSyncRunsResponseBody& setData(const ListContextDatabaseSyncRunsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncRunsResponseBody& setData(ListContextDatabaseSyncRunsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncRunsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncRunsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncRunsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListContextDatabaseSyncRunsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
