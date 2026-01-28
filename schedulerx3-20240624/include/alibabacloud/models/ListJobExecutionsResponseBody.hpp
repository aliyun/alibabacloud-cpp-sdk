// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTIONSRESPONSEBODY_HPP_
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
  class ListJobExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobExecutionsResponseBody() = default ;
    ListJobExecutionsResponseBody(const ListJobExecutionsResponseBody &) = default ;
    ListJobExecutionsResponseBody(ListJobExecutionsResponseBody &&) = default ;
    ListJobExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutionsResponseBody() = default ;
    ListJobExecutionsResponseBody& operator=(const ListJobExecutionsResponseBody &) = default ;
    ListJobExecutionsResponseBody& operator=(ListJobExecutionsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Attempt, attempt_);
          DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Executor, executor_);
          DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(RouteStrategy, routeStrategy_);
          DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeType, timeType_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(WorkAddr, workAddr_);
          DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Attempt, attempt_);
          DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Executor, executor_);
          DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(RouteStrategy, routeStrategy_);
          DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(WorkAddr, workAddr_);
          DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
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
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->attempt_ == nullptr && this->dataTime_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->executor_ == nullptr
        && this->jobExecutionId_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobType_ == nullptr && this->parameters_ == nullptr
        && this->result_ == nullptr && this->routeStrategy_ == nullptr && this->scheduleTime_ == nullptr && this->serverIp_ == nullptr && this->status_ == nullptr
        && this->timeType_ == nullptr && this->totalTokens_ == nullptr && this->triggerType_ == nullptr && this->workAddr_ == nullptr && this->workflowExecutionId_ == nullptr
        && this->workflowId_ == nullptr && this->workflowName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Records& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // attempt Field Functions 
        bool hasAttempt() const { return this->attempt_ != nullptr;};
        void deleteAttempt() { this->attempt_ = nullptr;};
        inline int32_t getAttempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
        inline Records& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


        // dataTime Field Functions 
        bool hasDataTime() const { return this->dataTime_ != nullptr;};
        void deleteDataTime() { this->dataTime_ = nullptr;};
        inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
        inline Records& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline Records& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Records& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // executor Field Functions 
        bool hasExecutor() const { return this->executor_ != nullptr;};
        void deleteExecutor() { this->executor_ = nullptr;};
        inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
        inline Records& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


        // jobExecutionId Field Functions 
        bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
        void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
        inline string getJobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
        inline Records& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
        inline Records& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Records& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline Records& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Records& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Records& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // routeStrategy Field Functions 
        bool hasRouteStrategy() const { return this->routeStrategy_ != nullptr;};
        void deleteRouteStrategy() { this->routeStrategy_ = nullptr;};
        inline int32_t getRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(routeStrategy_, 0) };
        inline Records& setRouteStrategy(int32_t routeStrategy) { DARABONBA_PTR_SET_VALUE(routeStrategy_, routeStrategy) };


        // scheduleTime Field Functions 
        bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
        void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
        inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
        inline Records& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


        // serverIp Field Functions 
        bool hasServerIp() const { return this->serverIp_ != nullptr;};
        void deleteServerIp() { this->serverIp_ = nullptr;};
        inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
        inline Records& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Records& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeType Field Functions 
        bool hasTimeType() const { return this->timeType_ != nullptr;};
        void deleteTimeType() { this->timeType_ = nullptr;};
        inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
        inline Records& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
        inline Records& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline int32_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
        inline Records& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // workAddr Field Functions 
        bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
        void deleteWorkAddr() { this->workAddr_ = nullptr;};
        inline string getWorkAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
        inline Records& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


        // workflowExecutionId Field Functions 
        bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
        void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
        inline string getWorkflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, "") };
        inline Records& setWorkflowExecutionId(string workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline Records& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


        // workflowName Field Functions 
        bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
        void deleteWorkflowName() { this->workflowName_ = nullptr;};
        inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
        inline Records& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<int32_t> attempt_ {};
        shared_ptr<string> dataTime_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> executor_ {};
        shared_ptr<string> jobExecutionId_ {};
        shared_ptr<int64_t> jobId_ {};
        shared_ptr<string> jobName_ {};
        shared_ptr<string> jobType_ {};
        shared_ptr<string> parameters_ {};
        shared_ptr<string> result_ {};
        shared_ptr<int32_t> routeStrategy_ {};
        shared_ptr<string> scheduleTime_ {};
        shared_ptr<string> serverIp_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<int32_t> timeType_ {};
        shared_ptr<int32_t> totalTokens_ {};
        shared_ptr<int32_t> triggerType_ {};
        shared_ptr<string> workAddr_ {};
        shared_ptr<string> workflowExecutionId_ {};
        shared_ptr<int64_t> workflowId_ {};
        shared_ptr<string> workflowName_ {};
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
    inline ListJobExecutionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobExecutionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobExecutionsResponseBody::Data) };
    inline ListJobExecutionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobExecutionsResponseBody::Data) };
    inline ListJobExecutionsResponseBody& setData(const ListJobExecutionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobExecutionsResponseBody& setData(ListJobExecutionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobExecutionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobExecutionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<ListJobExecutionsResponseBody::Data> data_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
