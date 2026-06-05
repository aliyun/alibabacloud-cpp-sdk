// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRESPONSEBODY_HPP_
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
  class GetAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentResponseBody() = default ;
    GetAgentResponseBody(const GetAgentResponseBody &) = default ;
    GetAgentResponseBody(GetAgentResponseBody &&) = default ;
    GetAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentResponseBody() = default ;
    GetAgentResponseBody& operator=(const GetAgentResponseBody &) = default ;
    GetAgentResponseBody& operator=(GetAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agent& obj) { 
        DARABONBA_PTR_TO_JSON(CallableAgents, callableAgents_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RequiredRuntime, requiredRuntime_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
        DARABONBA_PTR_TO_JSON(SystemPrompt, systemPrompt_);
        DARABONBA_PTR_TO_JSON(Tools, tools_);
        DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
      };
      friend void from_json(const Darabonba::Json& j, Agent& obj) { 
        DARABONBA_PTR_FROM_JSON(CallableAgents, callableAgents_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RequiredRuntime, requiredRuntime_);
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
        DARABONBA_PTR_FROM_JSON(SystemPrompt, systemPrompt_);
        DARABONBA_PTR_FROM_JSON(Tools, tools_);
        DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
      };
      Agent() = default ;
      Agent(const Agent &) = default ;
      Agent(Agent &&) = default ;
      Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agent() = default ;
      Agent& operator=(const Agent &) = default ;
      Agent& operator=(Agent &&) = default ;
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
        shared_ptr<vector<string>> projectIds_ {};
        shared_ptr<vector<string>> userIds_ {};
      };

      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(BuiltinName, builtinName_);
          DARABONBA_PTR_TO_JSON(Kind, kind_);
          DARABONBA_PTR_TO_JSON(McpItems, mcpItems_);
          DARABONBA_PTR_TO_JSON(McpServerName, mcpServerName_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(BuiltinName, builtinName_);
          DARABONBA_PTR_FROM_JSON(Kind, kind_);
          DARABONBA_PTR_FROM_JSON(McpItems, mcpItems_);
          DARABONBA_PTR_FROM_JSON(McpServerName, mcpServerName_);
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
        && this->kind_ == nullptr && this->mcpItems_ == nullptr && this->mcpServerName_ == nullptr; };
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


      protected:
        shared_ptr<string> builtinName_ {};
        shared_ptr<string> kind_ {};
        shared_ptr<vector<string>> mcpItems_ {};
        shared_ptr<string> mcpServerName_ {};
      };

      class Skills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skills& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
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
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Skills& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> version_ {};
      };

      class Model : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Model& obj) { 
          DARABONBA_ANY_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
          DARABONBA_PTR_TO_JSON(Temperature, temperature_);
          DARABONBA_PTR_TO_JSON(TopP, topP_);
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_ANY_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
          DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
          DARABONBA_PTR_FROM_JSON(TopP, topP_);
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
        virtual bool empty() const override { return this->config_ == nullptr
        && this->maxTokens_ == nullptr && this->modelName_ == nullptr && this->stream_ == nullptr && this->temperature_ == nullptr && this->topP_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline         const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
        Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
        inline Model& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
        inline Model& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


        // maxTokens Field Functions 
        bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
        void deleteMaxTokens() { this->maxTokens_ = nullptr;};
        inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
        inline Model& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline Model& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
        inline Model& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        // temperature Field Functions 
        bool hasTemperature() const { return this->temperature_ != nullptr;};
        void deleteTemperature() { this->temperature_ = nullptr;};
        inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
        inline Model& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


        // topP Field Functions 
        bool hasTopP() const { return this->topP_ != nullptr;};
        void deleteTopP() { this->topP_ = nullptr;};
        inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
        inline Model& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


      protected:
        Darabonba::Json config_ {};
        shared_ptr<int32_t> maxTokens_ {};
        shared_ptr<string> modelName_ {};
        shared_ptr<bool> stream_ {};
        shared_ptr<double> temperature_ {};
        shared_ptr<double> topP_ {};
      };

      class CallableAgents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallableAgents& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, CallableAgents& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
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
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->name_ == nullptr && this->source_ == nullptr && this->version_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline CallableAgents& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CallableAgents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline CallableAgents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline CallableAgents& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> source_ {};
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->callableAgents_ == nullptr
        && this->creatorId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->metadata_ == nullptr && this->model_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr && this->requiredRuntime_ == nullptr
        && this->skills_ == nullptr && this->systemPrompt_ == nullptr && this->tools_ == nullptr && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
      // callableAgents Field Functions 
      bool hasCallableAgents() const { return this->callableAgents_ != nullptr;};
      void deleteCallableAgents() { this->callableAgents_ = nullptr;};
      inline const vector<Agent::CallableAgents> & getCallableAgents() const { DARABONBA_PTR_GET_CONST(callableAgents_, vector<Agent::CallableAgents>) };
      inline vector<Agent::CallableAgents> getCallableAgents() { DARABONBA_PTR_GET(callableAgents_, vector<Agent::CallableAgents>) };
      inline Agent& setCallableAgents(const vector<Agent::CallableAgents> & callableAgents) { DARABONBA_PTR_SET_VALUE(callableAgents_, callableAgents) };
      inline Agent& setCallableAgents(vector<Agent::CallableAgents> && callableAgents) { DARABONBA_PTR_SET_RVALUE(callableAgents_, callableAgents) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Agent& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Agent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Agent& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Agent& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Agent& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Agent& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Agent& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const Agent::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, Agent::Model) };
      inline Agent::Model getModel() { DARABONBA_PTR_GET(model_, Agent::Model) };
      inline Agent& setModel(const Agent::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Agent& setModel(Agent::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Agent& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requiredRuntime Field Functions 
      bool hasRequiredRuntime() const { return this->requiredRuntime_ != nullptr;};
      void deleteRequiredRuntime() { this->requiredRuntime_ = nullptr;};
      inline const vector<string> & getRequiredRuntime() const { DARABONBA_PTR_GET_CONST(requiredRuntime_, vector<string>) };
      inline vector<string> getRequiredRuntime() { DARABONBA_PTR_GET(requiredRuntime_, vector<string>) };
      inline Agent& setRequiredRuntime(const vector<string> & requiredRuntime) { DARABONBA_PTR_SET_VALUE(requiredRuntime_, requiredRuntime) };
      inline Agent& setRequiredRuntime(vector<string> && requiredRuntime) { DARABONBA_PTR_SET_RVALUE(requiredRuntime_, requiredRuntime) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Agent::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Agent::Skills>) };
      inline vector<Agent::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Agent::Skills>) };
      inline Agent& setSkills(const vector<Agent::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Agent& setSkills(vector<Agent::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // systemPrompt Field Functions 
      bool hasSystemPrompt() const { return this->systemPrompt_ != nullptr;};
      void deleteSystemPrompt() { this->systemPrompt_ = nullptr;};
      inline string getSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(systemPrompt_, "") };
      inline Agent& setSystemPrompt(string systemPrompt) { DARABONBA_PTR_SET_VALUE(systemPrompt_, systemPrompt) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Agent::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Agent::Tools>) };
      inline vector<Agent::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Agent::Tools>) };
      inline Agent& setTools(const vector<Agent::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Agent& setTools(vector<Agent::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      // visibility Field Functions 
      bool hasVisibility() const { return this->visibility_ != nullptr;};
      void deleteVisibility() { this->visibility_ = nullptr;};
      inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
      inline Agent& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      // visibilityScope Field Functions 
      bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
      void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
      inline const Agent::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, Agent::VisibilityScope) };
      inline Agent::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, Agent::VisibilityScope) };
      inline Agent& setVisibilityScope(const Agent::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
      inline Agent& setVisibilityScope(Agent::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


    protected:
      shared_ptr<vector<Agent::CallableAgents>> callableAgents_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifiedTime_ {};
      Darabonba::Json metadata_ {};
      shared_ptr<Agent::Model> model_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> requiredRuntime_ {};
      shared_ptr<vector<Agent::Skills>> skills_ {};
      shared_ptr<string> systemPrompt_ {};
      shared_ptr<vector<Agent::Tools>> tools_ {};
      shared_ptr<string> visibility_ {};
      shared_ptr<Agent::VisibilityScope> visibilityScope_ {};
    };

    virtual bool empty() const override { return this->agent_ == nullptr
        && this->requestId_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const GetAgentResponseBody::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, GetAgentResponseBody::Agent) };
    inline GetAgentResponseBody::Agent getAgent() { DARABONBA_PTR_GET(agent_, GetAgentResponseBody::Agent) };
    inline GetAgentResponseBody& setAgent(const GetAgentResponseBody::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline GetAgentResponseBody& setAgent(GetAgentResponseBody::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAgentResponseBody::Agent> agent_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
