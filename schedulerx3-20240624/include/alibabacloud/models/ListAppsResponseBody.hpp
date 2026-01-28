// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAppsResponseBody() = default ;
    ListAppsResponseBody(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody(ListAppsResponseBody &&) = default ;
    ListAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBody() = default ;
    ListAppsResponseBody& operator=(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody& operator=(ListAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
          DARABONBA_PTR_TO_JSON(ExecutorNum, executorNum_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JobNum, jobNum_);
          DARABONBA_PTR_TO_JSON(LabelRouteStrategy, labelRouteStrategy_);
          DARABONBA_PTR_TO_JSON(Leader, leader_);
          DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_TO_JSON(MaxJobs, maxJobs_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Updater, updater_);
          DARABONBA_PTR_TO_JSON(WorkerRegistry, workerRegistry_);
          DARABONBA_PTR_TO_JSON(WorkflowNum, workflowNum_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
          DARABONBA_PTR_FROM_JSON(ExecutorNum, executorNum_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JobNum, jobNum_);
          DARABONBA_PTR_FROM_JSON(LabelRouteStrategy, labelRouteStrategy_);
          DARABONBA_PTR_FROM_JSON(Leader, leader_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_FROM_JSON(MaxJobs, maxJobs_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Updater, updater_);
          DARABONBA_PTR_FROM_JSON(WorkerRegistry, workerRegistry_);
          DARABONBA_PTR_FROM_JSON(WorkflowNum, workflowNum_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->creator_ == nullptr && this->enableLog_ == nullptr && this->executorNum_ == nullptr
        && this->id_ == nullptr && this->jobNum_ == nullptr && this->labelRouteStrategy_ == nullptr && this->leader_ == nullptr && this->maxConcurrency_ == nullptr
        && this->maxJobs_ == nullptr && this->title_ == nullptr && this->updater_ == nullptr && this->workerRegistry_ == nullptr && this->workflowNum_ == nullptr; };
        // accessToken Field Functions 
        bool hasAccessToken() const { return this->accessToken_ != nullptr;};
        void deleteAccessToken() { this->accessToken_ = nullptr;};
        inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
        inline Records& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Records& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline int32_t getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
        inline Records& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Records& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // enableLog Field Functions 
        bool hasEnableLog() const { return this->enableLog_ != nullptr;};
        void deleteEnableLog() { this->enableLog_ = nullptr;};
        inline bool getEnableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
        inline Records& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


        // executorNum Field Functions 
        bool hasExecutorNum() const { return this->executorNum_ != nullptr;};
        void deleteExecutorNum() { this->executorNum_ = nullptr;};
        inline int64_t getExecutorNum() const { DARABONBA_PTR_GET_DEFAULT(executorNum_, 0L) };
        inline Records& setExecutorNum(int64_t executorNum) { DARABONBA_PTR_SET_VALUE(executorNum_, executorNum) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Records& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobNum Field Functions 
        bool hasJobNum() const { return this->jobNum_ != nullptr;};
        void deleteJobNum() { this->jobNum_ = nullptr;};
        inline int32_t getJobNum() const { DARABONBA_PTR_GET_DEFAULT(jobNum_, 0) };
        inline Records& setJobNum(int32_t jobNum) { DARABONBA_PTR_SET_VALUE(jobNum_, jobNum) };


        // labelRouteStrategy Field Functions 
        bool hasLabelRouteStrategy() const { return this->labelRouteStrategy_ != nullptr;};
        void deleteLabelRouteStrategy() { this->labelRouteStrategy_ = nullptr;};
        inline int32_t getLabelRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(labelRouteStrategy_, 0) };
        inline Records& setLabelRouteStrategy(int32_t labelRouteStrategy) { DARABONBA_PTR_SET_VALUE(labelRouteStrategy_, labelRouteStrategy) };


        // leader Field Functions 
        bool hasLeader() const { return this->leader_ != nullptr;};
        void deleteLeader() { this->leader_ = nullptr;};
        inline string getLeader() const { DARABONBA_PTR_GET_DEFAULT(leader_, "") };
        inline Records& setLeader(string leader) { DARABONBA_PTR_SET_VALUE(leader_, leader) };


        // maxConcurrency Field Functions 
        bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
        void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
        inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
        inline Records& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


        // maxJobs Field Functions 
        bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
        void deleteMaxJobs() { this->maxJobs_ = nullptr;};
        inline int32_t getMaxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
        inline Records& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Records& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updater Field Functions 
        bool hasUpdater() const { return this->updater_ != nullptr;};
        void deleteUpdater() { this->updater_ = nullptr;};
        inline string getUpdater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
        inline Records& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


        // workerRegistry Field Functions 
        bool hasWorkerRegistry() const { return this->workerRegistry_ != nullptr;};
        void deleteWorkerRegistry() { this->workerRegistry_ = nullptr;};
        inline string getWorkerRegistry() const { DARABONBA_PTR_GET_DEFAULT(workerRegistry_, "") };
        inline Records& setWorkerRegistry(string workerRegistry) { DARABONBA_PTR_SET_VALUE(workerRegistry_, workerRegistry) };


        // workflowNum Field Functions 
        bool hasWorkflowNum() const { return this->workflowNum_ != nullptr;};
        void deleteWorkflowNum() { this->workflowNum_ = nullptr;};
        inline int32_t getWorkflowNum() const { DARABONBA_PTR_GET_DEFAULT(workflowNum_, 0) };
        inline Records& setWorkflowNum(int32_t workflowNum) { DARABONBA_PTR_SET_VALUE(workflowNum_, workflowNum) };


      protected:
        // AccessToken
        shared_ptr<string> accessToken_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int32_t> appType_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<bool> enableLog_ {};
        shared_ptr<int64_t> executorNum_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> jobNum_ {};
        shared_ptr<int32_t> labelRouteStrategy_ {};
        shared_ptr<string> leader_ {};
        shared_ptr<int32_t> maxConcurrency_ {};
        shared_ptr<int32_t> maxJobs_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> updater_ {};
        shared_ptr<string> workerRegistry_ {};
        shared_ptr<int32_t> workflowNum_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      // -
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAppsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAppsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAppsResponseBody::Data) };
    inline ListAppsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAppsResponseBody::Data) };
    inline ListAppsResponseBody& setData(const ListAppsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAppsResponseBody& setData(ListAppsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<ListAppsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
