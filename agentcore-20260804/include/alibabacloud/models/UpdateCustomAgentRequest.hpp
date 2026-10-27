// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAGENTREQUEST_HPP_
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
  class UpdateCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateCustomAgentRequest() = default ;
    UpdateCustomAgentRequest(const UpdateCustomAgentRequest &) = default ;
    UpdateCustomAgentRequest(UpdateCustomAgentRequest &&) = default ;
    UpdateCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAgentRequest() = default ;
    UpdateCustomAgentRequest& operator=(const UpdateCustomAgentRequest &) = default ;
    UpdateCustomAgentRequest& operator=(UpdateCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agenticFsMounts, agenticFsMounts_);
        DARABONBA_PTR_TO_JSON(artifact, artifact_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environment, environment_);
        DARABONBA_PTR_TO_JSON(healthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(logging, logging_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(network, network_);
        DARABONBA_PTR_TO_JSON(observability, observability_);
        DARABONBA_PTR_TO_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(useImageCache, useImageCache_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agenticFsMounts, agenticFsMounts_);
        DARABONBA_PTR_FROM_JSON(artifact, artifact_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environment, environment_);
        DARABONBA_PTR_FROM_JSON(healthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(logging, logging_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(network, network_);
        DARABONBA_PTR_FROM_JSON(observability, observability_);
        DARABONBA_PTR_FROM_JSON(ossMounts, ossMounts_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(useImageCache, useImageCache_);
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
          // The name of the HTTP request header used by the session policy. This parameter is required when type is set to ISOLATED_HEADER_FIELD and must be a valid HTTP request header name. Omit this parameter for other policies.
          shared_ptr<string> headerName_ {};
          // The session policy type. Valid values:
          // - AFFINITY: Session affinity.
          // - ISOLATED_HEADER_FIELD: Associates sessions by using the request header specified by headerName.
          // - ISOLATED_COOKIE: Cookie-based session policy. This value is not recommended.
          // - DISABLED: Compatibility option. The response returns AFFINITY.
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
          // Specifies whether to enable elastic scaling. Valid values:
          // - true: Enabled.
          // - false: Disabled.
          // Default value: false. This default value applies when runtime is provided and this field is omitted.
          // 
          // This parameter is required.
          shared_ptr<bool> enabled_ {};
          // The maximum number of concurrent sessions for a single runtime instance. Valid values: 1 to 100. When runtime is provided, omitting this field uses the default value of 100.
          shared_ptr<int32_t> maxConcurrentSessionsPerSandbox_ {};
          // The maximum number of runtime instances. Valid values: 1 to 100. The value cannot be less than minSandboxCount. When runtime is provided, omitting this field uses the default value of 10.
          shared_ptr<int32_t> maxSandboxCount_ {};
          // The minimum number of runtime instances. Valid values: 1 to 100. The value cannot be greater than maxSandboxCount. When runtime is provided, omitting this field uses the default value of 1.
          shared_ptr<int32_t> minSandboxCount_ {};
          // The session idle timeout in seconds. Valid values: 60 to 86400. When runtime is provided, omitting this field uses the default value of 600.
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
          // The compute specification. Valid values:
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
        // The optional elastic policy. When runtime is provided, omitting hpa or its fields uses the default values: enabled is false, the minimum number of instances is 1, the maximum number of instances is 10, the maximum number of concurrent sessions per instance is 100, and the session idle timeout is 600 seconds. To retain the original policy during an update, provide the complete hpa configuration.
        shared_ptr<Runtime::Hpa> hpa_ {};
        // The session policy configuration used to set the session association method for requests.
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
          // The usage description of the current API path.
          shared_ptr<string> description_ {};
          // The non-empty API path for the current protocol.
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
        // The request header configuration for the current protocol. The key is a non-empty request header name, and the value must be a string.
        shared_ptr<map<string, string>> headers_ {};
        // The list of API paths for the current protocol.
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
        // The name of the OSS bucket. This parameter is required for each mount item. The name must be 3 to 63 characters in length and can contain only lowercase letters, digits, and hyphens. It cannot start or end with a hyphen.
        shared_ptr<string> bucketName_ {};
        // The subdirectory under /mnt/oss/ in the container. This parameter is required for each mount item. Mount targets must not be duplicated or form parent-child overlaps.
        shared_ptr<string> mountPath_ {};
        // The non-empty object directory prefix in the bucket, such as datasets/train. Leading and trailing slashes are removed. The root directory is not supported. Do not use parent directory navigation.
        shared_ptr<string> path_ {};
        // Specifies whether the mount is read-only. A value of true indicates read-only, and a value of false indicates read and write. If this field is omitted, the default value is false.
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
          // Specifies whether to allow the agent to access the user VPC configured in the workspace. When configuring accessVpc, you must provide a Boolean value. For this configuration to take effect, the workspace must also allow VPC access.
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
          // Specifies whether to allow the agent to access the Internet. When configuring accessInternet, you must provide a Boolean value. For this configuration to take effect, the workspace must also allow Internet access.
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
        // The Internet access configuration. When this access item is omitted, the agent does not restrict Internet access. However, the workspace must still allow Internet access.
        shared_ptr<Network::AccessInternet> accessInternet_ {};
        // The user VPC access configuration. When this access item is omitted, the agent does not restrict VPC access. However, the workspace must still be configured to allow access to the user VPC.
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
          // The name of the SLS logstore that receives agent logs.
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
        // The SLS log delivery destination. When updating this object, you must provide both the project and logstore fields, and they cannot be empty.
        shared_ptr<Logging::Sls> sls_ {};
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
        // This parameter currently does not take effect. Omit this field.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The interval between two health checks, in seconds. This field must be a positive integer. If this field is omitted, the default value is 10.
        shared_ptr<int32_t> intervalSeconds_ {};
        // The HTTP health check path. This field must start with a forward slash (/). If this field is omitted, the default value is /healthz.
        shared_ptr<string> path_ {};
        // The port accessed by the health check. This field is required when configuring a health check. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The timeout period for a single health check, in seconds. This field must be a positive integer and less than intervalSeconds. If this field is omitted, the default value is 2.
        shared_ptr<int32_t> timeoutSeconds_ {};
        // The number of consecutive health check failures before the agent is considered unhealthy. This field must be a positive integer. If this field is omitted, the default value is 3.
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
          // The name of the environment variable. This field cannot be empty and must be unique in the current environment variable list.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The value of the environment variable. This field must be a string. Empty strings are allowed.
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
        // The list of environment variables. Each item includes a name and a value. This list is replaced as a whole during an update.
        shared_ptr<vector<Environment::Variables>> variables_ {};
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
          // The optional executable program and startup parameters. If specified, this field must be a non-empty string. When updating the artifact, omitting this field uses the default startup method of the image. To retain the original custom startup command, provide this field together.
          shared_ptr<string> entrypoint_ {};
          // The ID of the ACR instance to which the image repository belongs. This field cannot be empty.
          // 
          // This parameter is required.
          shared_ptr<string> instanceId_ {};
          // The namespace to which the ACR image repository belongs. This field cannot be empty.
          // 
          // This parameter is required.
          shared_ptr<string> namespace_ {};
          // The name of the image repository in the ACR namespace. This field cannot be empty.
          // 
          // This parameter is required.
          shared_ptr<string> repo_ {};
          // The image tag used for deployment. This field cannot be empty. When updating the tag, you must also provide artifact.port and other required image fields.
          // 
          // This parameter is required.
          shared_ptr<string> tag_ {};
          // The image source type. Currently, only acr is supported, which indicates Alibaba Cloud Container Registry (ACR).
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
          // The startup command for the code package. This field is required in code package mode. The working directory is the extracted code root directory /code, such as python main.py. Quotes and escapes are supported. Environment variables, pipes, and logical operations are not automatically expanded. For complex commands, use scripts within the package.
          // 
          // This parameter is required.
          shared_ptr<string> entrypoint_ {};
          // The code runtime environment identifier, such as python3.12. When creating or switching environments, use the identifier returned by the ListAgentCodeRuntimes operation. The identifier is validated by the current version catalog and is not a fixed enumeration.
          // 
          // This parameter is required.
          shared_ptr<string> languageRuntime_ {};
          // The source address of the code package. This field supports oss:// addresses or HTTPS object addresses of standard OSS public domain names, including OSS signed URLs. Arbitrary external sites, custom domain names, and additional authentication request headers are not supported. After a local upload, use the sourceUri returned by the GetAgentCodePackageUploadUrl operation. The address is revalidated and transferred during creation or updates. After the transfer is saved, the platform returns a fixed oss:// address. This fixed address can be reused for regular updates.
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
        // The ACR container image configuration. You must specify the type, instanceId, namespace, repo, and tag fields. Do not configure the code field at the same time.
        shared_ptr<Artifact::Container> container_ {};
        // The TCP port listened by the agent service. Valid values: 1 to 65535.
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
        // The subdirectory under /mnt/agenticfs/ in the container. This field is required for each mount item. Mount targets must not be duplicated or form parent-child overrides.
        shared_ptr<string> mountPath_ {};
        // The existing non-empty relative directory under the access point. This field is required for each mount item. Root directories, absolute paths, and parent directory traversals are not allowed.
        shared_ptr<string> path_ {};
        // Specifies whether the mount is read-only. A value of true indicates read-only, and a value of false indicates read and write. If this field is omitted, the default value is false.
        shared_ptr<bool> readOnly_ {};
        // The domain name of the access point. This field is required for each mount item. Use the DomainName value from the response of the NAS ListAccessPoints operation. Do not include the protocol, port, or path.
        shared_ptr<string> server_ {};
      };

      virtual bool empty() const override { return this->agenticFsMounts_ == nullptr
        && this->artifact_ == nullptr && this->description_ == nullptr && this->environment_ == nullptr && this->healthCheck_ == nullptr && this->logging_ == nullptr
        && this->name_ == nullptr && this->network_ == nullptr && this->observability_ == nullptr && this->ossMounts_ == nullptr && this->protocol_ == nullptr
        && this->roleArn_ == nullptr && this->runtime_ == nullptr && this->useImageCache_ == nullptr; };
      // agenticFsMounts Field Functions 
      bool hasAgenticFsMounts() const { return this->agenticFsMounts_ != nullptr;};
      void deleteAgenticFsMounts() { this->agenticFsMounts_ = nullptr;};
      inline const vector<Body::AgenticFsMounts> & getAgenticFsMounts() const { DARABONBA_PTR_GET_CONST(agenticFsMounts_, vector<Body::AgenticFsMounts>) };
      inline vector<Body::AgenticFsMounts> getAgenticFsMounts() { DARABONBA_PTR_GET(agenticFsMounts_, vector<Body::AgenticFsMounts>) };
      inline Body& setAgenticFsMounts(const vector<Body::AgenticFsMounts> & agenticFsMounts) { DARABONBA_PTR_SET_VALUE(agenticFsMounts_, agenticFsMounts) };
      inline Body& setAgenticFsMounts(vector<Body::AgenticFsMounts> && agenticFsMounts) { DARABONBA_PTR_SET_RVALUE(agenticFsMounts_, agenticFsMounts) };


      // artifact Field Functions 
      bool hasArtifact() const { return this->artifact_ != nullptr;};
      void deleteArtifact() { this->artifact_ = nullptr;};
      inline const Body::Artifact & getArtifact() const { DARABONBA_PTR_GET_CONST(artifact_, Body::Artifact) };
      inline Body::Artifact getArtifact() { DARABONBA_PTR_GET(artifact_, Body::Artifact) };
      inline Body& setArtifact(const Body::Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
      inline Body& setArtifact(Body::Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


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


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const Body::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Body::HealthCheck) };
      inline Body::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, Body::HealthCheck) };
      inline Body& setHealthCheck(const Body::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline Body& setHealthCheck(Body::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


      // logging Field Functions 
      bool hasLogging() const { return this->logging_ != nullptr;};
      void deleteLogging() { this->logging_ = nullptr;};
      inline const Body::Logging & getLogging() const { DARABONBA_PTR_GET_CONST(logging_, Body::Logging) };
      inline Body::Logging getLogging() { DARABONBA_PTR_GET(logging_, Body::Logging) };
      inline Body& setLogging(const Body::Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
      inline Body& setLogging(Body::Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


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


      // observability Field Functions 
      bool hasObservability() const { return this->observability_ != nullptr;};
      void deleteObservability() { this->observability_ = nullptr;};
      inline const Body::Observability & getObservability() const { DARABONBA_PTR_GET_CONST(observability_, Body::Observability) };
      inline Body::Observability getObservability() { DARABONBA_PTR_GET(observability_, Body::Observability) };
      inline Body& setObservability(const Body::Observability & observability) { DARABONBA_PTR_SET_VALUE(observability_, observability) };
      inline Body& setObservability(Body::Observability && observability) { DARABONBA_PTR_SET_RVALUE(observability_, observability) };


      // ossMounts Field Functions 
      bool hasOssMounts() const { return this->ossMounts_ != nullptr;};
      void deleteOssMounts() { this->ossMounts_ = nullptr;};
      inline const vector<Body::OssMounts> & getOssMounts() const { DARABONBA_PTR_GET_CONST(ossMounts_, vector<Body::OssMounts>) };
      inline vector<Body::OssMounts> getOssMounts() { DARABONBA_PTR_GET(ossMounts_, vector<Body::OssMounts>) };
      inline Body& setOssMounts(const vector<Body::OssMounts> & ossMounts) { DARABONBA_PTR_SET_VALUE(ossMounts_, ossMounts) };
      inline Body& setOssMounts(vector<Body::OssMounts> && ossMounts) { DARABONBA_PTR_SET_RVALUE(ossMounts_, ossMounts) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const vector<Body::Protocol> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<Body::Protocol>) };
      inline vector<Body::Protocol> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<Body::Protocol>) };
      inline Body& setProtocol(const vector<Body::Protocol> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline Body& setProtocol(vector<Body::Protocol> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Body& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline const Body::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Body::Runtime) };
      inline Body::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Body::Runtime) };
      inline Body& setRuntime(const Body::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
      inline Body& setRuntime(Body::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


      // useImageCache Field Functions 
      bool hasUseImageCache() const { return this->useImageCache_ != nullptr;};
      void deleteUseImageCache() { this->useImageCache_ = nullptr;};
      inline bool getUseImageCache() const { DARABONBA_PTR_GET_DEFAULT(useImageCache_, false) };
      inline Body& setUseImageCache(bool useImageCache) { DARABONBA_PTR_SET_VALUE(useImageCache_, useImageCache) };


    protected:
      // The list of additional AgenticFS mounts. The total number of AgenticFS mounts and ossMounts cannot exceed 10. During creation, omitting this field or passing an empty array [] indicates no additional mounts. During an update, omitting this field retains the original value, and passing an empty array [] clears the list. You cannot pass null.
      shared_ptr<vector<Body::AgenticFsMounts>> agenticFsMounts_ {};
      // The deployment artifact configuration. You must specify the service listening port in the port field and choose either the code or container deployment method. During an update, you must provide the required fields for the selected method.
      shared_ptr<Body::Artifact> artifact_ {};
      // The description of the agent purpose. The maximum length is 1,024 characters after leading and trailing whitespaces are removed. Omitting this field retains the original value. Pass null to clear the description.
      shared_ptr<string> description_ {};
      // The environment variable configuration for the agent process. Omitting this top-level field retains the original value. Providing this object but omitting the variables field clears the custom environment variables. To retain the variables, provide the complete list.
      shared_ptr<Body::Environment> environment_ {};
      // The optional HTTP health check configuration. When providing this object, you must specify the port field. Other unspecified items use default values. Omitting this field during creation indicates no configuration. During an update, omitting this top-level field retains the original configuration, and passing null removes the health check.
      shared_ptr<Body::HealthCheck> healthCheck_ {};
      // The log delivery configuration for the agent. You can specify the Simple Log Service (SLS) project and logstore. After a successful creation or update, verify whether logs are delivered properly.
      shared_ptr<Body::Logging> logging_ {};
      // The name of the custom agent. The length is 1 to 128 characters after leading and trailing whitespaces are removed. The name must be unique within the same workspace. Omitting this field retains the original value. You cannot pass null or a blank name.
      shared_ptr<string> name_ {};
      // The network access configuration for the agent. When providing this object, omitted access items are treated as allowed. The actual accessible range is still restricted by the workspace network configuration. To retain the original restrictions during an update, specify both accessInternet and accessVpc.
      shared_ptr<Body::Network> network_ {};
      // The high-code agent observability configuration.
      shared_ptr<Body::Observability> observability_ {};
      // The OSS mount list. A maximum of 10 items in total with agenticFsMounts. Each item must include bucketName, path, and mountPath. Mount targets must not be duplicated or overlap. The entire list is replaced during an update. Pass an empty array to clear the list.
      shared_ptr<vector<Body::OssMounts>> ossMounts_ {};
      // The list of invocation protocols supported by the agent. Each item includes the protocol type and optional paths and request headers. The entire list is replaced during an update.
      shared_ptr<vector<Body::Protocol>> protocol_ {};
      // The ARN of the RAM role used when the agent accesses user cloud resources. The role must have permissions to access the cloud resources.
      shared_ptr<string> roleArn_ {};
      // The runtime configuration. When this object is provided, compute and sessionPolicy must be present at the same time. To retain the original elastic policy, provide the complete hpa configuration. Omitting the top-level runtime field retains the original configuration.
      shared_ptr<Body::Runtime> runtime_ {};
      // If this parameter is not passed during an update, the original value is retained. Explicitly set this parameter to true or false. The system does not automatically supplement false. The new contract rejects null and invalid types. Existing compatibility endpoints are processed according to migration agreements.
      shared_ptr<bool> useImageCache_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateCustomAgentRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateCustomAgentRequest::Body) };
    inline UpdateCustomAgentRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateCustomAgentRequest::Body) };
    inline UpdateCustomAgentRequest& setBody(const UpdateCustomAgentRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateCustomAgentRequest& setBody(UpdateCustomAgentRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCustomAgentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The update configuration for the custom agent. Provide at least one top-level field. Omitted top-level fields retain their original values. When providing a configuration object, specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole.
    shared_ptr<UpdateCustomAgentRequest::Body> body_ {};
    // Idempotence is not currently guaranteed. Do not rely on this parameter to prevent duplicate requests.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
