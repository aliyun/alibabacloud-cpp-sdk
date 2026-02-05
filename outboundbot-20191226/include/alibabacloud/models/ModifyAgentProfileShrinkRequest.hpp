// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyAgentProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgentProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_TO_JSON(ApiPluginJson, apiPluginJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FaqCategoryIds, faqCategoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(VariablesJson, variablesJson_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgentProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_FROM_JSON(ApiPluginJson, apiPluginJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FaqCategoryIds, faqCategoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstructionJson, instructionJson_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(VariablesJson, variablesJson_);
    };
    ModifyAgentProfileShrinkRequest() = default ;
    ModifyAgentProfileShrinkRequest(const ModifyAgentProfileShrinkRequest &) = default ;
    ModifyAgentProfileShrinkRequest(ModifyAgentProfileShrinkRequest &&) = default ;
    ModifyAgentProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgentProfileShrinkRequest() = default ;
    ModifyAgentProfileShrinkRequest& operator=(const ModifyAgentProfileShrinkRequest &) = default ;
    ModifyAgentProfileShrinkRequest& operator=(ModifyAgentProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && this->apiPluginJson_ == nullptr && this->description_ == nullptr && this->faqCategoryIdsShrink_ == nullptr && this->instanceId_ == nullptr && this->instructionJson_ == nullptr
        && this->labelsJson_ == nullptr && this->model_ == nullptr && this->modelConfig_ == nullptr && this->prompt_ == nullptr && this->promptJson_ == nullptr
        && this->scenario_ == nullptr && this->variablesJson_ == nullptr; };
    // agentProfileId Field Functions 
    bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
    void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
    inline string getAgentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
    inline ModifyAgentProfileShrinkRequest& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


    // apiPluginJson Field Functions 
    bool hasApiPluginJson() const { return this->apiPluginJson_ != nullptr;};
    void deleteApiPluginJson() { this->apiPluginJson_ = nullptr;};
    inline string getApiPluginJson() const { DARABONBA_PTR_GET_DEFAULT(apiPluginJson_, "") };
    inline ModifyAgentProfileShrinkRequest& setApiPluginJson(string apiPluginJson) { DARABONBA_PTR_SET_VALUE(apiPluginJson_, apiPluginJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAgentProfileShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // faqCategoryIdsShrink Field Functions 
    bool hasFaqCategoryIdsShrink() const { return this->faqCategoryIdsShrink_ != nullptr;};
    void deleteFaqCategoryIdsShrink() { this->faqCategoryIdsShrink_ = nullptr;};
    inline string getFaqCategoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(faqCategoryIdsShrink_, "") };
    inline ModifyAgentProfileShrinkRequest& setFaqCategoryIdsShrink(string faqCategoryIdsShrink) { DARABONBA_PTR_SET_VALUE(faqCategoryIdsShrink_, faqCategoryIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAgentProfileShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instructionJson Field Functions 
    bool hasInstructionJson() const { return this->instructionJson_ != nullptr;};
    void deleteInstructionJson() { this->instructionJson_ = nullptr;};
    inline string getInstructionJson() const { DARABONBA_PTR_GET_DEFAULT(instructionJson_, "") };
    inline ModifyAgentProfileShrinkRequest& setInstructionJson(string instructionJson) { DARABONBA_PTR_SET_VALUE(instructionJson_, instructionJson) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline string getLabelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
    inline ModifyAgentProfileShrinkRequest& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ModifyAgentProfileShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string getModelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline ModifyAgentProfileShrinkRequest& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ModifyAgentProfileShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptJson Field Functions 
    bool hasPromptJson() const { return this->promptJson_ != nullptr;};
    void deletePromptJson() { this->promptJson_ = nullptr;};
    inline string getPromptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
    inline ModifyAgentProfileShrinkRequest& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ModifyAgentProfileShrinkRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // variablesJson Field Functions 
    bool hasVariablesJson() const { return this->variablesJson_ != nullptr;};
    void deleteVariablesJson() { this->variablesJson_ = nullptr;};
    inline string getVariablesJson() const { DARABONBA_PTR_GET_DEFAULT(variablesJson_, "") };
    inline ModifyAgentProfileShrinkRequest& setVariablesJson(string variablesJson) { DARABONBA_PTR_SET_VALUE(variablesJson_, variablesJson) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentProfileId_ {};
    shared_ptr<string> apiPluginJson_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> faqCategoryIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instructionJson_ {};
    shared_ptr<string> labelsJson_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> modelConfig_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> promptJson_ {};
    shared_ptr<string> scenario_ {};
    shared_ptr<string> variablesJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
