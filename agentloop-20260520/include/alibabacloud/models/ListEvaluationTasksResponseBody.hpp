// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RunStrategies.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListEvaluationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(evaluationTasks, evaluationTasks_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(evaluationTasks, evaluationTasks_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListEvaluationTasksResponseBody() = default ;
    ListEvaluationTasksResponseBody(const ListEvaluationTasksResponseBody &) = default ;
    ListEvaluationTasksResponseBody(ListEvaluationTasksResponseBody &&) = default ;
    ListEvaluationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationTasksResponseBody() = default ;
    ListEvaluationTasksResponseBody& operator=(const ListEvaluationTasksResponseBody &) = default ;
    ListEvaluationTasksResponseBody& operator=(ListEvaluationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluationTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationTasks& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(dataType, dataType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
        DARABONBA_PTR_TO_JSON(runStrategyConfig, runStrategyConfig_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(dataType, dataType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
        DARABONBA_PTR_FROM_JSON(runStrategyConfig, runStrategyConfig_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      EvaluationTasks() = default ;
      EvaluationTasks(const EvaluationTasks &) = default ;
      EvaluationTasks(EvaluationTasks &&) = default ;
      EvaluationTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationTasks() = default ;
      EvaluationTasks& operator=(const EvaluationTasks &) = default ;
      EvaluationTasks& operator=(EvaluationTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->createdAt_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->evaluators_ == nullptr && this->runStrategyConfig_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr && this->taskMode_ == nullptr && this->taskName_ == nullptr
        && this->updatedAt_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
      inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
      inline EvaluationTasks& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline EvaluationTasks& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline EvaluationTasks& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline EvaluationTasks& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EvaluationTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // evaluators Field Functions 
      bool hasEvaluators() const { return this->evaluators_ != nullptr;};
      void deleteEvaluators() { this->evaluators_ = nullptr;};
      inline string getEvaluators() const { DARABONBA_PTR_GET_DEFAULT(evaluators_, "") };
      inline EvaluationTasks& setEvaluators(string evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };


      // runStrategyConfig Field Functions 
      bool hasRunStrategyConfig() const { return this->runStrategyConfig_ != nullptr;};
      void deleteRunStrategyConfig() { this->runStrategyConfig_ = nullptr;};
      inline const RunStrategies & getRunStrategyConfig() const { DARABONBA_PTR_GET_CONST(runStrategyConfig_, RunStrategies) };
      inline RunStrategies getRunStrategyConfig() { DARABONBA_PTR_GET(runStrategyConfig_, RunStrategies) };
      inline EvaluationTasks& setRunStrategyConfig(const RunStrategies & runStrategyConfig) { DARABONBA_PTR_SET_VALUE(runStrategyConfig_, runStrategyConfig) };
      inline EvaluationTasks& setRunStrategyConfig(RunStrategies && runStrategyConfig) { DARABONBA_PTR_SET_RVALUE(runStrategyConfig_, runStrategyConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EvaluationTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
      inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
      inline EvaluationTasks& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline EvaluationTasks& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline EvaluationTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskMode Field Functions 
      bool hasTaskMode() const { return this->taskMode_ != nullptr;};
      void deleteTaskMode() { this->taskMode_ = nullptr;};
      inline string getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, "") };
      inline EvaluationTasks& setTaskMode(string taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline EvaluationTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline EvaluationTasks& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The data source and execution configuration summary.
      shared_ptr<map<string, string>> config_ {};
      // The creation time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> createdAt_ {};
      // The data source type of the evaluation object.
      shared_ptr<string> dataType_ {};
      // The evaluation task description.
      shared_ptr<string> description_ {};
      // The evaluator configuration summary, in JSON string format.
      shared_ptr<string> evaluators_ {};
      // The structured run strategy configuration, including the parsed backfill strategy and continuous evaluation strategy.
      shared_ptr<RunStrategies> runStrategyConfig_ {};
      // The evaluation task status.
      shared_ptr<string> status_ {};
      // The key-value pairs of task tags. This parameter is empty if no tags are set.
      shared_ptr<map<string, string>> tags_ {};
      // The evaluation task ID.
      shared_ptr<string> taskId_ {};
      // The evaluation task mode.
      shared_ptr<string> taskMode_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The last update time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> updatedAt_ {};
    };

    virtual bool empty() const override { return this->evaluationTasks_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // evaluationTasks Field Functions 
    bool hasEvaluationTasks() const { return this->evaluationTasks_ != nullptr;};
    void deleteEvaluationTasks() { this->evaluationTasks_ = nullptr;};
    inline const vector<ListEvaluationTasksResponseBody::EvaluationTasks> & getEvaluationTasks() const { DARABONBA_PTR_GET_CONST(evaluationTasks_, vector<ListEvaluationTasksResponseBody::EvaluationTasks>) };
    inline vector<ListEvaluationTasksResponseBody::EvaluationTasks> getEvaluationTasks() { DARABONBA_PTR_GET(evaluationTasks_, vector<ListEvaluationTasksResponseBody::EvaluationTasks>) };
    inline ListEvaluationTasksResponseBody& setEvaluationTasks(const vector<ListEvaluationTasksResponseBody::EvaluationTasks> & evaluationTasks) { DARABONBA_PTR_SET_VALUE(evaluationTasks_, evaluationTasks) };
    inline ListEvaluationTasksResponseBody& setEvaluationTasks(vector<ListEvaluationTasksResponseBody::EvaluationTasks> && evaluationTasks) { DARABONBA_PTR_SET_RVALUE(evaluationTasks_, evaluationTasks) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEvaluationTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluationTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEvaluationTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of evaluation task summaries.
    shared_ptr<vector<ListEvaluationTasksResponseBody::EvaluationTasks>> evaluationTasks_ {};
    // The number of entries per page used in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records. The total count is returned only on the first page. This value may be empty on subsequent pages.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
