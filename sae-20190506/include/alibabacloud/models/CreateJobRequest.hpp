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
    // The Alibaba Cloud Resource Name (ARN) of the Resource Access Management (RAM) role required to pull images across accounts. For more information, see [Use a RAM role to authorize access across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/223585.html).
    shared_ptr<string> acrAssumeRoleArn_ {};
    // The instance ID of the ACR Enterprise instance. This parameter is required when **ImageUrl** is set to an ACR Enterprise instance image.
    shared_ptr<string> acrInstanceId_ {};
    // The description of the job template. The description can be up to 1,024 characters in length.
    shared_ptr<string> appDescription_ {};
    // The name of the job template. The name can contain digits, letters, and hyphens (-). It must start with a letter and can be up to 36 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Specifies whether to automatically configure the network environment. Valid values:
    // 
    // - **true**: SAE automatically configures the network environment when creating the job template. The values of **NamespaceId**, **VpcId**, **vSwitchId**, and **SecurityGroupId** are ignored.
    // - **false**: You manually configure the network environment when creating the job template.
    shared_ptr<bool> autoConfig_ {};
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
    // Based on the preceding example, Command is set to echo and CommandArgs is set to ["abc", ">", "file0"].
    shared_ptr<string> command_ {};
    // The arguments for the image startup command. These are the arguments required by the **Command** parameter. Format:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, CommandArgs is set to ["abc", ">", "file0"]. The value ["abc", ">", "file0"] must be converted to a string in JSON array format. If this parameter is not required, you do not need to specify it.
    shared_ptr<string> commandArgs_ {};
    // The concurrency policy of the job. Valid values:
    // 
    // - **Forbid**: forbids concurrent execution. A new job is not created if the previous job is not completed.
    // - **Allow**: allows concurrent execution of jobs.
    // - **Replace**: replaces the previous job with a new job if the previous job is not completed when the creation time of the new job arrives.
    shared_ptr<string> concurrencyPolicy_ {};
    // The mount description of the **ConfigMap**. Uses the configuration items created on the namespace configuration item page to inject configuration information into the container. The parameter descriptions are as follows:
    // 
    // - **congfigMapId**: the instance ID of the ConfigMap instance. You can invoke the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the instance ID.
    // - **key**: the key value.
    // 
    // > You can pass the sae-sys-configmap-all parameter to mount all keys.
    // 
    // - **mountPath**: the mount path.
    shared_ptr<string> configMapMountDesc_ {};
    // The number of CPU cores required for each instance. Unit: millicores. The value cannot be 0. Only the following defined specifications are supported:
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
    // The runtime environment version of the job in the High-Speed Service Framework (HSF), such as the Ali-Tomcat container.
    shared_ptr<string> edasContainerVersion_ {};
    // Specifies whether to enable image acceleration. Valid values:
    // 
    // - **true**: enabled.
    // - **false**: disabled.
    shared_ptr<bool> enableImageAccl_ {};
    // The environment variables for the container. You can customize environment variables or reference ConfigMaps. To reference a ConfigMap, you must create a ConfigMap instance first. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
    // - Custom configuration
    //     - **name**: the name of the environment variable.
    //     - **value**: the value of the environment variable.
    // - Reference a ConfigMap
    //     - **name**: the name of the environment variable. You can reference a single key or all keys. To reference all keys, enter sae-sys-configmap-all-<ConfigMap name>, for example, sae-sys-configmap-all-test1.
    //     - **valueFrom**: the reference of the environment variable. Set the value to configMapRef.
    //     - **configMapId**: the ID of the ConfigMap.
    //     - **key**: the key. If you reference all key-value pairs, do not set this field.
    shared_ptr<string> envs_ {};
    // The ID of the secret.
    shared_ptr<string> imagePullSecrets_ {};
    // The image address. This parameter is required when **PackageType** is set to **Image**.
    shared_ptr<string> imageUrl_ {};
    // The startup arguments for the JAR package. Default job startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // The startup options for the JAR package. Default job startup command: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartOptions_ {};
    // The Java Development Kit (JDK) version on which the deployment package depends. Valid values:
    // 
    // - **Open JDK 8**
    // - **Open JDK 7**
    // - **Dragonwell 11**
    // - **Dragonwell 8**
    // - **openjdk-8u191-jdk-alpine3.9**
    // - **openjdk-7u201-jdk-alpine3.9**
    // 
    // This parameter is not supported when **PackageType** is set to **Image**.
    shared_ptr<string> jdk_ {};
    // The memory size required for each instance. Unit: MB. The value cannot be 0. The memory size has a one-to-one mapping with the number of CPU cores. Only the following defined specifications are supported:
    // - **1024**: corresponds to 500 and 1,000 millicores.
    // - **2048**: corresponds to 500, 1,000, and 2,000 millicores.
    // - **4096**: corresponds to 1,000, 2,000, and 4,000 millicores.
    // - **8192**: corresponds to 2,000, 4,000, and 8,000 millicores.
    // - **12288**: corresponds to 12,000 millicores.
    // - **16384**: corresponds to 4,000, 8,000, and 16,000 millicores.
    // - **24576**: corresponds to 12,000 millicores.
    // - **32768**: corresponds to 16,000 millicores.
    // - **65536**: corresponds to 8,000, 16,000, and 32,000 millicores.
    // - **131072**: corresponds to 32,000 millicores.
    shared_ptr<int32_t> memory_ {};
    // The description of the NAS mount. If the configuration remains unchanged during deployment, you do not need to set this parameter, which means the **MountDesc** field is not required in the request. To clear the NAS configuration, you must set this field to an empty string in the request, which means the value of the **MountDesc** field is "".
    shared_ptr<string> mountDesc_ {};
    // The mount target of the NAS file system in the VPC of the job template. If the configuration remains unchanged during deployment, you do not need to set this parameter, which means the **MountHost** field is not required in the request. To clear the NAS configuration, you must set this field to an empty string in the request, which means the value of the **MountHost** field is "".
    shared_ptr<string> mountHost_ {};
    // The ID of the Serverless App Engine (SAE) namespace. Only namespaces whose names contain lowercase letters and hyphens (-) are supported. The name must start with a letter.
    shared_ptr<string> namespaceId_ {};
    // The configuration for mounting the NAS file system.
    shared_ptr<string> nasConfigs_ {};
    // The ID of the Apsara File Storage NAS file system. If the configuration remains unchanged during deployment, you do not need to set this parameter, which means the **NasId** field is not required in the request. To clear the NAS configuration, you must set this field to an empty string in the request, which means the value of the **NasId** field is "".
    shared_ptr<string> nasId_ {};
    // The AccessKey ID used to read and write OSS data.
    shared_ptr<string> ossAkId_ {};
    // The AccessKey Secret used to read and write OSS data.
    shared_ptr<string> ossAkSecret_ {};
    // The OSS mount description. The parameter descriptions are as follows:
    // 
    // - **bucketName**: the name of the bucket.
    // - **bucketPath**: the folder or object that you created in OSS. If the OSS mount folder does not exist, an exception is triggered.
    // - **mountPath**: the container path in SAE. If the path already exists, it overwrites the existing content. If the path does not exist, it is created.
    // - **readOnly**: specifies whether the container path has read permissions on the mount folder resources. Valid values:
    //     - **true**: read-only permissions.
    //     - **false**: read and write permissions.
    shared_ptr<string> ossMountDescs_ {};
    // The type of the job package. Valid values:
    // 
    // - If you use Java for deployment, valid values are **FatJar**, **War**, and **Image**.
    // - If you use PHP for deployment, valid values are:
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
    // - If you use **Python** for deployment, valid values are **PythonZip** and **Image**.
    // 
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // The URL of the deployment package. This parameter is required when **PackageType** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageUrl_ {};
    // The version of the deployment package. This parameter is required when **PackageType** is set to **FatJar**, **War**, or **PythonZip**.
    shared_ptr<string> packageVersion_ {};
    // The content of the PHP configuration file.
    shared_ptr<string> phpConfig_ {};
    // The mount path for the PHP job startup configuration. You must ensure that the PHP server uses this configuration file to start.
    shared_ptr<string> phpConfigLocation_ {};
    // The script to execute after the container starts. A script is triggered and executed immediately after the container is created. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> postStart_ {};
    // The script to execute before the container stops. A script is triggered and executed before the container is deleted. Format: `{"exec":{"command":["sh","-c","echo hello"]}}`
    shared_ptr<string> preStop_ {};
    // The programming language. Valid values: **java**, **php**, **python**, and **shell**.
    shared_ptr<string> programmingLanguage_ {};
    // The Python environment. Valid value: **PYTHON 3.9.15**.
    shared_ptr<string> python_ {};
    // The module dependencies for custom installation. By default, the dependencies defined in the requirements.txt file in the root folder are installed. If no dependencies are configured or custom packages are used, you can specify the dependencies for custom installation.
    shared_ptr<string> pythonModules_ {};
    // The ID of the referenced job target.
    shared_ptr<string> refAppId_ {};
    // The number of concurrent instances for the job.
    // 
    // This parameter is required.
    shared_ptr<int32_t> replicas_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // Specifies whether to enable job sharding.
    shared_ptr<bool> slice_ {};
    // The sharding parameters of the job.
    shared_ptr<string> sliceEnvs_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - To use SLS resources automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // - To use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The parameter descriptions are as follows:
    // 
    // - **projectName**: the name of the SLS project.  
    // - **logDir**: the log path.
    // - **logType**: the log type. **stdout** indicates container standard output logs. You can configure only one such log source. If you do not configure this parameter, file logs are collected.
    // - **logstoreName**: the name of the SLS Logstore.
    // - **logtailName**: the name of the SLS Logtail. If you do not specify this parameter, a new Logtail is created.
    // 
    // If the SLS collection configuration remains unchanged during multiple deployments, you do not need to set this parameter (that is, the **SlsConfigs** field is not required in the request). If you no longer need the SLS collection feature, you must set this field to an empty string (a string with zero characters) in the request (that is, the value of the **SlsConfigs** field is "").
    // 
    // > The project automatically created with the job template is deleted when the job template is deleted. Therefore, when you select an existing project, you cannot select a project automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // The timeout period for graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
    shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
    // The timeout period of the job. Unit: seconds.
    shared_ptr<int64_t> timeout_ {};
    // The time zone. Default value: **Asia/Shanghai**.
    shared_ptr<string> timezone_ {};
    // The Tomcat configuration. Set the value to "" or "{}" to delete the configuration. Valid values:
    // 
    // - **port**: the port range is 1024 to 65535. Ports smaller than 1024 require root permissions. Because the container is configured with admin permissions, specify a port greater than 1024. Default value: 8080.
    // - **contextPath**: the access path. Default value: the root directory "/".
    // - **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
    // - **uriEncoding**: the encoding format of Tomcat. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. Default value: **ISO-8859-1**.
    // - **useBodyEncoding**: specifies whether to use **BodyEncoding for URL**. Default value: **true**.
    shared_ptr<string> tomcatConfig_ {};
    shared_ptr<string> triggerConfig_ {};
    // The ID of the vSwitch to which the elastic network interface controller (NIC) of the job instance belongs. The vSwitch must reside in the preceding VPC. The vSwitch is also associated with the SAE namespace. If you do not specify this parameter, the ID of the vSwitch that is associated with the namespace is used by default.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC) that is associated with the SAE namespace. In SAE, a namespace can be associated with only one VPC, and the association cannot be modified. The association is established when you create the first SAE job template in the namespace. Multiple namespaces can be associated with the same VPC. If you do not specify this parameter, the ID of the VPC that is associated with the namespace is used by default.
    shared_ptr<string> vpcId_ {};
    // The startup command for the WAR package deployment job. The procedure is the same as configuring the startup command for image deployment. For more information, see [Configure a startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
    // The Tomcat version on which the deployment package depends. Valid values:
    // 
    // - **apache-tomcat-7.0.91**
    // - **apache-tomcat-8.5.42**
    // 
    // This parameter is not supported when **PackageType** is set to **Image**.
    shared_ptr<string> webContainer_ {};
    // The workload type. Set the value to `job`.
    // 
    // This parameter is required.
    shared_ptr<string> workload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
