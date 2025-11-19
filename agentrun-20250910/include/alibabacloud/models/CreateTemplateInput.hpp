// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ArmsConfiguration.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <alibabacloud/models/CredentialConfiguration.hpp>
#include <map>
#include <alibabacloud/models/LogConfiguration.hpp>
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
  class CreateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_ANY_TO_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_ANY_FROM_JSON(templateConfiguration, templateConfiguration_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
    };
    CreateTemplateInput() = default ;
    CreateTemplateInput(const CreateTemplateInput &) = default ;
    CreateTemplateInput(CreateTemplateInput &&) = default ;
    CreateTemplateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateInput() = default ;
    CreateTemplateInput& operator=(const CreateTemplateInput &) = default ;
    CreateTemplateInput& operator=(CreateTemplateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armsConfiguration_ == nullptr
        && return this->containerConfiguration_ == nullptr && return this->cpu_ == nullptr && return this->credentialConfiguration_ == nullptr && return this->description_ == nullptr && return this->diskSize_ == nullptr
        && return this->environmentVariables_ == nullptr && return this->executionRoleArn_ == nullptr && return this->logConfiguration_ == nullptr && return this->memory_ == nullptr && return this->networkConfiguration_ == nullptr
        && return this->ossConfiguration_ == nullptr && return this->sandboxIdleTimeoutInSeconds_ == nullptr && return this->sandboxTTLInSeconds_ == nullptr && return this->templateConfiguration_ == nullptr && return this->templateName_ == nullptr
        && return this->templateType_ == nullptr; };
    // armsConfiguration Field Functions 
    bool hasArmsConfiguration() const { return this->armsConfiguration_ != nullptr;};
    void deleteArmsConfiguration() { this->armsConfiguration_ = nullptr;};
    inline const ArmsConfiguration & armsConfiguration() const { DARABONBA_PTR_GET_CONST(armsConfiguration_, ArmsConfiguration) };
    inline ArmsConfiguration armsConfiguration() { DARABONBA_PTR_GET(armsConfiguration_, ArmsConfiguration) };
    inline CreateTemplateInput& setArmsConfiguration(const ArmsConfiguration & armsConfiguration) { DARABONBA_PTR_SET_VALUE(armsConfiguration_, armsConfiguration) };
    inline CreateTemplateInput& setArmsConfiguration(ArmsConfiguration && armsConfiguration) { DARABONBA_PTR_SET_RVALUE(armsConfiguration_, armsConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & containerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration containerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline CreateTemplateInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline CreateTemplateInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateTemplateInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialConfiguration Field Functions 
    bool hasCredentialConfiguration() const { return this->credentialConfiguration_ != nullptr;};
    void deleteCredentialConfiguration() { this->credentialConfiguration_ = nullptr;};
    inline const CredentialConfiguration & credentialConfiguration() const { DARABONBA_PTR_GET_CONST(credentialConfiguration_, CredentialConfiguration) };
    inline CredentialConfiguration credentialConfiguration() { DARABONBA_PTR_GET(credentialConfiguration_, CredentialConfiguration) };
    inline CreateTemplateInput& setCredentialConfiguration(const CredentialConfiguration & credentialConfiguration) { DARABONBA_PTR_SET_VALUE(credentialConfiguration_, credentialConfiguration) };
    inline CreateTemplateInput& setCredentialConfiguration(CredentialConfiguration && credentialConfiguration) { DARABONBA_PTR_SET_RVALUE(credentialConfiguration_, credentialConfiguration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateTemplateInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline CreateTemplateInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline CreateTemplateInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateTemplateInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & logConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration logConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline CreateTemplateInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline CreateTemplateInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateTemplateInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateTemplateInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateTemplateInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossConfiguration Field Functions 
    bool hasOssConfiguration() const { return this->ossConfiguration_ != nullptr;};
    void deleteOssConfiguration() { this->ossConfiguration_ = nullptr;};
    inline const vector<OssConfiguration> & ossConfiguration() const { DARABONBA_PTR_GET_CONST(ossConfiguration_, vector<OssConfiguration>) };
    inline vector<OssConfiguration> ossConfiguration() { DARABONBA_PTR_GET(ossConfiguration_, vector<OssConfiguration>) };
    inline CreateTemplateInput& setOssConfiguration(const vector<OssConfiguration> & ossConfiguration) { DARABONBA_PTR_SET_VALUE(ossConfiguration_, ossConfiguration) };
    inline CreateTemplateInput& setOssConfiguration(vector<OssConfiguration> && ossConfiguration) { DARABONBA_PTR_SET_RVALUE(ossConfiguration_, ossConfiguration) };


    // sandboxIdleTimeoutInSeconds Field Functions 
    bool hasSandboxIdleTimeoutInSeconds() const { return this->sandboxIdleTimeoutInSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutInSeconds() { this->sandboxIdleTimeoutInSeconds_ = nullptr;};
    inline int32_t sandboxIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutInSeconds_, 0) };
    inline CreateTemplateInput& setSandboxIdleTimeoutInSeconds(int32_t sandboxIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutInSeconds_, sandboxIdleTimeoutInSeconds) };


    // sandboxTTLInSeconds Field Functions 
    bool hasSandboxTTLInSeconds() const { return this->sandboxTTLInSeconds_ != nullptr;};
    void deleteSandboxTTLInSeconds() { this->sandboxTTLInSeconds_ = nullptr;};
    inline int32_t sandboxTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxTTLInSeconds_, 0) };
    inline CreateTemplateInput& setSandboxTTLInSeconds(int32_t sandboxTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxTTLInSeconds_, sandboxTTLInSeconds) };


    // templateConfiguration Field Functions 
    bool hasTemplateConfiguration() const { return this->templateConfiguration_ != nullptr;};
    void deleteTemplateConfiguration() { this->templateConfiguration_ = nullptr;};
    inline     const Darabonba::Json & templateConfiguration() const { DARABONBA_GET(templateConfiguration_) };
    Darabonba::Json & templateConfiguration() { DARABONBA_GET(templateConfiguration_) };
    inline CreateTemplateInput& setTemplateConfiguration(const Darabonba::Json & templateConfiguration) { DARABONBA_SET_VALUE(templateConfiguration_, templateConfiguration) };
    inline CreateTemplateInput& setTemplateConfiguration(Darabonba::Json & templateConfiguration) { DARABONBA_SET_RVALUE(templateConfiguration_, templateConfiguration) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateInput& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateTemplateInput& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    std::shared_ptr<ArmsConfiguration> armsConfiguration_ = nullptr;
    // 容器配置，只允许基于 Browser/Code Interpreter 基础镜像的 image
    std::shared_ptr<ContainerConfiguration> containerConfiguration_ = nullptr;
    // CPU资源配置（单位：核心）
    // 
    // This parameter is required.
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<CredentialConfiguration> credentialConfiguration_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    std::shared_ptr<LogConfiguration> logConfiguration_ = nullptr;
    // 内存资源配置（单位：MB）
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<vector<OssConfiguration>> ossConfiguration_ = nullptr;
    // 沙箱空闲超时时间（秒）
    std::shared_ptr<int32_t> sandboxIdleTimeoutInSeconds_ = nullptr;
    // 沙箱存活时间（秒）
    std::shared_ptr<int32_t> sandboxTTLInSeconds_ = nullptr;
    // 模板配置（灵活的对象结构，根据 templateType 不同而不同）
    Darabonba::Json templateConfiguration_ = nullptr;
    // 模板名称（要求账号唯一的）
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
