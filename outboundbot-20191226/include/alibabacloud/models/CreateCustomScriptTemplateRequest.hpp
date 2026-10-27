// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMSCRIPTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMSCRIPTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateCustomScriptTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomScriptTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomScriptTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptJson, promptJson_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    CreateCustomScriptTemplateRequest() = default ;
    CreateCustomScriptTemplateRequest(const CreateCustomScriptTemplateRequest &) = default ;
    CreateCustomScriptTemplateRequest(CreateCustomScriptTemplateRequest &&) = default ;
    CreateCustomScriptTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomScriptTemplateRequest() = default ;
    CreateCustomScriptTemplateRequest& operator=(const CreateCustomScriptTemplateRequest &) = default ;
    CreateCustomScriptTemplateRequest& operator=(CreateCustomScriptTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->labelsJson_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->prompt_ == nullptr
        && this->promptJson_ == nullptr && this->scriptId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomScriptTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomScriptTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline string getLabelsJson() const { DARABONBA_PTR_GET_DEFAULT(labelsJson_, "") };
    inline CreateCustomScriptTemplateRequest& setLabelsJson(string labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateCustomScriptTemplateRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomScriptTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateCustomScriptTemplateRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptJson Field Functions 
    bool hasPromptJson() const { return this->promptJson_ != nullptr;};
    void deletePromptJson() { this->promptJson_ = nullptr;};
    inline string getPromptJson() const { DARABONBA_PTR_GET_DEFAULT(promptJson_, "") };
    inline CreateCustomScriptTemplateRequest& setPromptJson(string promptJson) { DARABONBA_PTR_SET_VALUE(promptJson_, promptJson) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateCustomScriptTemplateRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // The description of the custom scenario.
    shared_ptr<string> description_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The label descriptions in JSON array format.
    shared_ptr<string> labelsJson_ {};
    // The ID of the model used to create the template.
    shared_ptr<string> model_ {};
    // The name of the custom scenario.
    shared_ptr<string> name_ {};
    // The prompt in professional mode.
    shared_ptr<string> prompt_ {};
    // The agent configuration in JSON format.
    shared_ptr<string> promptJson_ {};
    // The script ID.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
