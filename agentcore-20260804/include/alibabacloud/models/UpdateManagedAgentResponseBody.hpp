// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMANAGEDAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMANAGEDAGENTRESPONSEBODY_HPP_
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
  class UpdateManagedAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateManagedAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateManagedAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateManagedAgentResponseBody() = default ;
    UpdateManagedAgentResponseBody(const UpdateManagedAgentResponseBody &) = default ;
    UpdateManagedAgentResponseBody(UpdateManagedAgentResponseBody &&) = default ;
    UpdateManagedAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateManagedAgentResponseBody() = default ;
    UpdateManagedAgentResponseBody& operator=(const UpdateManagedAgentResponseBody &) = default ;
    UpdateManagedAgentResponseBody& operator=(UpdateManagedAgentResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(environment, environment_);
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(network, network_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subAgents, subAgents_);
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
        DARABONBA_PTR_FROM_JSON(environment, environment_);
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(network, network_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subAgents, subAgents_);
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
        // The tool type.
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
          // The name of the template in the AI registry.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The version of the template in the AI registry.
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
        // The AI registry template configuration.
        shared_ptr<Template::AiRegistry> aiRegistry_ {};
      };

      class SubAgents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubAgents& obj) { 
          DARABONBA_PTR_TO_JSON(instruction, instruction_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, SubAgents& obj) { 
          DARABONBA_PTR_FROM_JSON(instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        SubAgents() = default ;
        SubAgents(const SubAgents &) = default ;
        SubAgents(SubAgents &&) = default ;
        SubAgents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubAgents() = default ;
        SubAgents& operator=(const SubAgents &) = default ;
        SubAgents& operator=(SubAgents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruction_ == nullptr
        && this->name_ == nullptr; };
        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline SubAgents& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubAgents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The sub-agent instruction.
        // 
        // This parameter is required.
        shared_ptr<string> instruction_ {};
        // The sub-agent name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
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

      class Runtime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
          DARABONBA_PTR_TO_JSON(compute, compute_);
          DARABONBA_PTR_TO_JSON(sessionPolicy, sessionPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
          DARABONBA_PTR_FROM_JSON(compute, compute_);
          DARABONBA_PTR_FROM_JSON(sessionPolicy, sessionPolicy_);
        };
        Runtime() = default ;
        Runtime(const Runtime &) = default ;
        Runtime(Runtime &&) = default ;
        Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Runtime() = default ;
        Runtime& operator=(const Runtime &) = default ;
        Runtime& operator=(Runtime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SessionPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SessionPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(headerName, headerName_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, SessionPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(headerName, headerName_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          SessionPolicy() = default ;
          SessionPolicy(const SessionPolicy &) = default ;
          SessionPolicy(SessionPolicy &&) = default ;
          SessionPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SessionPolicy() = default ;
          SessionPolicy& operator=(const SessionPolicy &) = default ;
          SessionPolicy& operator=(SessionPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->headerName_ == nullptr
        && this->type_ == nullptr; };
          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline SessionPolicy& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SessionPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The HTTP header name used for session affinity. This parameter takes effect only when sessionPolicy.type is set to ISOLATED_HEADER_FIELD.
          shared_ptr<string> headerName_ {};
          // The session policy type.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        class Compute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Compute& obj) { 
            DARABONBA_PTR_TO_JSON(computeClass, computeClass_);
          };
          friend void from_json(const Darabonba::Json& j, Compute& obj) { 
            DARABONBA_PTR_FROM_JSON(computeClass, computeClass_);
          };
          Compute() = default ;
          Compute(const Compute &) = default ;
          Compute(Compute &&) = default ;
          Compute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Compute() = default ;
          Compute& operator=(const Compute &) = default ;
          Compute& operator=(Compute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->computeClass_ == nullptr; };
          // computeClass Field Functions 
          bool hasComputeClass() const { return this->computeClass_ != nullptr;};
          void deleteComputeClass() { this->computeClass_ = nullptr;};
          inline string getComputeClass() const { DARABONBA_PTR_GET_DEFAULT(computeClass_, "") };
          inline Compute& setComputeClass(string computeClass) { DARABONBA_PTR_SET_VALUE(computeClass_, computeClass) };


        protected:
          // The compute specification.
          // 
          // This parameter is required.
          shared_ptr<string> computeClass_ {};
        };

        virtual bool empty() const override { return this->compute_ == nullptr
        && this->sessionPolicy_ == nullptr; };
        // compute Field Functions 
        bool hasCompute() const { return this->compute_ != nullptr;};
        void deleteCompute() { this->compute_ = nullptr;};
        inline const Runtime::Compute & getCompute() const { DARABONBA_PTR_GET_CONST(compute_, Runtime::Compute) };
        inline Runtime::Compute getCompute() { DARABONBA_PTR_GET(compute_, Runtime::Compute) };
        inline Runtime& setCompute(const Runtime::Compute & compute) { DARABONBA_PTR_SET_VALUE(compute_, compute) };
        inline Runtime& setCompute(Runtime::Compute && compute) { DARABONBA_PTR_SET_RVALUE(compute_, compute) };


        // sessionPolicy Field Functions 
        bool hasSessionPolicy() const { return this->sessionPolicy_ != nullptr;};
        void deleteSessionPolicy() { this->sessionPolicy_ = nullptr;};
        inline const Runtime::SessionPolicy & getSessionPolicy() const { DARABONBA_PTR_GET_CONST(sessionPolicy_, Runtime::SessionPolicy) };
        inline Runtime::SessionPolicy getSessionPolicy() { DARABONBA_PTR_GET(sessionPolicy_, Runtime::SessionPolicy) };
        inline Runtime& setSessionPolicy(const Runtime::SessionPolicy & sessionPolicy) { DARABONBA_PTR_SET_VALUE(sessionPolicy_, sessionPolicy) };
        inline Runtime& setSessionPolicy(Runtime::SessionPolicy && sessionPolicy) { DARABONBA_PTR_SET_RVALUE(sessionPolicy_, sessionPolicy) };


      protected:
        // The compute configuration.
        // 
        // This parameter is required.
        shared_ptr<Runtime::Compute> compute_ {};
        // The session policy configuration.
        // 
        // This parameter is required.
        shared_ptr<Runtime::SessionPolicy> sessionPolicy_ {};
      };

      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(accessInternet, accessInternet_);
          DARABONBA_PTR_TO_JSON(accessVpc, accessVpc_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(accessInternet, accessInternet_);
          DARABONBA_PTR_FROM_JSON(accessVpc, accessVpc_);
        };
        Network() = default ;
        Network(const Network &) = default ;
        Network(Network &&) = default ;
        Network(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Network() = default ;
        Network& operator=(const Network &) = default ;
        Network& operator=(Network &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AccessVpc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessVpc& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, AccessVpc& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          AccessVpc() = default ;
          AccessVpc(const AccessVpc &) = default ;
          AccessVpc(AccessVpc &&) = default ;
          AccessVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessVpc() = default ;
          AccessVpc& operator=(const AccessVpc &) = default ;
          AccessVpc& operator=(AccessVpc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline AccessVpc& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // Specifies whether to allow access to the VPC.
          // 
          // This parameter is required.
          shared_ptr<bool> enabled_ {};
        };

        class AccessInternet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessInternet& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, AccessInternet& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          AccessInternet() = default ;
          AccessInternet(const AccessInternet &) = default ;
          AccessInternet(AccessInternet &&) = default ;
          AccessInternet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessInternet() = default ;
          AccessInternet& operator=(const AccessInternet &) = default ;
          AccessInternet& operator=(AccessInternet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline AccessInternet& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // Specifies whether to allow access to the Internet.
          // 
          // This parameter is required.
          shared_ptr<bool> enabled_ {};
        };

        virtual bool empty() const override { return this->accessInternet_ == nullptr
        && this->accessVpc_ == nullptr; };
        // accessInternet Field Functions 
        bool hasAccessInternet() const { return this->accessInternet_ != nullptr;};
        void deleteAccessInternet() { this->accessInternet_ = nullptr;};
        inline const Network::AccessInternet & getAccessInternet() const { DARABONBA_PTR_GET_CONST(accessInternet_, Network::AccessInternet) };
        inline Network::AccessInternet getAccessInternet() { DARABONBA_PTR_GET(accessInternet_, Network::AccessInternet) };
        inline Network& setAccessInternet(const Network::AccessInternet & accessInternet) { DARABONBA_PTR_SET_VALUE(accessInternet_, accessInternet) };
        inline Network& setAccessInternet(Network::AccessInternet && accessInternet) { DARABONBA_PTR_SET_RVALUE(accessInternet_, accessInternet) };


        // accessVpc Field Functions 
        bool hasAccessVpc() const { return this->accessVpc_ != nullptr;};
        void deleteAccessVpc() { this->accessVpc_ = nullptr;};
        inline const Network::AccessVpc & getAccessVpc() const { DARABONBA_PTR_GET_CONST(accessVpc_, Network::AccessVpc) };
        inline Network::AccessVpc getAccessVpc() { DARABONBA_PTR_GET(accessVpc_, Network::AccessVpc) };
        inline Network& setAccessVpc(const Network::AccessVpc & accessVpc) { DARABONBA_PTR_SET_VALUE(accessVpc_, accessVpc) };
        inline Network& setAccessVpc(Network::AccessVpc && accessVpc) { DARABONBA_PTR_SET_RVALUE(accessVpc_, accessVpc) };


      protected:
        // The public network access configuration.
        shared_ptr<Network::AccessInternet> accessInternet_ {};
        // The VPC access configuration.
        shared_ptr<Network::AccessVpc> accessVpc_ {};
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

      class Environment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environment& obj) { 
          DARABONBA_PTR_TO_JSON(credentialReferences, credentialReferences_);
          DARABONBA_PTR_TO_JSON(variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Environment& obj) { 
          DARABONBA_PTR_FROM_JSON(credentialReferences, credentialReferences_);
          DARABONBA_PTR_FROM_JSON(variables, variables_);
        };
        Environment() = default ;
        Environment(const Environment &) = default ;
        Environment(Environment &&) = default ;
        Environment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Environment() = default ;
        Environment& operator=(const Environment &) = default ;
        Environment& operator=(Environment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Variables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variables& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Variables() = default ;
          Variables(const Variables &) = default ;
          Variables(Variables &&) = default ;
          Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Variables() = default ;
          Variables& operator=(const Variables &) = default ;
          Variables& operator=(Variables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The environment variable name.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The environment variable value.
          // 
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        class CredentialReferences : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CredentialReferences& obj) { 
            DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
          };
          friend void from_json(const Darabonba::Json& j, CredentialReferences& obj) { 
            DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
          };
          CredentialReferences() = default ;
          CredentialReferences(const CredentialReferences &) = default ;
          CredentialReferences(CredentialReferences &&) = default ;
          CredentialReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CredentialReferences() = default ;
          CredentialReferences& operator=(const CredentialReferences &) = default ;
          CredentialReferences& operator=(CredentialReferences &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->credentialId_ == nullptr; };
          // credentialId Field Functions 
          bool hasCredentialId() const { return this->credentialId_ != nullptr;};
          void deleteCredentialId() { this->credentialId_ = nullptr;};
          inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
          inline CredentialReferences& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


        protected:
          // The credential ID.
          // 
          // This parameter is required.
          shared_ptr<string> credentialId_ {};
        };

        virtual bool empty() const override { return this->credentialReferences_ == nullptr
        && this->variables_ == nullptr; };
        // credentialReferences Field Functions 
        bool hasCredentialReferences() const { return this->credentialReferences_ != nullptr;};
        void deleteCredentialReferences() { this->credentialReferences_ = nullptr;};
        inline const vector<Environment::CredentialReferences> & getCredentialReferences() const { DARABONBA_PTR_GET_CONST(credentialReferences_, vector<Environment::CredentialReferences>) };
        inline vector<Environment::CredentialReferences> getCredentialReferences() { DARABONBA_PTR_GET(credentialReferences_, vector<Environment::CredentialReferences>) };
        inline Environment& setCredentialReferences(const vector<Environment::CredentialReferences> & credentialReferences) { DARABONBA_PTR_SET_VALUE(credentialReferences_, credentialReferences) };
        inline Environment& setCredentialReferences(vector<Environment::CredentialReferences> && credentialReferences) { DARABONBA_PTR_SET_RVALUE(credentialReferences_, credentialReferences) };


        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Environment::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Environment::Variables>) };
        inline vector<Environment::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Environment::Variables>) };
        inline Environment& setVariables(const vector<Environment::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Environment& setVariables(vector<Environment::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The list of credential references.
        shared_ptr<vector<Environment::CredentialReferences>> credentialReferences_ {};
        // The list of environment variables.
        shared_ptr<vector<Environment::Variables>> variables_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->environment_ == nullptr
        && this->instruction_ == nullptr && this->latestSpecVersion_ == nullptr && this->latestVersionStatus_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->network_ == nullptr && this->regionId_ == nullptr && this->runtime_ == nullptr && this->skills_ == nullptr && this->status_ == nullptr
        && this->subAgents_ == nullptr && this->template_ == nullptr && this->tools_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
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


      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline const Data::Environment & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, Data::Environment) };
      inline Data::Environment getEnvironment() { DARABONBA_PTR_GET(environment_, Data::Environment) };
      inline Data& setEnvironment(const Data::Environment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
      inline Data& setEnvironment(Data::Environment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const Data::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, Data::Network) };
      inline Data::Network getNetwork() { DARABONBA_PTR_GET(network_, Data::Network) };
      inline Data& setNetwork(const Data::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline Data& setNetwork(Data::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline const Data::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Data::Runtime) };
      inline Data::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Data::Runtime) };
      inline Data& setRuntime(const Data::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
      inline Data& setRuntime(Data::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


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


      // subAgents Field Functions 
      bool hasSubAgents() const { return this->subAgents_ != nullptr;};
      void deleteSubAgents() { this->subAgents_ = nullptr;};
      inline const vector<Data::SubAgents> & getSubAgents() const { DARABONBA_PTR_GET_CONST(subAgents_, vector<Data::SubAgents>) };
      inline vector<Data::SubAgents> getSubAgents() { DARABONBA_PTR_GET(subAgents_, vector<Data::SubAgents>) };
      inline Data& setSubAgents(const vector<Data::SubAgents> & subAgents) { DARABONBA_PTR_SET_VALUE(subAgents_, subAgents) };
      inline Data& setSubAgents(vector<Data::SubAgents> && subAgents) { DARABONBA_PTR_SET_RVALUE(subAgents_, subAgents) };


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
      // The managed agent ID.
      shared_ptr<string> agentId_ {};
      // The creation mode.
      shared_ptr<string> createMode_ {};
      // The creation time in RFC 3339 format.
      shared_ptr<string> createdAt_ {};
      // The deployment type.
      shared_ptr<string> deployType_ {};
      // The description of the managed agent.
      shared_ptr<string> description_ {};
      // The environment configuration information.
      shared_ptr<Data::Environment> environment_ {};
      // The agent instruction that guides the behavior of the agent.
      shared_ptr<string> instruction_ {};
      // The latest specification version number.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The latest version status.
      shared_ptr<string> latestVersionStatus_ {};
      // The model configuration information.
      shared_ptr<Data::Model> model_ {};
      // The name of the managed agent.
      shared_ptr<string> name_ {};
      // The network configuration information.
      shared_ptr<Data::Network> network_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The runtime configuration information.
      shared_ptr<Data::Runtime> runtime_ {};
      // The list of skill configurations.
      shared_ptr<vector<Data::Skills>> skills_ {};
      // The status of the managed agent.
      shared_ptr<string> status_ {};
      // The list of sub-agent configurations.
      shared_ptr<vector<Data::SubAgents>> subAgents_ {};
      // The template configuration information.
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
    inline UpdateManagedAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateManagedAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateManagedAgentResponseBody::Data) };
    inline UpdateManagedAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateManagedAgentResponseBody::Data) };
    inline UpdateManagedAgentResponseBody& setData(const UpdateManagedAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateManagedAgentResponseBody& setData(UpdateManagedAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateManagedAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateManagedAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateManagedAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateManagedAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The details of the managed agent.
    shared_ptr<UpdateManagedAgentResponseBody::Data> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result message of the request.
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
