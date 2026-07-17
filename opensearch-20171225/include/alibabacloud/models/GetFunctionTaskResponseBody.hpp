// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFunctionTaskResponseBody() = default ;
    GetFunctionTaskResponseBody(const GetFunctionTaskResponseBody &) = default ;
    GetFunctionTaskResponseBody(GetFunctionTaskResponseBody &&) = default ;
    GetFunctionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionTaskResponseBody() = default ;
    GetFunctionTaskResponseBody& operator=(const GetFunctionTaskResponseBody &) = default ;
    GetFunctionTaskResponseBody& operator=(GetFunctionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(Generation, generation_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RunId, runId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(Generation, generation_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RunId, runId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->extendInfo_ == nullptr && this->functionName_ == nullptr && this->generation_ == nullptr && this->progress_ == nullptr && this->runId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Result& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Result& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // generation Field Functions 
      bool hasGeneration() const { return this->generation_ != nullptr;};
      void deleteGeneration() { this->generation_ = nullptr;};
      inline string getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
      inline Result& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
      inline Result& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Result& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Result& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The timestamp that indicates the end time of the task. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The extended information, which is a JSON string.
      shared_ptr<string> extendInfo_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
      // The number of iterations.
      shared_ptr<string> generation_ {};
      // The progress. 90 indicates 90%.
      shared_ptr<int64_t> progress_ {};
      // The ID of the task.
      shared_ptr<string> runId_ {};
      // The timestamp that indicates the start time of the task. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the task. Valid values:
      // 
      // - success
      // 
      // - failed
      // 
      // - running
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionTaskResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionTaskResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionTaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionTaskResponseBody::Result) };
    inline GetFunctionTaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetFunctionTaskResponseBody::Result) };
    inline GetFunctionTaskResponseBody& setResult(const GetFunctionTaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionTaskResponseBody& setResult(GetFunctionTaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The time consumed for the request, in milliseconds.
    shared_ptr<int64_t> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result of the request.
    shared_ptr<GetFunctionTaskResponseBody::Result> result_ {};
    // The request status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
