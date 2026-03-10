// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERIMENTRECORD_HPP_
#define ALIBABACLOUD_MODELS_EXPERIMENTRECORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Evaluator.hpp>
#include <alibabacloud/models/ExperimentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ExperimentRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExperimentRecord& obj) { 
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(datasetProject, datasetProject_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(executedAt, executedAt_);
      DARABONBA_PTR_TO_JSON(experimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(experimentName, experimentName_);
      DARABONBA_PTR_TO_JSON(failedTasks, failedTasks_);
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(recordId, recordId_);
      DARABONBA_PTR_TO_JSON(selectedItemIds, selectedItemIds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalTasks, totalTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ExperimentRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(completedTasks, completedTasks_);
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(datasetProject, datasetProject_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(executedAt, executedAt_);
      DARABONBA_PTR_FROM_JSON(experimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(experimentName, experimentName_);
      DARABONBA_PTR_FROM_JSON(failedTasks, failedTasks_);
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(recordId, recordId_);
      DARABONBA_PTR_FROM_JSON(selectedItemIds, selectedItemIds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalTasks, totalTasks_);
    };
    ExperimentRecord() = default ;
    ExperimentRecord(const ExperimentRecord &) = default ;
    ExperimentRecord(ExperimentRecord &&) = default ;
    ExperimentRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExperimentRecord() = default ;
    ExperimentRecord& operator=(const ExperimentRecord &) = default ;
    ExperimentRecord& operator=(ExperimentRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->completedTasks_ == nullptr && this->dataSourceType_ == nullptr && this->datasetId_ == nullptr && this->datasetProject_ == nullptr && this->errorMessage_ == nullptr
        && this->evaluators_ == nullptr && this->executedAt_ == nullptr && this->experimentConfig_ == nullptr && this->experimentName_ == nullptr && this->failedTasks_ == nullptr
        && this->input_ == nullptr && this->modelName_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr && this->progress_ == nullptr
        && this->recordId_ == nullptr && this->selectedItemIds_ == nullptr && this->status_ == nullptr && this->totalTasks_ == nullptr; };
    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
    inline ExperimentRecord& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // completedTasks Field Functions 
    bool hasCompletedTasks() const { return this->completedTasks_ != nullptr;};
    void deleteCompletedTasks() { this->completedTasks_ = nullptr;};
    inline int32_t getCompletedTasks() const { DARABONBA_PTR_GET_DEFAULT(completedTasks_, 0) };
    inline ExperimentRecord& setCompletedTasks(int32_t completedTasks) { DARABONBA_PTR_SET_VALUE(completedTasks_, completedTasks) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ExperimentRecord& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ExperimentRecord& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetProject Field Functions 
    bool hasDatasetProject() const { return this->datasetProject_ != nullptr;};
    void deleteDatasetProject() { this->datasetProject_ = nullptr;};
    inline string getDatasetProject() const { DARABONBA_PTR_GET_DEFAULT(datasetProject_, "") };
    inline ExperimentRecord& setDatasetProject(string datasetProject) { DARABONBA_PTR_SET_VALUE(datasetProject_, datasetProject) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ExperimentRecord& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<Evaluator> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<Evaluator>) };
    inline vector<Evaluator> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<Evaluator>) };
    inline ExperimentRecord& setEvaluators(const vector<Evaluator> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline ExperimentRecord& setEvaluators(vector<Evaluator> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // executedAt Field Functions 
    bool hasExecutedAt() const { return this->executedAt_ != nullptr;};
    void deleteExecutedAt() { this->executedAt_ = nullptr;};
    inline int64_t getExecutedAt() const { DARABONBA_PTR_GET_DEFAULT(executedAt_, 0L) };
    inline ExperimentRecord& setExecutedAt(int64_t executedAt) { DARABONBA_PTR_SET_VALUE(executedAt_, executedAt) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const ExperimentConfig & getExperimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, ExperimentConfig) };
    inline ExperimentConfig getExperimentConfig() { DARABONBA_PTR_GET(experimentConfig_, ExperimentConfig) };
    inline ExperimentRecord& setExperimentConfig(const ExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline ExperimentRecord& setExperimentConfig(ExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // experimentName Field Functions 
    bool hasExperimentName() const { return this->experimentName_ != nullptr;};
    void deleteExperimentName() { this->experimentName_ = nullptr;};
    inline string getExperimentName() const { DARABONBA_PTR_GET_DEFAULT(experimentName_, "") };
    inline ExperimentRecord& setExperimentName(string experimentName) { DARABONBA_PTR_SET_VALUE(experimentName_, experimentName) };


    // failedTasks Field Functions 
    bool hasFailedTasks() const { return this->failedTasks_ != nullptr;};
    void deleteFailedTasks() { this->failedTasks_ = nullptr;};
    inline int32_t getFailedTasks() const { DARABONBA_PTR_GET_DEFAULT(failedTasks_, 0) };
    inline ExperimentRecord& setFailedTasks(int32_t failedTasks) { DARABONBA_PTR_SET_VALUE(failedTasks_, failedTasks) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline ExperimentRecord& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline ExperimentRecord& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ExperimentRecord& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ExperimentRecord& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ExperimentRecord& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline ExperimentRecord& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ExperimentRecord& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // selectedItemIds Field Functions 
    bool hasSelectedItemIds() const { return this->selectedItemIds_ != nullptr;};
    void deleteSelectedItemIds() { this->selectedItemIds_ = nullptr;};
    inline const vector<string> & getSelectedItemIds() const { DARABONBA_PTR_GET_CONST(selectedItemIds_, vector<string>) };
    inline vector<string> getSelectedItemIds() { DARABONBA_PTR_GET(selectedItemIds_, vector<string>) };
    inline ExperimentRecord& setSelectedItemIds(const vector<string> & selectedItemIds) { DARABONBA_PTR_SET_VALUE(selectedItemIds_, selectedItemIds) };
    inline ExperimentRecord& setSelectedItemIds(vector<string> && selectedItemIds) { DARABONBA_PTR_SET_RVALUE(selectedItemIds_, selectedItemIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExperimentRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalTasks Field Functions 
    bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
    void deleteTotalTasks() { this->totalTasks_ = nullptr;};
    inline int32_t getTotalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0) };
    inline ExperimentRecord& setTotalTasks(int32_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


  protected:
    shared_ptr<int64_t> completedAt_ {};
    shared_ptr<int32_t> completedTasks_ {};
    shared_ptr<string> dataSourceType_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> datasetProject_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<vector<Evaluator>> evaluators_ {};
    shared_ptr<int64_t> executedAt_ {};
    shared_ptr<ExperimentConfig> experimentConfig_ {};
    shared_ptr<string> experimentName_ {};
    shared_ptr<int32_t> failedTasks_ {};
    Darabonba::Json input_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> planId_ {};
    shared_ptr<string> planName_ {};
    shared_ptr<float> progress_ {};
    shared_ptr<string> recordId_ {};
    shared_ptr<vector<string>> selectedItemIds_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> totalTasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
