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
      DARABONBA_PTR_TO_JSON(ExpertSuites, expertSuitesShrink_);
      DARABONBA_PTR_TO_JSON(Metadata, metadataShrink_);
      DARABONBA_PTR_TO_JSON(Model, modelShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishImmediately, publishImmediately_);
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
      DARABONBA_PTR_FROM_JSON(ExpertSuites, expertSuitesShrink_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadataShrink_);
      DARABONBA_PTR_FROM_JSON(Model, modelShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishImmediately, publishImmediately_);
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
        && this->description_ == nullptr && this->displayName_ == nullptr && this->expertSuitesShrink_ == nullptr && this->metadataShrink_ == nullptr && this->modelShrink_ == nullptr
        && this->name_ == nullptr && this->publishImmediately_ == nullptr && this->skillsShrink_ == nullptr && this->systemPrompt_ == nullptr && this->toolsShrink_ == nullptr
        && this->visibility_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
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


    // expertSuitesShrink Field Functions 
    bool hasExpertSuitesShrink() const { return this->expertSuitesShrink_ != nullptr;};
    void deleteExpertSuitesShrink() { this->expertSuitesShrink_ = nullptr;};
    inline string getExpertSuitesShrink() const { DARABONBA_PTR_GET_DEFAULT(expertSuitesShrink_, "") };
    inline CreateAgentShrinkRequest& setExpertSuitesShrink(string expertSuitesShrink) { DARABONBA_PTR_SET_VALUE(expertSuitesShrink_, expertSuitesShrink) };


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


    // publishImmediately Field Functions 
    bool hasPublishImmediately() const { return this->publishImmediately_ != nullptr;};
    void deletePublishImmediately() { this->publishImmediately_ = nullptr;};
    inline bool getPublishImmediately() const { DARABONBA_PTR_GET_DEFAULT(publishImmediately_, false) };
    inline CreateAgentShrinkRequest& setPublishImmediately(bool publishImmediately) { DARABONBA_PTR_SET_VALUE(publishImmediately_, publishImmediately) };


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
    // The list of sub-agents that can be called by this agent.
    shared_ptr<string> callableAgentsShrink_ {};
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // The released expert suites bound to the agent. For personal or enterprise suites, use SuiteId and optionally specify a fixed Version or VersionSelector. For official suites, you must explicitly set Source to OFFICIAL and specify the SuiteId from the official catalog. Do not specify Version or VersionSelector. If this parameter is not specified, an empty list is created, and official suites are not loaded by default.
    shared_ptr<string> expertSuitesShrink_ {};
    // The extended metadata as key-value pairs.
    shared_ptr<string> metadataShrink_ {};
    // The model configuration.
    shared_ptr<string> modelShrink_ {};
    // The name of the agent. It must be unique within the current account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to publish the agent immediately after creation. Valid values:
    // - true: Publishes the created version.
    // - false or omitted: Retains the original behavior of creating a draft only.
    // Saving and publishing are not atomic operations. If publishing fails, the draft may already exist. Query the agent before retrying to avoid duplicate creation.
    shared_ptr<bool> publishImmediately_ {};
    // The list of skills.
    shared_ptr<string> skillsShrink_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of tools.
    shared_ptr<string> toolsShrink_ {};
    // The visibility level. Valid values:<br>
    // `TENANT`: Visible within the account.<br>
    // `PROJECT`: Visible to specified projects.<br>
    // `USER`: Visible to specified users.
    shared_ptr<string> visibility_ {};
    // The visibility scope. The corresponding fields are used based on the Visibility parameter.
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
