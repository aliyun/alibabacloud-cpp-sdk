// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_TO_JSON(BackoffLimit, backoffLimit_);
      DARABONBA_PTR_TO_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConcurrencyPolicy, concurrencyPolicy_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EnableImageAccl, enableImageAccl_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_TO_JSON(MountHost, mountHost_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_TO_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_TO_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_TO_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(Python, python_);
      DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_TO_JSON(RefAppId, refAppId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Slice, slice_);
      DARABONBA_PTR_TO_JSON(SliceEnvs, sliceEnvs_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_TO_JSON(Workload, workload_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_FROM_JSON(BackoffLimit, backoffLimit_);
      DARABONBA_PTR_FROM_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConcurrencyPolicy, concurrencyPolicy_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EnableImageAccl, enableImageAccl_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_FROM_JSON(MountHost, mountHost_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NasConfigs, nasConfigs_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(OssAkId, ossAkId_);
      DARABONBA_PTR_FROM_JSON(OssAkSecret, ossAkSecret_);
      DARABONBA_PTR_FROM_JSON(OssMountDescs, ossMountDescs_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PhpConfig, phpConfig_);
      DARABONBA_PTR_FROM_JSON(PhpConfigLocation, phpConfigLocation_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(Python, python_);
      DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_FROM_JSON(RefAppId, refAppId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Slice, slice_);
      DARABONBA_PTR_FROM_JSON(SliceEnvs, sliceEnvs_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
      DARABONBA_PTR_FROM_JSON(Workload, workload_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->appDescription_ == nullptr && this->appName_ == nullptr && this->autoConfig_ == nullptr && this->backoffLimit_ == nullptr
        && this->bestEffortType_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr && this->concurrencyPolicy_ == nullptr && this->configMapMountDesc_ == nullptr
        && this->cpu_ == nullptr && this->customHostAlias_ == nullptr && this->edasContainerVersion_ == nullptr && this->enableImageAccl_ == nullptr && this->envs_ == nullptr
        && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr && this->jarStartArgs_ == nullptr && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr
        && this->memory_ == nullptr && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->namespaceId_ == nullptr && this->nasConfigs_ == nullptr
        && this->nasId_ == nullptr && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr && this->packageType_ == nullptr
        && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr
        && this->preStop_ == nullptr && this->programmingLanguage_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr && this->refAppId_ == nullptr
        && this->replicas_ == nullptr && this->securityGroupId_ == nullptr && this->slice_ == nullptr && this->sliceEnvs_ == nullptr && this->slsConfigs_ == nullptr
        && this->terminationGracePeriodSeconds_ == nullptr && this->timeout_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->triggerConfig_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->warStartOptions_ == nullptr && this->webContainer_ == nullptr && this->workload_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline CreateJobRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateJobRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline CreateJobRequest& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoConfig Field Functions 
    bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
    void deleteAutoConfig() { this->autoConfig_ = nullptr;};
    inline bool getAutoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, false) };
    inline CreateJobRequest& setAutoConfig(bool autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


    // backoffLimit Field Functions 
    bool hasBackoffLimit() const { return this->backoffLimit_ != nullptr;};
    void deleteBackoffLimit() { this->backoffLimit_ = nullptr;};
    inline int64_t getBackoffLimit() const { DARABONBA_PTR_GET_DEFAULT(backoffLimit_, 0L) };
    inline CreateJobRequest& setBackoffLimit(int64_t backoffLimit) { DARABONBA_PTR_SET_VALUE(backoffLimit_, backoffLimit) };


    // bestEffortType Field Functions 
    bool hasBestEffortType() const { return this->bestEffortType_ != nullptr;};
    void deleteBestEffortType() { this->bestEffortType_ = nullptr;};
    inline string getBestEffortType() const { DARABONBA_PTR_GET_DEFAULT(bestEffortType_, "") };
    inline CreateJobRequest& setBestEffortType(string bestEffortType) { DARABONBA_PTR_SET_VALUE(bestEffortType_, bestEffortType) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateJobRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline CreateJobRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // concurrencyPolicy Field Functions 
    bool hasConcurrencyPolicy() const { return this->concurrencyPolicy_ != nullptr;};
    void deleteConcurrencyPolicy() { this->concurrencyPolicy_ = nullptr;};
    inline string getConcurrencyPolicy() const { DARABONBA_PTR_GET_DEFAULT(concurrencyPolicy_, "") };
    inline CreateJobRequest& setConcurrencyPolicy(string concurrencyPolicy) { DARABONBA_PTR_SET_VALUE(concurrencyPolicy_, concurrencyPolicy) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string getConfigMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline CreateJobRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateJobRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline CreateJobRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline CreateJobRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // enableImageAccl Field Functions 
    bool hasEnableImageAccl() const { return this->enableImageAccl_ != nullptr;};
    void deleteEnableImageAccl() { this->enableImageAccl_ = nullptr;};
    inline bool getEnableImageAccl() const { DARABONBA_PTR_GET_DEFAULT(enableImageAccl_, false) };
    inline CreateJobRequest& setEnableImageAccl(bool enableImageAccl) { DARABONBA_PTR_SET_VALUE(enableImageAccl_, enableImageAccl) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline CreateJobRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline CreateJobRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateJobRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline CreateJobRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline CreateJobRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline CreateJobRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateJobRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string getMountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline CreateJobRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline CreateJobRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateJobRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline CreateJobRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline CreateJobRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline CreateJobRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline CreateJobRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string getOssMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline CreateJobRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateJobRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline CreateJobRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline CreateJobRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline CreateJobRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline CreateJobRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline CreateJobRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline CreateJobRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline CreateJobRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline CreateJobRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline CreateJobRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // refAppId Field Functions 
    bool hasRefAppId() const { return this->refAppId_ != nullptr;};
    void deleteRefAppId() { this->refAppId_ = nullptr;};
    inline string getRefAppId() const { DARABONBA_PTR_GET_DEFAULT(refAppId_, "") };
    inline CreateJobRequest& setRefAppId(string refAppId) { DARABONBA_PTR_SET_VALUE(refAppId_, refAppId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateJobRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateJobRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // slice Field Functions 
    bool hasSlice() const { return this->slice_ != nullptr;};
    void deleteSlice() { this->slice_ = nullptr;};
    inline bool getSlice() const { DARABONBA_PTR_GET_DEFAULT(slice_, false) };
    inline CreateJobRequest& setSlice(bool slice) { DARABONBA_PTR_SET_VALUE(slice_, slice) };


    // sliceEnvs Field Functions 
    bool hasSliceEnvs() const { return this->sliceEnvs_ != nullptr;};
    void deleteSliceEnvs() { this->sliceEnvs_ = nullptr;};
    inline string getSliceEnvs() const { DARABONBA_PTR_GET_DEFAULT(sliceEnvs_, "") };
    inline CreateJobRequest& setSliceEnvs(string sliceEnvs) { DARABONBA_PTR_SET_VALUE(sliceEnvs_, sliceEnvs) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline CreateJobRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline CreateJobRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateJobRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline CreateJobRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline CreateJobRequest& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateJobRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateJobRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline CreateJobRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline CreateJobRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // workload Field Functions 
    bool hasWorkload() const { return this->workload_ != nullptr;};
    void deleteWorkload() { this->workload_ = nullptr;};
    inline string getWorkload() const { DARABONBA_PTR_GET_DEFAULT(workload_, "") };
    inline CreateJobRequest& setWorkload(string workload) { DARABONBA_PTR_SET_VALUE(workload_, workload) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the RAM role that is required to pull images across accounts. For more information, see [Grant permissions to pull images across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The ID of the Container Registry (ACR) Enterprise Edition instance. This parameter is required when **ImageUrl** points to an image in an ACR Enterprise Edition instance.
    shared_ptr<string> acrInstanceId_ {};
    // The description of the job template. It cannot exceed 1,024 characters.
    shared_ptr<string> appDescription_ {};
    // The name of the job template. The name can contain letters, digits, and hyphens (-). It must start with a letter and be no longer than 36 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Specifies whether to automatically configure the network environment. Valid values:
    // 
    // - **true**: SAE automatically configures the network environment when you create the job template. The values of **NamespaceId**, **VpcId**, **vSwitchId**, and **SecurityGroupId** are ignored.
    // 
    // - **false**: You must manually configure the network environment.
    shared_ptr<bool> autoConfig_ {};
    // The maximum number of retries for a task before it is marked as failed.
    shared_ptr<int64_t> backoffLimit_ {};
    // The BestEffort policy.
    shared_ptr<string> bestEffortType_ {};
    // The entrypoint command for the container. The command must be an executable inside the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // 
    // For the preceding example, `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    shared_ptr<string> command_ {};
    // Arguments for the entrypoint command (**Command**). The format is as follows:
    // 
    // `["a","b"]`
    // 
    // In the example for the `Command` parameter, the value for `CommandArgs` is `["abc", ">", "file0"]`. This value must be a string that contains a JSON array. If the command takes no arguments, you can omit this parameter.
    shared_ptr<string> commandArgs_ {};
    // The concurrency policy for the task. Valid values:
    // 
    // - **Forbid**: Prohibits concurrent runs. A new task is not created if the previous one is not complete.
    // 
    // - **Allow**: Allows concurrent running.
    // 
    // - **Replace**: If a previous task is still running when the next one is scheduled, the new task replaces the old one.
    shared_ptr<string> concurrencyPolicy_ {};
    // The **ConfigMap** mount description. Use a ConfigMap created in the namespace to inject configurations into the container. The parameters are described as follows:
    // 
    // - **configMapId**: The ID of the ConfigMap. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain this ID.
    // 
    // - **key**: The key.
    // 
    // > You can pass the `sae-sys-configmap-all` parameter to mount all keys.
    // 
    // - **mountPath**: The mount path in the container.
    shared_ptr<string> configMapMountDesc_ {};
    // The CPU required for each instance, in millicores. This value cannot be 0. Only the following fixed specifications are currently supported:
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
    // The host alias that maps a hostname to an IP address in the container. The parameters are described as follows:
    // 
    // - **hostName**: The domain name or hostname.
    // 
    // - **ip**: The IP address.
    shared_ptr<string> customHostAlias_ {};
    // The version of the HSF runtime environment for the task, such as an Ali-Tomcat container.
    shared_ptr<string> edasContainerVersion_ {};
    // Specifies whether to enable image acceleration. Valid values:
    // 
    // - **true**: Enables image acceleration.
    // 
    // - **false**: Disables image acceleration.
    shared_ptr<bool> enableImageAccl_ {};
    // Environment variables to set in the container. To reference variables, the ConfigMap must already exist. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). The value can be configured in one of the following ways:
    // 
    // - Specify custom variables
    // 
    //   - **name**: The name of the environment variable.
    // 
    //   - **value**: The value of the environment variable.
    // 
    // - Reference a ConfigMap
    // 
    //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter a value in the `sae-sys-configmap-all-<ConfigMap name>` format. Example: `sae-sys-configmap-all-test1`.
    // 
    //   - **valueFrom**: The source of the environment variable. Set the value to `configMapRef`.
    // 
    //   - **configMapId**: The ID of the ConfigMap.
    // 
    //   - **key**: The key to reference. If you want to reference all key-value pairs, do not specify this parameter.
    shared_ptr<string> envs_ {};
    // The ID of the secret used to pull the image.
    shared_ptr<string> imagePullSecrets_ {};
    // The URL of the image. This parameter is required when **PackageType** is set to **Image**.
    shared_ptr<string> imageUrl_ {};
    // The startup arguments for the JAR package. The default startup command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // The startup options for the JAR package. The default startup command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The JDK version that the deployment package requires. The following versions are supported:
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
    // This parameter is not supported when **PackageType** is set to **Image**.
    shared_ptr<string> jdk_ {};
    // The memory required for each instance, in MB. This value cannot be 0. CPU and memory specifications are coupled. The following specifications are currently supported:
    // 
    // - **1024**: corresponds to 500 or 1,000 millicores of CPU.
    // 
    // - **2048**: corresponds to 500, 1,000, or 2,000 millicores of CPU.
    // 
    // - **4096**: corresponds to 1,000, 2,000, or 4,000 millicores of CPU.
    // 
    // - **8192**: corresponds to 2,000, 4,000, or 8,000 millicores of CPU.
    // 
    // - **12288**: corresponds to 12,000 millicores of CPU.
    // 
    // - **16384**: corresponds to 4,000, 8,000, or 16,000 millicores of CPU.
    // 
    // - **24576**: corresponds to 12,000 millicores of CPU.
    // 
    // - **32768**: corresponds to 16,000 millicores of CPU.
    // 
    // - **65536**: corresponds to 8,000, 16,000, or 32,000 millicores of CPU.
    // 
    // - **131072**: corresponds to 32,000 millicores of CPU.
    shared_ptr<int32_t> memory_ {};
    // The NAS mount description. If this configuration does not change in subsequent deployments, you can omit this parameter. To clear the NAS configuration, set this parameter to an empty string ("").
    shared_ptr<string> mountDesc_ {};
    // The NAS mount target in the VPC of the job template. If this configuration does not change in subsequent deployments, you can omit this parameter. To clear the NAS configuration, set this parameter to an empty string ("").
    shared_ptr<string> mountHost_ {};
    // The ID of the SAE namespace. The namespace name can contain only lowercase letters and hyphens (-), and must start with a letter.
    shared_ptr<string> namespaceId_ {};
    // The configurations for mounting a NAS file system.
    shared_ptr<string> nasConfigs_ {};
    // The ID of the NAS file system. If this configuration does not change in subsequent deployments, you can omit this parameter. To clear the NAS configuration, set this parameter to an empty string ("").
    shared_ptr<string> nasId_ {};
    // The AccessKey ID for reading from and writing to OSS.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey secret for reading from and writing to OSS.
    shared_ptr<string> ossAkSecret_ {};
    // The description of the Object Storage Service (OSS) mount. The parameters are described as follows:
    // 
    // - **bucketName**: The name of the bucket.
    // 
    // - **bucketPath**: The directory or object in OSS. If the specified directory or object does not exist, an exception is thrown.
    // 
    // - **mountPath**: The path in the SAE container. If the path exists, it is overwritten. If the path does not exist, it is created.
    // 
    // - **readOnly**: Specifies whether the container has read-only access to the resources in the mount directory. Valid values:
    // 
    //   - **true**: read-only permission.
    // 
    //   - **false**: read and write permissions.
    shared_ptr<string> ossMountDescs_ {};
    // The type of the deployment package. Valid values:
    // 
    // - For Java applications, valid values are **FatJar**, **War**, and **Image**.
    // 
    // - For PHP applications, the valid values are:
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
    // - For **Python** applications, valid values are **PythonZip** and **Image**.
    // 
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // The URL of the deployment package. This parameter is required when **PackageType** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version of the deployment package. This parameter is required when **PackageType** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path of the startup configuration file for a PHP task. You must make sure that the PHP server uses this configuration file on startup.
    shared_ptr<string> phpConfigLocation_ {};
    // A PostStart hook. This script runs immediately after the container is created. The value must be a JSON string, for example: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> postStart_ {};
    // A PreStop hook. This script runs immediately before the container is stopped. The value must be a JSON string, for example: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> preStop_ {};
    // The programming language. Valid values: **java**, **php**, **python**, and **shell**.
    shared_ptr<string> programmingLanguage_ {};
    // The Python environment. **PYTHON 3.9.15** is supported.
    shared_ptr<string> python_ {};
    // Python dependencies to install by using pip. If you do not set this parameter, SAE installs dependencies from the \\"requirements.txt\\" file in the root directory of your project.
    shared_ptr<string> pythonModules_ {};
    // The ID of the referenced job.
    shared_ptr<string> refAppId_ {};
    // The number of concurrent task instances.
    // 
    // This parameter is required.
    shared_ptr<int32_t> replicas_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // Specifies whether to enable task sharding.
    shared_ptr<bool> slice_ {};
    // The parameters for task sharding.
    shared_ptr<string> sliceEnvs_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - To use SLS resources that are automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // 
    // - To use your own SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The parameters are described as follows:
    // 
    // - **projectName**: The name of the SLS Project.
    // 
    // - **logDir**: The path of the log file.
    // 
    // - **logType**: The log type. **stdout** indicates the standard output of the container. You can specify only one standard output. If you do not set this parameter, file logs are collected.
    // 
    // - **logstoreName**: The name of the Logstore in SLS.
    // 
    // - **logtailName**: The name of the Logtail in SLS. If you do not specify this parameter, a new Logtail is created.
    // 
    // If the log collection configuration does not change during subsequent deployments, you do not need to set this parameter (the request does not need to include the **SlsConfigs** field). If you no longer need to use the log collection feature, set the value of this parameter to an empty string ("") in your request.
    // 
    // > SAE deletes a project that it automatically created when you delete the corresponding job template. Therefore, if you specify an existing project, do not use one that was automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // The graceful shutdown timeout, in seconds. The value must be an integer from 1 to 300. Default: 30.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The task timeout, in seconds.
    shared_ptr<int64_t> timeout_ {};
    // The time zone. Default value: **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat configuration. To delete the configuration, set this parameter to `""` or `{}`. The parameters are described as follows:
    // 
    // - **port**: The port number. The valid range is 1024 to 65535. Ports below 1024 require root permissions. Because the container is configured with administrator permissions, specify a port number greater than 1024. If this parameter is not configured, the default port 8080 is used.
    // 
    // - **contextPath**: The context path. Default value: /.
    // 
    // - **maxThreads**: The maximum number of threads in the connection pool. Default value: 400.
    // 
    // - **uriEncoding**: The URI encoding scheme for Tomcat. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. If this parameter is not set, the default value **ISO-8859-1** is used.
    // 
    // - **useBodyEncodingForUri**: Specifies whether to use the encoding specified in `request.getCharacterEncoding()` to decode the request URI. Default value: **true**.
    shared_ptr<string> tomcatConfig_ {};
    shared_ptr<string> triggerConfig_ {};
    // The ID of the vSwitch for the elastic network interface of the task instance. The vSwitch must be located in the specified VPC. The vSwitch is also bound to the SAE namespace. If you do not specify this parameter, the ID of the vSwitch that is bound to the namespace is used by default.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC for the SAE namespace. In SAE, a namespace can be bound to only one VPC, and this binding cannot be changed. The binding is established when you create the first SAE job template in the namespace. A single VPC can be associated with multiple namespaces. If you do not specify this parameter, the ID of the VPC that is bound to the namespace is used by default.
    shared_ptr<string> vpcId_ {};
    // The startup command for a WAR package deployment. The configuration steps are the same as for an image-based deployment. For more information, see [Set a startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The Tomcat version that the deployment package requires. The following versions are supported:
    // 
    // - **apache-tomcat-7.0.91**
    // 
    // - **apache-tomcat-8.5.42**
    // 
    // This parameter is not supported when **PackageType** is set to **Image**.
    shared_ptr<string> webContainer_ {};
    // The workload. Set the value to `job`.
    // 
    // This parameter is required.
    shared_ptr<string> workload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
