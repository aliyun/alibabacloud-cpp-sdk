// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppConfigConfigMountDescs.hpp>
#include <alibabacloud/models/AppConfigEmptyDirs.hpp>
#include <alibabacloud/models/AppConfigEnvFroms.hpp>
#include <alibabacloud/models/AppConfigEnvs.hpp>
#include <alibabacloud/models/AppConfigImageConfig.hpp>
#include <alibabacloud/models/AppConfigLocalVolumes.hpp>
#include <alibabacloud/models/AppConfigNasMountDescs.hpp>
#include <alibabacloud/models/AppConfigPackageConfig.hpp>
#include <alibabacloud/models/AppConfigPvcMountDescs.hpp>
#include <alibabacloud/models/AppConfigSlsConfigs.hpp>
#include <alibabacloud/models/AppConfigWebContainerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_TO_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LocalVolumes, localVolumes_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(NasMountDescs, nasMountDescs_);
      DARABONBA_PTR_TO_JSON(NasStorageType, nasStorageType_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_TO_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(WebContainerConfig, webContainerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_FROM_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LocalVolumes, localVolumes_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(NasMountDescs, nasMountDescs_);
      DARABONBA_PTR_FROM_JSON(NasStorageType, nasStorageType_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_FROM_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(WebContainerConfig, webContainerConfig_);
    };
    AppConfig() = default ;
    AppConfig(const AppConfig &) = default ;
    AppConfig(AppConfig &&) = default ;
    AppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfig() = default ;
    AppConfig& operator=(const AppConfig &) = default ;
    AppConfig& operator=(AppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && return this->commandArgs_ == nullptr && return this->configMountDescs_ == nullptr && return this->deployAcrossNodes_ == nullptr && return this->deployAcrossZones_ == nullptr && return this->emptyDirs_ == nullptr
        && return this->enableAhas_ == nullptr && return this->envFroms_ == nullptr && return this->envs_ == nullptr && return this->imageConfig_ == nullptr && return this->isMultilingualApp_ == nullptr
        && return this->javaStartUpConfig_ == nullptr && return this->limitCpu_ == nullptr && return this->limitMem_ == nullptr && return this->liveness_ == nullptr && return this->localVolumes_ == nullptr
        && return this->nasId_ == nullptr && return this->nasMountDescs_ == nullptr && return this->nasStorageType_ == nullptr && return this->packageConfig_ == nullptr && return this->postStart_ == nullptr
        && return this->preStop_ == nullptr && return this->pvcMountDescs_ == nullptr && return this->readiness_ == nullptr && return this->replicas_ == nullptr && return this->requestCpu_ == nullptr
        && return this->requestMem_ == nullptr && return this->runtimeClassName_ == nullptr && return this->slsConfigs_ == nullptr && return this->webContainerConfig_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline AppConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline const vector<string> & commandArgs() const { DARABONBA_PTR_GET_CONST(commandArgs_, vector<string>) };
    inline vector<string> commandArgs() { DARABONBA_PTR_GET(commandArgs_, vector<string>) };
    inline AppConfig& setCommandArgs(const vector<string> & commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };
    inline AppConfig& setCommandArgs(vector<string> && commandArgs) { DARABONBA_PTR_SET_RVALUE(commandArgs_, commandArgs) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline const vector<AppConfigConfigMountDescs> & configMountDescs() const { DARABONBA_PTR_GET_CONST(configMountDescs_, vector<AppConfigConfigMountDescs>) };
    inline vector<AppConfigConfigMountDescs> configMountDescs() { DARABONBA_PTR_GET(configMountDescs_, vector<AppConfigConfigMountDescs>) };
    inline AppConfig& setConfigMountDescs(const vector<AppConfigConfigMountDescs> & configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };
    inline AppConfig& setConfigMountDescs(vector<AppConfigConfigMountDescs> && configMountDescs) { DARABONBA_PTR_SET_RVALUE(configMountDescs_, configMountDescs) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline bool deployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, false) };
    inline AppConfig& setDeployAcrossNodes(bool deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline bool deployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, false) };
    inline AppConfig& setDeployAcrossZones(bool deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline const vector<AppConfigEmptyDirs> & emptyDirs() const { DARABONBA_PTR_GET_CONST(emptyDirs_, vector<AppConfigEmptyDirs>) };
    inline vector<AppConfigEmptyDirs> emptyDirs() { DARABONBA_PTR_GET(emptyDirs_, vector<AppConfigEmptyDirs>) };
    inline AppConfig& setEmptyDirs(const vector<AppConfigEmptyDirs> & emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };
    inline AppConfig& setEmptyDirs(vector<AppConfigEmptyDirs> && emptyDirs) { DARABONBA_PTR_SET_RVALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool enableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline AppConfig& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline const vector<AppConfigEnvFroms> & envFroms() const { DARABONBA_PTR_GET_CONST(envFroms_, vector<AppConfigEnvFroms>) };
    inline vector<AppConfigEnvFroms> envFroms() { DARABONBA_PTR_GET(envFroms_, vector<AppConfigEnvFroms>) };
    inline AppConfig& setEnvFroms(const vector<AppConfigEnvFroms> & envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };
    inline AppConfig& setEnvFroms(vector<AppConfigEnvFroms> && envFroms) { DARABONBA_PTR_SET_RVALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<AppConfigEnvs> & envs() const { DARABONBA_PTR_GET_CONST(envs_, vector<AppConfigEnvs>) };
    inline vector<AppConfigEnvs> envs() { DARABONBA_PTR_GET(envs_, vector<AppConfigEnvs>) };
    inline AppConfig& setEnvs(const vector<AppConfigEnvs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline AppConfig& setEnvs(vector<AppConfigEnvs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const AppConfigImageConfig & imageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, AppConfigImageConfig) };
    inline AppConfigImageConfig imageConfig() { DARABONBA_PTR_GET(imageConfig_, AppConfigImageConfig) };
    inline AppConfig& setImageConfig(const AppConfigImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline AppConfig& setImageConfig(AppConfigImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // isMultilingualApp Field Functions 
    bool hasIsMultilingualApp() const { return this->isMultilingualApp_ != nullptr;};
    void deleteIsMultilingualApp() { this->isMultilingualApp_ = nullptr;};
    inline bool isMultilingualApp() const { DARABONBA_PTR_GET_DEFAULT(isMultilingualApp_, false) };
    inline AppConfig& setIsMultilingualApp(bool isMultilingualApp) { DARABONBA_PTR_SET_VALUE(isMultilingualApp_, isMultilingualApp) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string javaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline AppConfig& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline string limitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, "") };
    inline AppConfig& setLimitCpu(string limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline string limitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, "") };
    inline AppConfig& setLimitMem(string limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline AppConfig& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolumes Field Functions 
    bool hasLocalVolumes() const { return this->localVolumes_ != nullptr;};
    void deleteLocalVolumes() { this->localVolumes_ = nullptr;};
    inline const vector<AppConfigLocalVolumes> & localVolumes() const { DARABONBA_PTR_GET_CONST(localVolumes_, vector<AppConfigLocalVolumes>) };
    inline vector<AppConfigLocalVolumes> localVolumes() { DARABONBA_PTR_GET(localVolumes_, vector<AppConfigLocalVolumes>) };
    inline AppConfig& setLocalVolumes(const vector<AppConfigLocalVolumes> & localVolumes) { DARABONBA_PTR_SET_VALUE(localVolumes_, localVolumes) };
    inline AppConfig& setLocalVolumes(vector<AppConfigLocalVolumes> && localVolumes) { DARABONBA_PTR_SET_RVALUE(localVolumes_, localVolumes) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string nasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline AppConfig& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // nasMountDescs Field Functions 
    bool hasNasMountDescs() const { return this->nasMountDescs_ != nullptr;};
    void deleteNasMountDescs() { this->nasMountDescs_ = nullptr;};
    inline const vector<AppConfigNasMountDescs> & nasMountDescs() const { DARABONBA_PTR_GET_CONST(nasMountDescs_, vector<AppConfigNasMountDescs>) };
    inline vector<AppConfigNasMountDescs> nasMountDescs() { DARABONBA_PTR_GET(nasMountDescs_, vector<AppConfigNasMountDescs>) };
    inline AppConfig& setNasMountDescs(const vector<AppConfigNasMountDescs> & nasMountDescs) { DARABONBA_PTR_SET_VALUE(nasMountDescs_, nasMountDescs) };
    inline AppConfig& setNasMountDescs(vector<AppConfigNasMountDescs> && nasMountDescs) { DARABONBA_PTR_SET_RVALUE(nasMountDescs_, nasMountDescs) };


    // nasStorageType Field Functions 
    bool hasNasStorageType() const { return this->nasStorageType_ != nullptr;};
    void deleteNasStorageType() { this->nasStorageType_ = nullptr;};
    inline string nasStorageType() const { DARABONBA_PTR_GET_DEFAULT(nasStorageType_, "") };
    inline AppConfig& setNasStorageType(string nasStorageType) { DARABONBA_PTR_SET_VALUE(nasStorageType_, nasStorageType) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const AppConfigPackageConfig & packageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, AppConfigPackageConfig) };
    inline AppConfigPackageConfig packageConfig() { DARABONBA_PTR_GET(packageConfig_, AppConfigPackageConfig) };
    inline AppConfig& setPackageConfig(const AppConfigPackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline AppConfig& setPackageConfig(AppConfigPackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline AppConfig& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline AppConfig& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline const vector<AppConfigPvcMountDescs> & pvcMountDescs() const { DARABONBA_PTR_GET_CONST(pvcMountDescs_, vector<AppConfigPvcMountDescs>) };
    inline vector<AppConfigPvcMountDescs> pvcMountDescs() { DARABONBA_PTR_GET(pvcMountDescs_, vector<AppConfigPvcMountDescs>) };
    inline AppConfig& setPvcMountDescs(const vector<AppConfigPvcMountDescs> & pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };
    inline AppConfig& setPvcMountDescs(vector<AppConfigPvcMountDescs> && pvcMountDescs) { DARABONBA_PTR_SET_RVALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string readiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline AppConfig& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int64_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
    inline AppConfig& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestCpu Field Functions 
    bool hasRequestCpu() const { return this->requestCpu_ != nullptr;};
    void deleteRequestCpu() { this->requestCpu_ = nullptr;};
    inline string requestCpu() const { DARABONBA_PTR_GET_DEFAULT(requestCpu_, "") };
    inline AppConfig& setRequestCpu(string requestCpu) { DARABONBA_PTR_SET_VALUE(requestCpu_, requestCpu) };


    // requestMem Field Functions 
    bool hasRequestMem() const { return this->requestMem_ != nullptr;};
    void deleteRequestMem() { this->requestMem_ = nullptr;};
    inline string requestMem() const { DARABONBA_PTR_GET_DEFAULT(requestMem_, "") };
    inline AppConfig& setRequestMem(string requestMem) { DARABONBA_PTR_SET_VALUE(requestMem_, requestMem) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string runtimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline AppConfig& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline const vector<AppConfigSlsConfigs> & slsConfigs() const { DARABONBA_PTR_GET_CONST(slsConfigs_, vector<AppConfigSlsConfigs>) };
    inline vector<AppConfigSlsConfigs> slsConfigs() { DARABONBA_PTR_GET(slsConfigs_, vector<AppConfigSlsConfigs>) };
    inline AppConfig& setSlsConfigs(const vector<AppConfigSlsConfigs> & slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };
    inline AppConfig& setSlsConfigs(vector<AppConfigSlsConfigs> && slsConfigs) { DARABONBA_PTR_SET_RVALUE(slsConfigs_, slsConfigs) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline const AppConfigWebContainerConfig & webContainerConfig() const { DARABONBA_PTR_GET_CONST(webContainerConfig_, AppConfigWebContainerConfig) };
    inline AppConfigWebContainerConfig webContainerConfig() { DARABONBA_PTR_GET(webContainerConfig_, AppConfigWebContainerConfig) };
    inline AppConfig& setWebContainerConfig(const AppConfigWebContainerConfig & webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };
    inline AppConfig& setWebContainerConfig(AppConfigWebContainerConfig && webContainerConfig) { DARABONBA_PTR_SET_RVALUE(webContainerConfig_, webContainerConfig) };


  protected:
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<vector<string>> commandArgs_ = nullptr;
    std::shared_ptr<vector<AppConfigConfigMountDescs>> configMountDescs_ = nullptr;
    std::shared_ptr<bool> deployAcrossNodes_ = nullptr;
    std::shared_ptr<bool> deployAcrossZones_ = nullptr;
    std::shared_ptr<vector<AppConfigEmptyDirs>> emptyDirs_ = nullptr;
    std::shared_ptr<bool> enableAhas_ = nullptr;
    std::shared_ptr<vector<AppConfigEnvFroms>> envFroms_ = nullptr;
    std::shared_ptr<vector<AppConfigEnvs>> envs_ = nullptr;
    std::shared_ptr<AppConfigImageConfig> imageConfig_ = nullptr;
    std::shared_ptr<bool> isMultilingualApp_ = nullptr;
    std::shared_ptr<string> javaStartUpConfig_ = nullptr;
    std::shared_ptr<string> limitCpu_ = nullptr;
    std::shared_ptr<string> limitMem_ = nullptr;
    std::shared_ptr<string> liveness_ = nullptr;
    std::shared_ptr<vector<AppConfigLocalVolumes>> localVolumes_ = nullptr;
    std::shared_ptr<string> nasId_ = nullptr;
    std::shared_ptr<vector<AppConfigNasMountDescs>> nasMountDescs_ = nullptr;
    std::shared_ptr<string> nasStorageType_ = nullptr;
    std::shared_ptr<AppConfigPackageConfig> packageConfig_ = nullptr;
    std::shared_ptr<string> postStart_ = nullptr;
    std::shared_ptr<string> preStop_ = nullptr;
    std::shared_ptr<vector<AppConfigPvcMountDescs>> pvcMountDescs_ = nullptr;
    std::shared_ptr<string> readiness_ = nullptr;
    std::shared_ptr<int64_t> replicas_ = nullptr;
    std::shared_ptr<string> requestCpu_ = nullptr;
    std::shared_ptr<string> requestMem_ = nullptr;
    std::shared_ptr<string> runtimeClassName_ = nullptr;
    std::shared_ptr<vector<AppConfigSlsConfigs>> slsConfigs_ = nullptr;
    std::shared_ptr<AppConfigWebContainerConfig> webContainerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
