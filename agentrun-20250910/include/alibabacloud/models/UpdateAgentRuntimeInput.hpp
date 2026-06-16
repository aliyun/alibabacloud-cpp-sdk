// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ArmsConfiguration.hpp>
#include <alibabacloud/models/CodeConfiguration.hpp>
#include <alibabacloud/models/ContainerConfiguration.hpp>
#include <map>
#include <alibabacloud/models/HealthCheckConfiguration.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
#include <alibabacloud/models/ProtocolConfiguration.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_TO_JSON(artifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_TO_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_TO_JSON(disableSessionAffinity, disableSessionAffinity_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(edition, edition_);
      DARABONBA_PTR_TO_JSON(enableSessionIsolation, enableSessionIsolation_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(externalAgentEndpointUrl, externalAgentEndpointUrl_);
      DARABONBA_PTR_TO_JSON(forceEvictInstances, forceEvictInstances_);
      DARABONBA_PTR_TO_JSON(headerFieldName, headerFieldName_);
      DARABONBA_PTR_TO_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_TO_JSON(sessionAffinityType, sessionAffinityType_);
      DARABONBA_PTR_TO_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(systemTags, systemTags_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRuntimeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeName, agentRuntimeName_);
      DARABONBA_PTR_FROM_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_FROM_JSON(artifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(codeConfiguration, codeConfiguration_);
      DARABONBA_PTR_FROM_JSON(containerConfiguration, containerConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_FROM_JSON(disableSessionAffinity, disableSessionAffinity_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(edition, edition_);
      DARABONBA_PTR_FROM_JSON(enableSessionIsolation, enableSessionIsolation_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(externalAgentEndpointUrl, externalAgentEndpointUrl_);
      DARABONBA_PTR_FROM_JSON(forceEvictInstances, forceEvictInstances_);
      DARABONBA_PTR_FROM_JSON(headerFieldName, headerFieldName_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfiguration, healthCheckConfiguration_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocolConfiguration, protocolConfiguration_);
      DARABONBA_PTR_FROM_JSON(sessionAffinityType, sessionAffinityType_);
      DARABONBA_PTR_FROM_JSON(sessionConcurrencyLimitPerInstance, sessionConcurrencyLimitPerInstance_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(systemTags, systemTags_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
        && this->armsConfiguration_ == nullptr && this->artifactType_ == nullptr && this->codeConfiguration_ == nullptr && this->containerConfiguration_ == nullptr && this->cpu_ == nullptr
        && this->credentialName_ == nullptr && this->description_ == nullptr && this->disableOndemand_ == nullptr && this->disableSessionAffinity_ == nullptr && this->diskSize_ == nullptr
        && this->edition_ == nullptr && this->enableSessionIsolation_ == nullptr && this->environmentVariables_ == nullptr && this->executionRoleArn_ == nullptr && this->externalAgentEndpointUrl_ == nullptr
        && this->forceEvictInstances_ == nullptr && this->headerFieldName_ == nullptr && this->healthCheckConfiguration_ == nullptr && this->logConfiguration_ == nullptr && this->memory_ == nullptr
        && this->nasConfig_ == nullptr && this->networkConfiguration_ == nullptr && this->ossMountConfig_ == nullptr && this->port_ == nullptr && this->protocolConfiguration_ == nullptr
        && this->sessionAffinityType_ == nullptr && this->sessionConcurrencyLimitPerInstance_ == nullptr && this->sessionIdleTimeoutSeconds_ == nullptr && this->systemTags_ == nullptr && this->workspaceId_ == nullptr; };
    // agentRuntimeName Field Functions 
    bool hasAgentRuntimeName() const { return this->agentRuntimeName_ != nullptr;};
    void deleteAgentRuntimeName() { this->agentRuntimeName_ = nullptr;};
    inline string getAgentRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeName_, "") };
    inline UpdateAgentRuntimeInput& setAgentRuntimeName(string agentRuntimeName) { DARABONBA_PTR_SET_VALUE(agentRuntimeName_, agentRuntimeName) };


    // armsConfiguration Field Functions 
    bool hasArmsConfiguration() const { return this->armsConfiguration_ != nullptr;};
    void deleteArmsConfiguration() { this->armsConfiguration_ = nullptr;};
    inline const ArmsConfiguration & getArmsConfiguration() const { DARABONBA_PTR_GET_CONST(armsConfiguration_, ArmsConfiguration) };
    inline ArmsConfiguration getArmsConfiguration() { DARABONBA_PTR_GET(armsConfiguration_, ArmsConfiguration) };
    inline UpdateAgentRuntimeInput& setArmsConfiguration(const ArmsConfiguration & armsConfiguration) { DARABONBA_PTR_SET_VALUE(armsConfiguration_, armsConfiguration) };
    inline UpdateAgentRuntimeInput& setArmsConfiguration(ArmsConfiguration && armsConfiguration) { DARABONBA_PTR_SET_RVALUE(armsConfiguration_, armsConfiguration) };


    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline UpdateAgentRuntimeInput& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // codeConfiguration Field Functions 
    bool hasCodeConfiguration() const { return this->codeConfiguration_ != nullptr;};
    void deleteCodeConfiguration() { this->codeConfiguration_ = nullptr;};
    inline const CodeConfiguration & getCodeConfiguration() const { DARABONBA_PTR_GET_CONST(codeConfiguration_, CodeConfiguration) };
    inline CodeConfiguration getCodeConfiguration() { DARABONBA_PTR_GET(codeConfiguration_, CodeConfiguration) };
    inline UpdateAgentRuntimeInput& setCodeConfiguration(const CodeConfiguration & codeConfiguration) { DARABONBA_PTR_SET_VALUE(codeConfiguration_, codeConfiguration) };
    inline UpdateAgentRuntimeInput& setCodeConfiguration(CodeConfiguration && codeConfiguration) { DARABONBA_PTR_SET_RVALUE(codeConfiguration_, codeConfiguration) };


    // containerConfiguration Field Functions 
    bool hasContainerConfiguration() const { return this->containerConfiguration_ != nullptr;};
    void deleteContainerConfiguration() { this->containerConfiguration_ = nullptr;};
    inline const ContainerConfiguration & getContainerConfiguration() const { DARABONBA_PTR_GET_CONST(containerConfiguration_, ContainerConfiguration) };
    inline ContainerConfiguration getContainerConfiguration() { DARABONBA_PTR_GET(containerConfiguration_, ContainerConfiguration) };
    inline UpdateAgentRuntimeInput& setContainerConfiguration(const ContainerConfiguration & containerConfiguration) { DARABONBA_PTR_SET_VALUE(containerConfiguration_, containerConfiguration) };
    inline UpdateAgentRuntimeInput& setContainerConfiguration(ContainerConfiguration && containerConfiguration) { DARABONBA_PTR_SET_RVALUE(containerConfiguration_, containerConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateAgentRuntimeInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline UpdateAgentRuntimeInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentRuntimeInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableOndemand Field Functions 
    bool hasDisableOndemand() const { return this->disableOndemand_ != nullptr;};
    void deleteDisableOndemand() { this->disableOndemand_ = nullptr;};
    inline bool getDisableOndemand() const { DARABONBA_PTR_GET_DEFAULT(disableOndemand_, false) };
    inline UpdateAgentRuntimeInput& setDisableOndemand(bool disableOndemand) { DARABONBA_PTR_SET_VALUE(disableOndemand_, disableOndemand) };


    // disableSessionAffinity Field Functions 
    bool hasDisableSessionAffinity() const { return this->disableSessionAffinity_ != nullptr;};
    void deleteDisableSessionAffinity() { this->disableSessionAffinity_ = nullptr;};
    inline bool getDisableSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(disableSessionAffinity_, false) };
    inline UpdateAgentRuntimeInput& setDisableSessionAffinity(bool disableSessionAffinity) { DARABONBA_PTR_SET_VALUE(disableSessionAffinity_, disableSessionAffinity) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline UpdateAgentRuntimeInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UpdateAgentRuntimeInput& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enableSessionIsolation Field Functions 
    bool hasEnableSessionIsolation() const { return this->enableSessionIsolation_ != nullptr;};
    void deleteEnableSessionIsolation() { this->enableSessionIsolation_ = nullptr;};
    inline bool getEnableSessionIsolation() const { DARABONBA_PTR_GET_DEFAULT(enableSessionIsolation_, false) };
    inline UpdateAgentRuntimeInput& setEnableSessionIsolation(bool enableSessionIsolation) { DARABONBA_PTR_SET_VALUE(enableSessionIsolation_, enableSessionIsolation) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateAgentRuntimeInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateAgentRuntimeInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateAgentRuntimeInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // externalAgentEndpointUrl Field Functions 
    bool hasExternalAgentEndpointUrl() const { return this->externalAgentEndpointUrl_ != nullptr;};
    void deleteExternalAgentEndpointUrl() { this->externalAgentEndpointUrl_ = nullptr;};
    inline string getExternalAgentEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(externalAgentEndpointUrl_, "") };
    inline UpdateAgentRuntimeInput& setExternalAgentEndpointUrl(string externalAgentEndpointUrl) { DARABONBA_PTR_SET_VALUE(externalAgentEndpointUrl_, externalAgentEndpointUrl) };


    // forceEvictInstances Field Functions 
    bool hasForceEvictInstances() const { return this->forceEvictInstances_ != nullptr;};
    void deleteForceEvictInstances() { this->forceEvictInstances_ = nullptr;};
    inline bool getForceEvictInstances() const { DARABONBA_PTR_GET_DEFAULT(forceEvictInstances_, false) };
    inline UpdateAgentRuntimeInput& setForceEvictInstances(bool forceEvictInstances) { DARABONBA_PTR_SET_VALUE(forceEvictInstances_, forceEvictInstances) };


    // headerFieldName Field Functions 
    bool hasHeaderFieldName() const { return this->headerFieldName_ != nullptr;};
    void deleteHeaderFieldName() { this->headerFieldName_ = nullptr;};
    inline string getHeaderFieldName() const { DARABONBA_PTR_GET_DEFAULT(headerFieldName_, "") };
    inline UpdateAgentRuntimeInput& setHeaderFieldName(string headerFieldName) { DARABONBA_PTR_SET_VALUE(headerFieldName_, headerFieldName) };


    // healthCheckConfiguration Field Functions 
    bool hasHealthCheckConfiguration() const { return this->healthCheckConfiguration_ != nullptr;};
    void deleteHealthCheckConfiguration() { this->healthCheckConfiguration_ = nullptr;};
    inline const HealthCheckConfiguration & getHealthCheckConfiguration() const { DARABONBA_PTR_GET_CONST(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline HealthCheckConfiguration getHealthCheckConfiguration() { DARABONBA_PTR_GET(healthCheckConfiguration_, HealthCheckConfiguration) };
    inline UpdateAgentRuntimeInput& setHealthCheckConfiguration(const HealthCheckConfiguration & healthCheckConfiguration) { DARABONBA_PTR_SET_VALUE(healthCheckConfiguration_, healthCheckConfiguration) };
    inline UpdateAgentRuntimeInput& setHealthCheckConfiguration(HealthCheckConfiguration && healthCheckConfiguration) { DARABONBA_PTR_SET_RVALUE(healthCheckConfiguration_, healthCheckConfiguration) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateAgentRuntimeInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateAgentRuntimeInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline UpdateAgentRuntimeInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline UpdateAgentRuntimeInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline UpdateAgentRuntimeInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateAgentRuntimeInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateAgentRuntimeInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline UpdateAgentRuntimeInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline UpdateAgentRuntimeInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateAgentRuntimeInput& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocolConfiguration Field Functions 
    bool hasProtocolConfiguration() const { return this->protocolConfiguration_ != nullptr;};
    void deleteProtocolConfiguration() { this->protocolConfiguration_ = nullptr;};
    inline const ProtocolConfiguration & getProtocolConfiguration() const { DARABONBA_PTR_GET_CONST(protocolConfiguration_, ProtocolConfiguration) };
    inline ProtocolConfiguration getProtocolConfiguration() { DARABONBA_PTR_GET(protocolConfiguration_, ProtocolConfiguration) };
    inline UpdateAgentRuntimeInput& setProtocolConfiguration(const ProtocolConfiguration & protocolConfiguration) { DARABONBA_PTR_SET_VALUE(protocolConfiguration_, protocolConfiguration) };
    inline UpdateAgentRuntimeInput& setProtocolConfiguration(ProtocolConfiguration && protocolConfiguration) { DARABONBA_PTR_SET_RVALUE(protocolConfiguration_, protocolConfiguration) };


    // sessionAffinityType Field Functions 
    bool hasSessionAffinityType() const { return this->sessionAffinityType_ != nullptr;};
    void deleteSessionAffinityType() { this->sessionAffinityType_ = nullptr;};
    inline string getSessionAffinityType() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityType_, "") };
    inline UpdateAgentRuntimeInput& setSessionAffinityType(string sessionAffinityType) { DARABONBA_PTR_SET_VALUE(sessionAffinityType_, sessionAffinityType) };


    // sessionConcurrencyLimitPerInstance Field Functions 
    bool hasSessionConcurrencyLimitPerInstance() const { return this->sessionConcurrencyLimitPerInstance_ != nullptr;};
    void deleteSessionConcurrencyLimitPerInstance() { this->sessionConcurrencyLimitPerInstance_ = nullptr;};
    inline int32_t getSessionConcurrencyLimitPerInstance() const { DARABONBA_PTR_GET_DEFAULT(sessionConcurrencyLimitPerInstance_, 0) };
    inline UpdateAgentRuntimeInput& setSessionConcurrencyLimitPerInstance(int32_t sessionConcurrencyLimitPerInstance) { DARABONBA_PTR_SET_VALUE(sessionConcurrencyLimitPerInstance_, sessionConcurrencyLimitPerInstance) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline UpdateAgentRuntimeInput& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


    // systemTags Field Functions 
    bool hasSystemTags() const { return this->systemTags_ != nullptr;};
    void deleteSystemTags() { this->systemTags_ = nullptr;};
    inline const vector<string> & getSystemTags() const { DARABONBA_PTR_GET_CONST(systemTags_, vector<string>) };
    inline vector<string> getSystemTags() { DARABONBA_PTR_GET(systemTags_, vector<string>) };
    inline UpdateAgentRuntimeInput& setSystemTags(const vector<string> & systemTags) { DARABONBA_PTR_SET_VALUE(systemTags_, systemTags) };
    inline UpdateAgentRuntimeInput& setSystemTags(vector<string> && systemTags) { DARABONBA_PTR_SET_RVALUE(systemTags_, systemTags) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateAgentRuntimeInput& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the agent runtime.
    shared_ptr<string> agentRuntimeName_ {};
    // 应用实时监控服务（ARMS）的配置信息
    shared_ptr<ArmsConfiguration> armsConfiguration_ {};
    // The artifact type.
    shared_ptr<string> artifactType_ {};
    // The code configuration.
    shared_ptr<CodeConfiguration> codeConfiguration_ {};
    // The container configuration.
    shared_ptr<ContainerConfiguration> containerConfiguration_ {};
    // The number of CPU cores.
    // 
    // This parameter is required.
    shared_ptr<float> cpu_ {};
    // The name of the credential that the agent runtime uses to authenticate requests.
    shared_ptr<string> credentialName_ {};
    // The description of the agent runtime.
    shared_ptr<string> description_ {};
    // Specifies whether to disable on-demand elasticity. Set to true to disable. Default: false.
    shared_ptr<bool> disableOndemand_ {};
    // Specifies whether to disable session affinity. Set to true to disable. Default: false.
    shared_ptr<bool> disableSessionAffinity_ {};
    // The disk size in gigabytes (GB).
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<string> edition_ {};
    // Specifies whether to enable session isolation. If enabled, each session runs in an isolated environment.
    shared_ptr<bool> enableSessionIsolation_ {};
    // Environment variables for the agent runtime.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The execution role ARN that grants the agent runtime permissions to access cloud services.
    shared_ptr<string> executionRoleArn_ {};
    // The endpoint URL for an externally registered agent. The platform uses this URL to connect to an agent service deployed outside the platform.
    shared_ptr<string> externalAgentEndpointUrl_ {};
    // Specifies whether to perform a best-effort eviction of active Function Compute (FC) sessions when the configuration is updated. This helps the new settings take effect faster.
    shared_ptr<bool> forceEvictInstances_ {};
    // The name of the request header used for session affinity when sessionAffinityType is set to "HEADER_FIELD".
    shared_ptr<string> headerFieldName_ {};
    // The health check configuration for monitoring the health of agent runtime instances.
    shared_ptr<HealthCheckConfiguration> healthCheckConfiguration_ {};
    // The configuration for Simple Log Service (SLS).
    shared_ptr<LogConfiguration> logConfiguration_ {};
    // The amount of memory in megabytes (MB).
    shared_ptr<int32_t> memory_ {};
    // Configuration for mounting a NAS file system to the agent runtime.
    shared_ptr<NASConfig> nasConfig_ {};
    // The network configuration.
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    // Configuration for mounting an OSS bucket to the agent runtime.
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    // The port on which the agent service listens.
    shared_ptr<int32_t> port_ {};
    // The protocol configuration.
    shared_ptr<ProtocolConfiguration> protocolConfiguration_ {};
    // The session affinity mode. Valid values: NONE (disables session affinity), HEADER_FIELD (routes requests based on a request header), and GENERATED_COOKIE (routes requests using a cookie generated by Function Compute (FC)). The value COOKIE is an alias for GENERATED_COOKIE.
    shared_ptr<string> sessionAffinityType_ {};
    // The maximum number of concurrent sessions allowed per runtime instance.
    shared_ptr<int32_t> sessionConcurrencyLimitPerInstance_ {};
    // The idle timeout for a session, in seconds. If an instance remains idle longer than this timeout after receiving no requests, the session expires.
    shared_ptr<int32_t> sessionIdleTimeoutSeconds_ {};
    // The system tags for the agent runtime, used for resource classification and management.
    shared_ptr<vector<string>> systemTags_ {};
    // The ID of the workspace.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
