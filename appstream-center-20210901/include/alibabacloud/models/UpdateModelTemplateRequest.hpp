// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateModelTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RefScope, refScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RefScope, refScope_);
    };
    UpdateModelTemplateRequest() = default ;
    UpdateModelTemplateRequest(const UpdateModelTemplateRequest &) = default ;
    UpdateModelTemplateRequest(UpdateModelTemplateRequest &&) = default ;
    UpdateModelTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelTemplateRequest() = default ;
    UpdateModelTemplateRequest& operator=(const UpdateModelTemplateRequest &) = default ;
    UpdateModelTemplateRequest& operator=(UpdateModelTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->description_ == nullptr && this->modelTemplateId_ == nullptr && this->name_ == nullptr && this->refScope_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateModelTemplateRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline UpdateModelTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // refScope Field Functions 
    bool hasRefScope() const { return this->refScope_ != nullptr;};
    void deleteRefScope() { this->refScope_ = nullptr;};
    inline string getRefScope() const { DARABONBA_PTR_GET_DEFAULT(refScope_, "") };
    inline UpdateModelTemplateRequest& setRefScope(string refScope) { DARABONBA_PTR_SET_VALUE(refScope_, refScope) };


  protected:
    // The model group configuration JSON object. You can use this field to modify the default model. The configuration format varies depending on the agent provider (AgentProvider):
    // 
    // - **OpenClaw / AgenticComputer scenarios:**
    // Set the default model by using the `defaults.model.primary` field in the format of `provider name/model code`.
    // 
    // - **HermesAgent scenarios:**
    // Specify the provider name by using `model.provider` and the model code by using `model.default`.
    // 
    // > Note:
    // > - When you modify the default model, the system verifies whether the specified provider and model code already exist in the model group.
    shared_ptr<string> config_ {};
    // The template group description.
    shared_ptr<string> description_ {};
    // The model group ID.
    // 
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // The template group name.
    shared_ptr<string> name_ {};
    // The authorization scope. This parameter is optional and can be modified only for Common model groups. Valid values: ALL_USER and USER_MIXED.
    shared_ptr<string> refScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
