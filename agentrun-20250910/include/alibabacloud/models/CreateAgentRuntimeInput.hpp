// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CodeConfiguration.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <map>
#include <alibabacloud/models/HealthCheckConfiguration.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
#include <alibabacloud/models/ProtocolConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateAgentRuntimeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRuntimeInput& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(externalAgentEndpointUrl, externalAgentEndpointUrl_);
      DARABONBA_PTR_TO_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRuntimeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(externalAgentEndpointUrl, externalAgentEndpointUrl_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    CreateAgentRuntimeInput() = default ;
    CreateAgentRuntimeInput(const CreateAgentRuntimeInput &) = default ;
    CreateAgentRuntimeInput(CreateAgentRuntimeInput &&) = default ;
    CreateAgentRuntimeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRuntimeInput() = default ;
    CreateAgentRuntimeInput& operator=(const CreateAgentRuntimeInput &) = default ;
    CreateAgentRuntimeInput& operator=(CreateAgentRuntimeInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeName_ == nullptr
        && this->artifactType_ == nullptr && this->codeConfiguration_ == nullptr && this->containerConfiguration_ == nullptr && this->cpu_ == nullptr && this->credentialId_ == nullptr
        && this->credentialName_ == nullptr && this->description_ == nullptr && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->externalAgentEndpointUrl_ == nullptr
        && this->healthCheckConfiguration_ == nullptr && this->logConfiguration_ == nullptr && this->memory_ == nullptr && this->nasConfig_ == nullptr && this->networkConfiguration_ == nullptr
        && this->ossMountConfig_ == nullptr && this->port_ == nullptr && this->protocolConfiguration_ == nullptr && this->resourceGroupId_ == nullptr && this->sessionConcurrencyLimitPerInstance_ == nullptr
        && this->sessionIdleTimeoutSeconds_ == nullptr; };
    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string getAgentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline CreateAgentRuntimeInput& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline CreateAgentRuntimeInput& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // codeConfiguration Field Functions 
    bool hasCodeConfiguration() const { return this->codeConfiguration_ != nullptr;};
    void deleteCodeConfiguration() { this->codeConfiguration_ = nullptr;};
    inline const CodeConfiguration & getCodeConfiguration() const { DARABONBA_PTR_GET_CONST(codeConfiguration_, CodeConfiguration) };
    inline CodeConfiguration getCodeConfiguration() { DARABONBA_PTR_GET(codeConfiguration_, CodeConfiguration) };
    inline CreateAgentRuntimeInput& setCodeConfiguration(const CodeConfiguration & codeConfiguration) { DARABONBA_PTR_SET_VALUE(codeConfiguration_, codeConfiguration) };
    inline CreateAgentRuntimeInput& setCodeConfiguration(CodeConfiguration && codeConfiguration) { DARABONBA_PTR_SET_RVALUE(codeConfiguration_, codeConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline CreateAgentRuntimeInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline CreateAgentRuntimeInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateAgentRuntimeInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreateAgentRuntimeInput& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateAgentRuntimeInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRuntimeInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline CreateAgentRuntimeInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline CreateAgentRuntimeInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateAgentRuntimeInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // externalAgentEndpointUrl Field Functions 
    bool hasExternalAgentEndpointUrl() const { return this->externalAgentEndpointUrl_ != nullptr;};
    void deleteExternalAgentEndpointUrl() { this->externalAgentEndpointUrl_ = nullptr;};
    inline string getExternalAgentEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(externalAgentEndpointUrl_, "") };
    inline CreateAgentRuntimeInput& setExternalAgentEndpointUrl(string externalAgentEndpointUrl) { DARABONBA_PTR_SET_VALUE(externalAgentEndpointUrl_, externalAgentEndpointUrl) };


    // healthCheckConfiguration Field Functions 
    bool hasHealthCheckConfiguration() const { return this->healthCheckConfiguration_ != nullptr;};
    void deleteHealthCheckConfiguration() { this->healthCheckConfiguration_ = nullptr;};
    inline const HealthCheckConfiguration & getHealthCheckConfiguration() const { DARABONBA_PTR_GET_CONST(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline HealthCheckConfiguration getHealthCheckConfiguration() { DARABONBA_PTR_GET(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline CreateAgentRuntimeInput& setHealthCheckConfiguration(const HealthCheckConfiguration & healthCheckConfiguration) { DARABONBA_PTR_SET_VALUE(healthCheckConfiguration_, healthCheckConfiguration) };
    inline CreateAgentRuntimeInput& setHealthCheckConfiguration(HealthCheckConfiguration && healthCheckConfiguration) { DARABONBA_PTR_SET_RVALUE(healthCheckConfiguration_, healthCheckConfiguration) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline CreateAgentRuntimeInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline CreateAgentRuntimeInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateAgentRuntimeInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline CreateAgentRuntimeInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline CreateAgentRuntimeInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateAgentRuntimeInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateAgentRuntimeInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline CreateAgentRuntimeInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline CreateAgentRuntimeInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateAgentRuntimeInput& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolConfiguration Field Functions 
    bool hasProtocolConfiguration() const { return this->protocolConfiguration_ != nullptr;};
    void deleteProtocolConfiguration() { this->protocolConfiguration_ = nullptr;};
    inline const ProtocolConfiguration & getProtocolConfiguration() const { DARABONBA_PTR_GET_CONST(protocolConfiguration_, ProtocolConfiguration) };
    inline ProtocolConfiguration getProtocolConfiguration() { DARABONBA_PTR_GET(protocolConfiguration_, ProtocolConfiguration) };
    inline CreateAgentRuntimeInput& setProtocolConfiguration(const ProtocolConfiguration & protocolConfiguration) { DARABONBA_PTR_SET_VALUE(protocolConfiguration_, protocolConfiguration) };
    inline CreateAgentRuntimeInput& setProtocolConfiguration(ProtocolConfiguration && protocolConfiguration) { DARABONBA_PTR_SET_RVALUE(protocolConfiguration_, protocolConfiguration) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAgentRuntimeInput& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sessionConcurrencyLimitPerInstance Field Functions 
    bool hasSessionConcurrencyLimitPerInstance() const { return this->sessionConcurrencyLimitPerInstance_ != nullptr;};
    void deleteSessionConcurrencyLimitPerInstance() { this->sessionConcurrencyLimitPerInstance_ = nullptr;};
    inline int32_t getSessionConcurrencyLimitPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyLimitPerInstance_, 0) };
    inline CreateAgentRuntimeInput& setSessionConcurrencyLimitPerInstance(int32_t sessionConcurrencyLimitPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyLimitPerInstance_, sessionConcurrencyLimitPerInstance) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline CreateAgentRuntimeInput& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


  protected:
    // 智能体运行时的唯一标识名称，用于区分不同的智能体运行时实例
    // 
    // This parameter is required.
    shared_ptr<string> agentRuntimeName_ {};
    // 指定智能体运行时的部署类型，支持Code（代码模式）和Container（容器模式）
    // 
    // This parameter is required.
    shared_ptr<string> artifactType_ {};
    // 当artifactType为Code时的代码配置信息，包括代码源、入口文件等
    shared_ptr<CodeConfiguration> codeConfiguration_ {};
    // 当artifactType为Container时的容器配置信息，包括镜像地址、启动命令等
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    // 为智能体运行时分配的CPU资源，单位为核数
    // 
    // This parameter is required.
    shared_ptr<float> cpu_ {};
    // 用于访问外部服务的凭证ID，智能体运行时将使用此凭证进行身份验证
    shared_ptr<string> credentialId_ {};
    // 用于访问智能体的凭证名称，访问智能体运行时将使用此凭证进行身份验证
    shared_ptr<string> credentialName_ {};
    // 智能体运行时的描述信息，用于说明该运行时的用途和功能
    shared_ptr<string> description_ {};
    // 智能体运行时的环境变量配置，用于在运行时传递配置参数
    shared_ptr<map<string, string>> environmentVariables_ {};
    // 为智能体运行时提供访问云服务权限的执行角色ARN
    shared_ptr<string> executionRoleArn_ {};
    // 外部注册类型的智能体访问端点地址，用于连接已部署在外部的智能体服务
    shared_ptr<string> externalAgentEndpointUrl_ {};
    // 智能体运行时的健康检查配置，用于监控运行时实例的健康状态
    shared_ptr<HealthCheckConfiguration> healthCheckConfiguration_ {};
    // SLS（简单日志服务）配置
    shared_ptr<LogConfiguration> logConfiguration_ {};
    // 为智能体运行时分配的内存资源，单位为MB
    // 
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    // 文件存储NAS的配置信息，用于挂载NAS文件系统到智能体运行时
    shared_ptr<NASConfig> nasConfig_ {};
    // 智能体运行时的网络配置，包括VPC、安全组等网络访问设置
    // 
    // This parameter is required.
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    // 对象存储OSS的挂载配置信息，用于挂载OSS存储桶到智能体运行时
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    // 智能体运行时监听的端口号，用于接收外部请求
    // 
    // This parameter is required.
    shared_ptr<int32_t> port_ {};
    // 智能体运行时的通信协议配置，定义运行时如何与外部系统交互
    shared_ptr<ProtocolConfiguration> protocolConfiguration_ {};
    shared_ptr<string> resourceGroupId_ {};
    // 每个运行时实例允许的最大并发会话数
    shared_ptr<int32_t> sessionConcurrencyLimitPerInstance_ {};
    // 会话的空闲超时时间，单位为秒。实例没有会话请求后处于空闲状态，空闲态为闲置计费模式，超过此超时时间后会话自动过期，不可继续使用
    shared_ptr<int32_t> sessionIdleTimeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
