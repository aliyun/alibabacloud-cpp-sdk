// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class CreateWorkerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LimitConfig, limitConfig_);
      DARABONBA_PTR_TO_JSON(McpServers, mcpServers_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
      DARABONBA_PTR_TO_JSON(Soul, soul_);
      DARABONBA_PTR_TO_JSON(Subagents, subagents_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LimitConfig, limitConfig_);
      DARABONBA_PTR_FROM_JSON(McpServers, mcpServers_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
      DARABONBA_PTR_FROM_JSON(Soul, soul_);
      DARABONBA_PTR_FROM_JSON(Subagents, subagents_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    CreateWorkerRequest() = default ;
    CreateWorkerRequest(const CreateWorkerRequest &) = default ;
    CreateWorkerRequest(CreateWorkerRequest &&) = default ;
    CreateWorkerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkerRequest() = default ;
    CreateWorkerRequest& operator=(const CreateWorkerRequest &) = default ;
    CreateWorkerRequest& operator=(CreateWorkerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->label_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Template& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Template& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> label_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> version_ {};
    };

    class Subagents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subagents& obj) { 
        DARABONBA_PTR_TO_JSON(Agents, agents_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
        DARABONBA_PTR_TO_JSON(SubagentId, subagentId_);
      };
      friend void from_json(const Darabonba::Json& j, Subagents& obj) { 
        DARABONBA_PTR_FROM_JSON(Agents, agents_);
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
        DARABONBA_PTR_FROM_JSON(SubagentId, subagentId_);
      };
      Subagents() = default ;
      Subagents(const Subagents &) = default ;
      Subagents(Subagents &&) = default ;
      Subagents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subagents() = default ;
      Subagents& operator=(const Subagents &) = default ;
      Subagents& operator=(Subagents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Skills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skills& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->label_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Skills& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Skills& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> label_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->agents_ == nullptr
        && this->skills_ == nullptr && this->subagentId_ == nullptr; };
      // agents Field Functions 
      bool hasAgents() const { return this->agents_ != nullptr;};
      void deleteAgents() { this->agents_ = nullptr;};
      inline string getAgents() const { DARABONBA_PTR_GET_DEFAULT(agents_, "") };
      inline Subagents& setAgents(string agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Subagents::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Subagents::Skills>) };
      inline vector<Subagents::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Subagents::Skills>) };
      inline Subagents& setSkills(const vector<Subagents::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Subagents& setSkills(vector<Subagents::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // subagentId Field Functions 
      bool hasSubagentId() const { return this->subagentId_ != nullptr;};
      void deleteSubagentId() { this->subagentId_ = nullptr;};
      inline string getSubagentId() const { DARABONBA_PTR_GET_DEFAULT(subagentId_, "") };
      inline Subagents& setSubagentId(string subagentId) { DARABONBA_PTR_SET_VALUE(subagentId_, subagentId) };


    protected:
      shared_ptr<string> agents_ {};
      shared_ptr<vector<Subagents::Skills>> skills_ {};
      shared_ptr<string> subagentId_ {};
    };

    class Skills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skills& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Skills& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->label_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Skills& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Skills& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> label_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> version_ {};
    };

    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModelProvider, modelProvider_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModelProvider, modelProvider_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelName_ == nullptr
        && this->modelProvider_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Model& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelProvider Field Functions 
      bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
      void deleteModelProvider() { this->modelProvider_ = nullptr;};
      inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
      inline Model& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


    protected:
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelProvider_ {};
    };

    class McpServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServers& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, McpServers& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      McpServers() = default ;
      McpServers(const McpServers &) = default ;
      McpServers(McpServers &&) = default ;
      McpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServers() = default ;
      McpServers& operator=(const McpServers &) = default ;
      McpServers& operator=(McpServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline McpServers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> name_ {};
    };

    class LimitConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LimitConfig& obj) { 
        DARABONBA_PTR_TO_JSON(LimitType, limitType_);
        DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
        DARABONBA_PTR_TO_JSON(UsageLimit, usageLimit_);
      };
      friend void from_json(const Darabonba::Json& j, LimitConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
        DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
        DARABONBA_PTR_FROM_JSON(UsageLimit, usageLimit_);
      };
      LimitConfig() = default ;
      LimitConfig(const LimitConfig &) = default ;
      LimitConfig(LimitConfig &&) = default ;
      LimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LimitConfig() = default ;
      LimitConfig& operator=(const LimitConfig &) = default ;
      LimitConfig& operator=(LimitConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->limitType_ == nullptr
        && this->periodType_ == nullptr && this->usageLimit_ == nullptr; };
      // limitType Field Functions 
      bool hasLimitType() const { return this->limitType_ != nullptr;};
      void deleteLimitType() { this->limitType_ = nullptr;};
      inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
      inline LimitConfig& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


      // periodType Field Functions 
      bool hasPeriodType() const { return this->periodType_ != nullptr;};
      void deletePeriodType() { this->periodType_ = nullptr;};
      inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
      inline LimitConfig& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


      // usageLimit Field Functions 
      bool hasUsageLimit() const { return this->usageLimit_ != nullptr;};
      void deleteUsageLimit() { this->usageLimit_ = nullptr;};
      inline int64_t getUsageLimit() const { DARABONBA_PTR_GET_DEFAULT(usageLimit_, 0L) };
      inline LimitConfig& setUsageLimit(int64_t usageLimit) { DARABONBA_PTR_SET_VALUE(usageLimit_, usageLimit) };


    protected:
      shared_ptr<string> limitType_ {};
      shared_ptr<string> periodType_ {};
      shared_ptr<int64_t> usageLimit_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->role_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Groups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Groups& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Groups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> type_ {};
    };

    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Credentials& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> name_ {};
    };

    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Secrets, secrets_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Channels() = default ;
      Channels(const Channels &) = default ;
      Channels(Channels &&) = default ;
      Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channels() = default ;
      Channels& operator=(const Channels &) = default ;
      Channels& operator=(Channels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Secrets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        };
        friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        };
        Secrets() = default ;
        Secrets(const Secrets &) = default ;
        Secrets(Secrets &&) = default ;
        Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Secrets() = default ;
        Secrets& operator=(const Secrets &) = default ;
        Secrets& operator=(Secrets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientSecret_ == nullptr; };
        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline Secrets& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      protected:
        shared_ptr<string> clientSecret_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(CardTemplateId, cardTemplateId_);
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(MessageType, messageType_);
          DARABONBA_PTR_TO_JSON(RobotCode, robotCode_);
          DARABONBA_PTR_TO_JSON(ShowThinking, showThinking_);
          DARABONBA_PTR_TO_JSON(ShowToolCalls, showToolCalls_);
          DARABONBA_PTR_TO_JSON(StreamingEnabled, streamingEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(CardTemplateId, cardTemplateId_);
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
          DARABONBA_PTR_FROM_JSON(RobotCode, robotCode_);
          DARABONBA_PTR_FROM_JSON(ShowThinking, showThinking_);
          DARABONBA_PTR_FROM_JSON(ShowToolCalls, showToolCalls_);
          DARABONBA_PTR_FROM_JSON(StreamingEnabled, streamingEnabled_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cardTemplateId_ == nullptr
        && this->clientId_ == nullptr && this->extension_ == nullptr && this->messageType_ == nullptr && this->robotCode_ == nullptr && this->showThinking_ == nullptr
        && this->showToolCalls_ == nullptr && this->streamingEnabled_ == nullptr; };
        // cardTemplateId Field Functions 
        bool hasCardTemplateId() const { return this->cardTemplateId_ != nullptr;};
        void deleteCardTemplateId() { this->cardTemplateId_ = nullptr;};
        inline string getCardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateId_, "") };
        inline Config& setCardTemplateId(string cardTemplateId) { DARABONBA_PTR_SET_VALUE(cardTemplateId_, cardTemplateId) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Config& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline Config& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // messageType Field Functions 
        bool hasMessageType() const { return this->messageType_ != nullptr;};
        void deleteMessageType() { this->messageType_ = nullptr;};
        inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
        inline Config& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


        // robotCode Field Functions 
        bool hasRobotCode() const { return this->robotCode_ != nullptr;};
        void deleteRobotCode() { this->robotCode_ = nullptr;};
        inline string getRobotCode() const { DARABONBA_PTR_GET_DEFAULT(robotCode_, "") };
        inline Config& setRobotCode(string robotCode) { DARABONBA_PTR_SET_VALUE(robotCode_, robotCode) };


        // showThinking Field Functions 
        bool hasShowThinking() const { return this->showThinking_ != nullptr;};
        void deleteShowThinking() { this->showThinking_ = nullptr;};
        inline bool getShowThinking() const { DARABONBA_PTR_GET_DEFAULT(showThinking_, false) };
        inline Config& setShowThinking(bool showThinking) { DARABONBA_PTR_SET_VALUE(showThinking_, showThinking) };


        // showToolCalls Field Functions 
        bool hasShowToolCalls() const { return this->showToolCalls_ != nullptr;};
        void deleteShowToolCalls() { this->showToolCalls_ = nullptr;};
        inline bool getShowToolCalls() const { DARABONBA_PTR_GET_DEFAULT(showToolCalls_, false) };
        inline Config& setShowToolCalls(bool showToolCalls) { DARABONBA_PTR_SET_VALUE(showToolCalls_, showToolCalls) };


        // streamingEnabled Field Functions 
        bool hasStreamingEnabled() const { return this->streamingEnabled_ != nullptr;};
        void deleteStreamingEnabled() { this->streamingEnabled_ = nullptr;};
        inline bool getStreamingEnabled() const { DARABONBA_PTR_GET_DEFAULT(streamingEnabled_, false) };
        inline Config& setStreamingEnabled(bool streamingEnabled) { DARABONBA_PTR_SET_VALUE(streamingEnabled_, streamingEnabled) };


      protected:
        shared_ptr<string> cardTemplateId_ {};
        shared_ptr<string> clientId_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<string> messageType_ {};
        shared_ptr<string> robotCode_ {};
        shared_ptr<bool> showThinking_ {};
        shared_ptr<bool> showToolCalls_ {};
        shared_ptr<bool> streamingEnabled_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->enabled_ == nullptr && this->secrets_ == nullptr && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Channels::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Channels::Config) };
      inline Channels::Config getConfig() { DARABONBA_PTR_GET(config_, Channels::Config) };
      inline Channels& setConfig(const Channels::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Channels& setConfig(Channels::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Channels& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // secrets Field Functions 
      bool hasSecrets() const { return this->secrets_ != nullptr;};
      void deleteSecrets() { this->secrets_ = nullptr;};
      inline const Channels::Secrets & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, Channels::Secrets) };
      inline Channels::Secrets getSecrets() { DARABONBA_PTR_GET(secrets_, Channels::Secrets) };
      inline Channels& setSecrets(const Channels::Secrets & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
      inline Channels& setSecrets(Channels::Secrets && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Channels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Channels::Config> config_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<Channels::Secrets> secrets_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->agentType_ == nullptr
        && this->agents_ == nullptr && this->channels_ == nullptr && this->clientToken_ == nullptr && this->credentials_ == nullptr && this->deployType_ == nullptr
        && this->groups_ == nullptr && this->instanceId_ == nullptr && this->limitConfig_ == nullptr && this->mcpServers_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->skills_ == nullptr && this->soul_ == nullptr && this->subagents_ == nullptr && this->template_ == nullptr
        && this->versionCode_ == nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline CreateWorkerRequest& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline string getAgents() const { DARABONBA_PTR_GET_DEFAULT(agents_, "") };
    inline CreateWorkerRequest& setAgents(string agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<CreateWorkerRequest::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<CreateWorkerRequest::Channels>) };
    inline vector<CreateWorkerRequest::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<CreateWorkerRequest::Channels>) };
    inline CreateWorkerRequest& setChannels(const vector<CreateWorkerRequest::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline CreateWorkerRequest& setChannels(vector<CreateWorkerRequest::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWorkerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<CreateWorkerRequest::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<CreateWorkerRequest::Credentials>) };
    inline vector<CreateWorkerRequest::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<CreateWorkerRequest::Credentials>) };
    inline CreateWorkerRequest& setCredentials(const vector<CreateWorkerRequest::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline CreateWorkerRequest& setCredentials(vector<CreateWorkerRequest::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline CreateWorkerRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<CreateWorkerRequest::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<CreateWorkerRequest::Groups>) };
    inline vector<CreateWorkerRequest::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<CreateWorkerRequest::Groups>) };
    inline CreateWorkerRequest& setGroups(const vector<CreateWorkerRequest::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline CreateWorkerRequest& setGroups(vector<CreateWorkerRequest::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateWorkerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limitConfig Field Functions 
    bool hasLimitConfig() const { return this->limitConfig_ != nullptr;};
    void deleteLimitConfig() { this->limitConfig_ = nullptr;};
    inline const CreateWorkerRequest::LimitConfig & getLimitConfig() const { DARABONBA_PTR_GET_CONST(limitConfig_, CreateWorkerRequest::LimitConfig) };
    inline CreateWorkerRequest::LimitConfig getLimitConfig() { DARABONBA_PTR_GET(limitConfig_, CreateWorkerRequest::LimitConfig) };
    inline CreateWorkerRequest& setLimitConfig(const CreateWorkerRequest::LimitConfig & limitConfig) { DARABONBA_PTR_SET_VALUE(limitConfig_, limitConfig) };
    inline CreateWorkerRequest& setLimitConfig(CreateWorkerRequest::LimitConfig && limitConfig) { DARABONBA_PTR_SET_RVALUE(limitConfig_, limitConfig) };


    // mcpServers Field Functions 
    bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
    void deleteMcpServers() { this->mcpServers_ = nullptr;};
    inline const vector<CreateWorkerRequest::McpServers> & getMcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, vector<CreateWorkerRequest::McpServers>) };
    inline vector<CreateWorkerRequest::McpServers> getMcpServers() { DARABONBA_PTR_GET(mcpServers_, vector<CreateWorkerRequest::McpServers>) };
    inline CreateWorkerRequest& setMcpServers(const vector<CreateWorkerRequest::McpServers> & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
    inline CreateWorkerRequest& setMcpServers(vector<CreateWorkerRequest::McpServers> && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const CreateWorkerRequest::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, CreateWorkerRequest::Model) };
    inline CreateWorkerRequest::Model getModel() { DARABONBA_PTR_GET(model_, CreateWorkerRequest::Model) };
    inline CreateWorkerRequest& setModel(const CreateWorkerRequest::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline CreateWorkerRequest& setModel(CreateWorkerRequest::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<CreateWorkerRequest::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<CreateWorkerRequest::Skills>) };
    inline vector<CreateWorkerRequest::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<CreateWorkerRequest::Skills>) };
    inline CreateWorkerRequest& setSkills(const vector<CreateWorkerRequest::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline CreateWorkerRequest& setSkills(vector<CreateWorkerRequest::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    // soul Field Functions 
    bool hasSoul() const { return this->soul_ != nullptr;};
    void deleteSoul() { this->soul_ = nullptr;};
    inline string getSoul() const { DARABONBA_PTR_GET_DEFAULT(soul_, "") };
    inline CreateWorkerRequest& setSoul(string soul) { DARABONBA_PTR_SET_VALUE(soul_, soul) };


    // subagents Field Functions 
    bool hasSubagents() const { return this->subagents_ != nullptr;};
    void deleteSubagents() { this->subagents_ = nullptr;};
    inline const vector<CreateWorkerRequest::Subagents> & getSubagents() const { DARABONBA_PTR_GET_CONST(subagents_, vector<CreateWorkerRequest::Subagents>) };
    inline vector<CreateWorkerRequest::Subagents> getSubagents() { DARABONBA_PTR_GET(subagents_, vector<CreateWorkerRequest::Subagents>) };
    inline CreateWorkerRequest& setSubagents(const vector<CreateWorkerRequest::Subagents> & subagents) { DARABONBA_PTR_SET_VALUE(subagents_, subagents) };
    inline CreateWorkerRequest& setSubagents(vector<CreateWorkerRequest::Subagents> && subagents) { DARABONBA_PTR_SET_RVALUE(subagents_, subagents) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateWorkerRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, CreateWorkerRequest::Template) };
    inline CreateWorkerRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, CreateWorkerRequest::Template) };
    inline CreateWorkerRequest& setTemplate(const CreateWorkerRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateWorkerRequest& setTemplate(CreateWorkerRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline CreateWorkerRequest& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    shared_ptr<string> agentType_ {};
    shared_ptr<string> agents_ {};
    shared_ptr<vector<CreateWorkerRequest::Channels>> channels_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<CreateWorkerRequest::Credentials>> credentials_ {};
    shared_ptr<string> deployType_ {};
    shared_ptr<vector<CreateWorkerRequest::Groups>> groups_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<CreateWorkerRequest::LimitConfig> limitConfig_ {};
    shared_ptr<vector<CreateWorkerRequest::McpServers>> mcpServers_ {};
    shared_ptr<CreateWorkerRequest::Model> model_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<CreateWorkerRequest::Skills>> skills_ {};
    shared_ptr<string> soul_ {};
    shared_ptr<vector<CreateWorkerRequest::Subagents>> subagents_ {};
    shared_ptr<CreateWorkerRequest::Template> template_ {};
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
