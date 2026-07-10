// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppSource, appSource_);
      DARABONBA_PTR_TO_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_TO_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_TO_JSON(Deploy, deploy_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_TO_JSON(EnableEbpf, enableEbpf_);
      DARABONBA_PTR_TO_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_TO_JSON(EnableNamespaceSlsConfig, enableNamespaceSlsConfig_);
      DARABONBA_PTR_TO_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_TO_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_TO_JSON(EnableSidecarResourceIsolated, enableSidecarResourceIsolated_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GpuConfig, gpuConfig_);
      DARABONBA_PTR_TO_JSON(HeadlessPvtzDiscoverySvc, headlessPvtzDiscoverySvc_);
      DARABONBA_PTR_TO_JSON(Html, html_);
      DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InitContainersConfig, initContainersConfigShrink_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LokiConfigs, lokiConfigs_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_TO_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_TO_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_TO_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_TO_JSON(MountHost, mountHost_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
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
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(PvtzDiscoverySvc, pvtzDiscoverySvc_);
      DARABONBA_PTR_TO_JSON(Python, python_);
      DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_TO_JSON(RaspConfig, raspConfigShrink_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SaeVersion, saeVersion_);
      DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_TO_JSON(SidecarContainersConfig, sidecarContainersConfigShrink_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(SlsLogEnvTags, slsLogEnvTags_);
      DARABONBA_PTR_TO_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppSource, appSource_);
      DARABONBA_PTR_FROM_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_FROM_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_FROM_JSON(Deploy, deploy_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_FROM_JSON(EnableEbpf, enableEbpf_);
      DARABONBA_PTR_FROM_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_FROM_JSON(EnableNamespaceSlsConfig, enableNamespaceSlsConfig_);
      DARABONBA_PTR_FROM_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_FROM_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_FROM_JSON(EnableSidecarResourceIsolated, enableSidecarResourceIsolated_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GpuConfig, gpuConfig_);
      DARABONBA_PTR_FROM_JSON(HeadlessPvtzDiscoverySvc, headlessPvtzDiscoverySvc_);
      DARABONBA_PTR_FROM_JSON(Html, html_);
      DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InitContainersConfig, initContainersConfigShrink_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LokiConfigs, lokiConfigs_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_FROM_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_FROM_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_FROM_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_FROM_JSON(MountHost, mountHost_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
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
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(PvtzDiscoverySvc, pvtzDiscoverySvc_);
      DARABONBA_PTR_FROM_JSON(Python, python_);
      DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_FROM_JSON(RaspConfig, raspConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SaeVersion, saeVersion_);
      DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_FROM_JSON(SidecarContainersConfig, sidecarContainersConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(SlsLogEnvTags, slsLogEnvTags_);
      DARABONBA_PTR_FROM_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest(CreateApplicationShrinkRequest &&) = default ;
    CreateApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest& operator=(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest& operator=(CreateApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->agentVersion_ == nullptr && this->appDescription_ == nullptr && this->appName_ == nullptr && this->appSource_ == nullptr
        && this->associateEip_ == nullptr && this->autoConfig_ == nullptr && this->baseAppId_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr
        && this->configMapMountDesc_ == nullptr && this->cpu_ == nullptr && this->customHostAlias_ == nullptr && this->customImageNetworkType_ == nullptr && this->deploy_ == nullptr
        && this->diskSize_ == nullptr && this->dotnet_ == nullptr && this->edasContainerVersion_ == nullptr && this->emptyDirDesc_ == nullptr && this->enableCpuBurst_ == nullptr
        && this->enableEbpf_ == nullptr && this->enableNamespaceAgentVersion_ == nullptr && this->enableNamespaceSlsConfig_ == nullptr && this->enableNewArms_ == nullptr && this->enablePrometheus_ == nullptr
        && this->enableSidecarResourceIsolated_ == nullptr && this->envs_ == nullptr && this->gpuConfig_ == nullptr && this->headlessPvtzDiscoverySvc_ == nullptr && this->html_ == nullptr
        && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr && this->initContainersConfigShrink_ == nullptr && this->isStateful_ == nullptr && this->jarStartArgs_ == nullptr
        && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->kafkaConfigs_ == nullptr && this->labelsShrink_ == nullptr && this->liveness_ == nullptr
        && this->lokiConfigs_ == nullptr && this->memory_ == nullptr && this->microRegistration_ == nullptr && this->microRegistrationConfig_ == nullptr && this->microserviceEngineConfig_ == nullptr
        && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->namespaceId_ == nullptr && this->nasConfigs_ == nullptr && this->nasId_ == nullptr
        && this->newSaeVersion_ == nullptr && this->oidcRoleName_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->php_ == nullptr && this->phpArmsConfigLocation_ == nullptr
        && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->programmingLanguage_ == nullptr
        && this->pvtzDiscoverySvc_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr && this->raspConfigShrink_ == nullptr && this->readiness_ == nullptr
        && this->replicas_ == nullptr && this->resourceType_ == nullptr && this->saeVersion_ == nullptr && this->secretMountDesc_ == nullptr && this->securityGroupId_ == nullptr
        && this->serviceTags_ == nullptr && this->sidecarContainersConfigShrink_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr && this->startupProbe_ == nullptr
        && this->terminationGracePeriodSeconds_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->warStartOptions_ == nullptr && this->webContainer_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline CreateApplicationShrinkRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateApplicationShrinkRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline CreateApplicationShrinkRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline CreateApplicationShrinkRequest& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateApplicationShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string getAppSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline CreateApplicationShrinkRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // associateEip Field Functions 
    bool hasAssociateEip() const { return this->associateEip_ != nullptr;};
    void deleteAssociateEip() { this->associateEip_ = nullptr;};
    inline bool getAssociateEip() const { DARABONBA_PTR_GET_DEFAULT(associateEip_, false) };
    inline CreateApplicationShrinkRequest& setAssociateEip(bool associateEip) { DARABONBA_PTR_SET_VALUE(associateEip_, associateEip) };


    // autoConfig Field Functions 
    bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
    void deleteAutoConfig() { this->autoConfig_ = nullptr;};
    inline bool getAutoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, false) };
    inline CreateApplicationShrinkRequest& setAutoConfig(bool autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline CreateApplicationShrinkRequest& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateApplicationShrinkRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline CreateApplicationShrinkRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string getConfigMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline CreateApplicationShrinkRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateApplicationShrinkRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline CreateApplicationShrinkRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // customImageNetworkType Field Functions 
    bool hasCustomImageNetworkType() const { return this->customImageNetworkType_ != nullptr;};
    void deleteCustomImageNetworkType() { this->customImageNetworkType_ = nullptr;};
    inline string getCustomImageNetworkType() const { DARABONBA_PTR_GET_DEFAULT(customImageNetworkType_, "") };
    inline CreateApplicationShrinkRequest& setCustomImageNetworkType(string customImageNetworkType) { DARABONBA_PTR_SET_VALUE(customImageNetworkType_, customImageNetworkType) };


    // deploy Field Functions 
    bool hasDeploy() const { return this->deploy_ != nullptr;};
    void deleteDeploy() { this->deploy_ = nullptr;};
    inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
    inline CreateApplicationShrinkRequest& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateApplicationShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // dotnet Field Functions 
    bool hasDotnet() const { return this->dotnet_ != nullptr;};
    void deleteDotnet() { this->dotnet_ = nullptr;};
    inline string getDotnet() const { DARABONBA_PTR_GET_DEFAULT(dotnet_, "") };
    inline CreateApplicationShrinkRequest& setDotnet(string dotnet) { DARABONBA_PTR_SET_VALUE(dotnet_, dotnet) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline CreateApplicationShrinkRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline string getEmptyDirDesc() const { DARABONBA_PTR_GET_DEFAULT(emptyDirDesc_, "") };
    inline CreateApplicationShrinkRequest& setEmptyDirDesc(string emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };


    // enableCpuBurst Field Functions 
    bool hasEnableCpuBurst() const { return this->enableCpuBurst_ != nullptr;};
    void deleteEnableCpuBurst() { this->enableCpuBurst_ = nullptr;};
    inline bool getEnableCpuBurst() const { DARABONBA_PTR_GET_DEFAULT(enableCpuBurst_, false) };
    inline CreateApplicationShrinkRequest& setEnableCpuBurst(bool enableCpuBurst) { DARABONBA_PTR_SET_VALUE(enableCpuBurst_, enableCpuBurst) };


    // enableEbpf Field Functions 
    bool hasEnableEbpf() const { return this->enableEbpf_ != nullptr;};
    void deleteEnableEbpf() { this->enableEbpf_ = nullptr;};
    inline string getEnableEbpf() const { DARABONBA_PTR_GET_DEFAULT(enableEbpf_, "") };
    inline CreateApplicationShrinkRequest& setEnableEbpf(string enableEbpf) { DARABONBA_PTR_SET_VALUE(enableEbpf_, enableEbpf) };


    // enableNamespaceAgentVersion Field Functions 
    bool hasEnableNamespaceAgentVersion() const { return this->enableNamespaceAgentVersion_ != nullptr;};
    void deleteEnableNamespaceAgentVersion() { this->enableNamespaceAgentVersion_ = nullptr;};
    inline bool getEnableNamespaceAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceAgentVersion_, false) };
    inline CreateApplicationShrinkRequest& setEnableNamespaceAgentVersion(bool enableNamespaceAgentVersion) { DARABONBA_PTR_SET_VALUE(enableNamespaceAgentVersion_, enableNamespaceAgentVersion) };


    // enableNamespaceSlsConfig Field Functions 
    bool hasEnableNamespaceSlsConfig() const { return this->enableNamespaceSlsConfig_ != nullptr;};
    void deleteEnableNamespaceSlsConfig() { this->enableNamespaceSlsConfig_ = nullptr;};
    inline bool getEnableNamespaceSlsConfig() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceSlsConfig_, false) };
    inline CreateApplicationShrinkRequest& setEnableNamespaceSlsConfig(bool enableNamespaceSlsConfig) { DARABONBA_PTR_SET_VALUE(enableNamespaceSlsConfig_, enableNamespaceSlsConfig) };


    // enableNewArms Field Functions 
    bool hasEnableNewArms() const { return this->enableNewArms_ != nullptr;};
    void deleteEnableNewArms() { this->enableNewArms_ = nullptr;};
    inline bool getEnableNewArms() const { DARABONBA_PTR_GET_DEFAULT(enableNewArms_, false) };
    inline CreateApplicationShrinkRequest& setEnableNewArms(bool enableNewArms) { DARABONBA_PTR_SET_VALUE(enableNewArms_, enableNewArms) };


    // enablePrometheus Field Functions 
    bool hasEnablePrometheus() const { return this->enablePrometheus_ != nullptr;};
    void deleteEnablePrometheus() { this->enablePrometheus_ = nullptr;};
    inline bool getEnablePrometheus() const { DARABONBA_PTR_GET_DEFAULT(enablePrometheus_, false) };
    inline CreateApplicationShrinkRequest& setEnablePrometheus(bool enablePrometheus) { DARABONBA_PTR_SET_VALUE(enablePrometheus_, enablePrometheus) };


    // enableSidecarResourceIsolated Field Functions 
    bool hasEnableSidecarResourceIsolated() const { return this->enableSidecarResourceIsolated_ != nullptr;};
    void deleteEnableSidecarResourceIsolated() { this->enableSidecarResourceIsolated_ = nullptr;};
    inline bool getEnableSidecarResourceIsolated() const { DARABONBA_PTR_GET_DEFAULT(enableSidecarResourceIsolated_, false) };
    inline CreateApplicationShrinkRequest& setEnableSidecarResourceIsolated(bool enableSidecarResourceIsolated) { DARABONBA_PTR_SET_VALUE(enableSidecarResourceIsolated_, enableSidecarResourceIsolated) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline CreateApplicationShrinkRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline string getGpuConfig() const { DARABONBA_PTR_GET_DEFAULT(gpuConfig_, "") };
    inline CreateApplicationShrinkRequest& setGpuConfig(string gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };


    // headlessPvtzDiscoverySvc Field Functions 
    bool hasHeadlessPvtzDiscoverySvc() const { return this->headlessPvtzDiscoverySvc_ != nullptr;};
    void deleteHeadlessPvtzDiscoverySvc() { this->headlessPvtzDiscoverySvc_ = nullptr;};
    inline string getHeadlessPvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(headlessPvtzDiscoverySvc_, "") };
    inline CreateApplicationShrinkRequest& setHeadlessPvtzDiscoverySvc(string headlessPvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(headlessPvtzDiscoverySvc_, headlessPvtzDiscoverySvc) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline CreateApplicationShrinkRequest& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline CreateApplicationShrinkRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateApplicationShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainersConfigShrink Field Functions 
    bool hasInitContainersConfigShrink() const { return this->initContainersConfigShrink_ != nullptr;};
    void deleteInitContainersConfigShrink() { this->initContainersConfigShrink_ = nullptr;};
    inline string getInitContainersConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(initContainersConfigShrink_, "") };
    inline CreateApplicationShrinkRequest& setInitContainersConfigShrink(string initContainersConfigShrink) { DARABONBA_PTR_SET_VALUE(initContainersConfigShrink_, initContainersConfigShrink) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline CreateApplicationShrinkRequest& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline CreateApplicationShrinkRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline CreateApplicationShrinkRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline CreateApplicationShrinkRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // kafkaConfigs Field Functions 
    bool hasKafkaConfigs() const { return this->kafkaConfigs_ != nullptr;};
    void deleteKafkaConfigs() { this->kafkaConfigs_ = nullptr;};
    inline string getKafkaConfigs() const { DARABONBA_PTR_GET_DEFAULT(kafkaConfigs_, "") };
    inline CreateApplicationShrinkRequest& setKafkaConfigs(string kafkaConfigs) { DARABONBA_PTR_SET_VALUE(kafkaConfigs_, kafkaConfigs) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline CreateApplicationShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline CreateApplicationShrinkRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // lokiConfigs Field Functions 
    bool hasLokiConfigs() const { return this->lokiConfigs_ != nullptr;};
    void deleteLokiConfigs() { this->lokiConfigs_ = nullptr;};
    inline string getLokiConfigs() const { DARABONBA_PTR_GET_DEFAULT(lokiConfigs_, "") };
    inline CreateApplicationShrinkRequest& setLokiConfigs(string lokiConfigs) { DARABONBA_PTR_SET_VALUE(lokiConfigs_, lokiConfigs) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateApplicationShrinkRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // microRegistration Field Functions 
    bool hasMicroRegistration() const { return this->microRegistration_ != nullptr;};
    void deleteMicroRegistration() { this->microRegistration_ = nullptr;};
    inline string getMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(microRegistration_, "") };
    inline CreateApplicationShrinkRequest& setMicroRegistration(string microRegistration) { DARABONBA_PTR_SET_VALUE(microRegistration_, microRegistration) };


    // microRegistrationConfig Field Functions 
    bool hasMicroRegistrationConfig() const { return this->microRegistrationConfig_ != nullptr;};
    void deleteMicroRegistrationConfig() { this->microRegistrationConfig_ = nullptr;};
    inline string getMicroRegistrationConfig() const { DARABONBA_PTR_GET_DEFAULT(microRegistrationConfig_, "") };
    inline CreateApplicationShrinkRequest& setMicroRegistrationConfig(string microRegistrationConfig) { DARABONBA_PTR_SET_VALUE(microRegistrationConfig_, microRegistrationConfig) };


    // microserviceEngineConfig Field Functions 
    bool hasMicroserviceEngineConfig() const { return this->microserviceEngineConfig_ != nullptr;};
    void deleteMicroserviceEngineConfig() { this->microserviceEngineConfig_ = nullptr;};
    inline string getMicroserviceEngineConfig() const { DARABONBA_PTR_GET_DEFAULT(microserviceEngineConfig_, "") };
    inline CreateApplicationShrinkRequest& setMicroserviceEngineConfig(string microserviceEngineConfig) { DARABONBA_PTR_SET_VALUE(microserviceEngineConfig_, microserviceEngineConfig) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string getMountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline CreateApplicationShrinkRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline CreateApplicationShrinkRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateApplicationShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline CreateApplicationShrinkRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline CreateApplicationShrinkRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline CreateApplicationShrinkRequest& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // oidcRoleName Field Functions 
    bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
    void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
    inline string getOidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
    inline CreateApplicationShrinkRequest& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline CreateApplicationShrinkRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline CreateApplicationShrinkRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string getOssMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline CreateApplicationShrinkRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateApplicationShrinkRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline CreateApplicationShrinkRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline CreateApplicationShrinkRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // php Field Functions 
    bool hasPhp() const { return this->php_ != nullptr;};
    void deletePhp() { this->php_ = nullptr;};
    inline string getPhp() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
    inline CreateApplicationShrinkRequest& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


    // phpArmsConfigLocation Field Functions 
    bool hasPhpArmsConfigLocation() const { return this->phpArmsConfigLocation_ != nullptr;};
    void deletePhpArmsConfigLocation() { this->phpArmsConfigLocation_ = nullptr;};
    inline string getPhpArmsConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpArmsConfigLocation_, "") };
    inline CreateApplicationShrinkRequest& setPhpArmsConfigLocation(string phpArmsConfigLocation) { DARABONBA_PTR_SET_VALUE(phpArmsConfigLocation_, phpArmsConfigLocation) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline CreateApplicationShrinkRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline CreateApplicationShrinkRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline CreateApplicationShrinkRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline CreateApplicationShrinkRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline CreateApplicationShrinkRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // pvtzDiscoverySvc Field Functions 
    bool hasPvtzDiscoverySvc() const { return this->pvtzDiscoverySvc_ != nullptr;};
    void deletePvtzDiscoverySvc() { this->pvtzDiscoverySvc_ = nullptr;};
    inline string getPvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(pvtzDiscoverySvc_, "") };
    inline CreateApplicationShrinkRequest& setPvtzDiscoverySvc(string pvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(pvtzDiscoverySvc_, pvtzDiscoverySvc) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline CreateApplicationShrinkRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline CreateApplicationShrinkRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // raspConfigShrink Field Functions 
    bool hasRaspConfigShrink() const { return this->raspConfigShrink_ != nullptr;};
    void deleteRaspConfigShrink() { this->raspConfigShrink_ = nullptr;};
    inline string getRaspConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(raspConfigShrink_, "") };
    inline CreateApplicationShrinkRequest& setRaspConfigShrink(string raspConfigShrink) { DARABONBA_PTR_SET_VALUE(raspConfigShrink_, raspConfigShrink) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline CreateApplicationShrinkRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateApplicationShrinkRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateApplicationShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // saeVersion Field Functions 
    bool hasSaeVersion() const { return this->saeVersion_ != nullptr;};
    void deleteSaeVersion() { this->saeVersion_ = nullptr;};
    inline string getSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(saeVersion_, "") };
    inline CreateApplicationShrinkRequest& setSaeVersion(string saeVersion) { DARABONBA_PTR_SET_VALUE(saeVersion_, saeVersion) };


    // secretMountDesc Field Functions 
    bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
    void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
    inline string getSecretMountDesc() const { DARABONBA_PTR_GET_DEFAULT(secretMountDesc_, "") };
    inline CreateApplicationShrinkRequest& setSecretMountDesc(string secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateApplicationShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceTags Field Functions 
    bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
    void deleteServiceTags() { this->serviceTags_ = nullptr;};
    inline string getServiceTags() const { DARABONBA_PTR_GET_DEFAULT(serviceTags_, "") };
    inline CreateApplicationShrinkRequest& setServiceTags(string serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };


    // sidecarContainersConfigShrink Field Functions 
    bool hasSidecarContainersConfigShrink() const { return this->sidecarContainersConfigShrink_ != nullptr;};
    void deleteSidecarContainersConfigShrink() { this->sidecarContainersConfigShrink_ = nullptr;};
    inline string getSidecarContainersConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sidecarContainersConfigShrink_, "") };
    inline CreateApplicationShrinkRequest& setSidecarContainersConfigShrink(string sidecarContainersConfigShrink) { DARABONBA_PTR_SET_VALUE(sidecarContainersConfigShrink_, sidecarContainersConfigShrink) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline CreateApplicationShrinkRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // slsLogEnvTags Field Functions 
    bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
    void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
    inline string getSlsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
    inline CreateApplicationShrinkRequest& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline string getStartupProbe() const { DARABONBA_PTR_GET_DEFAULT(startupProbe_, "") };
    inline CreateApplicationShrinkRequest& setStartupProbe(string startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline CreateApplicationShrinkRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateApplicationShrinkRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline CreateApplicationShrinkRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateApplicationShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateApplicationShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline CreateApplicationShrinkRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline CreateApplicationShrinkRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The ARN of the RAM role required for cross-account image pulling. For more information, see [Grant permissions across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The instance ID of the Container Registry Enterprise instance. This parameter is required when **ImageUrl** is set to a Container Registry Enterprise Edition image.
    shared_ptr<string> acrInstanceId_ {};
    // The AliyunAgent version.
    shared_ptr<string> agentVersion_ {};
    // The application description. The description can be up to 1024 characters in length.
    shared_ptr<string> appDescription_ {};
    // The application name. The name can contain digits, letters, and hyphens (-). The name must start with a letter and cannot end with a hyphen (-). The name can be up to 36 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Set this parameter to micro_service to create a microservice application.
    shared_ptr<string> appSource_ {};
    // Specifies whether to associate an EIP. Valid values:
    // 
    // - **true**: associate an EIP.
    // - **false**: do not associate an EIP.
    shared_ptr<bool> associateEip_ {};
    // Specifies whether to automatically configure the network environment. Valid values:
    // 
    // - **true**: SAE automatically configures the network environment when the application is created. The values of **NamespaceId**, **VpcId**, **vSwitchId**, and **SecurityGroupId** are ignored.
    // - **false**: SAE manually configures the network environment when the application is created.
    // 
    // > If this parameter is set to **true**, any other **NamespaceId** value that is passed is ignored.
    shared_ptr<bool> autoConfig_ {};
    // The base application ID.
    shared_ptr<string> baseAppId_ {};
    // The command that is used to start the image. The command must be an executable object in the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // In the preceding example, `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    // 
    // 
    // >Notice: This parameter is required when PackageType is set to DotnetZip.
    shared_ptr<string> command_ {};
    // The arguments of the image startup command. These are the arguments required by the startup command specified in **Command**. Format:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, `CommandArgs=["abc", ">", "file0"]`, where `["abc", ">", "file0"]` must be converted to the String type. The internal format is a JSON array. If this parameter is not required, leave it empty.
    // >Notice: This parameter is required when PackageType is set to DotnetZip.
    shared_ptr<string> commandArgs_ {};
    // The **ConfigMap** mount description. Use a ConfigMap created on the namespace configuration items page to inject configuration information into the container. Parameter description:
    // 
    // - **configMapId**: the ConfigMap instance ID. You can obtain the ID by invoking the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation.
    // - **key**: the key.
    // 
    // > You can mount all keys by passing the `sae-sys-configmap-all` parameter.
    // 
    // - **mountPath**: the mount path.
    shared_ptr<string> configMapMountDesc_ {};
    // The CPU specifications required for each instance, in millicores. This parameter cannot be set to 0. Only the following defined specifications are supported:
    // 
    // - **500**
    // - **1000**
    // - **2000**
    // - **4000**
    // - **8000**
    // - **16000**
    // - **32000**
    shared_ptr<int32_t> cpu_ {};
    // The custom host mapping in the container. Valid values:
    // 
    // - **hostName**: the domain name or hostname.
    // - **ip**: the IP address.
    shared_ptr<string> customHostAlias_ {};
    // The custom image type. Set this parameter to an empty string if the image is not a custom image:
    // 
    // - internet: public image
    // - intranet: private image
    shared_ptr<string> customImageNetworkType_ {};
    // Specifies whether to immediately deploy the application. Valid values:
    // 
    // - **true**: default value. The application is deployed immediately.
    // - **false**: the application is deployed later.
    shared_ptr<bool> deploy_ {};
    // The disk storage size, in GB.
    shared_ptr<int32_t> diskSize_ {};
    // The version of the .NET framework:
    // 
    // - .NET 3.1
    // - .NET 5.0
    // - .NET 6.0
    // - .NET 7.0
    // - .NET 8.0
    shared_ptr<string> dotnet_ {};
    // The version of the application runtime environment in the HSF framework, such as the Ali-Tomcat container.
    shared_ptr<string> edasContainerVersion_ {};
    // The shared ephemeral storage configuration.
    shared_ptr<string> emptyDirDesc_ {};
    // Specifies whether to enable the CPU Burst feature:
    // 
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enableCpuBurst_ {};
    // Specifies whether to enable application monitoring for non-Java applications based on eBPF technology. Valid values:
    // - **true**: enabled.
    // - **false**: disabled. This is the default value.
    shared_ptr<string> enableEbpf_ {};
    // Specifies whether to reuse the namespace agent version configuration.
    shared_ptr<bool> enableNamespaceAgentVersion_ {};
    // Specifies whether to reuse the namespace SLS log configuration.
    shared_ptr<bool> enableNamespaceSlsConfig_ {};
    // Specifies whether to enable the new ARMS feature:
    // 
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enableNewArms_ {};
    // Specifies whether to enable Prometheus custom metric collection.
    shared_ptr<bool> enablePrometheus_ {};
    // Specifies whether to enable sidecar resource isolation:
    // 
    // - true: Isolated.
    // - false: Not isolated.
    shared_ptr<bool> enableSidecarResourceIsolated_ {};
    // The container environment variable parameters. You can customize environment variables or reference a ConfigMap. To reference a ConfigMap, create a ConfigMap instance first. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
    // - Custom configuration
    //     - **name**: the name of the environment variable.
    //     - **value**: the value of the environment variable. This takes priority over valueFrom.
    // - Reference a ConfigMap (valueFrom)
    //     - **name**: the name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<ConfigMap name>`, such as `sae-sys-configmap-all-test1`.
    //     - **valueFrom**: the environment variable reference. Set the value to `configMapRef`.
    //         - **configMapId**: the ConfigMap ID.
    //         - **key**: the key. If you reference all keys, do not set this field.
    shared_ptr<string> envs_ {};
    shared_ptr<string> gpuConfig_ {};
    // The K8s Headless Service-based service registration and discovery.
    // - serviceName: the service name.
    // - namespaceId: the namespace ID.
    shared_ptr<string> headlessPvtzDiscoverySvc_ {};
    // The Nginx version.
    // - nginx 1.20
    // - nginx 1.22
    // - nginx 1.24
    // - nginx 1.26
    // - nginx 1.28
    shared_ptr<string> html_ {};
    // The corresponding secret ID.
    shared_ptr<string> imagePullSecrets_ {};
    // The image address. This parameter is required when **Package Type** is set to **Image**.
    shared_ptr<string> imageUrl_ {};
    // The init container configuration.
    shared_ptr<string> initContainersConfigShrink_ {};
    // Specifies whether the application is stateful.
    shared_ptr<bool> isStateful_ {};
    // The arguments for starting the JAR package application. The default startup command for the application: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // The options for starting the JAR package application. The default startup command for the application: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The JDK version on which the deployment package depends. Valid values:
    // 
    // - **Open JDK 8**
    // - **Open JDK 7**
    // - **Dragonwell 11**
    // - **Dragonwell 8**
    // - **openjdk-8u191-jdk-alpine3.9**
    // - **openjdk-7u201-jdk-alpine3.9**
    // 
    // This parameter is not supported when **Package Type** is set to **Image**.
    shared_ptr<string> jdk_ {};
    // The summary of configurations for log collection to Kafka. Valid values:
    // 
    // - **kafkaEndpoint**: the service registration address of the Kafka API.
    // - **kafkaInstanceId**: the Kafka instance ID.
    // - **kafkaConfigs**: the summary of configurations for one or more log entries. For more information about the valid values, see the **kafkaConfigs** request parameter in this topic.
    shared_ptr<string> kafkaConfigs_ {};
    shared_ptr<string> labelsShrink_ {};
    // The container health check. Containers that fail the health check are shutdown and recovered. The following methods are supported:
    // 
    // - **exec**: for example, `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
    // - **httpGet**: for example, `{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // - **tcpSocket**: for example, `{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // > You can use only one method for health checks.
    // 
    // Parameter description:
    // 
    // - **exec.command**: the health check command.
    // - **httpGet.path**: the access path.
    // - **httpGet.scheme**: **HTTP** or **HTTPS**.
    // - **httpGet.isContainKeyWord**: **true** indicates that the keyword is included. **false** indicates that the keyword is not included. If this field is missing, the advanced feature is not used.
    // - **httpGet.keyWord**: the custom keyword. The **isContainKeyWord** field must be present when this field is used.
    // - **tcpSocket.port**: the port for TCP connection detection.
    // - **initialDelaySeconds**: the health check delay detection time. Default value: 10. Unit: seconds.
    // - **periodSeconds**: the health check period. Default value: 30. Unit: seconds.
    // - **timeoutSeconds**: the health check timeout period. Default value: 1. Unit: seconds. If this parameter is set to 0 or is not set, the default timeout period is 1 second.
    shared_ptr<string> liveness_ {};
    shared_ptr<string> lokiConfigs_ {};
    // The memory required for each instance, in MB. This parameter cannot be set to 0. The memory has a one-to-one mapping with CPU. Only the following defined specifications are supported:
    // - **1024**: corresponds to 500 and 1000 millicores of CPU.
    // - **2048**: corresponds to 500, 1000, and 2000 millicores of CPU.
    // - **4096**: corresponds to 1000, 2000, and 4000 millicores of CPU.
    // - **8192**: corresponds to 2000, 4000, and 8000 millicores of CPU.
    // - **12288**: corresponds to 12000 millicores of CPU.
    // - **16384**: corresponds to 4000, 8000, and 16000 millicores of CPU.
    // - **24576**: corresponds to 12000 millicores of CPU.
    // - **32768**: corresponds to 16000 millicores of CPU.
    // - **65536**: corresponds to 8000, 16000, and 32000 millicores of CPU.
    // - **131072**: corresponds to 32000 millicores of CPU.
    shared_ptr<int32_t> memory_ {};
    // Specifies the Nacos registry. Valid values:
    // - **0**: SAE built-in Nacos.
    // - **1**: self-managed Nacos.
    // - **2**: MSE commercial edition Nacos.
    shared_ptr<string> microRegistration_ {};
    // The registry configuration.
    shared_ptr<string> microRegistrationConfig_ {};
    // Configures the microservice governance feature.
    // 
    // - Specifies whether to enable microservice governance (enable):
    // 
    //    - true: Enabled.
    // 
    //   - false: Disabled.
    // 
    // - Configures lossless online/offline (mseLosslessRule):
    // 
    //   - delayTime: the delay time.
    // 
    //   - enable: specifies whether to enable the lossless online feature. true indicates enabled. false indicates disabled.
    // 
    //   - notice: specifies whether to enable the notification feature. true indicates enabled. false indicates disabled.
    // 
    //   - warmupTime: the warm-up duration for traffic ramping, in seconds.
    shared_ptr<string> microserviceEngineConfig_ {};
    // We recommend that you do not set this parameter. Set **NasConfigs** instead. The NAS mount description. If the configuration does not change during deployment, you do not need to set this parameter (that is, the **MountDesc** field does not need to be included in the request). To clear the NAS configuration, set the value of this field to an empty string (that is, set the value of the **MountDesc** field to "" in the request).
    shared_ptr<string> mountDesc_ {};
    // We recommend that you do not set this parameter. Set **NasConfigs** instead. The mount target of the NAS file system in the VPC of the application. If the configuration does not change during deployment, you do not need to set this parameter (that is, the **MountHost** field does not need to be included in the request). To clear the NAS configuration, set the value of this field to an empty string (that is, set the value of the **MountHost** field to "" in the request).
    shared_ptr<string> mountHost_ {};
    // The SAE namespace ID. Only namespaces whose names contain lowercase letters and hyphens (-) are supported. The name must start with a letter.
    // You can obtain namespaces by calling the [DescribeNamespaceList](https://help.aliyun.com/document_detail/126547.html) operation.
    shared_ptr<string> namespaceId_ {};
    // The NAS mount configuration. Valid values:
    // 
    // - **mountPath**: the container mount path.
    // - **readOnly**: set to **false** to grant read and write permission.
    // - **nasId**: the NAS ID.
    // - **mountDomain**: the container mount target address. For more information, see [DescribeMountTargets](https://help.aliyun.com/document_detail/62626.html).
    // - **nasPath**: the NAS relative file directory.
    shared_ptr<string> nasConfigs_ {};
    // We recommend that you do not set this parameter. Set **NasConfigs** instead. The ID of the mounted NAS file system. The NAS file system must be in the same region as the cluster. The NAS file system must have available mount target creation quota, or its mount target must already be on a vSwitch in the VPC. If this parameter is left empty and the **mountDescs** field exists, a NAS file system is automatically purchased and mounted to a vSwitch in the VPC.
    // 
    // If the configuration does not change during deployment, you do not need to set this parameter (that is, the **NASId** field does not need to be included in the request). To clear the NAS configuration, set the value of this field to an empty string (that is, set the value of the **NASId** field to "" in the request).
    shared_ptr<string> nasId_ {};
    // The application version:
    // 
    // - lite: Lite Edition
    // - std: Standard Edition
    // - pro: Professional Edition
    shared_ptr<string> newSaeVersion_ {};
    // Specifies the RAM role for identity authentication.
    // > Create an OIDC identity provider and an identity provider role in the same region in advance. For more information, see <props="china">[CreateOIDCProvider](https://www.alibabacloud.com/help/en/ram/developer-reference/api-ims-2019-08-15-createoidcprovider) and [CreateSAMLProvider](https://www.alibabacloud.com/help/en/ram/developer-reference/api-ims-2019-08-15-createsamlprovider)<props="intl">[CreateOIDCProvider](https://www.alibabacloud.com/help/zh/ram/developer-reference/api-ims-2019-08-15-createoidcprovider) and [CreateSAMLProvider](https://www.alibabacloud.com/help/zh/ram/developer-reference/api-ims-2019-08-15-createsamlprovider).
    shared_ptr<string> oidcRoleName_ {};
    // The AccessKey ID for OSS read and write operations.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey Secret for OSS read and write operations.
    shared_ptr<string> ossAkSecret_ {};
    // The OSS mount description. Parameter description:
    // 
    // - **bucketName**: the bucket name.
    // - **bucketPath**: the folder or object that you created in OSS. If the OSS mount folder does not exist, an exception is triggered.
    // - **mountPath**: the container path in SAE. If the path already exists, it is an overwrite relationship. If the path does not exist, it is created.
    // - **readOnly**: specifies whether the container path has read-only permission on the mounted folder resources. Valid values:
    //     - **true**: read-only permission.
    //     - **false**: read and write permission.
    shared_ptr<string> ossMountDescs_ {};
    // The type of the application deployment package. Valid values:
    // 
    // - If you use Java for deployment, **FatJar**, **War**, and **Image** are supported.
    // - If you use PHP for deployment, the following types are supported:
    //     - **PhpZip**
    //     - **IMAGE_PHP_5_4**
    //     - **IMAGE_PHP_5_4_ALPINE**
    //     - **IMAGE_PHP_5_5**
    //     - **IMAGE_PHP_5_5_ALPINE**
    //     - **IMAGE_PHP_5_6**
    //     - **IMAGE_PHP_5_6_ALPINE**
    //     - **IMAGE_PHP_7_0**
    //     - **IMAGE_PHP_7_0_ALPINE**
    //     - **IMAGE_PHP_7_1**
    //     - **IMAGE_PHP_7_1_ALPINE**
    //     - **IMAGE_PHP_7_2**
    //     - **IMAGE_PHP_7_2_ALPINE**
    //     - **IMAGE_PHP_7_3**
    //     - **IMAGE_PHP_7_3_ALPINE**
    // - If you use Python for deployment, **PythonZip** and **Image** are supported.
    // 
    // - If you use .NET Core for deployment, **DotnetZip** and **Image** are supported.
    //   > 
    //   > When DotnetZip is selected, Dotnet specifies the version of the .NET Core runtime. .NET 3.1, .NET 5.0, .NET 6.0, .NET 7.0, and .NET 8.0 are supported. The Dotnet, Command, and CommandArgs parameters are required.
    // 
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // The address of the deployment package. This parameter is required when **Package Type** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version of the deployment package. This parameter is required when **Package Type** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The PHP version on which the deployment package depends. Not supported for images.
    shared_ptr<string> php_ {};
    // The mount path for PHP application monitoring. Make sure that the PHP server loads the configuration file from this path.
    // You do not need to manage the configuration content. SAE automatically renders the correct configuration file.
    shared_ptr<string> phpArmsConfigLocation_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path for the PHP application startup configuration. Make sure that the PHP server uses this configuration file to start.
    shared_ptr<string> phpConfigLocation_ {};
    // The script that is run after the container is started. A script is triggered and run immediately after the container is created. Format: `{"exec":{"command":["cat","/etc/group"]}}`
    shared_ptr<string> postStart_ {};
    // The script that is run before the container is stopped. A script is triggered and run before the container is deleted. Format: `{"exec":{"command":["cat","/etc/group"]}}`
    shared_ptr<string> preStop_ {};
    // The programming language of the technology stack used to create the application. Valid values:
    // 
    // - **java**: Java.
    // - **php**: PHP.
    // - **python**: Python.
    // - **dotnet**: .NET Core.
    // - **other**: multiple languages, such as C++, Go, and Node.js.
    shared_ptr<string> programmingLanguage_ {};
    // Enables K8s Service-based service registration and discovery. Valid values:
    // 
    // - **serviceName**: the service name. Format: `custom name-namespace ID`. The suffix `-namespace ID` cannot be customized and must be set based on the namespace of the application. For example, if you select the default namespace in the China (Beijing) region, the suffix is `-cn-beijing-default`.
    // - **namespaceId**: the namespace ID.
    // - **portProtocols**: the port and protocol. Valid port values: [1,65535]. Valid protocol values: **TCP** and **UDP**.
    // - **portAndProtocol**: the port and protocol. Valid port values: [1,65535]. Valid protocol values: **TCP** and **UDP**. **portProtocols is recommended. If portProtocols is set, only portProtocols takes effect**.
    // - **enable**: enables K8s Service-based service registration and discovery.
    shared_ptr<string> pvtzDiscoverySvc_ {};
    // The Python environment. **PYTHON 3.9.15** is supported.
    shared_ptr<string> python_ {};
    // The custom installation module dependencies. By default, the dependencies defined in the requirements.txt file in the root folder are installed. If the file is not configured or you need custom packages, specify the dependencies to install.
    shared_ptr<string> pythonModules_ {};
    shared_ptr<string> raspConfigShrink_ {};
    // The application startup status check. Containers that fail multiple health checks are shut down and restarted. Containers that do not pass the health check do not receive SLB traffic. The **exec**, **httpGet**, and **tcpSocket** methods are supported. For specific examples, see the **Liveness** parameter.
    // 
    // > You can use only one method for health checks.
    shared_ptr<string> readiness_ {};
    // The initial number of instances.
    // 
    // This parameter is required.
    shared_ptr<int32_t> replicas_ {};
    // The resource type. Valid values: NULL (default), default, and haiguang (Hygon server).
    shared_ptr<string> resourceType_ {};
    // The SAE version. Valid values:
    // 
    // - **v1**
    // - **v2**
    shared_ptr<string> saeVersion_ {};
    // The **Secret** mount description. Use a secret created on the namespace secrets page to inject sensitive information into the container. Parameter description:
    // 
    // - **secretId**: the secret instance ID. You can obtain the ID by calling the ListSecrets operation.
    // - **key**: the key.
    // 
    // > You can mount all keys by passing the `sae-sys-secret-all` parameter.
    // 
    // - **mountPath**: the mount path.
    shared_ptr<string> secretMountDesc_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The canary release tags configured for the application.
    shared_ptr<string> serviceTags_ {};
    // The sidecar container configuration.
    shared_ptr<string> sidecarContainersConfigShrink_ {};
    // The configurations for log collection to Simple Log Service.
    // 
    // - Use SLS resources that are automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // - Use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // Parameter description:
    // 
    // - **projectName**: the Project name in Simple Log Service.  
    // - **logDir**: the log path.
    // - **logType**: the log type. **stdout** indicates container standard output logs. You can configure only one entry for this type. If this parameter is not set, file logs are collected.
    // - **logstoreName**: the Logstore name in Simple Log Service.
    // - **logtailName**: the Logtail name in Simple Log Service. If this parameter is not specified, a new Logtail is created.
    // 
    // If the SLS collection configuration does not change during multiple deployments, you do not need to set this parameter (that is, the **SlsConfigs** field does not need to be included in the request). If you no longer need the SLS collection feature, set the value of this field to an empty string (that is, set the value of the **SlsConfigs** field to "" in the request).
    // 
    // > Projects that are automatically created with the application are deleted when the application is deleted. Therefore, do not select a project that is automatically created by SAE when you select an existing project.
    shared_ptr<string> slsConfigs_ {};
    // sls log tags
    shared_ptr<string> slsLogEnvTags_ {};
    // Enables the application startup probe.
    // 
    // - Check succeeded: indicates that the application started successfully. If you configured Liveness and Readiness checks, they are performed after the application starts successfully.
    // - Check failed: indicates that the application failed to start. An exception is reported and the application is automatically restarted.
    // > 
    // > - The exec, httpGet, and tcpSocket methods are supported. For specific examples, see the Liveness parameter.
    // > - You can use only one method for health checks.
    shared_ptr<string> startupProbe_ {};
    // The timeout period for graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The time zone. Default value: **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat configuration. Set this parameter to "" or "{}" to delete the configuration:
    // 
    // - **port**: the port number. Valid values: 1024 to 65535. Ports less than 1024 require root permissions. Because the container is configured with admin permissions, specify a port greater than 1024. Default value: 8080.
    // - **contextPath**: the access path. Default value: root directory "/".
    // - **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
    // - **uriEncoding**: the encoding format of Tomcat. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. Default value: **ISO-8859-1**.
    // - **useBodyEncodingForUri**: specifies whether to use **BodyEncoding for URL**. Default value: **true**.
    shared_ptr<string> tomcatConfig_ {};
    // The vSwitch where the elastic network interface controller (NIC) of the application instance resides. The vSwitch must be in the specified VPC. The vSwitch also has a binding relationship with the SAE namespace. If you leave this parameter empty, the vSwitch attached to the namespace is used by default.
    shared_ptr<string> vSwitchId_ {};
    // The VPC that corresponds to the SAE namespace. In SAE, a namespace can correspond to only one VPC, and the mapping cannot be modified. The binding relationship is established when the first SAE application is created in the namespace. Multiple namespaces can correspond to the same VPC. If you leave this parameter empty, the VPC bound to the namespace is used by default.
    shared_ptr<string> vpcId_ {};
    // The startup command for deploying a WAR package application. The configuration procedure is the same as that for the startup command of an image deployment. For more information, see [Configure a startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The version of Tomcat on which the WebContainer deployment package depends. Valid values:
    // 
    // - **apache-tomcat-7.0.91**
    // - **apache-tomcat-8.5.42**
    // 
    // This parameter is not supported when **Package Type** is set to **Image**.
    shared_ptr<string> webContainer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
