// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <alibabacloud/models/CredentialConfiguration.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/TemplateMcpOptions.hpp>
#include <alibabacloud/models/TemplateMcpState.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(mcpOptions, mcpOptions_);
      DARABONBA_PTR_TO_JSON(mcpState, mcpState_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(templateArn, templateArn_);
      DARABONBA_PTR_TO_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, Template& obj) { 
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(mcpOptions, mcpOptions_);
      DARABONBA_PTR_FROM_JSON(mcpState, mcpState_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(templateArn, templateArn_);
      DARABONBA_PTR_FROM_JSON(templateConfiguration, templateConfiguration_);
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
    virtual bool empty() const override { return this->containerConfiguration_ == nullptr
        && return this->cpu_ == nullptr && return this->createdAt_ == nullptr && return this->credentialConfiguration_ == nullptr && return this->description_ == nullptr && return this->diskSize_ == nullptr
        && return this->environmentVariables_ == nullptr && return this->executionRoleArn_ == nullptr && return this->lastUpdatedAt_ == nullptr && return this->logConfiguration_ == nullptr && return this->mcpOptions_ == nullptr
        && return this->mcpState_ == nullptr && return this->memory_ == nullptr && return this->networkConfiguration_ == nullptr && return this->ossConfiguration_ == nullptr && return this->resourceName_ == nullptr
        && return this->sandboxIdleTimeoutInSeconds_ == nullptr && return this->sandboxTTLInSeconds_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr && return this->templateArn_ == nullptr
        && return this->templateConfiguration_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateType_ == nullptr && return this->templateVersion_ == nullptr; };
    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & containerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration containerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline Template& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline Template& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Template& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Template& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialConfiguration Field Functions 
    bool hasCredentialConfiguration() const { return this->credentialConfiguration_ != nullptr;};
    void deleteCredentialConfiguration() { this->credentialConfiguration_ = nullptr;};
    inline const CredentialConfiguration & credentialConfiguration() const { DARABONBA_PTR_GET_CONST(credentialConfiguration_, CredentialConfiguration) };
    inline CredentialConfiguration credentialConfiguration() { DARABONBA_PTR_GET(credentialConfiguration_, CredentialConfiguration) };
    inline Template& setCredentialConfiguration(const CredentialConfiguration & credentialConfiguration) { DARABONBA_PTR_SET_VALUE(credentialConfiguration_, credentialConfiguration) };
    inline Template& setCredentialConfiguration(CredentialConfiguration && credentialConfiguration) { DARABONBA_PTR_SET_RVALUE(credentialConfiguration_, credentialConfiguration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline Template& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline string environmentVariables() const { DARABONBA_PTR_GET_DEFAULT(environmentVariables_, "") };
    inline Template& setEnvironmentVariables(string environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline Template& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string lastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline Template& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & logConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration logConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline Template& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline Template& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // mcpOptions Field Functions 
    bool hasMcpOptions() const { return this->mcpOptions_ != nullptr;};
    void deleteMcpOptions() { this->mcpOptions_ = nullptr;};
    inline const TemplateMcpOptions & mcpOptions() const { DARABONBA_PTR_GET_CONST(mcpOptions_, TemplateMcpOptions) };
    inline TemplateMcpOptions mcpOptions() { DARABONBA_PTR_GET(mcpOptions_, TemplateMcpOptions) };
    inline Template& setMcpOptions(const TemplateMcpOptions & mcpOptions) { DARABONBA_PTR_SET_VALUE(mcpOptions_, mcpOptions) };
    inline Template& setMcpOptions(TemplateMcpOptions && mcpOptions) { DARABONBA_PTR_SET_RVALUE(mcpOptions_, mcpOptions) };


    // mcpState Field Functions 
    bool hasMcpState() const { return this->mcpState_ != nullptr;};
    void deleteMcpState() { this->mcpState_ = nullptr;};
    inline const TemplateMcpState & mcpState() const { DARABONBA_PTR_GET_CONST(mcpState_, TemplateMcpState) };
    inline TemplateMcpState mcpState() { DARABONBA_PTR_GET(mcpState_, TemplateMcpState) };
    inline Template& setMcpState(const TemplateMcpState & mcpState) { DARABONBA_PTR_SET_VALUE(mcpState_, mcpState) };
    inline Template& setMcpState(TemplateMcpState && mcpState) { DARABONBA_PTR_SET_RVALUE(mcpState_, mcpState) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Template& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline Template& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline Template& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossConfiguration Field Functions 
    bool hasOssConfiguration() const { return this->ossConfiguration_ != nullptr;};
    void deleteOssConfiguration() { this->ossConfiguration_ = nullptr;};
    inline const vector<OssConfiguration> & ossConfiguration() const { DARABONBA_PTR_GET_CONST(ossConfiguration_, vector<OssConfiguration>) };
    inline vector<OssConfiguration> ossConfiguration() { DARABONBA_PTR_GET(ossConfiguration_, vector<OssConfiguration>) };
    inline Template& setOssConfiguration(const vector<OssConfiguration> & ossConfiguration) { DARABONBA_PTR_SET_VALUE(ossConfiguration_, ossConfiguration) };
    inline Template& setOssConfiguration(vector<OssConfiguration> && ossConfiguration) { DARABONBA_PTR_SET_RVALUE(ossConfiguration_, ossConfiguration) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline Template& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // sandboxIdleTimeoutInSeconds Field Functions 
    bool hasSandboxIdleTimeoutInSeconds() const { return this->sandboxIdleTimeoutInSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutInSeconds() { this->sandboxIdleTimeoutInSeconds_ = nullptr;};
    inline string sandboxIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutInSeconds_, "") };
    inline Template& setSandboxIdleTimeoutInSeconds(string sandboxIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutInSeconds_, sandboxIdleTimeoutInSeconds) };


    // sandboxTTLInSeconds Field Functions 
    bool hasSandboxTTLInSeconds() const { return this->sandboxTTLInSeconds_ != nullptr;};
    void deleteSandboxTTLInSeconds() { this->sandboxTTLInSeconds_ = nullptr;};
    inline string sandboxTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxTTLInSeconds_, "") };
    inline Template& setSandboxTTLInSeconds(string sandboxTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxTTLInSeconds_, sandboxTTLInSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Template& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline Template& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // templateArn Field Functions 
    bool hasTemplateArn() const { return this->templateArn_ != nullptr;};
    void deleteTemplateArn() { this->templateArn_ = nullptr;};
    inline string templateArn() const { DARABONBA_PTR_GET_DEFAULT(templateArn_, "") };
    inline Template& setTemplateArn(string templateArn) { DARABONBA_PTR_SET_VALUE(templateArn_, templateArn) };


    // templateConfiguration Field Functions 
    bool hasTemplateConfiguration() const { return this->templateConfiguration_ != nullptr;};
    void deleteTemplateConfiguration() { this->templateConfiguration_ = nullptr;};
    inline string templateConfiguration() const { DARABONBA_PTR_GET_DEFAULT(templateConfiguration_, "") };
    inline Template& setTemplateConfiguration(string templateConfiguration) { DARABONBA_PTR_SET_VALUE(templateConfiguration_, templateConfiguration) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline Template& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline Template& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    std::shared_ptr<ContainerConfiguration> containerConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<CredentialConfiguration> credentialConfiguration_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<string> environmentVariables_ = nullptr;
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    std::shared_ptr<string> lastUpdatedAt_ = nullptr;
    std::shared_ptr<LogConfiguration> logConfiguration_ = nullptr;
    std::shared_ptr<TemplateMcpOptions> mcpOptions_ = nullptr;
    std::shared_ptr<TemplateMcpState> mcpState_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<vector<OssConfiguration>> ossConfiguration_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> sandboxIdleTimeoutInSeconds_ = nullptr;
    std::shared_ptr<string> sandboxTTLInSeconds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<string> templateArn_ = nullptr;
    std::shared_ptr<string> templateConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> templateType_ = nullptr;
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
