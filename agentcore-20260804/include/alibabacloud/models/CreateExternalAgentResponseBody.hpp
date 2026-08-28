// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALAGENTRESPONSEBODY_HPP_
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
  class CreateExternalAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateExternalAgentResponseBody() = default ;
    CreateExternalAgentResponseBody(const CreateExternalAgentResponseBody &) = default ;
    CreateExternalAgentResponseBody(CreateExternalAgentResponseBody &&) = default ;
    CreateExternalAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalAgentResponseBody() = default ;
    CreateExternalAgentResponseBody& operator=(const CreateExternalAgentResponseBody &) = default ;
    CreateExternalAgentResponseBody& operator=(CreateExternalAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(createMode, createMode_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(deployType, deployType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(effectiveResult, effectiveResult_);
        DARABONBA_PTR_TO_JSON(effectiveSpecVersion, effectiveSpecVersion_);
        DARABONBA_PTR_TO_JSON(externalAgentStatus, externalAgentStatus_);
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(modelSource, modelSource_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(template, template_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(createMode, createMode_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(deployType, deployType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(effectiveResult, effectiveResult_);
        DARABONBA_PTR_FROM_JSON(effectiveSpecVersion, effectiveSpecVersion_);
        DARABONBA_PTR_FROM_JSON(externalAgentStatus, externalAgentStatus_);
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(modelSource, modelSource_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(template, template_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // 
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
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_PTR_FROM_JSON(modelConnectionId, modelConnectionId_);
          DARABONBA_PTR_FROM_JSON(modelName, modelName_);
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
        virtual bool empty() const override { return this->modelConnectionId_ == nullptr
        && this->modelName_ == nullptr; };
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


      protected:
        // The model connection ID.
        // 
        // This parameter is required.
        shared_ptr<string> modelConnectionId_ {};
        // The upstream model name.
        // 
        // This parameter is required.
        shared_ptr<string> modelName_ {};
      };

      class ExternalAgentStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalAgentStatus& obj) { 
          DARABONBA_PTR_TO_JSON(heartbeatStatus, heartbeatStatus_);
          DARABONBA_PTR_TO_JSON(lastActiveAt, lastActiveAt_);
          DARABONBA_PTR_TO_JSON(lastHeartbeat, lastHeartbeat_);
          DARABONBA_PTR_TO_JSON(localIP, localIP_);
          DARABONBA_PTR_TO_JSON(runtime, runtime_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalAgentStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(heartbeatStatus, heartbeatStatus_);
          DARABONBA_PTR_FROM_JSON(lastActiveAt, lastActiveAt_);
          DARABONBA_PTR_FROM_JSON(lastHeartbeat, lastHeartbeat_);
          DARABONBA_PTR_FROM_JSON(localIP, localIP_);
          DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        };
        ExternalAgentStatus() = default ;
        ExternalAgentStatus(const ExternalAgentStatus &) = default ;
        ExternalAgentStatus(ExternalAgentStatus &&) = default ;
        ExternalAgentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalAgentStatus() = default ;
        ExternalAgentStatus& operator=(const ExternalAgentStatus &) = default ;
        ExternalAgentStatus& operator=(ExternalAgentStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->heartbeatStatus_ == nullptr
        && this->lastActiveAt_ == nullptr && this->lastHeartbeat_ == nullptr && this->localIP_ == nullptr && this->runtime_ == nullptr; };
        // heartbeatStatus Field Functions 
        bool hasHeartbeatStatus() const { return this->heartbeatStatus_ != nullptr;};
        void deleteHeartbeatStatus() { this->heartbeatStatus_ = nullptr;};
        inline string getHeartbeatStatus() const { DARABONBA_PTR_GET_DEFAULT(heartbeatStatus_, "") };
        inline ExternalAgentStatus& setHeartbeatStatus(string heartbeatStatus) { DARABONBA_PTR_SET_VALUE(heartbeatStatus_, heartbeatStatus) };


        // lastActiveAt Field Functions 
        bool hasLastActiveAt() const { return this->lastActiveAt_ != nullptr;};
        void deleteLastActiveAt() { this->lastActiveAt_ = nullptr;};
        inline string getLastActiveAt() const { DARABONBA_PTR_GET_DEFAULT(lastActiveAt_, "") };
        inline ExternalAgentStatus& setLastActiveAt(string lastActiveAt) { DARABONBA_PTR_SET_VALUE(lastActiveAt_, lastActiveAt) };


        // lastHeartbeat Field Functions 
        bool hasLastHeartbeat() const { return this->lastHeartbeat_ != nullptr;};
        void deleteLastHeartbeat() { this->lastHeartbeat_ = nullptr;};
        inline string getLastHeartbeat() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeat_, "") };
        inline ExternalAgentStatus& setLastHeartbeat(string lastHeartbeat) { DARABONBA_PTR_SET_VALUE(lastHeartbeat_, lastHeartbeat) };


        // localIP Field Functions 
        bool hasLocalIP() const { return this->localIP_ != nullptr;};
        void deleteLocalIP() { this->localIP_ = nullptr;};
        inline string getLocalIP() const { DARABONBA_PTR_GET_DEFAULT(localIP_, "") };
        inline ExternalAgentStatus& setLocalIP(string localIP) { DARABONBA_PTR_SET_VALUE(localIP_, localIP) };


        // runtime Field Functions 
        bool hasRuntime() const { return this->runtime_ != nullptr;};
        void deleteRuntime() { this->runtime_ = nullptr;};
        inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
        inline ExternalAgentStatus& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      protected:
        // The heartbeat status. ONLINE indicates that the most recent heartbeat has not exceeded the configured timeout threshold. STALE indicates that the heartbeat has timed out. UNKNOWN indicates that the heartbeat is missing or has an invalid format. Valid values:
        // - ONLINE: Online.
        // - STALE: Heartbeat expired.
        // - UNKNOWN: Unknown.
        shared_ptr<string> heartbeatStatus_ {};
        // The most recent active time of the external agent in RFC 3339 format.
        shared_ptr<string> lastActiveAt_ {};
        // The most recent heartbeat time of the external agent in RFC 3339 format.
        shared_ptr<string> lastHeartbeat_ {};
        // The local IP address reported by the external agent.
        shared_ptr<string> localIP_ {};
        // The runtime type reported by the external agent.
        shared_ptr<string> runtime_ {};
      };

      class EffectiveResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EffectiveResult& obj) { 
          DARABONBA_PTR_TO_JSON(matrixUserId, matrixUserId_);
          DARABONBA_PTR_TO_JSON(personalRoomId, personalRoomId_);
          DARABONBA_PTR_TO_JSON(runtimeAcceptStatus, runtimeAcceptStatus_);
          DARABONBA_PTR_TO_JSON(runtimeId, runtimeId_);
          DARABONBA_PTR_TO_JSON(runtimeRequestVersion, runtimeRequestVersion_);
          DARABONBA_PTR_TO_JSON(workspacePrefix, workspacePrefix_);
        };
        friend void from_json(const Darabonba::Json& j, EffectiveResult& obj) { 
          DARABONBA_PTR_FROM_JSON(matrixUserId, matrixUserId_);
          DARABONBA_PTR_FROM_JSON(personalRoomId, personalRoomId_);
          DARABONBA_PTR_FROM_JSON(runtimeAcceptStatus, runtimeAcceptStatus_);
          DARABONBA_PTR_FROM_JSON(runtimeId, runtimeId_);
          DARABONBA_PTR_FROM_JSON(runtimeRequestVersion, runtimeRequestVersion_);
          DARABONBA_PTR_FROM_JSON(workspacePrefix, workspacePrefix_);
        };
        EffectiveResult() = default ;
        EffectiveResult(const EffectiveResult &) = default ;
        EffectiveResult(EffectiveResult &&) = default ;
        EffectiveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EffectiveResult() = default ;
        EffectiveResult& operator=(const EffectiveResult &) = default ;
        EffectiveResult& operator=(EffectiveResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->matrixUserId_ == nullptr
        && this->personalRoomId_ == nullptr && this->runtimeAcceptStatus_ == nullptr && this->runtimeId_ == nullptr && this->runtimeRequestVersion_ == nullptr && this->workspacePrefix_ == nullptr; };
        // matrixUserId Field Functions 
        bool hasMatrixUserId() const { return this->matrixUserId_ != nullptr;};
        void deleteMatrixUserId() { this->matrixUserId_ = nullptr;};
        inline string getMatrixUserId() const { DARABONBA_PTR_GET_DEFAULT(matrixUserId_, "") };
        inline EffectiveResult& setMatrixUserId(string matrixUserId) { DARABONBA_PTR_SET_VALUE(matrixUserId_, matrixUserId) };


        // personalRoomId Field Functions 
        bool hasPersonalRoomId() const { return this->personalRoomId_ != nullptr;};
        void deletePersonalRoomId() { this->personalRoomId_ = nullptr;};
        inline string getPersonalRoomId() const { DARABONBA_PTR_GET_DEFAULT(personalRoomId_, "") };
        inline EffectiveResult& setPersonalRoomId(string personalRoomId) { DARABONBA_PTR_SET_VALUE(personalRoomId_, personalRoomId) };


        // runtimeAcceptStatus Field Functions 
        bool hasRuntimeAcceptStatus() const { return this->runtimeAcceptStatus_ != nullptr;};
        void deleteRuntimeAcceptStatus() { this->runtimeAcceptStatus_ = nullptr;};
        inline string getRuntimeAcceptStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeAcceptStatus_, "") };
        inline EffectiveResult& setRuntimeAcceptStatus(string runtimeAcceptStatus) { DARABONBA_PTR_SET_VALUE(runtimeAcceptStatus_, runtimeAcceptStatus) };


        // runtimeId Field Functions 
        bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
        void deleteRuntimeId() { this->runtimeId_ = nullptr;};
        inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
        inline EffectiveResult& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


        // runtimeRequestVersion Field Functions 
        bool hasRuntimeRequestVersion() const { return this->runtimeRequestVersion_ != nullptr;};
        void deleteRuntimeRequestVersion() { this->runtimeRequestVersion_ = nullptr;};
        inline int64_t getRuntimeRequestVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeRequestVersion_, 0L) };
        inline EffectiveResult& setRuntimeRequestVersion(int64_t runtimeRequestVersion) { DARABONBA_PTR_SET_VALUE(runtimeRequestVersion_, runtimeRequestVersion) };


        // workspacePrefix Field Functions 
        bool hasWorkspacePrefix() const { return this->workspacePrefix_ != nullptr;};
        void deleteWorkspacePrefix() { this->workspacePrefix_ = nullptr;};
        inline string getWorkspacePrefix() const { DARABONBA_PTR_GET_DEFAULT(workspacePrefix_, "") };
        inline EffectiveResult& setWorkspacePrefix(string workspacePrefix) { DARABONBA_PTR_SET_VALUE(workspacePrefix_, workspacePrefix) };


      protected:
        // The user ID of the agent in Matrix.
        shared_ptr<string> matrixUserId_ {};
        // The Matrix personal room ID of the agent.
        shared_ptr<string> personalRoomId_ {};
        // The acceptance status of the runtime for the current request version.
        shared_ptr<string> runtimeAcceptStatus_ {};
        // The runtime instance ID.
        shared_ptr<string> runtimeId_ {};
        // The runtime request version number.
        shared_ptr<int64_t> runtimeRequestVersion_ {};
        // The storage prefix of the agent in the workspace.
        shared_ptr<string> workspacePrefix_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->effectiveResult_ == nullptr
        && this->effectiveSpecVersion_ == nullptr && this->externalAgentStatus_ == nullptr && this->instruction_ == nullptr && this->latestSpecVersion_ == nullptr && this->latestVersionStatus_ == nullptr
        && this->model_ == nullptr && this->modelSource_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->runtime_ == nullptr
        && this->skills_ == nullptr && this->status_ == nullptr && this->template_ == nullptr && this->tools_ == nullptr && this->updatedAt_ == nullptr
        && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Data& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Data& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // effectiveResult Field Functions 
      bool hasEffectiveResult() const { return this->effectiveResult_ != nullptr;};
      void deleteEffectiveResult() { this->effectiveResult_ = nullptr;};
      inline const Data::EffectiveResult & getEffectiveResult() const { DARABONBA_PTR_GET_CONST(effectiveResult_, Data::EffectiveResult) };
      inline Data::EffectiveResult getEffectiveResult() { DARABONBA_PTR_GET(effectiveResult_, Data::EffectiveResult) };
      inline Data& setEffectiveResult(const Data::EffectiveResult & effectiveResult) { DARABONBA_PTR_SET_VALUE(effectiveResult_, effectiveResult) };
      inline Data& setEffectiveResult(Data::EffectiveResult && effectiveResult) { DARABONBA_PTR_SET_RVALUE(effectiveResult_, effectiveResult) };


      // effectiveSpecVersion Field Functions 
      bool hasEffectiveSpecVersion() const { return this->effectiveSpecVersion_ != nullptr;};
      void deleteEffectiveSpecVersion() { this->effectiveSpecVersion_ = nullptr;};
      inline int64_t getEffectiveSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecVersion_, 0L) };
      inline Data& setEffectiveSpecVersion(int64_t effectiveSpecVersion) { DARABONBA_PTR_SET_VALUE(effectiveSpecVersion_, effectiveSpecVersion) };


      // externalAgentStatus Field Functions 
      bool hasExternalAgentStatus() const { return this->externalAgentStatus_ != nullptr;};
      void deleteExternalAgentStatus() { this->externalAgentStatus_ = nullptr;};
      inline const Data::ExternalAgentStatus & getExternalAgentStatus() const { DARABONBA_PTR_GET_CONST(externalAgentStatus_, Data::ExternalAgentStatus) };
      inline Data::ExternalAgentStatus getExternalAgentStatus() { DARABONBA_PTR_GET(externalAgentStatus_, Data::ExternalAgentStatus) };
      inline Data& setExternalAgentStatus(const Data::ExternalAgentStatus & externalAgentStatus) { DARABONBA_PTR_SET_VALUE(externalAgentStatus_, externalAgentStatus) };
      inline Data& setExternalAgentStatus(Data::ExternalAgentStatus && externalAgentStatus) { DARABONBA_PTR_SET_RVALUE(externalAgentStatus_, externalAgentStatus) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline Data& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // latestSpecVersion Field Functions 
      bool hasLatestSpecVersion() const { return this->latestSpecVersion_ != nullptr;};
      void deleteLatestSpecVersion() { this->latestSpecVersion_ = nullptr;};
      inline int64_t getLatestSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(latestSpecVersion_, 0L) };
      inline Data& setLatestSpecVersion(int64_t latestSpecVersion) { DARABONBA_PTR_SET_VALUE(latestSpecVersion_, latestSpecVersion) };


      // latestVersionStatus Field Functions 
      bool hasLatestVersionStatus() const { return this->latestVersionStatus_ != nullptr;};
      void deleteLatestVersionStatus() { this->latestVersionStatus_ = nullptr;};
      inline string getLatestVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(latestVersionStatus_, "") };
      inline Data& setLatestVersionStatus(string latestVersionStatus) { DARABONBA_PTR_SET_VALUE(latestVersionStatus_, latestVersionStatus) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const Data::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, Data::Model) };
      inline Data::Model getModel() { DARABONBA_PTR_GET(model_, Data::Model) };
      inline Data& setModel(const Data::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Data& setModel(Data::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


      // modelSource Field Functions 
      bool hasModelSource() const { return this->modelSource_ != nullptr;};
      void deleteModelSource() { this->modelSource_ = nullptr;};
      inline string getModelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, "") };
      inline Data& setModelSource(string modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline Data& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Data::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Data::Skills>) };
      inline vector<Data::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Data::Skills>) };
      inline Data& setSkills(const vector<Data::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Data& setSkills(vector<Data::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Data::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Data::Template) };
      inline Data::Template getTemplate() { DARABONBA_PTR_GET(template_, Data::Template) };
      inline Data& setTemplate(const Data::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Data& setTemplate(Data::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Data::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Data::Tools>) };
      inline vector<Data::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Data::Tools>) };
      inline Data& setTools(const vector<Data::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Data& setTools(vector<Data::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The external agent ID.
      shared_ptr<string> agentId_ {};
      // The creation mode.
      shared_ptr<string> createMode_ {};
      // The creation time in RFC 3339 format.
      shared_ptr<string> createdAt_ {};
      // The deployment type.
      shared_ptr<string> deployType_ {};
      // The description of the external agent.
      shared_ptr<string> description_ {};
      // The runtime result corresponding to the currently effective specification.
      shared_ptr<Data::EffectiveResult> effectiveResult_ {};
      // The currently effective specification version number.
      shared_ptr<int64_t> effectiveSpecVersion_ {};
      // The runtime status information reported by the external agent.
      shared_ptr<Data::ExternalAgentStatus> externalAgentStatus_ {};
      // The agent instruction that guides the behavior of the agent.
      shared_ptr<string> instruction_ {};
      // The latest specification version number.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The processing status of the latest specification version. Valid values:
      // - pending: Pending processing.
      // - processing: Being processed.
      // - waiting_retry: Waiting for retry.
      // - succeeded: Succeeded.
      // - failed: Failed.
      // - superseded: Superseded by a newer version.
      shared_ptr<string> latestVersionStatus_ {};
      // The model configuration. This parameter is available only when modelSource is set to PLATFORM.
      shared_ptr<Data::Model> model_ {};
      // The source of the model configuration. Valid values:
      // 
      // - PLATFORM: The platform parses and delivers the model configuration. You can specify the model parameter.
      // - RUNTIME: The external runtime manages the model on its own. You cannot specify the model parameter at the same time.
      shared_ptr<string> modelSource_ {};
      // The name of the external agent.
      shared_ptr<string> name_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The runtime type reported by the external agent.
      shared_ptr<string> runtime_ {};
      // The list of skill configurations.
      shared_ptr<vector<Data::Skills>> skills_ {};
      // The status of the external agent. Valid values:
      // - Creating: The agent is being created.
      // - Running: The agent is running.
      // - Failed: The agent creation failed.
      // - Updating: The agent is being updated.
      // - Deleting: The agent is being deleted.
      // - Deleted: The agent has been deleted.
      shared_ptr<string> status_ {};
      // The agent template configuration.
      shared_ptr<Data::Template> template_ {};
      // The list of tool configurations.
      shared_ptr<vector<Data::Tools>> tools_ {};
      // The update time in RFC 3339 format.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateExternalAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateExternalAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateExternalAgentResponseBody::Data) };
    inline CreateExternalAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateExternalAgentResponseBody::Data) };
    inline CreateExternalAgentResponseBody& setData(const CreateExternalAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateExternalAgentResponseBody& setData(CreateExternalAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateExternalAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateExternalAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExternalAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateExternalAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The information about the external agent after creation.
    shared_ptr<CreateExternalAgentResponseBody::Data> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result message of the request processing.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
