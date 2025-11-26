// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyAgentProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgentProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_TO_JSON(ApiPluginJson, apiPluginJson_);
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
      DARABONBA_PTR_TO_JSON(VariablesJson, variablesJson_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgentProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_FROM_JSON(ApiPluginJson, apiPluginJson_);
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
      DARABONBA_PTR_FROM_JSON(VariablesJson, variablesJson_);
    };
    ModifyAgentProfileRequest() = default ;
    ModifyAgentProfileRequest(const ModifyAgentProfileRequest &) = default ;
    ModifyAgentProfileRequest(ModifyAgentProfileRequest &&) = default ;
    ModifyAgentProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgentProfileRequest() = default ;
    ModifyAgentProfileRequest& operator=(const ModifyAgentProfileRequest &) = default ;
    ModifyAgentProfileRequest& operator=(ModifyAgentProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && return this->apiPluginJson_ == nullptr && return this->description_ == nullptr && return this->faqCategoryIds_ == nullptr && return this->instanceId_ == nullptr && return this->instructionJson_ == nullptr
        && return this->labelsJson_ == nullptr && return this->model_ == nullptr && return this->modelConfig_ == nullptr && return this->prompt_ == nullptr && return this->promptJson_ == nullptr
        && return this->scenario_ == nullptr && return this->variablesJson_ == nullptr; };
    // agentProfileId Field Functions 
    bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
    void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
    inline string agentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
    inline ModifyAgentProfileRequest& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


    // apiPluginJson Field Functions 
    bool hasApiPluginJson() const { return this->apiPluginJson_ != nullptr;};
    void deleteApiPluginJson() { this->apiPluginJson_ = nullptr;};
    inline string apiPluginJson() const { DARABONBA_PTR_GET_DEFAULT(apiPluginJson_, "") };
    inline ModifyAgentProfileRequest& setApiPluginJson(string apiPluginJson) { DARABONBA_PTR_SET_VALUE(apiPluginJson_, apiPluginJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAgentProfileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // faqCategoryIds Field Functions 
    bool hasFaqCategoryIds() const { return this->faqCategoryIds_ != nullptr;};
    void deleteFaqCategoryIds() { this->faqCategoryIds_ = nullptr;};
    inline const vector<int64_t> & faqCategoryIds() const { DARABONBA_PTR_GET_CONST(faqCategoryIds_, vector<int64_t>) };
    inline vector<int64_t> faqCategoryIds() { DARABONBA_PTR_GET(faqCategoryIds_, vector<int64_t>) };
    inline ModifyAgentProfileRequest& setFaqCategoryIds(const vector<int64_t> & faqCategoryIds) { DARABONBA_PTR_SET_VALUE(faqCategoryIds_, faqCategoryIds) };
    inline ModifyAgentProfileRequest& setFaqCategoryIds(vector<int64_t> && faqCategoryIds) { DARABONBA_PTR_SET_RVALUE(faqCategoryIds_, faqCategoryIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAgentProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instructionJson Field Functions 
    bool hasInstructionJson() const { return this->instructionJson_ != nullptr;};
    void deleteInstructionJson() { this->instructionJson_ = nullptr;};
    inline string instructionJson() const { DARABONBA_PTR_GET_DEFAULT(instructionJson_, "") };
    inline ModifyAgentProfileRequest& setInstructionJson(string instructionJson) { DARABONBA_PTR_SET_VALUE(instructionJson_, instructionJson) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline string labelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
    inline ModifyAgentProfileRequest& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ModifyAgentProfileRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string modelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline ModifyAgentProfileRequest& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ModifyAgentProfileRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptJson Field Functions 
    bool hasPromptJson() const { return this->promptJson_ != nullptr;};
    void deletePromptJson() { this->promptJson_ = nullptr;};
    inline string promptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
    inline ModifyAgentProfileRequest& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ModifyAgentProfileRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // variablesJson Field Functions 
    bool hasVariablesJson() const { return this->variablesJson_ != nullptr;};
    void deleteVariablesJson() { this->variablesJson_ = nullptr;};
    inline string variablesJson() const { DARABONBA_PTR_GET_DEFAULT(variablesJson_, "") };
    inline ModifyAgentProfileRequest& setVariablesJson(string variablesJson) { DARABONBA_PTR_SET_VALUE(variablesJson_, variablesJson) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentProfileId_ = nullptr;
    std::shared_ptr<string> apiPluginJson_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<int64_t>> faqCategoryIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instructionJson_ = nullptr;
    std::shared_ptr<string> labelsJson_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> modelConfig_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> promptJson_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
    std::shared_ptr<string> variablesJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
