// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeJobStatusResponseBody() = default ;
    DescribeJobStatusResponseBody(const DescribeJobStatusResponseBody &) = default ;
    DescribeJobStatusResponseBody(DescribeJobStatusResponseBody &&) = default ;
    DescribeJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobStatusResponseBody() = default ;
    DescribeJobStatusResponseBody& operator=(const DescribeJobStatusResponseBody &) = default ;
    DescribeJobStatusResponseBody& operator=(DescribeJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_TO_JSON(Failed, failed_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_FROM_JSON(Failed, failed_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
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
      virtual bool empty() const override { return this->active_ == nullptr
        && this->completionTime_ == nullptr && this->failed_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->succeeded_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
      inline Data& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // completionTime Field Functions 
      bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
      void deleteCompletionTime() { this->completionTime_ = nullptr;};
      inline int64_t getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
      inline Data& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
      inline Data& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // succeeded Field Functions 
      bool hasSucceeded() const { return this->succeeded_ != nullptr;};
      void deleteSucceeded() { this->succeeded_ = nullptr;};
      inline int64_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
      inline Data& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


    protected:
      // The number of running instances.
      shared_ptr<int64_t> active_ {};
      // The time when the job was executed.
      shared_ptr<int64_t> completionTime_ {};
      // The number of instances that failed to run.
      shared_ptr<int64_t> failed_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The returned message. Take note of the following rules:
      // 
      // *   If the call is successful, **success** is returned.
      // *   If the call fails, an error code is returned.
      shared_ptr<string> message_ {};
      // The time when the job was created.
      shared_ptr<int64_t> startTime_ {};
      // The status of the job. Valid values:
      // 
      // *   **0**: The job is not executed.
      // *   **1**: The job was executed.
      // *   **2**: The job failed to be executed.
      // *   **3**: The job is being executed.
      shared_ptr<string> state_ {};
      // The number of instances that are successfully run.
      shared_ptr<int64_t> succeeded_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeJobStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeJobStatusResponseBody::Data) };
    inline DescribeJobStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeJobStatusResponseBody::Data) };
    inline DescribeJobStatusResponseBody& setData(const DescribeJobStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJobStatusResponseBody& setData(DescribeJobStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeJobStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeJobStatusResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeJobStatusResponseBody::Data> data_ {};
    // The error code returned. Take note of the following rules:
    // 
    // *   **ErrorCode** is not returned if the request succeeds.
    // *   **ErrorCode** is returned if the request fails. For more information, see the "**Error codes**" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Take note of the following rules:
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
