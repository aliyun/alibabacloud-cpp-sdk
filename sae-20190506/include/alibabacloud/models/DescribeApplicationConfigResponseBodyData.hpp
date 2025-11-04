// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataConfigMapMountDesc.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataEmptyDirDesc.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataInitContainersConfig.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataMountDesc.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataOssMountDescs.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataSecretMountDesc.hpp>
#include <map>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataSidecarContainersConfig.hpp>
#include <alibabacloud/models/DescribeApplicationConfigResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AlbIngressReadinessGate, albIngressReadinessGate_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppSource, appSource_);
      DARABONBA_PTR_TO_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CmsServiceId, cmsServiceId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_TO_JSON(DeploymentName, deploymentName_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_TO_JSON(EnableGreyTagRoute, enableGreyTagRoute_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_TO_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_TO_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(HeadlessPvtzDiscovery, headlessPvtzDiscovery_);
      DARABONBA_PTR_TO_JSON(Html, html_);
      DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InitContainersConfig, initContainersConfig_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(MaxSurgeInstanceRatio, maxSurgeInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MaxSurgeInstances, maxSurgeInstances_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_TO_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_TO_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_TO_JSON(MountHost, mountHost_);
      DARABONBA_PTR_TO_JSON(MseApplicationId, mseApplicationId_);
      DARABONBA_PTR_TO_JSON(MseApplicationName, mseApplicationName_);
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
      DARABONBA_PTR_TO_JSON(PvtzDiscovery, pvtzDiscovery_);
      DARABONBA_PTR_TO_JSON(Python, python_);
      DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_TO_JSON(SidecarContainersConfig, sidecarContainersConfig_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_TO_JSON(SwimlanePvtzDiscovery, swimlanePvtzDiscovery_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_TO_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AlbIngressReadinessGate, albIngressReadinessGate_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppSource, appSource_);
      DARABONBA_PTR_FROM_JSON(AssociateEip, associateEip_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CmsServiceId, cmsServiceId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(CustomImageNetworkType, customImageNetworkType_);
      DARABONBA_PTR_FROM_JSON(DeploymentName, deploymentName_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Dotnet, dotnet_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnableCpuBurst, enableCpuBurst_);
      DARABONBA_PTR_FROM_JSON(EnableGreyTagRoute, enableGreyTagRoute_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(EnableNamespaceAgentVersion, enableNamespaceAgentVersion_);
      DARABONBA_PTR_FROM_JSON(EnableNewArms, enableNewArms_);
      DARABONBA_PTR_FROM_JSON(EnablePrometheus, enablePrometheus_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(HeadlessPvtzDiscovery, headlessPvtzDiscovery_);
      DARABONBA_PTR_FROM_JSON(Html, html_);
      DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InitContainersConfig, initContainersConfig_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(KafkaConfigs, kafkaConfigs_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(MaxSurgeInstanceRatio, maxSurgeInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MaxSurgeInstances, maxSurgeInstances_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MicroRegistration, microRegistration_);
      DARABONBA_PTR_FROM_JSON(MicroRegistrationConfig, microRegistrationConfig_);
      DARABONBA_PTR_FROM_JSON(MicroserviceEngineConfig, microserviceEngineConfig_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(MountDesc, mountDesc_);
      DARABONBA_PTR_FROM_JSON(MountHost, mountHost_);
      DARABONBA_PTR_FROM_JSON(MseApplicationId, mseApplicationId_);
      DARABONBA_PTR_FROM_JSON(MseApplicationName, mseApplicationName_);
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
      DARABONBA_PTR_FROM_JSON(PvtzDiscovery, pvtzDiscovery_);
      DARABONBA_PTR_FROM_JSON(Python, python_);
      DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
      DARABONBA_PTR_FROM_JSON(SidecarContainersConfig, sidecarContainersConfig_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(StartupProbe, startupProbe_);
      DARABONBA_PTR_FROM_JSON(SwimlanePvtzDiscovery, swimlanePvtzDiscovery_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
      DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
    };
    DescribeApplicationConfigResponseBodyData() = default ;
    DescribeApplicationConfigResponseBodyData(const DescribeApplicationConfigResponseBodyData &) = default ;
    DescribeApplicationConfigResponseBodyData(DescribeApplicationConfigResponseBodyData &&) = default ;
    DescribeApplicationConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyData() = default ;
    DescribeApplicationConfigResponseBodyData& operator=(const DescribeApplicationConfigResponseBodyData &) = default ;
    DescribeApplicationConfigResponseBodyData& operator=(DescribeApplicationConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && return this->acrInstanceId_ == nullptr && return this->agentVersion_ == nullptr && return this->albIngressReadinessGate_ == nullptr && return this->appDescription_ == nullptr && return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->appSource_ == nullptr && return this->associateEip_ == nullptr && return this->baseAppId_ == nullptr && return this->batchWaitTime_ == nullptr
        && return this->clusterId_ == nullptr && return this->cmsServiceId_ == nullptr && return this->command_ == nullptr && return this->commandArgs_ == nullptr && return this->configMapMountDesc_ == nullptr
        && return this->cpu_ == nullptr && return this->customHostAlias_ == nullptr && return this->customImageNetworkType_ == nullptr && return this->deploymentName_ == nullptr && return this->diskSize_ == nullptr
        && return this->dotnet_ == nullptr && return this->edasContainerVersion_ == nullptr && return this->emptyDirDesc_ == nullptr && return this->enableAhas_ == nullptr && return this->enableCpuBurst_ == nullptr
        && return this->enableGreyTagRoute_ == nullptr && return this->enableIdle_ == nullptr && return this->enableNamespaceAgentVersion_ == nullptr && return this->enableNewArms_ == nullptr && return this->enablePrometheus_ == nullptr
        && return this->envs_ == nullptr && return this->gpuCount_ == nullptr && return this->gpuType_ == nullptr && return this->headlessPvtzDiscovery_ == nullptr && return this->html_ == nullptr
        && return this->imagePullSecrets_ == nullptr && return this->imageUrl_ == nullptr && return this->initContainersConfig_ == nullptr && return this->isStateful_ == nullptr && return this->jarStartArgs_ == nullptr
        && return this->jarStartOptions_ == nullptr && return this->jdk_ == nullptr && return this->kafkaConfigs_ == nullptr && return this->liveness_ == nullptr && return this->maxSurgeInstanceRatio_ == nullptr
        && return this->maxSurgeInstances_ == nullptr && return this->memory_ == nullptr && return this->microRegistration_ == nullptr && return this->microRegistrationConfig_ == nullptr && return this->microserviceEngineConfig_ == nullptr
        && return this->minReadyInstanceRatio_ == nullptr && return this->minReadyInstances_ == nullptr && return this->mountDesc_ == nullptr && return this->mountHost_ == nullptr && return this->mseApplicationId_ == nullptr
        && return this->mseApplicationName_ == nullptr && return this->namespaceId_ == nullptr && return this->nasConfigs_ == nullptr && return this->nasId_ == nullptr && return this->newSaeVersion_ == nullptr
        && return this->oidcRoleName_ == nullptr && return this->ossAkId_ == nullptr && return this->ossAkSecret_ == nullptr && return this->ossMountDescs_ == nullptr && return this->packageType_ == nullptr
        && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr && return this->php_ == nullptr && return this->phpArmsConfigLocation_ == nullptr && return this->phpConfig_ == nullptr
        && return this->phpConfigLocation_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr && return this->programmingLanguage_ == nullptr && return this->pvtzDiscovery_ == nullptr
        && return this->python_ == nullptr && return this->pythonModules_ == nullptr && return this->readiness_ == nullptr && return this->regionId_ == nullptr && return this->replicas_ == nullptr
        && return this->resourceType_ == nullptr && return this->secretMountDesc_ == nullptr && return this->securityGroupId_ == nullptr && return this->serviceTags_ == nullptr && return this->sidecarContainersConfig_ == nullptr
        && return this->slsConfigs_ == nullptr && return this->startupProbe_ == nullptr && return this->swimlanePvtzDiscovery_ == nullptr && return this->tags_ == nullptr && return this->terminationGracePeriodSeconds_ == nullptr
        && return this->timezone_ == nullptr && return this->tomcatConfig_ == nullptr && return this->updateStrategy_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr
        && return this->warStartOptions_ == nullptr && return this->webContainer_ == nullptr; };
    // acrAssumeRoleArn Field Functions 
    bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
    void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
    inline string acrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // albIngressReadinessGate Field Functions 
    bool hasAlbIngressReadinessGate() const { return this->albIngressReadinessGate_ != nullptr;};
    void deleteAlbIngressReadinessGate() { this->albIngressReadinessGate_ = nullptr;};
    inline string albIngressReadinessGate() const { DARABONBA_PTR_GET_DEFAULT(albIngressReadinessGate_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAlbIngressReadinessGate(string albIngressReadinessGate) { DARABONBA_PTR_SET_VALUE(albIngressReadinessGate_, albIngressReadinessGate) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string appSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline DescribeApplicationConfigResponseBodyData& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // associateEip Field Functions 
    bool hasAssociateEip() const { return this->associateEip_ != nullptr;};
    void deleteAssociateEip() { this->associateEip_ = nullptr;};
    inline bool associateEip() const { DARABONBA_PTR_GET_DEFAULT(associateEip_, false) };
    inline DescribeApplicationConfigResponseBodyData& setAssociateEip(bool associateEip) { DARABONBA_PTR_SET_VALUE(associateEip_, associateEip) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string baseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t batchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cmsServiceId Field Functions 
    bool hasCmsServiceId() const { return this->cmsServiceId_ != nullptr;};
    void deleteCmsServiceId() { this->cmsServiceId_ = nullptr;};
    inline string cmsServiceId() const { DARABONBA_PTR_GET_DEFAULT(cmsServiceId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setCmsServiceId(string cmsServiceId) { DARABONBA_PTR_SET_VALUE(cmsServiceId_, cmsServiceId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeApplicationConfigResponseBodyData& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc> & configMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc> configMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc>) };
    inline DescribeApplicationConfigResponseBodyData& setConfigMapMountDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
    inline DescribeApplicationConfigResponseBodyData& setConfigMapMountDesc(vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline string customHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
    inline DescribeApplicationConfigResponseBodyData& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


    // customImageNetworkType Field Functions 
    bool hasCustomImageNetworkType() const { return this->customImageNetworkType_ != nullptr;};
    void deleteCustomImageNetworkType() { this->customImageNetworkType_ = nullptr;};
    inline string customImageNetworkType() const { DARABONBA_PTR_GET_DEFAULT(customImageNetworkType_, "") };
    inline DescribeApplicationConfigResponseBodyData& setCustomImageNetworkType(string customImageNetworkType) { DARABONBA_PTR_SET_VALUE(customImageNetworkType_, customImageNetworkType) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string deploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline DescribeApplicationConfigResponseBodyData& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // dotnet Field Functions 
    bool hasDotnet() const { return this->dotnet_ != nullptr;};
    void deleteDotnet() { this->dotnet_ = nullptr;};
    inline string dotnet() const { DARABONBA_PTR_GET_DEFAULT(dotnet_, "") };
    inline DescribeApplicationConfigResponseBodyData& setDotnet(string dotnet) { DARABONBA_PTR_SET_VALUE(dotnet_, dotnet) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline DescribeApplicationConfigResponseBodyData& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc> & emptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc> emptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc>) };
    inline DescribeApplicationConfigResponseBodyData& setEmptyDirDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
    inline DescribeApplicationConfigResponseBodyData& setEmptyDirDesc(vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline string enableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, "") };
    inline DescribeApplicationConfigResponseBodyData& setEnableAhas(string enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // enableCpuBurst Field Functions 
    bool hasEnableCpuBurst() const { return this->enableCpuBurst_ != nullptr;};
    void deleteEnableCpuBurst() { this->enableCpuBurst_ = nullptr;};
    inline string enableCpuBurst() const { DARABONBA_PTR_GET_DEFAULT(enableCpuBurst_, "") };
    inline DescribeApplicationConfigResponseBodyData& setEnableCpuBurst(string enableCpuBurst) { DARABONBA_PTR_SET_VALUE(enableCpuBurst_, enableCpuBurst) };


    // enableGreyTagRoute Field Functions 
    bool hasEnableGreyTagRoute() const { return this->enableGreyTagRoute_ != nullptr;};
    void deleteEnableGreyTagRoute() { this->enableGreyTagRoute_ = nullptr;};
    inline bool enableGreyTagRoute() const { DARABONBA_PTR_GET_DEFAULT(enableGreyTagRoute_, false) };
    inline DescribeApplicationConfigResponseBodyData& setEnableGreyTagRoute(bool enableGreyTagRoute) { DARABONBA_PTR_SET_VALUE(enableGreyTagRoute_, enableGreyTagRoute) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool enableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline DescribeApplicationConfigResponseBodyData& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // enableNamespaceAgentVersion Field Functions 
    bool hasEnableNamespaceAgentVersion() const { return this->enableNamespaceAgentVersion_ != nullptr;};
    void deleteEnableNamespaceAgentVersion() { this->enableNamespaceAgentVersion_ = nullptr;};
    inline bool enableNamespaceAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceAgentVersion_, false) };
    inline DescribeApplicationConfigResponseBodyData& setEnableNamespaceAgentVersion(bool enableNamespaceAgentVersion) { DARABONBA_PTR_SET_VALUE(enableNamespaceAgentVersion_, enableNamespaceAgentVersion) };


    // enableNewArms Field Functions 
    bool hasEnableNewArms() const { return this->enableNewArms_ != nullptr;};
    void deleteEnableNewArms() { this->enableNewArms_ = nullptr;};
    inline bool enableNewArms() const { DARABONBA_PTR_GET_DEFAULT(enableNewArms_, false) };
    inline DescribeApplicationConfigResponseBodyData& setEnableNewArms(bool enableNewArms) { DARABONBA_PTR_SET_VALUE(enableNewArms_, enableNewArms) };


    // enablePrometheus Field Functions 
    bool hasEnablePrometheus() const { return this->enablePrometheus_ != nullptr;};
    void deleteEnablePrometheus() { this->enablePrometheus_ = nullptr;};
    inline bool enablePrometheus() const { DARABONBA_PTR_GET_DEFAULT(enablePrometheus_, false) };
    inline DescribeApplicationConfigResponseBodyData& setEnablePrometheus(bool enablePrometheus) { DARABONBA_PTR_SET_VALUE(enablePrometheus_, enablePrometheus) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline string gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, "") };
    inline DescribeApplicationConfigResponseBodyData& setGpuCount(string gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline DescribeApplicationConfigResponseBodyData& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // headlessPvtzDiscovery Field Functions 
    bool hasHeadlessPvtzDiscovery() const { return this->headlessPvtzDiscovery_ != nullptr;};
    void deleteHeadlessPvtzDiscovery() { this->headlessPvtzDiscovery_ = nullptr;};
    inline string headlessPvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(headlessPvtzDiscovery_, "") };
    inline DescribeApplicationConfigResponseBodyData& setHeadlessPvtzDiscovery(string headlessPvtzDiscovery) { DARABONBA_PTR_SET_VALUE(headlessPvtzDiscovery_, headlessPvtzDiscovery) };


    // html Field Functions 
    bool hasHtml() const { return this->html_ != nullptr;};
    void deleteHtml() { this->html_ = nullptr;};
    inline string html() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
    inline DescribeApplicationConfigResponseBodyData& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


    // imagePullSecrets Field Functions 
    bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
    void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
    inline string imagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
    inline DescribeApplicationConfigResponseBodyData& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeApplicationConfigResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // initContainersConfig Field Functions 
    bool hasInitContainersConfig() const { return this->initContainersConfig_ != nullptr;};
    void deleteInitContainersConfig() { this->initContainersConfig_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig> & initContainersConfig() const { DARABONBA_PTR_GET_CONST(initContainersConfig_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig> initContainersConfig() { DARABONBA_PTR_GET(initContainersConfig_, vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig>) };
    inline DescribeApplicationConfigResponseBodyData& setInitContainersConfig(const vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig> & initContainersConfig) { DARABONBA_PTR_SET_VALUE(initContainersConfig_, initContainersConfig) };
    inline DescribeApplicationConfigResponseBodyData& setInitContainersConfig(vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig> && initContainersConfig) { DARABONBA_PTR_SET_RVALUE(initContainersConfig_, initContainersConfig) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool isStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline DescribeApplicationConfigResponseBodyData& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string jarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string jarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline DescribeApplicationConfigResponseBodyData& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string jdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline DescribeApplicationConfigResponseBodyData& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // kafkaConfigs Field Functions 
    bool hasKafkaConfigs() const { return this->kafkaConfigs_ != nullptr;};
    void deleteKafkaConfigs() { this->kafkaConfigs_ = nullptr;};
    inline string kafkaConfigs() const { DARABONBA_PTR_GET_DEFAULT(kafkaConfigs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setKafkaConfigs(string kafkaConfigs) { DARABONBA_PTR_SET_VALUE(kafkaConfigs_, kafkaConfigs) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline DescribeApplicationConfigResponseBodyData& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // maxSurgeInstanceRatio Field Functions 
    bool hasMaxSurgeInstanceRatio() const { return this->maxSurgeInstanceRatio_ != nullptr;};
    void deleteMaxSurgeInstanceRatio() { this->maxSurgeInstanceRatio_ = nullptr;};
    inline int32_t maxSurgeInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstanceRatio_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setMaxSurgeInstanceRatio(int32_t maxSurgeInstanceRatio) { DARABONBA_PTR_SET_VALUE(maxSurgeInstanceRatio_, maxSurgeInstanceRatio) };


    // maxSurgeInstances Field Functions 
    bool hasMaxSurgeInstances() const { return this->maxSurgeInstances_ != nullptr;};
    void deleteMaxSurgeInstances() { this->maxSurgeInstances_ = nullptr;};
    inline int32_t maxSurgeInstances() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstances_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setMaxSurgeInstances(int32_t maxSurgeInstances) { DARABONBA_PTR_SET_VALUE(maxSurgeInstances_, maxSurgeInstances) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // microRegistration Field Functions 
    bool hasMicroRegistration() const { return this->microRegistration_ != nullptr;};
    void deleteMicroRegistration() { this->microRegistration_ = nullptr;};
    inline string microRegistration() const { DARABONBA_PTR_GET_DEFAULT(microRegistration_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMicroRegistration(string microRegistration) { DARABONBA_PTR_SET_VALUE(microRegistration_, microRegistration) };


    // microRegistrationConfig Field Functions 
    bool hasMicroRegistrationConfig() const { return this->microRegistrationConfig_ != nullptr;};
    void deleteMicroRegistrationConfig() { this->microRegistrationConfig_ = nullptr;};
    inline string microRegistrationConfig() const { DARABONBA_PTR_GET_DEFAULT(microRegistrationConfig_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMicroRegistrationConfig(string microRegistrationConfig) { DARABONBA_PTR_SET_VALUE(microRegistrationConfig_, microRegistrationConfig) };


    // microserviceEngineConfig Field Functions 
    bool hasMicroserviceEngineConfig() const { return this->microserviceEngineConfig_ != nullptr;};
    void deleteMicroserviceEngineConfig() { this->microserviceEngineConfig_ = nullptr;};
    inline string microserviceEngineConfig() const { DARABONBA_PTR_GET_DEFAULT(microserviceEngineConfig_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMicroserviceEngineConfig(string microserviceEngineConfig) { DARABONBA_PTR_SET_VALUE(microserviceEngineConfig_, microserviceEngineConfig) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t minReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t minReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // mountDesc Field Functions 
    bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
    void deleteMountDesc() { this->mountDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc> & mountDesc() const { DARABONBA_PTR_GET_CONST(mountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc> mountDesc() { DARABONBA_PTR_GET(mountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc>) };
    inline DescribeApplicationConfigResponseBodyData& setMountDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc> & mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };
    inline DescribeApplicationConfigResponseBodyData& setMountDesc(vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc> && mountDesc) { DARABONBA_PTR_SET_RVALUE(mountDesc_, mountDesc) };


    // mountHost Field Functions 
    bool hasMountHost() const { return this->mountHost_ != nullptr;};
    void deleteMountHost() { this->mountHost_ = nullptr;};
    inline string mountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


    // mseApplicationId Field Functions 
    bool hasMseApplicationId() const { return this->mseApplicationId_ != nullptr;};
    void deleteMseApplicationId() { this->mseApplicationId_ = nullptr;};
    inline string mseApplicationId() const { DARABONBA_PTR_GET_DEFAULT(mseApplicationId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMseApplicationId(string mseApplicationId) { DARABONBA_PTR_SET_VALUE(mseApplicationId_, mseApplicationId) };


    // mseApplicationName Field Functions 
    bool hasMseApplicationName() const { return this->mseApplicationName_ != nullptr;};
    void deleteMseApplicationName() { this->mseApplicationName_ = nullptr;};
    inline string mseApplicationName() const { DARABONBA_PTR_GET_DEFAULT(mseApplicationName_, "") };
    inline DescribeApplicationConfigResponseBodyData& setMseApplicationName(string mseApplicationName) { DARABONBA_PTR_SET_VALUE(mseApplicationName_, mseApplicationName) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nasConfigs Field Functions 
    bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
    void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
    inline string nasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string nasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string newSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline DescribeApplicationConfigResponseBodyData& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // oidcRoleName Field Functions 
    bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
    void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
    inline string oidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
    inline DescribeApplicationConfigResponseBodyData& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


    // ossAkId Field Functions 
    bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
    void deleteOssAkId() { this->ossAkId_ = nullptr;};
    inline string ossAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


    // ossAkSecret Field Functions 
    bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
    void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
    inline string ossAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
    inline DescribeApplicationConfigResponseBodyData& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


    // ossMountDescs Field Functions 
    bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
    void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs> & ossMountDescs() const { DARABONBA_PTR_GET_CONST(ossMountDescs_, vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs> ossMountDescs() { DARABONBA_PTR_GET(ossMountDescs_, vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs>) };
    inline DescribeApplicationConfigResponseBodyData& setOssMountDescs(const vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs> & ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };
    inline DescribeApplicationConfigResponseBodyData& setOssMountDescs(vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs> && ossMountDescs) { DARABONBA_PTR_SET_RVALUE(ossMountDescs_, ossMountDescs) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // php Field Functions 
    bool hasPhp() const { return this->php_ != nullptr;};
    void deletePhp() { this->php_ = nullptr;};
    inline string php() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


    // phpArmsConfigLocation Field Functions 
    bool hasPhpArmsConfigLocation() const { return this->phpArmsConfigLocation_ != nullptr;};
    void deletePhpArmsConfigLocation() { this->phpArmsConfigLocation_ = nullptr;};
    inline string phpArmsConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpArmsConfigLocation_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPhpArmsConfigLocation(string phpArmsConfigLocation) { DARABONBA_PTR_SET_VALUE(phpArmsConfigLocation_, phpArmsConfigLocation) };


    // phpConfig Field Functions 
    bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
    void deletePhpConfig() { this->phpConfig_ = nullptr;};
    inline string phpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


    // phpConfigLocation Field Functions 
    bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
    void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
    inline string phpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string programmingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline DescribeApplicationConfigResponseBodyData& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // pvtzDiscovery Field Functions 
    bool hasPvtzDiscovery() const { return this->pvtzDiscovery_ != nullptr;};
    void deletePvtzDiscovery() { this->pvtzDiscovery_ = nullptr;};
    inline string pvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(pvtzDiscovery_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPvtzDiscovery(string pvtzDiscovery) { DARABONBA_PTR_SET_VALUE(pvtzDiscovery_, pvtzDiscovery) };


    // python Field Functions 
    bool hasPython() const { return this->python_ != nullptr;};
    void deletePython() { this->python_ = nullptr;};
    inline string python() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


    // pythonModules Field Functions 
    bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
    void deletePythonModules() { this->pythonModules_ = nullptr;};
    inline string pythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
    inline DescribeApplicationConfigResponseBodyData& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string readiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline DescribeApplicationConfigResponseBodyData& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeApplicationConfigResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // secretMountDesc Field Functions 
    bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
    void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc> & secretMountDesc() const { DARABONBA_PTR_GET_CONST(secretMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc> secretMountDesc() { DARABONBA_PTR_GET(secretMountDesc_, vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc>) };
    inline DescribeApplicationConfigResponseBodyData& setSecretMountDesc(const vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc> & secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };
    inline DescribeApplicationConfigResponseBodyData& setSecretMountDesc(vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc> && secretMountDesc) { DARABONBA_PTR_SET_RVALUE(secretMountDesc_, secretMountDesc) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceTags Field Functions 
    bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
    void deleteServiceTags() { this->serviceTags_ = nullptr;};
    inline const map<string, string> & serviceTags() const { DARABONBA_PTR_GET_CONST(serviceTags_, map<string, string>) };
    inline map<string, string> serviceTags() { DARABONBA_PTR_GET(serviceTags_, map<string, string>) };
    inline DescribeApplicationConfigResponseBodyData& setServiceTags(const map<string, string> & serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };
    inline DescribeApplicationConfigResponseBodyData& setServiceTags(map<string, string> && serviceTags) { DARABONBA_PTR_SET_RVALUE(serviceTags_, serviceTags) };


    // sidecarContainersConfig Field Functions 
    bool hasSidecarContainersConfig() const { return this->sidecarContainersConfig_ != nullptr;};
    void deleteSidecarContainersConfig() { this->sidecarContainersConfig_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig> & sidecarContainersConfig() const { DARABONBA_PTR_GET_CONST(sidecarContainersConfig_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig> sidecarContainersConfig() { DARABONBA_PTR_GET(sidecarContainersConfig_, vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig>) };
    inline DescribeApplicationConfigResponseBodyData& setSidecarContainersConfig(const vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig> & sidecarContainersConfig) { DARABONBA_PTR_SET_VALUE(sidecarContainersConfig_, sidecarContainersConfig) };
    inline DescribeApplicationConfigResponseBodyData& setSidecarContainersConfig(vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig> && sidecarContainersConfig) { DARABONBA_PTR_SET_RVALUE(sidecarContainersConfig_, sidecarContainersConfig) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string slsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline DescribeApplicationConfigResponseBodyData& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline string startupProbe() const { DARABONBA_PTR_GET_DEFAULT(startupProbe_, "") };
    inline DescribeApplicationConfigResponseBodyData& setStartupProbe(string startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };


    // swimlanePvtzDiscovery Field Functions 
    bool hasSwimlanePvtzDiscovery() const { return this->swimlanePvtzDiscovery_ != nullptr;};
    void deleteSwimlanePvtzDiscovery() { this->swimlanePvtzDiscovery_ = nullptr;};
    inline string swimlanePvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(swimlanePvtzDiscovery_, "") };
    inline DescribeApplicationConfigResponseBodyData& setSwimlanePvtzDiscovery(string swimlanePvtzDiscovery) { DARABONBA_PTR_SET_VALUE(swimlanePvtzDiscovery_, swimlanePvtzDiscovery) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeApplicationConfigResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeApplicationConfigResponseBodyDataTags>) };
    inline vector<Models::DescribeApplicationConfigResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeApplicationConfigResponseBodyDataTags>) };
    inline DescribeApplicationConfigResponseBodyData& setTags(const vector<Models::DescribeApplicationConfigResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeApplicationConfigResponseBodyData& setTags(vector<Models::DescribeApplicationConfigResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline DescribeApplicationConfigResponseBodyData& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeApplicationConfigResponseBodyData& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline string tomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
    inline DescribeApplicationConfigResponseBodyData& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string updateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline DescribeApplicationConfigResponseBodyData& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeApplicationConfigResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string warStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline DescribeApplicationConfigResponseBodyData& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


    // webContainer Field Functions 
    bool hasWebContainer() const { return this->webContainer_ != nullptr;};
    void deleteWebContainer() { this->webContainer_ = nullptr;};
    inline string webContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
    inline DescribeApplicationConfigResponseBodyData& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the RAM role that is used to pull images across accounts. For more information, see [Pull images across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/190675.html) and [Grant permissions across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
    std::shared_ptr<string> acrAssumeRoleArn_ = nullptr;
    // The ID of the Container Registry Enterprise Edition instance.
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    std::shared_ptr<string> agentVersion_ = nullptr;
    std::shared_ptr<string> albIngressReadinessGate_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The SAE application type.
    // 
    // *   micro_service
    // *   web
    // *   job
    std::shared_ptr<string> appSource_ = nullptr;
    // Indicates whether an elastic IP address (EIP) is associated with the application instance. Valid values:
    // 
    // *   **true**: The EIP is associated with the application instance.
    // *   **false**: The EIP is not associated with the application instance.
    std::shared_ptr<bool> associateEip_ = nullptr;
    // The base app ID.
    std::shared_ptr<string> baseAppId_ = nullptr;
    // The interval between batches in a phased release. Unit: seconds.
    std::shared_ptr<int32_t> batchWaitTime_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> cmsServiceId_ = nullptr;
    // The command that is used to start the image. The command must be an existing executable object in the container. Example:
    // 
    // ```
    // 
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // 
    // In this example, the Command parameter is set to `Command="echo", CommandArgs=["abc", ">", "file0"]`.
    std::shared_ptr<string> command_ = nullptr;
    // The parameters of the image startup command. The CommandArgs parameter contains the parameters that are required for the **Command** parameter. Format:
    // 
    // `["a","b"]`
    // 
    // In the preceding **Command** example, the CommandArgs parameter is set to `CommandArgs=["abc", ">", "file0"]`. The data type of `["abc", ">", "file0"]` must be an array of strings in the JSON format. You do not need to configure this parameter if it does not exist in the Command parameter.
    std::shared_ptr<string> commandArgs_ = nullptr;
    // The details of the ConfigMap.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataConfigMapMountDesc>> configMapMountDesc_ = nullptr;
    // The CPU specifications that are required for each instance. Unit: millicores. You cannot set this parameter to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **16000**
    // *   **32000**
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The custom mappings between hostnames and IP addresses in the container. Valid values:
    // 
    // *   **hostName**: the domain name or hostname.
    // *   **ip**: the IP address.
    std::shared_ptr<string> customHostAlias_ = nullptr;
    // The type of custom image. Set to empty string if using pre-built image.
    // 
    // - internet: public network image.
    // 
    // - intranet: private network image.
    std::shared_ptr<string> customImageNetworkType_ = nullptr;
    std::shared_ptr<string> deploymentName_ = nullptr;
    // The disk size. Unit: GB.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The version of .NET.
    // 
    // - .NET 3.1
    // - .NET 5.0
    // - .NET 6.0
    // - .NET 7.0
    // - .NET 8.0
    std::shared_ptr<string> dotnet_ = nullptr;
    // The version of the container, such as Ali-Tomcat, in which an application developed based on High-speed Service Framework (HSF) is deployed.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataEmptyDirDesc>> emptyDirDesc_ = nullptr;
    // Indicates whether access to Application High Availability Service (AHAS) is enabled. Valid values:
    // 
    // *   **true**: Access to AHAS is enabled.
    // *   **false**: Access to AHAS is disabled.
    std::shared_ptr<string> enableAhas_ = nullptr;
    // Enable CPU Burst.
    // 
    // - true: enable
    // 
    // - false: disable
    std::shared_ptr<string> enableCpuBurst_ = nullptr;
    // Indicates whether canary release rules are enabled. Canary release rules apply only to applications in Spring Cloud and Dubbo frameworks. Valid values:
    // 
    // *   **true**: The canary release rules are enabled.
    // *   **false**: The canary release rules are disabled.
    std::shared_ptr<bool> enableGreyTagRoute_ = nullptr;
    // Enable idle mode.
    // 
    // - true: enable
    // 
    // - false: disable
    std::shared_ptr<bool> enableIdle_ = nullptr;
    std::shared_ptr<bool> enableNamespaceAgentVersion_ = nullptr;
    // Enable new ARMS feature.
    // 
    // - true: enable
    // 
    // - false: disable
    std::shared_ptr<bool> enableNewArms_ = nullptr;
    std::shared_ptr<bool> enablePrometheus_ = nullptr;
    // The environment variables. Variable description:
    // 
    // *   **name**: the name of the environment variable.
    // *   **value**: the value or reference of the environment variable.
    std::shared_ptr<string> envs_ = nullptr;
    std::shared_ptr<string> gpuCount_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<string> headlessPvtzDiscovery_ = nullptr;
    std::shared_ptr<string> html_ = nullptr;
    // The ID of the corresponding secret dictionary.
    std::shared_ptr<string> imagePullSecrets_ = nullptr;
    // The URL of the image. This parameter is returned only if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Initialize container configuration.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataInitContainersConfig>> initContainersConfig_ = nullptr;
    std::shared_ptr<bool> isStateful_ = nullptr;
    // The arguments in the JAR package. The arguments are used to start the application container. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
    std::shared_ptr<string> jarStartArgs_ = nullptr;
    // The option settings in the JAR package. The settings are used to start the application container. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
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
    // The logging configurations of Message Queue for Apache Kafka. The following parameters are involved:
    // 
    // *   **KafkaConfigs**: the configurations of Message Queue for Apache Kafka.
    // 
    // *   **createTime**: the time when the Message Queue for Apache Kafka instance was created.
    // 
    // *   **kafkaTopic**: the message topic that is used to classify messages.
    // 
    // *   **logDir**: the path in which logs are stored.
    // 
    // *   **logType**: the type of collected logs. Valid values:
    // 
    //     *   **file_log**: the file log that is stored in the container. The path of the file logs in the container is returned.
    //     *   **stdout**: the standard output log of the container. You can specify only one stdout value.
    // 
    // *   **kafkaEndpoint**: the endpoint of the Message Queue for Apache Kafka service.
    // 
    // *   **kafkaInstanceId**: the ID of the Message Queue for Apache Kafka instance.
    // 
    // *   **region**: the region where the Message Queue for Apache Kafka instance resides.
    std::shared_ptr<string> kafkaConfigs_ = nullptr;
    // The details of the availability check that was performed on the container. If the container fails this health check multiple times, the system disables and restarts the container. You can use one of the following methods to perform the health check:
    // 
    // *   Sample code of the **exec** method: `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
    // *   Sample code of the **httpGet** method: `{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // *   Sample code of the **tcpSocket** method: `{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
    // 
    // >  You can use only one method to perform the health check.
    // 
    // The following parameters are involved:
    // 
    // *   **exec.command**: the health check command.
    // *   **httpGet.path**: the request path.
    // *   **httpGet.scheme**: the protocol that is used to perform the health check. Valid values: **HTTP** and **HTTPS**.
    // *   **httpGet.isContainKeyWord**: indicates whether the response contains keywords. Valid values: **true** and **false**. If this field is not returned, the advanced settings are not used.
    // *   **httpGet.keyWord**: the custom keyword. This parameter is available only if the **isContainKeyWord** field is returned.
    // *   **tcpSocket.port**: the port that is used to check the status of TCP connections.
    // *   **initialDelaySeconds**: the delay of the health check. Default value: 10. Unit: seconds.
    // *   **periodSeconds**: the interval at which health checks are performed. Default value: 30. Unit: seconds.
    // *   **timeoutSeconds**: the timeout period of the health check. Default value: 1. Unit: seconds. If you set this parameter to 0 or leave this parameter empty, the timeout period is automatically set to 1 second.
    std::shared_ptr<string> liveness_ = nullptr;
    std::shared_ptr<int32_t> maxSurgeInstanceRatio_ = nullptr;
    std::shared_ptr<int32_t> maxSurgeInstances_ = nullptr;
    // The size of memory required by each instance. Unit: MB. You cannot set this parameter to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 1000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24567** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The Nacos registry. Valid values:
    // 
    // *   **0**: SAE built-in Nacos registry
    // *   **1**: self-managed Nacos registry
    // *   **2** : MSE Nacos registry
    std::shared_ptr<string> microRegistration_ = nullptr;
    // The configuration of registration center. Takes effect only the type of registration center is MSE enterprise Nacos.
    std::shared_ptr<string> microRegistrationConfig_ = nullptr;
    // Configure microservices governance
    // 
    // enable: Whether to enable microservices governance
    // 
    // - true: Enable
    // - false: Disable
    // 
    // mseLosslessRule: Configure lossless online/offline deployment
    // 
    // - delayTime: Delay duration (unit: seconds)
    // - enable: Whether to enable lossless deployment. Set to "true" to enable; set to "false" to disable.
    // - notice: Whether to enable notifications. Set to "true" to enable; set to "false" to disable.
    // - warmupTime: Small-traffic warm-up duration (unit: seconds)
    std::shared_ptr<string> microserviceEngineConfig_ = nullptr;
    // The percentage of the minimum number of available instances. Valid values:
    // 
    // *   **-1**: the default value. This value indicates that the minimum number of available instances is not measured by percentage. If you do not configure this parameter, the default value **-1** is used.
    // *   **0 to 100**: indicates that the minimum number of available instances is calculated by using the following formula: Current number of instances × (Value of MinReadyInstanceRatio × 100%). If the calculated result is not an integer, the result is rounded up to the nearest integer. For example, if the percentage is set to **50**% and five instances are available, the minimum number of available instances is 3.
    // 
    // >  If the **MinReadyInstance** and **MinReadyInstanceRatio** parameters are returned and the value of the **MinReadyInstanceRatio** parameter is not **-1**, the value of the **MinReadyInstanceRatio** parameter takes effect. If the **MinReadyInstances** parameter is set to **5** and the **MinReadyInstanceRatio** parameter is set to **50**, the value of the **MinReadyInstanceRatio** parameter determines the minimum number of available instances.
    std::shared_ptr<int32_t> minReadyInstanceRatio_ = nullptr;
    // The minimum number of available instances. Valid values:
    // 
    // *   If you set the value to **0**, business interruptions occur when the application is updated.
    // *   If you set the value to **-1**, the minimum number of available instances is automatically set to a system-recommended value. The value is the nearest integer to which the calculated result of the following formula is rounded up: Current number of instances × 25%. For example, if five instances are available, the minimum number of available instances is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // >  Make sure that at least one instance is available during application deployment and rollback to prevent business interruptions.
    std::shared_ptr<int32_t> minReadyInstances_ = nullptr;
    // The details of the mounted NAS file system.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataMountDesc>> mountDesc_ = nullptr;
    // The mount target of the NAS file system in the VPC where the application is deployed. If you do not need to modify this configuration during the deployment, configure the **MountHost** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you need to remove this configuration, leave the **MountHost** parameter empty in the request.
    std::shared_ptr<string> mountHost_ = nullptr;
    // The ID of the microservice application.
    std::shared_ptr<string> mseApplicationId_ = nullptr;
    // The application name of SAE service registered in MSE.
    std::shared_ptr<string> mseApplicationName_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The configurations for mounting the NAS file system.
    std::shared_ptr<string> nasConfigs_ = nullptr;
    // The ID of the NAS file system.
    std::shared_ptr<string> nasId_ = nullptr;
    // The SAE application edition.
    // 
    // - lite: The lightweight edition.
    // - std: The standard edition.
    // - pro: The professional edition.
    std::shared_ptr<string> newSaeVersion_ = nullptr;
    // The name of the RAM role used to authenticate the user identity.
    // 
    // >  You need to create an OpenID Connect (OIDC) identity provider (IdP) and an identity provider (IdP) for role-based single sign-on (SSO) in advance. For more information, see [Creates an OpenID Connect (OIDC) identity provider (IdP)](https://help.aliyun.com/document_detail/2331022.html) and [Creates an identity provider (IdP) for role-based single sign-on (SSO)](https://help.aliyun.com/document_detail/2331016.html).
    std::shared_ptr<string> oidcRoleName_ = nullptr;
    // The AccessKey ID that is used to read data from and write data to Object Storage Service (OSS) buckets.
    std::shared_ptr<string> ossAkId_ = nullptr;
    // The AccessKey secret that is used to read data from and write data to OSS buckets.
    std::shared_ptr<string> ossAkSecret_ = nullptr;
    // The description of the mounted OSS bucket.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataOssMountDescs>> ossMountDescs_ = nullptr;
    // The type of the deployment package. Valid values:
    // 
    // *   If you deploy the application by using a Java Archive (JAR) package, you can set this parameter to **FatJar**, **War**, or **Image**.
    // 
    // *   If you deploy the application by using a PHP package, you can set this parameter to one of the following values:
    // 
    //     *   **PhpZip**
    //     *   **IMAGE_PHP_5_4**
    //     *   **IMAGE_PHP_5_4_ALPINE**
    //     *   **IMAGE_PHP_5_5**
    //     *   **IMAGE_PHP_5_5_ALPINE**
    //     *   **IMAGE_PHP_5_6**
    //     *   **IMAGE_PHP_5_6_ALPINE**
    //     *   **IMAGE_PHP_7_0**
    //     *   **IMAGE_PHP_7_0_ALPINE**
    //     *   **IMAGE_PHP_7_1**
    //     *   **IMAGE_PHP_7_1_ALPINE**
    //     *   **IMAGE_PHP_7_2**
    //     *   **IMAGE_PHP_7_2_ALPINE**
    //     *   **IMAGE_PHP_7_3**
    //     *   **IMAGE_PHP_7_3_ALPINE**
    std::shared_ptr<string> packageType_ = nullptr;
    // The URL of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar** or **War**.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package. This parameter is returned only if the **PackageType** parameter is set to **FatJar** or **War**.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The version of PHP supporting PHP deployment packages. Image is not supported.
    std::shared_ptr<string> php_ = nullptr;
    // The path on which the PHP configuration file for application monitoring is mounted. Make sure that the PHP server loads the configuration file.
    // 
    // SAE automatically generates the corresponding configuration file. No manual operations are required.
    std::shared_ptr<string> phpArmsConfigLocation_ = nullptr;
    // The details of the PHP configuration file.
    std::shared_ptr<string> phpConfig_ = nullptr;
    // The path on which the PHP configuration file for application startup is mounted. Make sure that the PHP server uses this configuration file during the startup.
    std::shared_ptr<string> phpConfigLocation_ = nullptr;
    // The script that is run immediately after the container is started. Example: `{"exec":{"command":["cat","/etc/group"]}}`
    std::shared_ptr<string> postStart_ = nullptr;
    // The script that is run before the container is stopped. Example: `{"exec":{"command":["cat","/etc/group"]}}`
    std::shared_ptr<string> preStop_ = nullptr;
    // The programming language that is used to create the application. Valid values:
    // 
    // *   **java**: Java
    // *   **php**: PHP
    // *   **other**: Other programming languages, such as Python, C++, Go, .NET, and Node.js.
    std::shared_ptr<string> programmingLanguage_ = nullptr;
    // Enable K8s Service discovery and registration.
    std::shared_ptr<string> pvtzDiscovery_ = nullptr;
    // The Python environment. PYTHON 3.9.15 is supported.
    std::shared_ptr<string> python_ = nullptr;
    // The configurations for installing custom module dependencies. By default, the dependencies defined by the requirements.txt file in the root directory are installed. If no software package is configured, you can specify dependencies based on your business requirements.
    std::shared_ptr<string> pythonModules_ = nullptr;
    // The details of the health check that was performed on the container. If the container fails this health check multiple times, the system disables and restarts the container. Containers that fail health checks cannot receive traffic from Server Load Balancer (SLB) instances. You can use the **exec**, **httpGet**, or **tcpSocket** method to perform health checks. For more information, see the description of the **Liveness** parameter.
    // 
    // >  You can use only one method to perform the health check.
    std::shared_ptr<string> readiness_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The type of the resource. Set the value to `application`.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Secret mount description.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataSecretMountDesc>> secretMountDesc_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The canary tag configured for the application.
    std::shared_ptr<map<string, string>> serviceTags_ = nullptr;
    // The configuration of the Sidecar container.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataSidecarContainersConfig>> sidecarContainersConfig_ = nullptr;
    // The logging configurations of Log Service.
    // 
    // *   To use Log Service resources that are automatically created by SAE, set this parameter to `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // *   To use custom Log Service resources, set this parameter to `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The following parameters are involved:
    // 
    // *   **projectName**: the name of the Log Service project.
    // *   **logDir**: the path in which logs are stored.
    // *   **logType**: the log type. **stdout**: the standard output log of the container. You can specify only one stdout value for this parameter. If you leave this parameter empty, file logs are collected.
    // *   **logstoreName**: the name of the Logstore in Log Service.
    // *   **logtailName**: the name of the Logtail configuration in Log Service. If you do not configure this parameter, a new Logtail configuration is created.
    // 
    // If you do not need to modify the logging configurations when you deploy the application, configure the **SlsConfigs** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you no longer need to use Log Service, leave the **SlsConfigs** parameter empty in the request.
    std::shared_ptr<string> slsConfigs_ = nullptr;
    // Enable startup probe.
    std::shared_ptr<string> startupProbe_ = nullptr;
    // Configuration of K8s Service discovery and registration, and full-chain gray-release feature.
    std::shared_ptr<string> swimlanePvtzDiscovery_ = nullptr;
    // The details of the tags.
    std::shared_ptr<vector<Models::DescribeApplicationConfigResponseBodyDataTags>> tags_ = nullptr;
    // The timeout period for a graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
    std::shared_ptr<int32_t> terminationGracePeriodSeconds_ = nullptr;
    // The time zone. Default value: **Asia/Shanghai**.
    std::shared_ptr<string> timezone_ = nullptr;
    // The Tomcat configuration. If you want to delete the configuration, set this parameter to {} or leave this parameter empty. The following parameters are involved:
    // 
    // *   **port**: the port number. Valid values: 1024 to 65535. The root permissions are required to perform operations on ports whose number is smaller than 1024. Enter a value that ranges from 1025 to 65535 because the container has only the admin permissions. If you do not configure this parameter, the default port number 8080 is used.
    // *   **contextPath**: the path. Default value: /. This value indicates the root directory.
    // *   **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
    // *   **uriEncoding**: the URI encoding scheme in the Tomcat container. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. If you do not configure this parameter, the default value **ISO-8859-1** is used.
    // *   **useBodyEncoding**: indicates whether to use the encoding scheme that is specified by **BodyEncoding for URL**. Default value: **true**.
    std::shared_ptr<string> tomcatConfig_ = nullptr;
    // The deployment policy. If the minimum number of available instances is 1, the value of the **UpdateStrategy** parameter is an empty string (""). If the minimum number of available instances is greater than 1, the following strategies can be configured:
    // 
    // *   The application is deployed on an instance. The remaining instances are automatically classified into two release batches whose interval is set to 1. In this case, the parameter is set to `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`.
    // *   The application is deployed on an instance. The remaining instances are manually classified into two release batches. In this case, the parameter is set to `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`.
    // *   All instances are automatically classified into two release batches. The application is deployed on the instances of the two batches in parallel. In this case, the parameter is set to `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    // 
    // The following parameters are involved:
    // 
    // *   **type**: the type of the release policy. Valid values: **GrayBatchUpdate** and **BatchUpdate**.
    // 
    // *   **batchUpdate**: the phased release policy.
    // 
    //     *   **batch**: the number of release batches.
    //     *   **releaseType**: the processing method for the batches. Valid values: **auto** and **manual**.
    //     *   **batchWaitTime**: the interval between release batches. Unit: seconds.
    // 
    // *   **grayUpdate**: the number of release batches in the phased release after a canary release. This parameter is returned only if the **type** parameter is set to **GrayBatchUpdate**.
    std::shared_ptr<string> updateStrategy_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The option settings in the WAR package. The settings are used to start the application container. The default startup command is `java $JAVA_OPTS $CATALINA_OPTS -Options org.apache.catalina.startup.Bootstrap "$@" start`.
    std::shared_ptr<string> warStartOptions_ = nullptr;
    // The version of the Tomcat container on which the deployment package depends. Valid values:
    // 
    // *   **apache-tomcat-7.0.91**
    // *   **apache-tomcat-8.5.42**
    // 
    // This parameter is not returned if the **PackageType** parameter is set to **Image**.
    std::shared_ptr<string> webContainer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
