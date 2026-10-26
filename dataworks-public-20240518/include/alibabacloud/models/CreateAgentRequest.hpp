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
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Tools& obj) { 
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
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the McpServer.
      shared_ptr<string> name_ {};
    };

    class Skills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skills& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Skills& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
        && this->skillId_ == nullptr && this->source_ == nullptr && this->version_ == nullptr; };
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


    protected:
      // The name of the skill.
      shared_ptr<string> name_ {};
      // Source=OFFICIAL 时传官方目录 ID，不传 Name 或 Version。个人或企业 Skill 不传此字段。
      shared_ptr<string> skillId_ {};
      // OFFICIAL 表示官方目录资源；DB 表示个人或企业资源，省略时保持原有按名称查询语义。
      shared_ptr<string> source_ {};
      // 仅用于个人或企业 Skill，必须为已发布快照的整数版本。省略时在 Agent 发布时固定当前已发布版本；Source=OFFICIAL 时不传。
      shared_ptr<int32_t> version_ {};
    };

    class ExpertSuites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpertSuites& obj) { 
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SuiteId, suiteId_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ExpertSuites& obj) { 
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SuiteId, suiteId_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
        && this->suiteId_ == nullptr && this->version_ == nullptr; };
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


    protected:
      // OFFICIAL 表示官方目录资源；DB 表示个人或企业资源。省略时保持原有数据库资源查询语义。官方资源在 Agent 发布时固定制品版本。
      shared_ptr<string> source_ {};
      // 传入专家套件引用时，每项需提供 SuiteId，由服务端校验。Source=OFFICIAL 时为官方目录 ID；其他情况为专家套件管理返回的 ID。引用资源必须对调用者可见。
      shared_ptr<string> suiteId_ {};
      // 仅用于个人或企业套件，必须为已发布快照的整数版本号。省略时在 Agent 发布时固定当前已发布版本。Source=OFFICIAL 时不传此字段。
      shared_ptr<int32_t> version_ {};
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
    // The list of child agents that can be called by this agent.
    shared_ptr<vector<CreateAgentRequest::CallableAgents>> callableAgents_ {};
    // The description of the agent.
    shared_ptr<string> description_ {};
    // The display name of the agent.
    shared_ptr<string> displayName_ {};
    // Agent 绑定的已发布专家套件。个人或企业套件使用 SuiteId，可选 Version；官方套件必须显式指定 Source=OFFICIAL 和官方目录中的 SuiteId，不传 Version。未传时创建为空，不会默认加载所有官方套件。
    shared_ptr<vector<CreateAgentRequest::ExpertSuites>> expertSuites_ {};
    // The extended metadata in key-value pairs.
    Darabonba::Json metadata_ {};
    // The model configuration.
    Darabonba::Json model_ {};
    // The name of the agent. The name must be unique within the current account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 是否在创建 Agent 后立即发布。true 发布创建的版本；false 或省略保持原有仅创建草稿行为。保存与发布不是原子操作，发布失败时草稿可能已存在；重试前应先查询 Agent，避免重复创建。
    shared_ptr<bool> publishImmediately_ {};
    // The list of skills.
    shared_ptr<vector<CreateAgentRequest::Skills>> skills_ {};
    // The system prompt.
    shared_ptr<string> systemPrompt_ {};
    // The list of tools.
    shared_ptr<vector<CreateAgentRequest::Tools>> tools_ {};
    // The visibility level.<br>
    // `TENANT`: Visible within the account.<br>
    // `PROJECT`: Visible to specified projects.<br>
    // `USER`: Visible to specified users.
    shared_ptr<string> visibility_ {};
    // The visibility scope. The corresponding field is used based on the visibility level.
    shared_ptr<CreateAgentRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
