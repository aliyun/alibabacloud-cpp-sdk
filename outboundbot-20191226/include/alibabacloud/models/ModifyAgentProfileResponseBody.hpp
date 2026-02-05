// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAGENTPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAGENTPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyAgentProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAgentProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAgentProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyAgentProfileResponseBody() = default ;
    ModifyAgentProfileResponseBody(const ModifyAgentProfileResponseBody &) = default ;
    ModifyAgentProfileResponseBody(ModifyAgentProfileResponseBody &&) = default ;
    ModifyAgentProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAgentProfileResponseBody() = default ;
    ModifyAgentProfileResponseBody& operator=(const ModifyAgentProfileResponseBody &) = default ;
    ModifyAgentProfileResponseBody& operator=(ModifyAgentProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
        DARABONBA_PTR_TO_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(ApiPluginJson, apiPluginJson_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstructionJson, instructionJson_);
        DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
        DARABONBA_PTR_TO_JSON(NluConfigJson, nluConfigJson_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(PromptJson, promptJson_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(System, system_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VariablesJson, variablesJson_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
        DARABONBA_PTR_FROM_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(ApiPluginJson, apiPluginJson_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstructionJson, instructionJson_);
        DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
        DARABONBA_PTR_FROM_JSON(NluConfigJson, nluConfigJson_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(PromptJson, promptJson_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(System, system_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VariablesJson, variablesJson_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && this->agentProfileTemplateId_ == nullptr && this->agentType_ == nullptr && this->apiPluginJson_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr && this->instructionJson_ == nullptr && this->labelsJson_ == nullptr && this->model_ == nullptr && this->modelConfig_ == nullptr
        && this->nluConfigJson_ == nullptr && this->prompt_ == nullptr && this->promptJson_ == nullptr && this->scenario_ == nullptr && this->scriptId_ == nullptr
        && this->system_ == nullptr && this->updateTime_ == nullptr && this->variablesJson_ == nullptr; };
      // agentProfileId Field Functions 
      bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
      void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
      inline string getAgentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
      inline Data& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


      // agentProfileTemplateId Field Functions 
      bool hasAgentProfileTemplateId() const { return this->agentProfileTemplateId_ != nullptr;};
      void deleteAgentProfileTemplateId() { this->agentProfileTemplateId_ = nullptr;};
      inline string getAgentProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileTemplateId_, "") };
      inline Data& setAgentProfileTemplateId(string agentProfileTemplateId) { DARABONBA_PTR_SET_VALUE(agentProfileTemplateId_, agentProfileTemplateId) };


      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Data& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // apiPluginJson Field Functions 
      bool hasApiPluginJson() const { return this->apiPluginJson_ != nullptr;};
      void deleteApiPluginJson() { this->apiPluginJson_ = nullptr;};
      inline string getApiPluginJson() const { DARABONBA_PTR_GET_DEFAULT(apiPluginJson_, "") };
      inline Data& setApiPluginJson(string apiPluginJson) { DARABONBA_PTR_SET_VALUE(apiPluginJson_, apiPluginJson) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instructionJson Field Functions 
      bool hasInstructionJson() const { return this->instructionJson_ != nullptr;};
      void deleteInstructionJson() { this->instructionJson_ = nullptr;};
      inline string getInstructionJson() const { DARABONBA_PTR_GET_DEFAULT(instructionJson_, "") };
      inline Data& setInstructionJson(string instructionJson) { DARABONBA_PTR_SET_VALUE(instructionJson_, instructionJson) };


      // labelsJson Field Functions 
      bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
      void deleteLabelsJson() { this->labelsJson_ = nullptr;};
      inline string getLabelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
      inline Data& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Data& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelConfig Field Functions 
      bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
      void deleteModelConfig() { this->modelConfig_ = nullptr;};
      inline string getModelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
      inline Data& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


      // nluConfigJson Field Functions 
      bool hasNluConfigJson() const { return this->nluConfigJson_ != nullptr;};
      void deleteNluConfigJson() { this->nluConfigJson_ = nullptr;};
      inline string getNluConfigJson() const { DARABONBA_PTR_GET_DEFAULT(nluConfigJson_, "") };
      inline Data& setNluConfigJson(string nluConfigJson) { DARABONBA_PTR_SET_VALUE(nluConfigJson_, nluConfigJson) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline Data& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // promptJson Field Functions 
      bool hasPromptJson() const { return this->promptJson_ != nullptr;};
      void deletePromptJson() { this->promptJson_ = nullptr;};
      inline string getPromptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
      inline Data& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline Data& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Data& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // system Field Functions 
      bool hasSystem() const { return this->system_ != nullptr;};
      void deleteSystem() { this->system_ = nullptr;};
      inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
      inline Data& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // variablesJson Field Functions 
      bool hasVariablesJson() const { return this->variablesJson_ != nullptr;};
      void deleteVariablesJson() { this->variablesJson_ = nullptr;};
      inline string getVariablesJson() const { DARABONBA_PTR_GET_DEFAULT(variablesJson_, "") };
      inline Data& setVariablesJson(string variablesJson) { DARABONBA_PTR_SET_VALUE(variablesJson_, variablesJson) };


    protected:
      shared_ptr<string> agentProfileId_ {};
      // agent template id
      shared_ptr<string> agentProfileTemplateId_ {};
      // agent type
      shared_ptr<string> agentType_ {};
      shared_ptr<string> apiPluginJson_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instructionJson_ {};
      shared_ptr<string> labelsJson_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> modelConfig_ {};
      shared_ptr<string> nluConfigJson_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<string> promptJson_ {};
      shared_ptr<string> scenario_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<bool> system_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> variablesJson_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyAgentProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyAgentProfileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyAgentProfileResponseBody::Data) };
    inline ModifyAgentProfileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyAgentProfileResponseBody::Data) };
    inline ModifyAgentProfileResponseBody& setData(const ModifyAgentProfileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyAgentProfileResponseBody& setData(ModifyAgentProfileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyAgentProfileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyAgentProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAgentProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyAgentProfileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ModifyAgentProfileResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
