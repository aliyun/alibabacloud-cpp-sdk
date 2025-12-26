// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNEVALUATIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNEVALUATIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FlowRunEvaluationConfigsFlowSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunEvaluationConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunEvaluationConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_TO_JSON(FlowSource, flowSource_);
      DARABONBA_PTR_TO_JSON(InputsOverrideConfig, inputsOverrideConfig_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunEvaluationConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_FROM_JSON(FlowSource, flowSource_);
      DARABONBA_PTR_FROM_JSON(InputsOverrideConfig, inputsOverrideConfig_);
    };
    FlowRunEvaluationConfigs() = default ;
    FlowRunEvaluationConfigs(const FlowRunEvaluationConfigs &) = default ;
    FlowRunEvaluationConfigs(FlowRunEvaluationConfigs &&) = default ;
    FlowRunEvaluationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunEvaluationConfigs() = default ;
    FlowRunEvaluationConfigs& operator=(const FlowRunEvaluationConfigs &) = default ;
    FlowRunEvaluationConfigs& operator=(FlowRunEvaluationConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataColumnMapping_ == nullptr
        && return this->flowSource_ == nullptr && return this->inputsOverrideConfig_ == nullptr; };
    // dataColumnMapping Field Functions 
    bool hasDataColumnMapping() const { return this->dataColumnMapping_ != nullptr;};
    void deleteDataColumnMapping() { this->dataColumnMapping_ = nullptr;};
    inline const map<string, string> & dataColumnMapping() const { DARABONBA_PTR_GET_CONST(dataColumnMapping_, map<string, string>) };
    inline map<string, string> dataColumnMapping() { DARABONBA_PTR_GET(dataColumnMapping_, map<string, string>) };
    inline FlowRunEvaluationConfigs& setDataColumnMapping(const map<string, string> & dataColumnMapping) { DARABONBA_PTR_SET_VALUE(dataColumnMapping_, dataColumnMapping) };
    inline FlowRunEvaluationConfigs& setDataColumnMapping(map<string, string> && dataColumnMapping) { DARABONBA_PTR_SET_RVALUE(dataColumnMapping_, dataColumnMapping) };


    // flowSource Field Functions 
    bool hasFlowSource() const { return this->flowSource_ != nullptr;};
    void deleteFlowSource() { this->flowSource_ = nullptr;};
    inline const Models::FlowRunEvaluationConfigsFlowSource & flowSource() const { DARABONBA_PTR_GET_CONST(flowSource_, Models::FlowRunEvaluationConfigsFlowSource) };
    inline Models::FlowRunEvaluationConfigsFlowSource flowSource() { DARABONBA_PTR_GET(flowSource_, Models::FlowRunEvaluationConfigsFlowSource) };
    inline FlowRunEvaluationConfigs& setFlowSource(const Models::FlowRunEvaluationConfigsFlowSource & flowSource) { DARABONBA_PTR_SET_VALUE(flowSource_, flowSource) };
    inline FlowRunEvaluationConfigs& setFlowSource(Models::FlowRunEvaluationConfigsFlowSource && flowSource) { DARABONBA_PTR_SET_RVALUE(flowSource_, flowSource) };


    // inputsOverrideConfig Field Functions 
    bool hasInputsOverrideConfig() const { return this->inputsOverrideConfig_ != nullptr;};
    void deleteInputsOverrideConfig() { this->inputsOverrideConfig_ = nullptr;};
    inline string inputsOverrideConfig() const { DARABONBA_PTR_GET_DEFAULT(inputsOverrideConfig_, "") };
    inline FlowRunEvaluationConfigs& setInputsOverrideConfig(string inputsOverrideConfig) { DARABONBA_PTR_SET_VALUE(inputsOverrideConfig_, inputsOverrideConfig) };


  protected:
    // 映射配置
    std::shared_ptr<map<string, string>> dataColumnMapping_ = nullptr;
    // 应用流来源
    std::shared_ptr<Models::FlowRunEvaluationConfigsFlowSource> flowSource_ = nullptr;
    // 输入配置
    std::shared_ptr<string> inputsOverrideConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
