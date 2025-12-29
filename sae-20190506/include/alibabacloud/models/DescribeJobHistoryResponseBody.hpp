// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeJobHistoryResponseBody() = default ;
    DescribeJobHistoryResponseBody(const DescribeJobHistoryResponseBody &) = default ;
    DescribeJobHistoryResponseBody(DescribeJobHistoryResponseBody &&) = default ;
    DescribeJobHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobHistoryResponseBody() = default ;
    DescribeJobHistoryResponseBody& operator=(const DescribeJobHistoryResponseBody &) = default ;
    DescribeJobHistoryResponseBody& operator=(DescribeJobHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Jobs, jobs_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
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
        virtual bool empty() const override { return this->active_ == nullptr
        && this->completionTime_ == nullptr && this->failed_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->succeeded_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
        inline Jobs& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // completionTime Field Functions 
        bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
        void deleteCompletionTime() { this->completionTime_ = nullptr;};
        inline int64_t getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
        inline Jobs& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
        inline Jobs& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Jobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Jobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Jobs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // succeeded Field Functions 
        bool hasSucceeded() const { return this->succeeded_ != nullptr;};
        void deleteSucceeded() { this->succeeded_ = nullptr;};
        inline int64_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
        inline Jobs& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


      protected:
        // The number of running instances.
        shared_ptr<int64_t> active_ {};
        // The time when the job was executed.
        shared_ptr<int64_t> completionTime_ {};
        // The number of instances that failed to run.
        shared_ptr<int64_t> failed_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The message returned if exceptions occur during job running.
        shared_ptr<string> message_ {};
        // The time when the job was created.
        shared_ptr<int64_t> startTime_ {};
        // The status of the job. Valid values:
        // 
        // *   **0**: The job was not executed.
        // *   **1**: The job was executed.
        // *   **2**: The job failed to be executed.
        // *   **3**: The job is being executed.
        shared_ptr<string> state_ {};
        // The number of instances that are successfully run.
        shared_ptr<int64_t> succeeded_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->jobs_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<Data::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Data::Jobs>) };
      inline vector<Data::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<Data::Jobs>) };
      inline Data& setJobs(const vector<Data::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Data& setJobs(vector<Data::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int64_t> currentPage_ {};
      // The jobs.
      shared_ptr<vector<Data::Jobs>> jobs_ {};
      // The number of entries to return on each page. Valid values: 0 to 10000.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of jobs.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeJobHistoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeJobHistoryResponseBody::Data) };
    inline DescribeJobHistoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeJobHistoryResponseBody::Data) };
    inline DescribeJobHistoryResponseBody& setData(const DescribeJobHistoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJobHistoryResponseBody& setData(DescribeJobHistoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeJobHistoryResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeJobHistoryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code returned. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeJobHistoryResponseBody::Data> data_ {};
    // The error code returned. Take note of the following rules:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned. Take note of the following rules:
    // 
    // *   If the call is successful, **success** is returned.
    // *   If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
