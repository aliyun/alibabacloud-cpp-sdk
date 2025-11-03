// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYK8SAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYK8SAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeployK8sApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployK8sApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(BatchTimeout, batchTimeout_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_TO_JSON(CanaryRuleId, canaryRuleId_);
      DARABONBA_PTR_TO_JSON(ChangeOrderDesc, changeOrderDesc_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_TO_JSON(CustomAffinity, customAffinity_);
      DARABONBA_PTR_TO_JSON(CustomAgentVersion, customAgentVersion_);
      DARABONBA_PTR_TO_JSON(CustomTolerations, customTolerations_);
      DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_TO_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_TO_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImagePlatforms, imagePlatforms_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_TO_JSON(JDK, JDK_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_TO_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_TO_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_TO_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_TO_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_TO_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_TO_JSON(McpuLimit, mcpuLimit_);
      DARABONBA_PTR_TO_JSON(McpuRequest, mcpuRequest_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_TO_JSON(MountDescs, mountDescs_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(Sidecars, sidecars_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(Startup, startup_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TerminateGracePeriod, terminateGracePeriod_);
      DARABONBA_PTR_TO_JSON(TrafficControlStrategy, trafficControlStrategy_);
      DARABONBA_PTR_TO_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_TO_JSON(UserBaseImageUrl, userBaseImageUrl_);
      DARABONBA_PTR_TO_JSON(VolumesStr, volumesStr_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_TO_JSON(WebContainerConfig, webContainerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DeployK8sApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(BatchTimeout, batchTimeout_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(BuildPackId, buildPackId_);
      DARABONBA_PTR_FROM_JSON(CanaryRuleId, canaryRuleId_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderDesc, changeOrderDesc_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_FROM_JSON(CustomAffinity, customAffinity_);
      DARABONBA_PTR_FROM_JSON(CustomAgentVersion, customAgentVersion_);
      DARABONBA_PTR_FROM_JSON(CustomTolerations, customTolerations_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_FROM_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_FROM_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImagePlatforms, imagePlatforms_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_FROM_JSON(JDK, JDK_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LocalVolume, localVolume_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_FROM_JSON(McpuLimit, mcpuLimit_);
      DARABONBA_PTR_FROM_JSON(McpuRequest, mcpuRequest_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_FROM_JSON(MountDescs, mountDescs_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestsEphemeralStorage, requestsEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(Sidecars, sidecars_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(Startup, startup_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TerminateGracePeriod, terminateGracePeriod_);
      DARABONBA_PTR_FROM_JSON(TrafficControlStrategy, trafficControlStrategy_);
      DARABONBA_PTR_FROM_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
      DARABONBA_PTR_FROM_JSON(UserBaseImageUrl, userBaseImageUrl_);
      DARABONBA_PTR_FROM_JSON(VolumesStr, volumesStr_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_FROM_JSON(WebContainerConfig, webContainerConfig_);
    };
    DeployK8sApplicationRequest() = default ;
    DeployK8sApplicationRequest(const DeployK8sApplicationRequest &) = default ;
    DeployK8sApplicationRequest(DeployK8sApplicationRequest &&) = default ;
    DeployK8sApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployK8sApplicationRequest() = default ;
    DeployK8sApplicationRequest& operator=(const DeployK8sApplicationRequest &) = default ;
    DeployK8sApplicationRequest& operator=(DeployK8sApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->appId_ == nullptr && return this->args_ == nullptr && return this->batchTimeout_ == nullptr && return this->batchWaitTime_ == nullptr && return this->buildPackId_ == nullptr
        && return this->canaryRuleId_ == nullptr && return this->changeOrderDesc_ == nullptr && return this->command_ == nullptr && return this->configMountDescs_ == nullptr && return this->cpuLimit_ == nullptr
        && return this->cpuRequest_ == nullptr && return this->customAffinity_ == nullptr && return this->customAgentVersion_ == nullptr && return this->customTolerations_ == nullptr && return this->deployAcrossNodes_ == nullptr
        && return this->deployAcrossZones_ == nullptr && return this->edasContainerVersion_ == nullptr && return this->emptyDirs_ == nullptr && return this->enableAhas_ == nullptr && return this->enableEmptyPushReject_ == nullptr
        && return this->enableLosslessRule_ == nullptr && return this->envFroms_ == nullptr && return this->envs_ == nullptr && return this->image_ == nullptr && return this->imagePlatforms_ == nullptr
        && return this->imageTag_ == nullptr && return this->initContainers_ == nullptr && return this->JDK_ == nullptr && return this->javaStartUpConfig_ == nullptr && return this->labels_ == nullptr
        && return this->limitEphemeralStorage_ == nullptr && return this->liveness_ == nullptr && return this->localVolume_ == nullptr && return this->losslessRuleAligned_ == nullptr && return this->losslessRuleDelayTime_ == nullptr
        && return this->losslessRuleFuncType_ == nullptr && return this->losslessRuleRelated_ == nullptr && return this->losslessRuleWarmupTime_ == nullptr && return this->mcpuLimit_ == nullptr && return this->mcpuRequest_ == nullptr
        && return this->memoryLimit_ == nullptr && return this->memoryRequest_ == nullptr && return this->mountDescs_ == nullptr && return this->nasId_ == nullptr && return this->packageUrl_ == nullptr
        && return this->packageVersion_ == nullptr && return this->packageVersionId_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr && return this->pvcMountDescs_ == nullptr
        && return this->readiness_ == nullptr && return this->replicas_ == nullptr && return this->requestsEphemeralStorage_ == nullptr && return this->runtimeClassName_ == nullptr && return this->securityContext_ == nullptr
        && return this->sidecars_ == nullptr && return this->slsConfigs_ == nullptr && return this->startup_ == nullptr && return this->storageType_ == nullptr && return this->terminateGracePeriod_ == nullptr
        && return this->trafficControlStrategy_ == nullptr && return this->updateStrategy_ == nullptr && return this->uriEncoding_ == nullptr && return this->useBodyEncoding_ == nullptr && return this->userBaseImageUrl_ == nullptr
        && return this->volumesStr_ == nullptr && return this->webContainer_ == nullptr && return this->webContainerConfig_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline DeployK8sApplicationRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeployK8sApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline DeployK8sApplicationRequest& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // batchTimeout Field Functions 
    bool hasBatchTimeout() const { return this->batchTimeout_ != nullptr;};
    void deleteBatchTimeout() { this->batchTimeout_ = nullptr;};
    inline int32_t batchTimeout() const { DARABONBA_PTR_GET_DEFAULT(batchTimeout_, 0) };
    inline DeployK8sApplicationRequest& setBatchTimeout(int32_t batchTimeout) { DARABONBA_PTR_SET_VALUE(batchTimeout_, batchTimeout) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t batchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DeployK8sApplicationRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline string buildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, "") };
    inline DeployK8sApplicationRequest& setBuildPackId(string buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // canaryRuleId Field Functions 
    bool hasCanaryRuleId() const { return this->canaryRuleId_ != nullptr;};
    void deleteCanaryRuleId() { this->canaryRuleId_ = nullptr;};
    inline string canaryRuleId() const { DARABONBA_PTR_GET_DEFAULT(canaryRuleId_, "") };
    inline DeployK8sApplicationRequest& setCanaryRuleId(string canaryRuleId) { DARABONBA_PTR_SET_VALUE(canaryRuleId_, canaryRuleId) };


    // changeOrderDesc Field Functions 
    bool hasChangeOrderDesc() const { return this->changeOrderDesc_ != nullptr;};
    void deleteChangeOrderDesc() { this->changeOrderDesc_ = nullptr;};
    inline string changeOrderDesc() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDesc_, "") };
    inline DeployK8sApplicationRequest& setChangeOrderDesc(string changeOrderDesc) { DARABONBA_PTR_SET_VALUE(changeOrderDesc_, changeOrderDesc) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DeployK8sApplicationRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline string configMountDescs() const { DARABONBA_PTR_GET_DEFAULT(configMountDescs_, "") };
    inline DeployK8sApplicationRequest& setConfigMountDescs(string configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline DeployK8sApplicationRequest& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline int32_t cpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, 0) };
    inline DeployK8sApplicationRequest& setCpuRequest(int32_t cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // customAffinity Field Functions 
    bool hasCustomAffinity() const { return this->customAffinity_ != nullptr;};
    void deleteCustomAffinity() { this->customAffinity_ = nullptr;};
    inline string customAffinity() const { DARABONBA_PTR_GET_DEFAULT(customAffinity_, "") };
    inline DeployK8sApplicationRequest& setCustomAffinity(string customAffinity) { DARABONBA_PTR_SET_VALUE(customAffinity_, customAffinity) };


    // customAgentVersion Field Functions 
    bool hasCustomAgentVersion() const { return this->customAgentVersion_ != nullptr;};
    void deleteCustomAgentVersion() { this->customAgentVersion_ = nullptr;};
    inline string customAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(customAgentVersion_, "") };
    inline DeployK8sApplicationRequest& setCustomAgentVersion(string customAgentVersion) { DARABONBA_PTR_SET_VALUE(customAgentVersion_, customAgentVersion) };


    // customTolerations Field Functions 
    bool hasCustomTolerations() const { return this->customTolerations_ != nullptr;};
    void deleteCustomTolerations() { this->customTolerations_ = nullptr;};
    inline string customTolerations() const { DARABONBA_PTR_GET_DEFAULT(customTolerations_, "") };
    inline DeployK8sApplicationRequest& setCustomTolerations(string customTolerations) { DARABONBA_PTR_SET_VALUE(customTolerations_, customTolerations) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline string deployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
    inline DeployK8sApplicationRequest& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline string deployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
    inline DeployK8sApplicationRequest& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DeployK8sApplicationRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline string emptyDirs() const { DARABONBA_PTR_GET_DEFAULT(emptyDirs_, "") };
    inline DeployK8sApplicationRequest& setEmptyDirs(string emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool enableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline DeployK8sApplicationRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableEmptyPushReject Field Functions 
    bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
    void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
    inline bool enableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
    inline DeployK8sApplicationRequest& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


    // enableLosslessRule Field Functions 
    bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
    void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
    inline bool enableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
    inline DeployK8sApplicationRequest& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline string envFroms() const { DARABONBA_PTR_GET_DEFAULT(envFroms_, "") };
    inline DeployK8sApplicationRequest& setEnvFroms(string envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DeployK8sApplicationRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DeployK8sApplicationRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePlatforms Field Functions 
    bool hasImagePlatforms() const { return this->imagePlatforms_ != nullptr;};
    void deleteImagePlatforms() { this->imagePlatforms_ = nullptr;};
    inline string imagePlatforms() const { DARABONBA_PTR_GET_DEFAULT(imagePlatforms_, "") };
    inline DeployK8sApplicationRequest& setImagePlatforms(string imagePlatforms) { DARABONBA_PTR_SET_VALUE(imagePlatforms_, imagePlatforms) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DeployK8sApplicationRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline string initContainers() const { DARABONBA_PTR_GET_DEFAULT(initContainers_, "") };
    inline DeployK8sApplicationRequest& setInitContainers(string initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };


    // JDK Field Functions 
    bool hasJDK() const { return this->JDK_ != nullptr;};
    void deleteJDK() { this->JDK_ = nullptr;};
    inline string JDK() const { DARABONBA_PTR_GET_DEFAULT(JDK_, "") };
    inline DeployK8sApplicationRequest& setJDK(string JDK) { DARABONBA_PTR_SET_VALUE(JDK_, JDK) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string javaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline DeployK8sApplicationRequest& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DeployK8sApplicationRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline int32_t limitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, 0) };
    inline DeployK8sApplicationRequest& setLimitEphemeralStorage(int32_t limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline DeployK8sApplicationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolume Field Functions 
    bool hasLocalVolume() const { return this->localVolume_ != nullptr;};
    void deleteLocalVolume() { this->localVolume_ = nullptr;};
    inline string localVolume() const { DARABONBA_PTR_GET_DEFAULT(localVolume_, "") };
    inline DeployK8sApplicationRequest& setLocalVolume(string localVolume) { DARABONBA_PTR_SET_VALUE(localVolume_, localVolume) };


    // losslessRuleAligned Field Functions 
    bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
    void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
    inline bool losslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
    inline DeployK8sApplicationRequest& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


    // losslessRuleDelayTime Field Functions 
    bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
    void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
    inline int32_t losslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


    // losslessRuleFuncType Field Functions 
    bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
    void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
    inline int32_t losslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


    // losslessRuleRelated Field Functions 
    bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
    void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
    inline bool losslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
    inline DeployK8sApplicationRequest& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


    // losslessRuleWarmupTime Field Functions 
    bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
    void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
    inline int32_t losslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


    // mcpuLimit Field Functions 
    bool hasMcpuLimit() const { return this->mcpuLimit_ != nullptr;};
    void deleteMcpuLimit() { this->mcpuLimit_ = nullptr;};
    inline int32_t mcpuLimit() const { DARABONBA_PTR_GET_DEFAULT(mcpuLimit_, 0) };
    inline DeployK8sApplicationRequest& setMcpuLimit(int32_t mcpuLimit) { DARABONBA_PTR_SET_VALUE(mcpuLimit_, mcpuLimit) };


    // mcpuRequest Field Functions 
    bool hasMcpuRequest() const { return this->mcpuRequest_ != nullptr;};
    void deleteMcpuRequest() { this->mcpuRequest_ = nullptr;};
    inline int32_t mcpuRequest() const { DARABONBA_PTR_GET_DEFAULT(mcpuRequest_, 0) };
    inline DeployK8sApplicationRequest& setMcpuRequest(int32_t mcpuRequest) { DARABONBA_PTR_SET_VALUE(mcpuRequest_, mcpuRequest) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline DeployK8sApplicationRequest& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRequest Field Functions 
    bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
    void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
    inline int32_t memoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, 0) };
    inline DeployK8sApplicationRequest& setMemoryRequest(int32_t memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


    // mountDescs Field Functions 
    bool hasMountDescs() const { return this->mountDescs_ != nullptr;};
    void deleteMountDescs() { this->mountDescs_ = nullptr;};
    inline string mountDescs() const { DARABONBA_PTR_GET_DEFAULT(mountDescs_, "") };
    inline DeployK8sApplicationRequest& setMountDescs(string mountDescs) { DARABONBA_PTR_SET_VALUE(mountDescs_, mountDescs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string nasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline DeployK8sApplicationRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline DeployK8sApplicationRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DeployK8sApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string packageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline DeployK8sApplicationRequest& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline DeployK8sApplicationRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DeployK8sApplicationRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline string pvcMountDescs() const { DARABONBA_PTR_GET_DEFAULT(pvcMountDescs_, "") };
    inline DeployK8sApplicationRequest& setPvcMountDescs(string pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string readiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline DeployK8sApplicationRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline DeployK8sApplicationRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestsEphemeralStorage Field Functions 
    bool hasRequestsEphemeralStorage() const { return this->requestsEphemeralStorage_ != nullptr;};
    void deleteRequestsEphemeralStorage() { this->requestsEphemeralStorage_ = nullptr;};
    inline int32_t requestsEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestsEphemeralStorage_, 0) };
    inline DeployK8sApplicationRequest& setRequestsEphemeralStorage(int32_t requestsEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestsEphemeralStorage_, requestsEphemeralStorage) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string runtimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline DeployK8sApplicationRequest& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline string securityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
    inline DeployK8sApplicationRequest& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


    // sidecars Field Functions 
    bool hasSidecars() const { return this->sidecars_ != nullptr;};
    void deleteSidecars() { this->sidecars_ = nullptr;};
    inline string sidecars() const { DARABONBA_PTR_GET_DEFAULT(sidecars_, "") };
    inline DeployK8sApplicationRequest& setSidecars(string sidecars) { DARABONBA_PTR_SET_VALUE(sidecars_, sidecars) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string slsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline DeployK8sApplicationRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // startup Field Functions 
    bool hasStartup() const { return this->startup_ != nullptr;};
    void deleteStartup() { this->startup_ = nullptr;};
    inline string startup() const { DARABONBA_PTR_GET_DEFAULT(startup_, "") };
    inline DeployK8sApplicationRequest& setStartup(string startup) { DARABONBA_PTR_SET_VALUE(startup_, startup) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DeployK8sApplicationRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // terminateGracePeriod Field Functions 
    bool hasTerminateGracePeriod() const { return this->terminateGracePeriod_ != nullptr;};
    void deleteTerminateGracePeriod() { this->terminateGracePeriod_ = nullptr;};
    inline int32_t terminateGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(terminateGracePeriod_, 0) };
    inline DeployK8sApplicationRequest& setTerminateGracePeriod(int32_t terminateGracePeriod) { DARABONBA_PTR_SET_VALUE(terminateGracePeriod_, terminateGracePeriod) };


    // trafficControlStrategy Field Functions 
    bool hasTrafficControlStrategy() const { return this->trafficControlStrategy_ != nullptr;};
    void deleteTrafficControlStrategy() { this->trafficControlStrategy_ = nullptr;};
    inline string trafficControlStrategy() const { DARABONBA_PTR_GET_DEFAULT(trafficControlStrategy_, "") };
    inline DeployK8sApplicationRequest& setTrafficControlStrategy(string trafficControlStrategy) { DARABONBA_PTR_SET_VALUE(trafficControlStrategy_, trafficControlStrategy) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string updateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline DeployK8sApplicationRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string uriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline DeployK8sApplicationRequest& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool useBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline DeployK8sApplicationRequest& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // userBaseImageUrl Field Functions 
    bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
    void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
    inline string userBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
    inline DeployK8sApplicationRequest& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


    // volumesStr Field Functions 
    bool hasVolumesStr() const { return this->volumesStr_ != nullptr;};
    void deleteVolumesStr() { this->volumesStr_ = nullptr;};
    inline string volumesStr() const { DARABONBA_PTR_GET_DEFAULT(volumesStr_, "") };
    inline DeployK8sApplicationRequest& setVolumesStr(string volumesStr) { DARABONBA_PTR_SET_VALUE(volumesStr_, volumesStr) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline DeployK8sApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline string webContainerConfig() const { DARABONBA_PTR_GET_DEFAULT(webContainerConfig_, "") };
    inline DeployK8sApplicationRequest& setWebContainerConfig(string webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };


  protected:
    // The annotation of an application pod.
    std::shared_ptr<string> annotations_ = nullptr;
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The argument array in the container start-up command. Set this parameter to a JSON array in the format of `["args1","args2"\\]`, where each key is set to a string. If you want to cancel this configuration, set this parameter to an empty JSON array in the format of `"[\\]"`.
    std::shared_ptr<string> args_ = nullptr;
    // The timeout period for an at-a-time release. Unit: seconds.
    std::shared_ptr<int32_t> batchTimeout_ = nullptr;
    // The minimum time interval for the phased release of pods. For more information, see [minReadySeconds](https://kubernetes.io/docs/concepts/workloads/controllers/deployment/#min-ready-seconds).
    std::shared_ptr<int32_t> batchWaitTime_ = nullptr;
    // The build package number of EDAS Container.
    // 
    // *   You do not need to set the parameter if you do not need to change the EDAS Container version during the deployment.
    // *   Set the parameter if you need to update the EDAS Container version of the application during the deployment.
    // 
    // You can query the build package number by using one of the following methods:
    // 
    // *   Call the ListBuildPack operation. For more information, see [ListBuildPack](https://help.aliyun.com/document_detail/423222.html).
    // *   Obtain the value in the **Build package number** column of the [Release notes for EDAS Container](https://help.aliyun.com/document_detail/92614.html) topic. For example, `59` indicates `EDAS Container 3.5.8`.
    std::shared_ptr<string> buildPackId_ = nullptr;
    std::shared_ptr<string> canaryRuleId_ = nullptr;
    // The description of the change process.
    std::shared_ptr<string> changeOrderDesc_ = nullptr;
    // The commands that you run to start the container.
    // 
    // > If you want to cancel this configuration, set this parameter to an empty string in the format of `""`.
    std::shared_ptr<string> command_ = nullptr;
    // The configuration for mounting a Kubernetes ConfigMap or Secret to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   name: the name of the Kubernetes ConfigMap or Secret.
    // *   type: the type of the API object that you want to mount. You can mount a Kubernetes ConfigMap or Secret.
    // *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    std::shared_ptr<string> configMountDescs_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running. Unit: cores. Value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<int32_t> cpuLimit_ = nullptr;
    // The number of CPU cores requested for each application instance when the application is running. Unit: cores. We recommend that you set this parameter. Value 0 indicates that no limit is set on CPU cores.
    // 
    // > You must set this parameter together with the CpuLimit parameter. Make sure that the value of this parameter does not exceed that of the CpuLimit parameter.
    std::shared_ptr<int32_t> cpuRequest_ = nullptr;
    // The affinity configuration of the pod. This parameter takes effect only if both the DeployAcrossNodes and DeployAcrossZones parameters are set to false.
    std::shared_ptr<string> customAffinity_ = nullptr;
    std::shared_ptr<string> customAgentVersion_ = nullptr;
    // The scheduling tolerance configuration of the pod. This parameter takes effect only if both the DeployAcrossNodes and DeployAcrossZones parameters are set to false.
    std::shared_ptr<string> customTolerations_ = nullptr;
    // Specifies whether to distribute application instances to multiple nodes. Value true indicates that application instances are distrubuted across zones. Other values indicate that application instances are not distributed across zones.
    std::shared_ptr<string> deployAcrossNodes_ = nullptr;
    // Specifies whether to distribute application instances across zones. Value true indicates that application instances are distrubuted across zones. Other values indicate that application instances are not distributed across zones.
    std::shared_ptr<string> deployAcrossZones_ = nullptr;
    // The version of EDAS Container on which the deployment package of the application depends. This parameter is applicable to High-Speed Service Framework (HSF) applications that you deploy by using WAR packages. This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    // The configuration for mounting a Kubernetes emptyDir volume to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   mountPath: The mount path in the container. This parameter is required.
    // *   readOnly: (Optional) The mount mode. Value true indicates the read-only mode. Value false indicates the read and write mode. Default value: false.
    // *   subPathExpr: (Optional) The regular expression that is used to match the subdirectory.
    std::shared_ptr<string> emptyDirs_ = nullptr;
    // Specifies whether to enable access to Application High Availability Service (AHAS).
    std::shared_ptr<bool> enableAhas_ = nullptr;
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
    // This parameter contains the following parameters:
    // 
    // *   configMapRef: the ConfigMap that is referenced. The following parameter is contained:
    // 
    //     *   name: the name of the ConfigMap.
    // 
    // *   secretRef: the Secret that is referenced. The following parameter is contained:
    // 
    //     *   name: the name of the Secret.
    std::shared_ptr<string> envFroms_ = nullptr;
    // The environment variables that are used to deploy the application. Set this parameter to a JSON array. Valid values: regular environment variables, Kubernetes ConfigMap environment variables, and Kubernetes Secret environment variables. Specify regular environment variables in the following format:
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
    // >  If you want to cancel this configuration, set this parameter to an empty JSON array, which is in the format of "[]".
    std::shared_ptr<string> envs_ = nullptr;
    // The absolute URL of the image. This parameter setting overwrites the setting of the ImageTag parameter.
    std::shared_ptr<string> image_ = nullptr;
    // The destination image platform. This parameter takes effect only when you deploy applications by using .war or .jar packages.
    // 
    // *   If you want to specify x86_64, set the value to linux/amd64.
    // *   If you want to specify ARM64, set the value to linux/arm64.
    // *   If you want to specify both x86_64 and ARM64, set the value to linux/amd64,linux/arm64.
    // *   If you leave this parameter empty, the default architecture is used.
    std::shared_ptr<string> imagePlatforms_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    std::shared_ptr<string> initContainers_ = nullptr;
    // The version of the Java Development Kit (JDK) on which the deployment package of the application depends. Open JDK 7 and Open JDK 8 are supported. This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> JDK_ = nullptr;
    // The configuration of Java startup parameters for a Java application. These startup parameters involve the memory, application, garbage collection (GC) policy, tools, service registration and discovery, and custom configurations. Proper parameter settings help reduce the GC overheads, shorten the server response time, and improve the throughput. Set this parameter to a JSON string. In the example, original indicates the configuration value, and startup indicates a startup parameter. The system automatically concatenates all startup values as the settings of Java startup parameters for the application. To delete this configuration, leave the parameter value empty by entering `""` or `"{}"`.
    std::shared_ptr<string> javaStartUpConfig_ = nullptr;
    // The label of an application pod.
    std::shared_ptr<string> labels_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the ephemeral storage space.
    std::shared_ptr<int32_t> limitEphemeralStorage_ = nullptr;
    // The configuration for the liveness check on the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"tcpSocket":{"host":"", "port":8080}}`. If you want to cancel this configuration, set this parameter to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> liveness_ = nullptr;
    // The configurations that are used when the host files are mounted to the container on which the application is running. Example: `[{"type":"","nodePath":"/localfiles","mountPath":"/app/files"},{"type":"Directory","nodePath":"/mnt","mountPath":"/app/storage"}\\]`. The nodePath parameter specifies the host path, the mountPath parameter specifies the path within the container, and the type parameter specifies the mounting type.
    std::shared_ptr<string> localVolume_ = nullptr;
    // Specifies whether to enable Graceful Rolling Release and configure Complete Service Registration before Readiness Probing. Valid values:
    // 
    // *   true: If you turn on the switch, the system uses the /health path and provides port 55199 for the health check. The system does not intrude into the application. When the service is registered, the system returns HTTP 200 status code. Otherwise, the system returns HTTP 500 status code.
    // 
    // > If you set both the LosslessRuleRelated parameter and this parameter to true, the operation checks whether the service prefetching is complete.
    // 
    // *   false: If you turn off the switch, the system does not provide a port to check whether the service is registered.
    std::shared_ptr<bool> losslessRuleAligned_ = nullptr;
    // The delay of service registration. Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleDelayTime_ = nullptr;
    // The number of prefetching curves. Valid values: 0 to 20. The default value is 2, which is suitable for common prefetching scenarios. This value indicates that the received traffic amount of the provider during prefetching is displayed as a quadratic curve.
    std::shared_ptr<int32_t> losslessRuleFuncType_ = nullptr;
    // Specifies whether to enable Graceful Rolling Release and configure Complete Service Prefetching before Readiness Probing. Valid values:
    // 
    // *   true: If you turn on the switch, the system uses the /health path and provides port 55199 for the health check. The system does not intrude into the application. When service prefetching is complete, the system returns HTTP 200 status code. Otherwise, the system returns HTTP 500 status code.
    // *   false: If you turn off the switch, the system does not provide a port to check whether service prefetching is complete.
    std::shared_ptr<bool> losslessRuleRelated_ = nullptr;
    // The service prefetching duration. Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleWarmupTime_ = nullptr;
    // The maximum number of CPU cores allowed. Unit: cores. Value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<int32_t> mcpuLimit_ = nullptr;
    // The minimum number of CPU cores required. Unit: cores. Value 0 indicates that no limit is set on CPU cores.
    // 
    // > You must set this parameter together with the CpuLimit parameter. Make sure that the value of this parameter does not exceed that of the CpuLimit parameter.
    std::shared_ptr<int32_t> mcpuRequest_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is running. Unit: MB. Value 0 indicates that no limit is set on the memory size.
    std::shared_ptr<int32_t> memoryLimit_ = nullptr;
    // The size of memory requested for each application instance when the application is running. Unit: MB. We recommend that you set this parameter. If you do not want to apply for a memory quota, set this parameter to 0.
    // 
    // > You must set this parameter together with the MemoryLimit parameter. Make sure that the value of this parameter does not exceed that of the MemoryLimit parameter.
    std::shared_ptr<int32_t> memoryRequest_ = nullptr;
    // The description of the NAS mounting configuration. Set this parameter to a serialized JSON string. Example: `[{"nasPath": "/k8s","mountPath": "/mnt"},{"nasPath": "/files","mountPath": "/app/files"}\\]`. The nasPath parameter specifies the file storage path, and the mountPath parameter specifies the path to mount the file system to the container in which the application is running.
    std::shared_ptr<string> mountDescs_ = nullptr;
    // The ID of the File Storage NAS (NAS) file system mounted to the container in which the application is running. The NAS file system must be in the same region as the cluster. The NAS file system must have an available mount target, or have a mount target on the vSwitch in the virtual private cloud (VPC) in which the application resides. If you do not specify this parameter but specify the MountDescs parameter, a NAS file system is automatically purchased and mounted to the vSwitch in the VPC.
    std::shared_ptr<string> nasId_ = nullptr;
    // The URL of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application.
    // 
    // > The version of EDAS SDK for Java or Python must be V2.44.0 or later.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package. This parameter is required if you use a FatJar or WAR package to deploy the application. You must specify a version.
    // 
    // > The version of EDAS SDK for Java or Python must be V2.44.0 or later.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The version ID of the deployment package.
    std::shared_ptr<string> packageVersionId_ = nullptr;
    // The post-start script. Example: `{"exec":{"command":["cat","/etc/group"\\]}}`. If you want to cancel this configuration, set this parameter to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> postStart_ = nullptr;
    // The pre-stop script. Example: `{"tcpSocket":{"host":"", "port":8080}}`. If you want to cancel this configuration, set this parameter to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> preStop_ = nullptr;
    // The configuration for mounting a Kubernetes PersistentVolumeClaim (PVC) to a directory in an elastic container instance. The following parameters are included in the configuration:
    // 
    // *   pvcName: the name of the PVC. Make sure that the volume exists and is in the Bound state.
    // 
    // *   mountPaths: the directory to which you want to mount the PVC. You can configure multiple directories. You can set the following two parameters for each mount directory:
    // 
    //     *   mountPath: the mount path. The mount path must be an absolute path that starts with a forward slash (/).
    //     *   readOnly: the mount mode. Value true indicates the read-only mode. Value false indicates the read and write mode. Default value: false.
    std::shared_ptr<string> pvcMountDescs_ = nullptr;
    // The configuration for the readiness check on the container. If the check fails, the traffic that passes through the Kubernetes service is not transmitted to the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": [{"name": "test","value": "testvalue"}\\]}}`. If you want to cancel this configuration, set this parameter to `""` or `{}`. If you do not specify this parameter, this configuration is ignored.
    std::shared_ptr<string> readiness_ = nullptr;
    // The number of application instances. The minimum value is 0.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The minimum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the ephemeral storage space.
    std::shared_ptr<int32_t> requestsEphemeralStorage_ = nullptr;
    // The type of the container runtime. Valid values:
    // 
    // *   runc: standard container runtime
    // *   runv: sandboxed container runtime
    // 
    // This parameter is applicable only to clusters that use sandboxed containers.
    std::shared_ptr<string> runtimeClassName_ = nullptr;
    std::shared_ptr<string> securityContext_ = nullptr;
    std::shared_ptr<string> sidecars_ = nullptr;
    // The Logstore configuration. If you want to cancel this configuration, leave the parameter value empty by entering `""` or `"{}"`.
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
    //     *   logDir: If the standard output type is used, the collection path is stdout.log. If the file type is used, the collection path is the path of the collected file. Wildcards (\\*) are supported. The collection path must match the following regular expression: `^/(.+)/(.*)^/$`.
    std::shared_ptr<string> slsConfigs_ = nullptr;
    std::shared_ptr<string> startup_ = nullptr;
    // The storage type of the NAS file system.
    // 
    // *   Valid values for General-purpose NAS file systems: Capacity and Performance.
    // *   Valid values for Extreme NAS file systems: standard and advance.
    // 
    // You can set this parameter only to Performance.
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<int32_t> terminateGracePeriod_ = nullptr;
    // The traffic adjustment policy for a canary release.
    std::shared_ptr<string> trafficControlStrategy_ = nullptr;
    // The phased release policy.
    // 
    // *   Example 1: One instance for a canary release + Two subsequent batches + Automatic batching + 1-minute batch interval.
    // 
    // `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`
    // 
    // *   Example 2: One instance for a canary release + Two subsequent batches + Manual batching.
    // 
    // `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`
    // 
    // *   Example 3: Two batches + Automatic batching + 0-minute batch interval.
    // 
    // `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    std::shared_ptr<string> updateStrategy_ = nullptr;
    // The URI encoding scheme. Valid values: ISO-8859-1, GBK, GB2312, and UTF-8.
    // 
    // > If you do not specify this parameter in the application configurations, the default URI encoding scheme in the Tomcat container is applied.
    std::shared_ptr<string> uriEncoding_ = nullptr;
    // Specifies whether to use the encoding scheme specified in the request body for URI query parameters.
    // 
    // > If this parameter is not specified in application configuration, the default value false is applied.
    std::shared_ptr<bool> useBodyEncoding_ = nullptr;
    std::shared_ptr<string> userBaseImageUrl_ = nullptr;
    // The data volume.
    std::shared_ptr<string> volumesStr_ = nullptr;
    // The version of the Tomcat container on which the deployment package of the application depends. This parameter is applicable to Spring Cloud and Dubbo applications that you deploy by using WAR packages. This parameter is unavailable if you deploy applications by using images.
    std::shared_ptr<string> webContainer_ = nullptr;
    // The Tomcat container configuration. If you want to cancel this configuration, set this parameter to `""` or `"{}"`. The following parameters are included in the configuration:
    // 
    // *   useDefaultConfig: specifies whether to use the default configuration. Value true indicates to use the default configuration. Value false indicates to use the custom configuration. If the default configuration is used, the following parameters do not take effect.
    // 
    // *   contextInputType: the type of the access path for the application. Valid values:
    // 
    //     *   war: The access path for the application is the name of the WAR package. You do not need to specify a custom path.
    //     *   root: The access path for the application is /. You do not need to specify a custom path.
    //     *   custom: If you select this option, you must specify a custom path for the contextPath parameter.
    // 
    // *   contextPath: the custom access path for the application. This parameter is required only when you set the contextInputType parameter to custom.
    // 
    // *   httpPort: the port number. The port number ranges from 1024 to 65535. Though the admin permissions are configured for the container, the root permissions are required to perform operations on ports whose number is less than 1024. Enter a value that ranges from 1025 to 65535 because the container has only the admin permissions. If you do not configure this parameter, the default port number 8080 is used.
    // 
    // *   maxThreads: the maximum number of connections in the connection pool. Default value: 400.
    // 
    //     **
    // 
    //     **Note**This parameter greatly affects the application performance. We recommend that you set this parameter under professional guidance.
    // 
    // *   uriEncoding: the URI encoding scheme in the Tomcat container. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312. If you do not specify this parameter, the default value ISO-8859-1 is used.
    // 
    // *   useBodyEncoding: specifies whether to use the encoding scheme specified in the request body for URI query parameters.
    // 
    // *   useAdvancedServerXml: specifies whether to use advanced configurations to customize the `server.xml` file. If the preceding parameter types and specific parameters cannot meet your requirements, you can use advanced configurations to customize the `server.xml` file of Tomcat.
    // 
    // *   serverXml: the content of the `server.xml` file customized by using advanced configurations. This parameter takes effect only when you set the useAdvancedServerXml parameter to true.
    std::shared_ptr<string> webContainerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
