// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateExternalAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateExternalAgentRequest() = default ;
    CreateExternalAgentRequest(const CreateExternalAgentRequest &) = default ;
    CreateExternalAgentRequest(CreateExternalAgentRequest &&) = default ;
    CreateExternalAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalAgentRequest() = default ;
    CreateExternalAgentRequest& operator=(const CreateExternalAgentRequest &) = default ;
    CreateExternalAgentRequest& operator=(CreateExternalAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(modelSource, modelSource_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
        DARABONBA_PTR_TO_JSON(template, template_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(modelSource, modelSource_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
        DARABONBA_PTR_FROM_JSON(template, template_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Tools& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The tool name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The tool type. Valid values:
        // - MCP: MCP tool.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(aiRegistry, aiRegistry_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(aiRegistry, aiRegistry_);
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
        class AiRegistry : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AiRegistry& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, AiRegistry& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          AiRegistry() = default ;
          AiRegistry(const AiRegistry &) = default ;
          AiRegistry(AiRegistry &&) = default ;
          AiRegistry(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AiRegistry() = default ;
          AiRegistry& operator=(const AiRegistry &) = default ;
          AiRegistry& operator=(AiRegistry &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AiRegistry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline AiRegistry& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The name of the template in AI Registry.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The version of the template in AI Registry.
          // 
          // This parameter is required.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->aiRegistry_ == nullptr; };
        // aiRegistry Field Functions 
        bool hasAiRegistry() const { return this->aiRegistry_ != nullptr;};
        void deleteAiRegistry() { this->aiRegistry_ = nullptr;};
        inline const Template::AiRegistry & getAiRegistry() const { DARABONBA_PTR_GET_CONST(aiRegistry_, Template::AiRegistry) };
        inline Template::AiRegistry getAiRegistry() { DARABONBA_PTR_GET(aiRegistry_, Template::AiRegistry) };
        inline Template& setAiRegistry(const Template::AiRegistry & aiRegistry) { DARABONBA_PTR_SET_VALUE(aiRegistry_, aiRegistry) };
        inline Template& setAiRegistry(Template::AiRegistry && aiRegistry) { DARABONBA_PTR_SET_RVALUE(aiRegistry_, aiRegistry) };


      protected:
        // The AI Registry template configuration.
        shared_ptr<Template::AiRegistry> aiRegistry_ {};
      };

      class Skills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skills& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(version, version_);
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
        && this->version_ == nullptr; };
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
        // The skill name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
        // The skill version.
        shared_ptr<string> version_ {};
      };

      class Model : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Model& obj) { 
          DARABONBA_PTR_TO_JSON(modelConnectionId, modelConnectionId_);
          DARABONBA_PTR_TO_JSON(modelName, modelName_);
          DARABONBA_PTR_TO_JSON(quota, quota_);
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_PTR_FROM_JSON(modelConnectionId, modelConnectionId_);
          DARABONBA_PTR_FROM_JSON(modelName, modelName_);
          DARABONBA_PTR_FROM_JSON(quota, quota_);
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
        class Quota : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Quota& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(limitType, limitType_);
            DARABONBA_PTR_TO_JSON(periodType, periodType_);
            DARABONBA_PTR_TO_JSON(usageLimit, usageLimit_);
          };
          friend void from_json(const Darabonba::Json& j, Quota& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(limitType, limitType_);
            DARABONBA_PTR_FROM_JSON(periodType, periodType_);
            DARABONBA_PTR_FROM_JSON(usageLimit, usageLimit_);
          };
          Quota() = default ;
          Quota(const Quota &) = default ;
          Quota(Quota &&) = default ;
          Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Quota() = default ;
          Quota& operator=(const Quota &) = default ;
          Quota& operator=(Quota &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->limitType_ == nullptr && this->periodType_ == nullptr && this->usageLimit_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Quota& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline Quota& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


          // periodType Field Functions 
          bool hasPeriodType() const { return this->periodType_ != nullptr;};
          void deletePeriodType() { this->periodType_ = nullptr;};
          inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
          inline Quota& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


          // usageLimit Field Functions 
          bool hasUsageLimit() const { return this->usageLimit_ != nullptr;};
          void deleteUsageLimit() { this->usageLimit_ = nullptr;};
          inline int64_t getUsageLimit() const { DARABONBA_PTR_GET_DEFAULT(usageLimit_, 0L) };
          inline Quota& setUsageLimit(int64_t usageLimit) { DARABONBA_PTR_SET_VALUE(usageLimit_, usageLimit) };


        protected:
          // Specifies whether to enable token quota. Defaults to true if not specified. Set to false to disable and delete existing quota rules.
          shared_ptr<bool> enabled_ {};
          // The quota limit type. Required by backend validation when quota is enabled. Fixed value: token.
          shared_ptr<string> limitType_ {};
          // The quota statistical period. Required by backend validation when quota is enabled. Valid values: day (daily) and month (monthly).
          shared_ptr<string> periodType_ {};
          // The maximum number of tokens that can be consumed within a single period. Required by backend validation when quota is enabled. The value must be greater than 0.
          shared_ptr<int64_t> usageLimit_ {};
        };

        virtual bool empty() const override { return this->modelConnectionId_ == nullptr
        && this->modelName_ == nullptr && this->quota_ == nullptr; };
        // modelConnectionId Field Functions 
        bool hasModelConnectionId() const { return this->modelConnectionId_ != nullptr;};
        void deleteModelConnectionId() { this->modelConnectionId_ = nullptr;};
        inline string getModelConnectionId() const { DARABONBA_PTR_GET_DEFAULT(modelConnectionId_, "") };
        inline Model& setModelConnectionId(string modelConnectionId) { DARABONBA_PTR_SET_VALUE(modelConnectionId_, modelConnectionId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline Model& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline const Model::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Model::Quota) };
        inline Model::Quota getQuota() { DARABONBA_PTR_GET(quota_, Model::Quota) };
        inline Model& setQuota(const Model::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
        inline Model& setQuota(Model::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


      protected:
        // The model connection ID.
        // 
        // This parameter is required.
        shared_ptr<string> modelConnectionId_ {};
        // The upstream model name.
        // 
        // This parameter is required.
        shared_ptr<string> modelName_ {};
        // The model token quota configuration. If not specified, no quota is configured.
        shared_ptr<Model::Quota> quota_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->instruction_ == nullptr && this->model_ == nullptr && this->modelSource_ == nullptr && this->name_ == nullptr && this->skills_ == nullptr
        && this->template_ == nullptr && this->tools_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline Body& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const Body::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, Body::Model) };
      inline Body::Model getModel() { DARABONBA_PTR_GET(model_, Body::Model) };
      inline Body& setModel(const Body::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Body& setModel(Body::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


      // modelSource Field Functions 
      bool hasModelSource() const { return this->modelSource_ != nullptr;};
      void deleteModelSource() { this->modelSource_ = nullptr;};
      inline string getModelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, "") };
      inline Body& setModelSource(string modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Body::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Body::Skills>) };
      inline vector<Body::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Body::Skills>) };
      inline Body& setSkills(const vector<Body::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Body& setSkills(vector<Body::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Body::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Body::Template) };
      inline Body::Template getTemplate() { DARABONBA_PTR_GET(template_, Body::Template) };
      inline Body& setTemplate(const Body::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Body& setTemplate(Body::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Body::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Body::Tools>) };
      inline vector<Body::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Body::Tools>) };
      inline Body& setTools(const vector<Body::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Body& setTools(vector<Body::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      // The description of the external agent.
      shared_ptr<string> description_ {};
      // The agent instruction that guides the behavior of the agent.
      shared_ptr<string> instruction_ {};
      // The model configuration. Available only when modelSource is set to PLATFORM.
      shared_ptr<Body::Model> model_ {};
      // The model configuration source. PLATFORM indicates that the platform parses and delivers the model configuration. RUNTIME indicates that the external runtime manages the model independently, and the model parameter cannot be specified at the same time. Valid values:
      // - PLATFORM: platform model.
      // - RUNTIME: runtime model.
      shared_ptr<string> modelSource_ {};
      // The name of the external agent.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The list of skill configurations.
      shared_ptr<vector<Body::Skills>> skills_ {};
      // The agent template configuration.
      shared_ptr<Body::Template> template_ {};
      // The list of tool configurations.
      shared_ptr<vector<Body::Tools>> tools_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateExternalAgentRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateExternalAgentRequest::Body) };
    inline CreateExternalAgentRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateExternalAgentRequest::Body) };
    inline CreateExternalAgentRequest& setBody(const CreateExternalAgentRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateExternalAgentRequest& setBody(CreateExternalAgentRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExternalAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<CreateExternalAgentRequest::Body> body_ {};
    // The reserved idempotency token. The backend does not provide idempotency guarantee in the current phase.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
