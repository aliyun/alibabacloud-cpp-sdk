// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVALUATIONTASKREQUEST_HPP_
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
  class CreateEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(runStrategies, runStrategies_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(runStrategies, runStrategies_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateEvaluationTaskRequest() = default ;
    CreateEvaluationTaskRequest(const CreateEvaluationTaskRequest &) = default ;
    CreateEvaluationTaskRequest(CreateEvaluationTaskRequest &&) = default ;
    CreateEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEvaluationTaskRequest() = default ;
    CreateEvaluationTaskRequest& operator=(const CreateEvaluationTaskRequest &) = default ;
    CreateEvaluationTaskRequest& operator=(CreateEvaluationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->config_ == nullptr && this->dataFilter_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->evaluators_ == nullptr
        && this->runStrategies_ == nullptr && this->tags_ == nullptr && this->taskMode_ == nullptr && this->taskName_ == nullptr && this->clientToken_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline CreateEvaluationTaskRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline CreateEvaluationTaskRequest& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateEvaluationTaskRequest& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataFilter Field Functions 
    bool hasDataFilter() const { return this->dataFilter_ != nullptr;};
    void deleteDataFilter() { this->dataFilter_ = nullptr;};
    inline string getDataFilter() const { DARABONBA_PTR_GET_DEFAULT(dataFilter_, "") };
    inline CreateEvaluationTaskRequest& setDataFilter(string dataFilter) { DARABONBA_PTR_SET_VALUE(dataFilter_, dataFilter) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateEvaluationTaskRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEvaluationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline CreateEvaluationTaskRequest& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline CreateEvaluationTaskRequest& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // runStrategies Field Functions 
    bool hasRunStrategies() const { return this->runStrategies_ != nullptr;};
    void deleteRunStrategies() { this->runStrategies_ = nullptr;};
    inline const RunStrategies & getRunStrategies() const { DARABONBA_PTR_GET_CONST(runStrategies_, RunStrategies) };
    inline RunStrategies getRunStrategies() { DARABONBA_PTR_GET(runStrategies_, RunStrategies) };
    inline CreateEvaluationTaskRequest& setRunStrategies(const RunStrategies & runStrategies) { DARABONBA_PTR_SET_VALUE(runStrategies_, runStrategies) };
    inline CreateEvaluationTaskRequest& setRunStrategies(RunStrategies && runStrategies) { DARABONBA_PTR_SET_RVALUE(runStrategies_, runStrategies) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline CreateEvaluationTaskRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEvaluationTaskRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskMode Field Functions 
    bool hasTaskMode() const { return this->taskMode_ != nullptr;};
    void deleteTaskMode() { this->taskMode_ = nullptr;};
    inline string getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, "") };
    inline CreateEvaluationTaskRequest& setTaskMode(string taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateEvaluationTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEvaluationTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The task source. If this parameter is not specified, the backend uses `default`.
    shared_ptr<string> channel_ {};
    // The data source and execution configuration. When `dataType` is set to `trace`, the backend automatically populates the SLS Project and sets `storeName` to `logstore-tracing`. For trace-level evaluation, set `dataScope` to `trace`.
    shared_ptr<map<string, string>> config_ {};
    // The filter conditions for evaluation data. This parameter supports a JSON object or a JSON string. Common fields include `query`, `provided`, `maxRecords`, and `samplingRate`.
    shared_ptr<string> dataFilter_ {};
    // The data source type of the evaluation object. Set this parameter to `trace` for trace-based evaluation.
    shared_ptr<string> dataType_ {};
    // The description of the evaluation task.
    shared_ptr<string> description_ {};
    // The list of evaluator configurations. This parameter cannot be empty. Within the same task, `evaluatorRef` takes precedence as the unique identifier. Otherwise, `name` is used.
    shared_ptr<vector<Evaluator>> evaluators_ {};
    // The task execution strategy. This parameter supports a JSON object or a JSON string. Set this parameter to `backfill` for historical data backfill or `continuous` for continuous evaluation of new data.
    shared_ptr<RunStrategies> runStrategies_ {};
    // The key-value pairs of task tags. You do not need to specify this parameter by default. Specify this parameter only when you want to associate or filter tasks by business tags.
    shared_ptr<map<string, string>> tags_ {};
    // The evaluation task mode. Set this parameter to `batch` to create a persistent evaluation task.
    shared_ptr<string> taskMode_ {};
    // The task name. The name must be unique among non-deleted tasks within the same user and AgentSpace. The name can be up to 256 characters in length.
    shared_ptr<string> taskName_ {};
    // The idempotency token. This query parameter is declared in CloudSpec, but the backend does not currently perform idempotency comparison.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
