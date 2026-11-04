// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackoffLimit, backoffLimit_);
      DARABONBA_PTR_TO_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConcurrencyPolicy, concurrencyPolicy_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EnableImageAccl, enableImageAccl_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_TO_JSON(MountHost, mountHost_);
      DARABONBA_PTR_TO_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_TO_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_TO_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(Php, php_);
      DARABONBA_PTR_TO_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_TO_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(Python, python_);
      DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_TO_JSON(RefAppId, refAppId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(Slice, slice_);
      DARABONBA_PTR_TO_JSON(SliceEnvs, sliceEnvs_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackoffLimit, backoffLimit_);
      DARABONBA_PTR_FROM_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConcurrencyPolicy, concurrencyPolicy_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EnableImageAccl, enableImageAccl_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_FROM_JSON(MountHost, mountHost_);
      DARABONBA_PTR_FROM_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_FROM_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_FROM_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(Php, php_);
      DARABONBA_PTR_FROM_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_FROM_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(Python, python_);
      DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_FROM_JSON(RefAppId, refAppId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(Slice, slice_);
      DARABONBA_PTR_FROM_JSON(SliceEnvs, sliceEnvs_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    UpdateJobRequest() = default ;
    UpdateJobRequest(const UpdateJobRequest &) = default ;
    UpdateJobRequest(UpdateJobRequest &&) = default ;
    UpdateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRequest() = default ;
    UpdateJobRequest& operator=(const UpdateJobRequest &) = default ;
    UpdateJobRequest& operator=(UpdateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->appId_ == nullptr && this->backoffLimit_ == nullptr && this->bestEffortType_ == nullptr && this->command_ == nullptr
        && this->commandArgs_ == nullptr && this->concurrencyPolicy_ == nullptr && this->configMapMountDesc_ == nullptr && this->customHostAlias_ == nullptr && this->edasContainerVersion_ == nullptr
        && this->enableImageAccl_ == nullptr && this->envs_ == nullptr && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr && this->jarStartArgs_ == nullptr
        && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->nasConfigs_ == nullptr
        && this->nasId_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr && this->packageUrl_ == nullptr
        && this->packageVersion_ == nullptr && this->php_ == nullptr && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr
        && this->preStop_ == nullptr && this->programmingLanguage_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr && this->refAppId_ == nullptr
        && this->replicas_ == nullptr && this->slice_ == nullptr && this->sliceEnvs_ == nullptr && this->slsConfigs_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr
        && this->timeout_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->triggerConfig_ == nullptr && this->warStartOptions_ == nullptr
        && this->webContainer_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline UpdateJobRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline UpdateJobRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backoffLimit Field Functions 
    bool hasBackoffLimit() const { return this->backoffLimit_ != nullptr;};
    void deleteBackoffLimit() { this->backoffLimit_ = nullptr;};
    inline int64_t getBackoffLimit() const { DARABONBA_PTR_GET_DEFAULT(backoffLimit_, 0L) };
    inline UpdateJobRequest& setBackoffLimit(int64_t backoffLimit) { DARABONBA_PTR_SET_VALUE(backoffLimit_, backoffLimit) };


    // bestEffortType Field Functions 
    bool hasBestEffortType() const { return this->bestEffortType_ != nullptr;};
    void deleteBestEffortType() { this->bestEffortType_ = nullptr;};
    inline string getBestEffortType() const { DARABONBA_PTR_GET_DEFAULT(bestEffortType_, "") };
    inline UpdateJobRequest& setBestEffortType(string bestEffortType) { DARABONBA_PTR_SET_VALUE(bestEffortType_, bestEffortType) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline UpdateJobRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline UpdateJobRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // concurrencyPolicy Field Functions 
    bool hasConcurrencyPolicy() const { return this->concurrencyPolicy_ != nullptr;};
    void deleteConcurrencyPolicy() { this->concurrencyPolicy_ = nullptr;};
    inline string getConcurrencyPolicy() const { DARABONBA_PTR_GET_DEFAULT(concurrencyPolicy_, "") };
    inline UpdateJobRequest& setConcurrencyPolicy(string concurrencyPolicy) { DARABONBA_PTR_SET_VALUE(concurrencyPolicy_, concurrencyPolicy) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string getConfigMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline UpdateJobRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline UpdateJobRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline UpdateJobRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // enableImageAccl Field Functions 
    bool hasEnableImageAccl() const { return this->enableImageAccl_ != nullptr;};
    void deleteEnableImageAccl() { this->enableImageAccl_ = nullptr;};
    inline bool getEnableImageAccl() const { DARABONBA_PTR_GET_DEFAULT(enableImageAccl_, false) };
    inline UpdateJobRequest& setEnableImageAccl(bool enableImageAccl) { DARABONBA_PTR_SET_VALUE(enableImageAccl_, enableImageAccl) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline UpdateJobRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline UpdateJobRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateJobRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline UpdateJobRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline UpdateJobRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline UpdateJobRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string getMountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline UpdateJobRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline UpdateJobRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline UpdateJobRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline UpdateJobRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline UpdateJobRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline UpdateJobRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string getOssMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline UpdateJobRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline UpdateJobRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline UpdateJobRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // php Field Functions 
    bool hasPhp() const { return this->php_ != nullptr;};
    void deletePhp() { this->php_ = nullptr;};
    inline string getPhp() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
    inline UpdateJobRequest& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline UpdateJobRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline UpdateJobRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline UpdateJobRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline UpdateJobRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline UpdateJobRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline UpdateJobRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline UpdateJobRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // refAppId Field Functions 
    bool hasRefAppId() const { return this->refAppId_ != nullptr;};
    void deleteRefAppId() { this->refAppId_ = nullptr;};
    inline string getRefAppId() const { DARABONBA_PTR_GET_DEFAULT(refAppId_, "") };
    inline UpdateJobRequest& setRefAppId(string refAppId) { DARABONBA_PTR_SET_VALUE(refAppId_, refAppId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
    inline UpdateJobRequest& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // slice Field Functions 
    bool hasSlice() const { return this->slice_ != nullptr;};
    void deleteSlice() { this->slice_ = nullptr;};
    inline bool getSlice() const { DARABONBA_PTR_GET_DEFAULT(slice_, false) };
    inline UpdateJobRequest& setSlice(bool slice) { DARABONBA_PTR_SET_VALUE(slice_, slice) };


    // sliceEnvs Field Functions 
    bool hasSliceEnvs() const { return this->sliceEnvs_ != nullptr;};
    void deleteSliceEnvs() { this->sliceEnvs_ = nullptr;};
    inline string getSliceEnvs() const { DARABONBA_PTR_GET_DEFAULT(sliceEnvs_, "") };
    inline UpdateJobRequest& setSliceEnvs(string sliceEnvs) { DARABONBA_PTR_SET_VALUE(sliceEnvs_, sliceEnvs) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline UpdateJobRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline UpdateJobRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateJobRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline UpdateJobRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline UpdateJobRequest& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline UpdateJobRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline UpdateJobRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The ARN of the RAM role required to pull images across accounts. For more information, see [Implement cross-account authorization by using RAM roles](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The ACR Enterprise instance ID. This parameter is required when **ImageUrl** is a Container Registry Enterprise instance.
    shared_ptr<string> acrInstanceId_ {};
    // The ID of the job template to update.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The number of retries for the job.
    shared_ptr<int64_t> backoffLimit_ {};
    // The BestEffort policy.
    shared_ptr<string> bestEffortType_ {};
    // The startup command of the image. The command must be an executable object that exists in the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // Based on the preceding example, `Command="echo"` and `CommandArgs=["abc", ">", "file0"]`.
    shared_ptr<string> command_ {};
    // The arguments for the image startup command. These are the arguments required by the **Command** parameter. Format:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, `CommandArgs=["abc", ">", "file0"]`. The `["abc", ">", "file0"]` part must be converted to a string in JSON array format. If this parameter is not required, leave it empty.
    shared_ptr<string> commandArgs_ {};
    // The concurrency policy of the job. Valid values:
    // 
    // - **Forbid**: Forbids concurrent execution. A new job is not created if the previous job is not completed.
    // - **Allow**: Allows concurrent execution of jobs.
    // - **Replace**: Replaces the previous job with a new job if the previous job is not completed when the new job is scheduled to be created.
    shared_ptr<string> concurrencyPolicy_ {};
    // The mount description of the **ConfigMap**. Use the ConfigMaps created on the namespace configuration item page to inject configuration information into the container. Parameter descriptions:
    // 
    // - **congfigMapId**: The instance ID of the ConfigMap instance. You can invoke the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the instance ID.
    // - **key**: The key value.
    // 
    // > You can mount all keys by passing the `sae-sys-configmap-all` parameter.
    // 
    // - **mountPath**: The mount path.
    shared_ptr<string> configMapMountDesc_ {};
    // The custom host mappings in the container. Valid values:
    // 
    // - **hostName**: The domain name or hostname.
    // - **ip**: The IP address.
    shared_ptr<string> customHostAlias_ {};
    // The runtime environment version for the job in the HSF framework, such as the Ali-Tomcat container.
    shared_ptr<string> edasContainerVersion_ {};
    // Specifies whether to enable image acceleration.
    shared_ptr<bool> enableImageAccl_ {};
    // The environment variables for the container. You can specify custom environment variables or reference ConfigMaps. To reference a ConfigMap, you must create a ConfigMap instance first. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
    // - Custom configuration
    //     - **name**: The name of the environment variable.
    //     - **value**: The value of the environment variable.
    // - Reference a ConfigMap
    //     - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<ConfigMap name>`, for example, `sae-sys-configmap-all-test1`.
    //     - **valueFrom**: The reference of the environment variable. Set the value to `configMapRef`.
    //     - **configMapId**: The ID of the ConfigMap.
    //     - **key**: The key. If you reference all key-value pairs, do not set this field.
    shared_ptr<string> envs_ {};
    // The ID of the corresponding secret.
    shared_ptr<string> imagePullSecrets_ {};
    // The URL of the image. This parameter is required when **Package Type** is set to **Image**.
    shared_ptr<string> imageUrl_ {};
    // The startup arguments for the JAR package job. Default job startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // The startup options for the JAR package job. Default job startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The JDK version required by the deployment package. Valid values:
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
    // The description of the NAS mount. If the configuration remains unchanged during deployment, you do not need to set this parameter. That is, you do not need to include the **MountDesc** field in the request. To clear the NAS configuration, you must set this field to an empty string in the request. That is, set the value of **MountDesc** to "".
    shared_ptr<string> mountDesc_ {};
    // The mount target of the NAS file system in the VPC of the job template. If the configuration remains unchanged during deployment, you do not need to set this parameter. That is, you do not need to include the **MountHost** field in the request. To clear the NAS configuration, you must set this field to an empty string in the request. That is, set the value of **MountHost** to "".
    shared_ptr<string> mountHost_ {};
    // The configuration for mounting the NAS file system.
    shared_ptr<string> nasConfigs_ {};
    // The ID of the Apsara File Storage NAS file system. If the configuration remains unchanged during deployment, you do not need to set this parameter. That is, you do not need to include the **NasId** field in the request. To clear the NAS configuration, you must set this field to an empty string in the request. That is, set the value of **NasId** to "".
    shared_ptr<string> nasId_ {};
    // The AccessKey ID used to read and write OSS data.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey Secret used to read and write OSS data.
    shared_ptr<string> ossAkSecret_ {};
    // The OSS mount description. Parameter descriptions:
    // 
    // - **bucketName**: The name of the bucket.
    // - **bucketPath**: The folder or object that you created in OSS. If the OSS mount folder does not exist, an exception is triggered.
    // - **mountPath**: The container path in SAE. If the path already exists, it overwrites the existing content. If the path does not exist, it is created.
    // - **readOnly**: Specifies whether the container path has read permissions on the mount folder resources. Valid values:
    //     - **true**: Read-only permissions.
    //     - **false**: Read and write permissions.
    shared_ptr<string> ossMountDescs_ {};
    // The URL of the deployment package. This parameter is required when **Package Type** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version number of the deployment package. This parameter is required when **Package Type** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The ACR Enterprise instance ID.
    shared_ptr<string> php_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path for the PHP job startup configuration. You must ensure that the PHP server uses this configuration file to start.
    shared_ptr<string> phpConfigLocation_ {};
    // The script to execute after the container starts. A script is executed immediately after the container is created. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> postStart_ {};
    // The script to execute before the container stops. A script is executed before the container is deleted. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> preStop_ {};
    // The programming language. Valid values: **java**, **php**, **python**, and **shell**.
    shared_ptr<string> programmingLanguage_ {};
    // The Python environment. Supported version: **PYTHON 3.9.15**.
    shared_ptr<string> python_ {};
    // The custom installation module dependencies. By default, the dependencies defined in the requirements.txt file in the root folder are installed. If the file is not configured or you use a custom software package, you can specify the dependencies to install.
    shared_ptr<string> pythonModules_ {};
    // The ID of the referenced job.
    shared_ptr<string> refAppId_ {};
    // The number of concurrent instances for the job.
    shared_ptr<string> replicas_ {};
    // Specifies whether to enable job slicing.
    shared_ptr<bool> slice_ {};
    // The job slicing parameters.
    shared_ptr<string> sliceEnvs_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - To use SLS resources automatically created by Serverless App Engine (SAE): `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // - To use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // Parameter descriptions:
    // 
    // - **projectName**: The name of the SLS project.  
    // - **logDir**: The log path.
    // - **logType**: The log type. **stdout** indicates container standard output logs. Only one entry is allowed. If no entry is specified, file logs are collected.
    // - **logstoreName**: The name of the SLS Logstore.
    // - **logtailName**: The name of the SLS Logtail. If this parameter is not specified, a new Logtail is created.
    // 
    // If the SLS collection configuration remains unchanged during multiple deployments, you do not need to configure this parameter. That is, you do not need to include the **SlsConfigs** field in the request. If you no longer need the SLS collection feature, you must set the value of this field to an empty string in the request. That is, set the value of **SlsConfigs** to "".
    // 
    // > The project automatically created with the job template is deleted when the job template is deleted. Therefore, when selecting an existing project, you cannot select a project automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // The timeout period for graceful shutdown. Unit: seconds. Default value: 30. Valid values: 1 to 300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The timeout period of the job. Unit: seconds.
    shared_ptr<int64_t> timeout_ {};
    // The time zone. Default value: **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat file configuration. Set the value to "" or "{}" to delete the configuration. Valid values:
    // 
    // - **port**: The port number. Valid values: 1024 to 65535. Ports smaller than 1024 require root permissions. Because the container is configured with admin permissions, specify a port greater than 1024. Default value: 8080.
    // - **contextPath**: The access path. Default value: the root directory "/".
    // - **maxThreads**: The maximum number of connections in the connection pool. Default value: 400.
    // - **uriEncoding**: The encoding format of Tomcat. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. Default value: **ISO-8859-1**.
    // - **useBodyEncoding**: Specifies whether to use **BodyEncoding for URL**. Default value: **true**.
    shared_ptr<string> tomcatConfig_ {};
    shared_ptr<string> triggerConfig_ {};
    // The startup command for the WAR package deployment job. The procedure is the same as configuring the startup command for image deployment. For more information, see [Configure a startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The Tomcat version required by the deployment package. Valid values:
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
