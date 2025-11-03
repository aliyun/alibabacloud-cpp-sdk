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
        && return this->appConfig_ == nullptr && return this->appName_ == nullptr && return this->appTemplateName_ == nullptr && return this->applicationDescription_ == nullptr && return this->buildPackId_ == nullptr
        && return this->clusterId_ == nullptr && return this->command_ == nullptr && return this->commandArgs_ == nullptr && return this->configMountDescs_ == nullptr && return this->containerRegistryId_ == nullptr
        && return this->csClusterId_ == nullptr && return this->customAffinity_ == nullptr && return this->customAgentVersion_ == nullptr && return this->customTolerations_ == nullptr && return this->deployAcrossNodes_ == nullptr
        && return this->deployAcrossZones_ == nullptr && return this->edasContainerVersion_ == nullptr && return this->emptyDirs_ == nullptr && return this->enableAhas_ == nullptr && return this->enableAsm_ == nullptr
        && return this->enableEmptyPushReject_ == nullptr && return this->enableLosslessRule_ == nullptr && return this->envFroms_ == nullptr && return this->envs_ == nullptr && return this->featureConfig_ == nullptr
        && return this->imagePlatforms_ == nullptr && return this->imageUrl_ == nullptr && return this->initContainers_ == nullptr && return this->internetSlbId_ == nullptr && return this->internetSlbPort_ == nullptr
        && return this->internetSlbProtocol_ == nullptr && return this->internetTargetPort_ == nullptr && return this->intranetSlbId_ == nullptr && return this->intranetSlbPort_ == nullptr && return this->intranetSlbProtocol_ == nullptr
        && return this->intranetTargetPort_ == nullptr && return this->isMultilingualApp_ == nullptr && return this->JDK_ == nullptr && return this->javaStartUpConfig_ == nullptr && return this->labels_ == nullptr
        && return this->limitCpu_ == nullptr && return this->limitEphemeralStorage_ == nullptr && return this->limitMem_ == nullptr && return this->limitmCpu_ == nullptr && return this->liveness_ == nullptr
        && return this->localVolume_ == nullptr && return this->logicalRegionId_ == nullptr && return this->losslessRuleAligned_ == nullptr && return this->losslessRuleDelayTime_ == nullptr && return this->losslessRuleFuncType_ == nullptr
        && return this->losslessRuleRelated_ == nullptr && return this->losslessRuleWarmupTime_ == nullptr && return this->mountDescs_ == nullptr && return this->namespace_ == nullptr && return this->nasId_ == nullptr
        && return this->packageType_ == nullptr && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr
        && return this->pvcMountDescs_ == nullptr && return this->readiness_ == nullptr && return this->replicas_ == nullptr && return this->repoId_ == nullptr && return this->requestsCpu_ == nullptr
        && return this->requestsEphemeralStorage_ == nullptr && return this->requestsMem_ == nullptr && return this->requestsmCpu_ == nullptr && return this->resourceGroupId_ == nullptr && return this->runtimeClassName_ == nullptr
        && return this->secretName_ == nullptr && return this->securityContext_ == nullptr && return this->serviceConfigs_ == nullptr && return this->sidecars_ == nullptr && return this->slsConfigs_ == nullptr
        && return this->startup_ == nullptr && return this->storageType_ == nullptr && return this->terminateGracePeriod_ == nullptr && return this->timeout_ == nullptr && return this->uriEncoding_ == nullptr
        && return this->useBodyEncoding_ == nullptr && return this->userBaseImageUrl_ == nullptr && return this->webContainer_ == nullptr && return this->webContainerConfig_ == nullptr && return this->workloadType_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline InsertK8sApplicationRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string appConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline InsertK8sApplicationRequest& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline InsertK8sApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appTemplateName Field Functions 
    bool hasAppTemplateName() const { return this->appTemplateName_ != nullptr;};
    void deleteAppTemplateName() { this->appTemplateName_ = nullptr;};
    inline string appTemplateName() const { DARABONBA_PTR_GET_DEFAULT(appTemplateName_, "") };
    inline InsertK8sApplicationRequest& setAppTemplateName(string appTemplateName) { DARABONBA_PTR_SET_VALUE(appTemplateName_, appTemplateName) };


    // applicationDescription Field Functions 
    bool hasApplicationDescription() const { return this->applicationDescription_ != nullptr;};
    void deleteApplicationDescription() { this->applicationDescription_ = nullptr;};
    inline string applicationDescription() const { DARABONBA_PTR_GET_DEFAULT(applicationDescription_, "") };
    inline InsertK8sApplicationRequest& setApplicationDescription(string applicationDescription) { DARABONBA_PTR_SET_VALUE(applicationDescription_, applicationDescription) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline string buildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, "") };
    inline InsertK8sApplicationRequest& setBuildPackId(string buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertK8sApplicationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline InsertK8sApplicationRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline InsertK8sApplicationRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline string configMountDescs() const { DARABONBA_PTR_GET_DEFAULT(configMountDescs_, "") };
    inline InsertK8sApplicationRequest& setConfigMountDescs(string configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };


    // containerRegistryId Field Functions 
    bool hasContainerRegistryId() const { return this->containerRegistryId_ != nullptr;};
    void deleteContainerRegistryId() { this->containerRegistryId_ = nullptr;};
    inline string containerRegistryId() const { DARABONBA_PTR_GET_DEFAULT(containerRegistryId_, "") };
    inline InsertK8sApplicationRequest& setContainerRegistryId(string containerRegistryId) { DARABONBA_PTR_SET_VALUE(containerRegistryId_, containerRegistryId) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string csClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline InsertK8sApplicationRequest& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // customAffinity Field Functions 
    bool hasCustomAffinity() const { return this->customAffinity_ != nullptr;};
    void deleteCustomAffinity() { this->customAffinity_ = nullptr;};
    inline string customAffinity() const { DARABONBA_PTR_GET_DEFAULT(customAffinity_, "") };
    inline InsertK8sApplicationRequest& setCustomAffinity(string customAffinity) { DARABONBA_PTR_SET_VALUE(customAffinity_, customAffinity) };


    // customAgentVersion Field Functions 
    bool hasCustomAgentVersion() const { return this->customAgentVersion_ != nullptr;};
    void deleteCustomAgentVersion() { this->customAgentVersion_ = nullptr;};
    inline string customAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(customAgentVersion_, "") };
    inline InsertK8sApplicationRequest& setCustomAgentVersion(string customAgentVersion) { DARABONBA_PTR_SET_VALUE(customAgentVersion_, customAgentVersion) };


    // customTolerations Field Functions 
    bool hasCustomTolerations() const { return this->customTolerations_ != nullptr;};
    void deleteCustomTolerations() { this->customTolerations_ = nullptr;};
    inline string customTolerations() const { DARABONBA_PTR_GET_DEFAULT(customTolerations_, "") };
    inline InsertK8sApplicationRequest& setCustomTolerations(string customTolerations) { DARABONBA_PTR_SET_VALUE(customTolerations_, customTolerations) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline string deployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
    inline InsertK8sApplicationRequest& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline string deployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
    inline InsertK8sApplicationRequest& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline InsertK8sApplicationRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline string emptyDirs() const { DARABONBA_PTR_GET_DEFAULT(emptyDirs_, "") };
    inline InsertK8sApplicationRequest& setEmptyDirs(string emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool enableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline InsertK8sApplicationRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableAsm Field Functions 
    bool hasEnableAsm() const { return this->enableAsm_ != nullptr;};
    void deleteEnableAsm() { this->enableAsm_ = nullptr;};
    inline bool enableAsm() const { DARABONBA_PTR_GET_DEFAULT(enableAsm_, false) };
    inline InsertK8sApplicationRequest& setEnableAsm(bool enableAsm) { DARABONBA_PTR_SET_VALUE(enableAsm_, enableAsm) };


    // enableEmptyPushReject Field Functions 
    bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
    void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
    inline bool enableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
    inline InsertK8sApplicationRequest& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


    // enableLosslessRule Field Functions 
    bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
    void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
    inline bool enableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
    inline InsertK8sApplicationRequest& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline string envFroms() const { DARABONBA_PTR_GET_DEFAULT(envFroms_, "") };
    inline InsertK8sApplicationRequest& setEnvFroms(string envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline InsertK8sApplicationRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // featureConfig Field Functions 
    bool hasFeatureConfig() const { return this->featureConfig_ != nullptr;};
    void deleteFeatureConfig() { this->featureConfig_ = nullptr;};
    inline string featureConfig() const { DARABONBA_PTR_GET_DEFAULT(featureConfig_, "") };
    inline InsertK8sApplicationRequest& setFeatureConfig(string featureConfig) { DARABONBA_PTR_SET_VALUE(featureConfig_, featureConfig) };


    // imagePlatforms Field Functions 
    bool hasImagePlatforms() const { return this->imagePlatforms_ != nullptr;};
    void deleteImagePlatforms() { this->imagePlatforms_ = nullptr;};
    inline string imagePlatforms() const { DARABONBA_PTR_GET_DEFAULT(imagePlatforms_, "") };
    inline InsertK8sApplicationRequest& setImagePlatforms(string imagePlatforms) { DARABONBA_PTR_SET_VALUE(imagePlatforms_, imagePlatforms) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline InsertK8sApplicationRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline string initContainers() const { DARABONBA_PTR_GET_DEFAULT(initContainers_, "") };
    inline InsertK8sApplicationRequest& setInitContainers(string initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };


    // internetSlbId Field Functions 
    bool hasInternetSlbId() const { return this->internetSlbId_ != nullptr;};
    void deleteInternetSlbId() { this->internetSlbId_ = nullptr;};
    inline string internetSlbId() const { DARABONBA_PTR_GET_DEFAULT(internetSlbId_, "") };
    inline InsertK8sApplicationRequest& setInternetSlbId(string internetSlbId) { DARABONBA_PTR_SET_VALUE(internetSlbId_, internetSlbId) };


    // internetSlbPort Field Functions 
    bool hasInternetSlbPort() const { return this->internetSlbPort_ != nullptr;};
    void deleteInternetSlbPort() { this->internetSlbPort_ = nullptr;};
    inline int32_t internetSlbPort() const { DARABONBA_PTR_GET_DEFAULT(internetSlbPort_, 0) };
    inline InsertK8sApplicationRequest& setInternetSlbPort(int32_t internetSlbPort) { DARABONBA_PTR_SET_VALUE(internetSlbPort_, internetSlbPort) };


    // internetSlbProtocol Field Functions 
    bool hasInternetSlbProtocol() const { return this->internetSlbProtocol_ != nullptr;};
    void deleteInternetSlbProtocol() { this->internetSlbProtocol_ = nullptr;};
    inline string internetSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(internetSlbProtocol_, "") };
    inline InsertK8sApplicationRequest& setInternetSlbProtocol(string internetSlbProtocol) { DARABONBA_PTR_SET_VALUE(internetSlbProtocol_, internetSlbProtocol) };


    // internetTargetPort Field Functions 
    bool hasInternetTargetPort() const { return this->internetTargetPort_ != nullptr;};
    void deleteInternetTargetPort() { this->internetTargetPort_ = nullptr;};
    inline int32_t internetTargetPort() const { DARABONBA_PTR_GET_DEFAULT(internetTargetPort_, 0) };
    inline InsertK8sApplicationRequest& setInternetTargetPort(int32_t internetTargetPort) { DARABONBA_PTR_SET_VALUE(internetTargetPort_, internetTargetPort) };


    // intranetSlbId Field Functions 
    bool hasIntranetSlbId() const { return this->intranetSlbId_ != nullptr;};
    void deleteIntranetSlbId() { this->intranetSlbId_ = nullptr;};
    inline string intranetSlbId() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbId_, "") };
    inline InsertK8sApplicationRequest& setIntranetSlbId(string intranetSlbId) { DARABONBA_PTR_SET_VALUE(intranetSlbId_, intranetSlbId) };


    // intranetSlbPort Field Functions 
    bool hasIntranetSlbPort() const { return this->intranetSlbPort_ != nullptr;};
    void deleteIntranetSlbPort() { this->intranetSlbPort_ = nullptr;};
    inline int32_t intranetSlbPort() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbPort_, 0) };
    inline InsertK8sApplicationRequest& setIntranetSlbPort(int32_t intranetSlbPort) { DARABONBA_PTR_SET_VALUE(intranetSlbPort_, intranetSlbPort) };


    // intranetSlbProtocol Field Functions 
    bool hasIntranetSlbProtocol() const { return this->intranetSlbProtocol_ != nullptr;};
    void deleteIntranetSlbProtocol() { this->intranetSlbProtocol_ = nullptr;};
    inline string intranetSlbProtocol() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbProtocol_, "") };
    inline InsertK8sApplicationRequest& setIntranetSlbProtocol(string intranetSlbProtocol) { DARABONBA_PTR_SET_VALUE(intranetSlbProtocol_, intranetSlbProtocol) };


    // intranetTargetPort Field Functions 
    bool hasIntranetTargetPort() const { return this->intranetTargetPort_ != nullptr;};
    void deleteIntranetTargetPort() { this->intranetTargetPort_ = nullptr;};
    inline int32_t intranetTargetPort() const { DARABONBA_PTR_GET_DEFAULT(intranetTargetPort_, 0) };
    inline InsertK8sApplicationRequest& setIntranetTargetPort(int32_t intranetTargetPort) { DARABONBA_PTR_SET_VALUE(intranetTargetPort_, intranetTargetPort) };


    // isMultilingualApp Field Functions 
    bool hasIsMultilingualApp() const { return this->isMultilingualApp_ != nullptr;};
    void deleteIsMultilingualApp() { this->isMultilingualApp_ = nullptr;};
    inline bool isMultilingualApp() const { DARABONBA_PTR_GET_DEFAULT(isMultilingualApp_, false) };
    inline InsertK8sApplicationRequest& setIsMultilingualApp(bool isMultilingualApp) { DARABONBA_PTR_SET_VALUE(isMultilingualApp_, isMultilingualApp) };


    // JDK Field Functions 
    bool hasJDK() const { return this->JDK_ != nullptr;};
    void deleteJDK() { this->JDK_ = nullptr;};
    inline string JDK() const { DARABONBA_PTR_GET_DEFAULT(JDK_, "") };
    inline InsertK8sApplicationRequest& setJDK(string JDK) { DARABONBA_PTR_SET_VALUE(JDK_, JDK) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string javaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline InsertK8sApplicationRequest& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline InsertK8sApplicationRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline int32_t limitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, 0) };
    inline InsertK8sApplicationRequest& setLimitCpu(int32_t limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline int32_t limitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, 0) };
    inline InsertK8sApplicationRequest& setLimitEphemeralStorage(int32_t limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline int32_t limitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, 0) };
    inline InsertK8sApplicationRequest& setLimitMem(int32_t limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // limitmCpu Field Functions 
    bool hasLimitmCpu() const { return this->limitmCpu_ != nullptr;};
    void deleteLimitmCpu() { this->limitmCpu_ = nullptr;};
    inline int32_t limitmCpu() const { DARABONBA_PTR_GET_DEFAULT(limitmCpu_, 0) };
    inline InsertK8sApplicationRequest& setLimitmCpu(int32_t limitmCpu) { DARABONBA_PTR_SET_VALUE(limitmCpu_, limitmCpu) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline InsertK8sApplicationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolume Field Functions 
    bool hasLocalVolume() const { return this->localVolume_ != nullptr;};
    void deleteLocalVolume() { this->localVolume_ = nullptr;};
    inline string localVolume() const { DARABONBA_PTR_GET_DEFAULT(localVolume_, "") };
    inline InsertK8sApplicationRequest& setLocalVolume(string localVolume) { DARABONBA_PTR_SET_VALUE(localVolume_, localVolume) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertK8sApplicationRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // losslessRuleAligned Field Functions 
    bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
    void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
    inline bool losslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
    inline InsertK8sApplicationRequest& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


    // losslessRuleDelayTime Field Functions 
    bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
    void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
    inline int32_t losslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


    // losslessRuleFuncType Field Functions 
    bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
    void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
    inline int32_t losslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


    // losslessRuleRelated Field Functions 
    bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
    void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
    inline bool losslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
    inline InsertK8sApplicationRequest& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


    // losslessRuleWarmupTime Field Functions 
    bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
    void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
    inline int32_t losslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
    inline InsertK8sApplicationRequest& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


    // mountDescs Field Functions 
    bool hasMountDescs() const { return this->mountDescs_ != nullptr;};
    void deleteMountDescs() { this->mountDescs_ = nullptr;};
    inline string mountDescs() const { DARABONBA_PTR_GET_DEFAULT(mountDescs_, "") };
    inline InsertK8sApplicationRequest& setMountDescs(string mountDescs) { DARABONBA_PTR_SET_VALUE(mountDescs_, mountDescs) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline InsertK8sApplicationRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string nasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline InsertK8sApplicationRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline InsertK8sApplicationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline InsertK8sApplicationRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline InsertK8sApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline InsertK8sApplicationRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline InsertK8sApplicationRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline string pvcMountDescs() const { DARABONBA_PTR_GET_DEFAULT(pvcMountDescs_, "") };
    inline InsertK8sApplicationRequest& setPvcMountDescs(string pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string readiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline InsertK8sApplicationRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline InsertK8sApplicationRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline InsertK8sApplicationRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // requestsCpu Field Functions 
    bool hasRequestsCpu() const { return this->requestsCpu_ != nullptr;};
    void deleteRequestsCpu() { this->requestsCpu_ = nullptr;};
    inline int32_t requestsCpu() const { DARABONBA_PTR_GET_DEFAULT(requestsCpu_, 0) };
    inline InsertK8sApplicationRequest& setRequestsCpu(int32_t requestsCpu) { DARABONBA_PTR_SET_VALUE(requestsCpu_, requestsCpu) };


    // requestsEphemeralStorage Field Functions 
    bool hasRequestsEphemeralStorage() const { return this->requestsEphemeralStorage_ != nullptr;};
    void deleteRequestsEphemeralStorage() { this->requestsEphemeralStorage_ = nullptr;};
    inline int32_t requestsEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestsEphemeralStorage_, 0) };
    inline InsertK8sApplicationRequest& setRequestsEphemeralStorage(int32_t requestsEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestsEphemeralStorage_, requestsEphemeralStorage) };


    // requestsMem Field Functions 
    bool hasRequestsMem() const { return this->requestsMem_ != nullptr;};
    void deleteRequestsMem() { this->requestsMem_ = nullptr;};
    inline int32_t requestsMem() const { DARABONBA_PTR_GET_DEFAULT(requestsMem_, 0) };
    inline InsertK8sApplicationRequest& setRequestsMem(int32_t requestsMem) { DARABONBA_PTR_SET_VALUE(requestsMem_, requestsMem) };


    // requestsmCpu Field Functions 
    bool hasRequestsmCpu() const { return this->requestsmCpu_ != nullptr;};
    void deleteRequestsmCpu() { this->requestsmCpu_ = nullptr;};
    inline int32_t requestsmCpu() const { DARABONBA_PTR_GET_DEFAULT(requestsmCpu_, 0) };
    inline InsertK8sApplicationRequest& setRequestsmCpu(int32_t requestsmCpu) { DARABONBA_PTR_SET_VALUE(requestsmCpu_, requestsmCpu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InsertK8sApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string runtimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline InsertK8sApplicationRequest& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline InsertK8sApplicationRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline string securityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
    inline InsertK8sApplicationRequest& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline string serviceConfigs() const { DARABONBA_PTR_GET_DEFAULT(serviceConfigs_, "") };
    inline InsertK8sApplicationRequest& setServiceConfigs(string serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };


    // sidecars Field Functions 
    bool hasSidecars() const { return this->sidecars_ != nullptr;};
    void deleteSidecars() { this->sidecars_ = nullptr;};
    inline string sidecars() const { DARABONBA_PTR_GET_DEFAULT(sidecars_, "") };
    inline InsertK8sApplicationRequest& setSidecars(string sidecars) { DARABONBA_PTR_SET_VALUE(sidecars_, sidecars) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string slsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline InsertK8sApplicationRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // startup Field Functions 
    bool hasStartup() const { return this->startup_ != nullptr;};
    void deleteStartup() { this->startup_ = nullptr;};
    inline string startup() const { DARABONBA_PTR_GET_DEFAULT(startup_, "") };
    inline InsertK8sApplicationRequest& setStartup(string startup) { DARABONBA_PTR_SET_VALUE(startup_, startup) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline InsertK8sApplicationRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // terminateGracePeriod Field Functions 
    bool hasTerminateGracePeriod() const { return this->terminateGracePeriod_ != nullptr;};
    void deleteTerminateGracePeriod() { this->terminateGracePeriod_ = nullptr;};
    inline int32_t terminateGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(terminateGracePeriod_, 0) };
    inline InsertK8sApplicationRequest& setTerminateGracePeriod(int32_t terminateGracePeriod) { DARABONBA_PTR_SET_VALUE(terminateGracePeriod_, terminateGracePeriod) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline InsertK8sApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string uriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline InsertK8sApplicationRequest& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline InsertK8sApplicationRequest& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // userBaseImageUrl Field Functions 
    bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
    void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
    inline string userBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
    inline InsertK8sApplicationRequest& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline InsertK8sApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline string webContainerConfig() const { DARABONBA_PTR_GET_DEFAULT(webContainerConfig_, "") };
    inline InsertK8sApplicationRequest& setWebContainerConfig(string webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline InsertK8sApplicationRequest& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    // The annotation of an application pod.
    std::shared_ptr<string> annotations_ = nullptr;
    // The application configuration when the application template is used. Set this parameter to a JSON array.
    std::shared_ptr<string> appConfig_ = nullptr;
    // The name of the application. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 36 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The name of the template used to create the application. If you specify an application template when you create an application, the application template and the AppConfig parameter are used to configure the application. Other configurations are ignored.
    std::shared_ptr<string> appTemplateName_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> applicationDescription_ = nullptr;
    // The version of `EDAS Container`. The value of this parameter conflicts with that of the `EdasContainerVersion` parameter. We recommend that you use the `EdasContainerVersion` parameter.
    std::shared_ptr<string> buildPackId_ = nullptr;
    // The ID of the cluster. You can call the ListCluster operation to query the cluster ID. For more information, see [ListCluster](https://help.aliyun.com/document_detail/154995.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The application startup command. If you specify this parameter, the value of this parameter will replace the startup command in the image.
    std::shared_ptr<string> command_ = nullptr;
    // The arguments in the command. The parameter value is a JSON array of strings. An example is `[{"argument":"-c"},{"argument":"test"}]`, where `-c` and `test` are two arguments that can be set.
    std::shared_ptr<string> commandArgs_ = nullptr;
    // The configuration for mounting a Kubernetes ConfigMap or Secret to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   name: the name of the Kubernetes ConfigMap or Secret.
    // *   type: the type of the API object that you want to mount. You can mount a Kubernetes ConfigMap or Secret.
    // *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    std::shared_ptr<string> configMountDescs_ = nullptr;
    // The ID of the repository used to build the image repository. If this parameter is left empty, the default repository provided by EDAS is used. Only the default repository provided by EDAS is supported.
    std::shared_ptr<string> containerRegistryId_ = nullptr;
    // The ID of the cluster. This parameter is required only when you create the application in a cluster that has not been imported.
    std::shared_ptr<string> csClusterId_ = nullptr;
    // The custom affinity.
    std::shared_ptr<string> customAffinity_ = nullptr;
    std::shared_ptr<string> customAgentVersion_ = nullptr;
    // The custom tolerances.
    std::shared_ptr<string> customTolerations_ = nullptr;
    // Specifies whether to distribute application instances across nodes. Value `true` indicates that application instances are distributed across nodes. Other values indicate that application instances are not distributed across nodes.
    std::shared_ptr<string> deployAcrossNodes_ = nullptr;
    // Specifies whether to distribute application instances across zones. Value `true` indicates that application instances are distributed across zones. Other values indicate that application instances are not distributed across zones.
    std::shared_ptr<string> deployAcrossZones_ = nullptr;
    // The version of `EDAS Container` on which the deployment package of the application depends.
    // 
    // > This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    // The configuration for mounting a Kubernetes emptyDir volume to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   mountPath: The mount path in the container. This parameter is required.
    // *   readOnly: (Optional) The mount mode. Value true indicates the read-only mode. Value false indicates the read and write mode. Default value: false.
    // *   subPathExpr: (Optional) The regular expression that is used to match the subdirectory.
    std::shared_ptr<string> emptyDirs_ = nullptr;
    // Specifies whether to enable access to Application High Availability Service (AHAS). Valid values:
    // 
    // *   true: enables access to AHAS.
    // *   false: does not enable access to AHAS.
    std::shared_ptr<bool> enableAhas_ = nullptr;
    // Specifies whether to activate Alibaba Cloud Service Mesh (ASM). Set this parameter to true only when you create the application in a cluster that has not been imported and you need to use ASM.
    std::shared_ptr<bool> enableAsm_ = nullptr;
    // Specifies whether to enable the empty list protection feature. Valid values:
    // 
    // *   true: enables the empty list protection feature.
    // *   false: disables the empty list protection feature.
    std::shared_ptr<bool> enableEmptyPushReject_ = nullptr;
    // Specifies whether to enable graceful start rules. Valid values:
    // 
    // *   true: enables graceful start rules.
    // *   false: disables graceful start rules.
    std::shared_ptr<bool> enableLosslessRule_ = nullptr;
    // The Kubernetes environment variables that are configured in EnvFrom mode. A ConfigMap or Secret is mounted to a directory. Each key corresponds to a file in the directory, and the content of the file is the value of the key.
    // 
    // The following parameters are included in the configuration:
    // 
    // *   configMapRef: the ConfigMap that is referenced. The following parameter is contained:
    // 
    //     *   name: the name of the ConfigMap.
    // 
    // *   secretRef: the Secret that is referenced. The following parameter is contained:
    // 
    //     *   name: the name of the Secret.
    std::shared_ptr<string> envFroms_ = nullptr;
    // The environment variables that are used to deploy the application. The value must be a JSON array. Valid values: regular environment variables, Kubernetes ConfigMap environment variables, or Kubernetes Secret environment variables. Specify regular environment variables in the following format:
    // 
    // `{"name":"x", "value": "y"}`
    // 
    // Specify Kubernetes ConfigMap environment variables in the following format to reference values from ConfigMaps:
    // 
    // `{ "name": "x2", "valueFrom": { "configMapKeyRef": { "name": "my-config", "key": "y2" } } }`
    // 
    // Specify Kubernetes Secret environment variables in the following format to reference values from Secrets:
    // 
    // `{ "name": "x3", "valueFrom": { "secretKeyRef": { "name": "my-secret", "key": "y3" } } }`
    // 
    // >  If you want to cancel this configuration, set this parameter to an empty JSON array in the format of "[]".
    std::shared_ptr<string> envs_ = nullptr;
    std::shared_ptr<string> featureConfig_ = nullptr;
    // Mirror the target platform architecture, which is effective when deployed using war or jar. Enter an example:
    // 
    // - Specify x86 64 architecture: Linux/amd64
    // - Specify ARM 64 architecture: Linux/arm64
    // - Specify the construction of dual architecture images: Linux/amd64, Linux/arm64
    // - Do not input: default schema
    std::shared_ptr<string> imagePlatforms_ = nullptr;
    // The URL of the image. This parameter is required if you set the `PackageType` parameter to `Image`.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Set the initialization container for the application Pod. Support setting the format YAML for container configuration, which is the value of Init container YAML configured with base64 encoding.
    std::shared_ptr<string> initContainers_ = nullptr;
    // The ID of the Internet-facing SLB instance. If you do not specify this parameter, EDAS automatically purchases a new SLB instance for you.
    std::shared_ptr<string> internetSlbId_ = nullptr;
    // The frontend port of the Internet-facing SLB instance. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> internetSlbPort_ = nullptr;
    // The protocol used by the Internet-facing SLB instance. Valid values: TCP, HTTP, and HTTPS.
    std::shared_ptr<string> internetSlbProtocol_ = nullptr;
    // The backend port of the internal-facing SLB instance. This port also serves as the service port of the application. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> internetTargetPort_ = nullptr;
    // The ID of the internal-facing SLB instance. If you do not specify this parameter, Enterprise Distributed Application Service (EDAS) automatically purchases a new SLB instance for you.
    std::shared_ptr<string> intranetSlbId_ = nullptr;
    // The frontend port of the internal-facing SLB instance. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> intranetSlbPort_ = nullptr;
    // The protocol used by the internal-facing SLB instance. Valid values: TCP, HTTP, and HTTPS.
    std::shared_ptr<string> intranetSlbProtocol_ = nullptr;
    // The backend port of the internal-facing Server Load Balancer (SLB) instance. This port also serves as the service port of the application. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> intranetTargetPort_ = nullptr;
    // Specifies whether the application is a multi-language application.
    std::shared_ptr<bool> isMultilingualApp_ = nullptr;
    // The version of the Java Development Kit (JDK) on which the deployment package of the application depends. Valid values: Open JDK 7 and Open JDK 8. This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> JDK_ = nullptr;
    // The configuration of Java startup parameters for a Java application. These startup parameters involve the memory, application, garbage collection (GC) policy, tools, service registration and discovery, and custom configurations. Appropriate parameter settings help reduce the GC overheads, shorten the server response time, and improve the throughput. Set this parameter to a JSON string. In the example, original indicates the configuration value, and startup indicates a startup parameter. The system automatically concatenates all startup values as the settings of Java startup parameters for the application. To delete this configuration, leave the parameter value empty by entering `""` or `"{}"`. The following parameters are included in the configuration:
    // 
    // *   InitialHeapSize: the initial size of the heap memory.
    // *   MaxHeapSize: the maximum size of the heap memory.
    // *   CustomParams: the custom parameters, such as JVM -D parameters.
    // *   Other parameters: You can view the JSON structure submitted by the frontend.
    std::shared_ptr<string> javaStartUpConfig_ = nullptr;
    // The label of an application pod.
    std::shared_ptr<string> labels_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running. Unit: cores. If the LimitmCpu parameter is specified, you can ignore this parameter.
    std::shared_ptr<int32_t> limitCpu_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<int32_t> limitEphemeralStorage_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is running. Unit: MB. The value of LimitMem must be greater than that of RequestsMem.
    std::shared_ptr<int32_t> limitMem_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running. Unit: millicores. Value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<int32_t> limitmCpu_ = nullptr;
    // The configuration for the liveness check on the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"tcpSocket":{"host":"", "port":8080}}`.
    // 
    // If you want to cancel this configuration, leave the parameter value empty by entering `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> liveness_ = nullptr;
    // The configurations that are used when the host files are mounted to the container on which the application is running. Example: `[{"type":"","nodePath":"/localfiles","mountPath":"/app/files"},{"type":"Directory","nodePath":"/mnt","mountPath":"/app/storage"}\\]`. Description:
    // 
    // *   `nodePath`: the host path.
    // *   `mountPath`: the path in the container.
    // *   `type`: the mounting type.
    std::shared_ptr<string> localVolume_ = nullptr;
    // The ID of the EDAS namespace. This parameter is required for a non-default namespace.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // Specifies whether to enable the graceful rolling deployment mode and ensure that the service is registered before the readiness check. Valid values:
    // 
    // *   true: provides port 55199 and the /health path for the health check in a non-intrusive manner. When the service is registered, the system returns HTTP 200 status code. Otherwise, the system returns HTTP 500 status code.
    // 
    //     **
    // 
    //     **Note**If you set both the `LosslessRuleRelated` parameter and this parameter to `true`, the operation checks whether the service prefetching is complete.
    // 
    // *   false: does not check whether the service is registered.
    std::shared_ptr<bool> losslessRuleAligned_ = nullptr;
    // The delay of service registration. Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleDelayTime_ = nullptr;
    // The number of prefetching curves. Valid values: 0 to 20. The default value is 2, which is suitable for common prefetching scenarios. This value indicates that the received traffic of the provider during prefetching is displayed as a quadratic curve.
    std::shared_ptr<int32_t> losslessRuleFuncType_ = nullptr;
    // Specifies whether to enable the graceful rolling deployment mode and ensure that the service prefetching is complete before the readiness check. Valid values:
    // 
    // *   true: provides port 55199 and the /health path for the health check in a non-intrusive manner. When the service prefetching is complete, the system returns HTTP 200 status code. Otherwise, the system returns HTTP 500 status code.
    // *   false: does not check whether the service prefetching is complete.
    std::shared_ptr<bool> losslessRuleRelated_ = nullptr;
    // The service prefetching duration. Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleWarmupTime_ = nullptr;
    // The description of the NAS mounting configuration. Set this parameter to a serialized JSON string. Example: `[{"nasPath": "/k8s","mountPath": "/mnt"},{"nasPath": "/files","mountPath": "/app/files"}\\]`. The `nasPath` parameter specifies the file storage path, and the `mountPath` parameter specifies the path to mount the file system to the container where the application is running.
    std::shared_ptr<string> mountDescs_ = nullptr;
    // The namespace of the Kubernetes cluster. This parameter specifies the Kubernetes namespace in which your application is deployed. By default, the default namespace is used.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the Network Attached Storage (NAS) file system that you want to mount to the application. If you do not specify this parameter but specify the MountDescs parameter, a NAS file system is automatically purchased and mounted to the vSwitch in the VPC.
    std::shared_ptr<string> nasId_ = nullptr;
    // The type of the deployment package. Valid values: FatJar, WAR, and Image.
    std::shared_ptr<string> packageType_ = nullptr;
    // The URL of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application.
    // 
    // > The version of EDAS SDK for Java or Python must be V2.44.0 or later.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application. You must specify a version.
    // 
    // > The version of EDAS SDK for Java or Python must be V2.44.0 or later.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The post-start script. Example: `{"exec":{"command":["cat","/etc/group"\\]}}`.
    // 
    // If you want to cancel this configuration, leave this parameter empty by setting it to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> postStart_ = nullptr;
    // The pre-stop script. Example: `{"tcpSocket":{"host":"", "port":8080}}`.
    // 
    // If you want to cancel this configuration, leave this parameter empty by setting it to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> preStop_ = nullptr;
    // The configuration for mounting a Kubernetes PersistentVolumeClaim (PVC) volume to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   pvcName: the name of the PVC volume. Make sure that the PVC volume is an existing volume and is in the Bound state.
    // 
    // *   mountPaths: the directory to which you want to mount the PVC volume. You can configure multiple directories. You can set the following two parameters for each mount directory:
    // 
    //     *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    //     *   readOnly: the mount mode. Value true indicates the read-only mode. Value false indicates the read and write mode. Default value: false.
    std::shared_ptr<string> pvcMountDescs_ = nullptr;
    // The configuration for the readiness check on the container. If the check fails, the traffic that passes through the Kubernetes Service is not transmitted to the container. Example: \\`{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": \[{"name": "test","value": "testvalue"}\\\\]}}\\`.``
    // 
    // If you want to cancel this configuration, leave the parameter value empty by entering `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> readiness_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is created. Unit: cores. Value 0 indicates that no limit is set on CPU cores. If the RequestsmCpu parameter is specified, the value of the RequestsmCpu parameter is used. You can ignore this parameter.
    std::shared_ptr<int32_t> requestsCpu_ = nullptr;
    // The minimum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<int32_t> requestsEphemeralStorage_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is created. Unit: MB. Value 0 indicates that no limit is set on the memory size. The value of RequestsMem cannot be greater than that of LimitMem.
    std::shared_ptr<int32_t> requestsMem_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is created. Unit: millicores.
    std::shared_ptr<int32_t> requestsmCpu_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the container runtime. This parameter is applicable only to clusters that use sandboxed containers.
    std::shared_ptr<string> runtimeClassName_ = nullptr;
    // The name of the credential that is used to pull the images specified by the user. You must configure the Secret.
    std::shared_ptr<string> secretName_ = nullptr;
    std::shared_ptr<string> securityContext_ = nullptr;
    // The configurations of services in a Kubernetes cluster.
    std::shared_ptr<string> serviceConfigs_ = nullptr;
    // Set up a Sidecar container for the application Pod. Support setting the format YAML for container configuration, which is the value of Sidecar container YAML configured with base64 encoding.
    std::shared_ptr<string> sidecars_ = nullptr;
    // The Logstore configuration. To delete this configuration, leave the parameter value empty by entering `""` or `"{}"`.
    // 
    // *   The following parameters are included in the configuration:
    // 
    //     *   type: the collection type. Set this parameter to file to specify the file type. Set this parameter to stdout to specify the standard output type.
    // 
    //     *   logstore: the name of the Logstore. Make sure that the name of the Logstore is unique in the cluster. The name must comply with the following rules:
    // 
    //         *   The name can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    //         *   The name must start and end with a lowercase letter or a digit.
    //         *   The name must be 3 to 63 characters in length. If you leave this parameter empty, the system automatically generates a name.
    // 
    //     *   LogDir: If the standard output type is used, the collection path is stdout.log. If the file type is used, the collection path is the path of the collected file. Wildcards (\\*) are supported. The collection path must match the following regular expression: `^/(.+)/(.*)^/$`.
    std::shared_ptr<string> slsConfigs_ = nullptr;
    // The startup probe can be used to detect the viability of slow start containers, avoiding them from being killed before startup. The format is as follows: {"FailureThreshold": 3, "initialDelaySeconds": 5, "SuccessThreshold": 1, "timeoutSeconds": 1, "https Get": {"path": "/consumer", "port": 8080, "scheme": "HTTP", "https Headers": [{"name": "test", "value": "testvalue"}]}.
    // 
    // If set to "" or {}, it means delete, and if not set, it means ignore.
    std::shared_ptr<string> startup_ = nullptr;
    // The storage type of the NAS file system.
    // 
    // *   Valid values for General-purpose NAS file systems: Capacity and Performance.
    // *   Valid values for Extreme NAS file systems: Standard and Advance.
    // 
    // You can set this parameter only to Performance.
    std::shared_ptr<string> storageType_ = nullptr;
    // Set the grace stop timeout for the application. Unit: seconds.
    std::shared_ptr<int32_t> terminateGracePeriod_ = nullptr;
    // The timeout period of the change process. Valid values: 1 to 1800. Unit: seconds. If you do not specify this Unidentifiedparameter, the default value 1800 is used.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The URI encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8.
    // 
    // > If you do not specify this parameter in the application configurations, the default URI encoding scheme in the Tomcat container is applied.
    std::shared_ptr<string> uriEncoding_ = nullptr;
    // Specifies whether to use the encoding scheme specified in the request body for URI query parameters.
    // 
    // > If this parameter is not specified in application configuration, the default value false is applied.
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
    // When using custom JDK runtime, it is necessary to configure the basic image address. The address needs to be publicly accessible, and the EDAS server will pull the image to build the application image.
    std::shared_ptr<string> userBaseImageUrl_ = nullptr;
    // The version of the Tomcat container on which the deployment package of the application depends. This parameter is applicable to Spring Cloud and Dubbo applications that you deploy by using WAR packages. This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> webContainer_ = nullptr;
    // The configuration of the Tomcat container. If you want to cancel this configuration, set this parameter to "" or "{}". The following parameters are included in the configuration:
    // 
    // *   useDefaultConfig: specifies whether to use the default configuration. Value true indicates that the default configuration is used. Value false indicates that the custom configuration is used. If the default configuration is used, the following parameters do not take effect:
    // 
    // *   contextInputType: the type of the access path for the application. Valid values:
    // 
    //     *   war: The access path is the name of the WAR package. You do not need to specify a custom path.
    //     *   root: The access path for the application is `/`. You do not need to specify a custom path.
    //     *   custom: If you select this option, you must specify a custom path for the contextPath parameter.
    // 
    // *   contextPath: the custom access path for the application. This parameter is required only when you set the contextInputType parameter to custom.
    // 
    // *   httpPort: the port number. The port number ranges from 1024 to 65535. Though the admin permissions are configured for the container, the root permissions are required to perform operations on ports whose number is less than 1024. Enter a value that ranges from 1024 to 65535 because the container has only the admin permissions. If you do not configure this parameter, the default port number 8080 is used.
    // 
    // *   maxThreads: the maximum number of connections in the connection pool. Default value: 400.
    // 
    //     **
    // 
    //     **Note**This parameter significantly affects application performance. We recommend that you consult with technical support before you set this parameter.
    // 
    // *   uriEncoding: the URI encoding scheme in the Tomcat container. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312. If you do not specify this parameter, the default value ISO-8859-1 is used.
    // 
    // *   useBodyEncoding: specifies whether to use the encoding scheme specified in the request body for URI query parameters.
    // 
    // *   useAdvancedServerXml: specifies whether to use advanced configurations to customize the server.xml file. If the preceding parameter types and specific parameters cannot meet your requirements, you can use advanced configurations to customize the server.xml file of Tomcat.
    // 
    // *   serverXml: the content of the server.xml file customized by using advanced configurations. This parameter takes effect only when you set the useAdvancedServerXml parameter to true.
    std::shared_ptr<string> webContainerConfig_ = nullptr;
    // The type of Workload when creating an application is currently only supported for the Deployment type.
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
