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
        && return this->acrInstanceId_ == nullptr && return this->appDescription_ == nullptr && return this->appName_ == nullptr && return this->autoConfig_ == nullptr && return this->backoffLimit_ == nullptr
        && return this->bestEffortType_ == nullptr && return this->command_ == nullptr && return this->commandArgs_ == nullptr && return this->concurrencyPolicy_ == nullptr && return this->configMapMountDesc_ == nullptr
        && return this->cpu_ == nullptr && return this->customHostAlias_ == nullptr && return this->edasContainerVersion_ == nullptr && return this->enableImageAccl_ == nullptr && return this->envs_ == nullptr
        && return this->imagePullSecrets_ == nullptr && return this->imageUrl_ == nullptr && return this->jarStartArgs_ == nullptr && return this->jarStartOptions_ == nullptr && return this->jdk_ == nullptr
        && return this->memory_ == nullptr && return this->mountDesc_ == nullptr && return this->mountHost_ == nullptr && return this->namespaceId_ == nullptr && return this->nasConfigs_ == nullptr
        && return this->nasId_ == nullptr && return this->ossAkId_ == nullptr && return this->ossAkSecret_ == nullptr && return this->ossMountDescs_ == nullptr && return this->packageType_ == nullptr
        && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr && return this->phpConfig_ == nullptr && return this->phpConfigLocation_ == nullptr && return this->postStart_ == nullptr
        && return this->preStop_ == nullptr && return this->programmingLanguage_ == nullptr && return this->python_ == nullptr && return this->pythonModules_ == nullptr && return this->refAppId_ == nullptr
        && return this->replicas_ == nullptr && return this->securityGroupId_ == nullptr && return this->slice_ == nullptr && return this->sliceEnvs_ == nullptr && return this->slsConfigs_ == nullptr
        && return this->terminationGracePeriodSeconds_ == nullptr && return this->timeout_ == nullptr && return this->timezone_ == nullptr && return this->tomcatConfig_ == nullptr && return this->triggerConfig_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->warStartOptions_ == nullptr && return this->webContainer_ == nullptr && return this->workload_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string acrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline CreateJobRequest& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CreateJobRequest& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline CreateJobRequest& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // autoConfig Field Functions 
    bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
    void deleteAutoConfig() { this->autoConfig_ = nullptr;};
    inline bool autoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, false) };
    inline CreateJobRequest& setAutoConfig(bool autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


    // backoffLimit Field Functions 
    bool hasBackoffLimit() const { return this->backoffLimit_ != nullptr;};
    void deleteBackoffLimit() { this->backoffLimit_ = nullptr;};
    inline int64_t backoffLimit() const { DARABONBA_PTR_GET_DEFAULT(backoffLimit_, 0L) };
    inline CreateJobRequest& setBackoffLimit(int64_t backoffLimit) { DARABONBA_PTR_SET_VALUE(backoffLimit_, backoffLimit) };


    // bestEffortType Field Functions 
    bool hasBestEffortType() const { return this->bestEffortType_ != nullptr;};
    void deleteBestEffortType() { this->bestEffortType_ = nullptr;};
    inline string bestEffortType() const { DARABONBA_PTR_GET_DEFAULT(bestEffortType_, "") };
    inline CreateJobRequest& setBestEffortType(string bestEffortType) { DARABONBA_PTR_SET_VALUE(bestEffortType_, bestEffortType) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline CreateJobRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline CreateJobRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // concurrencyPolicy Field Functions 
    bool hasConcurrencyPolicy() const { return this->concurrencyPolicy_ != nullptr;};
    void deleteConcurrencyPolicy() { this->concurrencyPolicy_ = nullptr;};
    inline string concurrencyPolicy() const { DARABONBA_PTR_GET_DEFAULT(concurrencyPolicy_, "") };
    inline CreateJobRequest& setConcurrencyPolicy(string concurrencyPolicy) { DARABONBA_PTR_SET_VALUE(concurrencyPolicy_, concurrencyPolicy) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string configMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline CreateJobRequest& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateJobRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string customHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline CreateJobRequest& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline CreateJobRequest& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // enableImageAccl Field Functions 
    bool hasEnableImageAccl() const { return this->enableImageAccl_ != nullptr;};
    void deleteEnableImageAccl() { this->enableImageAccl_ = nullptr;};
    inline bool enableImageAccl() const { DARABONBA_PTR_GET_DEFAULT(enableImageAccl_, false) };
    inline CreateJobRequest& setEnableImageAccl(bool enableImageAccl) { DARABONBA_PTR_SET_VALUE(enableImageAccl_, enableImageAccl) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline CreateJobRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string imagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline CreateJobRequest& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateJobRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string jarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline CreateJobRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string jarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline CreateJobRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string jdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline CreateJobRequest& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateJobRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline string mountDesc() const { DARABONBA_PTR_GET_DEFAULT(mountDesc_, "") };
    inline CreateJobRequest& setMountDesc(string mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string mountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline CreateJobRequest& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateJobRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string nasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline CreateJobRequest& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string nasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline CreateJobRequest& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string ossAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline CreateJobRequest& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string ossAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline CreateJobRequest& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline string ossMountDescs() const { DARABONBA_PTR_GET_DEFAULT(ossMountDescs_, "") };
    inline CreateJobRequest& setOssMountDescs(string ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateJobRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline CreateJobRequest& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline CreateJobRequest& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string phpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline CreateJobRequest& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string phpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline CreateJobRequest& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline CreateJobRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline CreateJobRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string programmingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline CreateJobRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string python() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline CreateJobRequest& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string pythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline CreateJobRequest& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // refAppId Field Functions 
    bool hasRefAppId() const { return this->refAppId_ != nullptr;};
    void deleteRefAppId() { this->refAppId_ = nullptr;};
    inline string refAppId() const { DARABONBA_PTR_GET_DEFAULT(refAppId_, "") };
    inline CreateJobRequest& setRefAppId(string refAppId) { DARABONBA_PTR_SET_VALUE(refAppId_, refAppId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateJobRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateJobRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // slice Field Functions 
    bool hasSlice() const { return this->slice_ != nullptr;};
    void deleteSlice() { this->slice_ = nullptr;};
    inline bool slice() const { DARABONBA_PTR_GET_DEFAULT(slice_, false) };
    inline CreateJobRequest& setSlice(bool slice) { DARABONBA_PTR_SET_VALUE(slice_, slice) };


    // sliceEnvs Field Functions 
    bool hasSliceEnvs() const { return this->sliceEnvs_ != nullptr;};
    void deleteSliceEnvs() { this->sliceEnvs_ = nullptr;};
    inline string sliceEnvs() const { DARABONBA_PTR_GET_DEFAULT(sliceEnvs_, "") };
    inline CreateJobRequest& setSliceEnvs(string sliceEnvs) { DARABONBA_PTR_SET_VALUE(sliceEnvs_, sliceEnvs) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string slsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline CreateJobRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline CreateJobRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateJobRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateJobRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string tomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline CreateJobRequest& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline CreateJobRequest& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateJobRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateJobRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string warStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline CreateJobRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline CreateJobRequest& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    // workload Field Functions 
    bool hasWorkload() const { return this->workload_ != nullptr;};
    void deleteWorkload() { this->workload_ = nullptr;};
    inline string workload() const { DARABONBA_PTR_GET_DEFAULT(workload_, "") };
    inline CreateJobRequest& setWorkload(string workload) { DARABONBA_PTR_SET_VALUE(workload_, workload) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) required for a RAM role to obtain images across accounts. For more information, see [Grant permissions across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    std::shared_ptr<string> acrAssumeRoleArn_ = nullptr;
    // The ID of Container Registry Enterprise Edition instance N. This parameter is required when the **ImageUrl** parameter is set to the URL of an image in an ACR Enterprise Edition instance.
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    // The description of the template. The description cannot exceed 1,024 characters in length.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The name of the job template. The name can contain digits, letters, and hyphens (-). The name must start with a letter and cannot exceed 36 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // Specifies whether to automatically configure the network environment. Take note of the following rules:
    // 
    // *   **true**: The network environment is automatically configured by SAE when the application is created. In this case, the values of the **NamespaceId**, **VpcId**, **vSwitchId**, and **SecurityGroupId** parameters are ignored.
    // *   **false**: The network environment is manually configured based on your settings when the application is created.
    std::shared_ptr<bool> autoConfig_ = nullptr;
    // The number of times the job is retried.
    std::shared_ptr<int64_t> backoffLimit_ = nullptr;
    std::shared_ptr<string> bestEffortType_ = nullptr;
    // The command that is used to start the image. The command must be an existing executable object in the container. Sample statements:
    // 
    //     command:
    //           - echo
    //           - abc
    //           - >
    //           - file0
    // 
    // In this example, the Command parameter is set to `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    std::shared_ptr<string> command_ = nullptr;
    // The parameters of the image startup command. The CommandArgs parameter specifies the parameters that are required for the **Command** parameter. You can specify the name in one of the following formats:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, the CommandArgs parameter is set to `CommandArgs=["abc", ">", "file0"]`. The data type of `["abc", ">", "file0"]` must be an array of strings in the JSON format. This parameter is optional.
    std::shared_ptr<string> commandArgs_ = nullptr;
    // The concurrency policy of the job. Take note of the following rules:
    // 
    // *   **Forbid**: Prohibits concurrent running. If the previous job is not completed, no new job is created.
    // *   **Allow**: Allows concurrent running.
    // *   **Replace**: If the previous job is not completed when the time to create a new job is reached, the new job replaces the previous job.
    std::shared_ptr<string> concurrencyPolicy_ = nullptr;
    // The description of the **ConfigMap** instance mounted to the application. Use configurations created on the Configuration Items page to configure containers. The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **congfigMapId**: the ID of the ConfigMap instance. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the ID.
    // *   **key**: the key.
    // 
    // > You can use the `sae-sys-configmap-all` key to mount all keys.
    // 
    // *   **mountPath**: the mount path in the container.
    std::shared_ptr<string> configMapMountDesc_ = nullptr;
    // The CPU specifications that are required for each instance. Unit: millicores. You cannot set this parameter to 0. Valid values:
    // 
    // *   500
    // *   1000
    // *   2000
    // *   4000
    // *   8000
    // *   16000
    // *   32000
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The custom mappings between hostnames and IP addresses in the container. Take note of the following rules:
    // 
    // *   **hostName**: the domain name or hostname.
    // *   **ip**: the IP address.
    std::shared_ptr<string> customHostAlias_ = nullptr;
    // The version of the container, such as Ali-Tomcat, in which an application developed based on High-speed Service Framework (HSF) is deployed.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    std::shared_ptr<bool> enableImageAccl_ = nullptr;
    // The environment variables. You can configure custom environment variables or reference a ConfigMap. If you want to reference a ConfigMap, you must first create a ConfigMap. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Take note of the following rules:
    // 
    // *   Customize
    // 
    //     *   **name**: the name of the environment variable.
    //     *   **value**: the value of the environment variable.
    // 
    // *   Reference ConfigMap
    // 
    //     *   **name**: the name of the environment variable. You can reference one or all keys. If you want to reference all keys, specify `sae-sys-configmap-all-<ConfigMap name>`. Example: `sae-sys-configmap-all-test1`.
    //     *   **valueFrom**: the reference of the environment variable. Set the value to `configMapRef`.
    //     *   **configMapId**: the ConfigMap ID.
    //     *   **key**: the key. If you want to reference all keys, do not configure this parameter.
    std::shared_ptr<string> envs_ = nullptr;
    // The ID of the corresponding Secret.
    std::shared_ptr<string> imagePullSecrets_ = nullptr;
    // The URL of the image. This parameter is returned only if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The arguments in the JAR package. The arguments are used to start the application container. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
    std::shared_ptr<string> jarStartArgs_ = nullptr;
    // The option settings in the JAR package. The settings are used to start the application container. The default startup command for application deployment is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
    std::shared_ptr<string> jarStartOptions_ = nullptr;
    // The version of the Java development kit (JDK) on which the deployment package of the application depends. The following versions are supported:
    // 
    // *   **Open JDK 8**
    // *   **Open JDK 7**
    // *   **Dragonwell 11**
    // *   **Dragonwell 8**
    // *   **openjdk-8u191-jdk-alpine3.9**
    // *   **openjdk-7u201-jdk-alpine3.9**
    // 
    // This parameter is not returned if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> jdk_ = nullptr;
    // The size of memory required by each instance. Unit: MB. You cannot set this parameter to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   Set the value to 1024 when Cpu is set to 500 or 1000.
    // *   Set the value to 2048 when Cpu is set to 500, 1000 or 2000.
    // *   Set the value to 4096 when Cpu is set to 1000, 2000, or 4000.
    // *   Set the value to 8192 when Cpu is set to 2000, 4000, or 8000.
    // *   Set the value to 12288 when Cpu is set to 12000.
    // *   Set the value to 16384 when Cpu is set to 4000, 8000, or 16000.
    // *   Set the value to 24576 when Cpu is set to 12000.
    // *   Set the value to 32768 when Cpu is set to 16000.
    // *   Set the value to 65536 when Cpu is set to 8000, 16000, or 32000.
    // *   Set the value to 131072 when Cpu is set to 32000.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The configurations for mounting the NAS file system. After the application is created, you may want to call other operations to manage the application. If you do not want to change the NAS configurations in these subsequent operations, you can omit the **MountDesc** parameter in the requests. If you want to unmount the NAS file system, you must set the **MountDesc** values in the subsequent requests to an empty string ("").
    std::shared_ptr<string> mountDesc_ = nullptr;
    // The mount target of the NAS file system in the VPC where the application is deployed. If you do not need to modify this configuration during the deployment, configure the **MountHost** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you need to remove this configuration, leave the **MountHost** parameter empty in the request.
    std::shared_ptr<string> mountHost_ = nullptr;
    // The ID of the Serverless App Engine (SAE) namespace. The ID can contain only lowercase letters and hyphens (-). It must start with a lowercase letter.
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> nasConfigs_ = nullptr;
    // The ID of the Apsara File Storage NAS file system. After the application is created, you may want to call other operations to manage the application. If you do not want to change the NAS configurations in these subsequent operations, you can omit the **NasId** parameter in the requests. If you want to unmount the NAS file system, you must set the **NasId** values in the subsequent requests to an empty string ("").
    std::shared_ptr<string> nasId_ = nullptr;
    // The AccessKey ID that is used to read data from and write data to Object Storage Service (OSS) buckets.
    std::shared_ptr<string> ossAkId_ = nullptr;
    // The AccessKey secret that is used to read data from and write data to OSS buckets.
    std::shared_ptr<string> ossAkSecret_ = nullptr;
    // Information of the Object Storage Service (OSS) bucket mounted to the application. The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **bucketName**: the name of the OSS bucket.
    // 
    // *   **bucketPath**: the directory or object in OSS. If the specified directory or object does not exist, an error is returned.
    // 
    // *   **mountPath**: the directory of the container in SAE. If the path already exists, the newly specified path overwrites the previous one. If the path does not exist, it is created.
    // 
    // *   **readOnly**: specifies whether to only allow the container path to read data from the OSS directory. Valid values:
    // 
    //     *   **true**: The container path only has read permission on the OSS directory.
    //     *   **false**: The application has read and write permissions.
    std::shared_ptr<string> ossMountDescs_ = nullptr;
    // The type of the deployment package. Take note of the following rules:
    // 
    // *   If you deploy the application by using a Java Archive (JAR) package, you can set this parameter to **FatJar**, **War**, or **Image**.
    // *   If you deploy the application by using a PHP package, you can set this parameter to one of the following values:
    // 
    // **PhpZip** **IMAGE_PHP_5_4** **IMAGE_PHP_5_4_ALPINE** **IMAGE_PHP_5_5** **IMAGE_PHP_5_5_ALPINE** **IMAGE_PHP_5_6** **IMAGE_PHP_5_6_ALPINE** **IMAGE_PHP_7_0** **IMAGE_PHP_7_0_ALPINE** **IMAGE_PHP_7_1** **IMAGE_PHP_7_1_ALPINE** **IMAGE_PHP_7_2** **IMAGE_PHP_7_2_ALPINE** **IMAGE_PHP_7_3** **IMAGE_PHP_7_3_ALPINE**
    // 
    // *   If you deploy the application by using a **Python** package, you can set this parameter to **PythonZip** or **Image**:
    // 
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
    // The address of the deployment package. This parameter is required if you set **PackageType** to **FatJar**, **War**, or **PythonZip**.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package. This parameter is required if you set **PackageType** to **FatJar**, **War**, or **PythonZip**.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The details of the PHP configuration file.
    std::shared_ptr<string> phpConfig_ = nullptr;
    // The path on which the PHP configuration file for application startup is mounted. Make sure that the PHP server uses this configuration file during the startup.
    std::shared_ptr<string> phpConfigLocation_ = nullptr;
    // The script that is run immediately after the container is started. Example: `{"exec":{"command":["sh","-c","echo hello"\\]}}`
    std::shared_ptr<string> postStart_ = nullptr;
    // The script that is run before the container is stopped. Example: `{"exec":{"command":["sh","-c","echo hello"\\]}}`
    std::shared_ptr<string> preStop_ = nullptr;
    // The programming language. Valid values: **java**, **php**, **python**, and **shell**.
    std::shared_ptr<string> programmingLanguage_ = nullptr;
    // The Python environment. Set the value to **PYTHON 3.9.15**.
    std::shared_ptr<string> python_ = nullptr;
    // The configurations for installing custom module dependencies. By default, the dependencies defined by the requirements.txt file in the root directory are installed. If the package does not contain this file and you do not configure custom dependencies in the package, specify the dependencies that you want to install in the text box.
    std::shared_ptr<string> pythonModules_ = nullptr;
    // The ID of the job that you reference.
    std::shared_ptr<string> refAppId_ = nullptr;
    // The number of concurrent instances.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // Specifies whether to enable job sharding.
    std::shared_ptr<bool> slice_ = nullptr;
    // The parameters of job sharding.
    std::shared_ptr<string> sliceEnvs_ = nullptr;
    // The logging configurations of Log Service.
    // 
    // *   To use Log Service resources that are automatically created by SAE, set this parameter to `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // *   To use custom Log Service resources, set this parameter to `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **projectName**: the name of the Log Service project.
    // *   **logDir**: the path in which logs are stored.
    // *   **logType**: the log type. **stdout**: the standard output log of the container. You can specify only one stdout value for this parameter. If you leave this parameter empty, file logs are collected.
    // *   **logstoreName**: the name of the Logstore in Log Service.
    // *   **logtailName**: the name of the Logtail configuration in Log Service. If you do not configure this parameter, a new Logtail configuration is created.
    // 
    // If you do not need to modify the logging configurations when you deploy the application, configure the **SlsConfigs** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you no longer need to use Log Service, leave the **SlsConfigs** parameter empty in the request.
    // 
    // > A Log Service project that is automatically created by SAE when you create an application is deleted when the application is deleted. Therefore, when you create an application, you cannot select a Log Service project that is automatically created by SAE for log collection.
    std::shared_ptr<string> slsConfigs_ = nullptr;
    // The timeout period for a graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
    std::shared_ptr<int32_t> terminationGracePeriodSeconds_ = nullptr;
    // The timeout period. Unit: seconds.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // The time zone. Default value: **Asia/Shanghai**.
    std::shared_ptr<string> timezone_ = nullptr;
    // The Tomcat configuration. If you want to cancel this configuration, set this parameter to "" or "{}". The following variables are included in the configuration: Take note of the following rules:
    // 
    // *   **port**: the port number. The port number ranges from 1024 to 65535. Though the admin permissions are configured for the container, the root permissions are required to perform operations on ports whose number is smaller than 1024. Enter a value that ranges from 1025 to 65535 because the container has only the admin permissions. If you do not specify this parameter, the default port number 8080 is used.
    // *   **contextPath**: the path. Default value: /. This value indicates the root directory.
    // *   **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
    // *   **uriEncoding**: the URI encoding scheme in the Tomcat container. Valid values: UTF-8, ISO-8859-1, GBK, and GB2312.************ If you do not specify this parameter, the default value **ISO-8859-1** is used.
    // *   **useBodyEncoding**: specifies whether to use the encoding scheme specified in the request body for URI query parameters. Default value: true.
    std::shared_ptr<string> tomcatConfig_ = nullptr;
    std::shared_ptr<string> triggerConfig_ = nullptr;
    // The vSwitch to which the elastic network interface (ENI) of the application instance is connected. The vSwitch must be located in the VPC specified by the VpcId parameter. The SAE namespace is bound with this vSwitch. The default value is the ID of the vSwitch that is bound to the namespace.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) that corresponds to the SAE namespace. In SAE, once correspondence is configured between a namespace and a VPC, the namespace cannot correspond to other VPCs. When the SAE application is created within the namespace, the application is bound with the VPC. Multiple namespaces can correspond to the same VPC. The default value is the ID of the VPC that is bound to the namespace.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The startup command of the WAR package. For information about how to configure the startup command, see [Configure startup commands](https://help.aliyun.com/document_detail/96677.html).
    std::shared_ptr<string> warStartOptions_ = nullptr;
    // The version of the Tomcat container on which the deployment package depends. Valid values:
    // 
    // *   **apache-tomcat-7.0.91**
    // *   **apache-tomcat-8.5.42**
    // 
    // This parameter is not returned if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> webContainer_ = nullptr;
    // Set the value to `job`.
    // 
    // This parameter is required.
    std::shared_ptr<string> workload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
