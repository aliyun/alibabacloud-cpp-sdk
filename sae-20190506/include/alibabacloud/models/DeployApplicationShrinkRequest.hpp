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
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
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
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
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
        && this->labelsShrink_ == nullptr && this->liveness_ == nullptr && this->lokiConfigs_ == nullptr && this->maxSurgeInstanceRatio_ == nullptr && this->maxSurgeInstances_ == nullptr
        && this->memory_ == nullptr && this->microRegistration_ == nullptr && this->microRegistrationConfig_ == nullptr && this->microserviceEngineConfig_ == nullptr && this->minReadyInstanceRatio_ == nullptr
        && this->minReadyInstances_ == nullptr && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->nasConfigs_ == nullptr && this->nasId_ == nullptr
        && this->newSaeVersion_ == nullptr && this->oidcRoleName_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->php_ == nullptr && this->phpArmsConfigLocation_ == nullptr
        && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->pvtzDiscoverySvc_ == nullptr
        && this->python_ == nullptr && this->pythonModules_ == nullptr && this->readiness_ == nullptr && this->replicas_ == nullptr && this->secretMountDesc_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceTags_ == nullptr && this->sidecarContainersConfigShrink_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr
        && this->startupProbe_ == nullptr && this->swimlanePvtzDiscoverySvc_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr
        && this->updateStrategy_ == nullptr && this->vSwitchId_ == nullptr && this->warStartOptions_ == nullptr && this->webContainer_ == nullptr; };
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


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline DeployApplicationShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


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
    // The ARN of the RAM role required to pull images across accounts. For more information, see [Authorize cross-account image pulls using RAM roles](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The Container Registry Enterprise Edition instance ID. Required when **ImageUrl** is from Container Registry Enterprise Edition.
    shared_ptr<string> acrInstanceId_ {};
    // The AliyunAgent version.
    shared_ptr<string> agentVersion_ {};
    // The ALB gateway readiness gate configuration.
    shared_ptr<string> albIngressReadinessGate_ {};
    // The ID of the application to deploy.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Whether to associate an EIP. Values:
    // 
    // - **true**: Associate.
    // 
    // - **false**: Do not associate.
    shared_ptr<bool> associateEip_ {};
    // Whether to automatically enable application Auto Scaling rules. Values:
    // 
    // - **true**: Enable.
    // 
    // - **false**: Disable.
    shared_ptr<bool> autoEnableApplicationScalingRule_ {};
    // The wait time between batches, in seconds.
    shared_ptr<int32_t> batchWaitTime_ {};
    // The description of the release task.
    shared_ptr<string> changeOrderDesc_ {};
    // The startup command for your image. This command must be an executable object inside the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // 
    // In this example, Command="echo" and `CommandArgs=["abc", ">", "file0"]`.
    shared_ptr<string> command_ {};
    // The arguments for the startup command **Command**. Format:
    // 
    // `["a","b"]`
    // 
    // In the earlier example, `CommandArgs=["abc", ">", "file0"]`. The value `["abc", ">", "file0"]` must be converted to a string in JSON array format. Leave this field empty if no arguments are needed.
    shared_ptr<string> commandArgs_ {};
    // The mount description for a **ConfigMap**. Use configuration items created on the namespace configuration page to inject configuration into your container. Parameters:
    // 
    // - **configMapId**: The ID of the ConfigMap instance. Get it by calling the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) API.
    // 
    // - **key**: The key.
    // 
    // > You can mount all keys by passing `sae-sys-configmap-all`.
    // 
    // - **mountPath**: The mount path.
    shared_ptr<string> configMapMountDesc_ {};
    // The CPU required per instance, in milliCPU. Cannot be zero. Supported fixed specifications:
    // 
    // - **500**
    // 
    // - **1000**
    // 
    // - **2000**
    // 
    // - **4000**
    // 
    // - **8000**
    // 
    // - **12000**
    // 
    // - **16000**
    // 
    // - **32000**
    shared_ptr<int32_t> cpu_ {};
    // Custom host mappings inside your container. Values:
    // 
    // - **hostName**: A domain name or hostname.
    // 
    // - **ip**: An IP address.
    shared_ptr<string> customHostAlias_ {};
    // The custom image type. Set to an empty string for non-custom images:
    // 
    // - internet: Public network image
    // 
    // - intranet: Private network image
    shared_ptr<string> customImageNetworkType_ {};
    // This parameter applies only to stopped applications. If you call **DeployApplication** on a running application, it deploys immediately.
    // 
    // - **true**: Default. Deploys immediately, applies the new configuration, and starts instances.
    // 
    // - **false**: Applies the new configuration only. Does not start application instances.
    shared_ptr<string> deploy_ {};
    // The .NET framework version:
    // 
    // - .NET 3.1
    // 
    // - .NET 5.0
    // 
    // - .NET 6.0
    // 
    // - .NET 7.0
    // 
    // - .NET 8.0
    shared_ptr<string> dotnet_ {};
    // The version of the application runtime environment for HSF applications, such as Ali-Tomcat containers.
    shared_ptr<string> edasContainerVersion_ {};
    // The configuration for shared temporary storage.
    shared_ptr<string> emptyDirDesc_ {};
    // Whether to integrate with AHAS. Values:
    // 
    // - **true**: Integrate with AHAS.
    // 
    // - **false**: Do not integrate with AHAS.
    shared_ptr<string> enableAhas_ {};
    // Whether to enable CPU Burst:
    // 
    // - true: Enable.
    // 
    // - false: Do not enable.
    shared_ptr<bool> enableCpuBurst_ {};
    // Whether to enable traffic canary rules. These rules apply only to Spring Cloud and Dubbo applications. Values:
    // 
    // - **true**: Enable canary rules.
    // 
    // - **false**: Disable canary rules.
    shared_ptr<bool> enableGreyTagRoute_ {};
    // Whether to reuse the namespace Agent version configuration.
    shared_ptr<bool> enableNamespaceAgentVersion_ {};
    // Whether to enable the new ARMS feature:
    // 
    // - true: Enable.
    // 
    // - false: Do not enable.
    shared_ptr<bool> enableNewArms_ {};
    // Whether to enable Prometheus custom metric collection.
    shared_ptr<bool> enablePrometheus_ {};
    // Whether to isolate sidecar resources:
    // 
    // - true: Isolate.
    // 
    // - false: Do not isolate.
    shared_ptr<bool> enableSidecarResourceIsolated_ {};
    // The environment variables for your container. You can define custom variables or reference configuration items. To reference a configuration item, first create a ConfigMap instance. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Values:
    // 
    // - Custom configuration
    // 
    //   - **name**: The name of the environment variable.
    // 
    //   - **value**: The value of the environment variable. Takes precedence over valueFrom.
    // 
    // - Reference a configuration item (valueFrom)
    // 
    //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, use `sae-sys-configmap-all-<configmap-name>`, for example `sae-sys-configmap-all-test1`.
    // 
    //   - **valueFrom**: The reference type. Set to `configMapRef`.
    // 
    //   - **configMapId**: The ID of the ConfigMap instance.
    // 
    //   - **key**: The key. Omit this field if you reference all keys.
    // 
    // - Reference a secret (valueFrom)
    // 
    //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, use `sae-sys-secret-all-<secret-name>`, for example `sae-sys-secret-all-test1`.
    // 
    //   - **valueFrom**: The reference type. Set to `secretRef`.
    // 
    //   - **secretId**: The ID of the secret.
    // 
    //   - **key**: The key. Omit this field if you reference all keys.
    shared_ptr<string> envs_ {};
    shared_ptr<string> gpuConfig_ {};
    // The Nginx version:
    // 
    // - nginx 1.20
    // 
    // - nginx 1.22
    // 
    // - nginx 1.24
    // 
    // - nginx 1.26
    // 
    // - nginx 1.28
    shared_ptr<string> html_ {};
    // The ID of the corresponding secret.
    shared_ptr<string> imagePullSecrets_ {};
    // The registry address of your image. Required when **Package Type** is **Image**.
    shared_ptr<string> imageUrl_ {};
    // The initialization container configuration.
    shared_ptr<string> initContainersConfigShrink_ {};
    // Startup arguments for your JAR package. Default startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // Startup options for your JAR package. Default startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The JDK version that your deployment package depends on. Supported versions include the following:
    // 
    // - **Open JDK 8**
    // 
    // - **Open JDK 7**
    // 
    // - **Dragonwell 11**
    // 
    // - **Dragonwell 8**
    // 
    // - **openjdk-8u191-jdk-alpine3.9**
    // 
    // - **openjdk-7u201-jdk-alpine3.9**
    // 
    // This parameter is not supported when **Package Type** is **Image**.
    shared_ptr<string> jdk_ {};
    // The configuration for collecting logs to Kafka. Values:
    // 
    // - **kafkaEndpoint**: The endpoint for the Kafka API.
    // 
    // - **kafkaInstanceId**: The Kafka instance ID.
    // 
    // - **kafkaConfigs**: The configuration for one or more log entries. For examples and details, see the \\*\\*kafkaConfigs\\*\\* request parameter in this topic.
    shared_ptr<string> kafkaConfigs_ {};
    shared_ptr<string> labelsShrink_ {};
    // Health checks for your container. Containers that fail health checks are terminated and restarted. Supported methods:
    // 
    // - **exec**: For example, `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
    // 
    // - **httpGet**: For example, `{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // - **tcpSocket**: For example, `{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // > You can select only one health check method.
    // 
    // Parameters:
    // 
    // - **exec.command**: The health check command.
    // 
    // - **httpGet.path**: The path to access.
    // 
    // - **httpGet.scheme**: **HTTP** or **HTTPS**.
    // 
    // - **httpGet.isContainKeyWord**: **true** means the response contains a keyword. **false** means it does not. If omitted, advanced features are disabled.
    // 
    // - **httpGet.keyWord**: Your custom keyword. Include **isContainKeyWord** when using this field.
    // 
    // - **tcpSocket.port**: The port for TCP connection checks.
    // 
    // - **initialDelaySeconds**: The delay before the first health check, in seconds. Default is 10.
    // 
    // - **periodSeconds**: The interval between health checks, in seconds. Default is 30.
    // 
    // - **timeoutSeconds**: The timeout for each health check, in seconds. Default is 1. If set to 0 or omitted, the default is 1 second.
    shared_ptr<string> liveness_ {};
    shared_ptr<string> lokiConfigs_ {};
    // The maximum number of surge instances as a percentage of total instances. Values:
    // 
    // If the minimum available instances is 100%, the maximum surge cannot be set to 0. If set to -1, the system uses its recommended value: 30% of your current instance count. For example, with 10 instances, 10 × 30% = 3.
    shared_ptr<int32_t> maxSurgeInstanceRatio_ {};
    // The maximum number of surge instances during a rolling update. Values:
    // 
    // If the minimum available instances is 100%, the maximum surge cannot be set to 0. If set to -1, the system uses its recommended value: 30% of your current instance count. For example, with 10 instances, 10 × 30% = 3.
    shared_ptr<int32_t> maxSurgeInstances_ {};
    // The memory required per instance, in MB. Cannot be zero. Memory and CPU are paired. Supported fixed specifications:
    // 
    // - **1024**: Pairs with 500 and 1000 milliCPU.
    // 
    // - **2048**: Pairs with 500, 1000, and 2000 milliCPU.
    // 
    // - **4096**: Pairs with 1000, 2000, and 4000 milliCPU.
    // 
    // - **8192**: Pairs with 2000, 4000, and 8000 milliCPU.
    // 
    // - **12288**: Pairs with 12000 milliCPU.
    // 
    // - **16384**: Pairs with 4000, 8000, and 16000 milliCPU.
    // 
    // - **24576**: Pairs with 12000 milliCPU.
    // 
    // - **32768**: Pairs with 16000 milliCPU.
    // 
    // - **65536**: Pairs with 8000, 16000, and 32000 milliCPU.
    // 
    // - **131072**: Pairs with 32000 milliCPU.
    shared_ptr<int32_t> memory_ {};
    // Select a Nacos registry center. Values:
    // 
    // - **0**: Built-in Nacos in SAE.
    // 
    // - **1**: Self-managed Nacos.
    // 
    // - **2**: MSE Nacos Commercial Edition.
    // 
    // > If you select built-in Nacos in SAE, you cannot retrieve its configuration.
    shared_ptr<string> microRegistration_ {};
    // The registry configuration. Applies only when the registry type is MSE Nacos Enterprise Edition.
    shared_ptr<string> microRegistrationConfig_ {};
    // Configure microservice governance features.
    // 
    // - Enable microservice governance (enable):
    // 
    //   - true: Enable
    // 
    //   - false: Disable
    // 
    // - Configure graceful start and shutdown (mseLosslessRule):
    // 
    //   - delayTime: Delay time
    // 
    //   - enable: Whether to enable graceful start. true enables it. false disables it.
    // 
    //   - notice: Whether to enable notifications. true enables them. false disables them.
    // 
    //   - warmupTime: Warm-up duration for small traffic, in seconds.
    shared_ptr<string> microserviceEngineConfig_ {};
    // The minimum number of available instances as a percentage of total instances. Values:
    // 
    // - **-1**: Use the default value. No percentage is applied.
    // 
    // - **0–100**: Percentage value. Rounded up. For example, if set to **50**% and you have 5 instances, the minimum is 3.
    // 
    // > If both **MinReadyInstances** and **MinReadyInstanceRatio** are provided, and **MinReadyInstanceRatio** is not **-1**, then **MinReadyInstanceRatio** takes precedence. For example, if **MinReadyInstances** is **5** and **MinReadyInstanceRatio** is **50**, the system calculates the minimum based on 50%.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of instances that remain available during a rolling update. Values:
    // 
    // - If set to **0**, your application experiences downtime during updates.
    // 
    // - If set to -1, the system uses its recommended value: 25% of your current instance count. For example, with 5 instances, 5 × 25% = 1.25, rounded up to 2.
    // 
    // > We recommend setting this value to at least 1 to avoid service interruptions.
    shared_ptr<int32_t> minReadyInstances_ {};
    // We recommend using **NasConfigs** instead of this field. The NAS mount description. If your NAS configuration remains unchanged, omit this parameter. To clear your NAS configuration, set this field to an empty string.
    shared_ptr<string> mountDesc_ {};
    // We recommend using **NasConfigs** instead of this field. The mount target of the NAS in your application\\"s VPC. If your NAS configuration remains unchanged, omit this parameter. To clear your NAS configuration, set this field to an empty string.
    shared_ptr<string> mountHost_ {};
    // The configuration for mounting NAS. Values:
    // 
    // - **mountPath**: The mount path in the container.
    // 
    // - **readOnly**: Set to **false** for read and write permissions.
    // 
    // - **nasId**: The NAS ID.
    // 
    // - **mountDomain**: The mount target address. For more information, see [DescribeMountTargets](https://help.aliyun.com/document_detail/62626.html).
    // 
    // - **nasPath**: The relative directory in NAS.
    shared_ptr<string> nasConfigs_ {};
    // We recommend using **NasConfigs** instead of this field. The ID of the NAS file system. If your NAS configuration remains unchanged, omit this parameter. To clear your NAS configuration, set this field to an empty string.
    shared_ptr<string> nasId_ {};
    // The application version:
    // 
    // - lite: Lite Edition
    // 
    // - std: Standard Edition
    // 
    // - pro: Professional Edition
    shared_ptr<string> newSaeVersion_ {};
    // The RAM role for identity authentication.
    // 
    // > Create an OIDC identity provider and an associated role in the same region before using this parameter. For more information, see [Create an OIDC identity provider](https://help.aliyun.com/document_detail/2331022.html) and [Create a role for SSO identity providers](https://help.aliyun.com/document_detail/2331016.html).
    shared_ptr<string> oidcRoleName_ {};
    // The AccessKey ID for OSS read and write operations.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey secret for OSS read and write operations.
    shared_ptr<string> ossAkSecret_ {};
    // The OSS mount description. Parameters:
    // 
    // - **bucketName**: The name of the bucket.
    // 
    // - **bucketPath**: The directory or object in OSS. If the directory does not exist, an error occurs.
    // 
    // - **mountPath**: The path in your SAE container. If the path exists, it is overwritten. If it does not exist, it is created.
    // 
    // - **readOnly**: Whether the container path has read-only access to the mounted resource. Values:
    // 
    //   - **true**: Read-only.
    // 
    //   - **false**: Read and write.
    shared_ptr<string> ossMountDescs_ {};
    // The type of your application package. Values:
    // 
    // - For Java applications: **FatJar**, **War**, and **Image**.
    // 
    // - For PHP applications:
    // 
    //   - **PhpZip**
    // 
    //   - **IMAGE_PHP_5_4**
    // 
    //   - **IMAGE_PHP_5_4_ALPINE**
    // 
    //   - **IMAGE_PHP_5_5**
    // 
    //   - **IMAGE_PHP_5_5_ALPINE**
    // 
    //   - **IMAGE_PHP_5_6**
    // 
    //   - **IMAGE_PHP_5_6_ALPINE**
    // 
    //   - **IMAGE_PHP_7_0**
    // 
    //   - **IMAGE_PHP_7_0_ALPINE**
    // 
    //   - **IMAGE_PHP_7_1**
    // 
    //   - **IMAGE_PHP_7_1_ALPINE**
    // 
    //   - **IMAGE_PHP_7_2**
    // 
    //   - **IMAGE_PHP_7_2_ALPINE**
    // 
    //   - **IMAGE_PHP_7_3**
    // 
    //   - **IMAGE_PHP_7_3_ALPINE**
    // 
    // - For Python applications: **PythonZip** and **Image**.
    shared_ptr<string> packageType_ {};
    // The URL of your deployment package. Required when **Package Type** is **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version number of your deployment package. Required when **Package Type** is **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The PHP version that your PHP deployment package depends on. Not supported for images.
    shared_ptr<string> php_ {};
    // The mount path for PHP application monitoring. Ensure your PHP server loads the configuration file at this path. You do not need to manage the configuration content. SAE renders the correct configuration automatically.
    shared_ptr<string> phpArmsConfigLocation_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path for the PHP startup configuration. Ensure your PHP server uses this configuration file to start.
    shared_ptr<string> phpConfigLocation_ {};
    // A script that runs after your container starts. It executes immediately after the container is created. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> postStart_ {};
    // A script that runs before your container stops. It executes just before the container is deleted. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> preStop_ {};
    // Enable K8s Service registration and discovery. Values:
    // 
    // - **portProtocols**: Port and protocol. Port range is [1,65535]. Protocols supported: **TCP** and **UDP**.
    // 
    // - portAndProtocol: Port and protocol. Port range is [1,65535]. Protocols supported: **TCP** and **UDP**. **portProtocols** takes precedence. If both are set, only **portProtocols** applies.
    // 
    // - **enable**: Enable K8s Service registration and discovery.
    shared_ptr<string> pvtzDiscoverySvc_ {};
    // The Python runtime environment. Supported: **PYTHON 3.9.15**.
    shared_ptr<string> python_ {};
    // Custom module dependencies. By default, dependencies defined in requirements.txt in the root directory are installed. If no configuration or custom packages exist, specify the dependencies to install.
    shared_ptr<string> pythonModules_ {};
    // Startup status checks for your application. Containers that repeatedly fail readiness checks are terminated and restarted. Containers that fail readiness checks receive no SLB traffic. Supports **exec**, **httpGet**, and **tcpSocket**. For examples, see the **Liveness** parameter.
    // 
    // > You can select only one health check method.
    shared_ptr<string> readiness_ {};
    // The number of instances.
    shared_ptr<int32_t> replicas_ {};
    // The mount description for a **Secret**. Use secrets created on the namespace secrets page to inject sensitive information into your container. Parameters:
    // 
    // - **secretId**: The ID of the secret instance. Get it by calling the ListSecrets API.
    // 
    // - **key**: The key.
    // 
    // > You can mount all keys by passing `sae-sys-secret-all`.
    // 
    // - **mountPath**: The mount path.
    shared_ptr<string> secretMountDesc_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The canary tags configured for your application.
    shared_ptr<string> serviceTags_ {};
    // Container configuration information.
    shared_ptr<string> sidecarContainersConfigShrink_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - Using SAE-managed SLS resources: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // 
    // - Using custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // Parameters:
    // 
    // - **projectName**: The name of the SLS project.
    // 
    // - **logDir**: The log file path.
    // 
    // - logType: The log type. **stdout** means standard output logs from the container. Only one **stdout** entry is allowed. If omitted, file logs are collected.
    // 
    // - **logstoreName**: The name of the SLS Logstore.
    // 
    // - **logtailName**: The name of the SLS Logtail. If omitted, a new Logtail is created.
    // 
    // If your SLS collection configuration remains unchanged across deployments, omit this parameter. To disable SLS collection, set this field to an empty string.
    // 
    // > Projects automatically created by SAE are deleted when the application is deleted. Do not select these projects when choosing an existing project.
    shared_ptr<string> slsConfigs_ {};
    // The SLS log tags.
    shared_ptr<string> slsLogEnvTags_ {};
    // Enable application startup probing.
    // 
    // - Success: The application starts successfully. If you configure Liveness and Readiness checks, they run after startup.
    // 
    // - Failure: The application fails to start. SAE reports an error and restarts the container automatically.
    // 
    // > Description
    // >
    // > - Supports exec, httpGet, and tcpSocket. For examples, see the Liveness parameter.
    // >
    // > - You can select only one health check method.
    shared_ptr<string> startupProbe_ {};
    // Configures service discovery and end-to-end canary release based on a Kubernetes Service:
    // 
    // - enable: Specifies whether to enable the end-to-end canary release feature.
    // 
    //   - true: Enables the feature.
    // 
    //   - false: Disables the feature.
    // 
    // - namespaceId: The namespace ID.
    // 
    // - portAndProtocol: The listening port and protocol. The format is {"\\<port>:\\<protocol>":"\\<target_port>"}.
    // 
    // - portProtocols: A list of ports and protocols for the service.
    // 
    //   - port: The port number.
    // 
    //   - protocol: The protocol.
    // 
    //   - targetPort: The container port.
    // 
    // - pvtzDiscoveryName: The service discovery name.
    // 
    // - serviceId: The service ID.
    // 
    // - serviceName: The service name.
    shared_ptr<string> swimlanePvtzDiscoverySvc_ {};
    // The graceful shutdown timeout, in seconds. Default is 30. Valid values: 1–300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The time zone. Default is **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat configuration. Set to an empty string or {} to delete the configuration. Values:
    // 
    // - **port**: Port range is 1024–65535. Ports below 1024 require root privileges. Because containers run with admin privileges, use ports above 1024. Default is 8080.
    // 
    // - **contextPath**: The access path. Default is the root directory /.
    // 
    // - **maxThreads**: The size of the connection pool. Default is 400.
    // 
    // - uriEncoding: The encoding format for Tomcat. Options include **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. Default is **ISO-8859-1**.
    // 
    // - **useBodyEncodingForUri**: Whether to use body encoding for URLs. Default is **true**.
    shared_ptr<string> tomcatConfig_ {};
    // The release strategy. When MinReadyInstances equals 1, set UpdateStrategy to an empty string. When **MinReadyInstances** is greater than 1, examples include the following:
    // 
    // - Canary release with 1 instance, followed by 2 automatic batches with a 1-minute interval: `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`
    // 
    // - Canary release with 1 instance, followed by 2 manual batches: `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`
    // 
    // - Two automatic batches with a 0-minute interval: `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    // 
    // Parameters:
    // 
    // - **type**: The release strategy type. Options are **GrayBatchUpdate** (canary release) or **BatchUpdate** (phased release).
    // 
    // - **batchUpdate**: The phased release strategy.
    // 
    //   - **batch**: The number of batches.
    // 
    //   - **releaseType**: How batches are processed. Options are **auto** (automatic) or **manual** (manual).
    // 
    //   - **batchWaitTime**: The wait time between batches, in minutes.
    // 
    // - **grayUpdate**: The number of canary instances. Required when **type** is **GrayBatchUpdate**.
    shared_ptr<string> updateStrategy_ {};
    // The virtual switch where your application instance elastic network interfaces reside. This switch must be in the specified VPC.
    shared_ptr<string> vSwitchId_ {};
    // The startup command for your WAR package. Configure it the same way as the startup command for images. For more information, see [Set the startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The Tomcat version that your deployment package depends on. Supported versions include the following:
    // 
    // - **apache-tomcat-7.0.91**
    // 
    // - **apache-tomcat-8.5.42**
    // 
    // This parameter is not supported when **Package Type** is **Image**.
    shared_ptr<string> webContainer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
