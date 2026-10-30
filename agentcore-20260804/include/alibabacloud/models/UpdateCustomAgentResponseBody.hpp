// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateCustomAgentResponseBody() = default ;
    UpdateCustomAgentResponseBody(const UpdateCustomAgentResponseBody &) = default ;
    UpdateCustomAgentResponseBody(UpdateCustomAgentResponseBody &&) = default ;
    UpdateCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentResponseBody() = default ;
    UpdateCustomAgentResponseBody& operator=(const UpdateCustomAgentResponseBody &) = default ;
    UpdateCustomAgentResponseBody& operator=(UpdateCustomAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(agenticFsMounts, agenticFsMounts_);
        DARABONBA_PTR_TO_JSON(artifact, artifact_);
        DARABONBA_PTR_TO_JSON(codePackageInfo, codePackageInfo_);
        DARABONBA_PTR_TO_JSON(createMode, createMode_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(currentImage, currentImage_);
        DARABONBA_PTR_TO_JSON(customImage, customImage_);
        DARABONBA_PTR_TO_JSON(deployType, deployType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(effectiveSpecVersion, effectiveSpecVersion_);
        DARABONBA_PTR_TO_JSON(environment, environment_);
        DARABONBA_PTR_TO_JSON(healthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(imageCacheId, imageCacheId_);
        DARABONBA_PTR_TO_JSON(imageCachePreparation, imageCachePreparation_);
        DARABONBA_PTR_TO_JSON(imagePreparation, imagePreparation_);
        DARABONBA_PTR_TO_JSON(latestExecutionError, latestExecutionError_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_TO_JSON(logging, logging_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(network, network_);
        DARABONBA_PTR_TO_JSON(observability, observability_);
        DARABONBA_PTR_TO_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(sandboxPhaseCounts, sandboxPhaseCounts_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(useImageCache, useImageCache_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(agenticFsMounts, agenticFsMounts_);
        DARABONBA_PTR_FROM_JSON(artifact, artifact_);
        DARABONBA_PTR_FROM_JSON(codePackageInfo, codePackageInfo_);
        DARABONBA_PTR_FROM_JSON(createMode, createMode_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(currentImage, currentImage_);
        DARABONBA_PTR_FROM_JSON(customImage, customImage_);
        DARABONBA_PTR_FROM_JSON(deployType, deployType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(effectiveSpecVersion, effectiveSpecVersion_);
        DARABONBA_PTR_FROM_JSON(environment, environment_);
        DARABONBA_PTR_FROM_JSON(healthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(imageCacheId, imageCacheId_);
        DARABONBA_PTR_FROM_JSON(imageCachePreparation, imageCachePreparation_);
        DARABONBA_PTR_FROM_JSON(imagePreparation, imagePreparation_);
        DARABONBA_PTR_FROM_JSON(latestExecutionError, latestExecutionError_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(latestVersionStatus, latestVersionStatus_);
        DARABONBA_PTR_FROM_JSON(logging, logging_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(network, network_);
        DARABONBA_PTR_FROM_JSON(observability, observability_);
        DARABONBA_PTR_FROM_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(sandboxPhaseCounts, sandboxPhaseCounts_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(useImageCache, useImageCache_);
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
          // The name of the HTTP request header used by the session policy. This applies to ISOLATED_HEADER_FIELD.
          shared_ptr<string> headerName_ {};
          // The session policy type. Valid values: AFFINITY: Session affinity. ISOLATED_HEADER_FIELD: Uses the request header specified by headerName to associate sessions. ISOLATED_COOKIE is not recommended. The compatible value DISABLED in requests is returned as AFFINITY.
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
          // Specifies whether elastic scaling is enabled.
          // 
          // This parameter is required.
          shared_ptr<bool> enabled_ {};
          // The maximum number of concurrent sessions configured for a single runtime instance.
          shared_ptr<int32_t> maxConcurrentSessionsPerSandbox_ {};
          // The maximum number of runtime instances configured.
          shared_ptr<int32_t> maxSandboxCount_ {};
          // The minimum number of runtime instances configured.
          shared_ptr<int32_t> minSandboxCount_ {};
          // The configured maximum idle time for a session, in seconds.
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
          // The computing specification. Valid values:
          // - INTERACTIVE: 1 vCPU and 2 GiB of memory.
          // - STANDARD: 2 vCPUs and 4 GiB of memory.
          // - HEAVY: 4 vCPUs and 8 GiB of memory.
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
        // The compute resource configuration for the agent runtime instance.
        // 
        // This parameter is required.
        shared_ptr<Runtime::Compute> compute_ {};
        // The elastic policy configuration of the agent.
        shared_ptr<Runtime::Hpa> hpa_ {};
        // The session policy configuration of the agent.
        // 
        // This parameter is required.
        shared_ptr<Runtime::SessionPolicy> sessionPolicy_ {};
      };

      class Protocol : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Protocol& obj) { 
          DARABONBA_PTR_TO_JSON(headers, headers_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Protocol& obj) { 
          DARABONBA_PTR_FROM_JSON(headers, headers_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Protocol() = default ;
        Protocol(const Protocol &) = default ;
        Protocol(Protocol &&) = default ;
        Protocol(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Protocol() = default ;
        Protocol& operator=(const Protocol &) = default ;
        Protocol& operator=(Protocol &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Paths() = default ;
          Paths(const Paths &) = default ;
          Paths(Paths &&) = default ;
          Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Paths() = default ;
          Paths& operator=(const Paths &) = default ;
          Paths& operator=(Paths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Paths& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Paths& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The purpose description of the current API path.
          shared_ptr<string> description_ {};
          // The API path corresponding to the current protocol.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->headers_ == nullptr
        && this->paths_ == nullptr && this->type_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline Protocol& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline Protocol& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<Protocol::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Protocol::Paths>) };
        inline vector<Protocol::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<Protocol::Paths>) };
        inline Protocol& setPaths(const vector<Protocol::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Protocol& setPaths(vector<Protocol::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Protocol& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The request header configuration for the current protocol. The key is the name and the value is a string.
        shared_ptr<map<string, string>> headers_ {};
        // The list of API paths corresponding to the current protocol.
        shared_ptr<vector<Protocol::Paths>> paths_ {};
        // The invocation protocol type. Valid values:
        // - agui: AG-UI protocol.
        // - openai-chat-completion: OpenAI Chat Completions compatible protocol.
        // - custom: Custom protocol.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
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
        // The name of the mounted OSS bucket.
        shared_ptr<string> bucketName_ {};
        // The OSS mount directory in the container, located under /mnt/oss/.
        shared_ptr<string> mountPath_ {};
        // The object directory prefix in the mounted bucket.
        shared_ptr<string> path_ {};
        // Specifies whether the mount is read-only. A value of true indicates a read-only mount, and a value of false indicates a read-write mount.
        shared_ptr<bool> readOnly_ {};
      };

      class Observability : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Observability& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, Observability& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        Observability() = default ;
        Observability(const Observability &) = default ;
        Observability(Observability &&) = default ;
        Observability(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Observability() = default ;
        Observability& operator=(const Observability &) = default ;
        Observability& operator=(Observability &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Observability& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // Specifies whether to enable agent observability.
        shared_ptr<bool> enabled_ {};
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
          // Specifies whether the agent is allowed to access the user VPC configured for the workspace. The actual access is still restricted by the workspace.
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
          // Specifies whether the agent is allowed to access the Internet. The actual access is still restricted by the workspace.
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
        // The Internet access configuration of the agent. If this item is not configured, the agent allows access, but it is still restricted by the workspace.
        shared_ptr<Network::AccessInternet> accessInternet_ {};
        // The user VPC access configuration of the agent. If this item is not configured, the agent allows access, but it is still restricted by the workspace.
        shared_ptr<Network::AccessVpc> accessVpc_ {};
      };

      class Logging : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logging& obj) { 
          DARABONBA_PTR_TO_JSON(sls, sls_);
        };
        friend void from_json(const Darabonba::Json& j, Logging& obj) { 
          DARABONBA_PTR_FROM_JSON(sls, sls_);
        };
        Logging() = default ;
        Logging(const Logging &) = default ;
        Logging(Logging &&) = default ;
        Logging(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logging() = default ;
        Logging& operator=(const Logging &) = default ;
        Logging& operator=(Logging &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sls : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sls& obj) { 
            DARABONBA_PTR_TO_JSON(logstore, logstore_);
            DARABONBA_PTR_TO_JSON(project, project_);
          };
          friend void from_json(const Darabonba::Json& j, Sls& obj) { 
            DARABONBA_PTR_FROM_JSON(logstore, logstore_);
            DARABONBA_PTR_FROM_JSON(project, project_);
          };
          Sls() = default ;
          Sls(const Sls &) = default ;
          Sls(Sls &&) = default ;
          Sls(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sls() = default ;
          Sls& operator=(const Sls &) = default ;
          Sls& operator=(Sls &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr; };
          // logstore Field Functions 
          bool hasLogstore() const { return this->logstore_ != nullptr;};
          void deleteLogstore() { this->logstore_ = nullptr;};
          inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
          inline Sls& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
          inline Sls& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        protected:
          // The name of the SLS Logstore that receives agent logs.
          shared_ptr<string> logstore_ {};
          // The name of the SLS project that receives agent logs.
          shared_ptr<string> project_ {};
        };

        virtual bool empty() const override { return this->sls_ == nullptr; };
        // sls Field Functions 
        bool hasSls() const { return this->sls_ != nullptr;};
        void deleteSls() { this->sls_ = nullptr;};
        inline const Logging::Sls & getSls() const { DARABONBA_PTR_GET_CONST(sls_, Logging::Sls) };
        inline Logging::Sls getSls() { DARABONBA_PTR_GET(sls_, Logging::Sls) };
        inline Logging& setSls(const Logging::Sls & sls) { DARABONBA_PTR_SET_VALUE(sls_, sls) };
        inline Logging& setSls(Logging::Sls && sls) { DARABONBA_PTR_SET_RVALUE(sls_, sls) };


      protected:
        // The Simple Log Service (SLS) log delivery destination.
        shared_ptr<Logging::Sls> sls_ {};
      };

      class LatestExecutionError : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LatestExecutionError& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(retryable, retryable_);
        };
        friend void from_json(const Darabonba::Json& j, LatestExecutionError& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(retryable, retryable_);
        };
        LatestExecutionError() = default ;
        LatestExecutionError(const LatestExecutionError &) = default ;
        LatestExecutionError(LatestExecutionError &&) = default ;
        LatestExecutionError(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LatestExecutionError() = default ;
        LatestExecutionError& operator=(const LatestExecutionError &) = default ;
        LatestExecutionError& operator=(LatestExecutionError &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->retryable_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline LatestExecutionError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline LatestExecutionError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // retryable Field Functions 
        bool hasRetryable() const { return this->retryable_ != nullptr;};
        void deleteRetryable() { this->retryable_ = nullptr;};
        inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
        inline LatestExecutionError& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      protected:
        // The reason code for the waiting or execution failure of the latest configuration. This is used to determine the subsequent handling method.
        // 
        // This parameter is required.
        shared_ptr<string> code_ {};
        // The description of the reason why the latest configuration is waiting or failed to execute. Refer to the code and retryable fields to determine What to do next.
        // 
        // This parameter is required.
        shared_ptr<string> message_ {};
        // Indicates whether the system automatically retries. If true, you can query again later. If false, check and fix the configuration based on the reason, and then resubmit.
        // 
        // This parameter is required.
        shared_ptr<bool> retryable_ {};
      };

      class ImagePreparation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImagePreparation& obj) { 
          DARABONBA_PTR_TO_JSON(phase, phase_);
          DARABONBA_PTR_TO_JSON(preparationId, preparationId_);
        };
        friend void from_json(const Darabonba::Json& j, ImagePreparation& obj) { 
          DARABONBA_PTR_FROM_JSON(phase, phase_);
          DARABONBA_PTR_FROM_JSON(preparationId, preparationId_);
        };
        ImagePreparation() = default ;
        ImagePreparation(const ImagePreparation &) = default ;
        ImagePreparation(ImagePreparation &&) = default ;
        ImagePreparation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImagePreparation() = default ;
        ImagePreparation& operator=(const ImagePreparation &) = default ;
        ImagePreparation& operator=(ImagePreparation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->phase_ == nullptr
        && this->preparationId_ == nullptr; };
        // phase Field Functions 
        bool hasPhase() const { return this->phase_ != nullptr;};
        void deletePhase() { this->phase_ = nullptr;};
        inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
        inline ImagePreparation& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


        // preparationId Field Functions 
        bool hasPreparationId() const { return this->preparationId_ != nullptr;};
        void deletePreparationId() { this->preparationId_ = nullptr;};
        inline string getPreparationId() const { DARABONBA_PTR_GET_DEFAULT(preparationId_, "") };
        inline ImagePreparation& setPreparationId(string preparationId) { DARABONBA_PTR_SET_VALUE(preparationId_, preparationId) };


      protected:
        // The current image preparation phase. Configuration acceptance does not mean successful deployment.
        shared_ptr<string> phase_ {};
        // The task ID submitted from the console for this submission. This is not the RM operationId.
        shared_ptr<string> preparationId_ {};
      };

      class ImageCachePreparation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageCachePreparation& obj) { 
          DARABONBA_PTR_TO_JSON(imageId, imageId_);
          DARABONBA_PTR_TO_JSON(statusAtAcceptance, statusAtAcceptance_);
          DARABONBA_PTR_TO_JSON(submissionStatus, submissionStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ImageCachePreparation& obj) { 
          DARABONBA_PTR_FROM_JSON(imageId, imageId_);
          DARABONBA_PTR_FROM_JSON(statusAtAcceptance, statusAtAcceptance_);
          DARABONBA_PTR_FROM_JSON(submissionStatus, submissionStatus_);
        };
        ImageCachePreparation() = default ;
        ImageCachePreparation(const ImageCachePreparation &) = default ;
        ImageCachePreparation(ImageCachePreparation &&) = default ;
        ImageCachePreparation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageCachePreparation() = default ;
        ImageCachePreparation& operator=(const ImageCachePreparation &) = default ;
        ImageCachePreparation& operator=(ImageCachePreparation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->statusAtAcceptance_ == nullptr && this->submissionStatus_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImageCachePreparation& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // statusAtAcceptance Field Functions 
        bool hasStatusAtAcceptance() const { return this->statusAtAcceptance_ != nullptr;};
        void deleteStatusAtAcceptance() { this->statusAtAcceptance_ = nullptr;};
        inline string getStatusAtAcceptance() const { DARABONBA_PTR_GET_DEFAULT(statusAtAcceptance_, "") };
        inline ImageCachePreparation& setStatusAtAcceptance(string statusAtAcceptance) { DARABONBA_PTR_SET_VALUE(statusAtAcceptance_, statusAtAcceptance) };


        // submissionStatus Field Functions 
        bool hasSubmissionStatus() const { return this->submissionStatus_ != nullptr;};
        void deleteSubmissionStatus() { this->submissionStatus_ = nullptr;};
        inline string getSubmissionStatus() const { DARABONBA_PTR_GET_DEFAULT(submissionStatus_, "") };
        inline ImageCachePreparation& setSubmissionStatus(string submissionStatus) { DARABONBA_PTR_SET_VALUE(submissionStatus_, submissionStatus) };


      protected:
        // The ID of the currently associated cache.
        // 
        // This parameter is required.
        shared_ptr<string> imageId_ {};
        // The cache status at the time of acceptance.
        // 
        // This parameter is required.
        shared_ptr<string> statusAtAcceptance_ {};
        // The acceptance status of the cache preparation.
        // 
        // This parameter is required.
        shared_ptr<string> submissionStatus_ {};
      };

      class HealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(healthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(intervalSeconds, intervalSeconds_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(timeoutSeconds, timeoutSeconds_);
          DARABONBA_PTR_TO_JSON(unhealthyThreshold, unhealthyThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(healthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(intervalSeconds, intervalSeconds_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(timeoutSeconds, timeoutSeconds_);
          DARABONBA_PTR_FROM_JSON(unhealthyThreshold, unhealthyThreshold_);
        };
        HealthCheck() = default ;
        HealthCheck(const HealthCheck &) = default ;
        HealthCheck(HealthCheck &&) = default ;
        HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheck() = default ;
        HealthCheck& operator=(const HealthCheck &) = default ;
        HealthCheck& operator=(HealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->healthyThreshold_ == nullptr
        && this->intervalSeconds_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->timeoutSeconds_ == nullptr && this->unhealthyThreshold_ == nullptr; };
        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline HealthCheck& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // intervalSeconds Field Functions 
        bool hasIntervalSeconds() const { return this->intervalSeconds_ != nullptr;};
        void deleteIntervalSeconds() { this->intervalSeconds_ = nullptr;};
        inline int32_t getIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(intervalSeconds_, 0) };
        inline HealthCheck& setIntervalSeconds(int32_t intervalSeconds) { DARABONBA_PTR_SET_VALUE(intervalSeconds_, intervalSeconds) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline HealthCheck& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline HealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // timeoutSeconds Field Functions 
        bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
        void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
        inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
        inline HealthCheck& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline HealthCheck& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


      protected:
        // This parameter does not take effect currently.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The interval between two health checks, in seconds.
        shared_ptr<int32_t> intervalSeconds_ {};
        // The HTTP health check path.
        shared_ptr<string> path_ {};
        // The port accessed for the HTTP health check.
        shared_ptr<int32_t> port_ {};
        // The timeout period for a single health check, in seconds.
        shared_ptr<int32_t> timeoutSeconds_ {};
        // The number of consecutive health check failures required to mark the agent as unhealthy.
        shared_ptr<int32_t> unhealthyThreshold_ {};
      };

      class Environment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environment& obj) { 
          DARABONBA_PTR_TO_JSON(variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Environment& obj) { 
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
          // The string value of the environment variable. Empty strings are allowed.
          // 
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->variables_ == nullptr; };
        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Environment::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Environment::Variables>) };
        inline vector<Environment::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Environment::Variables>) };
        inline Environment& setVariables(const vector<Environment::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Environment& setVariables(vector<Environment::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The list of recently submitted environment variables.
        shared_ptr<vector<Environment::Variables>> variables_ {};
      };

      class CustomImage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomImage& obj) { 
          DARABONBA_PTR_TO_JSON(image, image_);
          DARABONBA_PTR_TO_JSON(pullNetwork, pullNetwork_);
          DARABONBA_PTR_TO_JSON(skipTlsVerify, skipTlsVerify_);
          DARABONBA_PTR_TO_JSON(username, username_);
        };
        friend void from_json(const Darabonba::Json& j, CustomImage& obj) { 
          DARABONBA_PTR_FROM_JSON(image, image_);
          DARABONBA_PTR_FROM_JSON(pullNetwork, pullNetwork_);
          DARABONBA_PTR_FROM_JSON(skipTlsVerify, skipTlsVerify_);
          DARABONBA_PTR_FROM_JSON(username, username_);
        };
        CustomImage() = default ;
        CustomImage(const CustomImage &) = default ;
        CustomImage(CustomImage &&) = default ;
        CustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomImage() = default ;
        CustomImage& operator=(const CustomImage &) = default ;
        CustomImage& operator=(CustomImage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PullNetwork : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PullNetwork& obj) { 
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, PullNetwork& obj) { 
            DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          PullNetwork() = default ;
          PullNetwork(const PullNetwork &) = default ;
          PullNetwork(PullNetwork &&) = default ;
          PullNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PullNetwork() = default ;
          PullNetwork& operator=(const PullNetwork &) = default ;
          PullNetwork& operator=(PullNetwork &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline PullNetwork& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PullNetwork& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline PullNetwork& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline PullNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The ID of the security group. This field is required when type is set to vpc and must belong to the selected VPC.
          shared_ptr<string> securityGroupId_ {};
          // The type of the pull network. This field is required when you submit pullNetwork and is validated by the backend. The default value for a new configuration is public network, which is independent of the agent runtime network.
          shared_ptr<string> type_ {};
          // The ID of the security group. This field is required when type is set to vpc and must belong to the selected VPC.
          shared_ptr<string> vSwitchId_ {};
          // The ID of the VPC. This field is required when type is set to vpc. The associated account and region are validated by the backend.
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->image_ == nullptr
        && this->pullNetwork_ == nullptr && this->skipTlsVerify_ == nullptr && this->username_ == nullptr; };
        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline CustomImage& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // pullNetwork Field Functions 
        bool hasPullNetwork() const { return this->pullNetwork_ != nullptr;};
        void deletePullNetwork() { this->pullNetwork_ = nullptr;};
        inline const CustomImage::PullNetwork & getPullNetwork() const { DARABONBA_PTR_GET_CONST(pullNetwork_, CustomImage::PullNetwork) };
        inline CustomImage::PullNetwork getPullNetwork() { DARABONBA_PTR_GET(pullNetwork_, CustomImage::PullNetwork) };
        inline CustomImage& setPullNetwork(const CustomImage::PullNetwork & pullNetwork) { DARABONBA_PTR_SET_VALUE(pullNetwork_, pullNetwork) };
        inline CustomImage& setPullNetwork(CustomImage::PullNetwork && pullNetwork) { DARABONBA_PTR_SET_RVALUE(pullNetwork_, pullNetwork) };


        // skipTlsVerify Field Functions 
        bool hasSkipTlsVerify() const { return this->skipTlsVerify_ != nullptr;};
        void deleteSkipTlsVerify() { this->skipTlsVerify_ = nullptr;};
        inline bool getSkipTlsVerify() const { DARABONBA_PTR_GET_DEFAULT(skipTlsVerify_, false) };
        inline CustomImage& setSkipTlsVerify(bool skipTlsVerify) { DARABONBA_PTR_SET_VALUE(skipTlsVerify_, skipTlsVerify) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline CustomImage& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The latest saved source address, which may still be in preparation.
        shared_ptr<string> image_ {};
        // The saved dedicated pull network.
        shared_ptr<CustomImage::PullNetwork> pullNetwork_ {};
        // The saved HTTPS certificate exception option.
        shared_ptr<bool> skipTlsVerify_ {};
        // Returns the saved username only after the source is successfully prepared. Omitted for anonymous or unverified sources. This does not indicate the presence of a reusable password.
        shared_ptr<string> username_ {};
      };

      class CurrentImage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentImage& obj) { 
          DARABONBA_PTR_TO_JSON(image, image_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(pullNetwork, pullNetwork_);
          DARABONBA_PTR_TO_JSON(repo, repo_);
          DARABONBA_PTR_TO_JSON(skipTlsVerify, skipTlsVerify_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(username, username_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentImage& obj) { 
          DARABONBA_PTR_FROM_JSON(image, image_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(pullNetwork, pullNetwork_);
          DARABONBA_PTR_FROM_JSON(repo, repo_);
          DARABONBA_PTR_FROM_JSON(skipTlsVerify, skipTlsVerify_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(username, username_);
        };
        CurrentImage() = default ;
        CurrentImage(const CurrentImage &) = default ;
        CurrentImage(CurrentImage &&) = default ;
        CurrentImage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentImage() = default ;
        CurrentImage& operator=(const CurrentImage &) = default ;
        CurrentImage& operator=(CurrentImage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PullNetwork : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PullNetwork& obj) { 
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, PullNetwork& obj) { 
            DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          PullNetwork() = default ;
          PullNetwork(const PullNetwork &) = default ;
          PullNetwork(PullNetwork &&) = default ;
          PullNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PullNetwork() = default ;
          PullNetwork& operator=(const PullNetwork &) = default ;
          PullNetwork& operator=(PullNetwork &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline PullNetwork& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PullNetwork& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline PullNetwork& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline PullNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The ID of the security group. This field is required when type is set to vpc and must belong to the selected VPC.
          shared_ptr<string> securityGroupId_ {};
          // The type of the pull network. This field is required when you submit pullNetwork and is validated by the backend. The default value for a new configuration is public network, which is independent of the agent runtime network.
          shared_ptr<string> type_ {};
          // The ID of the security group. This field is required when type is set to vpc and must belong to the selected VPC.
          shared_ptr<string> vSwitchId_ {};
          // The ID of the VPC. This field is required when type is set to vpc. The associated account and region are validated by the backend.
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->image_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->pullNetwork_ == nullptr && this->repo_ == nullptr && this->skipTlsVerify_ == nullptr
        && this->sourceType_ == nullptr && this->tag_ == nullptr && this->username_ == nullptr; };
        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline CurrentImage& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CurrentImage& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline CurrentImage& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // pullNetwork Field Functions 
        bool hasPullNetwork() const { return this->pullNetwork_ != nullptr;};
        void deletePullNetwork() { this->pullNetwork_ = nullptr;};
        inline const CurrentImage::PullNetwork & getPullNetwork() const { DARABONBA_PTR_GET_CONST(pullNetwork_, CurrentImage::PullNetwork) };
        inline CurrentImage::PullNetwork getPullNetwork() { DARABONBA_PTR_GET(pullNetwork_, CurrentImage::PullNetwork) };
        inline CurrentImage& setPullNetwork(const CurrentImage::PullNetwork & pullNetwork) { DARABONBA_PTR_SET_VALUE(pullNetwork_, pullNetwork) };
        inline CurrentImage& setPullNetwork(CurrentImage::PullNetwork && pullNetwork) { DARABONBA_PTR_SET_RVALUE(pullNetwork_, pullNetwork) };


        // repo Field Functions 
        bool hasRepo() const { return this->repo_ != nullptr;};
        void deleteRepo() { this->repo_ = nullptr;};
        inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
        inline CurrentImage& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


        // skipTlsVerify Field Functions 
        bool hasSkipTlsVerify() const { return this->skipTlsVerify_ != nullptr;};
        void deleteSkipTlsVerify() { this->skipTlsVerify_ = nullptr;};
        inline bool getSkipTlsVerify() const { DARABONBA_PTR_GET_DEFAULT(skipTlsVerify_, false) };
        inline CurrentImage& setSkipTlsVerify(bool skipTlsVerify) { DARABONBA_PTR_SET_VALUE(skipTlsVerify_, skipTlsVerify) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline CurrentImage& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline CurrentImage& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline CurrentImage& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The original image address for the custom source.
        shared_ptr<string> image_ {};
        // The instance ID for the acr source.
        shared_ptr<string> instanceId_ {};
        // The namespace for the acr source.
        shared_ptr<string> namespace_ {};
        // The dedicated pull network for the custom source.
        shared_ptr<CurrentImage::PullNetwork> pullNetwork_ {};
        // The repository name for the acr source.
        shared_ptr<string> repo_ {};
        // The certificate exception option for the custom source.
        shared_ptr<bool> skipTlsVerify_ {};
        // The image source type of the current valid version.
        shared_ptr<string> sourceType_ {};
        // The tag of the ACR source.
        shared_ptr<string> tag_ {};
        // The source snapshot from the current active configuration version. Omitted for anonymous sources. A new source failure does not overwrite this username, and the password is not returned.
        shared_ptr<string> username_ {};
      };

      class CodePackageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodePackageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(crc64, crc64_);
          DARABONBA_PTR_TO_JSON(etag, etag_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(format, format_);
        };
        friend void from_json(const Darabonba::Json& j, CodePackageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(crc64, crc64_);
          DARABONBA_PTR_FROM_JSON(etag, etag_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(format, format_);
        };
        CodePackageInfo() = default ;
        CodePackageInfo(const CodePackageInfo &) = default ;
        CodePackageInfo(CodePackageInfo &&) = default ;
        CodePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodePackageInfo() = default ;
        CodePackageInfo& operator=(const CodePackageInfo &) = default ;
        CodePackageInfo& operator=(CodePackageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->crc64_ == nullptr
        && this->etag_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->format_ == nullptr; };
        // crc64 Field Functions 
        bool hasCrc64() const { return this->crc64_ != nullptr;};
        void deleteCrc64() { this->crc64_ = nullptr;};
        inline string getCrc64() const { DARABONBA_PTR_GET_DEFAULT(crc64_, "") };
        inline CodePackageInfo& setCrc64(string crc64) { DARABONBA_PTR_SET_VALUE(crc64_, crc64) };


        // etag Field Functions 
        bool hasEtag() const { return this->etag_ != nullptr;};
        void deleteEtag() { this->etag_ = nullptr;};
        inline string getEtag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
        inline CodePackageInfo& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline CodePackageInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline CodePackageInfo& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline CodePackageInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      protected:
        // The CRC64 value of the code package object.
        shared_ptr<string> crc64_ {};
        // The ETag of the code package object.
        shared_ptr<string> etag_ {};
        // The original file name of the code package.
        shared_ptr<string> fileName_ {};
        // The compressed size of the code package.
        shared_ptr<int64_t> fileSize_ {};
        // The format of the code package.
        shared_ptr<string> format_ {};
      };

      class Artifact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(container, container_);
          DARABONBA_PTR_TO_JSON(port, port_);
        };
        friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(container, container_);
          DARABONBA_PTR_FROM_JSON(port, port_);
        };
        Artifact() = default ;
        Artifact(const Artifact &) = default ;
        Artifact(Artifact &&) = default ;
        Artifact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifact() = default ;
        Artifact& operator=(const Artifact &) = default ;
        Artifact& operator=(Artifact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Container : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Container& obj) { 
            DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(namespace, namespace_);
            DARABONBA_PTR_TO_JSON(repo, repo_);
            DARABONBA_PTR_TO_JSON(tag, tag_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Container& obj) { 
            DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(repo, repo_);
            DARABONBA_PTR_FROM_JSON(tag, tag_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Container() = default ;
          Container(const Container &) = default ;
          Container(Container &&) = default ;
          Container(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Container() = default ;
          Container& operator=(const Container &) = default ;
          Container& operator=(Container &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entrypoint_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->repo_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr; };
          // entrypoint Field Functions 
          bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
          void deleteEntrypoint() { this->entrypoint_ = nullptr;};
          inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
          inline Container& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Container& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline Container& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // repo Field Functions 
          bool hasRepo() const { return this->repo_ != nullptr;};
          void deleteRepo() { this->repo_ = nullptr;};
          inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
          inline Container& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Container& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Container& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The custom executable program and startup parameters. If not configured, the default startup method of the image is used.
          shared_ptr<string> entrypoint_ {};
          // The ID of the ACR instance to which the image repository belongs.
          shared_ptr<string> instanceId_ {};
          // The namespace to which the ACR image repository belongs.
          shared_ptr<string> namespace_ {};
          // The name of the image repository in the ACR namespace.
          shared_ptr<string> repo_ {};
          // The latest submitted image tag.
          shared_ptr<string> tag_ {};
          // The source type of the image. A value of acr indicates Alibaba Cloud Container Registry (ACR).
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        class Code : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Code& obj) { 
            DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_TO_JSON(languageRuntime, languageRuntime_);
            DARABONBA_PTR_TO_JSON(sourceUri, sourceUri_);
          };
          friend void from_json(const Darabonba::Json& j, Code& obj) { 
            DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_FROM_JSON(languageRuntime, languageRuntime_);
            DARABONBA_PTR_FROM_JSON(sourceUri, sourceUri_);
          };
          Code() = default ;
          Code(const Code &) = default ;
          Code(Code &&) = default ;
          Code(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Code() = default ;
          Code& operator=(const Code &) = default ;
          Code& operator=(Code &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entrypoint_ == nullptr
        && this->languageRuntime_ == nullptr && this->sourceUri_ == nullptr; };
          // entrypoint Field Functions 
          bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
          void deleteEntrypoint() { this->entrypoint_ = nullptr;};
          inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
          inline Code& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


          // languageRuntime Field Functions 
          bool hasLanguageRuntime() const { return this->languageRuntime_ != nullptr;};
          void deleteLanguageRuntime() { this->languageRuntime_ = nullptr;};
          inline string getLanguageRuntime() const { DARABONBA_PTR_GET_DEFAULT(languageRuntime_, "") };
          inline Code& setLanguageRuntime(string languageRuntime) { DARABONBA_PTR_SET_VALUE(languageRuntime_, languageRuntime) };


          // sourceUri Field Functions 
          bool hasSourceUri() const { return this->sourceUri_ != nullptr;};
          void deleteSourceUri() { this->sourceUri_ = nullptr;};
          inline string getSourceUri() const { DARABONBA_PTR_GET_DEFAULT(sourceUri_, "") };
          inline Code& setSourceUri(string sourceUri) { DARABONBA_PTR_SET_VALUE(sourceUri_, sourceUri) };


        protected:
          // The startup command for the code package. This field is required in code package mode. The working directory is the extracted code root directory /code, such as python main.py. Quotes and escapes are supported. Environment variables, pipes, and logical operations are not automatically expanded. Use scripts within the package for complex commands.
          // 
          // This parameter is required.
          shared_ptr<string> entrypoint_ {};
          // The identifier of the code runtime environment in the currently saved configuration. The runtime image uses the saved snapshot. Adding a new version to the directory does not automatically change the existing configuration.
          // 
          // This parameter is required.
          shared_ptr<string> languageRuntime_ {};
          // The oss:// address of the platform-fixed code package referenced in the currently saved configuration. This address does not include the signature parameters of the source HTTPS link. You can use this address to reuse an existing code package. To download the content, call GetAgentCodePackageDownloadUrl.
          // 
          // This parameter is required.
          shared_ptr<string> sourceUri_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->container_ == nullptr && this->port_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline const Artifact::Code & getCode() const { DARABONBA_PTR_GET_CONST(code_, Artifact::Code) };
        inline Artifact::Code getCode() { DARABONBA_PTR_GET(code_, Artifact::Code) };
        inline Artifact& setCode(const Artifact::Code & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
        inline Artifact& setCode(Artifact::Code && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


        // container Field Functions 
        bool hasContainer() const { return this->container_ != nullptr;};
        void deleteContainer() { this->container_ = nullptr;};
        inline const Artifact::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, Artifact::Container) };
        inline Artifact::Container getContainer() { DARABONBA_PTR_GET(container_, Artifact::Container) };
        inline Artifact& setContainer(const Artifact::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
        inline Artifact& setContainer(Artifact::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Artifact& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The code package deployment configuration. This field is mutually exclusive with the container field. Code packages use the ZIP or TAR.GZ format. Dependencies must be packaged by the user. The platform does not install dependencies or perform online builds.
        shared_ptr<Artifact::Code> code_ {};
        // The latest submitted ACR container image configuration.
        shared_ptr<Artifact::Container> container_ {};
        // The TCP port on which the agent service listens.
        // 
        // This parameter is required.
        shared_ptr<int32_t> port_ {};
      };

      class AgenticFsMounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgenticFsMounts& obj) { 
          DARABONBA_PTR_TO_JSON(mountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(server, server_);
        };
        friend void from_json(const Darabonba::Json& j, AgenticFsMounts& obj) { 
          DARABONBA_PTR_FROM_JSON(mountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(server, server_);
        };
        AgenticFsMounts() = default ;
        AgenticFsMounts(const AgenticFsMounts &) = default ;
        AgenticFsMounts(AgenticFsMounts &&) = default ;
        AgenticFsMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgenticFsMounts() = default ;
        AgenticFsMounts& operator=(const AgenticFsMounts &) = default ;
        AgenticFsMounts& operator=(AgenticFsMounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->path_ == nullptr && this->readOnly_ == nullptr && this->server_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline AgenticFsMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline AgenticFsMounts& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline AgenticFsMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // server Field Functions 
        bool hasServer() const { return this->server_ != nullptr;};
        void deleteServer() { this->server_ = nullptr;};
        inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
        inline AgenticFsMounts& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      protected:
        // The AgenticFS mount directory in the container, located under /mnt/agenticfs/.
        shared_ptr<string> mountPath_ {};
        // The relative directory in the mounted access point.
        shared_ptr<string> path_ {};
        // Specifies whether the mount is read-only. A value of true indicates a read-only mount, and a value of false indicates a read-write mount.
        shared_ptr<bool> readOnly_ {};
        // The domain name of the AgenticFS access point used for the mount.
        shared_ptr<string> server_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agenticFsMounts_ == nullptr && this->artifact_ == nullptr && this->codePackageInfo_ == nullptr && this->createMode_ == nullptr && this->createdAt_ == nullptr
        && this->currentImage_ == nullptr && this->customImage_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->effectiveSpecVersion_ == nullptr
        && this->environment_ == nullptr && this->healthCheck_ == nullptr && this->imageCacheId_ == nullptr && this->imageCachePreparation_ == nullptr && this->imagePreparation_ == nullptr
        && this->latestExecutionError_ == nullptr && this->latestSpecVersion_ == nullptr && this->latestVersionStatus_ == nullptr && this->logging_ == nullptr && this->name_ == nullptr
        && this->network_ == nullptr && this->observability_ == nullptr && this->ossMounts_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr
        && this->roleArn_ == nullptr && this->runtime_ == nullptr && this->sandboxPhaseCounts_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr
        && this->useImageCache_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agenticFsMounts Field Functions 
      bool hasAgenticFsMounts() const { return this->agenticFsMounts_ != nullptr;};
      void deleteAgenticFsMounts() { this->agenticFsMounts_ = nullptr;};
      inline const vector<Data::AgenticFsMounts> & getAgenticFsMounts() const { DARABONBA_PTR_GET_CONST(agenticFsMounts_, vector<Data::AgenticFsMounts>) };
      inline vector<Data::AgenticFsMounts> getAgenticFsMounts() { DARABONBA_PTR_GET(agenticFsMounts_, vector<Data::AgenticFsMounts>) };
      inline Data& setAgenticFsMounts(const vector<Data::AgenticFsMounts> & agenticFsMounts) { DARABONBA_PTR_SET_VALUE(agenticFsMounts_, agenticFsMounts) };
      inline Data& setAgenticFsMounts(vector<Data::AgenticFsMounts> && agenticFsMounts) { DARABONBA_PTR_SET_RVALUE(agenticFsMounts_, agenticFsMounts) };


      // artifact Field Functions 
      bool hasArtifact() const { return this->artifact_ != nullptr;};
      void deleteArtifact() { this->artifact_ = nullptr;};
      inline const Data::Artifact & getArtifact() const { DARABONBA_PTR_GET_CONST(artifact_, Data::Artifact) };
      inline Data::Artifact getArtifact() { DARABONBA_PTR_GET(artifact_, Data::Artifact) };
      inline Data& setArtifact(const Data::Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
      inline Data& setArtifact(Data::Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


      // codePackageInfo Field Functions 
      bool hasCodePackageInfo() const { return this->codePackageInfo_ != nullptr;};
      void deleteCodePackageInfo() { this->codePackageInfo_ = nullptr;};
      inline const Data::CodePackageInfo & getCodePackageInfo() const { DARABONBA_PTR_GET_CONST(codePackageInfo_, Data::CodePackageInfo) };
      inline Data::CodePackageInfo getCodePackageInfo() { DARABONBA_PTR_GET(codePackageInfo_, Data::CodePackageInfo) };
      inline Data& setCodePackageInfo(const Data::CodePackageInfo & codePackageInfo) { DARABONBA_PTR_SET_VALUE(codePackageInfo_, codePackageInfo) };
      inline Data& setCodePackageInfo(Data::CodePackageInfo && codePackageInfo) { DARABONBA_PTR_SET_RVALUE(codePackageInfo_, codePackageInfo) };


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


      // currentImage Field Functions 
      bool hasCurrentImage() const { return this->currentImage_ != nullptr;};
      void deleteCurrentImage() { this->currentImage_ = nullptr;};
      inline const Data::CurrentImage & getCurrentImage() const { DARABONBA_PTR_GET_CONST(currentImage_, Data::CurrentImage) };
      inline Data::CurrentImage getCurrentImage() { DARABONBA_PTR_GET(currentImage_, Data::CurrentImage) };
      inline Data& setCurrentImage(const Data::CurrentImage & currentImage) { DARABONBA_PTR_SET_VALUE(currentImage_, currentImage) };
      inline Data& setCurrentImage(Data::CurrentImage && currentImage) { DARABONBA_PTR_SET_RVALUE(currentImage_, currentImage) };


      // customImage Field Functions 
      bool hasCustomImage() const { return this->customImage_ != nullptr;};
      void deleteCustomImage() { this->customImage_ = nullptr;};
      inline const Data::CustomImage & getCustomImage() const { DARABONBA_PTR_GET_CONST(customImage_, Data::CustomImage) };
      inline Data::CustomImage getCustomImage() { DARABONBA_PTR_GET(customImage_, Data::CustomImage) };
      inline Data& setCustomImage(const Data::CustomImage & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
      inline Data& setCustomImage(Data::CustomImage && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


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


      // effectiveSpecVersion Field Functions 
      bool hasEffectiveSpecVersion() const { return this->effectiveSpecVersion_ != nullptr;};
      void deleteEffectiveSpecVersion() { this->effectiveSpecVersion_ = nullptr;};
      inline int64_t getEffectiveSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecVersion_, 0L) };
      inline Data& setEffectiveSpecVersion(int64_t effectiveSpecVersion) { DARABONBA_PTR_SET_VALUE(effectiveSpecVersion_, effectiveSpecVersion) };


      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline const Data::Environment & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, Data::Environment) };
      inline Data::Environment getEnvironment() { DARABONBA_PTR_GET(environment_, Data::Environment) };
      inline Data& setEnvironment(const Data::Environment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
      inline Data& setEnvironment(Data::Environment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const Data::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Data::HealthCheck) };
      inline Data::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, Data::HealthCheck) };
      inline Data& setHealthCheck(const Data::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline Data& setHealthCheck(Data::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


      // imageCacheId Field Functions 
      bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
      void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
      inline string getImageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
      inline Data& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


      // imageCachePreparation Field Functions 
      bool hasImageCachePreparation() const { return this->imageCachePreparation_ != nullptr;};
      void deleteImageCachePreparation() { this->imageCachePreparation_ = nullptr;};
      inline const Data::ImageCachePreparation & getImageCachePreparation() const { DARABONBA_PTR_GET_CONST(imageCachePreparation_, Data::ImageCachePreparation) };
      inline Data::ImageCachePreparation getImageCachePreparation() { DARABONBA_PTR_GET(imageCachePreparation_, Data::ImageCachePreparation) };
      inline Data& setImageCachePreparation(const Data::ImageCachePreparation & imageCachePreparation) { DARABONBA_PTR_SET_VALUE(imageCachePreparation_, imageCachePreparation) };
      inline Data& setImageCachePreparation(Data::ImageCachePreparation && imageCachePreparation) { DARABONBA_PTR_SET_RVALUE(imageCachePreparation_, imageCachePreparation) };


      // imagePreparation Field Functions 
      bool hasImagePreparation() const { return this->imagePreparation_ != nullptr;};
      void deleteImagePreparation() { this->imagePreparation_ = nullptr;};
      inline const Data::ImagePreparation & getImagePreparation() const { DARABONBA_PTR_GET_CONST(imagePreparation_, Data::ImagePreparation) };
      inline Data::ImagePreparation getImagePreparation() { DARABONBA_PTR_GET(imagePreparation_, Data::ImagePreparation) };
      inline Data& setImagePreparation(const Data::ImagePreparation & imagePreparation) { DARABONBA_PTR_SET_VALUE(imagePreparation_, imagePreparation) };
      inline Data& setImagePreparation(Data::ImagePreparation && imagePreparation) { DARABONBA_PTR_SET_RVALUE(imagePreparation_, imagePreparation) };


      // latestExecutionError Field Functions 
      bool hasLatestExecutionError() const { return this->latestExecutionError_ != nullptr;};
      void deleteLatestExecutionError() { this->latestExecutionError_ = nullptr;};
      inline const Data::LatestExecutionError & getLatestExecutionError() const { DARABONBA_PTR_GET_CONST(latestExecutionError_, Data::LatestExecutionError) };
      inline Data::LatestExecutionError getLatestExecutionError() { DARABONBA_PTR_GET(latestExecutionError_, Data::LatestExecutionError) };
      inline Data& setLatestExecutionError(const Data::LatestExecutionError & latestExecutionError) { DARABONBA_PTR_SET_VALUE(latestExecutionError_, latestExecutionError) };
      inline Data& setLatestExecutionError(Data::LatestExecutionError && latestExecutionError) { DARABONBA_PTR_SET_RVALUE(latestExecutionError_, latestExecutionError) };


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


      // logging Field Functions 
      bool hasLogging() const { return this->logging_ != nullptr;};
      void deleteLogging() { this->logging_ = nullptr;};
      inline const Data::Logging & getLogging() const { DARABONBA_PTR_GET_CONST(logging_, Data::Logging) };
      inline Data::Logging getLogging() { DARABONBA_PTR_GET(logging_, Data::Logging) };
      inline Data& setLogging(const Data::Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
      inline Data& setLogging(Data::Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


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


      // observability Field Functions 
      bool hasObservability() const { return this->observability_ != nullptr;};
      void deleteObservability() { this->observability_ = nullptr;};
      inline const Data::Observability & getObservability() const { DARABONBA_PTR_GET_CONST(observability_, Data::Observability) };
      inline Data::Observability getObservability() { DARABONBA_PTR_GET(observability_, Data::Observability) };
      inline Data& setObservability(const Data::Observability & observability) { DARABONBA_PTR_SET_VALUE(observability_, observability) };
      inline Data& setObservability(Data::Observability && observability) { DARABONBA_PTR_SET_RVALUE(observability_, observability) };


      // ossMounts Field Functions 
      bool hasOssMounts() const { return this->ossMounts_ != nullptr;};
      void deleteOssMounts() { this->ossMounts_ = nullptr;};
      inline const vector<Data::OssMounts> & getOssMounts() const { DARABONBA_PTR_GET_CONST(ossMounts_, vector<Data::OssMounts>) };
      inline vector<Data::OssMounts> getOssMounts() { DARABONBA_PTR_GET(ossMounts_, vector<Data::OssMounts>) };
      inline Data& setOssMounts(const vector<Data::OssMounts> & ossMounts) { DARABONBA_PTR_SET_VALUE(ossMounts_, ossMounts) };
      inline Data& setOssMounts(vector<Data::OssMounts> && ossMounts) { DARABONBA_PTR_SET_RVALUE(ossMounts_, ossMounts) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const vector<Data::Protocol> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<Data::Protocol>) };
      inline vector<Data::Protocol> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<Data::Protocol>) };
      inline Data& setProtocol(const vector<Data::Protocol> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline Data& setProtocol(vector<Data::Protocol> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Data& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline const Data::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Data::Runtime) };
      inline Data::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Data::Runtime) };
      inline Data& setRuntime(const Data::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
      inline Data& setRuntime(Data::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


      // sandboxPhaseCounts Field Functions 
      bool hasSandboxPhaseCounts() const { return this->sandboxPhaseCounts_ != nullptr;};
      void deleteSandboxPhaseCounts() { this->sandboxPhaseCounts_ = nullptr;};
      inline const map<string, int64_t> & getSandboxPhaseCounts() const { DARABONBA_PTR_GET_CONST(sandboxPhaseCounts_, map<string, int64_t>) };
      inline map<string, int64_t> getSandboxPhaseCounts() { DARABONBA_PTR_GET(sandboxPhaseCounts_, map<string, int64_t>) };
      inline Data& setSandboxPhaseCounts(const map<string, int64_t> & sandboxPhaseCounts) { DARABONBA_PTR_SET_VALUE(sandboxPhaseCounts_, sandboxPhaseCounts) };
      inline Data& setSandboxPhaseCounts(map<string, int64_t> && sandboxPhaseCounts) { DARABONBA_PTR_SET_RVALUE(sandboxPhaseCounts_, sandboxPhaseCounts) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // useImageCache Field Functions 
      bool hasUseImageCache() const { return this->useImageCache_ != nullptr;};
      void deleteUseImageCache() { this->useImageCache_ = nullptr;};
      inline bool getUseImageCache() const { DARABONBA_PTR_GET_DEFAULT(useImageCache_, false) };
      inline Data& setUseImageCache(bool useImageCache) { DARABONBA_PTR_SET_VALUE(useImageCache_, useImageCache) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The unique identifier of the custom agent. You can obtain this identifier from the response of CreateCustomAgent or ListCustomAgents.
      // 
      // This parameter is required.
      shared_ptr<string> agentId_ {};
      // The latest submitted list of additional AgenticFS mounts.
      shared_ptr<vector<Data::AgenticFsMounts>> agenticFsMounts_ {};
      // The latest submitted deployment artifact configuration, including the service listening port and the ACR container image. To check whether the configuration has taken effect, refer to latestVersionStatus.
      shared_ptr<Data::Artifact> artifact_ {};
      // The currently saved code package information.
      shared_ptr<Data::CodePackageInfo> codePackageInfo_ {};
      // The creation method of the agent. The value is CUSTOM for custom agents.
      shared_ptr<string> createMode_ {};
      // The time when the agent was created. The time is in ISO 8601 format. The trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> createdAt_ {};
      // The image source snapshot of the current valid configuration version. The value is null before the initial configuration takes effect. This field does not indicate the health status.
      shared_ptr<Data::CurrentImage> currentImage_ {};
      // The recently saved source and the verified username of the source. The source may be in preparation or failed. The password is not returned.
      shared_ptr<Data::CustomImage> customImage_ {};
      // The deployment method of the agent. Custom agents are deployed and managed by the platform, and MANAGED is returned.
      shared_ptr<string> deployType_ {};
      // The description of the agent\\"s purpose.
      shared_ptr<string> description_ {};
      // The active configuration version.
      // 
      // This parameter is required.
      shared_ptr<int64_t> effectiveSpecVersion_ {};
      // The environment variable configuration for the agent process.
      shared_ptr<Data::Environment> environment_ {};
      // The HTTP health check configuration for the agent. This is empty if not configured.
      shared_ptr<Data::HealthCheck> healthCheck_ {};
      // The ID of the currently associated image cache.
      // 
      // This parameter is required.
      shared_ptr<string> imageCacheId_ {};
      // The acceptance summary for the current cache preparation.
      shared_ptr<Data::ImageCachePreparation> imageCachePreparation_ {};
      // The currently associated image preparation task. The phase indicates the acceptance prompt. Query the preparation API for real-time progress. A standard save operation does not create an image preparation task.
      shared_ptr<Data::ImagePreparation> imagePreparation_ {};
      // The waiting or execution error of the latest configuration version. This is returned only when the version is waiting for a retry or fails to execute.
      shared_ptr<Data::LatestExecutionError> latestExecutionError_ {};
      // The latest configuration version number. Updates with the same configuration may retain the original version number. This field does not indicate that the configuration has taken effect.
      // 
      // This parameter is required.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The execution status corresponding to the latestSpecVersion. Valid values:
      // - pending: Waiting for execution.
      // - processing: Executing.
      // - waiting_retry: Waiting for a retry.
      // - succeeded: Executed successfully.
      // - failed: Execution failed.
      // - superseded: Superseded by a subsequent version.
      shared_ptr<string> latestVersionStatus_ {};
      // The recently submitted log delivery configuration.
      shared_ptr<Data::Logging> logging_ {};
      // The custom agent name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The network access configuration of the agent. The actual access scope is also restricted by the network configuration of the workspace.
      shared_ptr<Data::Network> network_ {};
      // The high-code agent observability configuration.
      shared_ptr<Data::Observability> observability_ {};
      // The list of OSS directory mounts in the latest submission.
      shared_ptr<vector<Data::OssMounts>> ossMounts_ {};
      // The list of invocation protocol configurations for the agent.
      shared_ptr<vector<Data::Protocol>> protocol_ {};
      // The region ID of the workspace to which the agent belongs.
      shared_ptr<string> regionId_ {};
      // The ARN of the RAM role used when the agent accesses user cloud resources.
      shared_ptr<string> roleArn_ {};
      // The runtime configuration in the latest commit, including compute specifications, session policy, and elastic policy.
      shared_ptr<Data::Runtime> runtime_ {};
      // The count of runtime instances by phase. Keys include PENDING (creating or initializing), RUNNING (running), HIBERNATING (hibernating), HIBERNATED (hibernated), RESUMING (resuming), TERMINATING (terminating), and FAILED (failed). Only phases that actually occur are returned. Missing keys are treated as 0.
      shared_ptr<map<string, int64_t>> sandboxPhaseCounts_ {};
      // The overall status of the agent. Valid values: Creating: The agent is being created. Running: The agent is running. Failed: The agent failed. Updating: The agent is being updated. Deleting: The agent is being deleted. Deleted: The agent is deleted. To check the execution progress of the latest configuration, query latestVersionStatus.
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // The time when the agent was last updated. The time is in ISO 8601 format. A trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> updatedAt_ {};
      // The image cache switch.
      // 
      // This parameter is required.
      shared_ptr<bool> useImageCache_ {};
      // The ID of the workspace to which the custom agent belongs.
      // 
      // This parameter is required.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateCustomAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateCustomAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateCustomAgentResponseBody::Data) };
    inline UpdateCustomAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateCustomAgentResponseBody::Data) };
    inline UpdateCustomAgentResponseBody& setData(const UpdateCustomAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateCustomAgentResponseBody& setData(UpdateCustomAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateCustomAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateCustomAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateCustomAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request result code. The value is SUCCESS if the request is successful.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The latest submitted configuration and status of the custom agent. A successful response indicates that the request is accepted, but the configuration may not have taken effect yet.
    // 
    // This parameter is required.
    shared_ptr<UpdateCustomAgentResponseBody::Data> data_ {};
    // The HTTP status code of the request. A value of 200 indicates success.
    // 
    // This parameter is required.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the processing result for the request. The value is success when the request is successful.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which is used to locate and troubleshoot issues.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // Specifies whether the request was processed successfully. A value of true indicates success. A successful creation, update, or deletion does not mean that the background operation is complete.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
