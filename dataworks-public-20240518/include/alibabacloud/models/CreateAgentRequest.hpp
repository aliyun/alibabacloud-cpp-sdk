// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTREQUEST_HPP_
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
  class CreateAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
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
    friend void from_json(const Darabonba::Json& j, CreateAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgents_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
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
    CreateAgentRequest() = default ;
    CreateAgentRequest(const CreateAgentRequest &) = default ;
    CreateAgentRequest(CreateAgentRequest &&) = default ;
    CreateAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRequest() = default ;
    CreateAgentRequest& operator=(const CreateAgentRequest &) = default ;
    CreateAgentRequest& operator=(CreateAgentRequest &&) = default ;
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
      // The list of visible project IDs. This parameter takes effect when Visibility is set to `PROJECT`.
      shared_ptr<vector<string>> projectIds_ {};
      // The list of visible user IDs. This parameter takes effect when Visibility is set to `USER`.
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
      // Required when Kind is BUILTIN_TOOLSET. Specifies the name of the built-in toolset supported by the target server. Omit this parameter when Kind is MCP_TOOLSET.
      shared_ptr<string> builtinName_ {};
      // Required for valid tool references. BUILTIN_TOOLSET indicates a built-in toolset, and BuiltinName must be specified. MCP_TOOLSET indicates an MCP toolset, and McpServerName must be specified. The target server validates the parameter based on the tool type.
      shared_ptr<string> kind_ {};
      // Optional when Kind is MCP_TOOLSET. If specified, only the listed tools are used. If omitted or left as an empty array, tools are not filtered by name. Each item must be the name of an actual tool in the target MCP service.
      shared_ptr<vector<string>> mcpItems_ {};
      // Required when Kind is MCP_TOOLSET. Specifies the MCP service name that the current caller has permission to reference and that has an active published version.
      shared_ptr<string> mcpServerName_ {};
      // The name of the MCP server.
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
      // The name of the skill.
      shared_ptr<string> name_ {};
      // When Source is OFFICIAL, specify the official catalog ID. Do not specify Name, Version, or VersionSelector. Do not specify this field for personal or enterprise skills.
      shared_ptr<string> skillId_ {};
      // OFFICIAL indicates an official catalog resource. DB indicates a personal or enterprise resource. If omitted, the original query-by-name semantics are maintained.
      shared_ptr<string> source_ {};
      // Used only for personal or enterprise skills. Specifies the fixed integer revision number of a published snapshot. This parameter is mutually exclusive with VersionSelector. Publishing a new version does not change the fixed reference. If both are omitted, the latest version is used for each new session. Do not specify this parameter when Source is OFFICIAL.
      shared_ptr<int32_t> version_ {};
      // Used only for personal or enterprise resources. This parameter is mutually exclusive with Version. Supports exact semantic versions, latest, and full npm/node-semver range syntax, such as 1.2.*, ^1.2.3, ~1.2.3, >=1.0.0 <2.0.0, and 1.x || 2.x. If both are omitted, the latest version is used, and the highest matching published version is selected for each new session. Existing fixed integer references remain unchanged. Do not specify this parameter when Source is OFFICIAL.
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
      // OFFICIAL indicates an official catalog resource. DB indicates a personal or enterprise resource. If omitted, the original database resource query semantics are maintained. For official resources, the artifact version is fixed when the agent is published.
      shared_ptr<string> source_ {};
      // When passing expert suite references, each item must provide a SuiteId, which is validated by the server. When Source is OFFICIAL, this is the official catalog ID. Otherwise, this is the ID returned by expert suite management. The referenced resource must be visible to the caller.
      shared_ptr<string> suiteId_ {};
      // Used only for personal or enterprise suites. Specifies the fixed integer revision number of a published snapshot. This parameter is mutually exclusive with VersionSelector. Publishing a new version does not change the fixed reference. If both are omitted, the latest version is used for each new session. Do not specify this parameter when Source is OFFICIAL.
      shared_ptr<int32_t> version_ {};
      // Used only for personal or enterprise resources. This parameter is mutually exclusive with Version. Supports exact semantic versions, latest, and full npm/node-semver range syntax, such as 1.2.*, ^1.2.3, ~1.2.3, >=1.0.0 <2.0.0, and 1.x || 2.x. If both are omitted, the latest version is used, and the highest matching published version is selected for each new session. Existing fixed integer references remain unchanged. Do not specify this parameter when Source is OFFICIAL.
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
      // The name of the agent.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->callableAgents_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->expertSuites_ == nullptr && this->metadata_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->publishImmediately_ == nullptr && this->skills_ == nullptr && this->systemPrompt_ == nullptr && this->tools_ == nullptr
        && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
    // callableAgents Field Functions 
    bool hasCallableAgents() const { return this->callableAgents_ != nullptr;};
    void deleteCallableAgents() { this->callableAgents_ = nullptr;};
    inline const vector<CreateAgentRequest::CallableAgents> & getCallableAgents() const { DARABONBA_PTR_GET_CONST(callableAgents_, vector<CreateAgentRequest::CallableAgents>) };
    inline vector<CreateAgentRequest::CallableAgents> getCallableAgents() { DARABONBA_PTR_GET(callableAgents_, vector<CreateAgentRequest::CallableAgents>) };
    inline CreateAgentRequest& setCallableAgents(const vector<CreateAgentRequest::CallableAgents> & callableAgents) { DARABONBA_PTR_SET_VALUE(callableAgents_, callableAgents) };
    inline CreateAgentRequest& setCallableAgents(vector<CreateAgentRequest::CallableAgents> && callableAgents) { DARABONBA_PTR_SET_RVALUE(callableAgents_, callableAgents) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateAgentRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expertSuites Field Functions 
    bool hasExpertSuites() const { return this->expertSuites_ != nullptr;};
    void deleteExpertSuites() { this->expertSuites_ = nullptr;};
    inline const vector<CreateAgentRequest::ExpertSuites> & getExpertSuites() const { DARABONBA_PTR_GET_CONST(expertSuites_, vector<CreateAgentRequest::ExpertSuites>) };
    inline vector<CreateAgentRequest::ExpertSuites> getExpertSuites() { DARABONBA_PTR_GET(expertSuites_, vector<CreateAgentRequest::ExpertSuites>) };
    inline CreateAgentRequest& setExpertSuites(const vector<CreateAgentRequest::ExpertSuites> & expertSuites) { DARABONBA_PTR_SET_VALUE(expertSuites_, expertSuites) };
    inline CreateAgentRequest& setExpertSuites(vector<CreateAgentRequest::ExpertSuites> && expertSuites) { DARABONBA_PTR_SET_RVALUE(expertSuites_, expertSuites) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateAgentRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateAgentRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline     const Darabonba::Json & getModel() const { DARABONBA_GET(model_) };
    Darabonba::Json & getModel() { DARABONBA_GET(model_) };
    inline CreateAgentRequest& setModel(const Darabonba::Json & model) { DARABONBA_SET_VALUE(model_, model) };
    inline CreateAgentRequest& setModel(Darabonba::Json && model) { DARABONBA_SET_RVALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publishImmediately Field Functions 
    bool hasPublishImmediately() const { return this->publishImmediately_ != nullptr;};
    void deletePublishImmediately() { this->publishImmediately_ = nullptr;};
    inline bool getPublishImmediately() const { DARABONBA_PTR_GET_DEFAULT(publishImmediately_, false) };
    inline CreateAgentRequest& setPublishImmediately(bool publishImmediately) { DARABONBA_PTR_SET_VALUE(publishImmediately_, publishImmediately) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<CreateAgentRequest::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<CreateAgentRequest::Skills>) };
    inline vector<CreateAgentRequest::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<CreateAgentRequest::Skills>) };
    inline CreateAgentRequest& setSkills(const vector<CreateAgentRequest::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline CreateAgentRequest& setSkills(vector<CreateAgentRequest::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // systemPrompt Field Functions 
    bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
    void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
    inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
    inline CreateAgentRequest& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<CreateAgentRequest::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<CreateAgentRequest::Tools>) };
    inline vector<CreateAgentRequest::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<CreateAgentRequest::Tools>) };
    inline CreateAgentRequest& setTools(const vector<CreateAgentRequest::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateAgentRequest& setTools(vector<CreateAgentRequest::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateAgentRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScope Field Functions 
    bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
    void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
    inline const CreateAgentRequest::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, CreateAgentRequest::VisibilityScope) };
    inline CreateAgentRequest::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, CreateAgentRequest::VisibilityScope) };
    inline CreateAgentRequest& setVisibilityScope(const CreateAgentRequest::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
    inline CreateAgentRequest& setVisibilityScope(CreateAgentRequest::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


  protected:
    // The list of sub-agents that can be called by this agent.
    shared_ptr<vector<CreateAgentRequest::CallableAgents>> callableAgents_ {};
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // The published expert suites bound to the agent. For personal or enterprise suites, use SuiteId, and optionally specify a fixed Version or VersionSelector. For official suites, you must explicitly specify Source=OFFICIAL and the SuiteId from the official catalog, and do not specify Version or VersionSelector. If not specified, an empty list is created, and all official suites are not loaded by default.
    shared_ptr<vector<CreateAgentRequest::ExpertSuites>> expertSuites_ {};
    // The extended metadata in key-value pairs.
    Darabonba::Json metadata_ {};
    // The model configuration.
    Darabonba::Json model_ {};
    // The name of the agent. The name must be unique within the current account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether to publish the agent immediately after creation. A value of true publishes the created version. A value of false or omitting this parameter maintains the original behavior of creating a draft only. Saving and publishing are not atomic operations. If publishing fails, the draft may already exist. Before retrying, query the agent first to avoid duplicate creation.
    shared_ptr<bool> publishImmediately_ {};
    // The list of skills.
    shared_ptr<vector<CreateAgentRequest::Skills>> skills_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of tools.
    shared_ptr<vector<CreateAgentRequest::Tools>> tools_ {};
    // The visibility level. Valid values:<br>
    // `TENANT`: Visible within the account.<br>
    // `PROJECT`: Visible to specified projects.<br>
    // `USER`: Visible to specified users.
    shared_ptr<string> visibility_ {};
    // The visibility scope. Specify the corresponding fields based on the Visibility value.
    shared_ptr<CreateAgentRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
