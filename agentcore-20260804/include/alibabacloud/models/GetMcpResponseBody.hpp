// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCPRESPONSEBODY_HPP_
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
  class GetMcpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMcpResponseBody() = default ;
    GetMcpResponseBody(const GetMcpResponseBody &) = default ;
    GetMcpResponseBody(GetMcpResponseBody &&) = default ;
    GetMcpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpResponseBody() = default ;
    GetMcpResponseBody& operator=(const GetMcpResponseBody &) = default ;
    GetMcpResponseBody& operator=(GetMcpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(addresses, addresses_);
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(customTags, customTags_);
        DARABONBA_PTR_TO_JSON(deploymentConfig, deploymentConfig_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(functionName, functionName_);
        DARABONBA_PTR_TO_JSON(marketSource, marketSource_);
        DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(officialTag, officialTag_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_TO_JSON(template, template_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(url, url_);
        DARABONBA_PTR_TO_JSON(usageActive, usageActive_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(customTags, customTags_);
        DARABONBA_PTR_FROM_JSON(deploymentConfig, deploymentConfig_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(functionName, functionName_);
        DARABONBA_PTR_FROM_JSON(marketSource, marketSource_);
        DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(officialTag, officialTag_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_FROM_JSON(template, template_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(url, url_);
        DARABONBA_PTR_FROM_JSON(usageActive, usageActive_);
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
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(appliedTemplateVersion, appliedTemplateVersion_);
          DARABONBA_PTR_TO_JSON(latestTemplateVersion, latestTemplateVersion_);
          DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
          DARABONBA_PTR_TO_JSON(templateInputSchema, templateInputSchema_);
          DARABONBA_PTR_TO_JSON(updateAvailable, updateAvailable_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(appliedTemplateVersion, appliedTemplateVersion_);
          DARABONBA_PTR_FROM_JSON(latestTemplateVersion, latestTemplateVersion_);
          DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
          DARABONBA_PTR_FROM_JSON(templateInputSchema, templateInputSchema_);
          DARABONBA_PTR_FROM_JSON(updateAvailable, updateAvailable_);
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
        virtual bool empty() const override { return this->appliedTemplateVersion_ == nullptr
        && this->latestTemplateVersion_ == nullptr && this->schemaVersion_ == nullptr && this->templateInputSchema_ == nullptr && this->updateAvailable_ == nullptr; };
        // appliedTemplateVersion Field Functions 
        bool hasAppliedTemplateVersion() const { return this->appliedTemplateVersion_ != nullptr;};
        void deleteAppliedTemplateVersion() { this->appliedTemplateVersion_ = nullptr;};
        inline string getAppliedTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(appliedTemplateVersion_, "") };
        inline Template& setAppliedTemplateVersion(string appliedTemplateVersion) { DARABONBA_PTR_SET_VALUE(appliedTemplateVersion_, appliedTemplateVersion) };


        // latestTemplateVersion Field Functions 
        bool hasLatestTemplateVersion() const { return this->latestTemplateVersion_ != nullptr;};
        void deleteLatestTemplateVersion() { this->latestTemplateVersion_ = nullptr;};
        inline string getLatestTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(latestTemplateVersion_, "") };
        inline Template& setLatestTemplateVersion(string latestTemplateVersion) { DARABONBA_PTR_SET_VALUE(latestTemplateVersion_, latestTemplateVersion) };


        // schemaVersion Field Functions 
        bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
        void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
        inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
        inline Template& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


        // templateInputSchema Field Functions 
        bool hasTemplateInputSchema() const { return this->templateInputSchema_ != nullptr;};
        void deleteTemplateInputSchema() { this->templateInputSchema_ = nullptr;};
        inline string getTemplateInputSchema() const { DARABONBA_PTR_GET_DEFAULT(templateInputSchema_, "") };
        inline Template& setTemplateInputSchema(string templateInputSchema) { DARABONBA_PTR_SET_VALUE(templateInputSchema_, templateInputSchema) };


        // updateAvailable Field Functions 
        bool hasUpdateAvailable() const { return this->updateAvailable_ != nullptr;};
        void deleteUpdateAvailable() { this->updateAvailable_ = nullptr;};
        inline bool getUpdateAvailable() const { DARABONBA_PTR_GET_DEFAULT(updateAvailable_, false) };
        inline Template& setUpdateAvailable(bool updateAvailable) { DARABONBA_PTR_SET_VALUE(updateAvailable_, updateAvailable) };


      protected:
        // The template version currently applied to the MCP.
        shared_ptr<string> appliedTemplateVersion_ {};
        // The latest template version.
        shared_ptr<string> latestTemplateVersion_ {};
        // The template schema version.
        shared_ptr<string> schemaVersion_ {};
        // The template input schema, represented as a JSON Schema string.
        shared_ptr<string> templateInputSchema_ {};
        // Indicates whether a template version update is available.
        shared_ptr<bool> updateAvailable_ {};
      };

      class MarketSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarketSource& obj) { 
          DARABONBA_PTR_TO_JSON(marketItemId, marketItemId_);
        };
        friend void from_json(const Darabonba::Json& j, MarketSource& obj) { 
          DARABONBA_PTR_FROM_JSON(marketItemId, marketItemId_);
        };
        MarketSource() = default ;
        MarketSource(const MarketSource &) = default ;
        MarketSource(MarketSource &&) = default ;
        MarketSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarketSource() = default ;
        MarketSource& operator=(const MarketSource &) = default ;
        MarketSource& operator=(MarketSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->marketItemId_ == nullptr; };
        // marketItemId Field Functions 
        bool hasMarketItemId() const { return this->marketItemId_ != nullptr;};
        void deleteMarketItemId() { this->marketItemId_ = nullptr;};
        inline string getMarketItemId() const { DARABONBA_PTR_GET_DEFAULT(marketItemId_, "") };
        inline MarketSource& setMarketItemId(string marketItemId) { DARABONBA_PTR_SET_VALUE(marketItemId_, marketItemId) };


      protected:
        // The marketplace template ID for the MCP.
        shared_ptr<string> marketItemId_ {};
      };

      class DeploymentConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentConfig& obj) { 
          DARABONBA_PTR_TO_JSON(accessControl, accessControl_);
          DARABONBA_PTR_TO_JSON(agentIdentityConfiguration, agentIdentityConfiguration_);
          DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
          DARABONBA_PTR_TO_JSON(codeConfiguration, codeConfiguration_);
          DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
          DARABONBA_PTR_TO_JSON(hookConfiguration, hookConfiguration_);
          DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
          DARABONBA_PTR_TO_JSON(mcpConfiguration, mcpConfiguration_);
          DARABONBA_PTR_TO_JSON(nasConfiguration, nasConfiguration_);
          DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
          DARABONBA_PTR_TO_JSON(ossMountConfiguration, ossMountConfiguration_);
          DARABONBA_PTR_TO_JSON(parameterTransformConfiguration, parameterTransformConfiguration_);
          DARABONBA_PTR_TO_JSON(proxyConfiguration, proxyConfiguration_);
          DARABONBA_PTR_TO_JSON(runtimeConfiguration, runtimeConfiguration_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(accessControl, accessControl_);
          DARABONBA_PTR_FROM_JSON(agentIdentityConfiguration, agentIdentityConfiguration_);
          DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
          DARABONBA_PTR_FROM_JSON(codeConfiguration, codeConfiguration_);
          DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
          DARABONBA_PTR_FROM_JSON(hookConfiguration, hookConfiguration_);
          DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
          DARABONBA_PTR_FROM_JSON(mcpConfiguration, mcpConfiguration_);
          DARABONBA_PTR_FROM_JSON(nasConfiguration, nasConfiguration_);
          DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
          DARABONBA_PTR_FROM_JSON(ossMountConfiguration, ossMountConfiguration_);
          DARABONBA_PTR_FROM_JSON(parameterTransformConfiguration, parameterTransformConfiguration_);
          DARABONBA_PTR_FROM_JSON(proxyConfiguration, proxyConfiguration_);
          DARABONBA_PTR_FROM_JSON(runtimeConfiguration, runtimeConfiguration_);
        };
        DeploymentConfig() = default ;
        DeploymentConfig(const DeploymentConfig &) = default ;
        DeploymentConfig(DeploymentConfig &&) = default ;
        DeploymentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentConfig() = default ;
        DeploymentConfig& operator=(const DeploymentConfig &) = default ;
        DeploymentConfig& operator=(DeploymentConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuntimeConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(cpu, cpu_);
            DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
            DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
            DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
            DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
            DARABONBA_PTR_TO_JSON(memory, memory_);
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(cpu, cpu_);
            DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
            DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
            DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
            DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
            DARABONBA_PTR_FROM_JSON(memory, memory_);
            DARABONBA_PTR_FROM_JSON(port, port_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
          };
          RuntimeConfiguration() = default ;
          RuntimeConfiguration(const RuntimeConfiguration &) = default ;
          RuntimeConfiguration(RuntimeConfiguration &&) = default ;
          RuntimeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuntimeConfiguration() = default ;
          RuntimeConfiguration& operator=(const RuntimeConfiguration &) = default ;
          RuntimeConfiguration& operator=(RuntimeConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cpu_ == nullptr
        && this->diskSize_ == nullptr && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->instanceConcurrency_ == nullptr && this->memory_ == nullptr
        && this->port_ == nullptr && this->timeout_ == nullptr; };
          // cpu Field Functions 
          bool hasCpu() const { return this->cpu_ != nullptr;};
          void deleteCpu() { this->cpu_ = nullptr;};
          inline double getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
          inline RuntimeConfiguration& setCpu(double cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


          // diskSize Field Functions 
          bool hasDiskSize() const { return this->diskSize_ != nullptr;};
          void deleteDiskSize() { this->diskSize_ = nullptr;};
          inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
          inline RuntimeConfiguration& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


          // environmentVariables Field Functions 
          bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
          void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
          inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
          inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
          inline RuntimeConfiguration& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
          inline RuntimeConfiguration& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


          // executionRoleArn Field Functions 
          bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
          void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
          inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
          inline RuntimeConfiguration& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


          // instanceConcurrency Field Functions 
          bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
          void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
          inline int32_t getInstanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
          inline RuntimeConfiguration& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


          // memory Field Functions 
          bool hasMemory() const { return this->memory_ != nullptr;};
          void deleteMemory() { this->memory_ = nullptr;};
          inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
          inline RuntimeConfiguration& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline RuntimeConfiguration& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline RuntimeConfiguration& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        protected:
          // The number of vCPUs. Default value: 0.25.
          shared_ptr<double> cpu_ {};
          // The ephemeral disk size. Unit: MB. Valid values: 512 and 10240.
          shared_ptr<int32_t> diskSize_ {};
          // The environment variables.
          shared_ptr<map<string, string>> environmentVariables_ {};
          // The ARN of the RAM role used by user code to access downstream Alibaba Cloud resources.
          shared_ptr<string> executionRoleArn_ {};
          // The number of concurrent requests per instance. Default value: 200.
          shared_ptr<int32_t> instanceConcurrency_ {};
          // The memory size. Unit: MB. Default value: 512.
          shared_ptr<int32_t> memory_ {};
          // The service port. Default value: 9000.
          shared_ptr<int32_t> port_ {};
          // The function timeout period. Unit: seconds. Default value: 300.
          shared_ptr<int32_t> timeout_ {};
        };

        class ProxyConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProxyConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, ProxyConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          ProxyConfiguration() = default ;
          ProxyConfiguration(const ProxyConfiguration &) = default ;
          ProxyConfiguration(ProxyConfiguration &&) = default ;
          ProxyConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProxyConfiguration() = default ;
          ProxyConfiguration& operator=(const ProxyConfiguration &) = default ;
          ProxyConfiguration& operator=(ProxyConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline ProxyConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // Indicates whether the MCP proxy is enabled.
          shared_ptr<bool> enabled_ {};
        };

        class ParameterTransformConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParameterTransformConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(ruleSetId, ruleSetId_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, ParameterTransformConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(ruleSetId, ruleSetId_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          ParameterTransformConfiguration() = default ;
          ParameterTransformConfiguration(const ParameterTransformConfiguration &) = default ;
          ParameterTransformConfiguration(ParameterTransformConfiguration &&) = default ;
          ParameterTransformConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParameterTransformConfiguration() = default ;
          ParameterTransformConfiguration& operator=(const ParameterTransformConfiguration &) = default ;
          ParameterTransformConfiguration& operator=(ParameterTransformConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->ruleSetId_ == nullptr && this->version_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline ParameterTransformConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // ruleSetId Field Functions 
          bool hasRuleSetId() const { return this->ruleSetId_ != nullptr;};
          void deleteRuleSetId() { this->ruleSetId_ = nullptr;};
          inline string getRuleSetId() const { DARABONBA_PTR_GET_DEFAULT(ruleSetId_, "") };
          inline ParameterTransformConfiguration& setRuleSetId(string ruleSetId) { DARABONBA_PTR_SET_VALUE(ruleSetId_, ruleSetId) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline ParameterTransformConfiguration& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // Indicates whether parameter transformation and result enhancement is enabled.
          shared_ptr<bool> enabled_ {};
          // The reserved reference to the parameter transformation and result enhancement rule set.
          shared_ptr<string> ruleSetId_ {};
          // The transformation rule version.
          shared_ptr<string> version_ {};
        };

        class OssMountConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OssMountConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
          };
          friend void from_json(const Darabonba::Json& j, OssMountConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
          };
          OssMountConfiguration() = default ;
          OssMountConfiguration(const OssMountConfiguration &) = default ;
          OssMountConfiguration(OssMountConfiguration &&) = default ;
          OssMountConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OssMountConfiguration() = default ;
          OssMountConfiguration& operator=(const OssMountConfiguration &) = default ;
          OssMountConfiguration& operator=(OssMountConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MountPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
              DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
              DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
              DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
              DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
              DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
            };
            friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
              DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
              DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
              DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
              DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
            };
            MountPoints() = default ;
            MountPoints(const MountPoints &) = default ;
            MountPoints(MountPoints &&) = default ;
            MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MountPoints() = default ;
            MountPoints& operator=(const MountPoints &) = default ;
            MountPoints& operator=(MountPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->bucketPath_ == nullptr && this->endpoint_ == nullptr && this->mountDir_ == nullptr && this->readOnly_ == nullptr; };
            // bucketName Field Functions 
            bool hasBucketName() const { return this->bucketName_ != nullptr;};
            void deleteBucketName() { this->bucketName_ = nullptr;};
            inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
            inline MountPoints& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


            // bucketPath Field Functions 
            bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
            void deleteBucketPath() { this->bucketPath_ = nullptr;};
            inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
            inline MountPoints& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


            // endpoint Field Functions 
            bool hasEndpoint() const { return this->endpoint_ != nullptr;};
            void deleteEndpoint() { this->endpoint_ = nullptr;};
            inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
            inline MountPoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


            // mountDir Field Functions 
            bool hasMountDir() const { return this->mountDir_ != nullptr;};
            void deleteMountDir() { this->mountDir_ = nullptr;};
            inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
            inline MountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


            // readOnly Field Functions 
            bool hasReadOnly() const { return this->readOnly_ != nullptr;};
            void deleteReadOnly() { this->readOnly_ = nullptr;};
            inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
            inline MountPoints& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


          protected:
            // The OSS bucket name.
            shared_ptr<string> bucketName_ {};
            // The OSS bucket path.
            shared_ptr<string> bucketPath_ {};
            // The OSS service endpoint.
            shared_ptr<string> endpoint_ {};
            // The local mount directory.
            shared_ptr<string> mountDir_ {};
            // Indicates whether the mount point is read-only.
            shared_ptr<bool> readOnly_ {};
          };

          virtual bool empty() const override { return this->mountPoints_ == nullptr; };
          // mountPoints Field Functions 
          bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
          void deleteMountPoints() { this->mountPoints_ = nullptr;};
          inline const vector<OssMountConfiguration::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<OssMountConfiguration::MountPoints>) };
          inline vector<OssMountConfiguration::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<OssMountConfiguration::MountPoints>) };
          inline OssMountConfiguration& setMountPoints(const vector<OssMountConfiguration::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
          inline OssMountConfiguration& setMountPoints(vector<OssMountConfiguration::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


        protected:
          // The list of OSS mount points.
          shared_ptr<vector<OssMountConfiguration::MountPoints>> mountPoints_ {};
        };

        class NetworkConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(networkMode, networkMode_);
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(networkMode, networkMode_);
            DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          NetworkConfiguration() = default ;
          NetworkConfiguration(const NetworkConfiguration &) = default ;
          NetworkConfiguration(NetworkConfiguration &&) = default ;
          NetworkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkConfiguration() = default ;
          NetworkConfiguration& operator=(const NetworkConfiguration &) = default ;
          NetworkConfiguration& operator=(NetworkConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->networkMode_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
          // networkMode Field Functions 
          bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
          void deleteNetworkMode() { this->networkMode_ = nullptr;};
          inline string getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
          inline NetworkConfiguration& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline NetworkConfiguration& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
          inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
          inline NetworkConfiguration& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
          inline NetworkConfiguration& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline NetworkConfiguration& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The network mode.
          shared_ptr<string> networkMode_ {};
          // The security group ID.
          shared_ptr<string> securityGroupId_ {};
          // The list of vSwitch IDs.
          shared_ptr<vector<string>> vSwitchIds_ {};
          // The virtual private cloud (VPC) ID.
          shared_ptr<string> vpcId_ {};
        };

        class NasConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NasConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(groupId, groupId_);
            DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
            DARABONBA_PTR_TO_JSON(userId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, NasConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(groupId, groupId_);
            DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
            DARABONBA_PTR_FROM_JSON(userId, userId_);
          };
          NasConfiguration() = default ;
          NasConfiguration(const NasConfiguration &) = default ;
          NasConfiguration(NasConfiguration &&) = default ;
          NasConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NasConfiguration() = default ;
          NasConfiguration& operator=(const NasConfiguration &) = default ;
          NasConfiguration& operator=(NasConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MountPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
              DARABONBA_PTR_TO_JSON(enableTls, enableTls_);
              DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
              DARABONBA_PTR_TO_JSON(serverAddr, serverAddr_);
            };
            friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(enableTls, enableTls_);
              DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
              DARABONBA_PTR_FROM_JSON(serverAddr, serverAddr_);
            };
            MountPoints() = default ;
            MountPoints(const MountPoints &) = default ;
            MountPoints(MountPoints &&) = default ;
            MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MountPoints() = default ;
            MountPoints& operator=(const MountPoints &) = default ;
            MountPoints& operator=(MountPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->enableTls_ == nullptr
        && this->mountDir_ == nullptr && this->serverAddr_ == nullptr; };
            // enableTls Field Functions 
            bool hasEnableTls() const { return this->enableTls_ != nullptr;};
            void deleteEnableTls() { this->enableTls_ = nullptr;};
            inline bool getEnableTls() const { DARABONBA_PTR_GET_DEFAULT(enableTls_, false) };
            inline MountPoints& setEnableTls(bool enableTls) { DARABONBA_PTR_SET_VALUE(enableTls_, enableTls) };


            // mountDir Field Functions 
            bool hasMountDir() const { return this->mountDir_ != nullptr;};
            void deleteMountDir() { this->mountDir_ = nullptr;};
            inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
            inline MountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


            // serverAddr Field Functions 
            bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
            void deleteServerAddr() { this->serverAddr_ = nullptr;};
            inline string getServerAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
            inline MountPoints& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


          protected:
            // Indicates whether TLS is enabled.
            shared_ptr<bool> enableTls_ {};
            // The local mount directory.
            shared_ptr<string> mountDir_ {};
            // The NAS server address.
            shared_ptr<string> serverAddr_ {};
          };

          virtual bool empty() const override { return this->groupId_ == nullptr
        && this->mountPoints_ == nullptr && this->userId_ == nullptr; };
          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
          inline NasConfiguration& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // mountPoints Field Functions 
          bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
          void deleteMountPoints() { this->mountPoints_ = nullptr;};
          inline const vector<NasConfiguration::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<NasConfiguration::MountPoints>) };
          inline vector<NasConfiguration::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<NasConfiguration::MountPoints>) };
          inline NasConfiguration& setMountPoints(const vector<NasConfiguration::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
          inline NasConfiguration& setMountPoints(vector<NasConfiguration::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline int32_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0) };
          inline NasConfiguration& setUserId(int32_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          // The runtime user group ID.
          shared_ptr<int32_t> groupId_ {};
          // The list of NAS mount points.
          shared_ptr<vector<NasConfiguration::MountPoints>> mountPoints_ {};
          // The runtime user ID.
          shared_ptr<int32_t> userId_ {};
        };

        class McpConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const McpConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(endpointPath, endpointPath_);
            DARABONBA_PTR_TO_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
            DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
            DARABONBA_PTR_TO_JSON(sessionMaxLifetimeSeconds, sessionMaxLifetimeSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, McpConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(endpointPath, endpointPath_);
            DARABONBA_PTR_FROM_JSON(sessionConcurrencyPerInstance, sessionConcurrencyPerInstance_);
            DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
            DARABONBA_PTR_FROM_JSON(sessionMaxLifetimeSeconds, sessionMaxLifetimeSeconds_);
          };
          McpConfiguration() = default ;
          McpConfiguration(const McpConfiguration &) = default ;
          McpConfiguration(McpConfiguration &&) = default ;
          McpConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~McpConfiguration() = default ;
          McpConfiguration& operator=(const McpConfiguration &) = default ;
          McpConfiguration& operator=(McpConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpointPath_ == nullptr
        && this->sessionConcurrencyPerInstance_ == nullptr && this->sessionIdleTimeoutSeconds_ == nullptr && this->sessionMaxLifetimeSeconds_ == nullptr; };
          // endpointPath Field Functions 
          bool hasEndpointPath() const { return this->endpointPath_ != nullptr;};
          void deleteEndpointPath() { this->endpointPath_ = nullptr;};
          inline string getEndpointPath() const { DARABONBA_PTR_GET_DEFAULT(endpointPath_, "") };
          inline McpConfiguration& setEndpointPath(string endpointPath) { DARABONBA_PTR_SET_VALUE(endpointPath_, endpointPath) };


          // sessionConcurrencyPerInstance Field Functions 
          bool hasSessionConcurrencyPerInstance() const { return this->sessionConcurrencyPerInstance_ != nullptr;};
          void deleteSessionConcurrencyPerInstance() { this->sessionConcurrencyPerInstance_ = nullptr;};
          inline int32_t getSessionConcurrencyPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyPerInstance_, 0) };
          inline McpConfiguration& setSessionConcurrencyPerInstance(int32_t sessionConcurrencyPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyPerInstance_, sessionConcurrencyPerInstance) };


          // sessionIdleTimeoutSeconds Field Functions 
          bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
          void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
          inline int32_t getSessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
          inline McpConfiguration& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


          // sessionMaxLifetimeSeconds Field Functions 
          bool hasSessionMaxLifetimeSeconds() const { return this->sessionMaxLifetimeSeconds_ != nullptr;};
          void deleteSessionMaxLifetimeSeconds() { this->sessionMaxLifetimeSeconds_ = nullptr;};
          inline int32_t getSessionMaxLifetimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionMaxLifetimeSeconds_, 0) };
          inline McpConfiguration& setSessionMaxLifetimeSeconds(int32_t sessionMaxLifetimeSeconds) { DARABONBA_PTR_SET_VALUE(sessionMaxLifetimeSeconds_, sessionMaxLifetimeSeconds) };


        protected:
          // The MCP endpoint path. For example, /mcp or /sse.
          shared_ptr<string> endpointPath_ {};
          // The value is fixed to 1.
          shared_ptr<int32_t> sessionConcurrencyPerInstance_ {};
          // The session idle timeout period. Unit: seconds. Default value: 1800.
          shared_ptr<int32_t> sessionIdleTimeoutSeconds_ {};
          // The maximum session lifetime. Unit: seconds. Default value: 21600.
          shared_ptr<int32_t> sessionMaxLifetimeSeconds_ {};
        };

        class LogConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(enableInstanceMetrics, enableInstanceMetrics_);
            DARABONBA_PTR_TO_JSON(enableRequestMetrics, enableRequestMetrics_);
            DARABONBA_PTR_TO_JSON(logBeginRule, logBeginRule_);
            DARABONBA_PTR_TO_JSON(logstore, logstore_);
            DARABONBA_PTR_TO_JSON(project, project_);
          };
          friend void from_json(const Darabonba::Json& j, LogConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(enableInstanceMetrics, enableInstanceMetrics_);
            DARABONBA_PTR_FROM_JSON(enableRequestMetrics, enableRequestMetrics_);
            DARABONBA_PTR_FROM_JSON(logBeginRule, logBeginRule_);
            DARABONBA_PTR_FROM_JSON(logstore, logstore_);
            DARABONBA_PTR_FROM_JSON(project, project_);
          };
          LogConfiguration() = default ;
          LogConfiguration(const LogConfiguration &) = default ;
          LogConfiguration(LogConfiguration &&) = default ;
          LogConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogConfiguration() = default ;
          LogConfiguration& operator=(const LogConfiguration &) = default ;
          LogConfiguration& operator=(LogConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableInstanceMetrics_ == nullptr
        && this->enableRequestMetrics_ == nullptr && this->logBeginRule_ == nullptr && this->logstore_ == nullptr && this->project_ == nullptr; };
          // enableInstanceMetrics Field Functions 
          bool hasEnableInstanceMetrics() const { return this->enableInstanceMetrics_ != nullptr;};
          void deleteEnableInstanceMetrics() { this->enableInstanceMetrics_ = nullptr;};
          inline bool getEnableInstanceMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceMetrics_, false) };
          inline LogConfiguration& setEnableInstanceMetrics(bool enableInstanceMetrics) { DARABONBA_PTR_SET_VALUE(enableInstanceMetrics_, enableInstanceMetrics) };


          // enableRequestMetrics Field Functions 
          bool hasEnableRequestMetrics() const { return this->enableRequestMetrics_ != nullptr;};
          void deleteEnableRequestMetrics() { this->enableRequestMetrics_ = nullptr;};
          inline bool getEnableRequestMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableRequestMetrics_, false) };
          inline LogConfiguration& setEnableRequestMetrics(bool enableRequestMetrics) { DARABONBA_PTR_SET_VALUE(enableRequestMetrics_, enableRequestMetrics) };


          // logBeginRule Field Functions 
          bool hasLogBeginRule() const { return this->logBeginRule_ != nullptr;};
          void deleteLogBeginRule() { this->logBeginRule_ = nullptr;};
          inline string getLogBeginRule() const { DARABONBA_PTR_GET_DEFAULT(logBeginRule_, "") };
          inline LogConfiguration& setLogBeginRule(string logBeginRule) { DARABONBA_PTR_SET_VALUE(logBeginRule_, logBeginRule) };


          // logstore Field Functions 
          bool hasLogstore() const { return this->logstore_ != nullptr;};
          void deleteLogstore() { this->logstore_ = nullptr;};
          inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
          inline LogConfiguration& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
          inline LogConfiguration& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        protected:
          // Indicates whether instance metrics collection is enabled.
          shared_ptr<bool> enableInstanceMetrics_ {};
          // Indicates whether request metrics collection is enabled.
          shared_ptr<bool> enableRequestMetrics_ {};
          // The log segmentation begin rule for Function Compute (FC).
          shared_ptr<string> logBeginRule_ {};
          // The Logstore name.
          shared_ptr<string> logstore_ {};
          // The Log Service project name.
          shared_ptr<string> project_ {};
        };

        class HookConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HookConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(hooks, hooks_);
          };
          friend void from_json(const Darabonba::Json& j, HookConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(hooks, hooks_);
          };
          HookConfiguration() = default ;
          HookConfiguration(const HookConfiguration &) = default ;
          HookConfiguration(HookConfiguration &&) = default ;
          HookConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HookConfiguration() = default ;
          HookConfiguration& operator=(const HookConfiguration &) = default ;
          HookConfiguration& operator=(HookConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Hooks : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Hooks& obj) { 
              DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
              DARABONBA_PTR_TO_JSON(description, description_);
              DARABONBA_PTR_TO_JSON(enabled, enabled_);
              DARABONBA_PTR_TO_JSON(event, event_);
              DARABONBA_PTR_TO_JSON(headers, headers_);
              DARABONBA_PTR_TO_JSON(timeout, timeout_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Hooks& obj) { 
              DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
              DARABONBA_PTR_FROM_JSON(description, description_);
              DARABONBA_PTR_FROM_JSON(enabled, enabled_);
              DARABONBA_PTR_FROM_JSON(event, event_);
              DARABONBA_PTR_FROM_JSON(headers, headers_);
              DARABONBA_PTR_FROM_JSON(timeout, timeout_);
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            Hooks() = default ;
            Hooks(const Hooks &) = default ;
            Hooks(Hooks &&) = default ;
            Hooks(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Hooks() = default ;
            Hooks& operator=(const Hooks &) = default ;
            Hooks& operator=(Hooks &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->event_ == nullptr && this->headers_ == nullptr && this->timeout_ == nullptr
        && this->url_ == nullptr; };
            // apiVersion Field Functions 
            bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
            void deleteApiVersion() { this->apiVersion_ = nullptr;};
            inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
            inline Hooks& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Hooks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // enabled Field Functions 
            bool hasEnabled() const { return this->enabled_ != nullptr;};
            void deleteEnabled() { this->enabled_ = nullptr;};
            inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
            inline Hooks& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


            // event Field Functions 
            bool hasEvent() const { return this->event_ != nullptr;};
            void deleteEvent() { this->event_ = nullptr;};
            inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
            inline Hooks& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


            // headers Field Functions 
            bool hasHeaders() const { return this->headers_ != nullptr;};
            void deleteHeaders() { this->headers_ = nullptr;};
            inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
            inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
            inline Hooks& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
            inline Hooks& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


            // timeout Field Functions 
            bool hasTimeout() const { return this->timeout_ != nullptr;};
            void deleteTimeout() { this->timeout_ = nullptr;};
            inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
            inline Hooks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Hooks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The hook API version.
            shared_ptr<string> apiVersion_ {};
            // The hook description.
            shared_ptr<string> description_ {};
            // Indicates whether the hook is enabled.
            shared_ptr<bool> enabled_ {};
            // The hook event.
            shared_ptr<string> event_ {};
            // The hook request headers.
            shared_ptr<map<string, string>> headers_ {};
            // The timeout period. Unit: milliseconds.
            shared_ptr<int32_t> timeout_ {};
            // The hook callback URL.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->hooks_ == nullptr; };
          // hooks Field Functions 
          bool hasHooks() const { return this->hooks_ != nullptr;};
          void deleteHooks() { this->hooks_ = nullptr;};
          inline const vector<HookConfiguration::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<HookConfiguration::Hooks>) };
          inline vector<HookConfiguration::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<HookConfiguration::Hooks>) };
          inline HookConfiguration& setHooks(const vector<HookConfiguration::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
          inline HookConfiguration& setHooks(vector<HookConfiguration::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


        protected:
          // The hooks are executed in array order: PRE_LIST_TOOLS, PRE_CALL_TOOL, POST_LIST_TOOLS, and POST_CALL_TOOL.
          shared_ptr<vector<HookConfiguration::Hooks>> hooks_ {};
        };

        class ContainerConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContainerConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
            DARABONBA_PTR_TO_JSON(command, command_);
            DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_TO_JSON(image, image_);
            DARABONBA_PTR_TO_JSON(imageRegistryType, imageRegistryType_);
            DARABONBA_PTR_TO_JSON(mcpRuntimeMode, mcpRuntimeMode_);
            DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          };
          friend void from_json(const Darabonba::Json& j, ContainerConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
            DARABONBA_PTR_FROM_JSON(command, command_);
            DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_FROM_JSON(image, image_);
            DARABONBA_PTR_FROM_JSON(imageRegistryType, imageRegistryType_);
            DARABONBA_PTR_FROM_JSON(mcpRuntimeMode, mcpRuntimeMode_);
            DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          };
          ContainerConfiguration() = default ;
          ContainerConfiguration(const ContainerConfiguration &) = default ;
          ContainerConfiguration(ContainerConfiguration &&) = default ;
          ContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContainerConfiguration() = default ;
          ContainerConfiguration& operator=(const ContainerConfiguration &) = default ;
          ContainerConfiguration& operator=(ContainerConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->command_ == nullptr && this->entrypoint_ == nullptr && this->image_ == nullptr && this->imageRegistryType_ == nullptr && this->mcpRuntimeMode_ == nullptr
        && this->sourceType_ == nullptr; };
          // acrInstanceId Field Functions 
          bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
          void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
          inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
          inline ContainerConfiguration& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
          inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
          inline ContainerConfiguration& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
          inline ContainerConfiguration& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


          // entrypoint Field Functions 
          bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
          void deleteEntrypoint() { this->entrypoint_ = nullptr;};
          inline const vector<string> & getEntrypoint() const { DARABONBA_PTR_GET_CONST(entrypoint_, vector<string>) };
          inline vector<string> getEntrypoint() { DARABONBA_PTR_GET(entrypoint_, vector<string>) };
          inline ContainerConfiguration& setEntrypoint(const vector<string> & entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };
          inline ContainerConfiguration& setEntrypoint(vector<string> && entrypoint) { DARABONBA_PTR_SET_RVALUE(entrypoint_, entrypoint) };


          // image Field Functions 
          bool hasImage() const { return this->image_ != nullptr;};
          void deleteImage() { this->image_ = nullptr;};
          inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
          inline ContainerConfiguration& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


          // imageRegistryType Field Functions 
          bool hasImageRegistryType() const { return this->imageRegistryType_ != nullptr;};
          void deleteImageRegistryType() { this->imageRegistryType_ = nullptr;};
          inline string getImageRegistryType() const { DARABONBA_PTR_GET_DEFAULT(imageRegistryType_, "") };
          inline ContainerConfiguration& setImageRegistryType(string imageRegistryType) { DARABONBA_PTR_SET_VALUE(imageRegistryType_, imageRegistryType) };


          // mcpRuntimeMode Field Functions 
          bool hasMcpRuntimeMode() const { return this->mcpRuntimeMode_ != nullptr;};
          void deleteMcpRuntimeMode() { this->mcpRuntimeMode_ = nullptr;};
          inline string getMcpRuntimeMode() const { DARABONBA_PTR_GET_DEFAULT(mcpRuntimeMode_, "") };
          inline ContainerConfiguration& setMcpRuntimeMode(string mcpRuntimeMode) { DARABONBA_PTR_SET_VALUE(mcpRuntimeMode_, mcpRuntimeMode) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline ContainerConfiguration& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        protected:
          // The ACR instance ID.
          shared_ptr<string> acrInstanceId_ {};
          // The startup command.
          shared_ptr<vector<string>> command_ {};
          // The container entrypoint parameters.
          shared_ptr<vector<string>> entrypoint_ {};
          // The container image address.
          shared_ptr<string> image_ {};
          // The image registry type.
          shared_ptr<string> imageRegistryType_ {};
          // The custom container must expose a standard MCP endpoint on its own. The value is SELF_HOSTED.
          shared_ptr<string> mcpRuntimeMode_ {};
          // The value is fixed to CONTAINER_IMAGE.
          shared_ptr<string> sourceType_ {};
        };

        class CodeConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CodeConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(codePackageToken, codePackageToken_);
            DARABONBA_PTR_TO_JSON(command, command_);
            DARABONBA_PTR_TO_JSON(language, language_);
          };
          friend void from_json(const Darabonba::Json& j, CodeConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(codePackageToken, codePackageToken_);
            DARABONBA_PTR_FROM_JSON(command, command_);
            DARABONBA_PTR_FROM_JSON(language, language_);
          };
          CodeConfiguration() = default ;
          CodeConfiguration(const CodeConfiguration &) = default ;
          CodeConfiguration(CodeConfiguration &&) = default ;
          CodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CodeConfiguration() = default ;
          CodeConfiguration& operator=(const CodeConfiguration &) = default ;
          CodeConfiguration& operator=(CodeConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->codePackageToken_ == nullptr
        && this->command_ == nullptr && this->language_ == nullptr; };
          // codePackageToken Field Functions 
          bool hasCodePackageToken() const { return this->codePackageToken_ != nullptr;};
          void deleteCodePackageToken() { this->codePackageToken_ = nullptr;};
          inline string getCodePackageToken() const { DARABONBA_PTR_GET_DEFAULT(codePackageToken_, "") };
          inline CodeConfiguration& setCodePackageToken(string codePackageToken) { DARABONBA_PTR_SET_VALUE(codePackageToken_, codePackageToken) };


          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
          inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
          inline CodeConfiguration& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
          inline CodeConfiguration& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline CodeConfiguration& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        protected:
          // The temporary code package token returned by GetMcpCodePackageUploadUrl. Use this token to create or update a code deployment after completing the pre-signed upload.
          shared_ptr<string> codePackageToken_ {};
          // The full startup command, with arguments passed in order by parameter boundary. For example, when using supergateway to start a stdio MCP, pass supergateway, --stdio, the full subcommand, and the remaining arguments.
          shared_ptr<vector<string>> command_ {};
          // The runtime of the code package: python3.13, nodejs22, or java17.
          shared_ptr<string> language_ {};
        };

        class AgentIdentityConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AgentIdentityConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(authorizationEnabled, authorizationEnabled_);
            DARABONBA_PTR_TO_JSON(credentialProviderArn, credentialProviderArn_);
            DARABONBA_PTR_TO_JSON(credentialProviderType, credentialProviderType_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, AgentIdentityConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(authorizationEnabled, authorizationEnabled_);
            DARABONBA_PTR_FROM_JSON(credentialProviderArn, credentialProviderArn_);
            DARABONBA_PTR_FROM_JSON(credentialProviderType, credentialProviderType_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          AgentIdentityConfiguration() = default ;
          AgentIdentityConfiguration(const AgentIdentityConfiguration &) = default ;
          AgentIdentityConfiguration(AgentIdentityConfiguration &&) = default ;
          AgentIdentityConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AgentIdentityConfiguration() = default ;
          AgentIdentityConfiguration& operator=(const AgentIdentityConfiguration &) = default ;
          AgentIdentityConfiguration& operator=(AgentIdentityConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->authorizationEnabled_ == nullptr
        && this->credentialProviderArn_ == nullptr && this->credentialProviderType_ == nullptr && this->enabled_ == nullptr; };
          // authorizationEnabled Field Functions 
          bool hasAuthorizationEnabled() const { return this->authorizationEnabled_ != nullptr;};
          void deleteAuthorizationEnabled() { this->authorizationEnabled_ = nullptr;};
          inline bool getAuthorizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(authorizationEnabled_, false) };
          inline AgentIdentityConfiguration& setAuthorizationEnabled(bool authorizationEnabled) { DARABONBA_PTR_SET_VALUE(authorizationEnabled_, authorizationEnabled) };


          // credentialProviderArn Field Functions 
          bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
          void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
          inline string getCredentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
          inline AgentIdentityConfiguration& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


          // credentialProviderType Field Functions 
          bool hasCredentialProviderType() const { return this->credentialProviderType_ != nullptr;};
          void deleteCredentialProviderType() { this->credentialProviderType_ = nullptr;};
          inline string getCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderType_, "") };
          inline AgentIdentityConfiguration& setCredentialProviderType(string credentialProviderType) { DARABONBA_PTR_SET_VALUE(credentialProviderType_, credentialProviderType) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline AgentIdentityConfiguration& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // Indicates whether authorization is enabled.
          shared_ptr<bool> authorizationEnabled_ {};
          // The credential provider ARN.
          shared_ptr<string> credentialProviderArn_ {};
          // The credential provider type.
          shared_ptr<string> credentialProviderType_ {};
          // Indicates whether Agent Identity is enabled.
          shared_ptr<bool> enabled_ {};
        };

        class AccessControl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessControl& obj) { 
            DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(mode, mode_);
          };
          friend void from_json(const Darabonba::Json& j, AccessControl& obj) { 
            DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(mode, mode_);
          };
          AccessControl() = default ;
          AccessControl(const AccessControl &) = default ;
          AccessControl(AccessControl &&) = default ;
          AccessControl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessControl() = default ;
          AccessControl& operator=(const AccessControl &) = default ;
          AccessControl& operator=(AccessControl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->enabled_ == nullptr && this->mode_ == nullptr; };
          // credentialId Field Functions 
          bool hasCredentialId() const { return this->credentialId_ != nullptr;};
          void deleteCredentialId() { this->credentialId_ = nullptr;};
          inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
          inline AccessControl& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline AccessControl& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline AccessControl& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        protected:
          // The AgentCore Credential referenced when mode is set to CREDENTIAL.
          shared_ptr<string> credentialId_ {};
          // Indicates whether ingress access control is enabled.
          shared_ptr<bool> enabled_ {};
          // ANONYMOUS indicates anonymous access. CREDENTIAL indicates that AgentCore access credentials are used.
          shared_ptr<string> mode_ {};
        };

        virtual bool empty() const override { return this->accessControl_ == nullptr
        && this->agentIdentityConfiguration_ == nullptr && this->artifactType_ == nullptr && this->codeConfiguration_ == nullptr && this->containerConfiguration_ == nullptr && this->hookConfiguration_ == nullptr
        && this->logConfiguration_ == nullptr && this->mcpConfiguration_ == nullptr && this->nasConfiguration_ == nullptr && this->networkConfiguration_ == nullptr && this->ossMountConfiguration_ == nullptr
        && this->parameterTransformConfiguration_ == nullptr && this->proxyConfiguration_ == nullptr && this->runtimeConfiguration_ == nullptr; };
        // accessControl Field Functions 
        bool hasAccessControl() const { return this->accessControl_ != nullptr;};
        void deleteAccessControl() { this->accessControl_ = nullptr;};
        inline const DeploymentConfig::AccessControl & getAccessControl() const { DARABONBA_PTR_GET_CONST(accessControl_, DeploymentConfig::AccessControl) };
        inline DeploymentConfig::AccessControl getAccessControl() { DARABONBA_PTR_GET(accessControl_, DeploymentConfig::AccessControl) };
        inline DeploymentConfig& setAccessControl(const DeploymentConfig::AccessControl & accessControl) { DARABONBA_PTR_SET_VALUE(accessControl_, accessControl) };
        inline DeploymentConfig& setAccessControl(DeploymentConfig::AccessControl && accessControl) { DARABONBA_PTR_SET_RVALUE(accessControl_, accessControl) };


        // agentIdentityConfiguration Field Functions 
        bool hasAgentIdentityConfiguration() const { return this->agentIdentityConfiguration_ != nullptr;};
        void deleteAgentIdentityConfiguration() { this->agentIdentityConfiguration_ = nullptr;};
        inline const DeploymentConfig::AgentIdentityConfiguration & getAgentIdentityConfiguration() const { DARABONBA_PTR_GET_CONST(agentIdentityConfiguration_, DeploymentConfig::AgentIdentityConfiguration) };
        inline DeploymentConfig::AgentIdentityConfiguration getAgentIdentityConfiguration() { DARABONBA_PTR_GET(agentIdentityConfiguration_, DeploymentConfig::AgentIdentityConfiguration) };
        inline DeploymentConfig& setAgentIdentityConfiguration(const DeploymentConfig::AgentIdentityConfiguration & agentIdentityConfiguration) { DARABONBA_PTR_SET_VALUE(agentIdentityConfiguration_, agentIdentityConfiguration) };
        inline DeploymentConfig& setAgentIdentityConfiguration(DeploymentConfig::AgentIdentityConfiguration && agentIdentityConfiguration) { DARABONBA_PTR_SET_RVALUE(agentIdentityConfiguration_, agentIdentityConfiguration) };


        // artifactType Field Functions 
        bool hasArtifactType() const { return this->artifactType_ != nullptr;};
        void deleteArtifactType() { this->artifactType_ = nullptr;};
        inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
        inline DeploymentConfig& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


        // codeConfiguration Field Functions 
        bool hasCodeConfiguration() const { return this->codeConfiguration_ != nullptr;};
        void deleteCodeConfiguration() { this->codeConfiguration_ = nullptr;};
        inline const DeploymentConfig::CodeConfiguration & getCodeConfiguration() const { DARABONBA_PTR_GET_CONST(codeConfiguration_, DeploymentConfig::CodeConfiguration) };
        inline DeploymentConfig::CodeConfiguration getCodeConfiguration() { DARABONBA_PTR_GET(codeConfiguration_, DeploymentConfig::CodeConfiguration) };
        inline DeploymentConfig& setCodeConfiguration(const DeploymentConfig::CodeConfiguration & codeConfiguration) { DARABONBA_PTR_SET_VALUE(codeConfiguration_, codeConfiguration) };
        inline DeploymentConfig& setCodeConfiguration(DeploymentConfig::CodeConfiguration && codeConfiguration) { DARABONBA_PTR_SET_RVALUE(codeConfiguration_, codeConfiguration) };


        // containerConfiguration Field Functions 
        bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
        void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
        inline const DeploymentConfig::ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, DeploymentConfig::ContainerConfiguration) };
        inline DeploymentConfig::ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, DeploymentConfig::ContainerConfiguration) };
        inline DeploymentConfig& setContainerConfiguration(const DeploymentConfig::ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
        inline DeploymentConfig& setContainerConfiguration(DeploymentConfig::ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


        // hookConfiguration Field Functions 
        bool hasHookConfiguration() const { return this->hookConfiguration_ != nullptr;};
        void deleteHookConfiguration() { this->hookConfiguration_ = nullptr;};
        inline const DeploymentConfig::HookConfiguration & getHookConfiguration() const { DARABONBA_PTR_GET_CONST(hookConfiguration_, DeploymentConfig::HookConfiguration) };
        inline DeploymentConfig::HookConfiguration getHookConfiguration() { DARABONBA_PTR_GET(hookConfiguration_, DeploymentConfig::HookConfiguration) };
        inline DeploymentConfig& setHookConfiguration(const DeploymentConfig::HookConfiguration & hookConfiguration) { DARABONBA_PTR_SET_VALUE(hookConfiguration_, hookConfiguration) };
        inline DeploymentConfig& setHookConfiguration(DeploymentConfig::HookConfiguration && hookConfiguration) { DARABONBA_PTR_SET_RVALUE(hookConfiguration_, hookConfiguration) };


        // logConfiguration Field Functions 
        bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
        void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
        inline const DeploymentConfig::LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, DeploymentConfig::LogConfiguration) };
        inline DeploymentConfig::LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, DeploymentConfig::LogConfiguration) };
        inline DeploymentConfig& setLogConfiguration(const DeploymentConfig::LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
        inline DeploymentConfig& setLogConfiguration(DeploymentConfig::LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


        // mcpConfiguration Field Functions 
        bool hasMcpConfiguration() const { return this->mcpConfiguration_ != nullptr;};
        void deleteMcpConfiguration() { this->mcpConfiguration_ = nullptr;};
        inline const DeploymentConfig::McpConfiguration & getMcpConfiguration() const { DARABONBA_PTR_GET_CONST(mcpConfiguration_, DeploymentConfig::McpConfiguration) };
        inline DeploymentConfig::McpConfiguration getMcpConfiguration() { DARABONBA_PTR_GET(mcpConfiguration_, DeploymentConfig::McpConfiguration) };
        inline DeploymentConfig& setMcpConfiguration(const DeploymentConfig::McpConfiguration & mcpConfiguration) { DARABONBA_PTR_SET_VALUE(mcpConfiguration_, mcpConfiguration) };
        inline DeploymentConfig& setMcpConfiguration(DeploymentConfig::McpConfiguration && mcpConfiguration) { DARABONBA_PTR_SET_RVALUE(mcpConfiguration_, mcpConfiguration) };


        // nasConfiguration Field Functions 
        bool hasNasConfiguration() const { return this->nasConfiguration_ != nullptr;};
        void deleteNasConfiguration() { this->nasConfiguration_ = nullptr;};
        inline const DeploymentConfig::NasConfiguration & getNasConfiguration() const { DARABONBA_PTR_GET_CONST(nasConfiguration_, DeploymentConfig::NasConfiguration) };
        inline DeploymentConfig::NasConfiguration getNasConfiguration() { DARABONBA_PTR_GET(nasConfiguration_, DeploymentConfig::NasConfiguration) };
        inline DeploymentConfig& setNasConfiguration(const DeploymentConfig::NasConfiguration & nasConfiguration) { DARABONBA_PTR_SET_VALUE(nasConfiguration_, nasConfiguration) };
        inline DeploymentConfig& setNasConfiguration(DeploymentConfig::NasConfiguration && nasConfiguration) { DARABONBA_PTR_SET_RVALUE(nasConfiguration_, nasConfiguration) };


        // networkConfiguration Field Functions 
        bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
        void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
        inline const DeploymentConfig::NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, DeploymentConfig::NetworkConfiguration) };
        inline DeploymentConfig::NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, DeploymentConfig::NetworkConfiguration) };
        inline DeploymentConfig& setNetworkConfiguration(const DeploymentConfig::NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
        inline DeploymentConfig& setNetworkConfiguration(DeploymentConfig::NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


        // ossMountConfiguration Field Functions 
        bool hasOssMountConfiguration() const { return this->ossMountConfiguration_ != nullptr;};
        void deleteOssMountConfiguration() { this->ossMountConfiguration_ = nullptr;};
        inline const DeploymentConfig::OssMountConfiguration & getOssMountConfiguration() const { DARABONBA_PTR_GET_CONST(ossMountConfiguration_, DeploymentConfig::OssMountConfiguration) };
        inline DeploymentConfig::OssMountConfiguration getOssMountConfiguration() { DARABONBA_PTR_GET(ossMountConfiguration_, DeploymentConfig::OssMountConfiguration) };
        inline DeploymentConfig& setOssMountConfiguration(const DeploymentConfig::OssMountConfiguration & ossMountConfiguration) { DARABONBA_PTR_SET_VALUE(ossMountConfiguration_, ossMountConfiguration) };
        inline DeploymentConfig& setOssMountConfiguration(DeploymentConfig::OssMountConfiguration && ossMountConfiguration) { DARABONBA_PTR_SET_RVALUE(ossMountConfiguration_, ossMountConfiguration) };


        // parameterTransformConfiguration Field Functions 
        bool hasParameterTransformConfiguration() const { return this->parameterTransformConfiguration_ != nullptr;};
        void deleteParameterTransformConfiguration() { this->parameterTransformConfiguration_ = nullptr;};
        inline const DeploymentConfig::ParameterTransformConfiguration & getParameterTransformConfiguration() const { DARABONBA_PTR_GET_CONST(parameterTransformConfiguration_, DeploymentConfig::ParameterTransformConfiguration) };
        inline DeploymentConfig::ParameterTransformConfiguration getParameterTransformConfiguration() { DARABONBA_PTR_GET(parameterTransformConfiguration_, DeploymentConfig::ParameterTransformConfiguration) };
        inline DeploymentConfig& setParameterTransformConfiguration(const DeploymentConfig::ParameterTransformConfiguration & parameterTransformConfiguration) { DARABONBA_PTR_SET_VALUE(parameterTransformConfiguration_, parameterTransformConfiguration) };
        inline DeploymentConfig& setParameterTransformConfiguration(DeploymentConfig::ParameterTransformConfiguration && parameterTransformConfiguration) { DARABONBA_PTR_SET_RVALUE(parameterTransformConfiguration_, parameterTransformConfiguration) };


        // proxyConfiguration Field Functions 
        bool hasProxyConfiguration() const { return this->proxyConfiguration_ != nullptr;};
        void deleteProxyConfiguration() { this->proxyConfiguration_ = nullptr;};
        inline const DeploymentConfig::ProxyConfiguration & getProxyConfiguration() const { DARABONBA_PTR_GET_CONST(proxyConfiguration_, DeploymentConfig::ProxyConfiguration) };
        inline DeploymentConfig::ProxyConfiguration getProxyConfiguration() { DARABONBA_PTR_GET(proxyConfiguration_, DeploymentConfig::ProxyConfiguration) };
        inline DeploymentConfig& setProxyConfiguration(const DeploymentConfig::ProxyConfiguration & proxyConfiguration) { DARABONBA_PTR_SET_VALUE(proxyConfiguration_, proxyConfiguration) };
        inline DeploymentConfig& setProxyConfiguration(DeploymentConfig::ProxyConfiguration && proxyConfiguration) { DARABONBA_PTR_SET_RVALUE(proxyConfiguration_, proxyConfiguration) };


        // runtimeConfiguration Field Functions 
        bool hasRuntimeConfiguration() const { return this->runtimeConfiguration_ != nullptr;};
        void deleteRuntimeConfiguration() { this->runtimeConfiguration_ = nullptr;};
        inline const DeploymentConfig::RuntimeConfiguration & getRuntimeConfiguration() const { DARABONBA_PTR_GET_CONST(runtimeConfiguration_, DeploymentConfig::RuntimeConfiguration) };
        inline DeploymentConfig::RuntimeConfiguration getRuntimeConfiguration() { DARABONBA_PTR_GET(runtimeConfiguration_, DeploymentConfig::RuntimeConfiguration) };
        inline DeploymentConfig& setRuntimeConfiguration(const DeploymentConfig::RuntimeConfiguration & runtimeConfiguration) { DARABONBA_PTR_SET_VALUE(runtimeConfiguration_, runtimeConfiguration) };
        inline DeploymentConfig& setRuntimeConfiguration(DeploymentConfig::RuntimeConfiguration && runtimeConfiguration) { DARABONBA_PTR_SET_RVALUE(runtimeConfiguration_, runtimeConfiguration) };


      protected:
        // The MCP ingress access control.
        shared_ptr<DeploymentConfig::AccessControl> accessControl_ {};
        // The Agent Identity configuration.
        shared_ptr<DeploymentConfig::AgentIdentityConfiguration> agentIdentityConfiguration_ {};
        // Code indicates a ZIP code package. Container indicates a custom container.
        shared_ptr<string> artifactType_ {};
        // The code package configuration.
        shared_ptr<DeploymentConfig::CodeConfiguration> codeConfiguration_ {};
        // The custom container configuration.
        shared_ptr<DeploymentConfig::ContainerConfiguration> containerConfiguration_ {};
        // The hook configuration.
        shared_ptr<DeploymentConfig::HookConfiguration> hookConfiguration_ {};
        // The log configuration.
        shared_ptr<DeploymentConfig::LogConfiguration> logConfiguration_ {};
        // The MCP session configuration.
        shared_ptr<DeploymentConfig::McpConfiguration> mcpConfiguration_ {};
        // The NAS storage configuration.
        shared_ptr<DeploymentConfig::NasConfiguration> nasConfiguration_ {};
        // The network configuration.
        shared_ptr<DeploymentConfig::NetworkConfiguration> networkConfiguration_ {};
        // The Object Storage Service (OSS) mount configuration.
        shared_ptr<DeploymentConfig::OssMountConfiguration> ossMountConfiguration_ {};
        // The parameter transformation and result enhancement configuration.
        shared_ptr<DeploymentConfig::ParameterTransformConfiguration> parameterTransformConfiguration_ {};
        // The MCP proxy configuration.
        shared_ptr<DeploymentConfig::ProxyConfiguration> proxyConfiguration_ {};
        // The runtime and resource configuration.
        shared_ptr<DeploymentConfig::RuntimeConfiguration> runtimeConfiguration_ {};
      };

      class Auth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Auth& obj) { 
          DARABONBA_PTR_TO_JSON(codePackage, codePackage_);
          DARABONBA_PTR_TO_JSON(directProxy, directProxy_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(httpToMcp, httpToMcp_);
        };
        friend void from_json(const Darabonba::Json& j, Auth& obj) { 
          DARABONBA_PTR_FROM_JSON(codePackage, codePackage_);
          DARABONBA_PTR_FROM_JSON(directProxy, directProxy_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(httpToMcp, httpToMcp_);
        };
        Auth() = default ;
        Auth(const Auth &) = default ;
        Auth(Auth &&) = default ;
        Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Auth() = default ;
        Auth& operator=(const Auth &) = default ;
        Auth& operator=(Auth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpToMcp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpToMcp& obj) { 
            DARABONBA_PTR_TO_JSON(credential, credential_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(position, position_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, HttpToMcp& obj) { 
            DARABONBA_PTR_FROM_JSON(credential, credential_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(position, position_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          HttpToMcp() = default ;
          HttpToMcp(const HttpToMcp &) = default ;
          HttpToMcp(HttpToMcp &&) = default ;
          HttpToMcp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpToMcp() = default ;
          HttpToMcp& operator=(const HttpToMcp &) = default ;
          HttpToMcp& operator=(HttpToMcp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->credential_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->position_ == nullptr && this->type_ == nullptr; };
          // credential Field Functions 
          bool hasCredential() const { return this->credential_ != nullptr;};
          void deleteCredential() { this->credential_ = nullptr;};
          inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
          inline HttpToMcp& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline HttpToMcp& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HttpToMcp& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
          inline HttpToMcp& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HttpToMcp& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The authentication credential.
          shared_ptr<string> credential_ {};
          // The authentication scheme ID.
          shared_ptr<string> id_ {};
          // The name.
          shared_ptr<string> name_ {};
          // The position of the credential.
          shared_ptr<string> position_ {};
          // The type.
          shared_ptr<string> type_ {};
        };

        class DirectProxy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DirectProxy& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DirectProxy& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          DirectProxy() = default ;
          DirectProxy(const DirectProxy &) = default ;
          DirectProxy(DirectProxy &&) = default ;
          DirectProxy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DirectProxy() = default ;
          DirectProxy& operator=(const DirectProxy &) = default ;
          DirectProxy& operator=(DirectProxy &&) = default ;
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
          inline DirectProxy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DirectProxy& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name.
          shared_ptr<string> name_ {};
          // The authentication parameter value.
          shared_ptr<string> value_ {};
        };

        class CodePackage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CodePackage& obj) { 
            DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(headerName, headerName_);
          };
          friend void from_json(const Darabonba::Json& j, CodePackage& obj) { 
            DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(headerName, headerName_);
          };
          CodePackage() = default ;
          CodePackage(const CodePackage &) = default ;
          CodePackage(CodePackage &&) = default ;
          CodePackage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CodePackage() = default ;
          CodePackage& operator=(const CodePackage &) = default ;
          CodePackage& operator=(CodePackage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->headerName_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline CodePackage& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline CodePackage& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


        protected:
          // The API key used to verify MCP callers.
          shared_ptr<string> apiKey_ {};
          // The name of the request header that carries the API key.
          shared_ptr<string> headerName_ {};
        };

        virtual bool empty() const override { return this->codePackage_ == nullptr
        && this->directProxy_ == nullptr && this->enabled_ == nullptr && this->httpToMcp_ == nullptr; };
        // codePackage Field Functions 
        bool hasCodePackage() const { return this->codePackage_ != nullptr;};
        void deleteCodePackage() { this->codePackage_ = nullptr;};
        inline const Auth::CodePackage & getCodePackage() const { DARABONBA_PTR_GET_CONST(codePackage_, Auth::CodePackage) };
        inline Auth::CodePackage getCodePackage() { DARABONBA_PTR_GET(codePackage_, Auth::CodePackage) };
        inline Auth& setCodePackage(const Auth::CodePackage & codePackage) { DARABONBA_PTR_SET_VALUE(codePackage_, codePackage) };
        inline Auth& setCodePackage(Auth::CodePackage && codePackage) { DARABONBA_PTR_SET_RVALUE(codePackage_, codePackage) };


        // directProxy Field Functions 
        bool hasDirectProxy() const { return this->directProxy_ != nullptr;};
        void deleteDirectProxy() { this->directProxy_ = nullptr;};
        inline const Auth::DirectProxy & getDirectProxy() const { DARABONBA_PTR_GET_CONST(directProxy_, Auth::DirectProxy) };
        inline Auth::DirectProxy getDirectProxy() { DARABONBA_PTR_GET(directProxy_, Auth::DirectProxy) };
        inline Auth& setDirectProxy(const Auth::DirectProxy & directProxy) { DARABONBA_PTR_SET_VALUE(directProxy_, directProxy) };
        inline Auth& setDirectProxy(Auth::DirectProxy && directProxy) { DARABONBA_PTR_SET_RVALUE(directProxy_, directProxy) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Auth& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // httpToMcp Field Functions 
        bool hasHttpToMcp() const { return this->httpToMcp_ != nullptr;};
        void deleteHttpToMcp() { this->httpToMcp_ = nullptr;};
        inline const vector<Auth::HttpToMcp> & getHttpToMcp() const { DARABONBA_PTR_GET_CONST(httpToMcp_, vector<Auth::HttpToMcp>) };
        inline vector<Auth::HttpToMcp> getHttpToMcp() { DARABONBA_PTR_GET(httpToMcp_, vector<Auth::HttpToMcp>) };
        inline Auth& setHttpToMcp(const vector<Auth::HttpToMcp> & httpToMcp) { DARABONBA_PTR_SET_VALUE(httpToMcp_, httpToMcp) };
        inline Auth& setHttpToMcp(vector<Auth::HttpToMcp> && httpToMcp) { DARABONBA_PTR_SET_RVALUE(httpToMcp_, httpToMcp) };


      protected:
        // The API key authentication configuration for code-deployed MCP callers.
        shared_ptr<Auth::CodePackage> codePackage_ {};
        // The authentication configuration for direct proxy connections.
        shared_ptr<Auth::DirectProxy> directProxy_ {};
        // Indicates whether the configuration is enabled.
        shared_ptr<bool> enabled_ {};
        // The list of HTTP_TO_MCP authentication configurations.
        shared_ptr<vector<Auth::HttpToMcp>> httpToMcp_ {};
      };

      virtual bool empty() const override { return this->addresses_ == nullptr
        && this->auth_ == nullptr && this->createdAt_ == nullptr && this->customTags_ == nullptr && this->deploymentConfig_ == nullptr && this->description_ == nullptr
        && this->endpoint_ == nullptr && this->functionName_ == nullptr && this->marketSource_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpServerId_ == nullptr
        && this->name_ == nullptr && this->officialTag_ == nullptr && this->protocol_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->swaggerConfig_ == nullptr && this->template_ == nullptr && this->type_ == nullptr && this->updatedAt_ == nullptr && this->url_ == nullptr
        && this->usageActive_ == nullptr; };
      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
      inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
      inline Data& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline Data& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const Data::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Data::Auth) };
      inline Data::Auth getAuth() { DARABONBA_PTR_GET(auth_, Data::Auth) };
      inline Data& setAuth(const Data::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline Data& setAuth(Data::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // customTags Field Functions 
      bool hasCustomTags() const { return this->customTags_ != nullptr;};
      void deleteCustomTags() { this->customTags_ = nullptr;};
      inline const vector<string> & getCustomTags() const { DARABONBA_PTR_GET_CONST(customTags_, vector<string>) };
      inline vector<string> getCustomTags() { DARABONBA_PTR_GET(customTags_, vector<string>) };
      inline Data& setCustomTags(const vector<string> & customTags) { DARABONBA_PTR_SET_VALUE(customTags_, customTags) };
      inline Data& setCustomTags(vector<string> && customTags) { DARABONBA_PTR_SET_RVALUE(customTags_, customTags) };


      // deploymentConfig Field Functions 
      bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
      void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
      inline const Data::DeploymentConfig & getDeploymentConfig() const { DARABONBA_PTR_GET_CONST(deploymentConfig_, Data::DeploymentConfig) };
      inline Data::DeploymentConfig getDeploymentConfig() { DARABONBA_PTR_GET(deploymentConfig_, Data::DeploymentConfig) };
      inline Data& setDeploymentConfig(const Data::DeploymentConfig & deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };
      inline Data& setDeploymentConfig(Data::DeploymentConfig && deploymentConfig) { DARABONBA_PTR_SET_RVALUE(deploymentConfig_, deploymentConfig) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Data& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // marketSource Field Functions 
      bool hasMarketSource() const { return this->marketSource_ != nullptr;};
      void deleteMarketSource() { this->marketSource_ = nullptr;};
      inline const Data::MarketSource & getMarketSource() const { DARABONBA_PTR_GET_CONST(marketSource_, Data::MarketSource) };
      inline Data::MarketSource getMarketSource() { DARABONBA_PTR_GET(marketSource_, Data::MarketSource) };
      inline Data& setMarketSource(const Data::MarketSource & marketSource) { DARABONBA_PTR_SET_VALUE(marketSource_, marketSource) };
      inline Data& setMarketSource(Data::MarketSource && marketSource) { DARABONBA_PTR_SET_RVALUE(marketSource_, marketSource) };


      // mcpServerConfig Field Functions 
      bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
      void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
      inline string getMcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
      inline Data& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline Data& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // officialTag Field Functions 
      bool hasOfficialTag() const { return this->officialTag_ != nullptr;};
      void deleteOfficialTag() { this->officialTag_ = nullptr;};
      inline string getOfficialTag() const { DARABONBA_PTR_GET_DEFAULT(officialTag_, "") };
      inline Data& setOfficialTag(string officialTag) { DARABONBA_PTR_SET_VALUE(officialTag_, officialTag) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // swaggerConfig Field Functions 
      bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
      void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
      inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
      inline Data& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Data::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Data::Template) };
      inline Data::Template getTemplate() { DARABONBA_PTR_GET(template_, Data::Template) };
      inline Data& setTemplate(const Data::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Data& setTemplate(Data::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // usageActive Field Functions 
      bool hasUsageActive() const { return this->usageActive_ != nullptr;};
      void deleteUsageActive() { this->usageActive_ = nullptr;};
      inline bool getUsageActive() const { DARABONBA_PTR_GET_DEFAULT(usageActive_, false) };
      inline Data& setUsageActive(bool usageActive) { DARABONBA_PTR_SET_VALUE(usageActive_, usageActive) };


    protected:
      // The list of MCP service addresses.
      shared_ptr<vector<string>> addresses_ {};
      // The backend authentication configuration. enabled indicates whether authentication is enabled. directProxy specifies the custom authentication header for direct proxy connections. httpToMcp specifies the list of OpenAPI credentials for HTTP_TO_MCP.
      shared_ptr<Data::Auth> auth_ {};
      // The MCP creation time in ISO 8601 UTC format.
      shared_ptr<string> createdAt_ {};
      // The custom tags. Multiple tags are supported.
      shared_ptr<vector<string>> customTags_ {};
      // The deployment configuration for code-deployed MCP.
      shared_ptr<Data::DeploymentConfig> deploymentConfig_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The MCP endpoint that can be called by users or agents. This value is empty before the deployment is complete.
      shared_ptr<string> endpoint_ {};
      // The Function Compute function name that corresponds to the CODE_PACKAGE MCP. This value is empty before the deployment is complete or for other types.
      shared_ptr<string> functionName_ {};
      // The marketplace source template for the MCP.
      shared_ptr<Data::MarketSource> marketSource_ {};
      // The MCP server configuration, represented as a JSON string.
      shared_ptr<string> mcpServerConfig_ {};
      // The MCP server ID.
      shared_ptr<string> mcpServerId_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The official tag managed by the server.
      shared_ptr<string> officialTag_ {};
      // The MCP protocol.
      shared_ptr<string> protocol_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The reason for the current status.
      shared_ptr<string> statusReason_ {};
      // The Swagger configuration.
      shared_ptr<string> swaggerConfig_ {};
      // The template schema of the usage-bound MCP version. Not returned for regular MCPs.
      shared_ptr<Data::Template> template_ {};
      // The type.
      shared_ptr<string> type_ {};
      // The last updated time of the MCP in ISO 8601 UTC format.
      shared_ptr<string> updatedAt_ {};
      // The access URL of the MCP service.
      shared_ptr<string> url_ {};
      // Indicates whether the MCP is still bound by the official template usage constraints.
      shared_ptr<bool> usageActive_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMcpResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMcpResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMcpResponseBody::Data) };
    inline GetMcpResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMcpResponseBody::Data) };
    inline GetMcpResponseBody& setData(const GetMcpResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMcpResponseBody& setData(GetMcpResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMcpResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMcpResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetMcpResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
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
