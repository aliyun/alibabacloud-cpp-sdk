// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InitContainerConfig.hpp>
#include <map>
#include <alibabacloud/models/SidecarContainerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(InitContainersConfig, initContainersConfig_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
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
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SaeVersion, saeVersion_);
      DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_TO_JSON(SidecarContainersConfig, sidecarContainersConfig_);
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
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(InitContainersConfig, initContainersConfig_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
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
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SaeVersion, saeVersion_);
      DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_FROM_JSON(SidecarContainersConfig, sidecarContainersConfig_);
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
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
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
        && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr && this->initContainersConfig_ == nullptr && this->isStateful_ == nullptr && this->jarStartArgs_ == nullptr
        && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->kafkaConfigs_ == nullptr && this->labels_ == nullptr && this->liveness_ == nullptr
        && this->lokiConfigs_ == nullptr && this->memory_ == nullptr && this->microRegistration_ == nullptr && this->microRegistrationConfig_ == nullptr && this->microserviceEngineConfig_ == nullptr
        && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->namespaceId_ == nullptr && this->nasConfigs_ == nullptr && this->nasId_ == nullptr
        && this->newSaeVersion_ == nullptr && this->oidcRoleName_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->php_ == nullptr && this->phpArmsConfigLocation_ == nullptr
        && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->programmingLanguage_ == nullptr
        && this->pvtzDiscoverySvc_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr && this->readiness_ == nullptr && this->replicas_ == nullptr
        && this->resourceType_ == nullptr && this->saeVersion_ == nullptr && this->secretMountDesc_ == nullptr && this->securityGroupId_ == nullptr && this->serviceTags_ == nullptr
        && this->sidecarContainersConfig_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr && this->startupProbe_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr
        && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->warStartOptions_ == nullptr
        && this->webContainer_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline CreateApplicationRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateApplicationRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline CreateApplicationRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline CreateApplicationRequest& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string getAppSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline CreateApplicationRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // associateEip Field Functions 
    bool hasAssociateEip() const { return this->associateEip_ != nullptr;};
    void deleteAssociateEip() { this->associateEip_ = nullptr;};
    inline bool getAssociateEip() const { DARABONBA_PTR_GET_DEFAULT(associateEip_, false) };
    inline CreateApplicationRequest& setAssociateEip(bool associateEip) { DARABONBA_PTR_SET_VALUE(associateEip_, associateEip) };


    // autoConfig Field Functions 
    bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
    void deleteAutoConfig() { this->autoConfig_ = nullptr;};
    inline bool getAutoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, false) };
    inline CreateApplicationRequest& setAutoConfig(bool autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline CreateApplicationRequest& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateApplicationRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline CreateApplicationRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string getConfigMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline CreateApplicationRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateApplicationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline CreateApplicationRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // customImageNetworkType Field Functions 
    bool hasCustomImageNetworkType() const { return this->customImageNetworkType_ != nullptr;};
    void deleteCustomImageNetworkType() { this->customImageNetworkType_ = nullptr;};
    inline string getCustomImageNetworkType() const { DARABONBA_PTR_GET_DEFAULT(customImageNetworkType_, "") };
    inline CreateApplicationRequest& setCustomImageNetworkType(string customImageNetworkType) { DARABONBA_PTR_SET_VALUE(customImageNetworkType_, customImageNetworkType) };


    // deploy Field Functions 
    bool hasDeploy() const { return this->deploy_ != nullptr;};
    void deleteDeploy() { this->deploy_ = nullptr;};
    inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
    inline CreateApplicationRequest& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateApplicationRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // dotnet Field Functions 
    bool hasDotnet() const { return this->dotnet_ != nullptr;};
    void deleteDotnet() { this->dotnet_ = nullptr;};
    inline string getDotnet() const { DARABONBA_PTR_GET_DEFAULT(dotnet_, "") };
    inline CreateApplicationRequest& setDotnet(string dotnet) { DARABONBA_PTR_SET_VALUE(dotnet_, dotnet) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline CreateApplicationRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline string getEmptyDirDesc() const { DARABONBA_PTR_GET_DEFAULT(emptyDirDesc_, "") };
    inline CreateApplicationRequest& setEmptyDirDesc(string emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };


    // enableCpuBurst Field Functions 
    bool hasEnableCpuBurst() const { return this->enableCpuBurst_ != nullptr;};
    void deleteEnableCpuBurst() { this->enableCpuBurst_ = nullptr;};
    inline bool getEnableCpuBurst() const { DARABONBA_PTR_GET_DEFAULT(enableCpuBurst_, false) };
    inline CreateApplicationRequest& setEnableCpuBurst(bool enableCpuBurst) { DARABONBA_PTR_SET_VALUE(enableCpuBurst_, enableCpuBurst) };


    // enableEbpf Field Functions 
    bool hasEnableEbpf() const { return this->enableEbpf_ != nullptr;};
    void deleteEnableEbpf() { this->enableEbpf_ = nullptr;};
    inline string getEnableEbpf() const { DARABONBA_PTR_GET_DEFAULT(enableEbpf_, "") };
    inline CreateApplicationRequest& setEnableEbpf(string enableEbpf) { DARABONBA_PTR_SET_VALUE(enableEbpf_, enableEbpf) };


    // enableNamespaceAgentVersion Field Functions 
    bool hasEnableNamespaceAgentVersion() const { return this->enableNamespaceAgentVersion_ != nullptr;};
    void deleteEnableNamespaceAgentVersion() { this->enableNamespaceAgentVersion_ = nullptr;};
    inline bool getEnableNamespaceAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceAgentVersion_, false) };
    inline CreateApplicationRequest& setEnableNamespaceAgentVersion(bool enableNamespaceAgentVersion) { DARABONBA_PTR_SET_VALUE(enableNamespaceAgentVersion_, enableNamespaceAgentVersion) };


    // enableNamespaceSlsConfig Field Functions 
    bool hasEnableNamespaceSlsConfig() const { return this->enableNamespaceSlsConfig_ != nullptr;};
    void deleteEnableNamespaceSlsConfig() { this->enableNamespaceSlsConfig_ = nullptr;};
    inline bool getEnableNamespaceSlsConfig() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceSlsConfig_, false) };
    inline CreateApplicationRequest& setEnableNamespaceSlsConfig(bool enableNamespaceSlsConfig) { DARABONBA_PTR_SET_VALUE(enableNamespaceSlsConfig_, enableNamespaceSlsConfig) };


    // enableNewArms Field Functions 
    bool hasEnableNewArms() const { return this->enableNewArms_ != nullptr;};
    void deleteEnableNewArms() { this->enableNewArms_ = nullptr;};
    inline bool getEnableNewArms() const { DARABONBA_PTR_GET_DEFAULT(enableNewArms_, false) };
    inline CreateApplicationRequest& setEnableNewArms(bool enableNewArms) { DARABONBA_PTR_SET_VALUE(enableNewArms_, enableNewArms) };


    // enablePrometheus Field Functions 
    bool hasEnablePrometheus() const { return this->enablePrometheus_ != nullptr;};
    void deleteEnablePrometheus() { this->enablePrometheus_ = nullptr;};
    inline bool getEnablePrometheus() const { DARABONBA_PTR_GET_DEFAULT(enablePrometheus_, false) };
    inline CreateApplicationRequest& setEnablePrometheus(bool enablePrometheus) { DARABONBA_PTR_SET_VALUE(enablePrometheus_, enablePrometheus) };


    // enableSidecarResourceIsolated Field Functions 
    bool hasEnableSidecarResourceIsolated() const { return this->enableSidecarResourceIsolated_ != nullptr;};
    void deleteEnableSidecarResourceIsolated() { this->enableSidecarResourceIsolated_ = nullptr;};
    inline bool getEnableSidecarResourceIsolated() const { DARABONBA_PTR_GET_DEFAULT(enableSidecarResourceIsolated_, false) };
    inline CreateApplicationRequest& setEnableSidecarResourceIsolated(bool enableSidecarResourceIsolated) { DARABONBA_PTR_SET_VALUE(enableSidecarResourceIsolated_, enableSidecarResourceIsolated) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline CreateApplicationRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline string getGpuConfig() const { DARABONBA_PTR_GET_DEFAULT(gpuConfig_, "") };
    inline CreateApplicationRequest& setGpuConfig(string gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };


    // headlessPvtzDiscoverySvc Field Functions 
    bool hasHeadlessPvtzDiscoverySvc() const { return this->headlessPvtzDiscoverySvc_ != nullptr;};
    void deleteHeadlessPvtzDiscoverySvc() { this->headlessPvtzDiscoverySvc_ = nullptr;};
    inline string getHeadlessPvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(headlessPvtzDiscoverySvc_, "") };
    inline CreateApplicationRequest& setHeadlessPvtzDiscoverySvc(string headlessPvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(headlessPvtzDiscoverySvc_, headlessPvtzDiscoverySvc) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline CreateApplicationRequest& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline CreateApplicationRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateApplicationRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainersConfig Field Functions 
    bool hasInitContainersConfig() const { return this->initContainersConfig_ != nullptr;};
    void deleteInitContainersConfig() { this->initContainersConfig_ = nullptr;};
    inline const vector<InitContainerConfig> & getInitContainersConfig() const { DARABONBA_PTR_GET_CONST(initContainersConfig_, vector<InitContainerConfig>) };
    inline vector<InitContainerConfig> getInitContainersConfig() { DARABONBA_PTR_GET(initContainersConfig_, vector<InitContainerConfig>) };
    inline CreateApplicationRequest& setInitContainersConfig(const vector<InitContainerConfig> & initContainersConfig) { DARABONBA_PTR_SET_VALUE(initContainersConfig_, initContainersConfig) };
    inline CreateApplicationRequest& setInitContainersConfig(vector<InitContainerConfig> && initContainersConfig) { DARABONBA_PTR_SET_RVALUE(initContainersConfig_, initContainersConfig) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline CreateApplicationRequest& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline CreateApplicationRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline CreateApplicationRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline CreateApplicationRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // kafkaConfigs Field Functions 
    bool hasKafkaConfigs() const { return this->kafkaConfigs_ != nullptr;};
    void deleteKafkaConfigs() { this->kafkaConfigs_ = nullptr;};
    inline string getKafkaConfigs() const { DARABONBA_PTR_GET_DEFAULT(kafkaConfigs_, "") };
    inline CreateApplicationRequest& setKafkaConfigs(string kafkaConfigs) { DARABONBA_PTR_SET_VALUE(kafkaConfigs_, kafkaConfigs) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CreateApplicationRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateApplicationRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline CreateApplicationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // lokiConfigs Field Functions 
    bool hasLokiConfigs() const { return this->lokiConfigs_ != nullptr;};
    void deleteLokiConfigs() { this->lokiConfigs_ = nullptr;};
    inline string getLokiConfigs() const { DARABONBA_PTR_GET_DEFAULT(lokiConfigs_, "") };
    inline CreateApplicationRequest& setLokiConfigs(string lokiConfigs) { DARABONBA_PTR_SET_VALUE(lokiConfigs_, lokiConfigs) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateApplicationRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // microRegistration Field Functions 
    bool hasMicroRegistration() const { return this->microRegistration_ != nullptr;};
    void deleteMicroRegistration() { this->microRegistration_ = nullptr;};
    inline string getMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(microRegistration_, "") };
    inline CreateApplicationRequest& setMicroRegistration(string microRegistration) { DARABONBA_PTR_SET_VALUE(microRegistration_, microRegistration) };


    // microRegistrationConfig Field Functions 
    bool hasMicroRegistrationConfig() const { return this->microRegistrationConfig_ != nullptr;};
    void deleteMicroRegistrationConfig() { this->microRegistrationConfig_ = nullptr;};
    inline string getMicroRegistrationConfig() const { DARABONBA_PTR_GET_DEFAULT(microRegistrationConfig_, "") };
    inline CreateApplicationRequest& setMicroRegistrationConfig(string microRegistrationConfig) { DARABONBA_PTR_SET_VALUE(microRegistrationConfig_, microRegistrationConfig) };


    // microserviceEngineConfig Field Functions 
    bool hasMicroserviceEngineConfig() const { return this->microserviceEngineConfig_ != nullptr;};
    void deleteMicroserviceEngineConfig() { this->microserviceEngineConfig_ = nullptr;};
    inline string getMicroserviceEngineConfig() const { DARABONBA_PTR_GET_DEFAULT(microserviceEngineConfig_, "") };
    inline CreateApplicationRequest& setMicroserviceEngineConfig(string microserviceEngineConfig) { DARABONBA_PTR_SET_VALUE(microserviceEngineConfig_, microserviceEngineConfig) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string getMountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline CreateApplicationRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline CreateApplicationRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateApplicationRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline CreateApplicationRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline CreateApplicationRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline CreateApplicationRequest& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // oidcRoleName Field Functions 
    bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
    void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
    inline string getOidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
    inline CreateApplicationRequest& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline CreateApplicationRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline CreateApplicationRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string getOssMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline CreateApplicationRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateApplicationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline CreateApplicationRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline CreateApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // php Field Functions 
    bool hasPhp() const { return this->php_ != nullptr;};
    void deletePhp() { this->php_ = nullptr;};
    inline string getPhp() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
    inline CreateApplicationRequest& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


    // phpArmsConfigLocation Field Functions 
    bool hasPhpArmsConfigLocation() const { return this->phpArmsConfigLocation_ != nullptr;};
    void deletePhpArmsConfigLocation() { this->phpArmsConfigLocation_ = nullptr;};
    inline string getPhpArmsConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpArmsConfigLocation_, "") };
    inline CreateApplicationRequest& setPhpArmsConfigLocation(string phpArmsConfigLocation) { DARABONBA_PTR_SET_VALUE(phpArmsConfigLocation_, phpArmsConfigLocation) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline CreateApplicationRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline CreateApplicationRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline CreateApplicationRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline CreateApplicationRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline CreateApplicationRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // pvtzDiscoverySvc Field Functions 
    bool hasPvtzDiscoverySvc() const { return this->pvtzDiscoverySvc_ != nullptr;};
    void deletePvtzDiscoverySvc() { this->pvtzDiscoverySvc_ = nullptr;};
    inline string getPvtzDiscoverySvc() const { DARABONBA_PTR_GET_DEFAULT(pvtzDiscoverySvc_, "") };
    inline CreateApplicationRequest& setPvtzDiscoverySvc(string pvtzDiscoverySvc) { DARABONBA_PTR_SET_VALUE(pvtzDiscoverySvc_, pvtzDiscoverySvc) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline CreateApplicationRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline CreateApplicationRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline CreateApplicationRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateApplicationRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateApplicationRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // saeVersion Field Functions 
    bool hasSaeVersion() const { return this->saeVersion_ != nullptr;};
    void deleteSaeVersion() { this->saeVersion_ = nullptr;};
    inline string getSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(saeVersion_, "") };
    inline CreateApplicationRequest& setSaeVersion(string saeVersion) { DARABONBA_PTR_SET_VALUE(saeVersion_, saeVersion) };


    // secretMountDesc Field Functions 
    bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
    void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
    inline string getSecretMountDesc() const { DARABONBA_PTR_GET_DEFAULT(secretMountDesc_, "") };
    inline CreateApplicationRequest& setSecretMountDesc(string secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateApplicationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceTags Field Functions 
    bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
    void deleteServiceTags() { this->serviceTags_ = nullptr;};
    inline string getServiceTags() const { DARABONBA_PTR_GET_DEFAULT(serviceTags_, "") };
    inline CreateApplicationRequest& setServiceTags(string serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };


    // sidecarContainersConfig Field Functions 
    bool hasSidecarContainersConfig() const { return this->sidecarContainersConfig_ != nullptr;};
    void deleteSidecarContainersConfig() { this->sidecarContainersConfig_ = nullptr;};
    inline const vector<SidecarContainerConfig> & getSidecarContainersConfig() const { DARABONBA_PTR_GET_CONST(sidecarContainersConfig_, vector<SidecarContainerConfig>) };
    inline vector<SidecarContainerConfig> getSidecarContainersConfig() { DARABONBA_PTR_GET(sidecarContainersConfig_, vector<SidecarContainerConfig>) };
    inline CreateApplicationRequest& setSidecarContainersConfig(const vector<SidecarContainerConfig> & sidecarContainersConfig) { DARABONBA_PTR_SET_VALUE(sidecarContainersConfig_, sidecarContainersConfig) };
    inline CreateApplicationRequest& setSidecarContainersConfig(vector<SidecarContainerConfig> && sidecarContainersConfig) { DARABONBA_PTR_SET_RVALUE(sidecarContainersConfig_, sidecarContainersConfig) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline CreateApplicationRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // slsLogEnvTags Field Functions 
    bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
    void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
    inline string getSlsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
    inline CreateApplicationRequest& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline string getStartupProbe() const { DARABONBA_PTR_GET_DEFAULT(startupProbe_, "") };
    inline CreateApplicationRequest& setStartupProbe(string startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline CreateApplicationRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateApplicationRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline CreateApplicationRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateApplicationRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateApplicationRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline CreateApplicationRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline CreateApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The ARN of the RAM role required to pull images across Alibaba Cloud accounts. For more information, see [Authorize cross-account access using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The Container Registry Enterprise Edition (ACR Enterprise Edition) instance ID. This parameter is required when **ImageUrl** is a Container Registry Enterprise Edition image.
    shared_ptr<string> acrInstanceId_ {};
    // The AliyunAgent version.
    shared_ptr<string> agentVersion_ {};
    // The application description. It cannot exceed 1024 characters.
    shared_ptr<string> appDescription_ {};
    // The application name. It can contain digits, letters, and hyphens (-). It must start with a letter and cannot end with a hyphen (-). The name cannot exceed 36 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Select micro_service for a microservice application.
    shared_ptr<string> appSource_ {};
    // Whether to bind an Elastic IP address (EIP). Valid values:
    // 
    // - **true**: Bind.
    // 
    // - **false**: Do not bind.
    shared_ptr<bool> associateEip_ {};
    // Whether to automatically configure the network environment. Valid values:
    // 
    // - **true**: SAE automatically configures the network environment when creating an application. The values of **NamespaceId**, **VpcId**, **vSwitchId**, and **SecurityGroupId** are ignored.
    // 
    // - **false**: SAE manually configures the network environment when creating an application.
    // 
    // > If you select **true**, other **NamespaceId** values passed are ignored.
    shared_ptr<bool> autoConfig_ {};
    // The base application ID.
    shared_ptr<string> baseAppId_ {};
    // The image start command. This command must be an executable object that exists in the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // 
    // Based on the example, Command="echo" and `CommandArgs=["abc", ">", "file0"]`.
    // 
    // >Notice: 
    // 
    // This option is required when PackageType is DotnetZip.
    shared_ptr<string> command_ {};
    // The image start command parameters. These are the parameters required by the **Command** parameter. Format:
    // 
    // `["a","b"]`
    // 
    // In the example, `CommandArgs=["abc", ">", "file0"]`. Convert `["abc", ">", "file0"]` to a string type, with the format as a JSON array. If this parameter is not needed, do not specify it.
    // >Notice: This option is required when PackageType is DotnetZip.
    shared_ptr<string> commandArgs_ {};
    // The **ConfigMap** mount description. Use configuration items created on the namespace configuration item page to inject configuration information into the container. Parameter description:
    // 
    // - **configMapId**: The ConfigMap instance ID. Obtain it by calling the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) API operation.
    // 
    // - **key**: The key value.
    // 
    // > You can mount all keys by passing the `sae-sys-configmap-all` parameter.
    // 
    // - **mountPath**: The mount path.
    shared_ptr<string> configMapMountDesc_ {};
    // The CPU required for each instance, in millicores. It cannot be 0. Currently, only the following defined specifications are supported:
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
    // - **16000**
    // 
    // - **32000**
    shared_ptr<int32_t> cpu_ {};
    // Custom Host mapping within the container. Valid values:
    // 
    // - **hostName**: The domain name or hostname.
    // 
    // - **ip**: The IP address.
    shared_ptr<string> customHostAlias_ {};
    // The custom image type. If it is not a custom image, set it to an empty string:
    // 
    // - internet: Public network image.
    // 
    // - intranet: Private network image.
    shared_ptr<string> customImageNetworkType_ {};
    // Whether to deploy immediately. Valid values:
    // 
    // - **true**: Default value. Deploy immediately.
    // 
    // - **false**: Deploy later.
    shared_ptr<bool> deploy_ {};
    // The disk storage size, in GB.
    shared_ptr<int32_t> diskSize_ {};
    // The version number of the .NET framework:
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
    // The application runtime environment version in the HSF framework, such as the Ali-Tomcat container.
    shared_ptr<string> edasContainerVersion_ {};
    // Shared temporary storage configuration.
    shared_ptr<string> emptyDirDesc_ {};
    // Whether to enable the CPU Burst feature:
    // 
    // - true: Enable.
    // 
    // - false: Do not enable.
    shared_ptr<bool> enableCpuBurst_ {};
    // Enable application monitoring for non-Java applications based on eBPF technology. Valid values:
    // 
    // - **true**: Enable.
    // 
    // - **false**: Disable. Default value.
    shared_ptr<string> enableEbpf_ {};
    // Whether to reuse the namespace Agent version configuration.
    shared_ptr<bool> enableNamespaceAgentVersion_ {};
    // Whether to reuse the namespace SLS log configuration.
    shared_ptr<bool> enableNamespaceSlsConfig_ {};
    // Whether to enable new ARMS features:
    // 
    // - true: Enable.
    // 
    // - false: Do not enable.
    shared_ptr<bool> enableNewArms_ {};
    // Whether to enable Prometheus custom metric collection.
    shared_ptr<bool> enablePrometheus_ {};
    // Whether to enable Sidecar resource isolation:
    // 
    // - true: Enable isolation.
    // 
    // - false: Do not enable isolation.
    shared_ptr<bool> enableSidecarResourceIsolated_ {};
    // Container environment variable parameters. Support custom configurations or referencing configuration items. To reference a configuration item, create a ConfigMap instance first. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
    // 
    // - Custom configuration
    // 
    //   - **name**: The environment variable name.
    // 
    //   - **value**: The environment variable value. This has a higher priority than valueFrom.
    // 
    // - Reference configuration item (valueFrom)
    // 
    //   - **name**: The environment variable name. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<configuration item name>`, for example, `sae-sys-configmap-all-test1`.
    // 
    //   - **valueFrom**: The environment variable reference. Set this to `configMapRef`.
    // 
    //     - **configMapId**: The configuration item ID.
    // 
    //     - **key**: The key. If you reference all key-values, do not set this field.
    shared_ptr<string> envs_ {};
    shared_ptr<string> gpuConfig_ {};
    // K8s Headless Service service discovery.
    // 
    // - serviceName: The service name.
    // 
    // - namespaceId: The namespace ID.
    shared_ptr<string> headlessPvtzDiscoverySvc_ {};
    // The Nginx version.
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
    // The image address. This parameter is required when **Package Type** is **Image**.
    shared_ptr<string> imageUrl_ {};
    // Initialization container configuration.
    shared_ptr<vector<InitContainerConfig>> initContainersConfig_ {};
    // Whether it is a stateful application.
    shared_ptr<bool> isStateful_ {};
    // JAR package startup parameters for the application. The application\\"s default start command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // JAR package startup options for the application. The application\\"s default start command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The JDK version that the deployment package depends on. Supported versions:
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
    // The summary configuration for collecting logs to Kafka. Valid values:
    // 
    // - **kafkaEndpoint**: The service registration address for the Kafka API.
    // 
    // - **kafkaInstanceId**: The Kafka instance ID.
    // 
    // - **kafkaConfigs**: The summary configuration for single or multiple logs. For valid values, see the **kafkaConfigs** request parameter in this topic.
    shared_ptr<string> kafkaConfigs_ {};
    shared_ptr<map<string, string>> labels_ {};
    // Container health check. Containers that fail the health check are shut down and recovered. Supported methods:
    // 
    // - **exec**: For example, `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
    // 
    // - **httpGet**: For example, `{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // - **tcpSocket**: For example, `{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // > Select only one method for the health check.
    // 
    // Parameter description:
    // 
    // - **exec.command**: Set the health check command.
    // 
    // - **httpGet.path**: The access path.
    // 
    // - **httpGet.scheme**: **HTTP** or **HTTPS**.
    // 
    // - **httpGet.isContainKeyWord**: **true** means the keyword is included, **false** means the keyword is not included. If this field is missing, advanced features are not used.
    // 
    // - **httpGet.keyWord**: The custom keyword. Do not omit the **isContainKeyWord** field when using it.
    // 
    // - **tcpSocket.port**: The port for TCP connection detection.
    // 
    // - **initialDelaySeconds**: Set the health check delay detection time. Default is 10 seconds.
    // 
    // - **periodSeconds**: Set the health check period. Default is 30 seconds.
    // 
    // - **timeoutSeconds**: Set the health check timeout duration. Default is 1 second. If you set it to 0 or do not set it, the default timeout is 1 second.
    shared_ptr<string> liveness_ {};
    shared_ptr<string> lokiConfigs_ {};
    // The memory required for each instance, in MB. It cannot be 0. It has a one-to-one correspondence with CPU. Currently, only the following defined specifications are supported:
    // 
    // - **1024**: Corresponds to 500 millicores and 1000 millicores CPU.
    // 
    // - **2048**: Corresponds to 500, 1000 millicores, and 2000 millicores CPU.
    // 
    // - **4096**: Corresponds to 1000, 2000 millicores, and 4000 millicores CPU.
    // 
    // - **8192**: Corresponds to 2000, 4000 millicores, and 8000 millicores CPU.
    // 
    // - **12288**: Corresponds to 12000 millicores CPU.
    // 
    // - **16384**: Corresponds to 4000, 8000 millicores, and 16000 millicores CPU.
    // 
    // - **24576**: Corresponds to 12000 millicores CPU.
    // 
    // - **32768**: Corresponds to 16000 millicores CPU.
    // 
    // - **65536**: Corresponds to 8000, 16000, and 32000 millicores CPU.
    // 
    // - **131072**: Corresponds to 32000 millicores CPU.
    shared_ptr<int32_t> memory_ {};
    // Select the Nacos registry. Valid values:
    // 
    // - **0**: SAE built-in Nacos.
    // 
    // - **1**: User-managed Nacos.
    // 
    // - **2**: MSE Professional Edition Nacos.
    shared_ptr<string> microRegistration_ {};
    // The registry configuration information.
    shared_ptr<string> microRegistrationConfig_ {};
    // Configure microservice administration features.
    // 
    // - Whether to enable microservice administration (enable):
    // 
    //   - true: Enable.
    // 
    //   - false: Do not enable.
    // 
    // - Configure graceful start and graceful shutdown (mseLosslessRule):
    // 
    //   - delayTime: The delay time.
    // 
    //   - enable: Whether to enable the graceful start feature. true means enabled, false means not enabled.
    // 
    //   - notice: Whether to enable the notification feature. true means enabled, false means enabled.
    // 
    //   - warmupTime: The duration of traffic prefetch, in seconds.
    shared_ptr<string> microserviceEngineConfig_ {};
    // Do not configure this field; configure **NasConfigs** instead. The NAS mount description. If the configuration has not changed during deployment, you do not need to set this parameter (that is, the request does not need to include the **MountDesc** field). To clear the NAS configuration, set the value of this field to an empty string in the request (that is, the value of the **MountDesc** field in the request is "").
    shared_ptr<string> mountDesc_ {};
    // Do not configure this field; configure **NasConfigs** instead. The NAS mount target within the application VPC. If the configuration has not changed during deployment, you do not need to set this parameter (that is, the request does not need to include the **MountHost** field). To clear the NAS configuration, set the value of this field to an empty string in the request (that is, the value of the **MountHost** field in the request is "").
    shared_ptr<string> mountHost_ {};
    // The SAE namespace ID. Only namespaces with names consisting of lowercase letters and hyphens (-) are supported. The name must start with a letter. Obtain the namespace by calling the [DescribeNamespaceList](https://help.aliyun.com/document_detail/126547.html) API operation.
    shared_ptr<string> namespaceId_ {};
    // The configuration for mounting NAS. Valid values:
    // 
    // - **mountPath**: The container mount path.
    // 
    // - **readOnly**: If the value is **false**, it indicates read and write permission.
    // 
    // - **nasId**: The NAS ID.
    // 
    // - **mountDomain**: The container mount target address. For more information, see [DescribeMountTargets](https://help.aliyun.com/document_detail/62626.html).
    // 
    // - **nasPath**: The relative file directory of NAS.
    shared_ptr<string> nasConfigs_ {};
    // Do not configure this field; configure **NasConfigs** instead. The ID of the mounted NAS. It must be in the same region as the cluster. It must have available mount target creation quotas, or its mount target must already be on a vSwitch within the VPC. If you do not specify this parameter and the **mountDescs** field exists, the system automatically purchases a NAS and mounts it to a vSwitch within the VPC by default.
    // 
    // If the configuration has not changed during deployment, you do not need to set this parameter (that is, the request does not need to include the **NASId** field). To clear the NAS configuration, set the value of this field to an empty string in the request (that is, the value of the **NASId** field in the request is "").
    shared_ptr<string> nasId_ {};
    // The application version:
    // 
    // - lite: Lightweight Edition
    // 
    // - std: Standard Edition
    // 
    // - pro: Professional Edition
    shared_ptr<string> newSaeVersion_ {};
    // Set the identity authentication service RAM role.
    // 
    // > Create an OpenID Connect (OIDC) identity provider and an identity provider role in the same region beforehand. For more information, see<props="china">[Create an OIDC identity provider](https://help.aliyun.com/zh/ram/developer-reference/api-ims-2019-08-15-createoidcprovider?spm=a2c4g.11186623.help-menu-28625.d_4_1_0_3_2_7.7f0443efmdpxa3) and[Create a role SSO identity provider](https://help.aliyun.com/zh/ram/developer-reference/api-ims-2019-08-15-createsamlprovider?spm=a2c4g.11186623.help-menu-28625.d_4_1_0_3_2_2.632244b1s8QbQt)<props="intl">[Create an OIDC identity provider](https://www.alibabacloud.com/help/zh/ram/developer-reference/api-ims-2019-08-15-createoidcprovider) and[Create a role SSO identity provider](https://www.alibabacloud.com/help/zh/ram/developer-reference/api-ims-2019-08-15-createsamlprovider).
    shared_ptr<string> oidcRoleName_ {};
    // The AccessKey ID for OSS read and write operations.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey Secret for OSS read and write operations.
    shared_ptr<string> ossAkSecret_ {};
    // OSS mount description. Parameter description:
    // 
    // - **bucketName**: The Bucket name.
    // 
    // - **bucketPath**: The directory or OSS object you created in OSS. If the OSS mount directory does not exist, an exception is triggered.
    // 
    // - **mountPath**: The container path in SAE. If the path exists, it is overwritten. If the path does not exist, it is created.
    // 
    // - **readOnly**: Whether the container path has read permission for the mounted directory resource. Valid values:
    // 
    //   - **true**: Read-only permission.
    // 
    //   - **false**: Read and write permission.
    shared_ptr<string> ossMountDescs_ {};
    // The application package type. Valid values:
    // 
    // - If you deploy with Java, supported types are **FatJar**, **War**, and **Image**.
    // 
    // - If you deploy with PHP, supported types are:
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
    // - If you deploy with Python, supported types are **PythonZip** and **Image**.
    // 
    // - If you deploy with .NET Core, supported types are **DotnetZip** and **Image**.
    // 
    //   > When you select DotnetZip, Dotnet is the version number of the .NET Core environment. Supported versions are .NET 3.1, .NET 5.0, .NET 6.0, .NET 7.0, and .NET 8.0. The Dotnet, Command, and CommandArgs options are required.
    // 
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // The URL of the deployment package. This parameter is required when **Package Type** is **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version number of the deployment package. This parameter is required when **Package Type** is **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The PHP version that the PHP deployment package depends on. Images do not support this.
    shared_ptr<string> php_ {};
    // The mount path for PHP application monitoring. Ensure that the PHP server loads the configuration file from this path. You do not need to focus on the configuration content; SAE automatically renders the correct configuration file.
    shared_ptr<string> phpArmsConfigLocation_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path for PHP application startup configuration. Ensure that the PHP server uses this configuration file to start.
    shared_ptr<string> phpConfigLocation_ {};
    // The script to execute after the container starts. A script is triggered immediately after the container is created. Format: `{"exec":{"command":["cat","/etc/group"]}}`
    shared_ptr<string> postStart_ {};
    // The script to execute before the container stops. A script is triggered before the container is deleted. Format: `{"exec":{"command":["cat","/etc/group"]}}`
    shared_ptr<string> preStop_ {};
    // The technology stack language for creating the application. Valid values:
    // 
    // - **java**: Java language.
    // 
    // - **php**: PHP language.
    // 
    // - **python**: Python language.
    // 
    // - **dotnet**: .NET Core language.
    // 
    // - **other**: Multi-language, such as C++, Go, and Node.js.
    shared_ptr<string> programmingLanguage_ {};
    // Enable K8s Service service discovery. Valid values:
    // 
    // - **serviceName**: The service name. Format: `custom-namespace ID`. The suffix `-namespace ID` cannot be customized; specify it based on the application\\"s namespace. For example, if you select the default namespace in the China (Beijing) region, it is `-cn-beijing-default`.
    // 
    // - **namespaceId**: The namespace ID.
    // 
    // - **portProtocols**: The port and protocol. The port range is [1, 65535]. Supported protocols are **TCP** and **UDP**.
    // 
    // - portAndProtocol: The port and protocol. The port range is [1, 65535]. Supported protocols are TCP and **UDP**. **portProtocols** is recommended. If **portProtocols** is set, only **portProtocols** takes effect.
    // 
    // - **enable**: Enable K8s Service service discovery.
    shared_ptr<string> pvtzDiscoverySvc_ {};
    // The Python environment. Supports **PYTHON 3.9.15**.
    shared_ptr<string> python_ {};
    // Custom installation of module dependencies. By default, the system installs dependencies defined in requirements.txt in the root directory. If you do not configure or customize packages, you can specify the dependencies to install.
    shared_ptr<string> pythonModules_ {};
    // Application startup status check. Containers that fail multiple health checks are shut down and restarted. Containers that do not pass the health check will not receive SLB traffic. Supported methods are **exec**, **httpGet**, and **tcpSocket**. For examples, see the **Liveness** parameter.
    // 
    // > Select only one method for the health check.
    shared_ptr<string> readiness_ {};
    // The initial number of instances.
    // 
    // This parameter is required.
    shared_ptr<int32_t> replicas_ {};
    // The resource type. Supports NULL (default), default, and haiguang (Haiguang server) types.
    shared_ptr<string> resourceType_ {};
    // The SAE version. Supported versions:
    // 
    // - **v1**
    // 
    // - **v2**
    shared_ptr<string> saeVersion_ {};
    // The **Secret** mount description. Use secrets created on the namespace secret page to inject secret information into the container. Parameter description:
    // 
    // - **secretId**: The secret instance ID. Obtain it by calling the ListSecrets API operation.
    // 
    // - **key**: The key value.
    // 
    // > You can mount all keys by passing the `sae-sys-secret-all` parameter.
    // 
    // - **mountPath**: The mount path.
    shared_ptr<string> secretMountDesc_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The grayscale tags for application configuration.
    shared_ptr<string> serviceTags_ {};
    // Container configuration information.
    shared_ptr<vector<SidecarContainerConfig>> sidecarContainersConfig_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - Use SLS resources automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // 
    // - Use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // Parameter description:
    // 
    // - **projectName**: The name of the Project on SLS.
    // 
    // - **logDir**: The log path.
    // 
    // - **logType**: The log type. **stdout** indicates container standard output logs; you can set only one such entry. If you do not set this, the system collects file logs.
    // 
    // - **logstoreName**: The name of the Logstore on SLS.
    // 
    // - **logtailName**: The name of the Logtail on SLS. If you do not specify this, the system creates a new Logtail.
    // 
    // If the SLS collection configuration has not changed during multiple deployments, you do not need to set this parameter (that is, the request does not need to include the **SlsConfigs** field). If you no longer need the SLS collection feature, set the value of this field to an empty string in the request (that is, the value of the **SlsConfigs** field in the request is "").
    // 
    // > Projects automatically created with an application are deleted when the application is deleted. Therefore, when selecting an existing Project, do not select a Project automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // SLS log tags.
    shared_ptr<string> slsLogEnvTags_ {};
    // Enable application startup probes.
    // 
    // - Successful check: Indicates that the application started successfully. If you configured Liveness and Readiness checks, the system performs Liveness and Readiness checks after the application starts successfully.
    // 
    // - Failed check: Indicates that the application failed to start. The system reports an exception and automatically restarts the application.
    // 
    // > * Supported methods are exec, httpGet, and tcpSocket. For examples, see the Liveness parameter.
    // >
    // > * Select only one method for the health check.
    shared_ptr<string> startupProbe_ {};
    // The graceful shutdown timeout duration. Default is 30 seconds. Valid values are 1 to 300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The time zone. Default is **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // Tomcat file configuration. Set to "" or "{}" to delete the configuration:
    // 
    // - **port**: The port range is 1024 to 65535. Ports less than 1024 require root permissions to operate. Because the container is configured with Admin permissions, specify a port greater than 1024. If you do not configure this, the default is 8080.
    // 
    // - **contextPath**: The access path. Default is the root directory "/".
    // 
    // - **maxThreads**: Configure the connection pool size. Default is 400.
    // 
    // - uriEncoding: The encoding format for Tomcat, including **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. If you do not set this, the default is **ISO-8859-1**.
    // 
    // - **useBodyEncodingForUri**: Whether to use **BodyEncoding for URL**. Default is **true**.
    shared_ptr<string> tomcatConfig_ {};
    // The virtual switch (vSwitch) where the application instance\\"s Elastic Network Interface (ENI) is located. This vSwitch must be within the specified VPC. This vSwitch also has a binding relationship with the SAE namespace. If you do not specify this parameter, the system uses the vSwitch ID bound to the namespace by default.
    shared_ptr<string> vSwitchId_ {};
    // The VPC corresponding to the SAE namespace. In SAE, a namespace can only correspond to one VPC, and you cannot change it. The first time you create an SAE application in a namespace, a binding relationship forms. Multiple namespaces can correspond to one VPC. If you do not specify this parameter, the system uses the VPC ID bound to the namespace by default.
    shared_ptr<string> vpcId_ {};
    // Set the startup command for WAR package deployed applications. The procedure is the same as configuring the startup command for image deployments. For more information, see [Set the startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The Tomcat version that the WebContainer deployment package depends on. Supported versions:
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
