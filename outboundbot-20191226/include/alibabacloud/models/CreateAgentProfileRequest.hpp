// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateAgentProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FaqCategoryIds, faqCategoryIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(VariablesJson, variablesJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FaqCategoryIds, faqCategoryIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(VariablesJson, variablesJson_);
    };
    CreateAgentProfileRequest() = default ;
    CreateAgentProfileRequest(const CreateAgentProfileRequest &) = default ;
    CreateAgentProfileRequest(CreateAgentProfileRequest &&) = default ;
    CreateAgentProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentProfileRequest() = default ;
    CreateAgentProfileRequest& operator=(const CreateAgentProfileRequest &) = default ;
    CreateAgentProfileRequest& operator=(CreateAgentProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileTemplateId_ == nullptr
        && this->appIp_ == nullptr && this->description_ == nullptr && this->faqCategoryIds_ == nullptr && this->instanceId_ == nullptr && this->instructionJson_ == nullptr
        && this->labelsJson_ == nullptr && this->model_ == nullptr && this->modelConfig_ == nullptr && this->prompt_ == nullptr && this->promptJson_ == nullptr
        && this->scenario_ == nullptr && this->scriptId_ == nullptr && this->variablesJson_ == nullptr; };
    // agentProfileTemplateId Field Functions 
    bool hasAgentProfileTemplateId() const { return this->agentProfileTemplateId_ != nullptr;};
    void deleteAgentProfileTemplateId() { this->agentProfileTemplateId_ = nullptr;};
    inline string getAgentProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileTemplateId_, "") };
    inline CreateAgentProfileRequest& setAgentProfileTemplateId(string agentProfileTemplateId) { DARABONBA_PTR_SET_VALUE(agentProfileTemplateId_, agentProfileTemplateId) };


    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string getAppIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline CreateAgentProfileRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentProfileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // faqCategoryIds Field Functions 
    bool hasFaqCategoryIds() const { return this->faqCategoryIds_ != nullptr;};
    void deleteFaqCategoryIds() { this->faqCategoryIds_ = nullptr;};
    inline string getFaqCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(faqCategoryIds_, "") };
    inline CreateAgentProfileRequest& setFaqCategoryIds(string faqCategoryIds) { DARABONBA_PTR_SET_VALUE(faqCategoryIds_, faqCategoryIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAgentProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instructionJson Field Functions 
    bool hasInstructionJson() const { return this->instructionJson_ != nullptr;};
    void deleteInstructionJson() { this->instructionJson_ = nullptr;};
    inline string getInstructionJson() const { DARABONBA_PTR_GET_DEFAULT(instructionJson_, "") };
    inline CreateAgentProfileRequest& setInstructionJson(string instructionJson) { DARABONBA_PTR_SET_VALUE(instructionJson_, instructionJson) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline string getLabelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
    inline CreateAgentProfileRequest& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateAgentProfileRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string getModelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline CreateAgentProfileRequest& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateAgentProfileRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptJson Field Functions 
    bool hasPromptJson() const { return this->promptJson_ != nullptr;};
    void deletePromptJson() { this->promptJson_ = nullptr;};
    inline string getPromptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
    inline CreateAgentProfileRequest& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateAgentProfileRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateAgentProfileRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // variablesJson Field Functions 
    bool hasVariablesJson() const { return this->variablesJson_ != nullptr;};
    void deleteVariablesJson() { this->variablesJson_ = nullptr;};
    inline string getVariablesJson() const { DARABONBA_PTR_GET_DEFAULT(variablesJson_, "") };
    inline CreateAgentProfileRequest& setVariablesJson(string variablesJson) { DARABONBA_PTR_SET_VALUE(variablesJson_, variablesJson) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentProfileTemplateId_ {};
    shared_ptr<string> appIp_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> faqCategoryIds_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instructionJson_ {};
    shared_ptr<string> labelsJson_ {};
    // This parameter is required.
    shared_ptr<string> model_ {};
    shared_ptr<string> modelConfig_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> promptJson_ {};
    shared_ptr<string> scenario_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> variablesJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
