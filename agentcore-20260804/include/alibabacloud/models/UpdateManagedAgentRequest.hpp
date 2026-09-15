// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMANAGEDAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMANAGEDAGENTREQUEST_HPP_
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
  class UpdateManagedAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateManagedAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateManagedAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateManagedAgentRequest() = default ;
    UpdateManagedAgentRequest(const UpdateManagedAgentRequest &) = default ;
    UpdateManagedAgentRequest(UpdateManagedAgentRequest &&) = default ;
    UpdateManagedAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateManagedAgentRequest() = default ;
    UpdateManagedAgentRequest& operator=(const UpdateManagedAgentRequest &) = default ;
    UpdateManagedAgentRequest& operator=(UpdateManagedAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environment, environment_);
        DARABONBA_PTR_TO_JSON(harness, harness_);
        DARABONBA_PTR_TO_JSON(instruction, instruction_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(network, network_);
        DARABONBA_PTR_TO_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
        DARABONBA_PTR_TO_JSON(subAgents, subAgents_);
        DARABONBA_PTR_TO_JSON(template, template_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environment, environment_);
        DARABONBA_PTR_FROM_JSON(harness, harness_);
        DARABONBA_PTR_FROM_JSON(instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(network, network_);
        DARABONBA_PTR_FROM_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
        DARABONBA_PTR_FROM_JSON(subAgents, subAgents_);
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
          DARABONBA_PTR_TO_JSON(hpa, hpa_);
          DARABONBA_PTR_TO_JSON(sessionPolicy, sessionPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
          DARABONBA_PTR_FROM_JSON(compute, compute_);
          DARABONBA_PTR_FROM_JSON(hpa, hpa_);
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
          // The HTTP header name used for session affinity. Takes effect when sessionPolicy.type is set to ISOLATED_HEADER_FIELD.
          shared_ptr<string> headerName_ {};
          // The session policy type.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        class Hpa : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hpa& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(maxConcurrentSessionsPerSandbox, maxConcurrentSessionsPerSandbox_);
            DARABONBA_PTR_TO_JSON(maxSandboxCount, maxSandboxCount_);
            DARABONBA_PTR_TO_JSON(minSandboxCount, minSandboxCount_);
            DARABONBA_PTR_TO_JSON(sessionTtlSeconds, sessionTtlSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, Hpa& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(maxConcurrentSessionsPerSandbox, maxConcurrentSessionsPerSandbox_);
            DARABONBA_PTR_FROM_JSON(maxSandboxCount, maxSandboxCount_);
            DARABONBA_PTR_FROM_JSON(minSandboxCount, minSandboxCount_);
            DARABONBA_PTR_FROM_JSON(sessionTtlSeconds, sessionTtlSeconds_);
          };
          Hpa() = default ;
          Hpa(const Hpa &) = default ;
          Hpa(Hpa &&) = default ;
          Hpa(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hpa() = default ;
          Hpa& operator=(const Hpa &) = default ;
          Hpa& operator=(Hpa &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->maxConcurrentSessionsPerSandbox_ == nullptr && this->maxSandboxCount_ == nullptr && this->minSandboxCount_ == nullptr && this->sessionTtlSeconds_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Hpa& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // maxConcurrentSessionsPerSandbox Field Functions 
          bool hasMaxConcurrentSessionsPerSandbox() const { return this->maxConcurrentSessionsPerSandbox_ != nullptr;};
          void deleteMaxConcurrentSessionsPerSandbox() { this->maxConcurrentSessionsPerSandbox_ = nullptr;};
          inline int32_t getMaxConcurrentSessionsPerSandbox() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentSessionsPerSandbox_, 0) };
          inline Hpa& setMaxConcurrentSessionsPerSandbox(int32_t maxConcurrentSessionsPerSandbox) { DARABONBA_PTR_SET_VALUE(maxConcurrentSessionsPerSandbox_, maxConcurrentSessionsPerSandbox) };


          // maxSandboxCount Field Functions 
          bool hasMaxSandboxCount() const { return this->maxSandboxCount_ != nullptr;};
          void deleteMaxSandboxCount() { this->maxSandboxCount_ = nullptr;};
          inline int32_t getMaxSandboxCount() const { DARABONBA_PTR_GET_DEFAULT(maxSandboxCount_, 0) };
          inline Hpa& setMaxSandboxCount(int32_t maxSandboxCount) { DARABONBA_PTR_SET_VALUE(maxSandboxCount_, maxSandboxCount) };


          // minSandboxCount Field Functions 
          bool hasMinSandboxCount() const { return this->minSandboxCount_ != nullptr;};
          void deleteMinSandboxCount() { this->minSandboxCount_ = nullptr;};
          inline int32_t getMinSandboxCount() const { DARABONBA_PTR_GET_DEFAULT(minSandboxCount_, 0) };
          inline Hpa& setMinSandboxCount(int32_t minSandboxCount) { DARABONBA_PTR_SET_VALUE(minSandboxCount_, minSandboxCount) };


          // sessionTtlSeconds Field Functions 
          bool hasSessionTtlSeconds() const { return this->sessionTtlSeconds_ != nullptr;};
          void deleteSessionTtlSeconds() { this->sessionTtlSeconds_ = nullptr;};
          inline int32_t getSessionTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionTtlSeconds_, 0) };
          inline Hpa& setSessionTtlSeconds(int32_t sessionTtlSeconds) { DARABONBA_PTR_SET_VALUE(sessionTtlSeconds_, sessionTtlSeconds) };


        protected:
          // Specifies whether to enable auto scaling. Required when hpa is present as validated by the backend.
          shared_ptr<bool> enabled_ {};
          // The maximum number of active sessions per Sandbox. Required when hpa is present as validated by the backend.
          shared_ptr<int32_t> maxConcurrentSessionsPerSandbox_ {};
          // The maximum number of Sandboxes. Required when HPA is enabled and must be no less than the minimum value.
          shared_ptr<int32_t> maxSandboxCount_ {};
          // The minimum number of Sandboxes. Required when HPA is enabled.
          shared_ptr<int32_t> minSandboxCount_ {};
          // The session reclamation time after inactivity, in seconds. Required when hpa is present as validated by the backend.
          shared_ptr<int32_t> sessionTtlSeconds_ {};
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
        && this->hpa_ == nullptr && this->sessionPolicy_ == nullptr; };
        // compute Field Functions 
        bool hasCompute() const { return this->compute_ != nullptr;};
        void deleteCompute() { this->compute_ = nullptr;};
        inline const Runtime::Compute & getCompute() const { DARABONBA_PTR_GET_CONST(compute_, Runtime::Compute) };
        inline Runtime::Compute getCompute() { DARABONBA_PTR_GET(compute_, Runtime::Compute) };
        inline Runtime& setCompute(const Runtime::Compute & compute) { DARABONBA_PTR_SET_VALUE(compute_, compute) };
        inline Runtime& setCompute(Runtime::Compute && compute) { DARABONBA_PTR_SET_RVALUE(compute_, compute) };


        // hpa Field Functions 
        bool hasHpa() const { return this->hpa_ != nullptr;};
        void deleteHpa() { this->hpa_ = nullptr;};
        inline const Runtime::Hpa & getHpa() const { DARABONBA_PTR_GET_CONST(hpa_, Runtime::Hpa) };
        inline Runtime::Hpa getHpa() { DARABONBA_PTR_GET(hpa_, Runtime::Hpa) };
        inline Runtime& setHpa(const Runtime::Hpa & hpa) { DARABONBA_PTR_SET_VALUE(hpa_, hpa) };
        inline Runtime& setHpa(Runtime::Hpa && hpa) { DARABONBA_PTR_SET_RVALUE(hpa_, hpa) };


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
        // The Sandbox auto scaling and session configuration.
        shared_ptr<Runtime::Hpa> hpa_ {};
        // The session policy configuration.
        // 
        // This parameter is required.
        shared_ptr<Runtime::SessionPolicy> sessionPolicy_ {};
      };

      class OssMounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssMounts& obj) { 
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(mountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
        };
        friend void from_json(const Darabonba::Json& j, OssMounts& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(mountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
        };
        OssMounts() = default ;
        OssMounts(const OssMounts &) = default ;
        OssMounts(OssMounts &&) = default ;
        OssMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssMounts() = default ;
        OssMounts& operator=(const OssMounts &) = default ;
        OssMounts& operator=(OssMounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->mountPath_ == nullptr && this->path_ == nullptr && this->readOnly_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssMounts& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline OssMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline OssMounts& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline OssMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      protected:
        // The OSS bucket name. Each mount item is validated as required by the backend.
        shared_ptr<string> bucketName_ {};
        // The absolute mount path in the container. Each mount item is validated as required by the backend.
        shared_ptr<string> mountPath_ {};
        // The relative object prefix in the bucket. If not specified, the entire bucket is mounted.
        shared_ptr<string> path_ {};
        // Specifies whether to mount as read-only. Default value: false.
        shared_ptr<bool> readOnly_ {};
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
          // Specifies whether VPC access is allowed.
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
          // Specifies whether public network access is allowed.
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
        shared_ptr<string> modelName_ {};
      };

      class Harness : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Harness& obj) { 
          DARABONBA_PTR_TO_JSON(configuration, configuration_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Harness& obj) { 
          DARABONBA_PTR_FROM_JSON(configuration, configuration_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Harness() = default ;
        Harness(const Harness &) = default ;
        Harness(Harness &&) = default ;
        Harness(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Harness() = default ;
        Harness& operator=(const Harness &) = default ;
        Harness& operator=(Harness &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Configuration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
            DARABONBA_PTR_TO_JSON(connectorServiceAccountKey, connectorServiceAccountKey_);
            DARABONBA_PTR_TO_JSON(connectorServiceAccountName, connectorServiceAccountName_);
          };
          friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
            DARABONBA_PTR_FROM_JSON(connectorServiceAccountKey, connectorServiceAccountKey_);
            DARABONBA_PTR_FROM_JSON(connectorServiceAccountName, connectorServiceAccountName_);
          };
          Configuration() = default ;
          Configuration(const Configuration &) = default ;
          Configuration(Configuration &&) = default ;
          Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Configuration() = default ;
          Configuration& operator=(const Configuration &) = default ;
          Configuration& operator=(Configuration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connectorServiceAccountKey_ == nullptr
        && this->connectorServiceAccountName_ == nullptr; };
          // connectorServiceAccountKey Field Functions 
          bool hasConnectorServiceAccountKey() const { return this->connectorServiceAccountKey_ != nullptr;};
          void deleteConnectorServiceAccountKey() { this->connectorServiceAccountKey_ = nullptr;};
          inline string getConnectorServiceAccountKey() const { DARABONBA_PTR_GET_DEFAULT(connectorServiceAccountKey_, "") };
          inline Configuration& setConnectorServiceAccountKey(string connectorServiceAccountKey) { DARABONBA_PTR_SET_VALUE(connectorServiceAccountKey_, connectorServiceAccountKey) };


          // connectorServiceAccountName Field Functions 
          bool hasConnectorServiceAccountName() const { return this->connectorServiceAccountName_ != nullptr;};
          void deleteConnectorServiceAccountName() { this->connectorServiceAccountName_ = nullptr;};
          inline string getConnectorServiceAccountName() const { DARABONBA_PTR_GET_DEFAULT(connectorServiceAccountName_, "") };
          inline Configuration& setConnectorServiceAccountName(string connectorServiceAccountName) { DARABONBA_PTR_SET_VALUE(connectorServiceAccountName_, connectorServiceAccountName) };


        protected:
          // The Key ID used to bind a Service Account Key of the QoderCLI Connector. This parameter can be omitted when only one key exists, but is required when multiple keys exist.
          shared_ptr<string> connectorServiceAccountKey_ {};
          // The Connector Key name that is populated during queries. This value is not used as a binding reference during writes.
          shared_ptr<string> connectorServiceAccountName_ {};
        };

        virtual bool empty() const override { return this->configuration_ == nullptr
        && this->type_ == nullptr; };
        // configuration Field Functions 
        bool hasConfiguration() const { return this->configuration_ != nullptr;};
        void deleteConfiguration() { this->configuration_ = nullptr;};
        inline const Harness::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Harness::Configuration) };
        inline Harness::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Harness::Configuration) };
        inline Harness& setConfiguration(const Harness::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
        inline Harness& setConfiguration(Harness::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Harness& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The Connector binding configuration for the qodercli harness.
        shared_ptr<Harness::Configuration> configuration_ {};
        // The type of the runtime harness. Valid values: qwenpaw and qodercli. When the type is qodercli, binding is performed based on configuration.connectorServiceAccountKey, and the name is also populated during queries.
        shared_ptr<string> type_ {};
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
          // The name of the environment variable.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The value of the environment variable.
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

      virtual bool empty() const override { return this->description_ == nullptr
        && this->environment_ == nullptr && this->harness_ == nullptr && this->instruction_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->network_ == nullptr && this->ossMounts_ == nullptr && this->runtime_ == nullptr && this->skills_ == nullptr && this->subAgents_ == nullptr
        && this->template_ == nullptr && this->tools_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline const Body::Environment & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, Body::Environment) };
      inline Body::Environment getEnvironment() { DARABONBA_PTR_GET(environment_, Body::Environment) };
      inline Body& setEnvironment(const Body::Environment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
      inline Body& setEnvironment(Body::Environment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


      // harness Field Functions 
      bool hasHarness() const { return this->harness_ != nullptr;};
      void deleteHarness() { this->harness_ = nullptr;};
      inline const Body::Harness & getHarness() const { DARABONBA_PTR_GET_CONST(harness_, Body::Harness) };
      inline Body::Harness getHarness() { DARABONBA_PTR_GET(harness_, Body::Harness) };
      inline Body& setHarness(const Body::Harness & harness) { DARABONBA_PTR_SET_VALUE(harness_, harness) };
      inline Body& setHarness(Body::Harness && harness) { DARABONBA_PTR_SET_RVALUE(harness_, harness) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const Body::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, Body::Network) };
      inline Body::Network getNetwork() { DARABONBA_PTR_GET(network_, Body::Network) };
      inline Body& setNetwork(const Body::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline Body& setNetwork(Body::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // ossMounts Field Functions 
      bool hasOssMounts() const { return this->ossMounts_ != nullptr;};
      void deleteOssMounts() { this->ossMounts_ = nullptr;};
      inline const vector<Body::OssMounts> & getOssMounts() const { DARABONBA_PTR_GET_CONST(ossMounts_, vector<Body::OssMounts>) };
      inline vector<Body::OssMounts> getOssMounts() { DARABONBA_PTR_GET(ossMounts_, vector<Body::OssMounts>) };
      inline Body& setOssMounts(const vector<Body::OssMounts> & ossMounts) { DARABONBA_PTR_SET_VALUE(ossMounts_, ossMounts) };
      inline Body& setOssMounts(vector<Body::OssMounts> && ossMounts) { DARABONBA_PTR_SET_RVALUE(ossMounts_, ossMounts) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline const Body::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Body::Runtime) };
      inline Body::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Body::Runtime) };
      inline Body& setRuntime(const Body::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
      inline Body& setRuntime(Body::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Body::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Body::Skills>) };
      inline vector<Body::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Body::Skills>) };
      inline Body& setSkills(const vector<Body::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Body& setSkills(vector<Body::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // subAgents Field Functions 
      bool hasSubAgents() const { return this->subAgents_ != nullptr;};
      void deleteSubAgents() { this->subAgents_ = nullptr;};
      inline const vector<Body::SubAgents> & getSubAgents() const { DARABONBA_PTR_GET_CONST(subAgents_, vector<Body::SubAgents>) };
      inline vector<Body::SubAgents> getSubAgents() { DARABONBA_PTR_GET(subAgents_, vector<Body::SubAgents>) };
      inline Body& setSubAgents(const vector<Body::SubAgents> & subAgents) { DARABONBA_PTR_SET_VALUE(subAgents_, subAgents) };
      inline Body& setSubAgents(vector<Body::SubAgents> && subAgents) { DARABONBA_PTR_SET_RVALUE(subAgents_, subAgents) };


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
      // The description of the managed agent.
      shared_ptr<string> description_ {};
      // The environment configuration.
      shared_ptr<Body::Environment> environment_ {};
      // The runtime harness of the managed agent. Valid values: qwenpaw and qodercli.
      shared_ptr<Body::Harness> harness_ {};
      // The agent instruction that guides the behavior of the agent.
      shared_ptr<string> instruction_ {};
      // The model configuration.
      shared_ptr<Body::Model> model_ {};
      // The name of the managed agent.
      shared_ptr<string> name_ {};
      // The network configuration.
      shared_ptr<Body::Network> network_ {};
      // The OSS mount list. A maximum of 10 items are supported. Pass an empty array to clear existing mounts.
      shared_ptr<vector<Body::OssMounts>> ossMounts_ {};
      // The runtime configuration.
      shared_ptr<Body::Runtime> runtime_ {};
      // The list of skill configurations.
      shared_ptr<vector<Body::Skills>> skills_ {};
      // The list of sub-agent configurations.
      shared_ptr<vector<Body::SubAgents>> subAgents_ {};
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
    inline const UpdateManagedAgentRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateManagedAgentRequest::Body) };
    inline UpdateManagedAgentRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateManagedAgentRequest::Body) };
    inline UpdateManagedAgentRequest& setBody(const UpdateManagedAgentRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateManagedAgentRequest& setBody(UpdateManagedAgentRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateManagedAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<UpdateManagedAgentRequest::Body> body_ {};
    // The reserved idempotency token. The backend does not guarantee idempotence in the current phase.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
