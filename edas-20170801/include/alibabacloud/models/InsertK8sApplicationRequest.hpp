// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertK8sApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertK8sApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppTemplateName, appTemplateName_);
      DARABONBA_PTR_TO_JSON(ApplicationDescription, applicationDescription_);
      DARABONBA_PTR_TO_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_TO_JSON(ContainerRegistryId, containerRegistryId_);
      DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_TO_JSON(CustomAffinity, customAffinity_);
      DARABONBA_PTR_TO_JSON(CustomAgentVersion, customAgentVersion_);
      DARABONBA_PTR_TO_JSON(CustomTolerations, customTolerations_);
      DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnableAsm, enableAsm_);
      DARABONBA_PTR_TO_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_TO_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_TO_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(FeatureConfig, featureConfig_);
      DARABONBA_PTR_TO_JSON(ImagePlatforms, imagePlatforms_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_TO_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_TO_JSON(InternetSlbPort, internetSlbPort_);
      DARABONBA_PTR_TO_JSON(InternetSlbProtocol, internetSlbProtocol_);
      DARABONBA_PTR_TO_JSON(InternetTargetPort, internetTargetPort_);
      DARABONBA_PTR_TO_JSON(IntranetSlbId, intranetSlbId_);
      DARABONBA_PTR_TO_JSON(IntranetSlbPort, intranetSlbPort_);
      DARABONBA_PTR_TO_JSON(IntranetSlbProtocol, intranetSlbProtocol_);
      DARABONBA_PTR_TO_JSON(IntranetTargetPort, intranetTargetPort_);
      DARABONBA_PTR_TO_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_TO_JSON(JDK, JDK_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_TO_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_TO_JSON(LimitmCpu, limitmCpu_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_TO_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_TO_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_TO_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_TO_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_TO_JSON(MountDescs, mountDescs_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RequestsCpu, requestsCpu_);
      DARABONBA_PTR_TO_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(RequestsMem, requestsMem_);
      DARABONBA_PTR_TO_JSON(RequestsmCpu, requestsmCpu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(ServiceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(Sidecars, sidecars_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(Startup, startup_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TerminateGracePeriod, terminateGracePeriod_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_TO_JSON(UserBaseImageUrl, userBaseImageUrl_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_TO_JSON(WebContainerConfig, webContainerConfig_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, InsertK8sApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppTemplateName, appTemplateName_);
      DARABONBA_PTR_FROM_JSON(ApplicationDescription, applicationDescription_);
      DARABONBA_PTR_FROM_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_FROM_JSON(ContainerRegistryId, containerRegistryId_);
      DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_FROM_JSON(CustomAffinity, customAffinity_);
      DARABONBA_PTR_FROM_JSON(CustomAgentVersion, customAgentVersion_);
      DARABONBA_PTR_FROM_JSON(CustomTolerations, customTolerations_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnableAsm, enableAsm_);
      DARABONBA_PTR_FROM_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_FROM_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_FROM_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(FeatureConfig, featureConfig_);
      DARABONBA_PTR_FROM_JSON(ImagePlatforms, imagePlatforms_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_FROM_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_FROM_JSON(InternetSlbPort, internetSlbPort_);
      DARABONBA_PTR_FROM_JSON(InternetSlbProtocol, internetSlbProtocol_);
      DARABONBA_PTR_FROM_JSON(InternetTargetPort, internetTargetPort_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbId, intranetSlbId_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbPort, intranetSlbPort_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbProtocol, intranetSlbProtocol_);
      DARABONBA_PTR_FROM_JSON(IntranetTargetPort, intranetTargetPort_);
      DARABONBA_PTR_FROM_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_FROM_JSON(JDK, JDK_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_FROM_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_FROM_JSON(LimitmCpu, limitmCpu_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_FROM_JSON(MountDescs, mountDescs_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RequestsCpu, requestsCpu_);
      DARABONBA_PTR_FROM_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(RequestsMem, requestsMem_);
      DARABONBA_PTR_FROM_JSON(RequestsmCpu, requestsmCpu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(ServiceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(Sidecars, sidecars_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(Startup, startup_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TerminateGracePeriod, terminateGracePeriod_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_FROM_JSON(UserBaseImageUrl, userBaseImageUrl_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_FROM_JSON(WebContainerConfig, webContainerConfig_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    InsertK8sApplicationRequest() = default ;
    InsertK8sApplicationRequest(const InsertK8sApplicationRequest &) = default ;
    InsertK8sApplicationRequest(InsertK8sApplicationRequest &&) = default ;
    InsertK8sApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertK8sApplicationRequest() = default ;
    InsertK8sApplicationRequest& operator=(const InsertK8sApplicationRequest &) = default ;
    InsertK8sApplicationRequest& operator=(InsertK8sApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->appConfig_ == nullptr && this->appName_ == nullptr && this->appTemplateName_ == nullptr && this->applicationDescription_ == nullptr && this->buildPackId_ == nullptr
        && this->clusterId_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr && this->configMountDescs_ == nullptr && this->containerRegistryId_ == nullptr
        && this->csClusterId_ == nullptr && this->customAffinity_ == nullptr && this->customAgentVersion_ == nullptr && this->customTolerations_ == nullptr && this->deployAcrossNodes_ == nullptr
        && this->deployAcrossZones_ == nullptr && this->edasContainerVersion_ == nullptr && this->emptyDirs_ == nullptr && this->enableAhas_ == nullptr && this->enableAsm_ == nullptr
        && this->enableEmptyPushReject_ == nullptr && this->enableLosslessRule_ == nullptr && this->envFroms_ == nullptr && this->envs_ == nullptr && this->featureConfig_ == nullptr
        && this->imagePlatforms_ == nullptr && this->imageUrl_ == nullptr && this->initContainers_ == nullptr && this->internetSlbId_ == nullptr && this->internetSlbPort_ == nullptr
        && this->internetSlbProtocol_ == nullptr && this->internetTargetPort_ == nullptr && this->intranetSlbId_ == nullptr && this->intranetSlbPort_ == nullptr && this->intranetSlbProtocol_ == nullptr
        && this->intranetTargetPort_ == nullptr && this->isMultilingualApp_ == nullptr && this->JDK_ == nullptr && this->javaStartUpConfig_ == nullptr && this->labels_ == nullptr
        && this->limitCpu_ == nullptr && this->limitEphemeralStorage_ == nullptr && this->limitMem_ == nullptr && this->limitmCpu_ == nullptr && this->liveness_ == nullptr
        && this->localVolume_ == nullptr && this->logicalRegionId_ == nullptr && this->losslessRuleAligned_ == nullptr && this->losslessRuleDelayTime_ == nullptr && this->losslessRuleFuncType_ == nullptr
        && this->losslessRuleRelated_ == nullptr && this->losslessRuleWarmupTime_ == nullptr && this->mountDescs_ == nullptr && this->namespace_ == nullptr && this->nasId_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr
        && this->pvcMountDescs_ == nullptr && this->readiness_ == nullptr && this->replicas_ == nullptr && this->repoId_ == nullptr && this->requestsCpu_ == nullptr
        && this->requestsEphemeralStorage_ == nullptr && this->requestsMem_ == nullptr && this->requestsmCpu_ == nullptr && this->resourceGroupId_ == nullptr && this->runtimeClassName_ == nullptr
        && this->secretName_ == nullptr && this->securityContext_ == nullptr && this->serviceConfigs_ == nullptr && this->sidecars_ == nullptr && this->slsConfigs_ == nullptr
        && this->startup_ == nullptr && this->storageType_ == nullptr && this->terminateGracePeriod_ == nullptr && this->timeout_ == nullptr && this->uriEncoding_ == nullptr
        && this->useBodyEncoding_ == nullptr && this->userBaseImageUrl_ == nullptr && this->webContainer_ == nullptr && this->webContainerConfig_ == nullptr && this->workloadType_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline InsertK8sApplicationRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string getAppConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline InsertK8sApplicationRequest& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline InsertK8sApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appTemplateName Field Functions 
    bool hasAppTemplateName() const { return this->appTemplateName_ != nullptr;};
    void deleteAppTemplateName() { this->appTemplateName_ = nullptr;};
    inline string getAppTemplateName() const { DARABONBA_PTR_GET_DEFAULT(appTemplateName_, "") };
    inline InsertK8sApplicationRequest& setAppTemplateName(string appTemplateName) { DARABONBA_PTR_SET_VALUE(appTemplateName_, appTemplateName) };


    // applicationDescription Field Functions 
    bool hasApplicationDescription() const { return this->applicationDescription_ != nullptr;};
    void deleteApplicationDescription() { this->applicationDescription_ = nullptr;};
    inline string getApplicationDescription() const { DARABONBA_PTR_GET_DEFAULT(applicationDescription_, "") };
    inline InsertK8sApplicationRequest& setApplicationDescription(string applicationDescription) { DARABONBA_PTR_SET_VALUE(applicationDescription_, applicationDescription) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline string getBuildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, "") };
    inline InsertK8sApplicationRequest& setBuildPackId(string buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertK8sApplicationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline InsertK8sApplicationRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline InsertK8sApplicationRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline string getConfigMountDescs() const { DARABONBA_PTR_GET_DEFAULT(configMountDescs_, "") };
    inline InsertK8sApplicationRequest& setConfigMountDescs(string configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };


    // containerRegistryId Field Functions 
    bool hasContainerRegistryId() const { return this->containerRegistryId_ != nullptr;};
    void deleteContainerRegistryId() { this->containerRegistryId_ = nullptr;};
    inline string getContainerRegistryId() const { DARABONBA_PTR_GET_DEFAULT(containerRegistryId_, "") };
    inline InsertK8sApplicationRequest& setContainerRegistryId(string containerRegistryId) { DARABONBA_PTR_SET_VALUE(containerRegistryId_, containerRegistryId) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline InsertK8sApplicationRequest& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // customAffinity Field Functions 
    bool hasCustomAffinity() const { return this->customAffinity_ != nullptr;};
    void deleteCustomAffinity() { this->customAffinity_ = nullptr;};
    inline string getCustomAffinity() const { DARABONBA_PTR_GET_DEFAULT(customAffinity_, "") };
    inline InsertK8sApplicationRequest& setCustomAffinity(string customAffinity) { DARABONBA_PTR_SET_VALUE(customAffinity_, customAffinity) };


    // customAgentVersion Field Functions 
    bool hasCustomAgentVersion() const { return this->customAgentVersion_ != nullptr;};
    void deleteCustomAgentVersion() { this->customAgentVersion_ = nullptr;};
    inline string getCustomAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(customAgentVersion_, "") };
    inline InsertK8sApplicationRequest& setCustomAgentVersion(string customAgentVersion) { DARABONBA_PTR_SET_VALUE(customAgentVersion_, customAgentVersion) };


    // customTolerations Field Functions 
    bool hasCustomTolerations() const { return this->customTolerations_ != nullptr;};
    void deleteCustomTolerations() { this->customTolerations_ = nullptr;};
    inline string getCustomTolerations() const { DARABONBA_PTR_GET_DEFAULT(customTolerations_, "") };
    inline InsertK8sApplicationRequest& setCustomTolerations(string customTolerations) { DARABONBA_PTR_SET_VALUE(customTolerations_, customTolerations) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline string getDeployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
    inline InsertK8sApplicationRequest& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline string getDeployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
    inline InsertK8sApplicationRequest& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline InsertK8sApplicationRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline string getEmptyDirs() const { DARABONBA_PTR_GET_DEFAULT(emptyDirs_, "") };
    inline InsertK8sApplicationRequest& setEmptyDirs(string emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline InsertK8sApplicationRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableAsm Field Functions 
    bool hasEnableAsm() const { return this->enableAsm_ != nullptr;};
    void deleteEnableAsm() { this->enableAsm_ = nullptr;};
    inline bool getEnableAsm() const { DARABONBA_PTR_GET_DEFAULT(enableAsm_, false) };
    inline InsertK8sApplicationRequest& setEnableAsm(bool enableAsm) { DARABONBA_PTR_SET_VALUE(enableAsm_, enableAsm) };


    // enableEmptyPushReject Field Functions 
    bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
    void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
    inline bool getEnableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
    inline InsertK8sApplicationRequest& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


    // enableLosslessRule Field Functions 
    bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
    void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
    inline bool getEnableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
    inline InsertK8sApplicationRequest& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline string getEnvFroms() const { DARABONBA_PTR_GET_DEFAULT(envFroms_, "") };
    inline InsertK8sApplicationRequest& setEnvFroms(string envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline InsertK8sApplicationRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // featureConfig Field Functions 
    bool hasFeatureConfig() const { return this->featureConfig_ != nullptr;};
    void deleteFeatureConfig() { this->featureConfig_ = nullptr;};
    inline string getFeatureConfig() const { DARABONBA_PTR_GET_DEFAULT(featureConfig_, "") };
    inline InsertK8sApplicationRequest& setFeatureConfig(string featureConfig) { DARABONBA_PTR_SET_VALUE(featureConfig_, featureConfig) };


    // imagePlatforms Field Functions 
    bool hasImagePlatforms() const { return this->imagePlatforms_ != nullptr;};
    void deleteImagePlatforms() { this->imagePlatforms_ = nullptr;};
    inline string getImagePlatforms() const { DARABONBA_PTR_GET_DEFAULT(imagePlatforms_, "") };
    inline InsertK8sApplicationRequest& setImagePlatforms(string imagePlatforms) { DARABONBA_PTR_SET_VALUE(imagePlatforms_, imagePlatforms) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline InsertK8sApplicationRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline string getInitContainers() const { DARABONBA_PTR_GET_DEFAULT(initContainers_, "") };
    inline InsertK8sApplicationRequest& setInitContainers(string initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };


    // internetSlbId Field Functions 
    bool hasInternetSlbId() const { return this->internetSlbId_ != nullptr;};
    void deleteInternetSlbId() { this->internetSlbId_ = nullptr;};
    inline string getInternetSlbId() const { DARABONBA_PTR_GET_DEFAULT(internetSlbId_, "") };
    inline InsertK8sApplicationRequest& setInternetSlbId(string internetSlbId) { DARABONBA_PTR_SET_VALUE(internetSlbId_, internetSlbId) };


    // internetSlbPort Field Functions 
    bool hasInternetSlbPort() const { return this->internetSlbPort_ != nullptr;};
    void deleteInternetSlbPort() { this->internetSlbPort_ = nullptr;};
    inline int32_t getInternetSlbPort() const { DARABONBA_PTR_GET_DEFAULT(internetSlbPort_, 0) };
    inline InsertK8sApplicationRequest& setInternetSlbPort(int32_t internetSlbPort) { DARABONBA_PTR_SET_VALUE(internetSlbPort_, internetSlbPort) };


    // internetSlbProtocol Field Functions 
    bool hasInternetSlbProtocol() const { return this->internetSlbProtocol_ != nullptr;};
    void deleteInternetSlbProtocol() { this->internetSlbProtocol_ = nullptr;};
    inline string getInternetSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetSlbProtocol_, "") };
    inline InsertK8sApplicationRequest& setInternetSlbProtocol(string internetSlbProtocol) { DARABONBA_PTR_SET_VALUE(internetSlbProtocol_, internetSlbProtocol) };


    // internetTargetPort Field Functions 
    bool hasInternetTargetPort() const { return this->internetTargetPort_ != nullptr;};
    void deleteInternetTargetPort() { this->internetTargetPort_ = nullptr;};
    inline int32_t getInternetTargetPort() const { DARABONBA_PTR_GET_DEFAULT(internetTargetPort_, 0) };
    inline InsertK8sApplicationRequest& setInternetTargetPort(int32_t internetTargetPort) { DARABONBA_PTR_SET_VALUE(internetTargetPort_, internetTargetPort) };


    // intranetSlbId Field Functions 
    bool hasIntranetSlbId() const { return this->intranetSlbId_ != nullptr;};
    void deleteIntranetSlbId() { this->intranetSlbId_ = nullptr;};
    inline string getIntranetSlbId() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbId_, "") };
    inline InsertK8sApplicationRequest& setIntranetSlbId(string intranetSlbId) { DARABONBA_PTR_SET_VALUE(intranetSlbId_, intranetSlbId) };


    // intranetSlbPort Field Functions 
    bool hasIntranetSlbPort() const { return this->intranetSlbPort_ != nullptr;};
    void deleteIntranetSlbPort() { this->intranetSlbPort_ = nullptr;};
    inline int32_t getIntranetSlbPort() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbPort_, 0) };
    inline InsertK8sApplicationRequest& setIntranetSlbPort(int32_t intranetSlbPort) { DARABONBA_PTR_SET_VALUE(intranetSlbPort_, intranetSlbPort) };


    // intranetSlbProtocol Field Functions 
    bool hasIntranetSlbProtocol() const { return this->intranetSlbProtocol_ != nullptr;};
    void deleteIntranetSlbProtocol() { this->intranetSlbProtocol_ = nullptr;};
    inline string getIntranetSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbProtocol_, "") };
    inline InsertK8sApplicationRequest& setIntranetSlbProtocol(string intranetSlbProtocol) { DARABONBA_PTR_SET_VALUE(intranetSlbProtocol_, intranetSlbProtocol) };


    // intranetTargetPort Field Functions 
    bool hasIntranetTargetPort() const { return this->intranetTargetPort_ != nullptr;};
    void deleteIntranetTargetPort() { this->intranetTargetPort_ = nullptr;};
    inline int32_t getIntranetTargetPort() const { DARABONBA_PTR_GET_DEFAULT(intranetTargetPort_, 0) };
    inline InsertK8sApplicationRequest& setIntranetTargetPort(int32_t intranetTargetPort) { DARABONBA_PTR_SET_VALUE(intranetTargetPort_, intranetTargetPort) };


    // isMultilingualApp Field Functions 
    bool hasIsMultilingualApp() const { return this->isMultilingualApp_ != nullptr;};
    void deleteIsMultilingualApp() { this->isMultilingualApp_ = nullptr;};
    inline bool getIsMultilingualApp() const { DARABONBA_PTR_GET_DEFAULT(isMultilingualApp_, false) };
    inline InsertK8sApplicationRequest& setIsMultilingualApp(bool isMultilingualApp) { DARABONBA_PTR_SET_VALUE(isMultilingualApp_, isMultilingualApp) };


    // JDK Field Functions 
    bool hasJDK() const { return this->JDK_ != nullptr;};
    void deleteJDK() { this->JDK_ = nullptr;};
    inline string getJDK() const { DARABONBA_PTR_GET_DEFAULT(JDK_, "") };
    inline InsertK8sApplicationRequest& setJDK(string JDK) { DARABONBA_PTR_SET_VALUE(JDK_, JDK) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string getJavaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline InsertK8sApplicationRequest& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline InsertK8sApplicationRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline int32_t getLimitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, 0) };
    inline InsertK8sApplicationRequest& setLimitCpu(int32_t limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline int32_t getLimitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, 0) };
    inline InsertK8sApplicationRequest& setLimitEphemeralStorage(int32_t limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline int32_t getLimitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, 0) };
    inline InsertK8sApplicationRequest& setLimitMem(int32_t limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // limitmCpu Field Functions 
    bool hasLimitmCpu() const { return this->limitmCpu_ != nullptr;};
    void deleteLimitmCpu() { this->limitmCpu_ = nullptr;};
    inline int32_t getLimitmCpu() const { DARABONBA_PTR_GET_DEFAULT(limitmCpu_, 0) };
    inline InsertK8sApplicationRequest& setLimitmCpu(int32_t limitmCpu) { DARABONBA_PTR_SET_VALUE(limitmCpu_, limitmCpu) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline InsertK8sApplicationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolume Field Functions 
    bool hasLocalVolume() const { return this->localVolume_ != nullptr;};
    void deleteLocalVolume() { this->localVolume_ = nullptr;};
    inline string getLocalVolume() const { DARABONBA_PTR_GET_DEFAULT(localVolume_, "") };
    inline InsertK8sApplicationRequest& setLocalVolume(string localVolume) { DARABONBA_PTR_SET_VALUE(localVolume_, localVolume) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string getLogicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertK8sApplicationRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // losslessRuleAligned Field Functions 
    bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
    void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
    inline bool getLosslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
    inline InsertK8sApplicationRequest& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


    // losslessRuleDelayTime Field Functions 
    bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
    void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
    inline int32_t getLosslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


    // losslessRuleFuncType Field Functions 
    bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
    void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
    inline int32_t getLosslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


    // losslessRuleRelated Field Functions 
    bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
    void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
    inline bool getLosslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
    inline InsertK8sApplicationRequest& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


    // losslessRuleWarmupTime Field Functions 
    bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
    void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
    inline int32_t getLosslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


    // mountDescs Field Functions 
    bool hasMountDescs() const { return this->mountDescs_ != nullptr;};
    void deleteMountDescs() { this->mountDescs_ = nullptr;};
    inline string getMountDescs() const { DARABONBA_PTR_GET_DEFAULT(mountDescs_, "") };
    inline InsertK8sApplicationRequest& setMountDescs(string mountDescs) { DARABONBA_PTR_SET_VALUE(mountDescs_, mountDescs) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline InsertK8sApplicationRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline InsertK8sApplicationRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline InsertK8sApplicationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline InsertK8sApplicationRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline InsertK8sApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline InsertK8sApplicationRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline InsertK8sApplicationRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline string getPvcMountDescs() const { DARABONBA_PTR_GET_DEFAULT(pvcMountDescs_, "") };
    inline InsertK8sApplicationRequest& setPvcMountDescs(string pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline InsertK8sApplicationRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline InsertK8sApplicationRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline InsertK8sApplicationRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // requestsCpu Field Functions 
    bool hasRequestsCpu() const { return this->requestsCpu_ != nullptr;};
    void deleteRequestsCpu() { this->requestsCpu_ = nullptr;};
    inline int32_t getRequestsCpu() const { DARABONBA_PTR_GET_DEFAULT(requestsCpu_, 0) };
    inline InsertK8sApplicationRequest& setRequestsCpu(int32_t requestsCpu) { DARABONBA_PTR_SET_VALUE(requestsCpu_, requestsCpu) };


    // requestsEphemeralStorage Field Functions 
    bool hasRequestsEphemeralStorage() const { return this->requestsEphemeralStorage_ != nullptr;};
    void deleteRequestsEphemeralStorage() { this->requestsEphemeralStorage_ = nullptr;};
    inline int32_t getRequestsEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestsEphemeralStorage_, 0) };
    inline InsertK8sApplicationRequest& setRequestsEphemeralStorage(int32_t requestsEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestsEphemeralStorage_, requestsEphemeralStorage) };


    // requestsMem Field Functions 
    bool hasRequestsMem() const { return this->requestsMem_ != nullptr;};
    void deleteRequestsMem() { this->requestsMem_ = nullptr;};
    inline int32_t getRequestsMem() const { DARABONBA_PTR_GET_DEFAULT(requestsMem_, 0) };
    inline InsertK8sApplicationRequest& setRequestsMem(int32_t requestsMem) { DARABONBA_PTR_SET_VALUE(requestsMem_, requestsMem) };


    // requestsmCpu Field Functions 
    bool hasRequestsmCpu() const { return this->requestsmCpu_ != nullptr;};
    void deleteRequestsmCpu() { this->requestsmCpu_ = nullptr;};
    inline int32_t getRequestsmCpu() const { DARABONBA_PTR_GET_DEFAULT(requestsmCpu_, 0) };
    inline InsertK8sApplicationRequest& setRequestsmCpu(int32_t requestsmCpu) { DARABONBA_PTR_SET_VALUE(requestsmCpu_, requestsmCpu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InsertK8sApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string getRuntimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline InsertK8sApplicationRequest& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline InsertK8sApplicationRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline string getSecurityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
    inline InsertK8sApplicationRequest& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline string getServiceConfigs() const { DARABONBA_PTR_GET_DEFAULT(serviceConfigs_, "") };
    inline InsertK8sApplicationRequest& setServiceConfigs(string serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };


    // sidecars Field Functions 
    bool hasSidecars() const { return this->sidecars_ != nullptr;};
    void deleteSidecars() { this->sidecars_ = nullptr;};
    inline string getSidecars() const { DARABONBA_PTR_GET_DEFAULT(sidecars_, "") };
    inline InsertK8sApplicationRequest& setSidecars(string sidecars) { DARABONBA_PTR_SET_VALUE(sidecars_, sidecars) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline InsertK8sApplicationRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // startup Field Functions 
    bool hasStartup() const { return this->startup_ != nullptr;};
    void deleteStartup() { this->startup_ = nullptr;};
    inline string getStartup() const { DARABONBA_PTR_GET_DEFAULT(startup_, "") };
    inline InsertK8sApplicationRequest& setStartup(string startup) { DARABONBA_PTR_SET_VALUE(startup_, startup) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline InsertK8sApplicationRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // terminateGracePeriod Field Functions 
    bool hasTerminateGracePeriod() const { return this->terminateGracePeriod_ != nullptr;};
    void deleteTerminateGracePeriod() { this->terminateGracePeriod_ = nullptr;};
    inline int32_t getTerminateGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(terminateGracePeriod_, 0) };
    inline InsertK8sApplicationRequest& setTerminateGracePeriod(int32_t terminateGracePeriod) { DARABONBA_PTR_SET_VALUE(terminateGracePeriod_, terminateGracePeriod) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline InsertK8sApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline InsertK8sApplicationRequest& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline InsertK8sApplicationRequest& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // userBaseImageUrl Field Functions 
    bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
    void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
    inline string getUserBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
    inline InsertK8sApplicationRequest& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline InsertK8sApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline string getWebContainerConfig() const { DARABONBA_PTR_GET_DEFAULT(webContainerConfig_, "") };
    inline InsertK8sApplicationRequest& setWebContainerConfig(string webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline InsertK8sApplicationRequest& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    // The annotations of the application pod.
    shared_ptr<string> annotations_ {};
    // The application configuration when an application template is used. The value is a JSON string.
    shared_ptr<string> appConfig_ {};
    // The name of the application. The name must start with a letter and can contain digits, letters, and hyphens (-). The name can be up to 36 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The name of the application template that is used to create the application. If you specify an application template when you create the application, the application template and the AppConfig parameter are preferentially used to determine the application configuration. Other configurations are ignored.
    shared_ptr<string> appTemplateName_ {};
    // The description of the application.
    shared_ptr<string> applicationDescription_ {};
    // The version of EDAS Container. This parameter conflicts with `EdasContainerVersion`. Use the `EdasContainerVersion` parameter instead.
    shared_ptr<string> buildPackId_ {};
    // The ID of the cluster. You can call the ListCluster operation to query the cluster ID. For more information, see [ListCluster](https://help.aliyun.com/document_detail/154995.html).
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The startup command of the application. If you set this parameter, the original startup command of the image is overridden.
    shared_ptr<string> command_ {};
    // The arguments for the startup command. The arguments are a JSON array of strings. Example: `[{"argument":"-c"},{"argument":"test"}]`. In this example, `-c` and `test` are two arguments.
    shared_ptr<string> commandArgs_ {};
    // The configuration for mounting Kubernetes ConfigMaps and Secrets. You can mount ConfigMaps and Secrets to specified directories in a container. The following parameters are included in ConfigMountDescs:
    // 
    // - name: The name of the ConfigMap or Secret.
    // 
    // - type: The configuration type. Valid values: ConfigMap and Secret.
    // 
    // - mountPath: The mount path. The path must be an absolute path that starts with a forward slash (/).
    shared_ptr<string> configMountDescs_ {};
    // The ID of the repository that is used to build the image repository. If you leave this parameter empty, the default repository provided by EDAS is used. Currently, only the default repository provided by EDAS is supported.
    shared_ptr<string> containerRegistryId_ {};
    // You must specify CsClusterId only when you create an application in a cluster that has never been imported.
    shared_ptr<string> csClusterId_ {};
    // The custom affinity.
    shared_ptr<string> customAffinity_ {};
    // The version of the agent.
    shared_ptr<string> customAgentVersion_ {};
    // The custom tolerations.
    shared_ptr<string> customTolerations_ {};
    // Specifies whether to distribute application instances to multiple nodes. A value of `true` means yes. Other values mean no.
    shared_ptr<string> deployAcrossNodes_ {};
    // Specifies whether to distribute application instances to multiple zones. A value of `true` means yes. Other values mean no.
    shared_ptr<string> deployAcrossZones_ {};
    // The version of the `EDAS-Container` on which the deployment package depends.
    // 
    // > This parameter is not supported for image-based deployments.
    shared_ptr<string> edasContainerVersion_ {};
    // The configuration for mounting a Kubernetes emptyDir volume. You can mount an emptyDir volume to a specified directory in a container. The following parameters are included in EmptyDirs:
    // 
    // - mountPath: The mount path in the container. This parameter is required.
    // 
    // - readOnly: Specifies whether the volume is read-only. This parameter is optional. true specifies read-only. false specifies read and write. Default value: false.
    // 
    // - subPathExpr: The subdirectory expression. This parameter is optional.
    shared_ptr<string> emptyDirs_ {};
    // Specifies whether to enable Application High Availability Service (AHAS):
    // 
    // - true: Enable AHAS.
    // 
    // - false: Do not enable AHAS.
    shared_ptr<bool> enableAhas_ {};
    // You must set this parameter to true only when you create an application in a cluster that has never been imported and enable Service Mesh (ASM).
    shared_ptr<bool> enableAsm_ {};
    // Specifies whether to enable protection against empty pushes:
    // 
    // - true: Enable protection against empty pushes.
    // 
    // - false: Do not enable protection against empty pushes.
    shared_ptr<bool> enableEmptyPushReject_ {};
    // Specifies whether to enable the graceful start rule:
    // 
    // - true: Enable the graceful start rule.
    // 
    // - false: Do not enable the graceful start rule.
    shared_ptr<bool> enableLosslessRule_ {};
    // The configuration for environment variables of the Kubernetes EnvFrom type. You can mount a specified ConfigMap or Secret to a specified directory. Each key corresponds to a file in the directory. The content of the file is the value of the key.
    // 
    // The following parameters are included in EnvFroms:
    // 
    // - configMapRef: The reference to the ConfigMap. This field includes the following parameter:
    // 
    //   - name: The name of the ConfigMap.
    // 
    // - secretRef: The reference to the Secret. This field includes the following parameter:
    // 
    //   - name: The name of the Secret.
    shared_ptr<string> envFroms_ {};
    // The environment variables for the deployment. The value must be a JSON array of objects. Three types of environment variables are supported: regular environment variables, Kubernetes ConfigMap environment variables, and Kubernetes Secret environment variables. The format of a regular environment variable is as follows:
    // 
    // `{"name":"x", "value": "y"}`
    // 
    // You can use a ConfigMap to inject the value of a specific key into a container\\"s environment variable. The format is as follows:
    // 
    // `{ "name": "x2", "valueFrom": { "configMapKeyRef": { "name": "my-config", "key": "y2" } } }`
    // 
    // You can use a Secret to inject the value of a specific key into a container\\"s environment variable. The format is as follows:
    // 
    // `{ "name": "x3", "valueFrom": { "secretKeyRef": { "name": "my-secret", "key": "y3" } } }`
    // 
    // > To clear this configuration, set the value to an empty JSON array ([]).
    shared_ptr<string> envs_ {};
    // The configuration of the custom monitoring and administration solution.
    shared_ptr<string> featureConfig_ {};
    // The architecture of the image platform. This parameter is valid when you use a WAR or JAR package for deployment. Examples:
    // 
    // - To specify the x86-64 architecture, enter linux/amd64.
    // 
    // - To specify the ARM64 architecture, enter linux/arm64.
    // 
    // - To build a dual-architecture image, enter linux/amd64,linux/arm64.
    // 
    // - If you do not enter a value, the default architecture is used.
    shared_ptr<string> imagePlatforms_ {};
    // The address of the image. This parameter is required when you set `PackageType` to `Image`.
    shared_ptr<string> imageUrl_ {};
    // The init containers for the application pod. You can set the container configuration in the YAML format. The value is the Base64-encoded YAML configuration of the init container.
    shared_ptr<string> initContainers_ {};
    // The ID of the internet-facing SLB instance. If you do not specify this parameter, EDAS automatically purchases a new SLB instance for you.
    shared_ptr<string> internetSlbId_ {};
    // The frontend port of the internet-facing SLB instance. The value must be in the range of 1 to 65535.
    shared_ptr<int32_t> internetSlbPort_ {};
    // The protocol used by the internet-facing SLB instance. Valid values: TCP, HTTP, and HTTPS.
    shared_ptr<string> internetSlbProtocol_ {};
    // The backend port of the internal SLB instance, which also serves as the service port for the application. The port number must be an integer from 1 to 65535.
    shared_ptr<int32_t> internetTargetPort_ {};
    // The ID of the internal-facing SLB instance. If you do not specify this parameter, EDAS automatically purchases a new SLB instance for you.
    shared_ptr<string> intranetSlbId_ {};
    // The frontend port of the internal-facing SLB instance. The value must be in the range of 1 to 65535.
    shared_ptr<int32_t> intranetSlbPort_ {};
    // The protocol used by the internal-facing SLB instance. Valid values: TCP, HTTP, and HTTPS.
    shared_ptr<string> intranetSlbProtocol_ {};
    // The backend port of the internal-facing SLB instance. This is also the service port of the application. The value must be in the range of 1 to 65535.
    shared_ptr<int32_t> intranetTargetPort_ {};
    // Specifies whether the application is a multilingual application.
    shared_ptr<bool> isMultilingualApp_ {};
    // The version of the Java Development Kit (JDK) on which the deployment package depends. Valid values: Open JDK 7, Open JDK 8, and Custom OpenJDK. This parameter is not supported for image-based deployments. If you select Custom OpenJDK, you must also specify the UserBaseImageUrl parameter.
    shared_ptr<string> JDK_ {};
    // The Java startup parameters. You can configure startup parameters for a Java application. You can configure memory, application, garbage collection (GC) policy, tools, service registration and discovery, and custom parameters. Proper parameter configuration helps reduce GC overhead, shorten server response time, and improve throughput. The value is a JSON string. original specifies the configuration value, and startup specifies the startup parameter. The system automatically concatenates all startup values as the Java startup parameters for the application. To clear the configuration, set the value to `""` or `"{}"`. The keys in the JSON string are described as follows:
    // 
    // - InitialHeapSize: the initial heap size.
    // 
    // - MaxHeapSize: the maximum heap size.
    // 
    // - CustomParams: custom content, such as JVM -D parameters.
    // 
    // - Other keys: You can view the JSON structure submitted by the frontend.
    shared_ptr<string> javaStartUpConfig_ {};
    // The labels of the application pod.
    shared_ptr<string> labels_ {};
    // The maximum number of CPU cores that can be used by an application instance. If you specify LimitmCpu, this parameter is ignored.
    shared_ptr<int32_t> limitCpu_ {};
    // The maximum ephemeral storage. Unit: GB. A value of 0 means no limit.
    shared_ptr<int32_t> limitEphemeralStorage_ {};
    // The maximum amount of memory that can be used by an application instance. Unit: MB. The value of LimitMem must be greater than or equal to the value of RequestsMem.
    shared_ptr<int32_t> limitMem_ {};
    // The maximum number of CPU cores that can be used by an application instance. Unit: millicores. A value of 0 means no limit.
    shared_ptr<int32_t> limitmCpu_ {};
    // The liveness probe of the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"tcpSocket":{"host":"", "port":8080}}`.
    // 
    // To clear this configuration, set the value to `""` or `{}`. If you do not set this parameter, it is ignored.
    shared_ptr<string> liveness_ {};
    // The configuration for mounting a host file to a container. Example: `[{"type":"","nodePath":"/localfiles","mountPath":"/app/files"},{"type":"Directory","nodePath":"/mnt","mountPath":"/app/storage"}]`. The following parameters are included:
    // 
    // - `nodePath`: the path on the host.
    // 
    // - `mountPath`: the path in the container.
    // 
    // - `type`: the mount type.
    shared_ptr<string> localVolume_ {};
    // The ID of the EDAS namespace. This parameter is required if you want to use a non-default namespace.
    shared_ptr<string> logicalRegionId_ {};
    // Specifies whether to enable the graceful rolling deployment mode in which service registration is complete before the readiness probe is passed:
    // 
    // - true: A health check URL is provided for the application on port 55199. The path is /health. The URL returns 200 after the service is registered. Otherwise, the URL returns 500.
    // 
    //   > If you also set `LosslessRuleRelated` to `true`, this URL is used to check whether the service warm-up is complete.
    // 
    // - false: A URL is not provided for the application to check whether the service is registered.
    shared_ptr<bool> losslessRuleAligned_ {};
    // The delay of service registration. Unit: seconds. The value must be in the range of 0 to 86400.
    shared_ptr<int32_t> losslessRuleDelayTime_ {};
    // The warm-up curve of the service. The value must be in the range of 0 to 20. Default value: 2. This value is suitable for normal warm-up scenarios and indicates that the traffic that the service provider receives follows a quadratic curve during the warm-up period.
    shared_ptr<int32_t> losslessRuleFuncType_ {};
    // Specifies whether to enable the graceful rolling deployment mode in which service warm-up is complete before the readiness probe is passed:
    // 
    // - true: A health check URL is provided for the application on port 55199. The path is /health. The URL returns 200 after the service warm-up is complete. Otherwise, the URL returns 500.
    // 
    // - false: A URL is not provided for the application to check whether the service warm-up is complete.
    shared_ptr<bool> losslessRuleRelated_ {};
    // The warm-up duration of the service. Unit: seconds. The value must be in the range of 0 to 86400.
    shared_ptr<int32_t> losslessRuleWarmupTime_ {};
    // The description of the mount configuration. The value is a serialized JSON string. Example: `[{"nasPath": "/k8s","mountPath": "/mnt"},{"nasPath": "/files","mountPath": "/app/files"}]`. `nasPath` specifies the file storage path. `mountPath` specifies the path to which the file system is mounted in the container.
    shared_ptr<string> mountDescs_ {};
    // The namespace of the Kubernetes cluster. This parameter determines the Kubernetes namespace in which your application is deployed. The default value is default.
    shared_ptr<string> namespace_ {};
    // The ID of the NAS file system that you want to mount. If you do not specify this parameter but mountDescs is specified, a new NAS file system is automatically purchased and mounted to a vSwitch in the VPC.
    shared_ptr<string> nasId_ {};
    // The type of the application package. Valid values: FatJar, WAR, and Image.
    shared_ptr<string> packageType_ {};
    // The URL of the deployment package. This parameter is required for applications that are deployed using a FatJar or WAR package.
    // 
    // > The version of the EDAS POP API SDK for Java or Python must be 2.44.0 or later.
    shared_ptr<string> packageUrl_ {};
    // The version number of the deployment package. This parameter is required for WAR and FatJar packages. You can define the meaning of the version number.
    // 
    // > The version of the EDAS POP API SDK for Java or Python must be 2.44.0 or later.
    shared_ptr<string> packageVersion_ {};
    // The script that is run after the container is started. Example: `{"exec":{"command":["cat","/etc/group"]}}`.
    // 
    // To clear this configuration, set the value to `""` or `{}`. If you do not set this parameter, it is ignored.
    shared_ptr<string> postStart_ {};
    // The script that is run before the container is stopped. Example: `{"tcpSocket":{"host":"", "port":8080}}`.
    // 
    // To clear this configuration, set the value to `""` or `{}`. If you do not set this parameter, it is ignored.
    shared_ptr<string> preStop_ {};
    // The configuration for mounting a Kubernetes PersistentVolumeClaim (PVC). You can mount a Kubernetes PVC volume to a specified directory in a container. The following parameters are included in PvcMountDescs:
    // 
    // - pvcName: The name of the PVC volume. The PVC volume must exist and be in the Bound state.
    // 
    // - mountPaths: The list of mount directories. You can configure multiple mount directories. Each mount directory supports two parameters.
    // 
    //   - mountPath: The mount path. The path must be an absolute path that starts with a forward slash (/).
    // 
    //   - readOnly: The mount mode. true specifies the read-only mode. false specifies the read and write mode. Default value: false.
    shared_ptr<string> pvcMountDescs_ {};
    // The readiness probe of the container. If the check fails, traffic is not routed to the container through the Kubernetes Service. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": [{"name": "test","value": "testvalue"}]}}`.
    // 
    // To clear this configuration, set the value to `""` or `{}`. If you do not set this parameter, it is ignored.
    shared_ptr<string> readiness_ {};
    // The number of application instances.
    shared_ptr<int32_t> replicas_ {};
    // The ID of the image repository.
    shared_ptr<string> repoId_ {};
    // The number of CPU cores requested for an application instance upon creation. Unit: cores. A value of 0 means no limit. If you specify RequestsmCpu, this parameter is ignored.
    shared_ptr<int32_t> requestsCpu_ {};
    // The minimum ephemeral storage. Unit: GB. A value of 0 means no limit.
    shared_ptr<int32_t> requestsEphemeralStorage_ {};
    // The amount of memory requested for an application instance upon creation. Unit: MB. A value of 0 means no limit. The value of RequestsMem cannot be greater than the value of LimitMem.
    shared_ptr<int32_t> requestsMem_ {};
    // The number of CPU cores requested for an application instance upon creation. Unit: millicores.
    shared_ptr<int32_t> requestsmCpu_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the container runtime. This parameter is applicable only to clusters that use sandboxed containers.
    shared_ptr<string> runtimeClassName_ {};
    // The name of the image pull secret. You must create the secret.
    shared_ptr<string> secretName_ {};
    // The SecurityContext attribute for the application pod container. The value is the Base64-encoded YAML configuration of the SecurityContext.
    shared_ptr<string> securityContext_ {};
    // The configuration of the Kubernetes Service.
    shared_ptr<string> serviceConfigs_ {};
    // The sidecar containers for the application pod. You can set the container configuration in the YAML format. The value is the Base64-encoded YAML configuration of the sidecar container.
    shared_ptr<string> sidecars_ {};
    // The Logstore configuration. To clear the configuration, set the value to `""` or `"{}"`:
    // 
    // - Configs:
    // 
    //   - type: The collection type. file indicates the file type. stdout indicates the standard output type.
    // 
    //   - Logstore: The name of the Logstore. Make sure that the Logstore name is unique in the same cluster and meets the following naming conventions:
    // 
    //     - The name can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    //     - The name must start and end with a lowercase letter or a digit.
    // 
    //     - The name must be 3 to 63 characters in length. If you leave this parameter empty, the system automatically generates a name.
    // 
    //   - LogDir: If the collection type is standard output, the collection path is stdout.log. If the collection type is file, the collection path is the path of the file to be collected. Wildcards are supported. The collection path must match the following regular expression: `^/(.+)/(.*)^/$`.
    shared_ptr<string> slsConfigs_ {};
    // The startup probe. You can use a startup probe to check the liveness of a slow-start container and prevent the container from being killed before it is started. Example: {"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": [{"name": "test","value": "testvalue"}]}}.
    // 
    // To clear this configuration, set the value to "" or {}. If you do not set this parameter, it is ignored.
    shared_ptr<string> startup_ {};
    // The storage type of the NAS file system. Valid values:
    // 
    // - General-purpose NAS file systems: Capacity and Performance
    // 
    // - Extreme NAS file systems: Standard and Advance
    // 
    // Currently, only the Performance type is supported.
    shared_ptr<string> storageType_ {};
    // The timeout period for a graceful stop. Unit: seconds.
    shared_ptr<int32_t> terminateGracePeriod_ {};
    // The timeout period for the change process. Unit: seconds. The value must be in the range of 1 to 1800. If you do not specify this parameter, the default value 1800 is used.
    shared_ptr<int32_t> timeout_ {};
    // The URI encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8.
    // 
    // > If you do not set this parameter for the application, the default value of Tomcat is used.
    shared_ptr<string> uriEncoding_ {};
    // Specifies whether to enable useBodyEncodingForURI.
    // 
    // > If you do not set this parameter for the application, the default value false is used.
    shared_ptr<bool> useBodyEncoding_ {};
    // If you use a custom JDK runtime, you must configure the address of the base image. The address must be accessible over the Internet. The EDAS server pulls the image to build an application image.
    shared_ptr<string> userBaseImageUrl_ {};
    // The version of the Tomcat container on which the deployment package depends. This parameter is applicable to Spring Cloud and Dubbo applications that are deployed using a WAR package. This parameter is not supported for image-based deployments.
    shared_ptr<string> webContainer_ {};
    // The configuration of the Tomcat container. To clear the configuration, set the value to "" or "{}":
    // 
    // - useDefaultConfig: Specifies whether to use the default configuration. If you set this parameter to true, the custom configuration is not used. If you set this parameter to false, the custom configuration is used. If you do not use the custom configuration, the following parameter settings do not take effect.
    // 
    // - contextInputType: The access path of the application.
    // 
    //   - war: You do not need to specify a custom path. The access path is the name of the WAR package.
    // 
    //   - root: You do not need to specify a custom path. The access path is `/`.
    // 
    //   - custom: You must specify a custom path in the contextPath parameter.
    // 
    // - contextPath: The custom path. This parameter is required only when you set contextInputType to custom.
    // 
    // - httpPort: The port number. The value must be in the range of 1024 to 65535. Ports smaller than 1024 require root permissions. Because the container is configured with administrator permissions, specify a port number greater than 1024. If you do not specify this parameter, the default port 8080 is used.
    // 
    // - maxThreads: The maximum number of connections in the connection pool. Default value: 400.
    // 
    //   > This parameter greatly affects application performance. Configure this parameter with the help of a professional.
    // 
    // - uriEncoding: The encoding format for Tomcat. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312. If you do not specify this parameter, the default value ISO-8859-1 is used.
    // 
    // - useBodyEncoding: Specifies whether to use BodyEncoding for URLs.
    // 
    // - useAdvancedServerXml: Specifies whether to use advanced settings to customize the server.xml file. If the preceding parameter types and specific parameters cannot meet your requirements, you can use advanced settings to directly edit the server.xml file of Tomcat.
    // 
    // - serverXml: The content of the server.xml file that is customized in the advanced settings. This parameter takes effect only when useAdvancedServerXml is set to true.
    shared_ptr<string> webContainerConfig_ {};
    // The type of the workload. Currently, only deployments are supported.
    shared_ptr<string> workloadType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
