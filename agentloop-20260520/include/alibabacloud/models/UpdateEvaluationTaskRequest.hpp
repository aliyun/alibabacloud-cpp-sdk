// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVALUATIONTASKREQUEST_HPP_
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
  class UpdateEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(runStrategies, runStrategies_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataFilter, dataFilter_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(runStrategies, runStrategies_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateEvaluationTaskRequest() = default ;
    UpdateEvaluationTaskRequest(const UpdateEvaluationTaskRequest &) = default ;
    UpdateEvaluationTaskRequest(UpdateEvaluationTaskRequest &&) = default ;
    UpdateEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEvaluationTaskRequest() = default ;
    UpdateEvaluationTaskRequest& operator=(const UpdateEvaluationTaskRequest &) = default ;
    UpdateEvaluationTaskRequest& operator=(UpdateEvaluationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->dataFilter_ == nullptr && this->description_ == nullptr && this->evaluators_ == nullptr && this->runStrategies_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->clientToken_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline UpdateEvaluationTaskRequest& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateEvaluationTaskRequest& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataFilter Field Functions 
    bool hasDataFilter() const { return this->dataFilter_ != nullptr;};
    void deleteDataFilter() { this->dataFilter_ = nullptr;};
    inline string getDataFilter() const { DARABONBA_PTR_GET_DEFAULT(dataFilter_, "") };
    inline UpdateEvaluationTaskRequest& setDataFilter(string dataFilter) { DARABONBA_PTR_SET_VALUE(dataFilter_, dataFilter) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEvaluationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline UpdateEvaluationTaskRequest& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline UpdateEvaluationTaskRequest& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // runStrategies Field Functions 
    bool hasRunStrategies() const { return this->runStrategies_ != nullptr;};
    void deleteRunStrategies() { this->runStrategies_ = nullptr;};
    inline const RunStrategies & getRunStrategies() const { DARABONBA_PTR_GET_CONST(runStrategies_, RunStrategies) };
    inline RunStrategies getRunStrategies() { DARABONBA_PTR_GET(runStrategies_, RunStrategies) };
    inline UpdateEvaluationTaskRequest& setRunStrategies(const RunStrategies & runStrategies) { DARABONBA_PTR_SET_VALUE(runStrategies_, runStrategies) };
    inline UpdateEvaluationTaskRequest& setRunStrategies(RunStrategies && runStrategies) { DARABONBA_PTR_SET_RVALUE(runStrategies_, runStrategies) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateEvaluationTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline UpdateEvaluationTaskRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateEvaluationTaskRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEvaluationTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The new task configuration. Some fields that are set during creation cannot be modified.
    shared_ptr<map<string, string>> config_ {};
    // The filter condition for evaluation data. A JSON object or JSON string is supported.
    shared_ptr<string> dataFilter_ {};
    // The description of the evaluation task.
    shared_ptr<string> description_ {};
    // The new list of evaluator configurations. When specified, this list entirely replaces the existing evaluator list of the task, and the system re-validates evaluator uniqueness and variable mappings.
    shared_ptr<vector<Evaluator>> evaluators_ {};
    // The new task execution strategies. A JSON object or JSON string is supported. If the task is in `Completed`, `Terminated`, or `Failed` status and the new strategy enables backfill or continuous mode, the backend resets the task to `Pending` and triggers orchestration.
    shared_ptr<RunStrategies> runStrategies_ {};
    // The task status. Currently the backend only allows users to explicitly set this to `Terminated`. Other statuses are managed by the system.
    shared_ptr<string> status_ {};
    // The key-value pairs of task tags. You do not need to specify this parameter by default. Specify this parameter only when you want to associate or filter tasks by business tags.
    shared_ptr<map<string, string>> tags_ {};
    // The idempotency token. CloudSpec declares this query parameter, but the backend does not currently perform idempotency comparison.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
