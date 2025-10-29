// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CodeConfiguration.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <map>
#include <alibabacloud/models/HealthCheckConfiguration.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/ProtocolConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateAgentRuntimeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRuntimeInput& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_TO_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRuntimeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    UpdateAgentRuntimeInput() = default ;
    UpdateAgentRuntimeInput(const UpdateAgentRuntimeInput &) = default ;
    UpdateAgentRuntimeInput(UpdateAgentRuntimeInput &&) = default ;
    UpdateAgentRuntimeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRuntimeInput() = default ;
    UpdateAgentRuntimeInput& operator=(const UpdateAgentRuntimeInput &) = default ;
    UpdateAgentRuntimeInput& operator=(UpdateAgentRuntimeInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeName_ == nullptr
        && return this->artifactType_ == nullptr && return this->codeConfiguration_ == nullptr && return this->containerConfiguration_ == nullptr && return this->cpu_ == nullptr && return this->description_ == nullptr
        && return this->environmentVariables_ == nullptr && return this->executionRoleArn_ == nullptr && return this->healthCheckConfiguration_ == nullptr && return this->logConfiguration_ == nullptr && return this->memory_ == nullptr
        && return this->networkConfiguration_ == nullptr && return this->port_ == nullptr && return this->protocolConfiguration_ == nullptr && return this->sessionConcurrencyLimitPerInstance_ == nullptr && return this->sessionIdleTimeoutSeconds_ == nullptr; };
    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string agentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline UpdateAgentRuntimeInput& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UpdateAgentRuntimeInput& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // codeConfiguration Field Functions 
    bool hasCodeConfiguration() const { return this->codeConfiguration_ != nullptr;};
    void deleteCodeConfiguration() { this->codeConfiguration_ = nullptr;};
    inline const CodeConfiguration & codeConfiguration() const { DARABONBA_PTR_GET_CONST(codeConfiguration_, CodeConfiguration) };
    inline CodeConfiguration codeConfiguration() { DARABONBA_PTR_GET(codeConfiguration_, CodeConfiguration) };
    inline UpdateAgentRuntimeInput& setCodeConfiguration(const CodeConfiguration & codeConfiguration) { DARABONBA_PTR_SET_VALUE(codeConfiguration_, codeConfiguration) };
    inline UpdateAgentRuntimeInput& setCodeConfiguration(CodeConfiguration && codeConfiguration) { DARABONBA_PTR_SET_RVALUE(codeConfiguration_, codeConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & containerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration containerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline UpdateAgentRuntimeInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline UpdateAgentRuntimeInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateAgentRuntimeInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentRuntimeInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateAgentRuntimeInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateAgentRuntimeInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateAgentRuntimeInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // healthCheckConfiguration Field Functions 
    bool hasHealthCheckConfiguration() const { return this->healthCheckConfiguration_ != nullptr;};
    void deleteHealthCheckConfiguration() { this->healthCheckConfiguration_ = nullptr;};
    inline const HealthCheckConfiguration & healthCheckConfiguration() const { DARABONBA_PTR_GET_CONST(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline HealthCheckConfiguration healthCheckConfiguration() { DARABONBA_PTR_GET(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline UpdateAgentRuntimeInput& setHealthCheckConfiguration(const HealthCheckConfiguration & healthCheckConfiguration) { DARABONBA_PTR_SET_VALUE(healthCheckConfiguration_, healthCheckConfiguration) };
    inline UpdateAgentRuntimeInput& setHealthCheckConfiguration(HealthCheckConfiguration && healthCheckConfiguration) { DARABONBA_PTR_SET_RVALUE(healthCheckConfiguration_, healthCheckConfiguration) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & logConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration logConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateAgentRuntimeInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateAgentRuntimeInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline UpdateAgentRuntimeInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateAgentRuntimeInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateAgentRuntimeInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateAgentRuntimeInput& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolConfiguration Field Functions 
    bool hasProtocolConfiguration() const { return this->protocolConfiguration_ != nullptr;};
    void deleteProtocolConfiguration() { this->protocolConfiguration_ = nullptr;};
    inline const ProtocolConfiguration & protocolConfiguration() const { DARABONBA_PTR_GET_CONST(protocolConfiguration_, ProtocolConfiguration) };
    inline ProtocolConfiguration protocolConfiguration() { DARABONBA_PTR_GET(protocolConfiguration_, ProtocolConfiguration) };
    inline UpdateAgentRuntimeInput& setProtocolConfiguration(const ProtocolConfiguration & protocolConfiguration) { DARABONBA_PTR_SET_VALUE(protocolConfiguration_, protocolConfiguration) };
    inline UpdateAgentRuntimeInput& setProtocolConfiguration(ProtocolConfiguration && protocolConfiguration) { DARABONBA_PTR_SET_RVALUE(protocolConfiguration_, protocolConfiguration) };


    // sessionConcurrencyLimitPerInstance Field Functions 
    bool hasSessionConcurrencyLimitPerInstance() const { return this->sessionConcurrencyLimitPerInstance_ != nullptr;};
    void deleteSessionConcurrencyLimitPerInstance() { this->sessionConcurrencyLimitPerInstance_ = nullptr;};
    inline int32_t sessionConcurrencyLimitPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyLimitPerInstance_, 0) };
    inline UpdateAgentRuntimeInput& setSessionConcurrencyLimitPerInstance(int32_t sessionConcurrencyLimitPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyLimitPerInstance_, sessionConcurrencyLimitPerInstance) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t sessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline UpdateAgentRuntimeInput& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


  protected:
    std::shared_ptr<string> agentRuntimeName_ = nullptr;
    std::shared_ptr<string> artifactType_ = nullptr;
    // 当artifactType为Code时的代码配置信息，包括代码源、入口文件等
    std::shared_ptr<CodeConfiguration> codeConfiguration_ = nullptr;
    // 当artifactType为Container时的容器配置信息，包括镜像地址、启动命令等
    std::shared_ptr<ContainerConfiguration> containerConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // 智能体运行时的环境变量配置，用于在运行时传递配置参数
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    // 为智能体运行时提供访问云服务权限的执行角色ARN
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    // 智能体运行时的健康检查配置，用于监控运行时实例的健康状态
    std::shared_ptr<HealthCheckConfiguration> healthCheckConfiguration_ = nullptr;
    // SLS（简单日志服务）配置
    std::shared_ptr<LogConfiguration> logConfiguration_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    // 智能体运行时的网络配置，包括VPC、安全组等网络访问设置
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    // 智能体运行时的通信协议配置，定义运行时如何与外部系统交互
    std::shared_ptr<ProtocolConfiguration> protocolConfiguration_ = nullptr;
    // 每个运行时实例允许的最大并发会话数
    std::shared_ptr<int32_t> sessionConcurrencyLimitPerInstance_ = nullptr;
    // 会话的空闲超时时间，单位为秒。实例没有会话请求后处于空闲状态，空闲态为闲置计费模式，超过此超时时间后会话自动过期，不可继续使用
    std::shared_ptr<int32_t> sessionIdleTimeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
