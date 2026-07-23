// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Evaluator.hpp>
#include <alibabacloud/models/ExperimentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetExperimentPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(experimentType, experimentType_);
      DARABONBA_PTR_TO_JSON(experiments, experiments_);
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(querySql, querySql_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(selectedItemIds, selectedItemIds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(experimentType, experimentType_);
      DARABONBA_PTR_FROM_JSON(experiments, experiments_);
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(querySql, querySql_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(selectedItemIds, selectedItemIds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    GetExperimentPlanResponseBody() = default ;
    GetExperimentPlanResponseBody(const GetExperimentPlanResponseBody &) = default ;
    GetExperimentPlanResponseBody(GetExperimentPlanResponseBody &&) = default ;
    GetExperimentPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentPlanResponseBody() = default ;
    GetExperimentPlanResponseBody& operator=(const GetExperimentPlanResponseBody &) = default ;
    GetExperimentPlanResponseBody& operator=(GetExperimentPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->datasetId_ == nullptr && this->description_ == nullptr && this->evaluators_ == nullptr && this->experimentType_ == nullptr && this->experiments_ == nullptr
        && this->input_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr && this->querySql_ == nullptr && this->requestId_ == nullptr
        && this->selectedItemIds_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetExperimentPlanResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline GetExperimentPlanResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetExperimentPlanResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline GetExperimentPlanResponseBody& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline GetExperimentPlanResponseBody& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // experimentType Field Functions 
    bool hasExperimentType() const { return this->experimentType_ != nullptr;};
    void deleteExperimentType() { this->experimentType_ = nullptr;};
    inline string getExperimentType() const { DARABONBA_PTR_GET_DEFAULT(experimentType_, "") };
    inline GetExperimentPlanResponseBody& setExperimentType(string experimentType) { DARABONBA_PTR_SET_VALUE(experimentType_, experimentType) };


    // experiments Field Functions 
    bool hasExperiments() const { return this->experiments_ != nullptr;};
    void deleteExperiments() { this->experiments_ = nullptr;};
    inline const vector<ExperimentConfig> & getExperiments() const { DARABONBA_PTR_GET_CONST(experiments_, vector<ExperimentConfig>) };
    inline vector<ExperimentConfig> getExperiments() { DARABONBA_PTR_GET(experiments_, vector<ExperimentConfig>) };
    inline GetExperimentPlanResponseBody& setExperiments(const vector<ExperimentConfig> & experiments) { DARABONBA_PTR_SET_VALUE(experiments_, experiments) };
    inline GetExperimentPlanResponseBody& setExperiments(vector<ExperimentConfig> && experiments) { DARABONBA_PTR_SET_RVALUE(experiments_, experiments) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline GetExperimentPlanResponseBody& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline GetExperimentPlanResponseBody& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline GetExperimentPlanResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline GetExperimentPlanResponseBody& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string getQuerySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline GetExperimentPlanResponseBody& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedItemIds Field Functions 
    bool hasSelectedItemIds() const { return this->selectedItemIds_ != nullptr;};
    void deleteSelectedItemIds() { this->selectedItemIds_ = nullptr;};
    inline const vector<string> & getSelectedItemIds() const { DARABONBA_PTR_GET_CONST(selectedItemIds_, vector<string>) };
    inline vector<string> getSelectedItemIds() { DARABONBA_PTR_GET(selectedItemIds_, vector<string>) };
    inline GetExperimentPlanResponseBody& setSelectedItemIds(const vector<string> & selectedItemIds) { DARABONBA_PTR_SET_VALUE(selectedItemIds_, selectedItemIds) };
    inline GetExperimentPlanResponseBody& setSelectedItemIds(vector<string> && selectedItemIds) { DARABONBA_PTR_SET_RVALUE(selectedItemIds_, selectedItemIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExperimentPlanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetExperimentPlanResponseBody& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The creation time, in millisecond Unix timestamp.
    shared_ptr<int64_t> createdAt_ {};
    // The associated dataset ID.
    shared_ptr<string> datasetId_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The list of evaluators.
    shared_ptr<vector<Evaluator>> evaluators_ {};
    // The experiment type.
    shared_ptr<string> experimentType_ {};
    // The list of experiment configurations.
    shared_ptr<vector<ExperimentConfig>> experiments_ {};
    // Optional.
    Darabonba::Json input_ {};
    // The experiment plan ID.
    shared_ptr<string> planId_ {};
    // The experiment plan name.
    shared_ptr<string> planName_ {};
    // The custom query SQL clause in partial dataset mode.
    shared_ptr<string> querySql_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of selected data item IDs in partial dataset mode.
    shared_ptr<vector<string>> selectedItemIds_ {};
    // The plan status.
    shared_ptr<string> status_ {};
    // The update time, in millisecond Unix timestamp.
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
