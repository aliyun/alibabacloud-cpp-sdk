// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCJOBSRESPONSEBODY_HPP_
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
  class ListContextDatabaseSyncJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncJobsResponseBody() = default ;
    ListContextDatabaseSyncJobsResponseBody(const ListContextDatabaseSyncJobsResponseBody &) = default ;
    ListContextDatabaseSyncJobsResponseBody(ListContextDatabaseSyncJobsResponseBody &&) = default ;
    ListContextDatabaseSyncJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncJobsResponseBody() = default ;
    ListContextDatabaseSyncJobsResponseBody& operator=(const ListContextDatabaseSyncJobsResponseBody &) = default ;
    ListContextDatabaseSyncJobsResponseBody& operator=(ListContextDatabaseSyncJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Jobs, jobs_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class Jobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
          DARABONBA_PTR_TO_JSON(AutoPauseReason, autoPauseReason_);
          DARABONBA_PTR_TO_JSON(AutoPaused, autoPaused_);
          DARABONBA_PTR_TO_JSON(ConfigVersion, configVersion_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Filters, filters_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NextRunAt, nextRunAt_);
          DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoPauseReason, autoPauseReason_);
          DARABONBA_PTR_FROM_JSON(AutoPaused, autoPaused_);
          DARABONBA_PTR_FROM_JSON(ConfigVersion, configVersion_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Filters, filters_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NextRunAt, nextRunAt_);
          DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        };
        Jobs() = default ;
        Jobs(const Jobs &) = default ;
        Jobs(Jobs &&) = default ;
        Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Jobs() = default ;
        Jobs& operator=(const Jobs &) = default ;
        Jobs& operator=(Jobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Filters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Filters& obj) { 
            DARABONBA_PTR_TO_JSON(Exclude, exclude_);
            DARABONBA_PTR_TO_JSON(ExcludedDocumentIds, excludedDocumentIds_);
            DARABONBA_PTR_TO_JSON(Include, include_);
            DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
            DARABONBA_PTR_TO_JSON(TypeAllowlist, typeAllowlist_);
          };
          friend void from_json(const Darabonba::Json& j, Filters& obj) { 
            DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
            DARABONBA_PTR_FROM_JSON(ExcludedDocumentIds, excludedDocumentIds_);
            DARABONBA_PTR_FROM_JSON(Include, include_);
            DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
            DARABONBA_PTR_FROM_JSON(TypeAllowlist, typeAllowlist_);
          };
          Filters() = default ;
          Filters(const Filters &) = default ;
          Filters(Filters &&) = default ;
          Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Filters() = default ;
          Filters& operator=(const Filters &) = default ;
          Filters& operator=(Filters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exclude_ == nullptr
        && this->excludedDocumentIds_ == nullptr && this->include_ == nullptr && this->sizeLimit_ == nullptr && this->typeAllowlist_ == nullptr; };
          // exclude Field Functions 
          bool hasExclude() const { return this->exclude_ != nullptr;};
          void deleteExclude() { this->exclude_ = nullptr;};
          inline const vector<string> & getExclude() const { DARABONBA_PTR_GET_CONST(exclude_, vector<string>) };
          inline vector<string> getExclude() { DARABONBA_PTR_GET(exclude_, vector<string>) };
          inline Filters& setExclude(const vector<string> & exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };
          inline Filters& setExclude(vector<string> && exclude) { DARABONBA_PTR_SET_RVALUE(exclude_, exclude) };


          // excludedDocumentIds Field Functions 
          bool hasExcludedDocumentIds() const { return this->excludedDocumentIds_ != nullptr;};
          void deleteExcludedDocumentIds() { this->excludedDocumentIds_ = nullptr;};
          inline const vector<string> & getExcludedDocumentIds() const { DARABONBA_PTR_GET_CONST(excludedDocumentIds_, vector<string>) };
          inline vector<string> getExcludedDocumentIds() { DARABONBA_PTR_GET(excludedDocumentIds_, vector<string>) };
          inline Filters& setExcludedDocumentIds(const vector<string> & excludedDocumentIds) { DARABONBA_PTR_SET_VALUE(excludedDocumentIds_, excludedDocumentIds) };
          inline Filters& setExcludedDocumentIds(vector<string> && excludedDocumentIds) { DARABONBA_PTR_SET_RVALUE(excludedDocumentIds_, excludedDocumentIds) };


          // include Field Functions 
          bool hasInclude() const { return this->include_ != nullptr;};
          void deleteInclude() { this->include_ = nullptr;};
          inline const vector<string> & getInclude() const { DARABONBA_PTR_GET_CONST(include_, vector<string>) };
          inline vector<string> getInclude() { DARABONBA_PTR_GET(include_, vector<string>) };
          inline Filters& setInclude(const vector<string> & include) { DARABONBA_PTR_SET_VALUE(include_, include) };
          inline Filters& setInclude(vector<string> && include) { DARABONBA_PTR_SET_RVALUE(include_, include) };


          // sizeLimit Field Functions 
          bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
          void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
          inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
          inline Filters& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


          // typeAllowlist Field Functions 
          bool hasTypeAllowlist() const { return this->typeAllowlist_ != nullptr;};
          void deleteTypeAllowlist() { this->typeAllowlist_ = nullptr;};
          inline const vector<string> & getTypeAllowlist() const { DARABONBA_PTR_GET_CONST(typeAllowlist_, vector<string>) };
          inline vector<string> getTypeAllowlist() { DARABONBA_PTR_GET(typeAllowlist_, vector<string>) };
          inline Filters& setTypeAllowlist(const vector<string> & typeAllowlist) { DARABONBA_PTR_SET_VALUE(typeAllowlist_, typeAllowlist) };
          inline Filters& setTypeAllowlist(vector<string> && typeAllowlist) { DARABONBA_PTR_SET_RVALUE(typeAllowlist_, typeAllowlist) };


        protected:
          // The list of exclusion rules.
          shared_ptr<vector<string>> exclude_ {};
          // The list of excluded document IDs.
          shared_ptr<vector<string>> excludedDocumentIds_ {};
          // The list of inclusion rules.
          shared_ptr<vector<string>> include_ {};
          // The size limit in bytes.
          shared_ptr<int64_t> sizeLimit_ {};
          // The list of allowed document types.
          shared_ptr<vector<string>> typeAllowlist_ {};
        };

        virtual bool empty() const override { return this->autoPauseReason_ == nullptr
        && this->autoPaused_ == nullptr && this->configVersion_ == nullptr && this->enabled_ == nullptr && this->filters_ == nullptr && this->id_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr && this->nextRunAt_ == nullptr && this->scheduleType_ == nullptr && this->sourceId_ == nullptr
        && this->targetId_ == nullptr; };
        // autoPauseReason Field Functions 
        bool hasAutoPauseReason() const { return this->autoPauseReason_ != nullptr;};
        void deleteAutoPauseReason() { this->autoPauseReason_ = nullptr;};
        inline string getAutoPauseReason() const { DARABONBA_PTR_GET_DEFAULT(autoPauseReason_, "") };
        inline Jobs& setAutoPauseReason(string autoPauseReason) { DARABONBA_PTR_SET_VALUE(autoPauseReason_, autoPauseReason) };


        // autoPaused Field Functions 
        bool hasAutoPaused() const { return this->autoPaused_ != nullptr;};
        void deleteAutoPaused() { this->autoPaused_ = nullptr;};
        inline bool getAutoPaused() const { DARABONBA_PTR_GET_DEFAULT(autoPaused_, false) };
        inline Jobs& setAutoPaused(bool autoPaused) { DARABONBA_PTR_SET_VALUE(autoPaused_, autoPaused) };


        // configVersion Field Functions 
        bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
        void deleteConfigVersion() { this->configVersion_ = nullptr;};
        inline int32_t getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, 0) };
        inline Jobs& setConfigVersion(int32_t configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Jobs& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // filters Field Functions 
        bool hasFilters() const { return this->filters_ != nullptr;};
        void deleteFilters() { this->filters_ = nullptr;};
        inline const Jobs::Filters & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, Jobs::Filters) };
        inline Jobs::Filters getFilters() { DARABONBA_PTR_GET(filters_, Jobs::Filters) };
        inline Jobs& setFilters(const Jobs::Filters & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
        inline Jobs& setFilters(Jobs::Filters && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Jobs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Jobs& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Jobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nextRunAt Field Functions 
        bool hasNextRunAt() const { return this->nextRunAt_ != nullptr;};
        void deleteNextRunAt() { this->nextRunAt_ = nullptr;};
        inline string getNextRunAt() const { DARABONBA_PTR_GET_DEFAULT(nextRunAt_, "") };
        inline Jobs& setNextRunAt(string nextRunAt) { DARABONBA_PTR_SET_VALUE(nextRunAt_, nextRunAt) };


        // scheduleType Field Functions 
        bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
        void deleteScheduleType() { this->scheduleType_ = nullptr;};
        inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
        inline Jobs& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline Jobs& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline Jobs& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      protected:
        // The reason for automatic pause.
        shared_ptr<string> autoPauseReason_ {};
        // Indicates whether the task is automatically paused.
        shared_ptr<bool> autoPaused_ {};
        // The configuration version number.
        shared_ptr<int32_t> configVersion_ {};
        // Indicates whether the task is enabled.
        shared_ptr<bool> enabled_ {};
        // The filter conditions.
        shared_ptr<Jobs::Filters> filters_ {};
        // The task ID, which is a system-generated UUID.
        shared_ptr<string> id_ {};
        // The ID of the target knowledge base.
        shared_ptr<string> knowledgeBaseId_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The time of the next run.
        shared_ptr<string> nextRunAt_ {};
        // The scheduling type. Valid values: interval, daily-times.
        shared_ptr<string> scheduleType_ {};
        // The data source ID, which is a system-generated UUID.
        shared_ptr<string> sourceId_ {};
        // The target ID, which is a system-generated UUID.
        shared_ptr<string> targetId_ {};
      };

      virtual bool empty() const override { return this->jobs_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<Data::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Data::Jobs>) };
      inline vector<Data::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<Data::Jobs>) };
      inline Data& setJobs(const vector<Data::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Data& setJobs(vector<Data::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


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


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of import tasks.
      shared_ptr<vector<Data::Jobs>> jobs_ {};
      // The page number. The value starts from 1.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContextDatabaseSyncJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListContextDatabaseSyncJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListContextDatabaseSyncJobsResponseBody::Data) };
    inline ListContextDatabaseSyncJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListContextDatabaseSyncJobsResponseBody::Data) };
    inline ListContextDatabaseSyncJobsResponseBody& setData(const ListContextDatabaseSyncJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncJobsResponseBody& setData(ListContextDatabaseSyncJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncJobsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListContextDatabaseSyncJobsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The response message.
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
