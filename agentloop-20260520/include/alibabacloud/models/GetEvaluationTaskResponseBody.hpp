// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/Evaluator.hpp>
#include <alibabacloud/models/RunStrategies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetEvaluationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runStrategyConfig, runStrategyConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runStrategyConfig, runStrategyConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    GetEvaluationTaskResponseBody() = default ;
    GetEvaluationTaskResponseBody(const GetEvaluationTaskResponseBody &) = default ;
    GetEvaluationTaskResponseBody(GetEvaluationTaskResponseBody &&) = default ;
    GetEvaluationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluationTaskResponseBody() = default ;
    GetEvaluationTaskResponseBody& operator=(const GetEvaluationTaskResponseBody &) = default ;
    GetEvaluationTaskResponseBody& operator=(GetEvaluationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->channel_ == nullptr && this->config_ == nullptr && this->createdAt_ == nullptr && this->dataFilter_ == nullptr && this->dataType_ == nullptr
        && this->description_ == nullptr && this->evaluators_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->runStrategyConfig_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr && this->taskMode_ == nullptr && this->taskName_ == nullptr
        && this->updatedAt_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline GetEvaluationTaskResponseBody& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetEvaluationTaskResponseBody& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline GetEvaluationTaskResponseBody& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetEvaluationTaskResponseBody& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetEvaluationTaskResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dataFilter Field Functions 
    bool hasDataFilter() const { return this->dataFilter_ != nullptr;};
    void deleteDataFilter() { this->dataFilter_ = nullptr;};
    inline string getDataFilter() const { DARABONBA_PTR_GET_DEFAULT(dataFilter_, "") };
    inline GetEvaluationTaskResponseBody& setDataFilter(string dataFilter) { DARABONBA_PTR_SET_VALUE(dataFilter_, dataFilter) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetEvaluationTaskResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEvaluationTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline GetEvaluationTaskResponseBody& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline GetEvaluationTaskResponseBody& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEvaluationTaskResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEvaluationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runStrategyConfig Field Functions 
    bool hasRunStrategyConfig() const { return this->runStrategyConfig_ != nullptr;};
    void deleteRunStrategyConfig() { this->runStrategyConfig_ = nullptr;};
    inline const RunStrategies & getRunStrategyConfig() const { DARABONBA_PTR_GET_CONST(runStrategyConfig_, RunStrategies) };
    inline RunStrategies getRunStrategyConfig() { DARABONBA_PTR_GET(runStrategyConfig_, RunStrategies) };
    inline GetEvaluationTaskResponseBody& setRunStrategyConfig(const RunStrategies & runStrategyConfig) { DARABONBA_PTR_SET_VALUE(runStrategyConfig_, runStrategyConfig) };
    inline GetEvaluationTaskResponseBody& setRunStrategyConfig(RunStrategies && runStrategyConfig) { DARABONBA_PTR_SET_RVALUE(runStrategyConfig_, runStrategyConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEvaluationTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline GetEvaluationTaskResponseBody& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEvaluationTaskResponseBody& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEvaluationTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskMode Field Functions 
    bool hasTaskMode() const { return this->taskMode_ != nullptr;};
    void deleteTaskMode() { this->taskMode_ = nullptr;};
    inline string getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, "") };
    inline GetEvaluationTaskResponseBody& setTaskMode(string taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetEvaluationTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetEvaluationTaskResponseBody& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The AgentSpace name.
    shared_ptr<string> agentSpace_ {};
    // The task source.
    shared_ptr<string> channel_ {};
    // The data source and execution configuration. Tasks with `dataType=trace` typically include `project`, `storeName`, and `dataScope` fields populated by the backend.
    shared_ptr<map<string, string>> config_ {};
    // The creation time, in seconds-level UNIX timestamp.
    shared_ptr<int64_t> createdAt_ {};
    // The filter conditions for evaluation data, returned by the backend as a JSON string.
    shared_ptr<string> dataFilter_ {};
    // The data source type of the evaluation object.
    shared_ptr<string> dataType_ {};
    // The evaluation task description.
    shared_ptr<string> description_ {};
    // The list of evaluator configurations.
    shared_ptr<vector<Evaluator>> evaluators_ {};
    // The region to which the task belongs.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The structured configuration of the run strategy, including the parsed backfill strategy and continuous evaluation strategy.
    shared_ptr<RunStrategies> runStrategyConfig_ {};
    // The evaluation task status.
    shared_ptr<string> status_ {};
    // The key-value pairs of task tags. Empty if not set.
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
