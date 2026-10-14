// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPTIMIZERUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPTIMIZERUNSRESPONSEBODY_HPP_
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
  class ListOptimizeRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOptimizeRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(optimizeRuns, optimizeRuns_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOptimizeRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(optimizeRuns, optimizeRuns_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListOptimizeRunsResponseBody() = default ;
    ListOptimizeRunsResponseBody(const ListOptimizeRunsResponseBody &) = default ;
    ListOptimizeRunsResponseBody(ListOptimizeRunsResponseBody &&) = default ;
    ListOptimizeRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOptimizeRunsResponseBody() = default ;
    ListOptimizeRunsResponseBody& operator=(const ListOptimizeRunsResponseBody &) = default ;
    ListOptimizeRunsResponseBody& operator=(ListOptimizeRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OptimizeRuns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OptimizeRuns& obj) { 
        DARABONBA_PTR_TO_JSON(attemptCount, attemptCount_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(currentStage, currentStage_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_ANY_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(maxAttempts, maxAttempts_);
        DARABONBA_PTR_TO_JSON(optimizeRunId, optimizeRunId_);
        DARABONBA_PTR_TO_JSON(optimizeTaskName, optimizeTaskName_);
        DARABONBA_ANY_TO_JSON(progress, progress_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(trajectoryCount, trajectoryCount_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(windowEndTime, windowEndTime_);
        DARABONBA_PTR_TO_JSON(windowStartTime, windowStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, OptimizeRuns& obj) { 
        DARABONBA_PTR_FROM_JSON(attemptCount, attemptCount_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(currentStage, currentStage_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_ANY_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(maxAttempts, maxAttempts_);
        DARABONBA_PTR_FROM_JSON(optimizeRunId, optimizeRunId_);
        DARABONBA_PTR_FROM_JSON(optimizeTaskName, optimizeTaskName_);
        DARABONBA_ANY_FROM_JSON(progress, progress_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(trajectoryCount, trajectoryCount_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(windowEndTime, windowEndTime_);
        DARABONBA_PTR_FROM_JSON(windowStartTime, windowStartTime_);
      };
      OptimizeRuns() = default ;
      OptimizeRuns(const OptimizeRuns &) = default ;
      OptimizeRuns(OptimizeRuns &&) = default ;
      OptimizeRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OptimizeRuns() = default ;
      OptimizeRuns& operator=(const OptimizeRuns &) = default ;
      OptimizeRuns& operator=(OptimizeRuns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attemptCount_ == nullptr
        && this->createTime_ == nullptr && this->currentStage_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->extra_ == nullptr
        && this->finishTime_ == nullptr && this->maxAttempts_ == nullptr && this->optimizeRunId_ == nullptr && this->optimizeTaskName_ == nullptr && this->progress_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->trajectoryCount_ == nullptr && this->triggerType_ == nullptr && this->type_ == nullptr
        && this->windowEndTime_ == nullptr && this->windowStartTime_ == nullptr; };
      // attemptCount Field Functions 
      bool hasAttemptCount() const { return this->attemptCount_ != nullptr;};
      void deleteAttemptCount() { this->attemptCount_ = nullptr;};
      inline int32_t getAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(attemptCount_, 0) };
      inline OptimizeRuns& setAttemptCount(int32_t attemptCount) { DARABONBA_PTR_SET_VALUE(attemptCount_, attemptCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline OptimizeRuns& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentStage Field Functions 
      bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
      void deleteCurrentStage() { this->currentStage_ = nullptr;};
      inline string getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
      inline OptimizeRuns& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline OptimizeRuns& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline OptimizeRuns& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline       const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
      Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
      inline OptimizeRuns& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
      inline OptimizeRuns& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline OptimizeRuns& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // maxAttempts Field Functions 
      bool hasMaxAttempts() const { return this->maxAttempts_ != nullptr;};
      void deleteMaxAttempts() { this->maxAttempts_ = nullptr;};
      inline int32_t getMaxAttempts() const { DARABONBA_PTR_GET_DEFAULT(maxAttempts_, 0) };
      inline OptimizeRuns& setMaxAttempts(int32_t maxAttempts) { DARABONBA_PTR_SET_VALUE(maxAttempts_, maxAttempts) };


      // optimizeRunId Field Functions 
      bool hasOptimizeRunId() const { return this->optimizeRunId_ != nullptr;};
      void deleteOptimizeRunId() { this->optimizeRunId_ = nullptr;};
      inline string getOptimizeRunId() const { DARABONBA_PTR_GET_DEFAULT(optimizeRunId_, "") };
      inline OptimizeRuns& setOptimizeRunId(string optimizeRunId) { DARABONBA_PTR_SET_VALUE(optimizeRunId_, optimizeRunId) };


      // optimizeTaskName Field Functions 
      bool hasOptimizeTaskName() const { return this->optimizeTaskName_ != nullptr;};
      void deleteOptimizeTaskName() { this->optimizeTaskName_ = nullptr;};
      inline string getOptimizeTaskName() const { DARABONBA_PTR_GET_DEFAULT(optimizeTaskName_, "") };
      inline OptimizeRuns& setOptimizeTaskName(string optimizeTaskName) { DARABONBA_PTR_SET_VALUE(optimizeTaskName_, optimizeTaskName) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline       const Darabonba::Json & getProgress() const { DARABONBA_GET(progress_) };
      Darabonba::Json & getProgress() { DARABONBA_GET(progress_) };
      inline OptimizeRuns& setProgress(const Darabonba::Json & progress) { DARABONBA_SET_VALUE(progress_, progress) };
      inline OptimizeRuns& setProgress(Darabonba::Json && progress) { DARABONBA_SET_RVALUE(progress_, progress) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline OptimizeRuns& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OptimizeRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trajectoryCount Field Functions 
      bool hasTrajectoryCount() const { return this->trajectoryCount_ != nullptr;};
      void deleteTrajectoryCount() { this->trajectoryCount_ = nullptr;};
      inline int64_t getTrajectoryCount() const { DARABONBA_PTR_GET_DEFAULT(trajectoryCount_, 0L) };
      inline OptimizeRuns& setTrajectoryCount(int64_t trajectoryCount) { DARABONBA_PTR_SET_VALUE(trajectoryCount_, trajectoryCount) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline OptimizeRuns& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OptimizeRuns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // windowEndTime Field Functions 
      bool hasWindowEndTime() const { return this->windowEndTime_ != nullptr;};
      void deleteWindowEndTime() { this->windowEndTime_ = nullptr;};
      inline int64_t getWindowEndTime() const { DARABONBA_PTR_GET_DEFAULT(windowEndTime_, 0L) };
      inline OptimizeRuns& setWindowEndTime(int64_t windowEndTime) { DARABONBA_PTR_SET_VALUE(windowEndTime_, windowEndTime) };


      // windowStartTime Field Functions 
      bool hasWindowStartTime() const { return this->windowStartTime_ != nullptr;};
      void deleteWindowStartTime() { this->windowStartTime_ = nullptr;};
      inline int64_t getWindowStartTime() const { DARABONBA_PTR_GET_DEFAULT(windowStartTime_, 0L) };
      inline OptimizeRuns& setWindowStartTime(int64_t windowStartTime) { DARABONBA_PTR_SET_VALUE(windowStartTime_, windowStartTime) };


    protected:
      // The number of executed attempts.
      shared_ptr<int32_t> attemptCount_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The current execution stage.
      shared_ptr<string> currentStage_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The execution summary and finite-state information. To obtain complete result references, frozen outputs, and publish receipts, call GetOptimizeRun.
      Darabonba::Json extra_ {};
      // The completion time.
      shared_ptr<string> finishTime_ {};
      // The maximum number of attempts.
      shared_ptr<int32_t> maxAttempts_ {};
      // The ID of the run instance.
      shared_ptr<string> optimizeRunId_ {};
      // The name of the optimization task.
      shared_ptr<string> optimizeTaskName_ {};
      // The current execution progress. The fields are defined by the task type.
      Darabonba::Json progress_ {};
      // The initial start time.
      shared_ptr<string> startTime_ {};
      // The execution status.
      shared_ptr<string> status_ {};
      // The number of analysis trajectories.
      shared_ptr<int64_t> trajectoryCount_ {};
      // The trigger type.
      shared_ptr<string> triggerType_ {};
      // The snapshot of the task type.
      shared_ptr<string> type_ {};
      // The end time of the analysis window in UNIX seconds.
      shared_ptr<int64_t> windowEndTime_ {};
      // The start time of the analysis window in UNIX seconds.
      shared_ptr<int64_t> windowStartTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->optimizeRuns_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOptimizeRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOptimizeRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // optimizeRuns Field Functions 
    bool hasOptimizeRuns() const { return this->optimizeRuns_ != nullptr;};
    void deleteOptimizeRuns() { this->optimizeRuns_ = nullptr;};
    inline const vector<ListOptimizeRunsResponseBody::OptimizeRuns> & getOptimizeRuns() const { DARABONBA_PTR_GET_CONST(optimizeRuns_, vector<ListOptimizeRunsResponseBody::OptimizeRuns>) };
    inline vector<ListOptimizeRunsResponseBody::OptimizeRuns> getOptimizeRuns() { DARABONBA_PTR_GET(optimizeRuns_, vector<ListOptimizeRunsResponseBody::OptimizeRuns>) };
    inline ListOptimizeRunsResponseBody& setOptimizeRuns(const vector<ListOptimizeRunsResponseBody::OptimizeRuns> & optimizeRuns) { DARABONBA_PTR_SET_VALUE(optimizeRuns_, optimizeRuns) };
    inline ListOptimizeRunsResponseBody& setOptimizeRuns(vector<ListOptimizeRunsResponseBody::OptimizeRuns> && optimizeRuns) { DARABONBA_PTR_SET_RVALUE(optimizeRuns_, optimizeRuns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOptimizeRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOptimizeRunsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page.
    shared_ptr<string> nextToken_ {};
    // The list of run instances.
    shared_ptr<vector<ListOptimizeRunsResponseBody::OptimizeRuns>> optimizeRuns_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
