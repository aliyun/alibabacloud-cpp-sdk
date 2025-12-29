// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeployApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AlbIngressReadinessGate, albIngressReadinessGate_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_TO_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(ChangeOrderDesc, changeOrderDesc_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_TO_JSON(Deploy, deploy_);
      DARABONBA_PTR_TO_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_TO_JSON(EnableGreyTagRoute, enableGreyTagRoute_);
      DARABONBA_PTR_TO_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_TO_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_TO_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_TO_JSON(EnableSidecarResourceIsolated, enableSidecarResourceIsolated_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GpuConfig, gpuConfig_);
      DARABONBA_PTR_TO_JSON(Html, html_);
      DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InitContainersConfig, initContainersConfigShrink_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LokiConfigs, lokiConfigs_);
      DARABONBA_PTR_TO_JSON(MaxSurgeInstanceRatio, maxSurgeInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MaxSurgeInstances, maxSurgeInstances_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_TO_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_TO_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_TO_JSON(MountHost, mountHost_);
      DARABONBA_PTR_TO_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(OidcRoleName, oidcRoleName_);
      DARABONBA_PTR_TO_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_TO_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_TO_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(Php, php_);
      DARABONBA_PTR_TO_JSON(PhpArmsConfigLocation, phpArmsConfigLocation_);
      DARABONBA_PTR_TO_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_TO_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(PvtzDiscoverySvc, pvtzDiscoverySvc_);
      DARABONBA_PTR_TO_JSON(Python, python_);
      DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_TO_JSON(SidecarContainersConfig, sidecarContainersConfigShrink_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(SlsLogEnvTags, slsLogEnvTags_);
      DARABONBA_PTR_TO_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_TO_JSON(SwimlanePvtzDiscoverySvc, swimlanePvtzDiscoverySvc_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_TO_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, DeployApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AlbIngressReadinessGate, albIngressReadinessGate_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_FROM_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderDesc, changeOrderDesc_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_FROM_JSON(Deploy, deploy_);
      DARABONBA_PTR_FROM_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_FROM_JSON(EnableGreyTagRoute, enableGreyTagRoute_);
      DARABONBA_PTR_FROM_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_FROM_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_FROM_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_FROM_JSON(EnableSidecarResourceIsolated, enableSidecarResourceIsolated_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GpuConfig, gpuConfig_);
      DARABONBA_PTR_FROM_JSON(Html, html_);
      DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InitContainersConfig, initContainersConfigShrink_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LokiConfigs, lokiConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxSurgeInstanceRatio, maxSurgeInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MaxSurgeInstances, maxSurgeInstances_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_FROM_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_FROM_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_FROM_JSON(MountHost, mountHost_);
      DARABONBA_PTR_FROM_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(OidcRoleName, oidcRoleName_);
      DARABONBA_PTR_FROM_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_FROM_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_FROM_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(Php, php_);
      DARABONBA_PTR_FROM_JSON(PhpArmsConfigLocation, phpArmsConfigLocation_);
      DARABONBA_PTR_FROM_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_FROM_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(PvtzDiscoverySvc, pvtzDiscoverySvc_);
      DARABONBA_PTR_FROM_JSON(Python, python_);
      DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_FROM_JSON(SidecarContainersConfig, sidecarContainersConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(SlsLogEnvTags, slsLogEnvTags_);
      DARABONBA_PTR_FROM_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_FROM_JSON(SwimlanePvtzDiscoverySvc, swimlanePvtzDiscoverySvc_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    DeployApplicationShrinkRequest() = default ;
    DeployApplicationShrinkRequest(const DeployApplicationShrinkRequest &) = default ;
    DeployApplicationShrinkRequest(DeployApplicationShrinkRequest &&) = default ;
    DeployApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployApplicationShrinkRequest() = default ;
    DeployApplicationShrinkRequest& operator=(const DeployApplicationShrinkRequest &) = default ;
    DeployApplicationShrinkRequest& operator=(DeployApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->agentVersion_ == nullptr && this->albIngressReadinessGate_ == nullptr && this->appId_ == nullptr && this->associateEip_ == nullptr
        && this->autoEnableApplicationScalingRule_ == nullptr && this->batchWaitTime_ == nullptr && this->changeOrderDesc_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr
        && this->configMapMountDesc_ == nullptr && this->cpu_ == nullptr && this->customHostAlias_ == nullptr && this->customImageNetworkType_ == nullptr && this->deploy_ == nullptr
        && this->dotnet_ == nullptr && this->edasContainerVersion_ == nullptr && this->emptyDirDesc_ == nullptr && this->enableAhas_ == nullptr && this->enableCpuBurst_ == nullptr
        && this->enableGreyTagRoute_ == nullptr && this->enableNamespaceAgentVersion_ == nullptr && this->enableNewArms_ == nullptr && this->enablePrometheus_ == nullptr && this->enableSidecarResourceIsolated_ == nullptr
        && this->envs_ == nullptr && this->gpuConfig_ == nullptr && this->html_ == nullptr && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr
        && this->initContainersConfigShrink_ == nullptr && this->jarStartArgs_ == nullptr && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->kafkaConfigs_ == nullptr
        && this->liveness_ == nullptr && this->lokiConfigs_ == nullptr && this->maxSurgeInstanceRatio_ == nullptr && this->maxSurgeInstances_ == nullptr && this->memory_ == nullptr
        && this->microRegistration_ == nullptr && this->microRegistrationConfig_ == nullptr && this->microserviceEngineConfig_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr
        && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->nasConfigs_ == nullptr && this->nasId_ == nullptr && this->newSaeVersion_ == nullptr
        && this->oidcRoleName_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr && this->packageType_ == nullptr
        && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->php_ == nullptr && this->phpArmsConfigLocation_ == nullptr && this->phpConfig_ == nullptr
        && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->pvtzDiscoverySvc_ == nullptr && this->python_ == nullptr
        && this->pythonModules_ == nullptr && this->readiness_ == nullptr && this->replicas_ == nullptr && this->secretMountDesc_ == nullptr && this->securityGroupId_ == nullptr
        && this->serviceTags_ == nullptr && this->sidecarContainersConfigShrink_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr && this->startupProbe_ == nullptr
        && this->swimlanePvtzDiscoverySvc_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->updateStrategy_ == nullptr
        && this->vSwitchId_ == nullptr && this->warStartOptions_ == nullptr && this->webContainer_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline DeployApplicationShrinkRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline DeployApplicationShrinkRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DeployApplicationShrinkRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // albIngressReadinessGate Field Functions 
    bool hasAlbIngressReadinessGate() const { return this->albIngressReadinessGate_ != nullptr;};
    void deleteAlbIngressReadinessGate() { this->albIngressReadinessGate_ = nullptr;};
    inline string getAlbIngressReadinessGate() const { DARABONBA_PTR_GET_DEFAULT(albIngressReadinessGate_, "") };
    inline DeployApplicationShrinkRequest& setAlbIngressReadinessGate(string albIngressReadinessGate) { DARABONBA_PTR_SET_VALUE(albIngressReadinessGate_, albIngressReadinessGate) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeployApplicationShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // associateEip Field Functions 
    bool hasAssociateEip() const { return this->associateEip_ != nullptr;};
    void deleteAssociateEip() { this->associateEip_ = nullptr;};
    inline bool getAssociateEip() const { DARABONBA_PTR_GET_DEFAULT(associateEip_, false) };
    inline DeployApplicationShrinkRequest& setAssociateEip(bool associateEip) { DARABONBA_PTR_SET_VALUE(associateEip_, associateEip) };


    // autoEnableApplicationScalingRule Field Functions 
    bool hasAutoEnableApplicationScalingRule() const { return this->autoEnableApplicationScalingRule_ != nullptr;};
    void deleteAutoEnableApplicationScalingRule() { this->autoEnableApplicationScalingRule_ = nullptr;};
    inline bool getAutoEnableApplicationScalingRule() const { DARABONBA_PTR_GET_DEFAULT(autoEnableApplicationScalingRule_, false) };
    inline DeployApplicationShrinkRequest& setAutoEnableApplicationScalingRule(bool autoEnableApplicationScalingRule) { DARABONBA_PTR_SET_VALUE(autoEnableApplicationScalingRule_, autoEnableApplicationScalingRule) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t getBatchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DeployApplicationShrinkRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // changeOrderDesc Field Functions 
    bool hasChangeOrderDesc() const { return this->changeOrderDesc_ != nullptr;};
    void deleteChangeOrderDesc() { this->changeOrderDesc_ = nullptr;};
    inline string getChangeOrderDesc() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDesc_, "") };
    inline DeployApplicationShrinkRequest& setChangeOrderDesc(string changeOrderDesc) { DARABONBA_PTR_SET_VALUE(changeOrderDesc_, changeOrderDesc) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DeployApplicationShrinkRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline DeployApplicationShrinkRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string getConfigMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline DeployApplicationShrinkRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DeployApplicationShrinkRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline DeployApplicationShrinkRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // customImageNetworkType Field Functions 
    bool hasCustomImageNetworkType() const { return this->customImageNetworkType_ != nullptr;};
    void deleteCustomImageNetworkType() { this->customImageNetworkType_ = nullptr;};
    inline string getCustomImageNetworkType() const { DARABONBA_PTR_GET_DEFAULT(customImageNetworkType_, "") };
    inline DeployApplicationShrinkRequest& setCustomImageNetworkType(string customImageNetworkType) { DARABONBA_PTR_SET_VALUE(customImageNetworkType_, customImageNetworkType) };


    // deploy Field Functions 
    bool hasDeploy() const { return this->deploy_ != nullptr;};
    void deleteDeploy() { this->deploy_ = nullptr;};
    inline string getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, "") };
    inline DeployApplicationShrinkRequest& setDeploy(string deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


    // dotnet Field Functions 
    bool hasDotnet() const { return this->dotnet_ != nullptr;};
    void deleteDotnet() { this->dotnet_ = nullptr;};
    inline string getDotnet() const { DARABONBA_PTR_GET_DEFAULT(dotnet_, "") };
    inline DeployApplicationShrinkRequest& setDotnet(string dotnet) { DARABONBA_PTR_SET_VALUE(dotnet_, dotnet) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DeployApplicationShrinkRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline string getEmptyDirDesc() const { DARABONBA_PTR_GET_DEFAULT(emptyDirDesc_, "") };
    inline DeployApplicationShrinkRequest& setEmptyDirDesc(string emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline string getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, "") };
    inline DeployApplicationShrinkRequest& setEnableAhas(string enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableCpuBurst Field Functions 
    bool hasEnableCpuBurst() const { return this->enableCpuBurst_ != nullptr;};
    void deleteEnableCpuBurst() { this->enableCpuBurst_ = nullptr;};
    inline bool getEnableCpuBurst() const { DARABONBA_PTR_GET_DEFAULT(enableCpuBurst_, false) };
    inline DeployApplicationShrinkRequest& setEnableCpuBurst(bool enableCpuBurst) { DARABONBA_PTR_SET_VALUE(enableCpuBurst_, enableCpuBurst) };


    // enableGreyTagRoute Field Functions 
    bool hasEnableGreyTagRoute() const { return this->enableGreyTagRoute_ != nullptr;};
    void deleteEnableGreyTagRoute() { this->enableGreyTagRoute_ = nullptr;};
    inline bool getEnableGreyTagRoute() const { DARABONBA_PTR_GET_DEFAULT(enableGreyTagRoute_, false) };
    inline DeployApplicationShrinkRequest& setEnableGreyTagRoute(bool enableGreyTagRoute) { DARABONBA_PTR_SET_VALUE(enableGreyTagRoute_, enableGreyTagRoute) };


    // enableNamespaceAgentVersion Field Functions 
    bool hasEnableNamespaceAgentVersion() const { return this->enableNamespaceAgentVersion_ != nullptr;};
    void deleteEnableNamespaceAgentVersion() { this->enableNamespaceAgentVersion_ = nullptr;};
    inline bool getEnableNamespaceAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceAgentVersion_, false) };
    inline DeployApplicationShrinkRequest& setEnableNamespaceAgentVersion(bool enableNamespaceAgentVersion) { DARABONBA_PTR_SET_VALUE(enableNamespaceAgentVersion_, enableNamespaceAgentVersion) };


    // enableNewArms Field Functions 
    bool hasEnableNewArms() const { return this->enableNewArms_ != nullptr;};
    void deleteEnableNewArms() { this->enableNewArms_ = nullptr;};
    inline bool getEnableNewArms() const { DARABONBA_PTR_GET_DEFAULT(enableNewArms_, false) };
    inline DeployApplicationShrinkRequest& setEnableNewArms(bool enableNewArms) { DARABONBA_PTR_SET_VALUE(enableNewArms_, enableNewArms) };


    // enablePrometheus Field Functions 
    bool hasEnablePrometheus() const { return this->enablePrometheus_ != nullptr;};
    void deleteEnablePrometheus() { this->enablePrometheus_ = nullptr;};
    inline bool getEnablePrometheus() const { DARABONBA_PTR_GET_DEFAULT(enablePrometheus_, false) };
    inline DeployApplicationShrinkRequest& setEnablePrometheus(bool enablePrometheus) { DARABONBA_PTR_SET_VALUE(enablePrometheus_, enablePrometheus) };


    // enableSidecarResourceIsolated Field Functions 
    bool hasEnableSidecarResourceIsolated() const { return this->enableSidecarResourceIsolated_ != nullptr;};
    void deleteEnableSidecarResourceIsolated() { this->enableSidecarResourceIsolated_ = nullptr;};
    inline bool getEnableSidecarResourceIsolated() const { DARABONBA_PTR_GET_DEFAULT(enableSidecarResourceIsolated_, false) };
    inline DeployApplicationShrinkRequest& setEnableSidecarResourceIsolated(bool enableSidecarResourceIsolated) { DARABONBA_PTR_SET_VALUE(enableSidecarResourceIsolated_, enableSidecarResourceIsolated) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DeployApplicationShrinkRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline string getGpuConfig() const { DARABONBA_PTR_GET_DEFAULT(gpuConfig_, "") };
    inline DeployApplicationShrinkRequest& setGpuConfig(string gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline DeployApplicationShrinkRequest& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline DeployApplicationShrinkRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DeployApplicationShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainersConfigShrink Field Functions 
    bool hasInitContainersConfigShrink() const { return this->initContainersConfigShrink_ != nullptr;};
    void deleteInitContainersConfigShrink() { this->initContainersConfigShrink_ = nullptr;};
    inline string getInitContainersConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(initContainersConfigShrink_, "") };
    inline DeployApplicationShrinkRequest& setInitContainersConfigShrink(string initContainersConfigShrink) { DARABONBA_PTR_SET_VALUE(initContainersConfigShrink_, initContainersConfigShrink) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline DeployApplicationShrinkRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline DeployApplicationShrinkRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline DeployApplicationShrinkRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // kafkaConfigs Field Functions 
    bool hasKafkaConfigs() const { return this->kafkaConfigs_ != nullptr;};
    void deleteKafkaConfigs() { this->kafkaConfigs_ = nullptr;};
    inline string getKafkaConfigs() const { DARABONBA_PTR_GET_DEFAULT(kafkaConfigs_, "") };
    inline DeployApplicationShrinkRequest& setKafkaConfigs(string kafkaConfigs) { DARABONBA_PTR_SET_VALUE(kafkaConfigs_, kafkaConfigs) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline DeployApplicationShrinkRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // lokiConfigs Field Functions 
    bool hasLokiConfigs() const { return this->lokiConfigs_ != nullptr;};
    void deleteLokiConfigs() { this->lokiConfigs_ = nullptr;};
    inline string getLokiConfigs() const { DARABONBA_PTR_GET_DEFAULT(lokiConfigs_, "") };
    inline DeployApplicationShrinkRequest& setLokiConfigs(string lokiConfigs) { DARABONBA_PTR_SET_VALUE(lokiConfigs_, lokiConfigs) };


    // maxSurgeInstanceRatio Field Functions 
    bool hasMaxSurgeInstanceRatio() const { return this->maxSurgeInstanceRatio_ != nullptr;};
    void deleteMaxSurgeInstanceRatio() { this->maxSurgeInstanceRatio_ = nullptr;};
    inline int32_t getMaxSurgeInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstanceRatio_, 0) };
    inline DeployApplicationShrinkRequest& setMaxSurgeInstanceRatio(int32_t maxSurgeInstanceRatio) { DARABONBA_PTR_SET_VALUE(maxSurgeInstanceRatio_, maxSurgeInstanceRatio) };


    // maxSurgeInstances Field Functions 
    bool hasMaxSurgeInstances() const { return this->maxSurgeInstances_ != nullptr;};
    void deleteMaxSurgeInstances() { this->maxSurgeInstances_ = nullptr;};
    inline int32_t getMaxSurgeInstances() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstances_, 0) };
    inline DeployApplicationShrinkRequest& setMaxSurgeInstances(int32_t maxSurgeInstances) { DARABONBA_PTR_SET_VALUE(maxSurgeInstances_, maxSurgeInstances) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeployApplicationShrinkRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // microRegistration Field Functions 
    bool hasMicroRegistration() const { return this->microRegistration_ != nullptr;};
    void deleteMicroRegistration() { this->microRegistration_ = nullptr;};
    inline string getMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(microRegistration_, "") };
    inline DeployApplicationShrinkRequest& setMicroRegistration(string microRegistration) { DARABONBA_PTR_SET_VALUE(microRegistration_, microRegistration) };


    // microRegistrationConfig Field Functions 
    bool hasMicroRegistrationConfig() const { return this->microRegistrationConfig_ != nullptr;};
    void deleteMicroRegistrationConfig() { this->microRegistrationConfig_ = nullptr;};
    inline string getMicroRegistrationConfig() const { DARABONBA_PTR_GET_DEFAULT(microRegistrationConfig_, "") };
    inline DeployApplicationShrinkRequest& setMicroRegistrationConfig(string microRegistrationConfig) { DARABONBA_PTR_SET_VALUE(microRegistrationConfig_, microRegistrationConfig) };


    // microserviceEngineConfig Field Functions 
    bool hasMicroserviceEngineConfig() const { return this->microserviceEngineConfig_ != nullptr;};
    void deleteMicroserviceEngineConfig() { this->microserviceEngineConfig_ = nullptr;};
    inline string getMicroserviceEngineConfig() const { DARABONBA_PTR_GET_DEFAULT(microserviceEngineConfig_, "") };
    inline DeployApplicationShrinkRequest& setMicroserviceEngineConfig(string microserviceEngineConfig) { DARABONBA_PTR_SET_VALUE(microserviceEngineConfig_, microserviceEngineConfig) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline DeployApplicationShrinkRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline DeployApplicationShrinkRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string getMountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline DeployApplicationShrinkRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline DeployApplicationShrinkRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline DeployApplicationShrinkRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline DeployApplicationShrinkRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline DeployApplicationShrinkRequest& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // oidcRoleName Field Functions 
    bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
    void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
    inline string getOidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
    inline DeployApplicationShrinkRequest& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline DeployApplicationShrinkRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline DeployApplicationShrinkRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string getOssMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline DeployApplicationShrinkRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DeployApplicationShrinkRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline DeployApplicationShrinkRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DeployApplicationShrinkRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // php Field Functions 
    bool hasPhp() const { return this->php_ != nullptr;};
    void deletePhp() { this->php_ = nullptr;};
    inline string getPhp() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
    inline DeployApplicationShrinkRequest& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


    // phpArmsConfigLocation Field Functions 
    bool hasPhpArmsConfigLocation() const { return this->phpArmsConfigLocation_ != nullptr;};
    void deletePhpArmsConfigLocation() { this->phpArmsConfigLocation_ = nullptr;};
    inline string getPhpArmsConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpArmsConfigLocation_, "") };
    inline DeployApplicationShrinkRequest& setPhpArmsConfigLocation(string phpArmsConfigLocation) { DARABONBA_PTR_SET_VALUE(phpArmsConfigLocation_, phpArmsConfigLocation) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline DeployApplicationShrinkRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline DeployApplicationShrinkRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline DeployApplicationShrinkRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DeployApplicationShrinkRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvtzDiscoverySvc Field Functions 
    bool hasPvtzDiscoverySvc() const { return this->pvtzDiscoverySvc_ != nullptr;};
    void deletePvtzDiscoverySvc() { this->pvtzDiscoverySvc_ = nullptr;};
    inline string getPvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(pvtzDiscoverySvc_, "") };
    inline DeployApplicationShrinkRequest& setPvtzDiscoverySvc(string pvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(pvtzDiscoverySvc_, pvtzDiscoverySvc) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline DeployApplicationShrinkRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline DeployApplicationShrinkRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline DeployApplicationShrinkRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline DeployApplicationShrinkRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // secretMountDesc Field Functions 
    bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
    void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
    inline string getSecretMountDesc() const { DARABONBA_PTR_GET_DEFAULT(secretMountDesc_, "") };
    inline DeployApplicationShrinkRequest& setSecretMountDesc(string secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DeployApplicationShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceTags Field Functions 
    bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
    void deleteServiceTags() { this->serviceTags_ = nullptr;};
    inline string getServiceTags() const { DARABONBA_PTR_GET_DEFAULT(serviceTags_, "") };
    inline DeployApplicationShrinkRequest& setServiceTags(string serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };


    // sidecarContainersConfigShrink Field Functions 
    bool hasSidecarContainersConfigShrink() const { return this->sidecarContainersConfigShrink_ != nullptr;};
    void deleteSidecarContainersConfigShrink() { this->sidecarContainersConfigShrink_ = nullptr;};
    inline string getSidecarContainersConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sidecarContainersConfigShrink_, "") };
    inline DeployApplicationShrinkRequest& setSidecarContainersConfigShrink(string sidecarContainersConfigShrink) { DARABONBA_PTR_SET_VALUE(sidecarContainersConfigShrink_, sidecarContainersConfigShrink) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline DeployApplicationShrinkRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // slsLogEnvTags Field Functions 
    bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
    void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
    inline string getSlsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
    inline DeployApplicationShrinkRequest& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline string getStartupProbe() const { DARABONBA_PTR_GET_DEFAULT(startupProbe_, "") };
    inline DeployApplicationShrinkRequest& setStartupProbe(string startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };


    // swimlanePvtzDiscoverySvc Field Functions 
    bool hasSwimlanePvtzDiscoverySvc() const { return this->swimlanePvtzDiscoverySvc_ != nullptr;};
    void deleteSwimlanePvtzDiscoverySvc() { this->swimlanePvtzDiscoverySvc_ = nullptr;};
    inline string getSwimlanePvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(swimlanePvtzDiscoverySvc_, "") };
    inline DeployApplicationShrinkRequest& setSwimlanePvtzDiscoverySvc(string swimlanePvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(swimlanePvtzDiscoverySvc_, swimlanePvtzDiscoverySvc) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline DeployApplicationShrinkRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DeployApplicationShrinkRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline DeployApplicationShrinkRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline DeployApplicationShrinkRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DeployApplicationShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline DeployApplicationShrinkRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline DeployApplicationShrinkRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) required for a RAM role to obtain images across accounts. For more information, see [Grant permissions across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The ID of Container Registry Enterprise Edition instance N. This parameter is required when the **ImageUrl** parameter is set to the URL of an image in an ACR Enterprise Edition instance.
    shared_ptr<string> acrInstanceId_ {};
    shared_ptr<string> agentVersion_ {};
    shared_ptr<string> albIngressReadinessGate_ {};
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to associate an EIP with the node pool. Take note of the following rules:
    // 
    // *   **true**: The EIP is associated with the application instance.
    // *   **false**: The EIP is not associated with the application instance.
    shared_ptr<bool> associateEip_ {};
    // Specifies whether to automatically enable an auto scaling policy for the application. Take note of the following rules:
    // 
    // *   **true**: turns on Logon-free Sharing
    // *   **false**: turns off Logon-free Sharing
    shared_ptr<bool> autoEnableApplicationScalingRule_ {};
    // The interval between batches during a batch release. Unit: minutes.
    shared_ptr<int32_t> batchWaitTime_ {};
    // The description of the change order.
    shared_ptr<string> changeOrderDesc_ {};
    // The command that is used to start the image. The command must be an existing executable object in the container. Sample statements:
    // 
    //     command:
    //           - echo
    //           - abc
    //           - >
    //           - file0
    // 
    // In this example, the Command parameter is set to `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    shared_ptr<string> command_ {};
    // The parameters of the image startup command. The CommandArgs parameter specifies the parameters that are required for the **Command** parameter. You can specify the name in one of the following formats:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, the CommandArgs parameter is set to `CommandArgs=["abc", ">", "file0"]`. The data type of `["abc", ">", "file0"]` must be an array of strings in the JSON format. This parameter is optional.
    shared_ptr<string> commandArgs_ {};
    // The description of the **ConfigMap** instance mounted to the application. Use configurations created on the Configuration Items page to configure containers. The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **congfigMapId**: the ID of the ConfigMap instance. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the ID.
    // *   **key**: the key.
    // 
    // > You can use `sae-sys-configmap-all` to mount all keys.
    // 
    // *   **mountPath**: the mount path in the container.
    shared_ptr<string> configMapMountDesc_ {};
    // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **12000**
    // *   **16000**
    // *   **32000**
    shared_ptr<int32_t> cpu_ {};
    // The custom mappings between hostnames and IP addresses in the container. Take note of the following rules:
    // 
    // *   **hostName**: the domain name or hostname.
    // *   **ip**: the IP address.
    shared_ptr<string> customHostAlias_ {};
    // Custom image type. To it to empty string to use pre-built image.
    // 
    // - internet: Public network image
    // 
    // - intranet: Private network image
    shared_ptr<string> customImageNetworkType_ {};
    // This parameter takes effect only for applications that are in the Stopped state. If you call the **DeployApplication** operation to manage a running application, the application is immediately redeployed.
    // 
    // *   **true** (default): specifies that the system immediately deploys the application, enables new configurations, and pulls application instances.
    // *   **false**: specifies that the system only enables the new configurations.
    shared_ptr<string> deploy_ {};
    // The version of .NET
    // 
    // - .NET 3.1
    // - .NET 5.0
    // - .NET 6.0
    // - .NET 7.0
    // - .NET 8.0
    shared_ptr<string> dotnet_ {};
    // The version of the container, such as Ali-Tomcat, in which an application developed based on High-speed Service Framework (HSF) is deployed.
    shared_ptr<string> edasContainerVersion_ {};
    shared_ptr<string> emptyDirDesc_ {};
    // Indicates whether access to Application High Availability Service (AHAS) is enabled. Take note of the following rules:
    // 
    // *   **true**: Access to AHAS is enabled.
    // *   **false**: Access to AHAS is disabled.
    shared_ptr<string> enableAhas_ {};
    // Enable CPU Burst.
    // 
    // true: enable
    // 
    // false: disable
    shared_ptr<bool> enableCpuBurst_ {};
    // Indicates whether canary release rules are enabled. Canary release rules apply only to applications in Spring Cloud and Dubbo frameworks. Take note of the following rules:
    // 
    // *   **true**: The canary release rules are enabled.
    // *   **false**: The canary release rules are disabled.
    shared_ptr<bool> enableGreyTagRoute_ {};
    shared_ptr<bool> enableNamespaceAgentVersion_ {};
    // Enable new ARMS features.
    // 
    // - true: enable
    // 
    // - false: disable
    shared_ptr<bool> enableNewArms_ {};
    shared_ptr<bool> enablePrometheus_ {};
    // Enable Sidecar resource isolation.
    // 
    // true: enable
    // 
    // false: disable
    shared_ptr<bool> enableSidecarResourceIsolated_ {};
    // The environment variables. You can configure custom environment variables or reference a ConfigMap. If you want to reference a ConfigMap, you must first create a ConfigMap. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Take note of the following rules:
    // 
    // *   Customize
    // 
    //     *   **name**: the name of the environment variable.
    //     *   **value**: the value of the environment variable.
    // 
    // *   Reference ConfigMap
    // 
    //     *   **name**: the name of the environment variable. You can reference one or all keys. If you want to reference all keys, specify `sae-sys-configmap-all-<ConfigMap name>`. Example: `sae-sys-configmap-all-test1`.
    //     *   **valueFrom**: the reference of the environment variable. Set the value to `configMapRef`.
    //     *   **configMapId**: the ConfigMap ID.
    //     *   **key**: the key. If you want to reference all keys, do not configure this parameter.
    // 
    // *   Reference secret dictionary
    // 
    //     *   **name**: the name of the environment variable. You can reference one or all keys. If you want to reference all keys, specify `sae-sys-secret-all-<Secret dictionary name>`. Example: `sae-sys-secret-all-test1`.
    //     *   **valueFrom**: the reference of the environment variable. Set the value to `secretRef`.
    //     *   **secretId**: the secret dictionary ID.
    //     *   **key**: the key. If you want to reference all keys, do not configure this parameter.
    shared_ptr<string> envs_ {};
    shared_ptr<string> gpuConfig_ {};
    shared_ptr<string> html_ {};
    // The ID of the corresponding Secret.
    shared_ptr<string> imagePullSecrets_ {};
    // The URL of the image. This parameter is returned only if the **PackageType** parameter is set to **Image**.
    shared_ptr<string> imageUrl_ {};
    // Initialize container configuration.
    shared_ptr<string> initContainersConfigShrink_ {};
    // The arguments in the JAR package. The arguments are used to start the application container. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
    shared_ptr<string> jarStartArgs_ {};
    // The option settings in the JAR package. The settings are used to start the application container. The default startup command for application deployment is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
    shared_ptr<string> jarStartOptions_ {};
    // The version of the Java development kit (JDK) on which the deployment package of the application depends. The following versions are supported:
    // 
    // *   **Open JDK 8**
    // *   **Open JDK 7**
    // *   **Dragonwell 11**
    // *   **Dragonwell 8**
    // *   **openjdk-8u191-jdk-alpine3.9**
    // *   **openjdk-7u201-jdk-alpine3.9**
    // 
    // This parameter is not returned if the **PackageType** parameter is set to **Image**.
    shared_ptr<string> jdk_ {};
    // The logging configurations of Message Queue for Apache Kafka. Take note of the following rules:
    // 
    // *   **kafkaEndpoint**: the endpoint of the Message Queue for Apache Kafka API.
    // *   **kafkaInstanceId**: the ID of the Message Queue for Apache Kafka instance.
    // *   **kafkaConfigs**: One or more logging configurations of Message Queue for Apache Kafka. For information about sample values and parameters, see the request parameter **KafkaLogfileConfig** in this topic.
    shared_ptr<string> kafkaConfigs_ {};
    // The details of the availability check that was performed on the container. If the container fails this health check multiple times, the system disables and restarts the container. You can use one of the following methods to perform the health check:
    // 
    // *   Example of **exec**: `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
    // *   Sample code of the **httpGet** method: `{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // *   Sample code of the **tcpSocket** method: `{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // > You can use only one method to perform the health check.
    // 
    // The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **exec.command**: the health check command.
    // *   **httpGet.path**: the request path.
    // *   **httpGet.scheme**: the protocol that is used to perform the health check. Valid values: **HTTP** and **HTTPS**.
    // *   **httpGet.isContainKeyWord**: indicates whether the response contains keywords. Valid values: **true** and **false**. If this field is not returned, the advanced settings are not used.
    // *   **httpGet.keyWord**: the custom keyword. This parameter is available only if the **isContainKeyWord** field is returned.
    // *   **tcpSocket.port**: the port that is used to check the status of TCP connections.
    // *   **initialDelaySeconds**: the delay of the health check. Default value: 10. Unit: seconds.
    // *   **periodSeconds**: the interval at which health checks are performed. Default value: 30. Unit: seconds.
    // *   **timeoutSeconds**: the timeout period of the health check. Default value: 1. Unit: seconds. If you set this parameter to 0 or leave this parameter empty, the timeout period is automatically set to 1 second.
    shared_ptr<string> liveness_ {};
    shared_ptr<string> lokiConfigs_ {};
    shared_ptr<int32_t> maxSurgeInstanceRatio_ {};
    shared_ptr<int32_t> maxSurgeInstances_ {};
    // The memory size that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8,000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    shared_ptr<int32_t> memory_ {};
    // The Nacos registry. Valid values:
    // 
    // *   **0**: SAE built-in Nacos registry
    // *   **1**: self-managed Nacos registry
    // *   **2** : MSE Nacos registry
    shared_ptr<string> microRegistration_ {};
    // Select the edition of Nacos.
    // 
    // - 0: SAE built-in Nacos. Unable to get the configuration of SAE built-in Nacos.
    // 
    // - 1: Self-built Nacos from users.
    // 
    // - 2: MSE enterprise Nacos.
    shared_ptr<string> microRegistrationConfig_ {};
    // Configure Microservices Governance
    // 
    // Whether to enable microservices governance (enable):
    // - true: Enable
    // - false: Disable
    // 
    // Configure lossless online/offline deployment (mseLosslessRule):
    // 
    // delayTime: Delay duration (unit: seconds)
    // 
    // enable: Whether to enable lossless deployment
    // 
    // - true: Enable
    // 
    // - false: Disable
    // 
    // notice: Whether to enable notifications
    // 
    // - true: Enable
    // 
    // - false: Disable
    // 
    // warmupTime: Small-traffic warm-up duration (unit: seconds)
    shared_ptr<string> microserviceEngineConfig_ {};
    // The percentage of the minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **-1**, the minimum number of available instances is not determined based on this parameter. Default value: -1.
    // *   If you set the value to a number **from 0 to 100**, the minimum number of available instances is calculated by using the following formula: Current number of instances × (Value of MinReadyInstanceRatio × 100%). The value is the nearest integer rounded up from the calculated result. For example, if the percentage is set to **50**% and five instances are available, the minimum number of available instances is 3.
    // 
    // > When both **MinReadyInstance** and **MinReadyInstanceRatio** are specified and **MinReadyInstanceRatio** is set to a number from 0 to 100, the value of **MinReadyInstanceRatio**** takes precedence. For example, if **MinReadyInstances** is set to **5, and **MinReadyInstanceRatio** is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Current number of instances × **50%**.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of available instances. Special values:
    // 
    // *   If you set the value to **0**, business interruptions occur when the application is updated.
    // *   If you set the value to \\*\\*-1\\*\\*, the minimum number of available instances is automatically set to a system-recommended value. The value is the nearest integer to which the calculated result of the following formula is rounded up: Current number of instances × 25%. For example, if five instances are available, the minimum number of available instances is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // > Make sure that at least one instance is available during application deployment and rollback to prevent business interruptions.
    shared_ptr<int32_t> minReadyInstances_ {};
    // The configurations for mounting the NAS file system. After the application is created, you may want to call other operations to manage the application. If you do not want to change the NAS configurations in these subsequent operations, you can omit the **MountDesc** parameter in the requests. If you want to unmount the NAS file system, you must set the **MountDesc** values in the subsequent requests to an empty string ("").
    shared_ptr<string> mountDesc_ {};
    // The mount target of the NAS file system in the VPC where the application is deployed. If you do not need to modify this configuration during the deployment, configure the **MountHost** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you need to remove this configuration, leave the **MountHost** parameter empty in the request.
    shared_ptr<string> mountHost_ {};
    // The configurations of mounting the NAS file system. Take note of the following rules:
    // 
    // *   **mountPath**: the mount path of the container.
    // *   **readOnly**: If you set the value to **false**, the application has the read and write permissions.
    // *   **nasId**: the ID of the NAS file system.
    // *   **mountDomain**: the domain name of the mount target. For more information, see [DescribeMountTargets](https://help.aliyun.com/document_detail/62626.html).
    // *   **nasPath**: the directory in the NAS file system.
    shared_ptr<string> nasConfigs_ {};
    // The ID of the File Storage NAS file system. After the application is created, you may want to call other operations to manage the application. If you do not want to change the NAS configurations in these subsequent operations, you can omit the **NasId** parameter in the requests. If you want to unmount the NAS file system, you must set the **NasId** values in the subsequent requests to an empty string ("").
    shared_ptr<string> nasId_ {};
    // SAE edition.
    // 
    // - lite: the lightweight edition.
    // 
    // - std: the standard edition.
    // 
    // - pro: the professional edition.
    shared_ptr<string> newSaeVersion_ {};
    // The name of the RAM role used to authenticate the user identity.
    // 
    // >  You need to create an OpenID Connect (OIDC) identity provider (IdP) and an identity provider (IdP) for role-based single sign-on (SSO) in advance. For more information, see [Creates an OpenID Connect (OIDC) identity provider (IdP)](https://help.aliyun.com/document_detail/2331022.html) and [Creates an identity provider (IdP) for role-based single sign-on (SSO)](https://help.aliyun.com/document_detail/2331016.html).
    shared_ptr<string> oidcRoleName_ {};
    // The AccessKey ID that is used to read data from and write data to Object Storage Service (OSS) buckets.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey secret that is used to read data from and write data to OSS buckets.
    shared_ptr<string> ossAkSecret_ {};
    // Information of the Object Storage Service (OSS) bucket mounted to the application. The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **bucketName**: the name of the OSS bucket.
    // 
    // *   **bucketPath**: the directory or object in OSS. If the specified directory or object does not exist, an error is returned.
    // 
    // *   **mountPath**: the directory of the container in SAE. If the path already exists, the newly specified path overwrites the previous one. If the path does not exist, it is created.
    // 
    // *   **readOnly**: specifies whether to only allow the container path to read data from the OSS directory. Valid values:
    // 
    //     *   **true**: The container path only has read permission on the OSS directory.
    //     *   **false**: The application has read and write permissions.
    shared_ptr<string> ossMountDescs_ {};
    // The package type.
    // 
    // When using Java, FatJar, War and Image are supported.
    // When using Python, PythonZip and Image are supported.
    // When using PHP, the followings are supported:
    // - PhpZip
    // - IMAGE_PHP_5_4
    // - IMAGE_PHP_5_4_ALPINE
    // - IMAGE_PHP_5_5
    // - IMAGE_PHP_5_5_ALPINE
    // - IMAGE_PHP_5_6
    // - IMAGE_PHP_5_6_ALPINE
    // - IMAGE_PHP_7_0
    // - IMAGE_PHP_7_0_ALPINE
    // - IMAGE_PHP_7_1
    // - IMAGE_PHP_7_1_ALPINE
    // - IMAGE_PHP_7_2
    // - IMAGE_PHP_7_2_ALPINE
    // - IMAGE_PHP_7_3
    // - IMAGE_PHP_7_3_ALPINE
    shared_ptr<string> packageType_ {};
    // The address of the deployment package. This parameter is required when the **PackageType** parameter is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version of the deployment package. This parameter is required when the **PackageType** parameter is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The dependent PHP version of PHP package. Image is not supported.
    shared_ptr<string> php_ {};
    // The path on which the PHP configuration file for application monitoring is mounted. Make sure that the PHP server loads the configuration file. SAE automatically generates the corresponding configuration file. No manual operations are required.
    shared_ptr<string> phpArmsConfigLocation_ {};
    // The details of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The path on which the PHP configuration file for application startup is mounted. Make sure that the PHP server uses this configuration file during the startup.
    shared_ptr<string> phpConfigLocation_ {};
    // The script that is run immediately after the container is started. Example: `{"exec":{"command":["sh","-c","echo hello"\\]}}`
    shared_ptr<string> postStart_ {};
    // The script that is run before the container is stopped. Example: `{"exec":{"command":["sh","-c","echo hello"\\]}}`
    shared_ptr<string> preStop_ {};
    // The configurations of Kubernetes Service-based service registration and discovery. Take note of the following rules:
    // 
    // *   **serviceName**: the name of the Alibaba Cloud service. Format: `<Custom content>-<Namespace ID>`. `-<Namespace ID>` is automatically specified based on the namespace in which an application resides and cannot be changed. For example, if you select the default namespace in the China (Beijing) region, `-cn-beijing-default` is automatically specified.
    // *   **namespaceId**: the namespace ID.
    // *   **portAndProtocol**: the port number and protocol. Valid values of the port number: 1 to 65535. Valid values of the protocol: **TCP** and **UDP**.
    // *   **enable**: enables the Kubernetes Service-based registration and discovery feature.
    shared_ptr<string> pvtzDiscoverySvc_ {};
    // The Python environment. Set the value to **PYTHON 3.9.15**.
    shared_ptr<string> python_ {};
    // The configurations for installing custom module dependencies. By default, the dependencies defined by the requirements.txt file in the root directory are installed. If the package does not contain this file and you do not configure custom dependencies in the package, specify the dependencies that you want to install in the text box.
    shared_ptr<string> pythonModules_ {};
    // The details of the health check that was performed on the container. If the container fails this health check multiple times, the system disables and restarts the container. Containers that fail health checks cannot receive traffic from Server Load Balancer (SLB) instances. You can use the **exec**, **httpGet**, or **tcpSocket** method to perform health checks. For more information, see the description of the **Liveness** parameter.
    // 
    // > You can use only one method to perform the health check.
    shared_ptr<string> readiness_ {};
    // The number of instances.
    shared_ptr<int32_t> replicas_ {};
    // Secret Mount Description
    // Use the secret dictionaries created in the Namespace Secret Dictionary page to inject information into containers. Parameter descriptions are as follows:
    // 
    // - secretId: Secret instance ID. Obtain via the ListSecrets interface.
    // 
    // - key: Key-value pair. Note: Set the parameter sae-sys-secret-all to mount all keys.
    // 
    // - mountPath: Mount path.
    shared_ptr<string> secretMountDesc_ {};
    // Security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The gray-release tag of the application.
    shared_ptr<string> serviceTags_ {};
    // The configuration of the container.
    shared_ptr<string> sidecarContainersConfigShrink_ {};
    // The logging configurations of Log Service.
    // 
    // *   To use Log Service resources that are automatically created by SAE, set this parameter to `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // *   To use custom Log Service resources, set this parameter to `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **projectName**: the name of the Log Service project.
    // *   **logDir**: the path in which logs are stored.
    // *   **logType**: the log type. **stdout**: the standard output log of the container. You can specify only one stdout value for this parameter. If you leave this parameter empty, file logs are collected.
    // *   **logstoreName**: the name of the Logstore in Log Service.
    // *   **logtailName**: the name of the Logtail configuration in Log Service. If you do not configure this parameter, a new Logtail configuration is created.
    // 
    // If you do not need to modify the logging configurations when you deploy the application, configure the **SlsConfigs** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you no longer need to use Log Service, leave the **SlsConfigs** parameter empty in the request.
    // 
    // > A Log Service project that is automatically created by SAE when you create an application is deleted when the application is deleted. Therefore, when you create an application, you cannot select a Log Service project that is automatically created by SAE for log collection.
    shared_ptr<string> slsConfigs_ {};
    shared_ptr<string> slsLogEnvTags_ {};
    // Check Failure: Indicates that the application failed to start. The system will report the exception and automatically restart it.
    // 
    // Note: 
    // 
    // Supports exec, httpGet, and tcpSocket methods. For specific examples, see Liveness Parameters.
    // Only one method can be selected for health checks.
    shared_ptr<string> startupProbe_ {};
    // Configure K8s Service-based Service Registration/Discovery and Full-Chain Grayscale Capabilities
    // 
    // - enable: Whether to enable full-link grayscale based on K8s Service (set to "true" to enable; set to "false" to disable).
    // 
    // - namespaceId: Namespace ID
    // 
    // - portAndProtocol: Listener port and protocol. Format: {"Port:Protocol Type":"Container Port"}
    // - portProtocols: Define service ports and protocols
    // port: Port
    // protocol: Protocol
    // targetPort: Container port
    // 
    // - pvtzDiscoveryName: Service discovery name
    // 
    // - serviceId: Service ID
    // 
    // - serviceName: Service name
    shared_ptr<string> swimlanePvtzDiscoverySvc_ {};
    // The timeout period for a graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The time zone. Default value: **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat configuration. If you want to cancel this configuration, set this parameter to "" or "{}". The following variables are included in the configuration: Take note of the following rules:
    // 
    // *   **port**: the port number. The port number ranges from 1024 to 65535. Though the admin permissions are configured for the container, the root permissions are required to perform operations on ports whose number is smaller than 1024. Enter a value that ranges from 1025 to 65535 because the container has only the admin permissions. If you do not specify this parameter, the default port number 8080 is used.
    // *   **contextPath**: the path. Default value: /. This value indicates the root directory.
    // *   **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
    // *   **uriEncoding**: the URI encoding scheme in the Tomcat container. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312.************ If you do not specify this parameter, the default value **ISO-8859-1** is used.
    // *   **useBodyEncoding**: specifies whether to use the encoding scheme specified in the request body for URI query parameters. Default value: true.
    shared_ptr<string> tomcatConfig_ {};
    // The deployment policy. If the minimum number of available instances is 1, the value of the **UpdateStrategy** parameter is an empty string (""). If the minimum number of available instances is greater than 1, the following strategies can be configured:
    // 
    // *   The application is deployed on an instance. The remaining instances are automatically classified into two release batches whose interval is set to 1. In this case, the parameter is set to `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`.
    // *   The application is deployed on an instance. The remaining instances are manually classified into two release batches. In this case, the parameter is set to `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`.
    // *   All instances are automatically classified into two release batches. The application is deployed on the instances of the two batches in parallel. In this case, the parameter is set to `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    // 
    // The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **type**: the type of the release policy. Valid values: **GrayBatchUpdate** and **BatchUpdate**.
    // 
    // *   **batchUpdate**: the phased release policy.
    // 
    //     *   **batch**: the number of release batches.
    //     *   **releaseType**: the processing method for the batches. Valid values: **auto** and **manual**.
    //     *   **batchWaitTime**: the interval between release batches. Unit: seconds.
    // 
    // *   **grayUpdate**: the number of release batches in the phased release after a canary release. This parameter is returned only if the **type** parameter is set to **GrayBatchUpdate**.
    shared_ptr<string> updateStrategy_ {};
    // The ID of the vSwitch, where the EIP of the application instances resides. The vSwitch must reside in the VPC above.
    shared_ptr<string> vSwitchId_ {};
    // The startup command of the WAR package. For information about how to configure the startup command, see [Configure startup commands](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The version of the Tomcat container on which the deployment package depends. Valid values:
    // 
    // *   **apache-tomcat-7.0.91**
    // *   **apache-tomcat-8.5.42**
    // 
    // This parameter is not returned if the **PackageType** parameter is set to **Image**.
    shared_ptr<string> webContainer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
