// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableAgents, callableAgentsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ExpectedVersion, expectedVersion_);
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
    friend void from_json(const Darabonba::Json& j, UpdateAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgentsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ExpectedVersion, expectedVersion_);
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
    UpdateAgentShrinkRequest() = default ;
    UpdateAgentShrinkRequest(const UpdateAgentShrinkRequest &) = default ;
    UpdateAgentShrinkRequest(UpdateAgentShrinkRequest &&) = default ;
    UpdateAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentShrinkRequest() = default ;
    UpdateAgentShrinkRequest& operator=(const UpdateAgentShrinkRequest &) = default ;
    UpdateAgentShrinkRequest& operator=(UpdateAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callableAgentsShrink_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->expectedVersion_ == nullptr && this->expertSuitesShrink_ == nullptr && this->metadataShrink_ == nullptr
        && this->modelShrink_ == nullptr && this->name_ == nullptr && this->publishImmediately_ == nullptr && this->skillsShrink_ == nullptr && this->systemPrompt_ == nullptr
        && this->toolsShrink_ == nullptr && this->visibility_ == nullptr && this->visibilityScopeShrink_ == nullptr; };
    // callableAgentsShrink Field Functions 
    bool hasCallableAgentsShrink() const { return this->callableAgentsShrink_ != nullptr;};
    void deleteCallableAgentsShrink() { this->callableAgentsShrink_ = nullptr;};
    inline string getCallableAgentsShrink() const { DARABONBA_PTR_GET_DEFAULT(callableAgentsShrink_, "") };
    inline UpdateAgentShrinkRequest& setCallableAgentsShrink(string callableAgentsShrink) { DARABONBA_PTR_SET_VALUE(callableAgentsShrink_, callableAgentsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAgentShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int32_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0) };
    inline UpdateAgentShrinkRequest& setExpectedVersion(int32_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // expertSuitesShrink Field Functions 
    bool hasExpertSuitesShrink() const { return this->expertSuitesShrink_ != nullptr;};
    void deleteExpertSuitesShrink() { this->expertSuitesShrink_ = nullptr;};
    inline string getExpertSuitesShrink() const { DARABONBA_PTR_GET_DEFAULT(expertSuitesShrink_, "") };
    inline UpdateAgentShrinkRequest& setExpertSuitesShrink(string expertSuitesShrink) { DARABONBA_PTR_SET_VALUE(expertSuitesShrink_, expertSuitesShrink) };


    // metadataShrink Field Functions 
    bool hasMetadataShrink() const { return this->metadataShrink_ != nullptr;};
    void deleteMetadataShrink() { this->metadataShrink_ = nullptr;};
    inline string getMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(metadataShrink_, "") };
    inline UpdateAgentShrinkRequest& setMetadataShrink(string metadataShrink) { DARABONBA_PTR_SET_VALUE(metadataShrink_, metadataShrink) };


    // modelShrink Field Functions 
    bool hasModelShrink() const { return this->modelShrink_ != nullptr;};
    void deleteModelShrink() { this->modelShrink_ = nullptr;};
    inline string getModelShrink() const { DARABONBA_PTR_GET_DEFAULT(modelShrink_, "") };
    inline UpdateAgentShrinkRequest& setModelShrink(string modelShrink) { DARABONBA_PTR_SET_VALUE(modelShrink_, modelShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishImmediately Field Functions 
    bool hasPublishImmediately() const { return this->publishImmediately_ != nullptr;};
    void deletePublishImmediately() { this->publishImmediately_ = nullptr;};
    inline bool getPublishImmediately() const { DARABONBA_PTR_GET_DEFAULT(publishImmediately_, false) };
    inline UpdateAgentShrinkRequest& setPublishImmediately(bool publishImmediately) { DARABONBA_PTR_SET_VALUE(publishImmediately_, publishImmediately) };


    // skillsShrink Field Functions 
    bool hasSkillsShrink() const { return this->skillsShrink_ != nullptr;};
    void deleteSkillsShrink() { this->skillsShrink_ = nullptr;};
    inline string getSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillsShrink_, "") };
    inline UpdateAgentShrinkRequest& setSkillsShrink(string skillsShrink) { DARABONBA_PTR_SET_VALUE(skillsShrink_, skillsShrink) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline UpdateAgentShrinkRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // toolsShrink Field Functions 
    bool hasToolsShrink() const { return this->toolsShrink_ != nullptr;};
    void deleteToolsShrink() { this->toolsShrink_ = nullptr;};
    inline string getToolsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolsShrink_, "") };
    inline UpdateAgentShrinkRequest& setToolsShrink(string toolsShrink) { DARABONBA_PTR_SET_VALUE(toolsShrink_, toolsShrink) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateAgentShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScopeShrink Field Functions 
    bool hasVisibilityScopeShrink() const { return this->visibilityScopeShrink_ != nullptr;};
    void deleteVisibilityScopeShrink() { this->visibilityScopeShrink_ = nullptr;};
    inline string getVisibilityScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityScopeShrink_, "") };
    inline UpdateAgentShrinkRequest& setVisibilityScopeShrink(string visibilityScopeShrink) { DARABONBA_PTR_SET_VALUE(visibilityScopeShrink_, visibilityScopeShrink) };


  protected:
    // The list of callable sub-agent references. For non-empty references, the referenced sub-agents must be visible. The agent cannot reference itself or form a call loop. Omit this parameter if no modification is required. Do not use an empty array to express general retention or clearing semantics.
    shared_ptr<string> callableAgentsShrink_ {};
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // The agent definition version used for concurrency control. We recommend explicitly specifying the AgentVersion you just obtained from GetAgent for each call. The update is rejected if the version does not match the current version on the server. To ensure compatibility with different deployment versions, do not rely on the server-side processing when this parameter is omitted.
    shared_ptr<int32_t> expectedVersion_ {};
    // The list of expert suite references. If omitted, the existing references are retained. An explicit empty array clears the references. For official suites, specify only Source=OFFICIAL and SuiteId. Version, VersionSelector, or client artifact fields are not accepted. For custom suites, use SuiteId, and you can explicitly specify an existing integer Version.
    shared_ptr<string> expertSuitesShrink_ {};
    // The extended metadata. If omitted, the existing metadata is retained. If provided, the business metadata is updated, and the server retains the protected system metadata.
    shared_ptr<string> metadataShrink_ {};
    // The model configuration.
    shared_ptr<string> modelShrink_ {};
    // The name of the agent to be updated. Use the Name returned by GetAgent. This field is used to locate the target agent and is not used for renaming.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to publish the agent immediately after the update. If this parameter is set to true, the operation saves a new draft version before requesting publication. If this parameter is set to false or omitted, it saves only the definition. Saving and publishing are not atomic operations. If the operation fails, call GetAgent to read the current version before retrying to avoid blindly repeating the update.
    shared_ptr<bool> publishImmediately_ {};
    // The list of skill references. Omit this parameter if no modification is required. Do not use an empty array to indicate retention or clearing. For official skills, specify only Source=OFFICIAL and SkillId. Name, Version, VersionSelector, or client artifact fields are not accepted. For custom skills, specify Name, and you can explicitly specify an existing integer Version.
    shared_ptr<string> skillsShrink_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of tool references. Omit this parameter if no modification is required. The current new backend retains existing tools even for an empty array. A non-empty array replaces the references. Each item must include Kind and the corresponding configuration, and cannot include only Name. Replace the MCP service and tool names in the example with actual values available to the current identity.
    shared_ptr<string> toolsShrink_ {};
    // The visibility level.<br>TENANT: visible within the account.<br>PROJECT: visible to specified projects.<br>USER: visible to specified users.
    shared_ptr<string> visibility_ {};
    // The visibility scope. The corresponding field is used based on the Visibility value.
    shared_ptr<string> visibilityScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
