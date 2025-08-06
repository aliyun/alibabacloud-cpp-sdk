// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATETRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATETRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class EvaluateTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EvaluationConfig, evaluationConfig_);
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
    };
    EvaluateTraceRequest() = default ;
    EvaluateTraceRequest(const EvaluateTraceRequest &) = default ;
    EvaluateTraceRequest(EvaluateTraceRequest &&) = default ;
    EvaluateTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateTraceRequest() = default ;
    EvaluateTraceRequest& operator=(const EvaluateTraceRequest &) = default ;
    EvaluateTraceRequest& operator=(EvaluateTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->evaluationConfig_ != nullptr && this->evaluationId_ != nullptr && this->maxTime_ != nullptr && this->minTime_ != nullptr && this->modelConfig_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EvaluateTraceRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // evaluationConfig Field Functions 
    bool hasEvaluationConfig() const { return this->evaluationConfig_ != nullptr;};
    void deleteEvaluationConfig() { this->evaluationConfig_ = nullptr;};
    inline const EvaluationConfig & evaluationConfig() const { DARABONBA_PTR_GET_CONST(evaluationConfig_, EvaluationConfig) };
    inline EvaluationConfig evaluationConfig() { DARABONBA_PTR_GET(evaluationConfig_, EvaluationConfig) };
    inline EvaluateTraceRequest& setEvaluationConfig(const EvaluationConfig & evaluationConfig) { DARABONBA_PTR_SET_VALUE(evaluationConfig_, evaluationConfig) };
    inline EvaluateTraceRequest& setEvaluationConfig(EvaluationConfig && evaluationConfig) { DARABONBA_PTR_SET_RVALUE(evaluationConfig_, evaluationConfig) };


    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline EvaluateTraceRequest& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline string maxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, "") };
    inline EvaluateTraceRequest& setMaxTime(string maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline string minTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, "") };
    inline EvaluateTraceRequest& setMinTime(string minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const ModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, ModelConfig) };
    inline ModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, ModelConfig) };
    inline EvaluateTraceRequest& setModelConfig(const ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline EvaluateTraceRequest& setModelConfig(ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


  protected:
    // The name of the application to which the trace belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // If the value retrieved at the JSON path is itself a JSON string, further JSON path definitions within this JSON are necessary to get the actual value.
    // 
    // This parameter is required.
    std::shared_ptr<EvaluationConfig> evaluationConfig_ = nullptr;
    // The ID of the evaluation task. If not specified, the system randomly generates and returns an ID. You can use this ID to quickly search for evaluation results.
    std::shared_ptr<string> evaluationId_ = nullptr;
    // The end time of the search time range, in UTC format.
    std::shared_ptr<string> maxTime_ = nullptr;
    // The start time of the search time range, in UTC format.
    std::shared_ptr<string> minTime_ = nullptr;
    // The configuration structure to access the model used internally by the evaluation trace.
    std::shared_ptr<ModelConfig> modelConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
