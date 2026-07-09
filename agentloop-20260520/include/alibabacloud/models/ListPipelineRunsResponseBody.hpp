// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListPipelineRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runs, runs_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runs, runs_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPipelineRunsResponseBody() = default ;
    ListPipelineRunsResponseBody(const ListPipelineRunsResponseBody &) = default ;
    ListPipelineRunsResponseBody(ListPipelineRunsResponseBody &&) = default ;
    ListPipelineRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunsResponseBody() = default ;
    ListPipelineRunsResponseBody& operator=(const ListPipelineRunsResponseBody &) = default ;
    ListPipelineRunsResponseBody& operator=(ListPipelineRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Runs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Runs& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpaceName, agentSpaceName_);
        DARABONBA_PTR_TO_JSON(attempt, attempt_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
        DARABONBA_PTR_TO_JSON(maxAttempts, maxAttempts_);
        DARABONBA_PTR_TO_JSON(nextRetryTime, nextRetryTime_);
        DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_ANY_TO_JSON(stats, stats_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(toTime, toTime_);
        DARABONBA_PTR_TO_JSON(triggerTime, triggerTime_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Runs& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpaceName, agentSpaceName_);
        DARABONBA_PTR_FROM_JSON(attempt, attempt_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
        DARABONBA_PTR_FROM_JSON(maxAttempts, maxAttempts_);
        DARABONBA_PTR_FROM_JSON(nextRetryTime, nextRetryTime_);
        DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_ANY_FROM_JSON(stats, stats_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(toTime, toTime_);
        DARABONBA_PTR_FROM_JSON(triggerTime, triggerTime_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
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
      virtual bool empty() const override { return this->agentSpaceName_ == nullptr
        && this->attempt_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->finishTime_ == nullptr && this->fromTime_ == nullptr
        && this->maxAttempts_ == nullptr && this->nextRetryTime_ == nullptr && this->pipelineName_ == nullptr && this->runId_ == nullptr && this->startTime_ == nullptr
        && this->stats_ == nullptr && this->status_ == nullptr && this->toTime_ == nullptr && this->triggerTime_ == nullptr && this->triggerType_ == nullptr; };
      // agentSpaceName Field Functions 
      bool hasAgentSpaceName() const { return this->agentSpaceName_ != nullptr;};
      void deleteAgentSpaceName() { this->agentSpaceName_ = nullptr;};
      inline string getAgentSpaceName() const { DARABONBA_PTR_GET_DEFAULT(agentSpaceName_, "") };
      inline Runs& setAgentSpaceName(string agentSpaceName) { DARABONBA_PTR_SET_VALUE(agentSpaceName_, agentSpaceName) };


      // attempt Field Functions 
      bool hasAttempt() const { return this->attempt_ != nullptr;};
      void deleteAttempt() { this->attempt_ = nullptr;};
      inline int32_t getAttempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
      inline Runs& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Runs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Runs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Runs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // fromTime Field Functions 
      bool hasFromTime() const { return this->fromTime_ != nullptr;};
      void deleteFromTime() { this->fromTime_ = nullptr;};
      inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
      inline Runs& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


      // maxAttempts Field Functions 
      bool hasMaxAttempts() const { return this->maxAttempts_ != nullptr;};
      void deleteMaxAttempts() { this->maxAttempts_ = nullptr;};
      inline int32_t getMaxAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAttempts_, 0) };
      inline Runs& setMaxAttempts(int32_t maxAttempts) { DARABONBA_PTR_SET_VALUE(maxAttempts_, maxAttempts) };


      // nextRetryTime Field Functions 
      bool hasNextRetryTime() const { return this->nextRetryTime_ != nullptr;};
      void deleteNextRetryTime() { this->nextRetryTime_ = nullptr;};
      inline string getNextRetryTime() const { DARABONBA_PTR_GET_DEFAULT(nextRetryTime_, "") };
      inline Runs& setNextRetryTime(string nextRetryTime) { DARABONBA_PTR_SET_VALUE(nextRetryTime_, nextRetryTime) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline Runs& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Runs& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Runs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // stats Field Functions 
      bool hasStats() const { return this->stats_ != nullptr;};
      void deleteStats() { this->stats_ = nullptr;};
      inline       const Darabonba::Json & getStats() const { DARABONBA_GET(stats_) };
      Darabonba::Json & getStats() { DARABONBA_GET(stats_) };
      inline Runs& setStats(const Darabonba::Json & stats) { DARABONBA_SET_VALUE(stats_, stats) };
      inline Runs& setStats(Darabonba::Json && stats) { DARABONBA_SET_RVALUE(stats_, stats) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Runs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // toTime Field Functions 
      bool hasToTime() const { return this->toTime_ != nullptr;};
      void deleteToTime() { this->toTime_ = nullptr;};
      inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
      inline Runs& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


      // triggerTime Field Functions 
      bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
      void deleteTriggerTime() { this->triggerTime_ = nullptr;};
      inline string getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, "") };
      inline Runs& setTriggerTime(string triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Runs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The name of the AgentSpace to which the run belongs.
      shared_ptr<string> agentSpaceName_ {};
      // The current retry count.
      shared_ptr<int32_t> attempt_ {};
      // The semantic error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The finish time in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> finishTime_ {};
      // The start of the data window, in UNIX seconds.
      shared_ptr<int64_t> fromTime_ {};
      // The maximum number of retries.
      shared_ptr<int32_t> maxAttempts_ {};
      // The next retry time in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> nextRetryTime_ {};
      // The name of the pipeline.
      shared_ptr<string> pipelineName_ {};
      // Run Id
      shared_ptr<string> runId_ {};
      // The execution start time in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> startTime_ {};
      // The run statistics, including processedRows (number of processed rows), processedBytes (number of processed bytes), outputRows (number of output rows), outputBytes (number of output bytes), elapsedMs (elapsed time in milliseconds), cpuSec (CPU seconds), cpuCores (number of CPU cores), and tokenCount (number of tokens consumed).
      Darabonba::Json stats_ {};
      // The run status. Valid values: Pending, Running, Succeeded, Failed, and Cancelled.
      shared_ptr<string> status_ {};
      // The end of the data window, in UNIX seconds.
      shared_ptr<int64_t> toTime_ {};
      // The trigger time in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> triggerTime_ {};
      // The trigger type. Valid values: Scheduled, Manual, and RunOnce.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->runs_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPipelineRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelineRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelineRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runs Field Functions 
    bool hasRuns() const { return this->runs_ != nullptr;};
    void deleteRuns() { this->runs_ = nullptr;};
    inline const vector<ListPipelineRunsResponseBody::Runs> & getRuns() const { DARABONBA_PTR_GET_CONST(runs_, vector<ListPipelineRunsResponseBody::Runs>) };
    inline vector<ListPipelineRunsResponseBody::Runs> getRuns() { DARABONBA_PTR_GET(runs_, vector<ListPipelineRunsResponseBody::Runs>) };
    inline ListPipelineRunsResponseBody& setRuns(const vector<ListPipelineRunsResponseBody::Runs> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
    inline ListPipelineRunsResponseBody& setRuns(vector<ListPipelineRunsResponseBody::Runs> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPipelineRunsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page specified in the request. This value is echoed back.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page. An empty string indicates that the current page is the last page.
    shared_ptr<string> nextToken_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of pipeline runs.
    shared_ptr<vector<ListPipelineRunsResponseBody::Runs>> runs_ {};
    // The total number of pipeline runs that match the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
