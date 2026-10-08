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
        && this->appId_ == nullptr && this->args_ == nullptr && this->batchTimeout_ == nullptr && this->batchWaitTime_ == nullptr && this->buildPackId_ == nullptr
        && this->canaryRuleId_ == nullptr && this->changeOrderDesc_ == nullptr && this->command_ == nullptr && this->configMountDescs_ == nullptr && this->cpuLimit_ == nullptr
        && this->cpuRequest_ == nullptr && this->customAffinity_ == nullptr && this->customAgentVersion_ == nullptr && this->customTolerations_ == nullptr && this->deployAcrossNodes_ == nullptr
        && this->deployAcrossZones_ == nullptr && this->edasContainerVersion_ == nullptr && this->emptyDirs_ == nullptr && this->enableAhas_ == nullptr && this->enableEmptyPushReject_ == nullptr
        && this->enableLosslessRule_ == nullptr && this->envFroms_ == nullptr && this->envs_ == nullptr && this->image_ == nullptr && this->imagePlatforms_ == nullptr
        && this->imageTag_ == nullptr && this->initContainers_ == nullptr && this->JDK_ == nullptr && this->javaStartUpConfig_ == nullptr && this->labels_ == nullptr
        && this->limitEphemeralStorage_ == nullptr && this->liveness_ == nullptr && this->localVolume_ == nullptr && this->losslessRuleAligned_ == nullptr && this->losslessRuleDelayTime_ == nullptr
        && this->losslessRuleFuncType_ == nullptr && this->losslessRuleRelated_ == nullptr && this->losslessRuleWarmupTime_ == nullptr && this->mcpuLimit_ == nullptr && this->mcpuRequest_ == nullptr
        && this->memoryLimit_ == nullptr && this->memoryRequest_ == nullptr && this->mountDescs_ == nullptr && this->nasId_ == nullptr && this->packageUrl_ == nullptr
        && this->packageVersion_ == nullptr && this->packageVersionId_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr && this->pvcMountDescs_ == nullptr
        && this->readiness_ == nullptr && this->replicas_ == nullptr && this->requestsEphemeralStorage_ == nullptr && this->runtimeClassName_ == nullptr && this->securityContext_ == nullptr
        && this->sidecars_ == nullptr && this->slsConfigs_ == nullptr && this->startup_ == nullptr && this->storageType_ == nullptr && this->terminateGracePeriod_ == nullptr
        && this->trafficControlStrategy_ == nullptr && this->updateStrategy_ == nullptr && this->uriEncoding_ == nullptr && this->useBodyEncoding_ == nullptr && this->userBaseImageUrl_ == nullptr
        && this->volumesStr_ == nullptr && this->webContainer_ == nullptr && this->webContainerConfig_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline DeployK8sApplicationRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeployK8sApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline DeployK8sApplicationRequest& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // batchTimeout Field Functions 
    bool hasBatchTimeout() const { return this->batchTimeout_ != nullptr;};
    void deleteBatchTimeout() { this->batchTimeout_ = nullptr;};
    inline int32_t getBatchTimeout() const { DARABONBA_PTR_GET_DEFAULT(batchTimeout_, 0) };
    inline DeployK8sApplicationRequest& setBatchTimeout(int32_t batchTimeout) { DARABONBA_PTR_SET_VALUE(batchTimeout_, batchTimeout) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t getBatchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DeployK8sApplicationRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline string getBuildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, "") };
    inline DeployK8sApplicationRequest& setBuildPackId(string buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


    // canaryRuleId Field Functions 
    bool hasCanaryRuleId() const { return this->canaryRuleId_ != nullptr;};
    void deleteCanaryRuleId() { this->canaryRuleId_ = nullptr;};
    inline string getCanaryRuleId() const { DARABONBA_PTR_GET_DEFAULT(canaryRuleId_, "") };
    inline DeployK8sApplicationRequest& setCanaryRuleId(string canaryRuleId) { DARABONBA_PTR_SET_VALUE(canaryRuleId_, canaryRuleId) };


    // changeOrderDesc Field Functions 
    bool hasChangeOrderDesc() const { return this->changeOrderDesc_ != nullptr;};
    void deleteChangeOrderDesc() { this->changeOrderDesc_ = nullptr;};
    inline string getChangeOrderDesc() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDesc_, "") };
    inline DeployK8sApplicationRequest& setChangeOrderDesc(string changeOrderDesc) { DARABONBA_PTR_SET_VALUE(changeOrderDesc_, changeOrderDesc) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DeployK8sApplicationRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline string getConfigMountDescs() const { DARABONBA_PTR_GET_DEFAULT(configMountDescs_, "") };
    inline DeployK8sApplicationRequest& setConfigMountDescs(string configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline DeployK8sApplicationRequest& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline int32_t getCpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, 0) };
    inline DeployK8sApplicationRequest& setCpuRequest(int32_t cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // customAffinity Field Functions 
    bool hasCustomAffinity() const { return this->customAffinity_ != nullptr;};
    void deleteCustomAffinity() { this->customAffinity_ = nullptr;};
    inline string getCustomAffinity() const { DARABONBA_PTR_GET_DEFAULT(customAffinity_, "") };
    inline DeployK8sApplicationRequest& setCustomAffinity(string customAffinity) { DARABONBA_PTR_SET_VALUE(customAffinity_, customAffinity) };


    // customAgentVersion Field Functions 
    bool hasCustomAgentVersion() const { return this->customAgentVersion_ != nullptr;};
    void deleteCustomAgentVersion() { this->customAgentVersion_ = nullptr;};
    inline string getCustomAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(customAgentVersion_, "") };
    inline DeployK8sApplicationRequest& setCustomAgentVersion(string customAgentVersion) { DARABONBA_PTR_SET_VALUE(customAgentVersion_, customAgentVersion) };


    // customTolerations Field Functions 
    bool hasCustomTolerations() const { return this->customTolerations_ != nullptr;};
    void deleteCustomTolerations() { this->customTolerations_ = nullptr;};
    inline string getCustomTolerations() const { DARABONBA_PTR_GET_DEFAULT(customTolerations_, "") };
    inline DeployK8sApplicationRequest& setCustomTolerations(string customTolerations) { DARABONBA_PTR_SET_VALUE(customTolerations_, customTolerations) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline string getDeployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
    inline DeployK8sApplicationRequest& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline string getDeployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
    inline DeployK8sApplicationRequest& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DeployK8sApplicationRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline string getEmptyDirs() const { DARABONBA_PTR_GET_DEFAULT(emptyDirs_, "") };
    inline DeployK8sApplicationRequest& setEmptyDirs(string emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline DeployK8sApplicationRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableEmptyPushReject Field Functions 
    bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
    void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
    inline bool getEnableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
    inline DeployK8sApplicationRequest& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


    // enableLosslessRule Field Functions 
    bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
    void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
    inline bool getEnableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
    inline DeployK8sApplicationRequest& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline string getEnvFroms() const { DARABONBA_PTR_GET_DEFAULT(envFroms_, "") };
    inline DeployK8sApplicationRequest& setEnvFroms(string envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DeployK8sApplicationRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DeployK8sApplicationRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePlatforms Field Functions 
    bool hasImagePlatforms() const { return this->imagePlatforms_ != nullptr;};
    void deleteImagePlatforms() { this->imagePlatforms_ = nullptr;};
    inline string getImagePlatforms() const { DARABONBA_PTR_GET_DEFAULT(imagePlatforms_, "") };
    inline DeployK8sApplicationRequest& setImagePlatforms(string imagePlatforms) { DARABONBA_PTR_SET_VALUE(imagePlatforms_, imagePlatforms) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string getImageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline DeployK8sApplicationRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline string getInitContainers() const { DARABONBA_PTR_GET_DEFAULT(initContainers_, "") };
    inline DeployK8sApplicationRequest& setInitContainers(string initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };


    // JDK Field Functions 
    bool hasJDK() const { return this->JDK_ != nullptr;};
    void deleteJDK() { this->JDK_ = nullptr;};
    inline string getJDK() const { DARABONBA_PTR_GET_DEFAULT(JDK_, "") };
    inline DeployK8sApplicationRequest& setJDK(string JDK) { DARABONBA_PTR_SET_VALUE(JDK_, JDK) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string getJavaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline DeployK8sApplicationRequest& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DeployK8sApplicationRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline int32_t getLimitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, 0) };
    inline DeployK8sApplicationRequest& setLimitEphemeralStorage(int32_t limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline DeployK8sApplicationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolume Field Functions 
    bool hasLocalVolume() const { return this->localVolume_ != nullptr;};
    void deleteLocalVolume() { this->localVolume_ = nullptr;};
    inline string getLocalVolume() const { DARABONBA_PTR_GET_DEFAULT(localVolume_, "") };
    inline DeployK8sApplicationRequest& setLocalVolume(string localVolume) { DARABONBA_PTR_SET_VALUE(localVolume_, localVolume) };


    // losslessRuleAligned Field Functions 
    bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
    void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
    inline bool getLosslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
    inline DeployK8sApplicationRequest& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


    // losslessRuleDelayTime Field Functions 
    bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
    void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
    inline int32_t getLosslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


    // losslessRuleFuncType Field Functions 
    bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
    void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
    inline int32_t getLosslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


    // losslessRuleRelated Field Functions 
    bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
    void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
    inline bool getLosslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
    inline DeployK8sApplicationRequest& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


    // losslessRuleWarmupTime Field Functions 
    bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
    void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
    inline int32_t getLosslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
    inline DeployK8sApplicationRequest& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


    // mcpuLimit Field Functions 
    bool hasMcpuLimit() const { return this->mcpuLimit_ != nullptr;};
    void deleteMcpuLimit() { this->mcpuLimit_ = nullptr;};
    inline int32_t getMcpuLimit() const { DARABONBA_PTR_GET_DEFAULT(mcpuLimit_, 0) };
    inline DeployK8sApplicationRequest& setMcpuLimit(int32_t mcpuLimit) { DARABONBA_PTR_SET_VALUE(mcpuLimit_, mcpuLimit) };


    // mcpuRequest Field Functions 
    bool hasMcpuRequest() const { return this->mcpuRequest_ != nullptr;};
    void deleteMcpuRequest() { this->mcpuRequest_ = nullptr;};
    inline int32_t getMcpuRequest() const { DARABONBA_PTR_GET_DEFAULT(mcpuRequest_, 0) };
    inline DeployK8sApplicationRequest& setMcpuRequest(int32_t mcpuRequest) { DARABONBA_PTR_SET_VALUE(mcpuRequest_, mcpuRequest) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline DeployK8sApplicationRequest& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRequest Field Functions 
    bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
    void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
    inline int32_t getMemoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, 0) };
    inline DeployK8sApplicationRequest& setMemoryRequest(int32_t memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


    // mountDescs Field Functions 
    bool hasMountDescs() const { return this->mountDescs_ != nullptr;};
    void deleteMountDescs() { this->mountDescs_ = nullptr;};
    inline string getMountDescs() const { DARABONBA_PTR_GET_DEFAULT(mountDescs_, "") };
    inline DeployK8sApplicationRequest& setMountDescs(string mountDescs) { DARABONBA_PTR_SET_VALUE(mountDescs_, mountDescs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline DeployK8sApplicationRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline DeployK8sApplicationRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DeployK8sApplicationRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string getPackageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline DeployK8sApplicationRequest& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline DeployK8sApplicationRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DeployK8sApplicationRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline string getPvcMountDescs() const { DARABONBA_PTR_GET_DEFAULT(pvcMountDescs_, "") };
    inline DeployK8sApplicationRequest& setPvcMountDescs(string pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline DeployK8sApplicationRequest& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline DeployK8sApplicationRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestsEphemeralStorage Field Functions 
    bool hasRequestsEphemeralStorage() const { return this->requestsEphemeralStorage_ != nullptr;};
    void deleteRequestsEphemeralStorage() { this->requestsEphemeralStorage_ = nullptr;};
    inline int32_t getRequestsEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestsEphemeralStorage_, 0) };
    inline DeployK8sApplicationRequest& setRequestsEphemeralStorage(int32_t requestsEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestsEphemeralStorage_, requestsEphemeralStorage) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string getRuntimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline DeployK8sApplicationRequest& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline string getSecurityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
    inline DeployK8sApplicationRequest& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


    // sidecars Field Functions 
    bool hasSidecars() const { return this->sidecars_ != nullptr;};
    void deleteSidecars() { this->sidecars_ = nullptr;};
    inline string getSidecars() const { DARABONBA_PTR_GET_DEFAULT(sidecars_, "") };
    inline DeployK8sApplicationRequest& setSidecars(string sidecars) { DARABONBA_PTR_SET_VALUE(sidecars_, sidecars) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline DeployK8sApplicationRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // startup Field Functions 
    bool hasStartup() const { return this->startup_ != nullptr;};
    void deleteStartup() { this->startup_ = nullptr;};
    inline string getStartup() const { DARABONBA_PTR_GET_DEFAULT(startup_, "") };
    inline DeployK8sApplicationRequest& setStartup(string startup) { DARABONBA_PTR_SET_VALUE(startup_, startup) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DeployK8sApplicationRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // terminateGracePeriod Field Functions 
    bool hasTerminateGracePeriod() const { return this->terminateGracePeriod_ != nullptr;};
    void deleteTerminateGracePeriod() { this->terminateGracePeriod_ = nullptr;};
    inline int32_t getTerminateGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(terminateGracePeriod_, 0) };
    inline DeployK8sApplicationRequest& setTerminateGracePeriod(int32_t terminateGracePeriod) { DARABONBA_PTR_SET_VALUE(terminateGracePeriod_, terminateGracePeriod) };


    // trafficControlStrategy Field Functions 
    bool hasTrafficControlStrategy() const { return this->trafficControlStrategy_ != nullptr;};
    void deleteTrafficControlStrategy() { this->trafficControlStrategy_ = nullptr;};
    inline string getTrafficControlStrategy() const { DARABONBA_PTR_GET_DEFAULT(trafficControlStrategy_, "") };
    inline DeployK8sApplicationRequest& setTrafficControlStrategy(string trafficControlStrategy) { DARABONBA_PTR_SET_VALUE(trafficControlStrategy_, trafficControlStrategy) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline DeployK8sApplicationRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline DeployK8sApplicationRequest& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useBodyEncoding Field Functions 
    bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
    void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
    inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
    inline DeployK8sApplicationRequest& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


    // userBaseImageUrl Field Functions 
    bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
    void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
    inline string getUserBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
    inline DeployK8sApplicationRequest& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


    // volumesStr Field Functions 
    bool hasVolumesStr() const { return this->volumesStr_ != nullptr;};
    void deleteVolumesStr() { this->volumesStr_ = nullptr;};
    inline string getVolumesStr() const { DARABONBA_PTR_GET_DEFAULT(volumesStr_, "") };
    inline DeployK8sApplicationRequest& setVolumesStr(string volumesStr) { DARABONBA_PTR_SET_VALUE(volumesStr_, volumesStr) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline DeployK8sApplicationRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline string getWebContainerConfig() const { DARABONBA_PTR_GET_DEFAULT(webContainerConfig_, "") };
    inline DeployK8sApplicationRequest& setWebContainerConfig(string webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };


  protected:
    // The annotations for the application pod.
    shared_ptr<string> annotations_ {};
    // The application ID. Obtain the ID by calling the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The arguments for the container startup command. The value must be a JSON array of strings, such as `["Argument 1", "Argument 2"]`. To clear the arguments, set the parameter to an empty JSON array `"[]"`.
    shared_ptr<string> args_ {};
    // The timeout period for a single batch release. Unit: seconds.
    shared_ptr<int32_t> batchTimeout_ {};
    // The minimum interval for a phased release of pods. For more information, see [minReadySeconds](https://kubernetes.io/docs/concepts/workloads/controllers/deployment/#min-ready-seconds).
    shared_ptr<int32_t> batchWaitTime_ {};
    // The build package number for EDAS Container:
    // 
    // - If you do not need to change the EDAS Container version during deployment, you can leave this parameter unset.
    // 
    // - To update the EDAS Container version of the target application during this deployment, you must set this parameter.
    // 
    // You can obtain the number in two ways:
    // 
    // - Call the ListBuildPack operation to query the list of container versions. For more information, see [ListBuildPack](https://help.aliyun.com/document_detail/423222.html).
    // 
    // - Obtain it from the **Build Package Number** column in the [Version guide](https://help.aliyun.com/document_detail/92614.html) table. For example, `59` indicates `EDAS Container 3.5.8`.
    shared_ptr<string> buildPackId_ {};
    // The ID of the canary release rule policy.
    shared_ptr<string> canaryRuleId_ {};
    // The description of the change record.
    shared_ptr<string> changeOrderDesc_ {};
    // The container startup command.
    // 
    // > To clear this configuration, set the parameter to an empty string `""`.
    shared_ptr<string> command_ {};
    // Configures Kubernetes ConfigMap and Secret mounts. This lets you mount a ConfigMap or Secret to a specified container directory. The parameters for \\`ConfigMountDescs\\` are as follows:
    // 
    // - \\`name\\`: The name of the ConfigMap or Secret.
    // 
    // - \\`type\\`: The configuration type. \\`ConfigMap\\` and \\`Secret\\` are supported.
    // 
    // - \\`mountPath\\`: The mount path. An absolute path in the container that starts with a forward slash (/).
    shared_ptr<string> configMountDescs_ {};
    // The CPU limit for the application instance during runtime. Unit: cores. A value of 0 means no limit.
    shared_ptr<int32_t> cpuLimit_ {};
    // The CPU quota to request for the application instance during runtime. Setting this parameter is recommended.
    // Unit: cores. A value of 0 means no limit.
    // 
    // > If you set this parameter, also set the CpuLimit parameter. The value of CpuRequest must be less than or equal to the value of CpuLimit.
    shared_ptr<int32_t> cpuRequest_ {};
    // The pod affinity configuration. This takes effect only when both \\`DeployAcrossNodes\\` and \\`DeployAcrossZones\\` are \\`false\\`.
    shared_ptr<string> customAffinity_ {};
    // Sets the version of the custom Application Real-Time Monitoring Service (ARMS) agent to mount to the application.
    // 
    // > This feature is available only to whitelisted users. To use this feature, submit a ticket to be added to the whitelist.
    shared_ptr<string> customAgentVersion_ {};
    // The pod scheduling toleration configuration. This takes effect only when both \\`DeployAcrossNodes\\` and \\`DeployAcrossZones\\` are \\`false\\`.
    shared_ptr<string> customTolerations_ {};
    // Specifies whether to distribute application instances across multiple nodes. \\`true\\` indicates yes, and other values indicate no.
    shared_ptr<string> deployAcrossNodes_ {};
    // Specifies whether to distribute application instances across multiple zones. \\`true\\` indicates yes, and other values indicate no.
    shared_ptr<string> deployAcrossZones_ {};
    // The EDAS Container version on which the deployment package depends. This parameter applies to HSF applications deployed using WAR packages. It is not supported for image-based deployments.
    shared_ptr<string> edasContainerVersion_ {};
    // Configures Kubernetes \\`emptyDir\\` mounts. This lets you mount an \\`emptyDir\\` volume to a specified container directory. The parameters for \\`EmptyDirs\\` are as follows:
    // 
    // - \\`mountPath\\`: The container mount path. This is required.
    // 
    // - \\`readOnly\\`: Specifies whether the volume is read-only. Optional. \\`true\\` for read-only, \\`false\\` for read-write. The default is \\`false\\`.
    // 
    // - \\`subPathExpr\\`: The subdirectory expression. Optional.
    shared_ptr<string> emptyDirs_ {};
    // Specifies whether to connect to Application High Availability Service (AHAS).
    shared_ptr<bool> enableAhas_ {};
    // Specifies whether to enable empty push protection:
    // 
    // - \\`true\\`: Enable empty push protection.
    // 
    // - \\`false\\`: Do not enable empty push protection.
    shared_ptr<bool> enableEmptyPushReject_ {};
    // Specifies whether to enable the graceful start rule:
    // 
    // - \\`true\\`: Enable the graceful start rule.
    // 
    // - \\`false\\`: Do not enable the graceful start rule.
    shared_ptr<bool> enableLosslessRule_ {};
    // Configures environment variables of the Kubernetes \\`EnvFrom\\` type. This mounts a specified ConfigMap or Secret to a directory. Each key corresponds to a file in the directory, and the file content is the value of the key.
    // 
    // The parameters for \\`EnvFroms\\` are as follows.
    // 
    // - \\`configMapRef\\`: A reference to a ConfigMap. This field includes the following parameter:
    // 
    //   - \\`name\\`: The name of the ConfigMap.
    // 
    // - \\`secretRef\\`: A reference to a Secret. This field includes the following parameter:
    // 
    //   - \\`name\\`: The name of the Secret.
    shared_ptr<string> envFroms_ {};
    // The environment variables for the deployment. The value must be a JSON array of objects. Three types of environment variables are supported: regular, Kubernetes ConfigMap, and Kubernetes Secret. The format for a regular environment variable is as follows:
    // 
    // `{"name":"x", "value": "y"}`
    // 
    // A ConfigMap environment variable injects the value of a specified key from a ConfigMap into the container\\"s environment variables. The format is as follows:
    // 
    // `{ "name": "x2", "valueFrom": { "configMapKeyRef": { "name": "my-config", "key": "y2" } } }`
    // 
    // A Secret environment variable injects the value of a specified key from a Secret into the container\\"s environment variables. The format is as follows:
    // 
    // `{ "name": "x3", "valueFrom": { "secretKeyRef": { "name": "my-secret", "key": "y3" } } }`
    // 
    // > To clear this configuration, set the parameter to an empty JSON array \\`[]\\`.
    shared_ptr<string> envs_ {};
    // The full URL of the image. This parameter overwrites the ImageTag parameter.
    shared_ptr<string> image_ {};
    // The target platform architecture for the image. This is valid when deploying with a WAR or JAR file. Examples:
    // 
    // - To specify the x86-64 architecture: \\`linux/amd64\\`
    // 
    // - To specify the ARM 64 architecture: \\`linux/arm64\\`
    // 
    // - To build a dual-architecture image: \\`linux/amd64,linux/arm64\\`
    // 
    // - If you do not enter a value, the default architecture is used.
    shared_ptr<string> imagePlatforms_ {};
    // The image tag.
    shared_ptr<string> imageTag_ {};
    // Sets an init container for the application pod. The container configuration is in YAML format. The value is the base64-encoded YAML configuration of the init container.
    shared_ptr<string> initContainers_ {};
    // The JDK version on which the deployment package depends. Valid values: Open JDK 7, Open JDK 8, or Custom OpenJDK. This parameter is not supported for image-based deployments. If you use Custom OpenJDK, you must also configure the \\`UserBaseImageUrl\\` field.
    shared_ptr<string> JDK_ {};
    // The Java startup parameters. You can configure memory, application, garbage collection (GC) policy, tools, service registration and discovery, and custom settings. Correctly configuring these parameters helps reduce GC overhead, shorten server response time, and improve throughput. The parameter is a JSON string. \\`original\\` is the configuration value, and \\`startup\\` is the startup parameter. The system automatically concatenates all \\`startup\\` values as the Java startup parameters for the application. Set to `""` or `"{}"` to delete the configuration.
    shared_ptr<string> javaStartUpConfig_ {};
    // The labels for the application pod.
    shared_ptr<string> labels_ {};
    // The upper limit of the temporary storage resource requirement. Unit: GB. A value of 0 means no limit.
    shared_ptr<int32_t> limitEphemeralStorage_ {};
    // The liveness probe for the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"tcpSocket":{"host":"", "port":8080}}`. To delete this configuration, set the parameter to `""` or `{}`. If you do not set this parameter, the configuration is ignored.
    shared_ptr<string> liveness_ {};
    // The configuration for mounting a host file to a container. Example: `[{"type":"","nodePath":"/localfiles","mountPath":"/app/files"},{"type":"Directory","nodePath":"/mnt","mountPath":"/app/storage"}]`. In this example, \\`nodePath\\` is the host path, \\`mountPath\\` is the path in the container, and \\`type\\` is the mount type.
    shared_ptr<string> localVolume_ {};
    // Specifies whether to enable the graceful rolling deployment mode to complete service registration before the readiness probe succeeds:
    // 
    // - \\`true\\`: This switch provides a health check for the application on port 55199 and the \\`/health\\` path without intrusion. When service registration is complete, the interface returns 200. Otherwise, it returns 500.
    // 
    // > If \\`LosslessRuleRelated\\` is also set to \\`true\\`, this interface checks whether service prefetch is complete.
    // 
    // - \\`false\\`: Does not provide an interface for the application to check if service registration is complete.
    shared_ptr<bool> losslessRuleAligned_ {};
    // The service registration latency. Unit: seconds. The value ranges from 0 to 86400.
    shared_ptr<int32_t> losslessRuleDelayTime_ {};
    // The service prefetch curve. The value ranges from 0 to 20. The default is 2, which is suitable for general prefetch scenarios. This indicates that the traffic receiving curve of the service provider follows a quadratic curve during the prefetch period.
    shared_ptr<int32_t> losslessRuleFuncType_ {};
    // Specifies whether to enable the graceful rolling deployment mode to complete service prefetch before the readiness probe succeeds:
    // 
    // - \\`true\\`: This switch provides a health check for the application on port 55199 and the \\`/health\\` path without intrusion. When service prefetch is complete, the interface returns 200. Otherwise, it returns 500.
    // 
    // - \\`false\\`: Does not provide an interface for the application to check if service prefetch is complete.
    shared_ptr<bool> losslessRuleRelated_ {};
    // The service prefetch duration. Unit: seconds. The value ranges from 0 to 86400.
    shared_ptr<int32_t> losslessRuleWarmupTime_ {};
    // The maximum CPU that can be used. Unit: cores. A value of 0 means no limit.
    shared_ptr<int32_t> mcpuLimit_ {};
    // The minimum CPU resource requirement. Unit: cores. A value of 0 means no limit.
    // 
    // > If you set this parameter, you must also set the \\`CpuLimit\\` parameter. The value must be less than or equal to the value of \\`CpuLimit\\`.
    shared_ptr<int32_t> mcpuRequest_ {};
    // The memory limit for the application instance during runtime. Unit: MB. A value of 0 means no limit.
    shared_ptr<int32_t> memoryLimit_ {};
    // The memory quota to request for the application instance during runtime. Setting this parameter is recommended. Unit: MB. A value of 0 means no request.
    // 
    // > If you set this parameter, also set the MemoryLimit parameter. The value of MemoryRequest must be less than or equal to the value of MemoryLimit.
    shared_ptr<int32_t> memoryRequest_ {};
    // The mount configurations, which are a serialized JSON string. Example: `[{"nasPath": "/k8s","mountPath": "/mnt"},{"nasPath": "/files","mountPath": "/app/files"}]`. In this example, \\`nasPath\\` is the file storage path and \\`mountPath\\` is the path in the container to which the file system is mounted.
    shared_ptr<string> mountDescs_ {};
    // The ID of the Apsara File Storage NAS (NAS) file system to mount. The NAS file system must be in the same region as the cluster. It must have an available mount target quota, or its mount target must be on a vSwitch in the VPC. If you do not set this parameter but the \\`mountDescs\\` field exists, a NAS file system is automatically purchased and mounted to a vSwitch in the VPC by default.
    shared_ptr<string> nasId_ {};
    // The URL of the deployment package. Configure this parameter for applications deployed using a FatJar or WAR package.
    // 
    // > The Java or Python SDK for EDAS POP API must be version 2.44.0 or later.
    shared_ptr<string> packageUrl_ {};
    // The version number of the deployment package. This parameter is required for WAR and FatJar packages. You can define the meaning of the version number.
    // 
    // > The Java or Python SDK for EDAS POP API must be version 2.44.0 or later.
    shared_ptr<string> packageVersion_ {};
    // The ID of the deployment package version.
    shared_ptr<string> packageVersionId_ {};
    // The script to execute after the container starts. Example: `{"exec":{"command":["cat","/etc/group"]}}`. To delete this configuration, set the parameter to `{}`. If you do not set this parameter, the configuration is ignored.
    shared_ptr<string> postStart_ {};
    // The script to execute before stopping the container. Example: `{"tcpSocket":{"host":"", "port":8080}}`.
    // To delete this configuration, set the parameter to `{}`. If you do not set this parameter, the configuration is ignored.
    shared_ptr<string> preStop_ {};
    // Configures Kubernetes PersistentVolumeClaim (PVC) mounts. This lets you mount a Kubernetes PVC volume to a specified container directory. The parameters for \\`PvcMountDescs\\` are as follows:
    // 
    // - \\`pvcName\\`: The name of the PVC volume. The PVC volume must already exist and be in the Bound state.
    // 
    // - \\`mountPaths\\`: A list of mount directories. You can configure multiple mount directories. Each mount directory supports the following two parameters:
    // 
    //   - \\`mountPath\\`: The mount path. An absolute path in the container that starts with a forward slash (/).
    // 
    //   - \\`readOnly\\`: The mount mode. \\`true\\` for read-only, \\`false\\` for read-write. The default is \\`false\\`.
    shared_ptr<string> pvcMountDescs_ {};
    // The readiness probe for the container. If the probe fails, traffic from the Kubernetes service is not routed to the container. Example: `{"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": [{"name": "test","value": "testvalue"}]}}`. To delete this configuration, set the parameter to `""` or `{}`. If you do not set this parameter, the configuration is ignored.
    shared_ptr<string> readiness_ {};
    // The number of application instances. The minimum value is 0.
    shared_ptr<int32_t> replicas_ {};
    // The minimum temporary storage resource requirement. Unit: GB. A value of 0 means no limit.
    shared_ptr<int32_t> requestsEphemeralStorage_ {};
    // The container runtime type:
    // 
    // - \\`runc\\`: regular container runtime.
    // 
    // - \\`runv\\`: sandboxed container.
    // 
    // This parameter applies only to clusters that use sandboxed containers.
    shared_ptr<string> runtimeClassName_ {};
    // Sets the \\`SecurityContext\\` property for the application pod container. The value is the base64-encoded YAML configuration of the \\`SecurityContext\\`.
    shared_ptr<string> securityContext_ {};
    // Sets a sidecar container for the application pod. The container configuration is in YAML format. The value is the base64-encoded YAML configuration of the sidecar container.
    shared_ptr<string> sidecars_ {};
    // The Logstore configuration. Set to `""` or `"{}"` to delete the configuration:
    // 
    // - \\`Configs\\`:
    // 
    //   - \\`type\\`: The collection type. \\`file\\` for file type, \\`stdout\\` for standard output type.
    // 
    //   - \\`Logstore\\`: The name of the Logstore. Make sure the Logstore name is unique within the same cluster. The name must follow these rules:
    // 
    //     - It can only contain lowercase letters, numbers, hyphens (-), and underscores (_).
    // 
    //     - It must start and end with a lowercase letter or a number.
    // 
    //     - The name must be 3 to 63 characters long. If left empty, the system generates a name automatically.
    // 
    //   - \\`LogDir\\`: If the type is standard output, the collection path is \\`stdout.log\\`. If the type is file, this is the path of the file to collect. Wildcards are supported. The collection path must match the regular expression: `^/(.+)/(.*)^/$`.
    shared_ptr<string> slsConfigs_ {};
    // The startup probe can be used to perform liveness checks on slow-starting containers to prevent them from being killed before they are up and running. Example: {"failureThreshold": 3,"initialDelaySeconds": 5,"successThreshold": 1,"timeoutSeconds": 1,"httpGet": {"path": "/consumer","port": 8080,"scheme": "HTTP","httpHeaders": [{"name": "test","value": "testvalue"}]}}.
    // 
    // To delete this configuration, set the parameter to "" or {}. If you do not set this parameter, the configuration is ignored.
    shared_ptr<string> startup_ {};
    // The storage type of the NAS file system. Valid values:
    // 
    // - General-purpose NAS: \\`Capacity\\` and \\`Performance\\`
    // 
    // - Extreme NAS: \\`standard\\` and \\`advance\\`
    // 
    // Currently, only the \\`Performance\\` type is supported.
    shared_ptr<string> storageType_ {};
    // The graceful stop timeout period for the application. Unit: seconds.
    shared_ptr<int32_t> terminateGracePeriod_ {};
    // The traffic control policy for phased release.
    shared_ptr<string> trafficControlStrategy_ {};
    // The phased release policy.
    // 
    // - Example 1: Phased release with one canary instance, followed by two batches, automatic batching, and a 1-minute interval.
    //   `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`
    // 
    // - Example 2: Phased release with one canary instance, followed by two batches and manual batching.
    //   `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`
    // 
    // - Example 3: Phased release in two batches, with automatic batching and a 0-minute interval.
    //   `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    shared_ptr<string> updateStrategy_ {};
    // The URI encoding format. Supported formats: ISO-8859-1, GBK, GB2312, and UTF-8.
    // 
    // > If you do not set this parameter in the application configuration, the default Tomcat value is used.
    shared_ptr<string> uriEncoding_ {};
    // Specifies whether to enable \\`useBodyEncodingForURI\\`.
    // 
    // > If you do not set this parameter in the application configuration, the default value \\`false\\` is used.
    shared_ptr<bool> useBodyEncoding_ {};
    // When using a custom JDK runtime, you must configure the base image address. This address must be publicly accessible. The EDAS server pulls this image to build the application image.
    shared_ptr<string> userBaseImageUrl_ {};
    // The data volumes.
    shared_ptr<string> volumesStr_ {};
    // The Tomcat version on which the deployment package depends. This parameter applies to Spring Cloud and Dubbo applications deployed using WAR packages. It is not supported for image-based deployments.
    shared_ptr<string> webContainer_ {};
    // The Tomcat container configuration. Set to `""` or `"{}"` to delete the configuration:
    // 
    // - \\`useDefaultConfig\\`: Specifies whether to use a custom configuration. If \\`true\\`, the custom configuration is not used. If \\`false\\`, the custom configuration is used. If you do not use a custom configuration, the following parameter settings do not take effect.
    // 
    // - \\`contextInputType\\`: The access path of the application.
    // 
    //   - \\`war\\`: You do not need to enter a custom path. The access path is the name of the WAR package.
    // 
    //   - \\`root\\`: You do not need to enter a custom path. The access path is \\`/\\`.
    // 
    //   - \\`custom\\`: You need to enter a custom path in the \\`contextPath\\` parameter below.
    // 
    // - \\`contextPath\\`: The custom path. This parameter is required only when \\`contextInputType\\` is set to \\`custom\\`.
    // 
    // - \\`httpPort\\`: The port number. The valid range is 1024 to 65535. Ports smaller than 1024 require root permissions. Because the container is configured with administrator permissions, specify a port number greater than 1024. If you do not configure this, the default port is 8080.
    // 
    // - \\`maxThreads\\`: The size of the connection pool. The default value is 400.
    // 
    //   > This configuration greatly affects application performance. Configure it under professional guidance.
    // 
    // - \\`uriEncoding\\`: The encoding format for Tomcat. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312. If you do not set this, the default is ISO-8859-1.
    // 
    // - \\`useBodyEncoding\\`: Specifies whether to use BodyEncoding for URLs.
    // 
    // - \\`useAdvancedServerXml\\`: Specifies whether to use advanced configuration to customize the \\`server.xml\\` file. If the preceding parameter types and values do not meet your needs, you can use the advanced settings to directly edit the Tomcat \\`Server.xml\\` file.
    // 
    // - \\`serverXml\\`: The content of the custom \\`server.xml\\` text file in the advanced configuration. This takes effect when \\`useAdvancedServerXml\\` is \\`true\\`.
    shared_ptr<string> webContainerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
