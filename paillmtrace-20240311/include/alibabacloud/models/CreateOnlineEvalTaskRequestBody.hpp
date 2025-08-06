// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOnlineEvalTaskRequestBodyFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class CreateOnlineEvalTaskRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOnlineEvalTaskRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(SamplingFrequencyMinutes, samplingFrequencyMinutes_);
      DARABONBA_PTR_TO_JSON(SamplingRatio, samplingRatio_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOnlineEvalTaskRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(SamplingFrequencyMinutes, samplingFrequencyMinutes_);
      DARABONBA_PTR_FROM_JSON(SamplingRatio, samplingRatio_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateOnlineEvalTaskRequestBody() = default ;
    CreateOnlineEvalTaskRequestBody(const CreateOnlineEvalTaskRequestBody &) = default ;
    CreateOnlineEvalTaskRequestBody(CreateOnlineEvalTaskRequestBody &&) = default ;
    CreateOnlineEvalTaskRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOnlineEvalTaskRequestBody() = default ;
    CreateOnlineEvalTaskRequestBody& operator=(const CreateOnlineEvalTaskRequestBody &) = default ;
    CreateOnlineEvalTaskRequestBody& operator=(CreateOnlineEvalTaskRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->description_ != nullptr && this->endTime_ != nullptr && this->evaluationConfig_ != nullptr && this->filters_ != nullptr && this->modelConfig_ != nullptr
        && this->samplingFrequencyMinutes_ != nullptr && this->samplingRatio_ != nullptr && this->startTime_ != nullptr && this->taskName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateOnlineEvalTaskRequestBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOnlineEvalTaskRequestBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateOnlineEvalTaskRequestBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // evaluationConfig Field Functions 
    bool hasEvaluationConfig() const { return this->evaluationConfig_ != nullptr;};
    void deleteEvaluationConfig() { this->evaluationConfig_ = nullptr;};
    inline const Models::EvaluationConfig & evaluationConfig() const { DARABONBA_PTR_GET_CONST(evaluationConfig_, Models::EvaluationConfig) };
    inline Models::EvaluationConfig evaluationConfig() { DARABONBA_PTR_GET(evaluationConfig_, Models::EvaluationConfig) };
    inline CreateOnlineEvalTaskRequestBody& setEvaluationConfig(const Models::EvaluationConfig & evaluationConfig) { DARABONBA_PTR_SET_VALUE(evaluationConfig_, evaluationConfig) };
    inline CreateOnlineEvalTaskRequestBody& setEvaluationConfig(Models::EvaluationConfig && evaluationConfig) { DARABONBA_PTR_SET_RVALUE(evaluationConfig_, evaluationConfig) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::CreateOnlineEvalTaskRequestBodyFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::CreateOnlineEvalTaskRequestBodyFilters>) };
    inline vector<Models::CreateOnlineEvalTaskRequestBodyFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::CreateOnlineEvalTaskRequestBodyFilters>) };
    inline CreateOnlineEvalTaskRequestBody& setFilters(const vector<Models::CreateOnlineEvalTaskRequestBodyFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline CreateOnlineEvalTaskRequestBody& setFilters(vector<Models::CreateOnlineEvalTaskRequestBodyFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const Models::ModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, Models::ModelConfig) };
    inline Models::ModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, Models::ModelConfig) };
    inline CreateOnlineEvalTaskRequestBody& setModelConfig(const Models::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline CreateOnlineEvalTaskRequestBody& setModelConfig(Models::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // samplingFrequencyMinutes Field Functions 
    bool hasSamplingFrequencyMinutes() const { return this->samplingFrequencyMinutes_ != nullptr;};
    void deleteSamplingFrequencyMinutes() { this->samplingFrequencyMinutes_ = nullptr;};
    inline int32_t samplingFrequencyMinutes() const { DARABONBA_PTR_GET_DEFAULT(samplingFrequencyMinutes_, 0) };
    inline CreateOnlineEvalTaskRequestBody& setSamplingFrequencyMinutes(int32_t samplingFrequencyMinutes) { DARABONBA_PTR_SET_VALUE(samplingFrequencyMinutes_, samplingFrequencyMinutes) };


    // samplingRatio Field Functions 
    bool hasSamplingRatio() const { return this->samplingRatio_ != nullptr;};
    void deleteSamplingRatio() { this->samplingRatio_ = nullptr;};
    inline int32_t samplingRatio() const { DARABONBA_PTR_GET_DEFAULT(samplingRatio_, 0) };
    inline CreateOnlineEvalTaskRequestBody& setSamplingRatio(int32_t samplingRatio) { DARABONBA_PTR_SET_VALUE(samplingRatio_, samplingRatio) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateOnlineEvalTaskRequestBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateOnlineEvalTaskRequestBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The name of the user application in the trace data.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> description_ = nullptr;
    // The end time of the trace data, in UTC format.
    std::shared_ptr<string> endTime_ = nullptr;
    // This configuration structure defines the JSON paths needed to extract specific values from trace data in JSON format. EvaluationConfig defines these JSON paths.
    std::shared_ptr<Models::EvaluationConfig> evaluationConfig_ = nullptr;
    // The evaluation task must search for a certain amount of trace data generated by the user application as input data for the evaluation. This list defines the search filter conditions.
    std::shared_ptr<vector<Models::CreateOnlineEvalTaskRequestBodyFilters>> filters_ = nullptr;
    // The access configuration structure of the model used in the evaluation.
    std::shared_ptr<Models::ModelConfig> modelConfig_ = nullptr;
    // The evaluation task must search for a certain amount of trace data generated by the user application as input data for the evaluation. This is the width of the time window for each search of input data.
    std::shared_ptr<int32_t> samplingFrequencyMinutes_ = nullptr;
    // The percentage of data found in a time window that truly serves as evaluation input data. For example, 100 indicates that all data searched is used as evaluation input. 20 indicates that 20% of the found data is randomly selected as evaluation input.
    std::shared_ptr<int32_t> samplingRatio_ = nullptr;
    // The start time of the trace data, in UTC format.
    std::shared_ptr<string> startTime_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
