// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTPROFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTPROFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateAgentProfileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentProfileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_TO_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(System, system_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VariablesJson, variablesJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentProfileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_FROM_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(System, system_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VariablesJson, variablesJson_);
    };
    CreateAgentProfileResponseBodyData() = default ;
    CreateAgentProfileResponseBodyData(const CreateAgentProfileResponseBodyData &) = default ;
    CreateAgentProfileResponseBodyData(CreateAgentProfileResponseBodyData &&) = default ;
    CreateAgentProfileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentProfileResponseBodyData() = default ;
    CreateAgentProfileResponseBodyData& operator=(const CreateAgentProfileResponseBodyData &) = default ;
    CreateAgentProfileResponseBodyData& operator=(CreateAgentProfileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && return this->agentProfileTemplateId_ == nullptr && return this->agentType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->instanceId_ == nullptr
        && return this->instructionJson_ == nullptr && return this->labelsJson_ == nullptr && return this->model_ == nullptr && return this->modelConfig_ == nullptr && return this->prompt_ == nullptr
        && return this->promptJson_ == nullptr && return this->scenario_ == nullptr && return this->scriptId_ == nullptr && return this->system_ == nullptr && return this->updateTime_ == nullptr
        && return this->variablesJson_ == nullptr; };
    // agentProfileId Field Functions 
    bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
    void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
    inline string agentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
    inline CreateAgentProfileResponseBodyData& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


    // agentProfileTemplateId Field Functions 
    bool hasAgentProfileTemplateId() const { return this->agentProfileTemplateId_ != nullptr;};
    void deleteAgentProfileTemplateId() { this->agentProfileTemplateId_ = nullptr;};
    inline string agentProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileTemplateId_, "") };
    inline CreateAgentProfileResponseBodyData& setAgentProfileTemplateId(string agentProfileTemplateId) { DARABONBA_PTR_SET_VALUE(agentProfileTemplateId_, agentProfileTemplateId) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string agentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline CreateAgentProfileResponseBodyData& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateAgentProfileResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentProfileResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAgentProfileResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instructionJson Field Functions 
    bool hasInstructionJson() const { return this->instructionJson_ != nullptr;};
    void deleteInstructionJson() { this->instructionJson_ = nullptr;};
    inline string instructionJson() const { DARABONBA_PTR_GET_DEFAULT(instructionJson_, "") };
    inline CreateAgentProfileResponseBodyData& setInstructionJson(string instructionJson) { DARABONBA_PTR_SET_VALUE(instructionJson_, instructionJson) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline string labelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
    inline CreateAgentProfileResponseBodyData& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateAgentProfileResponseBodyData& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string modelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline CreateAgentProfileResponseBodyData& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateAgentProfileResponseBodyData& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptJson Field Functions 
    bool hasPromptJson() const { return this->promptJson_ != nullptr;};
    void deletePromptJson() { this->promptJson_ = nullptr;};
    inline string promptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
    inline CreateAgentProfileResponseBodyData& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateAgentProfileResponseBodyData& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateAgentProfileResponseBodyData& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool system() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline CreateAgentProfileResponseBodyData& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CreateAgentProfileResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // variablesJson Field Functions 
    bool hasVariablesJson() const { return this->variablesJson_ != nullptr;};
    void deleteVariablesJson() { this->variablesJson_ = nullptr;};
    inline string variablesJson() const { DARABONBA_PTR_GET_DEFAULT(variablesJson_, "") };
    inline CreateAgentProfileResponseBodyData& setVariablesJson(string variablesJson) { DARABONBA_PTR_SET_VALUE(variablesJson_, variablesJson) };


  protected:
    std::shared_ptr<string> agentProfileId_ = nullptr;
    std::shared_ptr<string> agentProfileTemplateId_ = nullptr;
    // agent type
    std::shared_ptr<string> agentType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instructionJson_ = nullptr;
    std::shared_ptr<string> labelsJson_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> modelConfig_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> promptJson_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<bool> system_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> variablesJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
