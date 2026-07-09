// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATIONRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATIONRUNRESPONSEBODY_HPP_
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
  class GetEvaluationRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluationRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dataEndTime, dataEndTime_);
      DARABONBA_PTR_TO_JSON(dataStartTime, dataStartTime_);
      DARABONBA_PTR_TO_JSON(evaluatorProgress, evaluatorProgress_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(runName, runName_);
      DARABONBA_PTR_TO_JSON(runType, runType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(successCount, successCount_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluationRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dataEndTime, dataEndTime_);
      DARABONBA_PTR_FROM_JSON(dataStartTime, dataStartTime_);
      DARABONBA_PTR_FROM_JSON(evaluatorProgress, evaluatorProgress_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(runName, runName_);
      DARABONBA_PTR_FROM_JSON(runType, runType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(successCount, successCount_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    GetEvaluationRunResponseBody() = default ;
    GetEvaluationRunResponseBody(const GetEvaluationRunResponseBody &) = default ;
    GetEvaluationRunResponseBody(GetEvaluationRunResponseBody &&) = default ;
    GetEvaluationRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluationRunResponseBody() = default ;
    GetEvaluationRunResponseBody& operator=(const GetEvaluationRunResponseBody &) = default ;
    GetEvaluationRunResponseBody& operator=(GetEvaluationRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluatorProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluatorProgress& obj) { 
        DARABONBA_PTR_TO_JSON(evaluatorName, evaluatorName_);
        DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluatorProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(evaluatorName, evaluatorName_);
        DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      EvaluatorProgress() = default ;
      EvaluatorProgress(const EvaluatorProgress &) = default ;
      EvaluatorProgress(EvaluatorProgress &&) = default ;
      EvaluatorProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluatorProgress() = default ;
      EvaluatorProgress& operator=(const EvaluatorProgress &) = default ;
      EvaluatorProgress& operator=(EvaluatorProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->evaluatorName_ == nullptr
        && this->failedCount_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
      // evaluatorName Field Functions 
      bool hasEvaluatorName() const { return this->evaluatorName_ != nullptr;};
      void deleteEvaluatorName() { this->evaluatorName_ = nullptr;};
      inline string getEvaluatorName() const { DARABONBA_PTR_GET_DEFAULT(evaluatorName_, "") };
      inline EvaluatorProgress& setEvaluatorName(string evaluatorName) { DARABONBA_PTR_SET_VALUE(evaluatorName_, evaluatorName) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline EvaluatorProgress& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline EvaluatorProgress& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline EvaluatorProgress& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The evaluator name.
      shared_ptr<string> evaluatorName_ {};
      // The number of failed entries for this evaluator.
      shared_ptr<int32_t> failedCount_ {};
      // The number of successful entries for this evaluator.
      shared_ptr<int32_t> successCount_ {};
      // The total number of entries for this evaluator.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->dataEndTime_ == nullptr && this->dataStartTime_ == nullptr && this->evaluatorProgress_ == nullptr && this->evaluators_ == nullptr && this->failedCount_ == nullptr
        && this->requestId_ == nullptr && this->runId_ == nullptr && this->runName_ == nullptr && this->runType_ == nullptr && this->status_ == nullptr
        && this->successCount_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetEvaluationRunResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dataEndTime Field Functions 
    bool hasDataEndTime() const { return this->dataEndTime_ != nullptr;};
    void deleteDataEndTime() { this->dataEndTime_ = nullptr;};
    inline int64_t getDataEndTime() const { DARABONBA_PTR_GET_DEFAULT(dataEndTime_, 0L) };
    inline GetEvaluationRunResponseBody& setDataEndTime(int64_t dataEndTime) { DARABONBA_PTR_SET_VALUE(dataEndTime_, dataEndTime) };


    // dataStartTime Field Functions 
    bool hasDataStartTime() const { return this->dataStartTime_ != nullptr;};
    void deleteDataStartTime() { this->dataStartTime_ = nullptr;};
    inline int64_t getDataStartTime() const { DARABONBA_PTR_GET_DEFAULT(dataStartTime_, 0L) };
    inline GetEvaluationRunResponseBody& setDataStartTime(int64_t dataStartTime) { DARABONBA_PTR_SET_VALUE(dataStartTime_, dataStartTime) };


    // evaluatorProgress Field Functions 
    bool hasEvaluatorProgress() const { return this->evaluatorProgress_ != nullptr;};
    void deleteEvaluatorProgress() { this->evaluatorProgress_ = nullptr;};
    inline const vector<GetEvaluationRunResponseBody::EvaluatorProgress> & getEvaluatorProgress() const { DARABONBA_PTR_GET_CONST(evaluatorProgress_, vector<GetEvaluationRunResponseBody::EvaluatorProgress>) };
    inline vector<GetEvaluationRunResponseBody::EvaluatorProgress> getEvaluatorProgress() { DARABONBA_PTR_GET(evaluatorProgress_, vector<GetEvaluationRunResponseBody::EvaluatorProgress>) };
    inline GetEvaluationRunResponseBody& setEvaluatorProgress(const vector<GetEvaluationRunResponseBody::EvaluatorProgress> & evaluatorProgress) { DARABONBA_PTR_SET_VALUE(evaluatorProgress_, evaluatorProgress) };
    inline GetEvaluationRunResponseBody& setEvaluatorProgress(vector<GetEvaluationRunResponseBody::EvaluatorProgress> && evaluatorProgress) { DARABONBA_PTR_SET_RVALUE(evaluatorProgress_, evaluatorProgress) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline string getEvaluators() const { DARABONBA_PTR_GET_DEFAULT(evaluators_, "") };
    inline GetEvaluationRunResponseBody& setEvaluators(string evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline GetEvaluationRunResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEvaluationRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetEvaluationRunResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runName Field Functions 
    bool hasRunName() const { return this->runName_ != nullptr;};
    void deleteRunName() { this->runName_ = nullptr;};
    inline string getRunName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
    inline GetEvaluationRunResponseBody& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string getRunType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline GetEvaluationRunResponseBody& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEvaluationRunResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline GetEvaluationRunResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEvaluationRunResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetEvaluationRunResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetEvaluationRunResponseBody& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The creation time, in seconds-level UNIX timestamp.
    shared_ptr<int64_t> createdAt_ {};
    // The end time of the data window for the run, in seconds-level UNIX timestamp.
    shared_ptr<int64_t> dataEndTime_ {};
    // The start time of the data window for the run, in seconds-level UNIX timestamp.
    shared_ptr<int64_t> dataStartTime_ {};
    // The list of progress details by evaluator.
    shared_ptr<vector<GetEvaluationRunResponseBody::EvaluatorProgress>> evaluatorProgress_ {};
    // The evaluator configuration snapshot at the time the run was created, in JSON string format.
    shared_ptr<string> evaluators_ {};
    // The number of failed entries.
    shared_ptr<int32_t> failedCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
