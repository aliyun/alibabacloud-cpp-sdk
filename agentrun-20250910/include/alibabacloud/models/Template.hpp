// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <alibabacloud/models/CredentialConfiguration.hpp>
#include <map>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/OssConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Template : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Template& obj) { 
      DARABONBA_PTR_TO_JSON(allowAnonymousManage, allowAnonymousManage_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(enableAgent, enableAgent_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(mcpOptions, mcpOptions_);
      DARABONBA_PTR_TO_JSON(mcpState, mcpState_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(templateArn, templateArn_);
      DARABONBA_ANY_TO_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, Template& obj) { 
      DARABONBA_PTR_FROM_JSON(allowAnonymousManage, allowAnonymousManage_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(enableAgent, enableAgent_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(mcpOptions, mcpOptions_);
      DARABONBA_PTR_FROM_JSON(mcpState, mcpState_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(templateArn, templateArn_);
      DARABONBA_ANY_FROM_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
      DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
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
    class McpState : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpState& obj) { 
        DARABONBA_PTR_TO_JSON(accessEndpoint, accessEndpoint_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      };
      friend void from_json(const Darabonba::Json& j, McpState& obj) { 
        DARABONBA_PTR_FROM_JSON(accessEndpoint, accessEndpoint_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      };
      McpState() = default ;
      McpState(const McpState &) = default ;
      McpState(McpState &&) = default ;
      McpState(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpState() = default ;
      McpState& operator=(const McpState &) = default ;
      McpState& operator=(McpState &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessEndpoint_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr; };
      // accessEndpoint Field Functions 
      bool hasAccessEndpoint() const { return this->accessEndpoint_ != nullptr;};
      void deleteAccessEndpoint() { this->accessEndpoint_ = nullptr;};
      inline string getAccessEndpoint() const { DARABONBA_PTR_GET_DEFAULT(accessEndpoint_, "") };
      inline McpState& setAccessEndpoint(string accessEndpoint) { DARABONBA_PTR_SET_VALUE(accessEndpoint_, accessEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline McpState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline McpState& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    protected:
      shared_ptr<string> accessEndpoint_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusReason_ {};
    };

    class McpOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpOptions& obj) { 
        DARABONBA_PTR_TO_JSON(enabledTools, enabledTools_);
        DARABONBA_PTR_TO_JSON(transport, transport_);
      };
      friend void from_json(const Darabonba::Json& j, McpOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(enabledTools, enabledTools_);
        DARABONBA_PTR_FROM_JSON(transport, transport_);
      };
      McpOptions() = default ;
      McpOptions(const McpOptions &) = default ;
      McpOptions(McpOptions &&) = default ;
      McpOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpOptions() = default ;
      McpOptions& operator=(const McpOptions &) = default ;
      McpOptions& operator=(McpOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabledTools_ == nullptr
        && this->transport_ == nullptr; };
      // enabledTools Field Functions 
      bool hasEnabledTools() const { return this->enabledTools_ != nullptr;};
      void deleteEnabledTools() { this->enabledTools_ = nullptr;};
      inline const vector<string> & getEnabledTools() const { DARABONBA_PTR_GET_CONST(enabledTools_, vector<string>) };
      inline vector<string> getEnabledTools() { DARABONBA_PTR_GET(enabledTools_, vector<string>) };
      inline McpOptions& setEnabledTools(const vector<string> & enabledTools) { DARABONBA_PTR_SET_VALUE(enabledTools_, enabledTools) };
      inline McpOptions& setEnabledTools(vector<string> && enabledTools) { DARABONBA_PTR_SET_RVALUE(enabledTools_, enabledTools) };


      // transport Field Functions 
      bool hasTransport() const { return this->transport_ != nullptr;};
      void deleteTransport() { this->transport_ = nullptr;};
      inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
      inline McpOptions& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


    protected:
      shared_ptr<vector<string>> enabledTools_ {};
      shared_ptr<string> transport_ {};
    };

    virtual bool empty() const override { return this->allowAnonymousManage_ == nullptr
        && this->containerConfiguration_ == nullptr && this->cpu_ == nullptr && this->createdAt_ == nullptr && this->credentialConfiguration_ == nullptr && this->description_ == nullptr
        && this->diskSize_ == nullptr && this->enableAgent_ == nullptr && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->lastUpdatedAt_ == nullptr
        && this->logConfiguration_ == nullptr && this->mcpOptions_ == nullptr && this->mcpState_ == nullptr && this->memory_ == nullptr && this->nasConfig_ == nullptr
        && this->networkConfiguration_ == nullptr && this->ossConfiguration_ == nullptr && this->resourceName_ == nullptr && this->sandboxIdleTimeoutInSeconds_ == nullptr && this->sandboxTTLInSeconds_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->templateArn_ == nullptr && this->templateConfiguration_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr && this->templateVersion_ == nullptr; };
    // allowAnonymousManage Field Functions 
    bool hasAllowAnonymousManage() const { return this->allowAnonymousManage_ != nullptr;};
    void deleteAllowAnonymousManage() { this->allowAnonymousManage_ = nullptr;};
    inline bool getAllowAnonymousManage() const { DARABONBA_PTR_GET_DEFAULT(allowAnonymousManage_, false) };
    inline Template& setAllowAnonymousManage(bool allowAnonymousManage) { DARABONBA_PTR_SET_VALUE(allowAnonymousManage_, allowAnonymousManage) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline Template& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline Template& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Template& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Template& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialConfiguration Field Functions 
    bool hasCredentialConfiguration() const { return this->credentialConfiguration_ != nullptr;};
    void deleteCredentialConfiguration() { this->credentialConfiguration_ = nullptr;};
    inline const CredentialConfiguration & getCredentialConfiguration() const { DARABONBA_PTR_GET_CONST(credentialConfiguration_, CredentialConfiguration) };
    inline CredentialConfiguration getCredentialConfiguration() { DARABONBA_PTR_GET(credentialConfiguration_, CredentialConfiguration) };
    inline Template& setCredentialConfiguration(const CredentialConfiguration & credentialConfiguration) { DARABONBA_PTR_SET_VALUE(credentialConfiguration_, credentialConfiguration) };
    inline Template& setCredentialConfiguration(CredentialConfiguration && credentialConfiguration) { DARABONBA_PTR_SET_RVALUE(credentialConfiguration_, credentialConfiguration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline Template& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableAgent Field Functions 
    bool hasEnableAgent() const { return this->enableAgent_ != nullptr;};
    void deleteEnableAgent() { this->enableAgent_ = nullptr;};
    inline bool getEnableAgent() const { DARABONBA_PTR_GET_DEFAULT(enableAgent_, false) };
    inline Template& setEnableAgent(bool enableAgent) { DARABONBA_PTR_SET_VALUE(enableAgent_, enableAgent) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline Template& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline Template& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline Template& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline Template& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline Template& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline Template& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // mcpOptions Field Functions 
    bool hasMcpOptions() const { return this->mcpOptions_ != nullptr;};
    void deleteMcpOptions() { this->mcpOptions_ = nullptr;};
    inline const Template::McpOptions & getMcpOptions() const { DARABONBA_PTR_GET_CONST(mcpOptions_, Template::McpOptions) };
    inline Template::McpOptions getMcpOptions() { DARABONBA_PTR_GET(mcpOptions_, Template::McpOptions) };
    inline Template& setMcpOptions(const Template::McpOptions & mcpOptions) { DARABONBA_PTR_SET_VALUE(mcpOptions_, mcpOptions) };
    inline Template& setMcpOptions(Template::McpOptions && mcpOptions) { DARABONBA_PTR_SET_RVALUE(mcpOptions_, mcpOptions) };


    // mcpState Field Functions 
    bool hasMcpState() const { return this->mcpState_ != nullptr;};
    void deleteMcpState() { this->mcpState_ = nullptr;};
    inline const Template::McpState & getMcpState() const { DARABONBA_PTR_GET_CONST(mcpState_, Template::McpState) };
    inline Template::McpState getMcpState() { DARABONBA_PTR_GET(mcpState_, Template::McpState) };
    inline Template& setMcpState(const Template::McpState & mcpState) { DARABONBA_PTR_SET_VALUE(mcpState_, mcpState) };
    inline Template& setMcpState(Template::McpState && mcpState) { DARABONBA_PTR_SET_RVALUE(mcpState_, mcpState) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Template& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline Template& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline Template& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline Template& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline Template& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossConfiguration Field Functions 
    bool hasOssConfiguration() const { return this->ossConfiguration_ != nullptr;};
    void deleteOssConfiguration() { this->ossConfiguration_ = nullptr;};
    inline const vector<OssConfiguration> & getOssConfiguration() const { DARABONBA_PTR_GET_CONST(ossConfiguration_, vector<OssConfiguration>) };
    inline vector<OssConfiguration> getOssConfiguration() { DARABONBA_PTR_GET(ossConfiguration_, vector<OssConfiguration>) };
    inline Template& setOssConfiguration(const vector<OssConfiguration> & ossConfiguration) { DARABONBA_PTR_SET_VALUE(ossConfiguration_, ossConfiguration) };
    inline Template& setOssConfiguration(vector<OssConfiguration> && ossConfiguration) { DARABONBA_PTR_SET_RVALUE(ossConfiguration_, ossConfiguration) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline Template& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // sandboxIdleTimeoutInSeconds Field Functions 
    bool hasSandboxIdleTimeoutInSeconds() const { return this->sandboxIdleTimeoutInSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutInSeconds() { this->sandboxIdleTimeoutInSeconds_ = nullptr;};
    inline string getSandboxIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutInSeconds_, "") };
    inline Template& setSandboxIdleTimeoutInSeconds(string sandboxIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutInSeconds_, sandboxIdleTimeoutInSeconds) };


    // sandboxTTLInSeconds Field Functions 
    bool hasSandboxTTLInSeconds() const { return this->sandboxTTLInSeconds_ != nullptr;};
    void deleteSandboxTTLInSeconds() { this->sandboxTTLInSeconds_ = nullptr;};
    inline string getSandboxTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxTTLInSeconds_, "") };
    inline Template& setSandboxTTLInSeconds(string sandboxTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxTTLInSeconds_, sandboxTTLInSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Template& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline Template& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // templateArn Field Functions 
    bool hasTemplateArn() const { return this->templateArn_ != nullptr;};
    void deleteTemplateArn() { this->templateArn_ = nullptr;};
    inline string getTemplateArn() const { DARABONBA_PTR_GET_DEFAULT(templateArn_, "") };
    inline Template& setTemplateArn(string templateArn) { DARABONBA_PTR_SET_VALUE(templateArn_, templateArn) };


    // templateConfiguration Field Functions 
    bool hasTemplateConfiguration() const { return this->templateConfiguration_ != nullptr;};
    void deleteTemplateConfiguration() { this->templateConfiguration_ = nullptr;};
    inline     const Darabonba::Json & getTemplateConfiguration() const { DARABONBA_GET(templateConfiguration_) };
    Darabonba::Json & getTemplateConfiguration() { DARABONBA_GET(templateConfiguration_) };
    inline Template& setTemplateConfiguration(const Darabonba::Json & templateConfiguration) { DARABONBA_SET_VALUE(templateConfiguration_, templateConfiguration) };
    inline Template& setTemplateConfiguration(Darabonba::Json && templateConfiguration) { DARABONBA_SET_RVALUE(templateConfiguration_, templateConfiguration) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline Template& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline Template& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    shared_ptr<bool> allowAnonymousManage_ {};
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    // This parameter is required.
    shared_ptr<float> cpu_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<CredentialConfiguration> credentialConfiguration_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<bool> enableAgent_ {};
    shared_ptr<map<string, string>> environmentVariables_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<string> lastUpdatedAt_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<Template::McpOptions> mcpOptions_ {};
    shared_ptr<Template::McpState> mcpState_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<vector<OssConfiguration>> ossConfiguration_ {};
    shared_ptr<string> resourceName_ {};
    shared_ptr<string> sandboxIdleTimeoutInSeconds_ {};
    shared_ptr<string> sandboxTTLInSeconds_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> statusReason_ {};
    shared_ptr<string> templateArn_ {};
    Darabonba::Json templateConfiguration_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> templateType_ {};
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
