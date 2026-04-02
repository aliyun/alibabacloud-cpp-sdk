// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOOLINPUTV2_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOOLINPUTV2_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CodeConfiguration.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <map>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/McpConfig.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateToolInputV2 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateToolInputV2& obj) { 
      DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createMethod, createMethod_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(mcpConfig, mcpConfig_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocolSpec, protocolSpec_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateToolInputV2& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createMethod, createMethod_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(mcpConfig, mcpConfig_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocolSpec, protocolSpec_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    UpdateToolInputV2() = default ;
    UpdateToolInputV2(const UpdateToolInputV2 &) = default ;
    UpdateToolInputV2(UpdateToolInputV2 &&) = default ;
    UpdateToolInputV2(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateToolInputV2() = default ;
    UpdateToolInputV2& operator=(const UpdateToolInputV2 &) = default ;
    UpdateToolInputV2& operator=(UpdateToolInputV2 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->codeConfiguration_ == nullptr && this->containerConfiguration_ == nullptr && this->cpu_ == nullptr && this->createMethod_ == nullptr && this->credentialName_ == nullptr
        && this->description_ == nullptr && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->logConfiguration_ == nullptr && this->mcpConfig_ == nullptr
        && this->memory_ == nullptr && this->nasConfig_ == nullptr && this->networkConfiguration_ == nullptr && this->ossMountConfig_ == nullptr && this->port_ == nullptr
        && this->protocolSpec_ == nullptr && this->timeout_ == nullptr && this->workspaceId_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UpdateToolInputV2& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // codeConfiguration Field Functions 
    bool hasCodeConfiguration() const { return this->codeConfiguration_ != nullptr;};
    void deleteCodeConfiguration() { this->codeConfiguration_ = nullptr;};
    inline const CodeConfiguration & getCodeConfiguration() const { DARABONBA_PTR_GET_CONST(codeConfiguration_, CodeConfiguration) };
    inline CodeConfiguration getCodeConfiguration() { DARABONBA_PTR_GET(codeConfiguration_, CodeConfiguration) };
    inline UpdateToolInputV2& setCodeConfiguration(const CodeConfiguration & codeConfiguration) { DARABONBA_PTR_SET_VALUE(codeConfiguration_, codeConfiguration) };
    inline UpdateToolInputV2& setCodeConfiguration(CodeConfiguration && codeConfiguration) { DARABONBA_PTR_SET_RVALUE(codeConfiguration_, codeConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline UpdateToolInputV2& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline UpdateToolInputV2& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateToolInputV2& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createMethod Field Functions 
    bool hasCreateMethod() const { return this->createMethod_ != nullptr;};
    void deleteCreateMethod() { this->createMethod_ = nullptr;};
    inline string getCreateMethod() const { DARABONBA_PTR_GET_DEFAULT(createMethod_, "") };
    inline UpdateToolInputV2& setCreateMethod(string createMethod) { DARABONBA_PTR_SET_VALUE(createMethod_, createMethod) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline UpdateToolInputV2& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateToolInputV2& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateToolInputV2& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateToolInputV2& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateToolInputV2& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateToolInputV2& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateToolInputV2& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // mcpConfig Field Functions 
    bool hasMcpConfig() const { return this->mcpConfig_ != nullptr;};
    void deleteMcpConfig() { this->mcpConfig_ = nullptr;};
    inline const McpConfig & getMcpConfig() const { DARABONBA_PTR_GET_CONST(mcpConfig_, McpConfig) };
    inline McpConfig getMcpConfig() { DARABONBA_PTR_GET(mcpConfig_, McpConfig) };
    inline UpdateToolInputV2& setMcpConfig(const McpConfig & mcpConfig) { DARABONBA_PTR_SET_VALUE(mcpConfig_, mcpConfig) };
    inline UpdateToolInputV2& setMcpConfig(McpConfig && mcpConfig) { DARABONBA_PTR_SET_RVALUE(mcpConfig_, mcpConfig) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline UpdateToolInputV2& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline UpdateToolInputV2& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline UpdateToolInputV2& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateToolInputV2& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateToolInputV2& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline UpdateToolInputV2& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline UpdateToolInputV2& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateToolInputV2& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolSpec Field Functions 
    bool hasProtocolSpec() const { return this->protocolSpec_ != nullptr;};
    void deleteProtocolSpec() { this->protocolSpec_ = nullptr;};
    inline string getProtocolSpec() const { DARABONBA_PTR_GET_DEFAULT(protocolSpec_, "") };
    inline UpdateToolInputV2& setProtocolSpec(string protocolSpec) { DARABONBA_PTR_SET_VALUE(protocolSpec_, protocolSpec) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateToolInputV2& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateToolInputV2& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 更新工具部署的制品类型，支持：Code（代码包）、Container（容器镜像）
    shared_ptr<string> artifactType_ {};
    // 更新代码包类型工具的配置信息
    shared_ptr<CodeConfiguration> codeConfiguration_ {};
    // 更新容器类型工具的配置信息
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    // 更新工具实例的 CPU 核心数，单位为核
    shared_ptr<float> cpu_ {};
    // 更新工具的创建方式。支持：MCP_REMOTE、MCP_LOCAL_STDIO、MCP_BUNDLE、CODE_PACKAGE、OPENAPI_IMPORT
    shared_ptr<string> createMethod_ {};
    // 更新工具使用的凭证名称
    shared_ptr<string> credentialName_ {};
    // 更新工具的描述信息
    shared_ptr<string> description_ {};
    // 更新工具运行时的环境变量配置
    shared_ptr<map<string, string>> environmentVariables_ {};
    // 更新工具执行时使用的 RAM 角色 ARN
    shared_ptr<string> executionRoleArn_ {};
    // 更新工具的日志配置
    shared_ptr<LogConfiguration> logConfiguration_ {};
    // 更新 MCP 工具的配置信息，包括会话亲和性、代理配置等
    shared_ptr<McpConfig> mcpConfig_ {};
    // 更新工具实例的内存大小，单位为 MB
    shared_ptr<int32_t> memory_ {};
    // 更新文件存储 NAS 的配置信息
    shared_ptr<NASConfig> nasConfig_ {};
    // 更新工具的网络配置
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    // 更新对象存储 OSS 的挂载配置
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    // 更新工具服务监听的端口号
    shared_ptr<int32_t> port_ {};
    // 更新工具使用的协议规范定义
    shared_ptr<string> protocolSpec_ {};
    // 更新工具执行的超时时间，单位为秒
    shared_ptr<int32_t> timeout_ {};
    // 更新工具所属的工作空间标识符
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
