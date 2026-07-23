// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTPLANREQUEST_HPP_
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
  class UpdateExperimentPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(datasetProject, datasetProject_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(experimentType, experimentType_);
      DARABONBA_PTR_TO_JSON(experiments, experiments_);
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(querySql, querySql_);
      DARABONBA_PTR_TO_JSON(selectedItemIds, selectedItemIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(datasetProject, datasetProject_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(experimentType, experimentType_);
      DARABONBA_PTR_FROM_JSON(experiments, experiments_);
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(querySql, querySql_);
      DARABONBA_PTR_FROM_JSON(selectedItemIds, selectedItemIds_);
    };
    UpdateExperimentPlanRequest() = default ;
    UpdateExperimentPlanRequest(const UpdateExperimentPlanRequest &) = default ;
    UpdateExperimentPlanRequest(UpdateExperimentPlanRequest &&) = default ;
    UpdateExperimentPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentPlanRequest() = default ;
    UpdateExperimentPlanRequest& operator=(const UpdateExperimentPlanRequest &) = default ;
    UpdateExperimentPlanRequest& operator=(UpdateExperimentPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetProject_ == nullptr && this->description_ == nullptr && this->evaluators_ == nullptr && this->experimentType_ == nullptr && this->experiments_ == nullptr
        && this->input_ == nullptr && this->planName_ == nullptr && this->querySql_ == nullptr && this->selectedItemIds_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline UpdateExperimentPlanRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetProject Field Functions 
    bool hasDatasetProject() const { return this->datasetProject_ != nullptr;};
    void deleteDatasetProject() { this->datasetProject_ = nullptr;};
    inline string getDatasetProject() const { DARABONBA_PTR_GET_DEFAULT(datasetProject_, "") };
    inline UpdateExperimentPlanRequest& setDatasetProject(string datasetProject) { DARABONBA_PTR_SET_VALUE(datasetProject_, datasetProject) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateExperimentPlanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline UpdateExperimentPlanRequest& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline UpdateExperimentPlanRequest& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // experimentType Field Functions 
    bool hasExperimentType() const { return this->experimentType_ != nullptr;};
    void deleteExperimentType() { this->experimentType_ = nullptr;};
    inline string getExperimentType() const { DARABONBA_PTR_GET_DEFAULT(experimentType_, "") };
    inline UpdateExperimentPlanRequest& setExperimentType(string experimentType) { DARABONBA_PTR_SET_VALUE(experimentType_, experimentType) };


    // experiments Field Functions 
    bool hasExperiments() const { return this->experiments_ != nullptr;};
    void deleteExperiments() { this->experiments_ = nullptr;};
    inline const vector<ExperimentConfig> & getExperiments() const { DARABONBA_PTR_GET_CONST(experiments_, vector<ExperimentConfig>) };
    inline vector<ExperimentConfig> getExperiments() { DARABONBA_PTR_GET(experiments_, vector<ExperimentConfig>) };
    inline UpdateExperimentPlanRequest& setExperiments(const vector<ExperimentConfig> & experiments) { DARABONBA_PTR_SET_VALUE(experiments_, experiments) };
    inline UpdateExperimentPlanRequest& setExperiments(vector<ExperimentConfig> && experiments) { DARABONBA_PTR_SET_RVALUE(experiments_, experiments) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline UpdateExperimentPlanRequest& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline UpdateExperimentPlanRequest& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateExperimentPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string getQuerySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline UpdateExperimentPlanRequest& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // selectedItemIds Field Functions 
    bool hasSelectedItemIds() const { return this->selectedItemIds_ != nullptr;};
    void deleteSelectedItemIds() { this->selectedItemIds_ = nullptr;};
    inline const vector<string> & getSelectedItemIds() const { DARABONBA_PTR_GET_CONST(selectedItemIds_, vector<string>) };
    inline vector<string> getSelectedItemIds() { DARABONBA_PTR_GET(selectedItemIds_, vector<string>) };
    inline UpdateExperimentPlanRequest& setSelectedItemIds(const vector<string> & selectedItemIds) { DARABONBA_PTR_SET_VALUE(selectedItemIds_, selectedItemIds) };
    inline UpdateExperimentPlanRequest& setSelectedItemIds(vector<string> && selectedItemIds) { DARABONBA_PTR_SET_RVALUE(selectedItemIds_, selectedItemIds) };


  protected:
    // The associated dataset ID.
    shared_ptr<string> datasetId_ {};
    // Optional.
    shared_ptr<string> datasetProject_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The evaluator list. Omitting this field means no modification. Passing an empty array clears the list.
    shared_ptr<vector<Evaluator>> evaluators_ {};
    // The experiment type.
    shared_ptr<string> experimentType_ {};
    // The experiment configuration list. When passed, the entire list is replaced. The number of items must be 1 to 5.
    shared_ptr<vector<ExperimentConfig>> experiments_ {};
    // Optional.
    Darabonba::Json input_ {};
    // The experiment plan name.
    shared_ptr<string> planName_ {};
    // The custom query SQL clause in partial dataset mode.
    shared_ptr<string> querySql_ {};
    // The list of selected data item IDs in partial dataset mode. Passing an empty array clears the list.
    shared_ptr<vector<string>> selectedItemIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
