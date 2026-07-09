// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_TO_JSON(attempt, attempt_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(maxAttempts, maxAttempts_);
      DARABONBA_PTR_TO_JSON(nextRetryTime, nextRetryTime_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_ANY_TO_JSON(stats, stats_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
      DARABONBA_PTR_TO_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
      DARABONBA_PTR_FROM_JSON(attempt, attempt_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(maxAttempts, maxAttempts_);
      DARABONBA_PTR_FROM_JSON(nextRetryTime, nextRetryTime_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_ANY_FROM_JSON(stats, stats_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
      DARABONBA_PTR_FROM_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody(GetPipelineRunResponseBody &&) = default ;
    GetPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody& operator=(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody& operator=(GetPipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->attempt_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->finishTime_ == nullptr && this->fromTime_ == nullptr
        && this->maxAttempts_ == nullptr && this->nextRetryTime_ == nullptr && this->pipelineName_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr
        && this->runId_ == nullptr && this->startTime_ == nullptr && this->stats_ == nullptr && this->status_ == nullptr && this->toTime_ == nullptr
        && this->triggerTime_ == nullptr && this->triggerType_ == nullptr; };
    // agentSpaceName Field Functions 
    bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
    void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
    inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
    inline GetPipelineRunResponseBody& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


    // attempt Field Functions 
    bool hasAttempt() const { return this->attempt_ != nullptr;};
    void deleteAttempt() { this->attempt_ = nullptr;};
    inline int32_t getAttempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
    inline GetPipelineRunResponseBody& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPipelineRunResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPipelineRunResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetPipelineRunResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline GetPipelineRunResponseBody& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // maxAttempts Field Functions 
    bool hasMaxAttempts() const { return this->maxAttempts_ != nullptr;};
    void deleteMaxAttempts() { this->maxAttempts_ = nullptr;};
    inline int32_t getMaxAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAttempts_, 0) };
    inline GetPipelineRunResponseBody& setMaxAttempts(int32_t maxAttempts) { DARABONBA_PTR_SET_VALUE(maxAttempts_, maxAttempts) };


    // nextRetryTime Field Functions 
    bool hasNextRetryTime() const { return this->nextRetryTime_ != nullptr;};
    void deleteNextRetryTime() { this->nextRetryTime_ = nullptr;};
    inline string getNextRetryTime() const { DARABONBA_PTR_GET_DEFAULT(nextRetryTime_, "") };
    inline GetPipelineRunResponseBody& setNextRetryTime(string nextRetryTime) { DARABONBA_PTR_SET_VALUE(nextRetryTime_, nextRetryTime) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline GetPipelineRunResponseBody& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline     const Darabonba::Json & getResults() const { DARABONBA_GET(results_) };
    Darabonba::Json & getResults() { DARABONBA_GET(results_) };
    inline GetPipelineRunResponseBody& setResults(const Darabonba::Json & results) { DARABONBA_SET_VALUE(results_, results) };
    inline GetPipelineRunResponseBody& setResults(Darabonba::Json && results) { DARABONBA_SET_RVALUE(results_, results) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetPipelineRunResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPipelineRunResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stats Field Functions 
    bool hasStats() const { return this->stats_ != nullptr;};
    void deleteStats() { this->stats_ = nullptr;};
    inline     const Darabonba::Json & getStats() const { DARABONBA_GET(stats_) };
    Darabonba::Json & getStats() { DARABONBA_GET(stats_) };
    inline GetPipelineRunResponseBody& setStats(const Darabonba::Json & stats) { DARABONBA_SET_VALUE(stats_, stats) };
    inline GetPipelineRunResponseBody& setStats(Darabonba::Json && stats) { DARABONBA_SET_RVALUE(stats_, stats) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineRunResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline GetPipelineRunResponseBody& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline string getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, "") };
    inline GetPipelineRunResponseBody& setTriggerTime(string triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline GetPipelineRunResponseBody& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The name of the AgentSpace to which the pipeline belongs.
    shared_ptr<string> agentSpaceName_ {};
    // The current retry count.
    shared_ptr<int32_t> attempt_ {};
    // The semantic error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The finish time, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> finishTime_ {};
    // The start of the data window, in UNIX seconds.
    shared_ptr<int64_t> fromTime_ {};
    // The maximum number of retries.
    shared_ptr<int32_t> maxAttempts_ {};
    // The next retry time, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> nextRetryTime_ {};
    // The name of the pipeline.
    shared_ptr<string> pipelineName_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The inline run results. This field is returned only when output.inline is set to true at trigger time.
    Darabonba::Json results_ {};
    // Run Id
    shared_ptr<string> runId_ {};
    // The execution start time, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> startTime_ {};
    // The run statistics, including processedRows (number of processed rows), processedBytes (number of processed bytes), outputRows (number of output rows), outputBytes (number of output bytes), elapsedMs (elapsed time in milliseconds), cpuSec (CPU seconds), cpuCores (number of CPU cores), and tokenCount (number of tokens consumed).
    Darabonba::Json stats_ {};
    // The run status. Valid values:
    // - Pending
    // - Running
    // - Succeeded
    // - Failed
    // - Cancelled
    shared_ptr<string> status_ {};
    // The end of the data window, in UNIX seconds.
    shared_ptr<int64_t> toTime_ {};
    // The trigger time, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> triggerTime_ {};
    // The trigger type. Valid values:
    // - Scheduled
    // - Manual
    // - RunOnce
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
