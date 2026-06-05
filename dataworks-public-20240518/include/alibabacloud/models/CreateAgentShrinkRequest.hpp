// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableAgents, callableAgentsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Metadata, metadataShrink_);
      DARABONBA_PTR_TO_JSON(Model, modelShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, toolsShrink_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgentsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadataShrink_);
      DARABONBA_PTR_FROM_JSON(Model, modelShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skills, skillsShrink_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, toolsShrink_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScopeShrink_);
    };
    CreateAgentShrinkRequest() = default ;
    CreateAgentShrinkRequest(const CreateAgentShrinkRequest &) = default ;
    CreateAgentShrinkRequest(CreateAgentShrinkRequest &&) = default ;
    CreateAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentShrinkRequest() = default ;
    CreateAgentShrinkRequest& operator=(const CreateAgentShrinkRequest &) = default ;
    CreateAgentShrinkRequest& operator=(CreateAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callableAgentsShrink_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->metadataShrink_ == nullptr && this->modelShrink_ == nullptr && this->name_ == nullptr
        && this->skillsShrink_ == nullptr && this->systemPrompt_ == nullptr && this->toolsShrink_ == nullptr && this->visibility_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
    // callableAgentsShrink Field Functions 
    bool hasCallableAgentsShrink() const { return this->callableAgentsShrink_ != nullptr;};
    void deleteCallableAgentsShrink() { this->callableAgentsShrink_ = nullptr;};
    inline string getCallableAgentsShrink() const { DARABONBA_PTR_GET_DEFAULT(callableAgentsShrink_, "") };
    inline CreateAgentShrinkRequest& setCallableAgentsShrink(string callableAgentsShrink) { DARABONBA_PTR_SET_VALUE(callableAgentsShrink_, callableAgentsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAgentShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // metadataShrink Field Functions 
    bool hasMetadataShrink() const { return this->metadataShrink_ != nullptr;};
    void deleteMetadataShrink() { this->metadataShrink_ = nullptr;};
    inline string getMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(metadataShrink_, "") };
    inline CreateAgentShrinkRequest& setMetadataShrink(string metadataShrink) { DARABONBA_PTR_SET_VALUE(metadataShrink_, metadataShrink) };


    // modelShrink Field Functions 
    bool hasModelShrink() const { return this->modelShrink_ != nullptr;};
    void deleteModelShrink() { this->modelShrink_ = nullptr;};
    inline string getModelShrink() const { DARABONBA_PTR_GET_DEFAULT(modelShrink_, "") };
    inline CreateAgentShrinkRequest& setModelShrink(string modelShrink) { DARABONBA_PTR_SET_VALUE(modelShrink_, modelShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillsShrink Field Functions 
    bool hasSkillsShrink() const { return this->skillsShrink_ != nullptr;};
    void deleteSkillsShrink() { this->skillsShrink_ = nullptr;};
    inline string getSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillsShrink_, "") };
    inline CreateAgentShrinkRequest& setSkillsShrink(string skillsShrink) { DARABONBA_PTR_SET_VALUE(skillsShrink_, skillsShrink) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateAgentShrinkRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // toolsShrink Field Functions 
    bool hasToolsShrink() const { return this->toolsShrink_ != nullptr;};
    void deleteToolsShrink() { this->toolsShrink_ = nullptr;};
    inline string getToolsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolsShrink_, "") };
    inline CreateAgentShrinkRequest& setToolsShrink(string toolsShrink) { DARABONBA_PTR_SET_VALUE(toolsShrink_, toolsShrink) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateAgentShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScopeShrink Field Functions 
    bool hasVisibilityScopeShrink() const { return this->visibilityScopeShrink_ != nullptr;};
    void deleteVisibilityScopeShrink() { this->visibilityScopeShrink_ = nullptr;};
    inline string getVisibilityScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityScopeShrink_, "") };
    inline CreateAgentShrinkRequest& setVisibilityScopeShrink(string visibilityScopeShrink) { DARABONBA_PTR_SET_VALUE(visibilityScopeShrink_, visibilityScopeShrink) };


  protected:
    shared_ptr<string> callableAgentsShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> metadataShrink_ {};
    shared_ptr<string> modelShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> skillsShrink_ {};
    shared_ptr<string> systemPrompt_ {};
    shared_ptr<string> toolsShrink_ {};
    shared_ptr<string> visibility_ {};
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
