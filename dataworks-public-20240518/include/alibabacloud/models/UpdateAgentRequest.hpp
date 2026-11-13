// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(ExpertSuites, expertSuites_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_ANY_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PublishImmediately, publishImmediately_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(ExpertSuites, expertSuites_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PublishImmediately, publishImmediately_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
    };
    UpdateAgentRequest() = default ;
    UpdateAgentRequest(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest(UpdateAgentRequest &&) = default ;
    UpdateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRequest() = default ;
    UpdateAgentRequest& operator=(const UpdateAgentRequest &) = default ;
    UpdateAgentRequest& operator=(UpdateAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VisibilityScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisibilityScope& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, VisibilityScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      VisibilityScope() = default ;
      VisibilityScope(const VisibilityScope &) = default ;
      VisibilityScope(VisibilityScope &&) = default ;
      VisibilityScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisibilityScope() = default ;
      VisibilityScope& operator=(const VisibilityScope &) = default ;
      VisibilityScope& operator=(VisibilityScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectIds_ == nullptr
        && this->userIds_ == nullptr; };
      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<string> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<string>) };
      inline vector<string> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<string>) };
      inline VisibilityScope& setProjectIds(const vector<string> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline VisibilityScope& setProjectIds(vector<string> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline VisibilityScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline VisibilityScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The list of visible project IDs. This parameter takes effect when Visibility is set to PROJECT.
      shared_ptr<vector<string>> projectIds_ {};
      // The list of visible user IDs. This parameter is used when Visibility is set to USER.
      shared_ptr<vector<string>> userIds_ {};
    };

    class Tools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tools& obj) { 
        DARABONBA_PTR_TO_JSON(BuiltinName, builtinName_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(McpItems, mcpItems_);
        DARABONBA_PTR_TO_JSON(McpServerName, mcpServerName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Tools& obj) { 
        DARABONBA_PTR_FROM_JSON(BuiltinName, builtinName_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(McpItems, mcpItems_);
        DARABONBA_PTR_FROM_JSON(McpServerName, mcpServerName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Tools() = default ;
      Tools(const Tools &) = default ;
      Tools(Tools &&) = default ;
      Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tools() = default ;
      Tools& operator=(const Tools &) = default ;
      Tools& operator=(Tools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->builtinName_ == nullptr
        && this->kind_ == nullptr && this->mcpItems_ == nullptr && this->mcpServerName_ == nullptr && this->name_ == nullptr; };
      // builtinName Field Functions 
      bool hasBuiltinName() const { return this->builtinName_ != nullptr;};
      void deleteBuiltinName() { this->builtinName_ = nullptr;};
      inline string getBuiltinName() const { DARABONBA_PTR_GET_DEFAULT(builtinName_, "") };
      inline Tools& setBuiltinName(string builtinName) { DARABONBA_PTR_SET_VALUE(builtinName_, builtinName) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Tools& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // mcpItems Field Functions 
      bool hasMcpItems() const { return this->mcpItems_ != nullptr;};
      void deleteMcpItems() { this->mcpItems_ = nullptr;};
      inline const vector<string> & getMcpItems() const { DARABONBA_PTR_GET_CONST(mcpItems_, vector<string>) };
      inline vector<string> getMcpItems() { DARABONBA_PTR_GET(mcpItems_, vector<string>) };
      inline Tools& setMcpItems(const vector<string> & mcpItems) { DARABONBA_PTR_SET_VALUE(mcpItems_, mcpItems) };
      inline Tools& setMcpItems(vector<string> && mcpItems) { DARABONBA_PTR_SET_RVALUE(mcpItems_, mcpItems) };


      // mcpServerName Field Functions 
      bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
      void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
      inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
      inline Tools& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the built-in toolset. This parameter is required when Kind is set to BUILTIN_TOOLSET. Use a name supported by the target server. Omit this parameter when Kind is set to MCP_TOOLSET.
      shared_ptr<string> builtinName_ {};
      // The tool type. A valid tool reference must specify BUILTIN_TOOLSET or MCP_TOOLSET. For BUILTIN_TOOLSET, BuiltinName must also be specified. For MCP_TOOLSET, McpServerName must also be specified. The target server validates the reference based on the tool type.
      shared_ptr<string> kind_ {};
      // The list of selected MCP tool names. If this parameter is omitted or an empty array is provided, no filtering by tool name is performed. Each item must be an actual tool name in the target service.
      shared_ptr<vector<string>> mcpItems_ {};
      // The MCP service name. This parameter is required when Kind is set to MCP_TOOLSET. The service must be one that the current invoker has permissions to reference and that has an active published version.
      shared_ptr<string> mcpServerName_ {};
      // A field retained from the legacy model. Specifying only Name does not constitute a valid tool configuration and cannot replace Kind, BuiltinName, or McpServerName.
      shared_ptr<string> name_ {};
    };

    class Skills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skills& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
      };
      friend void from_json(const Darabonba::Json& j, Skills& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionSelector, versionSelector_);
      };
      Skills() = default ;
      Skills(const Skills &) = default ;
      Skills(Skills &&) = default ;
      Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skills() = default ;
      Skills& operator=(const Skills &) = default ;
      Skills& operator=(Skills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->skillId_ == nullptr && this->source_ == nullptr && this->version_ == nullptr && this->versionSelector_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Skills& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Skills& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Skills& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionSelector Field Functions 
      bool hasVersionSelector() const { return this->versionSelector_ != nullptr;};
      void deleteVersionSelector() { this->versionSelector_ = nullptr;};
      inline string getVersionSelector() const { DARABONBA_PTR_GET_DEFAULT(versionSelector_, "") };
      inline Skills& setVersionSelector(string versionSelector) { DARABONBA_PTR_SET_VALUE(versionSelector_, versionSelector) };


    protected:
      // The name of the custom skill. Use the Name of a visible custom skill. For official skills, use SkillId.
      shared_ptr<string> name_ {};
      // The resource ID of the official skill. This parameter is used when Source is set to OFFICIAL.
      shared_ptr<string> skillId_ {};
      // The source of the skill. OFFICIAL: official skill, used with SkillId. DB or omitted: custom skill, used with Name.
      shared_ptr<string> source_ {};
      // The published integer version number of the custom skill, used to explicitly select an existing version. Do not pass this field when Source is set to OFFICIAL. This parameter is mutually exclusive with VersionSelector.
      shared_ptr<int32_t> version_ {};
      // The semantic version selection expression of the custom skill, such as ^1.2.3. Use this parameter only when the target server has deployed the custom resource version selection capability. This parameter is mutually exclusive with Version. This field is not accepted when Source is set to OFFICIAL. To ensure compatibility with servers of unconfirmed versions, use an existing integer Version.
      shared_ptr<string> versionSelector_ {};
    };

    class ExpertSuites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpertSuites& obj) { 
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SuiteId, suiteId_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
      };
      friend void from_json(const Darabonba::Json& j, ExpertSuites& obj) { 
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SuiteId, suiteId_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionSelector, versionSelector_);
      };
      ExpertSuites() = default ;
      ExpertSuites(const ExpertSuites &) = default ;
      ExpertSuites(ExpertSuites &&) = default ;
      ExpertSuites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExpertSuites() = default ;
      ExpertSuites& operator=(const ExpertSuites &) = default ;
      ExpertSuites& operator=(ExpertSuites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->source_ == nullptr
        && this->suiteId_ == nullptr && this->version_ == nullptr && this->versionSelector_ == nullptr; };
      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ExpertSuites& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // suiteId Field Functions 
      bool hasSuiteId() const { return this->suiteId_ != nullptr;};
      void deleteSuiteId() { this->suiteId_ = nullptr;};
      inline string getSuiteId() const { DARABONBA_PTR_GET_DEFAULT(suiteId_, "") };
      inline ExpertSuites& setSuiteId(string suiteId) { DARABONBA_PTR_SET_VALUE(suiteId_, suiteId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ExpertSuites& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionSelector Field Functions 
      bool hasVersionSelector() const { return this->versionSelector_ != nullptr;};
      void deleteVersionSelector() { this->versionSelector_ = nullptr;};
      inline string getVersionSelector() const { DARABONBA_PTR_GET_DEFAULT(versionSelector_, "") };
      inline ExpertSuites& setVersionSelector(string versionSelector) { DARABONBA_PTR_SET_VALUE(versionSelector_, versionSelector) };


    protected:
      // The source of the expert suite. OFFICIAL: official suite. DB or omitted: custom suite. Both types of references use SuiteId, and the version fields apply only to custom resources.
      shared_ptr<string> source_ {};
      // The ID of the target expert suite. The suite must be one that the current caller has permissions to reference.
      shared_ptr<string> suiteId_ {};
      // The published integer version number of the custom expert suite, used to explicitly select an existing version. Do not pass this field when Source is set to OFFICIAL. This parameter is mutually exclusive with VersionSelector. To obtain explicit and reproducible references, do not rely on the default selection when the version is omitted.
      shared_ptr<int32_t> version_ {};
      // The semantic version selection expression of the custom expert suite, such as ^1.2.3. Use this parameter only when the target server has deployed the custom resource version selection capability. This parameter is mutually exclusive with Version. This field is not accepted when Source is set to OFFICIAL. To ensure compatibility with servers of unconfirmed versions, use an existing integer Version.
      shared_ptr<string> versionSelector_ {};
    };

    class CallableAgents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallableAgents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CallableAgents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      CallableAgents() = default ;
      CallableAgents(const CallableAgents &) = default ;
      CallableAgents(CallableAgents &&) = default ;
      CallableAgents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallableAgents() = default ;
      CallableAgents& operator=(const CallableAgents &) = default ;
      CallableAgents& operator=(CallableAgents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CallableAgents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the called sub-agent. The agent must be one that the current caller has permissions to use.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->callableAgents_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->expectedVersion_ == nullptr && this->expertSuites_ == nullptr && this->metadata_ == nullptr
        && this->model_ == nullptr && this->name_ == nullptr && this->publishImmediately_ == nullptr && this->skills_ == nullptr && this->systemPrompt_ == nullptr
        && this->tools_ == nullptr && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
    // callableAgents Field Functions 
    bool hasCallableAgents() const { return this->callableAgents_ != nullptr;};
    void deleteCallableAgents() { this->callableAgents_ = nullptr;};
    inline const vector<UpdateAgentRequest::CallableAgents> & getCallableAgents() const { DARABONBA_PTR_GET_CONST(callableAgents_, vector<UpdateAgentRequest::CallableAgents>) };
    inline vector<UpdateAgentRequest::CallableAgents> getCallableAgents() { DARABONBA_PTR_GET(callableAgents_, vector<UpdateAgentRequest::CallableAgents>) };
    inline UpdateAgentRequest& setCallableAgents(const vector<UpdateAgentRequest::CallableAgents> & callableAgents) { DARABONBA_PTR_SET_VALUE(callableAgents_, callableAgents) };
    inline UpdateAgentRequest& setCallableAgents(vector<UpdateAgentRequest::CallableAgents> && callableAgents) { DARABONBA_PTR_SET_RVALUE(callableAgents_, callableAgents) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int32_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0) };
    inline UpdateAgentRequest& setExpectedVersion(int32_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // expertSuites Field Functions 
    bool hasExpertSuites() const { return this->expertSuites_ != nullptr;};
    void deleteExpertSuites() { this->expertSuites_ = nullptr;};
    inline const vector<UpdateAgentRequest::ExpertSuites> & getExpertSuites() const { DARABONBA_PTR_GET_CONST(expertSuites_, vector<UpdateAgentRequest::ExpertSuites>) };
    inline vector<UpdateAgentRequest::ExpertSuites> getExpertSuites() { DARABONBA_PTR_GET(expertSuites_, vector<UpdateAgentRequest::ExpertSuites>) };
    inline UpdateAgentRequest& setExpertSuites(const vector<UpdateAgentRequest::ExpertSuites> & expertSuites) { DARABONBA_PTR_SET_VALUE(expertSuites_, expertSuites) };
    inline UpdateAgentRequest& setExpertSuites(vector<UpdateAgentRequest::ExpertSuites> && expertSuites) { DARABONBA_PTR_SET_RVALUE(expertSuites_, expertSuites) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline UpdateAgentRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UpdateAgentRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline     const Darabonba::Json & getModel() const { DARABONBA_GET(model_) };
    Darabonba::Json & getModel() { DARABONBA_GET(model_) };
    inline UpdateAgentRequest& setModel(const Darabonba::Json & model) { DARABONBA_SET_VALUE(model_, model) };
    inline UpdateAgentRequest& setModel(Darabonba::Json && model) { DARABONBA_SET_RVALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishImmediately Field Functions 
    bool hasPublishImmediately() const { return this->publishImmediately_ != nullptr;};
    void deletePublishImmediately() { this->publishImmediately_ = nullptr;};
    inline bool getPublishImmediately() const { DARABONBA_PTR_GET_DEFAULT(publishImmediately_, false) };
    inline UpdateAgentRequest& setPublishImmediately(bool publishImmediately) { DARABONBA_PTR_SET_VALUE(publishImmediately_, publishImmediately) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<UpdateAgentRequest::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<UpdateAgentRequest::Skills>) };
    inline vector<UpdateAgentRequest::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<UpdateAgentRequest::Skills>) };
    inline UpdateAgentRequest& setSkills(const vector<UpdateAgentRequest::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline UpdateAgentRequest& setSkills(vector<UpdateAgentRequest::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline UpdateAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<UpdateAgentRequest::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<UpdateAgentRequest::Tools>) };
    inline vector<UpdateAgentRequest::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<UpdateAgentRequest::Tools>) };
    inline UpdateAgentRequest& setTools(const vector<UpdateAgentRequest::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateAgentRequest& setTools(vector<UpdateAgentRequest::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateAgentRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScope Field Functions 
    bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
    void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
    inline const UpdateAgentRequest::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, UpdateAgentRequest::VisibilityScope) };
    inline UpdateAgentRequest::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, UpdateAgentRequest::VisibilityScope) };
    inline UpdateAgentRequest& setVisibilityScope(const UpdateAgentRequest::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
    inline UpdateAgentRequest& setVisibilityScope(UpdateAgentRequest::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


  protected:
    // The list of callable sub-agent references. For non-empty references, the referenced sub-agents must be visible. The agent cannot reference itself or form a call loop. Omit this parameter if no modification is required. Do not use an empty array to express general retention or clearing semantics.
    shared_ptr<vector<UpdateAgentRequest::CallableAgents>> callableAgents_ {};
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // The agent definition version used for concurrency control. We recommend explicitly specifying the AgentVersion you just obtained from GetAgent for each call. The update is rejected if the version does not match the current version on the server. To ensure compatibility with different deployment versions, do not rely on the server-side processing when this parameter is omitted.
    shared_ptr<int32_t> expectedVersion_ {};
    // The list of expert suite references. If omitted, the existing references are retained. An explicit empty array clears the references. For official suites, specify only Source=OFFICIAL and SuiteId. Version, VersionSelector, or client artifact fields are not accepted. For custom suites, use SuiteId, and you can explicitly specify an existing integer Version.
    shared_ptr<vector<UpdateAgentRequest::ExpertSuites>> expertSuites_ {};
    // The extended metadata. If omitted, the existing metadata is retained. If provided, the business metadata is updated, and the server retains the protected system metadata.
    Darabonba::Json metadata_ {};
    // The model configuration.
    Darabonba::Json model_ {};
    // The name of the agent to be updated. Use the Name returned by GetAgent. This field is used to locate the target agent and is not used for renaming.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to publish the agent immediately after the update. If this parameter is set to true, the operation saves a new draft version before requesting publication. If this parameter is set to false or omitted, it saves only the definition. Saving and publishing are not atomic operations. If the operation fails, call GetAgent to read the current version before retrying to avoid blindly repeating the update.
    shared_ptr<bool> publishImmediately_ {};
    // The list of skill references. Omit this parameter if no modification is required. Do not use an empty array to indicate retention or clearing. For official skills, specify only Source=OFFICIAL and SkillId. Name, Version, VersionSelector, or client artifact fields are not accepted. For custom skills, specify Name, and you can explicitly specify an existing integer Version.
    shared_ptr<vector<UpdateAgentRequest::Skills>> skills_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of tool references. Omit this parameter if no modification is required. The current new backend retains existing tools even for an empty array. A non-empty array replaces the references. Each item must include Kind and the corresponding configuration, and cannot include only Name. Replace the MCP service and tool names in the example with actual values available to the current identity.
    shared_ptr<vector<UpdateAgentRequest::Tools>> tools_ {};
    // The visibility level.<br>TENANT: visible within the account.<br>PROJECT: visible to specified projects.<br>USER: visible to specified users.
    shared_ptr<string> visibility_ {};
    // The visibility scope. The corresponding field is used based on the Visibility value.
    shared_ptr<UpdateAgentRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
