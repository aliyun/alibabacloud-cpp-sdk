// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEINPUT_HPP_
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
  class UpdateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(allowAnonymousManage, allowAnonymousManage_);
      DARABONBA_PTR_TO_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_TO_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_TO_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_ANY_TO_JSON(templateConfiguration, templateConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(allowAnonymousManage, allowAnonymousManage_);
      DARABONBA_PTR_FROM_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialConfiguration, credentialConfiguration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossConfiguration, ossConfiguration_);
      DARABONBA_PTR_FROM_JSON(sandboxIdleTimeoutInSeconds, sandboxIdleTimeoutInSeconds_);
      DARABONBA_PTR_FROM_JSON(sandboxTTLInSeconds, sandboxTTLInSeconds_);
      DARABONBA_ANY_FROM_JSON(templateConfiguration, templateConfiguration_);
    };
    UpdateTemplateInput() = default ;
    UpdateTemplateInput(const UpdateTemplateInput &) = default ;
    UpdateTemplateInput(UpdateTemplateInput &&) = default ;
    UpdateTemplateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateInput() = default ;
    UpdateTemplateInput& operator=(const UpdateTemplateInput &) = default ;
    UpdateTemplateInput& operator=(UpdateTemplateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowAnonymousManage_ == nullptr
        && this->armsConfiguration_ == nullptr && this->containerConfiguration_ == nullptr && this->cpu_ == nullptr && this->credentialConfiguration_ == nullptr && this->description_ == nullptr
        && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->logConfiguration_ == nullptr && this->memory_ == nullptr && this->networkConfiguration_ == nullptr
        && this->ossConfiguration_ == nullptr && this->sandboxIdleTimeoutInSeconds_ == nullptr && this->sandboxTTLInSeconds_ == nullptr && this->templateConfiguration_ == nullptr; };
    // allowAnonymousManage Field Functions 
    bool hasAllowAnonymousManage() const { return this->allowAnonymousManage_ != nullptr;};
    void deleteAllowAnonymousManage() { this->allowAnonymousManage_ = nullptr;};
    inline bool getAllowAnonymousManage() const { DARABONBA_PTR_GET_DEFAULT(allowAnonymousManage_, false) };
    inline UpdateTemplateInput& setAllowAnonymousManage(bool allowAnonymousManage) { DARABONBA_PTR_SET_VALUE(allowAnonymousManage_, allowAnonymousManage) };


    // armsConfiguration Field Functions 
    bool hasArmsConfiguration() const { return this->armsConfiguration_ != nullptr;};
    void deleteArmsConfiguration() { this->armsConfiguration_ = nullptr;};
    inline const ArmsConfiguration & getArmsConfiguration() const { DARABONBA_PTR_GET_CONST(armsConfiguration_, ArmsConfiguration) };
    inline ArmsConfiguration getArmsConfiguration() { DARABONBA_PTR_GET(armsConfiguration_, ArmsConfiguration) };
    inline UpdateTemplateInput& setArmsConfiguration(const ArmsConfiguration & armsConfiguration) { DARABONBA_PTR_SET_VALUE(armsConfiguration_, armsConfiguration) };
    inline UpdateTemplateInput& setArmsConfiguration(ArmsConfiguration && armsConfiguration) { DARABONBA_PTR_SET_RVALUE(armsConfiguration_, armsConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline UpdateTemplateInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline UpdateTemplateInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateTemplateInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialConfiguration Field Functions 
    bool hasCredentialConfiguration() const { return this->credentialConfiguration_ != nullptr;};
    void deleteCredentialConfiguration() { this->credentialConfiguration_ = nullptr;};
    inline const CredentialConfiguration & getCredentialConfiguration() const { DARABONBA_PTR_GET_CONST(credentialConfiguration_, CredentialConfiguration) };
    inline CredentialConfiguration getCredentialConfiguration() { DARABONBA_PTR_GET(credentialConfiguration_, CredentialConfiguration) };
    inline UpdateTemplateInput& setCredentialConfiguration(const CredentialConfiguration & credentialConfiguration) { DARABONBA_PTR_SET_VALUE(credentialConfiguration_, credentialConfiguration) };
    inline UpdateTemplateInput& setCredentialConfiguration(CredentialConfiguration && credentialConfiguration) { DARABONBA_PTR_SET_RVALUE(credentialConfiguration_, credentialConfiguration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateTemplateInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateTemplateInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateTemplateInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateTemplateInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateTemplateInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline UpdateTemplateInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateTemplateInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateTemplateInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossConfiguration Field Functions 
    bool hasOssConfiguration() const { return this->ossConfiguration_ != nullptr;};
    void deleteOssConfiguration() { this->ossConfiguration_ = nullptr;};
    inline const vector<OssConfiguration> & getOssConfiguration() const { DARABONBA_PTR_GET_CONST(ossConfiguration_, vector<OssConfiguration>) };
    inline vector<OssConfiguration> getOssConfiguration() { DARABONBA_PTR_GET(ossConfiguration_, vector<OssConfiguration>) };
    inline UpdateTemplateInput& setOssConfiguration(const vector<OssConfiguration> & ossConfiguration) { DARABONBA_PTR_SET_VALUE(ossConfiguration_, ossConfiguration) };
    inline UpdateTemplateInput& setOssConfiguration(vector<OssConfiguration> && ossConfiguration) { DARABONBA_PTR_SET_RVALUE(ossConfiguration_, ossConfiguration) };


    // sandboxIdleTimeoutInSeconds Field Functions 
    bool hasSandboxIdleTimeoutInSeconds() const { return this->sandboxIdleTimeoutInSeconds_ != nullptr;};
    void deleteSandboxIdleTimeoutInSeconds() { this->sandboxIdleTimeoutInSeconds_ = nullptr;};
    inline int32_t getSandboxIdleTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxIdleTimeoutInSeconds_, 0) };
    inline UpdateTemplateInput& setSandboxIdleTimeoutInSeconds(int32_t sandboxIdleTimeoutInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxIdleTimeoutInSeconds_, sandboxIdleTimeoutInSeconds) };


    // sandboxTTLInSeconds Field Functions 
    bool hasSandboxTTLInSeconds() const { return this->sandboxTTLInSeconds_ != nullptr;};
    void deleteSandboxTTLInSeconds() { this->sandboxTTLInSeconds_ = nullptr;};
    inline int32_t getSandboxTTLInSeconds() const { DARABONBA_PTR_GET_DEFAULT(sandboxTTLInSeconds_, 0) };
    inline UpdateTemplateInput& setSandboxTTLInSeconds(int32_t sandboxTTLInSeconds) { DARABONBA_PTR_SET_VALUE(sandboxTTLInSeconds_, sandboxTTLInSeconds) };


    // templateConfiguration Field Functions 
    bool hasTemplateConfiguration() const { return this->templateConfiguration_ != nullptr;};
    void deleteTemplateConfiguration() { this->templateConfiguration_ = nullptr;};
    inline     const Darabonba::Json & getTemplateConfiguration() const { DARABONBA_GET(templateConfiguration_) };
    Darabonba::Json & getTemplateConfiguration() { DARABONBA_GET(templateConfiguration_) };
    inline UpdateTemplateInput& setTemplateConfiguration(const Darabonba::Json & templateConfiguration) { DARABONBA_SET_VALUE(templateConfiguration_, templateConfiguration) };
    inline UpdateTemplateInput& setTemplateConfiguration(Darabonba::Json && templateConfiguration) { DARABONBA_SET_RVALUE(templateConfiguration_, templateConfiguration) };


  protected:
    shared_ptr<bool> allowAnonymousManage_ {};
    shared_ptr<ArmsConfiguration> armsConfiguration_ {};
    // 容器配置（内置的不可改）
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    // CPU资源配置（单位：核心）
    shared_ptr<float> cpu_ {};
    shared_ptr<CredentialConfiguration> credentialConfiguration_ {};
    shared_ptr<string> description_ {};
    shared_ptr<map<string, string>> environmentVariables_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    // 内存资源配置（单位：MB）
    shared_ptr<int32_t> memory_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<vector<OssConfiguration>> ossConfiguration_ {};
    // 沙箱空闲超时时间（秒）
    shared_ptr<int32_t> sandboxIdleTimeoutInSeconds_ {};
    // 沙箱存活时间（秒）
    shared_ptr<int32_t> sandboxTTLInSeconds_ {};
    // 模板配置（灵活的对象结构，根据 templateType 不同而不同）
    Darabonba::Json templateConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
