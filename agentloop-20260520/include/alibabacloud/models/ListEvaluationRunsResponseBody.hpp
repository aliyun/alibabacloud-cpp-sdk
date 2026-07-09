// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRUNSRESPONSEBODY_HPP_
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
  class ListEvaluationRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(evaluationRuns, evaluationRuns_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(evaluationRuns, evaluationRuns_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListEvaluationRunsResponseBody() = default ;
    ListEvaluationRunsResponseBody(const ListEvaluationRunsResponseBody &) = default ;
    ListEvaluationRunsResponseBody(ListEvaluationRunsResponseBody &&) = default ;
    ListEvaluationRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationRunsResponseBody() = default ;
    ListEvaluationRunsResponseBody& operator=(const ListEvaluationRunsResponseBody &) = default ;
    ListEvaluationRunsResponseBody& operator=(ListEvaluationRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluationRuns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationRuns& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(dataEndTime, dataEndTime_);
        DARABONBA_PTR_TO_JSON(dataStartTime, dataStartTime_);
        DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(runName, runName_);
        DARABONBA_PTR_TO_JSON(runType, runType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationRuns& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(dataEndTime, dataEndTime_);
        DARABONBA_PTR_FROM_JSON(dataStartTime, dataStartTime_);
        DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(runName, runName_);
        DARABONBA_PTR_FROM_JSON(runType, runType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      EvaluationRuns() = default ;
      EvaluationRuns(const EvaluationRuns &) = default ;
      EvaluationRuns(EvaluationRuns &&) = default ;
      EvaluationRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationRuns() = default ;
      EvaluationRuns& operator=(const EvaluationRuns &) = default ;
      EvaluationRuns& operator=(EvaluationRuns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->dataEndTime_ == nullptr && this->dataStartTime_ == nullptr && this->failedCount_ == nullptr && this->runId_ == nullptr && this->runName_ == nullptr
        && this->runType_ == nullptr && this->status_ == nullptr && this->successCount_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr
        && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline EvaluationRuns& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // dataEndTime Field Functions 
      bool hasDataEndTime() const { return this->dataEndTime_ != nullptr;};
      void deleteDataEndTime() { this->dataEndTime_ = nullptr;};
      inline int64_t getDataEndTime() const { DARABONBA_PTR_GET_DEFAULT(dataEndTime_, 0L) };
      inline EvaluationRuns& setDataEndTime(int64_t dataEndTime) { DARABONBA_PTR_SET_VALUE(dataEndTime_, dataEndTime) };


      // dataStartTime Field Functions 
      bool hasDataStartTime() const { return this->dataStartTime_ != nullptr;};
      void deleteDataStartTime() { this->dataStartTime_ = nullptr;};
      inline int64_t getDataStartTime() const { DARABONBA_PTR_GET_DEFAULT(dataStartTime_, 0L) };
      inline EvaluationRuns& setDataStartTime(int64_t dataStartTime) { DARABONBA_PTR_SET_VALUE(dataStartTime_, dataStartTime) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline EvaluationRuns& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline EvaluationRuns& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // runName Field Functions 
      bool hasRunName() const { return this->runName_ != nullptr;};
      void deleteRunName() { this->runName_ = nullptr;};
      inline string getRunName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
      inline EvaluationRuns& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


      // runType Field Functions 
      bool hasRunType() const { return this->runType_ != nullptr;};
      void deleteRunType() { this->runType_ = nullptr;};
      inline string getRunType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
      inline EvaluationRuns& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EvaluationRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline EvaluationRuns& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline EvaluationRuns& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline EvaluationRuns& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline EvaluationRuns& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The creation time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> createdAt_ {};
      // The end time of the data window for this run, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> dataEndTime_ {};
      // The start time of the data window for this run, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> dataStartTime_ {};
      // The number of failed entries.
      shared_ptr<int32_t> failedCount_ {};
      // The run ID.
      shared_ptr<string> runId_ {};
      // The run name.
      shared_ptr<string> runName_ {};
      // The run type.
      shared_ptr<string> runType_ {};
      // The run status.
      shared_ptr<string> status_ {};
      // The number of successful entries.
      shared_ptr<int32_t> successCount_ {};
      // The evaluation task ID.
      shared_ptr<string> taskId_ {};
      // The total number of evaluation entries.
      shared_ptr<int32_t> totalCount_ {};
      // The update time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> updatedAt_ {};
    };

    virtual bool empty() const override { return this->evaluationRuns_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // evaluationRuns Field Functions 
    bool hasEvaluationRuns() const { return this->evaluationRuns_ != nullptr;};
    void deleteEvaluationRuns() { this->evaluationRuns_ = nullptr;};
    inline const vector<ListEvaluationRunsResponseBody::EvaluationRuns> & getEvaluationRuns() const { DARABONBA_PTR_GET_CONST(evaluationRuns_, vector<ListEvaluationRunsResponseBody::EvaluationRuns>) };
    inline vector<ListEvaluationRunsResponseBody::EvaluationRuns> getEvaluationRuns() { DARABONBA_PTR_GET(evaluationRuns_, vector<ListEvaluationRunsResponseBody::EvaluationRuns>) };
    inline ListEvaluationRunsResponseBody& setEvaluationRuns(const vector<ListEvaluationRunsResponseBody::EvaluationRuns> & evaluationRuns) { DARABONBA_PTR_SET_VALUE(evaluationRuns_, evaluationRuns) };
    inline ListEvaluationRunsResponseBody& setEvaluationRuns(vector<ListEvaluationRunsResponseBody::EvaluationRuns> && evaluationRuns) { DARABONBA_PTR_SET_RVALUE(evaluationRuns_, evaluationRuns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEvaluationRunsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluationRunsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEvaluationRunsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of run summaries.
    shared_ptr<vector<ListEvaluationRunsResponseBody::EvaluationRuns>> evaluationRuns_ {};
    // The number of entries per page used in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more pages exist.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of runs that match the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
