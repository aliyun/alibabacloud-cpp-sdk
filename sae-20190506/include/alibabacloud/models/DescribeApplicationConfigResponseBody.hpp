// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationConfigResponseBody() = default ;
    DescribeApplicationConfigResponseBody(const DescribeApplicationConfigResponseBody &) = default ;
    DescribeApplicationConfigResponseBody(DescribeApplicationConfigResponseBody &&) = default ;
    DescribeApplicationConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBody() = default ;
    DescribeApplicationConfigResponseBody& operator=(const DescribeApplicationConfigResponseBody &) = default ;
    DescribeApplicationConfigResponseBody& operator=(DescribeApplicationConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        DARABONBA_PTR_TO_JSON(IdleHour, idleHour_);
        DARABONBA_PTR_TO_JSON(ImagePullSecrets, imagePullSecrets_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(InitContainersConfig, initContainersConfig_);
        DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
        DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
        DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
        DARABONBA_PTR_TO_JSON(Jdk, jdk_);
        DARABONBA_PTR_TO_JSON(KafkaConfigs, kafkaConfigs_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Liveness, liveness_);
        DARABONBA_PTR_TO_JSON(LokiConfigs, lokiConfigs_);
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
        DARABONBA_PTR_TO_JSON(SlsLogEnvTags, slsLogEnvTags_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        DARABONBA_PTR_FROM_JSON(IdleHour, idleHour_);
        DARABONBA_PTR_FROM_JSON(ImagePullSecrets, imagePullSecrets_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(InitContainersConfig, initContainersConfig_);
        DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
        DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
        DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
        DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
        DARABONBA_PTR_FROM_JSON(KafkaConfigs, kafkaConfigs_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
        DARABONBA_PTR_FROM_JSON(LokiConfigs, lokiConfigs_);
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
        DARABONBA_PTR_FROM_JSON(SlsLogEnvTags, slsLogEnvTags_);
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class SidecarContainersConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SidecarContainersConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
          DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
          DARABONBA_PTR_TO_JSON(Envs, envs_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(Liveness, liveness_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PostStart, postStart_);
          DARABONBA_PTR_TO_JSON(PreStop, preStop_);
          DARABONBA_PTR_TO_JSON(Readiness, readiness_);
          DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
        };
        friend void from_json(const Darabonba::Json& j, SidecarContainersConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
          DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
          DARABONBA_PTR_FROM_JSON(Envs, envs_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
          DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
          DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
          DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
        };
        SidecarContainersConfig() = default ;
        SidecarContainersConfig(const SidecarContainersConfig &) = default ;
        SidecarContainersConfig(SidecarContainersConfig &&) = default ;
        SidecarContainersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SidecarContainersConfig() = default ;
        SidecarContainersConfig& operator=(const SidecarContainersConfig &) = default ;
        SidecarContainersConfig& operator=(SidecarContainersConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecretMountDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecretMountDesc& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(SecretId, secretId_);
            DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          };
          friend void from_json(const Darabonba::Json& j, SecretMountDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
            DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          };
          SecretMountDesc() = default ;
          SecretMountDesc(const SecretMountDesc &) = default ;
          SecretMountDesc(SecretMountDesc &&) = default ;
          SecretMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecretMountDesc() = default ;
          SecretMountDesc& operator=(const SecretMountDesc &) = default ;
          SecretMountDesc& operator=(SecretMountDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->mountPath_ == nullptr && this->secretId_ == nullptr && this->secretName_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline SecretMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline SecretMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // secretId Field Functions 
          bool hasSecretId() const { return this->secretId_ != nullptr;};
          void deleteSecretId() { this->secretId_ = nullptr;};
          inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
          inline SecretMountDesc& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


          // secretName Field Functions 
          bool hasSecretName() const { return this->secretName_ != nullptr;};
          void deleteSecretName() { this->secretName_ = nullptr;};
          inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
          inline SecretMountDesc& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        protected:
          // The key of the data value that is encoded in Base64.
          shared_ptr<string> key_ {};
          // The mount path.
          shared_ptr<string> mountPath_ {};
          // The ID of the secret instance.
          shared_ptr<int64_t> secretId_ {};
          // The name of the secret instance.
          shared_ptr<string> secretName_ {};
        };

        class EmptyDirDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmptyDirDesc& obj) { 
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, EmptyDirDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          EmptyDirDesc() = default ;
          EmptyDirDesc(const EmptyDirDesc &) = default ;
          EmptyDirDesc(EmptyDirDesc &&) = default ;
          EmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmptyDirDesc() = default ;
          EmptyDirDesc& operator=(const EmptyDirDesc &) = default ;
          EmptyDirDesc& operator=(EmptyDirDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr; };
          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline EmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The path on which the volume is mounted in the container.
          shared_ptr<string> mountPath_ {};
          // The name of the temporary storage.
          shared_ptr<string> name_ {};
        };

        class ConfigMapMountDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigMapMountDesc& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
            DARABONBA_PTR_TO_JSON(ConfigMapName, configMapName_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigMapMountDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
            DARABONBA_PTR_FROM_JSON(ConfigMapName, configMapName_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          };
          ConfigMapMountDesc() = default ;
          ConfigMapMountDesc(const ConfigMapMountDesc &) = default ;
          ConfigMapMountDesc(ConfigMapMountDesc &&) = default ;
          ConfigMapMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigMapMountDesc() = default ;
          ConfigMapMountDesc& operator=(const ConfigMapMountDesc &) = default ;
          ConfigMapMountDesc& operator=(ConfigMapMountDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configMapId_ == nullptr
        && this->configMapName_ == nullptr && this->key_ == nullptr && this->mountPath_ == nullptr; };
          // configMapId Field Functions 
          bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
          void deleteConfigMapId() { this->configMapId_ = nullptr;};
          inline int64_t getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
          inline ConfigMapMountDesc& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


          // configMapName Field Functions 
          bool hasConfigMapName() const { return this->configMapName_ != nullptr;};
          void deleteConfigMapName() { this->configMapName_ = nullptr;};
          inline string getConfigMapName() const { DARABONBA_PTR_GET_DEFAULT(configMapName_, "") };
          inline ConfigMapMountDesc& setConfigMapName(string configMapName) { DARABONBA_PTR_SET_VALUE(configMapName_, configMapName) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline ConfigMapMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline ConfigMapMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        protected:
          // The ID of the ConfigMap instance.
          shared_ptr<int64_t> configMapId_ {};
          // The name of the ConfigMap.
          shared_ptr<string> configMapName_ {};
          // The key of the ConfigMap.
          shared_ptr<string> key_ {};
          // The mount path of the container.
          shared_ptr<string> mountPath_ {};
        };

        virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->command_ == nullptr && this->commandArgs_ == nullptr && this->configMapMountDesc_ == nullptr && this->cpu_ == nullptr && this->emptyDirDesc_ == nullptr
        && this->envs_ == nullptr && this->imageUrl_ == nullptr && this->liveness_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr
        && this->postStart_ == nullptr && this->preStop_ == nullptr && this->readiness_ == nullptr && this->secretMountDesc_ == nullptr; };
        // acrInstanceId Field Functions 
        bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
        void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
        inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
        inline SidecarContainersConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline SidecarContainersConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // commandArgs Field Functions 
        bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
        void deleteCommandArgs() { this->commandArgs_ = nullptr;};
        inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
        inline SidecarContainersConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


        // configMapMountDesc Field Functions 
        bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
        void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
        inline const vector<SidecarContainersConfig::ConfigMapMountDesc> & getConfigMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<SidecarContainersConfig::ConfigMapMountDesc>) };
        inline vector<SidecarContainersConfig::ConfigMapMountDesc> getConfigMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<SidecarContainersConfig::ConfigMapMountDesc>) };
        inline SidecarContainersConfig& setConfigMapMountDesc(const vector<SidecarContainersConfig::ConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
        inline SidecarContainersConfig& setConfigMapMountDesc(vector<SidecarContainersConfig::ConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline SidecarContainersConfig& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // emptyDirDesc Field Functions 
        bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
        void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
        inline const vector<SidecarContainersConfig::EmptyDirDesc> & getEmptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<SidecarContainersConfig::EmptyDirDesc>) };
        inline vector<SidecarContainersConfig::EmptyDirDesc> getEmptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<SidecarContainersConfig::EmptyDirDesc>) };
        inline SidecarContainersConfig& setEmptyDirDesc(const vector<SidecarContainersConfig::EmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
        inline SidecarContainersConfig& setEmptyDirDesc(vector<SidecarContainersConfig::EmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


        // envs Field Functions 
        bool hasEnvs() const { return this->envs_ != nullptr;};
        void deleteEnvs() { this->envs_ = nullptr;};
        inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
        inline SidecarContainersConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline SidecarContainersConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // liveness Field Functions 
        bool hasLiveness() const { return this->liveness_ != nullptr;};
        void deleteLiveness() { this->liveness_ = nullptr;};
        inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
        inline SidecarContainersConfig& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline SidecarContainersConfig& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SidecarContainersConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // postStart Field Functions 
        bool hasPostStart() const { return this->postStart_ != nullptr;};
        void deletePostStart() { this->postStart_ = nullptr;};
        inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
        inline SidecarContainersConfig& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


        // preStop Field Functions 
        bool hasPreStop() const { return this->preStop_ != nullptr;};
        void deletePreStop() { this->preStop_ = nullptr;};
        inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
        inline SidecarContainersConfig& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


        // readiness Field Functions 
        bool hasReadiness() const { return this->readiness_ != nullptr;};
        void deleteReadiness() { this->readiness_ = nullptr;};
        inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
        inline SidecarContainersConfig& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


        // secretMountDesc Field Functions 
        bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
        void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
        inline const vector<SidecarContainersConfig::SecretMountDesc> & getSecretMountDesc() const { DARABONBA_PTR_GET_CONST(secretMountDesc_, vector<SidecarContainersConfig::SecretMountDesc>) };
        inline vector<SidecarContainersConfig::SecretMountDesc> getSecretMountDesc() { DARABONBA_PTR_GET(secretMountDesc_, vector<SidecarContainersConfig::SecretMountDesc>) };
        inline SidecarContainersConfig& setSecretMountDesc(const vector<SidecarContainersConfig::SecretMountDesc> & secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };
        inline SidecarContainersConfig& setSecretMountDesc(vector<SidecarContainersConfig::SecretMountDesc> && secretMountDesc) { DARABONBA_PTR_SET_RVALUE(secretMountDesc_, secretMountDesc) };


      protected:
        // The ID of the Container Registry Enterprise Edition instance. This parameter is required if **ImageUrl** is set to an image in Container Registry Enterprise Edition.
        shared_ptr<string> acrInstanceId_ {};
        // The startup command of the image. The command must be an executable object that exists in the container. Example:
        // 
        // ```
        // command:
        //       - echo
        //       - abc
        //       - >
        //       - file0
        // ```
        // 
        // Based on the preceding example, `Command="echo", CommandArgs=["abc", ">", "file0"]`.
        shared_ptr<string> command_ {};
        // The arguments of the image startup command. The arguments are required by the preceding startup command **Command**. Format:
        // 
        // `["a","b"]`
        // 
        // In the preceding example, `CommandArgs=["abc", ">", "file0"]`. The value `["abc", ">", "file0"]` must be converted into a string in the JSON array format. If this parameter is not required, you do not need to specify it.
        shared_ptr<string> commandArgs_ {};
        // The description of the ConfigMap that you want to mount. Use the configuration item that you created on the Namespace Configuration Items page to inject configuration information into the container. The parameters are described as follows:
        // 
        // - **configMapId**: The ID of the ConfigMap instance. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the ID.
        // 
        // - **key**: The key.
        // 
        // > You can pass the `sae-sys-configmap-all` parameter to mount all keys.
        // 
        // - **mountPath**: The mount path.
        // 
        // - **ConfigMapName**: The name of the ConfigMap.
        shared_ptr<vector<SidecarContainersConfig::ConfigMapMountDesc>> configMapMountDesc_ {};
        // The maximum CPU resources that the sidecar container can use from the main container.
        shared_ptr<int32_t> cpu_ {};
        // The shared temporary storage. Set a temporary storage directory and mount it to the main container and the sidecar container.
        shared_ptr<vector<SidecarContainersConfig::EmptyDirDesc>> emptyDirDesc_ {};
        // The environment variables of the container. You can customize environment variables or reference a ConfigMap. To reference a ConfigMap, you must first create a ConfigMap instance. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
        // 
        // - Custom configuration
        // 
        //   - **name**: The name of the environment variable.
        // 
        //   - **value**: The value of the environment variable. This parameter takes precedence over valueFrom.
        // 
        // - Reference a configuration item (valueFrom)
        // 
        //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<ConfigMap name>`, for example, `sae-sys-configmap-all-test1`.
        // 
        //   - **valueFrom**: The reference of the environment variable. Set the value to `configMapRef`.
        // 
        //     - **configMapId**: The ID of the ConfigMap.
        // 
        //     - **key**: The key. If you want to reference all keys, do not specify this parameter.
        shared_ptr<string> envs_ {};
        // The image URL.
        shared_ptr<string> imageUrl_ {};
        // The health check on the container.
        shared_ptr<string> liveness_ {};
        // The maximum memory resources that the sidecar container can use from the main container.
        shared_ptr<int32_t> memory_ {};
        // The container name.
        shared_ptr<string> name_ {};
        shared_ptr<string> postStart_ {};
        shared_ptr<string> preStop_ {};
        // The check on the application startup status.
        shared_ptr<string> readiness_ {};
        // The description of the secret that you want to mount.
        shared_ptr<vector<SidecarContainersConfig::SecretMountDesc>> secretMountDesc_ {};
      };

      class SecretMountDesc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecretMountDesc& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(SecretId, secretId_);
          DARABONBA_PTR_TO_JSON(SecretName, secretName_);
        };
        friend void from_json(const Darabonba::Json& j, SecretMountDesc& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
          DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
        };
        SecretMountDesc() = default ;
        SecretMountDesc(const SecretMountDesc &) = default ;
        SecretMountDesc(SecretMountDesc &&) = default ;
        SecretMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecretMountDesc() = default ;
        SecretMountDesc& operator=(const SecretMountDesc &) = default ;
        SecretMountDesc& operator=(SecretMountDesc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->mountPath_ == nullptr && this->secretId_ == nullptr && this->secretName_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline SecretMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline SecretMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // secretId Field Functions 
        bool hasSecretId() const { return this->secretId_ != nullptr;};
        void deleteSecretId() { this->secretId_ = nullptr;};
        inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
        inline SecretMountDesc& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


        // secretName Field Functions 
        bool hasSecretName() const { return this->secretName_ != nullptr;};
        void deleteSecretName() { this->secretName_ = nullptr;};
        inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
        inline SecretMountDesc& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


      protected:
        // The key of the data value that is encoded in Base64.
        shared_ptr<string> key_ {};
        // The mount path.
        shared_ptr<string> mountPath_ {};
        // The ID of the queried secret instance.
        shared_ptr<int64_t> secretId_ {};
        // The name of the secret instance.
        shared_ptr<string> secretName_ {};
      };

      class OssMountDescs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssMountDescs& obj) { 
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
          DARABONBA_PTR_TO_JSON(mountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
        };
        friend void from_json(const Darabonba::Json& j, OssMountDescs& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
          DARABONBA_PTR_FROM_JSON(mountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
        };
        OssMountDescs() = default ;
        OssMountDescs(const OssMountDescs &) = default ;
        OssMountDescs(OssMountDescs &&) = default ;
        OssMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssMountDescs() = default ;
        OssMountDescs& operator=(const OssMountDescs &) = default ;
        OssMountDescs& operator=(OssMountDescs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->bucketPath_ == nullptr && this->mountPath_ == nullptr && this->readOnly_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssMountDescs& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // bucketPath Field Functions 
        bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
        void deleteBucketPath() { this->bucketPath_ = nullptr;};
        inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
        inline OssMountDescs& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline OssMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline OssMountDescs& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      protected:
        // The bucket name.
        shared_ptr<string> bucketName_ {};
        // The directory or object that you created in OSS. An error occurs if the mount directory does not exist.
        shared_ptr<string> bucketPath_ {};
        // The path of the container in SAE. If the path exists, the path is overwritten. If the path does not exist, a new path is created.
        shared_ptr<string> mountPath_ {};
        // Specifies whether the container has the read-only permission on the mount directory resources. Valid values:
        // 
        // - **true**: The read-only permission.
        // 
        // - **false**: The read and write permissions.
        shared_ptr<bool> readOnly_ {};
      };

      class MountDesc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountDesc& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(NasPath, nasPath_);
        };
        friend void from_json(const Darabonba::Json& j, MountDesc& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(NasPath, nasPath_);
        };
        MountDesc() = default ;
        MountDesc(const MountDesc &) = default ;
        MountDesc(MountDesc &&) = default ;
        MountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountDesc() = default ;
        MountDesc& operator=(const MountDesc &) = default ;
        MountDesc& operator=(MountDesc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->nasPath_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline MountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // nasPath Field Functions 
        bool hasNasPath() const { return this->nasPath_ != nullptr;};
        void deleteNasPath() { this->nasPath_ = nullptr;};
        inline string getNasPath() const { DARABONBA_PTR_GET_DEFAULT(nasPath_, "") };
        inline MountDesc& setNasPath(string nasPath) { DARABONBA_PTR_SET_VALUE(nasPath_, nasPath) };


      protected:
        // The mount path of the container.
        shared_ptr<string> mountPath_ {};
        // The path of the NAS file system.
        shared_ptr<string> nasPath_ {};
      };

      class InitContainersConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InitContainersConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
          DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
          DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
          DARABONBA_PTR_TO_JSON(Envs, envs_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SecretMountDesc, secretMountDesc_);
        };
        friend void from_json(const Darabonba::Json& j, InitContainersConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
          DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
          DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
          DARABONBA_PTR_FROM_JSON(Envs, envs_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SecretMountDesc, secretMountDesc_);
        };
        InitContainersConfig() = default ;
        InitContainersConfig(const InitContainersConfig &) = default ;
        InitContainersConfig(InitContainersConfig &&) = default ;
        InitContainersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InitContainersConfig() = default ;
        InitContainersConfig& operator=(const InitContainersConfig &) = default ;
        InitContainersConfig& operator=(InitContainersConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecretMountDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecretMountDesc& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(SecretId, secretId_);
            DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          };
          friend void from_json(const Darabonba::Json& j, SecretMountDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
            DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          };
          SecretMountDesc() = default ;
          SecretMountDesc(const SecretMountDesc &) = default ;
          SecretMountDesc(SecretMountDesc &&) = default ;
          SecretMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecretMountDesc() = default ;
          SecretMountDesc& operator=(const SecretMountDesc &) = default ;
          SecretMountDesc& operator=(SecretMountDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->mountPath_ == nullptr && this->secretId_ == nullptr && this->secretName_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline SecretMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline SecretMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // secretId Field Functions 
          bool hasSecretId() const { return this->secretId_ != nullptr;};
          void deleteSecretId() { this->secretId_ = nullptr;};
          inline int64_t getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
          inline SecretMountDesc& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


          // secretName Field Functions 
          bool hasSecretName() const { return this->secretName_ != nullptr;};
          void deleteSecretName() { this->secretName_ = nullptr;};
          inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
          inline SecretMountDesc& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        protected:
          // The key.
          shared_ptr<string> key_ {};
          // The mount path.
          shared_ptr<string> mountPath_ {};
          // The ID of the secret instance.
          shared_ptr<int64_t> secretId_ {};
          // The name of the secret instance.
          shared_ptr<string> secretName_ {};
        };

        class EmptyDirDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmptyDirDesc& obj) { 
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, EmptyDirDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          EmptyDirDesc() = default ;
          EmptyDirDesc(const EmptyDirDesc &) = default ;
          EmptyDirDesc(EmptyDirDesc &&) = default ;
          EmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmptyDirDesc() = default ;
          EmptyDirDesc& operator=(const EmptyDirDesc &) = default ;
          EmptyDirDesc& operator=(EmptyDirDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr; };
          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline EmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The path on which the volume is mounted in the container.
          shared_ptr<string> mountPath_ {};
          // The name of the temporary storage.
          shared_ptr<string> name_ {};
        };

        class ConfigMapMountDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigMapMountDesc& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
            DARABONBA_PTR_TO_JSON(ConfigMapName, configMapName_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigMapMountDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
            DARABONBA_PTR_FROM_JSON(ConfigMapName, configMapName_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          };
          ConfigMapMountDesc() = default ;
          ConfigMapMountDesc(const ConfigMapMountDesc &) = default ;
          ConfigMapMountDesc(ConfigMapMountDesc &&) = default ;
          ConfigMapMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigMapMountDesc() = default ;
          ConfigMapMountDesc& operator=(const ConfigMapMountDesc &) = default ;
          ConfigMapMountDesc& operator=(ConfigMapMountDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configMapId_ == nullptr
        && this->configMapName_ == nullptr && this->key_ == nullptr && this->mountPath_ == nullptr; };
          // configMapId Field Functions 
          bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
          void deleteConfigMapId() { this->configMapId_ = nullptr;};
          inline int64_t getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
          inline ConfigMapMountDesc& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


          // configMapName Field Functions 
          bool hasConfigMapName() const { return this->configMapName_ != nullptr;};
          void deleteConfigMapName() { this->configMapName_ = nullptr;};
          inline string getConfigMapName() const { DARABONBA_PTR_GET_DEFAULT(configMapName_, "") };
          inline ConfigMapMountDesc& setConfigMapName(string configMapName) { DARABONBA_PTR_SET_VALUE(configMapName_, configMapName) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline ConfigMapMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline ConfigMapMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        protected:
          // The ID of the ConfigMap.
          shared_ptr<int64_t> configMapId_ {};
          // The name of the ConfigMap.
          shared_ptr<string> configMapName_ {};
          // The key of the key-value pair.
          shared_ptr<string> key_ {};
          // The mount path of the container.
          shared_ptr<string> mountPath_ {};
        };

        virtual bool empty() const override { return this->command_ == nullptr
        && this->commandArgs_ == nullptr && this->configMapMountDesc_ == nullptr && this->emptyDirDesc_ == nullptr && this->envs_ == nullptr && this->imageUrl_ == nullptr
        && this->name_ == nullptr && this->secretMountDesc_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline InitContainersConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // commandArgs Field Functions 
        bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
        void deleteCommandArgs() { this->commandArgs_ = nullptr;};
        inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
        inline InitContainersConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


        // configMapMountDesc Field Functions 
        bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
        void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
        inline const vector<InitContainersConfig::ConfigMapMountDesc> & getConfigMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<InitContainersConfig::ConfigMapMountDesc>) };
        inline vector<InitContainersConfig::ConfigMapMountDesc> getConfigMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<InitContainersConfig::ConfigMapMountDesc>) };
        inline InitContainersConfig& setConfigMapMountDesc(const vector<InitContainersConfig::ConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
        inline InitContainersConfig& setConfigMapMountDesc(vector<InitContainersConfig::ConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


        // emptyDirDesc Field Functions 
        bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
        void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
        inline const vector<InitContainersConfig::EmptyDirDesc> & getEmptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<InitContainersConfig::EmptyDirDesc>) };
        inline vector<InitContainersConfig::EmptyDirDesc> getEmptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<InitContainersConfig::EmptyDirDesc>) };
        inline InitContainersConfig& setEmptyDirDesc(const vector<InitContainersConfig::EmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
        inline InitContainersConfig& setEmptyDirDesc(vector<InitContainersConfig::EmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


        // envs Field Functions 
        bool hasEnvs() const { return this->envs_ != nullptr;};
        void deleteEnvs() { this->envs_ = nullptr;};
        inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
        inline InitContainersConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline InitContainersConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InitContainersConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // secretMountDesc Field Functions 
        bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
        void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
        inline const vector<InitContainersConfig::SecretMountDesc> & getSecretMountDesc() const { DARABONBA_PTR_GET_CONST(secretMountDesc_, vector<InitContainersConfig::SecretMountDesc>) };
        inline vector<InitContainersConfig::SecretMountDesc> getSecretMountDesc() { DARABONBA_PTR_GET(secretMountDesc_, vector<InitContainersConfig::SecretMountDesc>) };
        inline InitContainersConfig& setSecretMountDesc(const vector<InitContainersConfig::SecretMountDesc> & secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };
        inline InitContainersConfig& setSecretMountDesc(vector<InitContainersConfig::SecretMountDesc> && secretMountDesc) { DARABONBA_PTR_SET_RVALUE(secretMountDesc_, secretMountDesc) };


      protected:
        // The startup command of the image. The command must be an executable object that exists in the container. Example:
        // 
        // ```
        // command:
        //       - echo
        //       - abc
        //       - >
        //       - file0
        // ```
        // 
        // Based on the preceding example, `Command="echo", CommandArgs=["abc", ">", "file0"]`.
        shared_ptr<string> command_ {};
        // The arguments of the image startup command. The arguments are required by the preceding startup command **Command**. Format:
        // 
        // `["a","b"]`
        // 
        // In the preceding example, `CommandArgs=["abc", ">", "file0"]`. The value `["abc", ">", "file0"]` must be converted into a string in the JSON array format. If this parameter is not required, you do not need to specify it.
        shared_ptr<string> commandArgs_ {};
        // The configurations of the ConfigMap.
        shared_ptr<vector<InitContainersConfig::ConfigMapMountDesc>> configMapMountDesc_ {};
        // The shared temporary storage.
        shared_ptr<vector<InitContainersConfig::EmptyDirDesc>> emptyDirDesc_ {};
        // The environment variables of the container. You can customize environment variables or reference a ConfigMap. To reference a ConfigMap, you must first create a ConfigMap instance. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
        // 
        // - Custom configuration
        // 
        //   - **name**: The name of the environment variable.
        // 
        //   - **value**: The value of the environment variable. This parameter takes precedence over valueFrom.
        // 
        // - Reference a configuration item (valueFrom)
        // 
        //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<ConfigMap name>`, for example, `sae-sys-configmap-all-test1`.
        // 
        //   - **valueFrom**: The reference of the environment variable. Set the value to `configMapRef`.
        // 
        //   - **configMapId**: The ID of the ConfigMap.
        // 
        //   - **key**: The key. If you want to reference all keys, do not specify this parameter.
        // 
        // - Reference a secret (valueFrom)
        // 
        //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-secret-all-<Secret name>`, for example, `sae-sys-secret-all-test1`.
        // 
        //   - **valueFrom**: The reference of the environment variable. Set the value to `secretRef`.
        // 
        //   - **secretId**: The ID of the secret.
        // 
        //   - **key**: The key. If you want to reference all keys, do not specify this parameter.
        shared_ptr<string> envs_ {};
        // The URL of the image that is used by the init container.
        shared_ptr<string> imageUrl_ {};
        // The name of the init container.
        shared_ptr<string> name_ {};
        // The description of the secret that you want to mount.
        shared_ptr<vector<InitContainersConfig::SecretMountDesc>> secretMountDesc_ {};
      };

      class EmptyDirDesc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EmptyDirDesc& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EmptyDirDesc& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EmptyDirDesc() = default ;
        EmptyDirDesc(const EmptyDirDesc &) = default ;
        EmptyDirDesc(EmptyDirDesc &&) = default ;
        EmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EmptyDirDesc() = default ;
        EmptyDirDesc& operator=(const EmptyDirDesc &) = default ;
        EmptyDirDesc& operator=(EmptyDirDesc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline EmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The mount path.
        shared_ptr<string> mountPath_ {};
        // The name of the temporary storage.
        shared_ptr<string> name_ {};
      };

      class ConfigMapMountDesc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigMapMountDesc& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
          DARABONBA_PTR_TO_JSON(ConfigMapName, configMapName_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigMapMountDesc& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
          DARABONBA_PTR_FROM_JSON(ConfigMapName, configMapName_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        };
        ConfigMapMountDesc() = default ;
        ConfigMapMountDesc(const ConfigMapMountDesc &) = default ;
        ConfigMapMountDesc(ConfigMapMountDesc &&) = default ;
        ConfigMapMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigMapMountDesc() = default ;
        ConfigMapMountDesc& operator=(const ConfigMapMountDesc &) = default ;
        ConfigMapMountDesc& operator=(ConfigMapMountDesc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configMapId_ == nullptr
        && this->configMapName_ == nullptr && this->key_ == nullptr && this->mountPath_ == nullptr; };
        // configMapId Field Functions 
        bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
        void deleteConfigMapId() { this->configMapId_ = nullptr;};
        inline int64_t getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
        inline ConfigMapMountDesc& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


        // configMapName Field Functions 
        bool hasConfigMapName() const { return this->configMapName_ != nullptr;};
        void deleteConfigMapName() { this->configMapName_ = nullptr;};
        inline string getConfigMapName() const { DARABONBA_PTR_GET_DEFAULT(configMapName_, "") };
        inline ConfigMapMountDesc& setConfigMapName(string configMapName) { DARABONBA_PTR_SET_VALUE(configMapName_, configMapName) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ConfigMapMountDesc& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline ConfigMapMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      protected:
        // The ID of the ConfigMap.
        shared_ptr<int64_t> configMapId_ {};
        // The name of the ConfigMap.
        shared_ptr<string> configMapName_ {};
        // The key of the key-value pair.
        shared_ptr<string> key_ {};
        // The mount path of the container.
        shared_ptr<string> mountPath_ {};
      };

      virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->agentVersion_ == nullptr && this->albIngressReadinessGate_ == nullptr && this->appDescription_ == nullptr && this->appId_ == nullptr
        && this->appName_ == nullptr && this->appSource_ == nullptr && this->associateEip_ == nullptr && this->baseAppId_ == nullptr && this->batchWaitTime_ == nullptr
        && this->clusterId_ == nullptr && this->cmsServiceId_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr && this->configMapMountDesc_ == nullptr
        && this->cpu_ == nullptr && this->customHostAlias_ == nullptr && this->customImageNetworkType_ == nullptr && this->deploymentName_ == nullptr && this->diskSize_ == nullptr
        && this->dotnet_ == nullptr && this->edasContainerVersion_ == nullptr && this->emptyDirDesc_ == nullptr && this->enableAhas_ == nullptr && this->enableCpuBurst_ == nullptr
        && this->enableGreyTagRoute_ == nullptr && this->enableIdle_ == nullptr && this->enableNamespaceAgentVersion_ == nullptr && this->enableNewArms_ == nullptr && this->enablePrometheus_ == nullptr
        && this->envs_ == nullptr && this->gpuCount_ == nullptr && this->gpuType_ == nullptr && this->headlessPvtzDiscovery_ == nullptr && this->html_ == nullptr
        && this->idleHour_ == nullptr && this->imagePullSecrets_ == nullptr && this->imageUrl_ == nullptr && this->initContainersConfig_ == nullptr && this->isStateful_ == nullptr
        && this->jarStartArgs_ == nullptr && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->kafkaConfigs_ == nullptr && this->labels_ == nullptr
        && this->liveness_ == nullptr && this->lokiConfigs_ == nullptr && this->maxSurgeInstanceRatio_ == nullptr && this->maxSurgeInstances_ == nullptr && this->memory_ == nullptr
        && this->microRegistration_ == nullptr && this->microRegistrationConfig_ == nullptr && this->microserviceEngineConfig_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr
        && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->mseApplicationId_ == nullptr && this->mseApplicationName_ == nullptr && this->namespaceId_ == nullptr
        && this->nasConfigs_ == nullptr && this->nasId_ == nullptr && this->newSaeVersion_ == nullptr && this->oidcRoleName_ == nullptr && this->ossAkId_ == nullptr
        && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr
        && this->php_ == nullptr && this->phpArmsConfigLocation_ == nullptr && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr
        && this->preStop_ == nullptr && this->programmingLanguage_ == nullptr && this->pvtzDiscovery_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr
        && this->readiness_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr && this->resourceType_ == nullptr && this->secretMountDesc_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceTags_ == nullptr && this->sidecarContainersConfig_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr
        && this->startupProbe_ == nullptr && this->swimlanePvtzDiscovery_ == nullptr && this->tags_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr && this->timezone_ == nullptr
        && this->tomcatConfig_ == nullptr && this->updateStrategy_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->warStartOptions_ == nullptr
        && this->webContainer_ == nullptr; };
      // acrAssumeRoleArn Field Functions 
      bool hasAcrAssumeRoleArn() const { return this->acrAssumeRoleArn_ != nullptr;};
      void deleteAcrAssumeRoleArn() { this->acrAssumeRoleArn_ = nullptr;};
      inline string getAcrAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(acrAssumeRoleArn_, "") };
      inline Data& setAcrAssumeRoleArn(string acrAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(acrAssumeRoleArn_, acrAssumeRoleArn) };


      // acrInstanceId Field Functions 
      bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
      void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
      inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
      inline Data& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline Data& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // albIngressReadinessGate Field Functions 
      bool hasAlbIngressReadinessGate() const { return this->albIngressReadinessGate_ != nullptr;};
      void deleteAlbIngressReadinessGate() { this->albIngressReadinessGate_ = nullptr;};
      inline string getAlbIngressReadinessGate() const { DARABONBA_PTR_GET_DEFAULT(albIngressReadinessGate_, "") };
      inline Data& setAlbIngressReadinessGate(string albIngressReadinessGate) { DARABONBA_PTR_SET_VALUE(albIngressReadinessGate_, albIngressReadinessGate) };


      // appDescription Field Functions 
      bool hasAppDescription() const { return this->appDescription_ != nullptr;};
      void deleteAppDescription() { this->appDescription_ = nullptr;};
      inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
      inline Data& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appSource Field Functions 
      bool hasAppSource() const { return this->appSource_ != nullptr;};
      void deleteAppSource() { this->appSource_ = nullptr;};
      inline string getAppSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
      inline Data& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


      // associateEip Field Functions 
      bool hasAssociateEip() const { return this->associateEip_ != nullptr;};
      void deleteAssociateEip() { this->associateEip_ = nullptr;};
      inline bool getAssociateEip() const { DARABONBA_PTR_GET_DEFAULT(associateEip_, false) };
      inline Data& setAssociateEip(bool associateEip) { DARABONBA_PTR_SET_VALUE(associateEip_, associateEip) };


      // baseAppId Field Functions 
      bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
      void deleteBaseAppId() { this->baseAppId_ = nullptr;};
      inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
      inline Data& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


      // batchWaitTime Field Functions 
      bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
      void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
      inline int32_t getBatchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
      inline Data& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // cmsServiceId Field Functions 
      bool hasCmsServiceId() const { return this->cmsServiceId_ != nullptr;};
      void deleteCmsServiceId() { this->cmsServiceId_ = nullptr;};
      inline string getCmsServiceId() const { DARABONBA_PTR_GET_DEFAULT(cmsServiceId_, "") };
      inline Data& setCmsServiceId(string cmsServiceId) { DARABONBA_PTR_SET_VALUE(cmsServiceId_, cmsServiceId) };


      // command Field Functions 
      bool hasCommand() const { return this->command_ != nullptr;};
      void deleteCommand() { this->command_ = nullptr;};
      inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
      inline Data& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


      // commandArgs Field Functions 
      bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
      void deleteCommandArgs() { this->commandArgs_ = nullptr;};
      inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
      inline Data& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


      // configMapMountDesc Field Functions 
      bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
      void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
      inline const vector<Data::ConfigMapMountDesc> & getConfigMapMountDesc() const { DARABONBA_PTR_GET_CONST(configMapMountDesc_, vector<Data::ConfigMapMountDesc>) };
      inline vector<Data::ConfigMapMountDesc> getConfigMapMountDesc() { DARABONBA_PTR_GET(configMapMountDesc_, vector<Data::ConfigMapMountDesc>) };
      inline Data& setConfigMapMountDesc(const vector<Data::ConfigMapMountDesc> & configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };
      inline Data& setConfigMapMountDesc(vector<Data::ConfigMapMountDesc> && configMapMountDesc) { DARABONBA_PTR_SET_RVALUE(configMapMountDesc_, configMapMountDesc) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Data& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // customHostAlias Field Functions 
      bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
      void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
      inline string getCustomHostAlias() const { DARABONBA_PTR_GET_DEFAULT(customHostAlias_, "") };
      inline Data& setCustomHostAlias(string customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };


      // customImageNetworkType Field Functions 
      bool hasCustomImageNetworkType() const { return this->customImageNetworkType_ != nullptr;};
      void deleteCustomImageNetworkType() { this->customImageNetworkType_ = nullptr;};
      inline string getCustomImageNetworkType() const { DARABONBA_PTR_GET_DEFAULT(customImageNetworkType_, "") };
      inline Data& setCustomImageNetworkType(string customImageNetworkType) { DARABONBA_PTR_SET_VALUE(customImageNetworkType_, customImageNetworkType) };


      // deploymentName Field Functions 
      bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
      void deleteDeploymentName() { this->deploymentName_ = nullptr;};
      inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
      inline Data& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


      // diskSize Field Functions 
      bool hasDiskSize() const { return this->diskSize_ != nullptr;};
      void deleteDiskSize() { this->diskSize_ = nullptr;};
      inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
      inline Data& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


      // dotnet Field Functions 
      bool hasDotnet() const { return this->dotnet_ != nullptr;};
      void deleteDotnet() { this->dotnet_ = nullptr;};
      inline string getDotnet() const { DARABONBA_PTR_GET_DEFAULT(dotnet_, "") };
      inline Data& setDotnet(string dotnet) { DARABONBA_PTR_SET_VALUE(dotnet_, dotnet) };


      // edasContainerVersion Field Functions 
      bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
      void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
      inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
      inline Data& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


      // emptyDirDesc Field Functions 
      bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
      void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
      inline const vector<Data::EmptyDirDesc> & getEmptyDirDesc() const { DARABONBA_PTR_GET_CONST(emptyDirDesc_, vector<Data::EmptyDirDesc>) };
      inline vector<Data::EmptyDirDesc> getEmptyDirDesc() { DARABONBA_PTR_GET(emptyDirDesc_, vector<Data::EmptyDirDesc>) };
      inline Data& setEmptyDirDesc(const vector<Data::EmptyDirDesc> & emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };
      inline Data& setEmptyDirDesc(vector<Data::EmptyDirDesc> && emptyDirDesc) { DARABONBA_PTR_SET_RVALUE(emptyDirDesc_, emptyDirDesc) };


      // enableAhas Field Functions 
      bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
      void deleteEnableAhas() { this->enableAhas_ = nullptr;};
      inline string getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, "") };
      inline Data& setEnableAhas(string enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


      // enableCpuBurst Field Functions 
      bool hasEnableCpuBurst() const { return this->enableCpuBurst_ != nullptr;};
      void deleteEnableCpuBurst() { this->enableCpuBurst_ = nullptr;};
      inline string getEnableCpuBurst() const { DARABONBA_PTR_GET_DEFAULT(enableCpuBurst_, "") };
      inline Data& setEnableCpuBurst(string enableCpuBurst) { DARABONBA_PTR_SET_VALUE(enableCpuBurst_, enableCpuBurst) };


      // enableGreyTagRoute Field Functions 
      bool hasEnableGreyTagRoute() const { return this->enableGreyTagRoute_ != nullptr;};
      void deleteEnableGreyTagRoute() { this->enableGreyTagRoute_ = nullptr;};
      inline bool getEnableGreyTagRoute() const { DARABONBA_PTR_GET_DEFAULT(enableGreyTagRoute_, false) };
      inline Data& setEnableGreyTagRoute(bool enableGreyTagRoute) { DARABONBA_PTR_SET_VALUE(enableGreyTagRoute_, enableGreyTagRoute) };


      // enableIdle Field Functions 
      bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
      void deleteEnableIdle() { this->enableIdle_ = nullptr;};
      inline bool getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
      inline Data& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


      // enableNamespaceAgentVersion Field Functions 
      bool hasEnableNamespaceAgentVersion() const { return this->enableNamespaceAgentVersion_ != nullptr;};
      void deleteEnableNamespaceAgentVersion() { this->enableNamespaceAgentVersion_ = nullptr;};
      inline bool getEnableNamespaceAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(enableNamespaceAgentVersion_, false) };
      inline Data& setEnableNamespaceAgentVersion(bool enableNamespaceAgentVersion) { DARABONBA_PTR_SET_VALUE(enableNamespaceAgentVersion_, enableNamespaceAgentVersion) };


      // enableNewArms Field Functions 
      bool hasEnableNewArms() const { return this->enableNewArms_ != nullptr;};
      void deleteEnableNewArms() { this->enableNewArms_ = nullptr;};
      inline bool getEnableNewArms() const { DARABONBA_PTR_GET_DEFAULT(enableNewArms_, false) };
      inline Data& setEnableNewArms(bool enableNewArms) { DARABONBA_PTR_SET_VALUE(enableNewArms_, enableNewArms) };


      // enablePrometheus Field Functions 
      bool hasEnablePrometheus() const { return this->enablePrometheus_ != nullptr;};
      void deleteEnablePrometheus() { this->enablePrometheus_ = nullptr;};
      inline bool getEnablePrometheus() const { DARABONBA_PTR_GET_DEFAULT(enablePrometheus_, false) };
      inline Data& setEnablePrometheus(bool enablePrometheus) { DARABONBA_PTR_SET_VALUE(enablePrometheus_, enablePrometheus) };


      // envs Field Functions 
      bool hasEnvs() const { return this->envs_ != nullptr;};
      void deleteEnvs() { this->envs_ = nullptr;};
      inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
      inline Data& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline string getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, "") };
      inline Data& setGpuCount(string gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuType Field Functions 
      bool hasGpuType() const { return this->gpuType_ != nullptr;};
      void deleteGpuType() { this->gpuType_ = nullptr;};
      inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
      inline Data& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


      // headlessPvtzDiscovery Field Functions 
      bool hasHeadlessPvtzDiscovery() const { return this->headlessPvtzDiscovery_ != nullptr;};
      void deleteHeadlessPvtzDiscovery() { this->headlessPvtzDiscovery_ = nullptr;};
      inline string getHeadlessPvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(headlessPvtzDiscovery_, "") };
      inline Data& setHeadlessPvtzDiscovery(string headlessPvtzDiscovery) { DARABONBA_PTR_SET_VALUE(headlessPvtzDiscovery_, headlessPvtzDiscovery) };


      // html Field Functions 
      bool hasHtml() const { return this->html_ != nullptr;};
      void deleteHtml() { this->html_ = nullptr;};
      inline string getHtml() const { DARABONBA_PTR_GET_DEFAULT(html_, "") };
      inline Data& setHtml(string html) { DARABONBA_PTR_SET_VALUE(html_, html) };


      // idleHour Field Functions 
      bool hasIdleHour() const { return this->idleHour_ != nullptr;};
      void deleteIdleHour() { this->idleHour_ = nullptr;};
      inline string getIdleHour() const { DARABONBA_PTR_GET_DEFAULT(idleHour_, "") };
      inline Data& setIdleHour(string idleHour) { DARABONBA_PTR_SET_VALUE(idleHour_, idleHour) };


      // imagePullSecrets Field Functions 
      bool hasImagePullSecrets() const { return this->imagePullSecrets_ != nullptr;};
      void deleteImagePullSecrets() { this->imagePullSecrets_ = nullptr;};
      inline string getImagePullSecrets() const { DARABONBA_PTR_GET_DEFAULT(imagePullSecrets_, "") };
      inline Data& setImagePullSecrets(string imagePullSecrets) { DARABONBA_PTR_SET_VALUE(imagePullSecrets_, imagePullSecrets) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Data& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // initContainersConfig Field Functions 
      bool hasInitContainersConfig() const { return this->initContainersConfig_ != nullptr;};
      void deleteInitContainersConfig() { this->initContainersConfig_ = nullptr;};
      inline const vector<Data::InitContainersConfig> & getInitContainersConfig() const { DARABONBA_PTR_GET_CONST(initContainersConfig_, vector<Data::InitContainersConfig>) };
      inline vector<Data::InitContainersConfig> getInitContainersConfig() { DARABONBA_PTR_GET(initContainersConfig_, vector<Data::InitContainersConfig>) };
      inline Data& setInitContainersConfig(const vector<Data::InitContainersConfig> & initContainersConfig) { DARABONBA_PTR_SET_VALUE(initContainersConfig_, initContainersConfig) };
      inline Data& setInitContainersConfig(vector<Data::InitContainersConfig> && initContainersConfig) { DARABONBA_PTR_SET_RVALUE(initContainersConfig_, initContainersConfig) };


      // isStateful Field Functions 
      bool hasIsStateful() const { return this->isStateful_ != nullptr;};
      void deleteIsStateful() { this->isStateful_ = nullptr;};
      inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
      inline Data& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


      // jarStartArgs Field Functions 
      bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
      void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
      inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
      inline Data& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


      // jarStartOptions Field Functions 
      bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
      void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
      inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
      inline Data& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


      // jdk Field Functions 
      bool hasJdk() const { return this->jdk_ != nullptr;};
      void deleteJdk() { this->jdk_ = nullptr;};
      inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
      inline Data& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


      // kafkaConfigs Field Functions 
      bool hasKafkaConfigs() const { return this->kafkaConfigs_ != nullptr;};
      void deleteKafkaConfigs() { this->kafkaConfigs_ = nullptr;};
      inline string getKafkaConfigs() const { DARABONBA_PTR_GET_DEFAULT(kafkaConfigs_, "") };
      inline Data& setKafkaConfigs(string kafkaConfigs) { DARABONBA_PTR_SET_VALUE(kafkaConfigs_, kafkaConfigs) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Data& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // liveness Field Functions 
      bool hasLiveness() const { return this->liveness_ != nullptr;};
      void deleteLiveness() { this->liveness_ = nullptr;};
      inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
      inline Data& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


      // lokiConfigs Field Functions 
      bool hasLokiConfigs() const { return this->lokiConfigs_ != nullptr;};
      void deleteLokiConfigs() { this->lokiConfigs_ = nullptr;};
      inline string getLokiConfigs() const { DARABONBA_PTR_GET_DEFAULT(lokiConfigs_, "") };
      inline Data& setLokiConfigs(string lokiConfigs) { DARABONBA_PTR_SET_VALUE(lokiConfigs_, lokiConfigs) };


      // maxSurgeInstanceRatio Field Functions 
      bool hasMaxSurgeInstanceRatio() const { return this->maxSurgeInstanceRatio_ != nullptr;};
      void deleteMaxSurgeInstanceRatio() { this->maxSurgeInstanceRatio_ = nullptr;};
      inline int32_t getMaxSurgeInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstanceRatio_, 0) };
      inline Data& setMaxSurgeInstanceRatio(int32_t maxSurgeInstanceRatio) { DARABONBA_PTR_SET_VALUE(maxSurgeInstanceRatio_, maxSurgeInstanceRatio) };


      // maxSurgeInstances Field Functions 
      bool hasMaxSurgeInstances() const { return this->maxSurgeInstances_ != nullptr;};
      void deleteMaxSurgeInstances() { this->maxSurgeInstances_ = nullptr;};
      inline int32_t getMaxSurgeInstances() const { DARABONBA_PTR_GET_DEFAULT(maxSurgeInstances_, 0) };
      inline Data& setMaxSurgeInstances(int32_t maxSurgeInstances) { DARABONBA_PTR_SET_VALUE(maxSurgeInstances_, maxSurgeInstances) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Data& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // microRegistration Field Functions 
      bool hasMicroRegistration() const { return this->microRegistration_ != nullptr;};
      void deleteMicroRegistration() { this->microRegistration_ = nullptr;};
      inline string getMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(microRegistration_, "") };
      inline Data& setMicroRegistration(string microRegistration) { DARABONBA_PTR_SET_VALUE(microRegistration_, microRegistration) };


      // microRegistrationConfig Field Functions 
      bool hasMicroRegistrationConfig() const { return this->microRegistrationConfig_ != nullptr;};
      void deleteMicroRegistrationConfig() { this->microRegistrationConfig_ = nullptr;};
      inline string getMicroRegistrationConfig() const { DARABONBA_PTR_GET_DEFAULT(microRegistrationConfig_, "") };
      inline Data& setMicroRegistrationConfig(string microRegistrationConfig) { DARABONBA_PTR_SET_VALUE(microRegistrationConfig_, microRegistrationConfig) };


      // microserviceEngineConfig Field Functions 
      bool hasMicroserviceEngineConfig() const { return this->microserviceEngineConfig_ != nullptr;};
      void deleteMicroserviceEngineConfig() { this->microserviceEngineConfig_ = nullptr;};
      inline string getMicroserviceEngineConfig() const { DARABONBA_PTR_GET_DEFAULT(microserviceEngineConfig_, "") };
      inline Data& setMicroserviceEngineConfig(string microserviceEngineConfig) { DARABONBA_PTR_SET_VALUE(microserviceEngineConfig_, microserviceEngineConfig) };


      // minReadyInstanceRatio Field Functions 
      bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
      void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
      inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
      inline Data& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


      // minReadyInstances Field Functions 
      bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
      void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
      inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
      inline Data& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


      // mountDesc Field Functions 
      bool hasMountDesc() const { return this->mountDesc_ != nullptr;};
      void deleteMountDesc() { this->mountDesc_ = nullptr;};
      inline const vector<Data::MountDesc> & getMountDesc() const { DARABONBA_PTR_GET_CONST(mountDesc_, vector<Data::MountDesc>) };
      inline vector<Data::MountDesc> getMountDesc() { DARABONBA_PTR_GET(mountDesc_, vector<Data::MountDesc>) };
      inline Data& setMountDesc(const vector<Data::MountDesc> & mountDesc) { DARABONBA_PTR_SET_VALUE(mountDesc_, mountDesc) };
      inline Data& setMountDesc(vector<Data::MountDesc> && mountDesc) { DARABONBA_PTR_SET_RVALUE(mountDesc_, mountDesc) };


      // mountHost Field Functions 
      bool hasMountHost() const { return this->mountHost_ != nullptr;};
      void deleteMountHost() { this->mountHost_ = nullptr;};
      inline string getMountHost() const { DARABONBA_PTR_GET_DEFAULT(mountHost_, "") };
      inline Data& setMountHost(string mountHost) { DARABONBA_PTR_SET_VALUE(mountHost_, mountHost) };


      // mseApplicationId Field Functions 
      bool hasMseApplicationId() const { return this->mseApplicationId_ != nullptr;};
      void deleteMseApplicationId() { this->mseApplicationId_ = nullptr;};
      inline string getMseApplicationId() const { DARABONBA_PTR_GET_DEFAULT(mseApplicationId_, "") };
      inline Data& setMseApplicationId(string mseApplicationId) { DARABONBA_PTR_SET_VALUE(mseApplicationId_, mseApplicationId) };


      // mseApplicationName Field Functions 
      bool hasMseApplicationName() const { return this->mseApplicationName_ != nullptr;};
      void deleteMseApplicationName() { this->mseApplicationName_ = nullptr;};
      inline string getMseApplicationName() const { DARABONBA_PTR_GET_DEFAULT(mseApplicationName_, "") };
      inline Data& setMseApplicationName(string mseApplicationName) { DARABONBA_PTR_SET_VALUE(mseApplicationName_, mseApplicationName) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // nasConfigs Field Functions 
      bool hasNasConfigs() const { return this->nasConfigs_ != nullptr;};
      void deleteNasConfigs() { this->nasConfigs_ = nullptr;};
      inline string getNasConfigs() const { DARABONBA_PTR_GET_DEFAULT(nasConfigs_, "") };
      inline Data& setNasConfigs(string nasConfigs) { DARABONBA_PTR_SET_VALUE(nasConfigs_, nasConfigs) };


      // nasId Field Functions 
      bool hasNasId() const { return this->nasId_ != nullptr;};
      void deleteNasId() { this->nasId_ = nullptr;};
      inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
      inline Data& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


      // newSaeVersion Field Functions 
      bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
      void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
      inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
      inline Data& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


      // oidcRoleName Field Functions 
      bool hasOidcRoleName() const { return this->oidcRoleName_ != nullptr;};
      void deleteOidcRoleName() { this->oidcRoleName_ = nullptr;};
      inline string getOidcRoleName() const { DARABONBA_PTR_GET_DEFAULT(oidcRoleName_, "") };
      inline Data& setOidcRoleName(string oidcRoleName) { DARABONBA_PTR_SET_VALUE(oidcRoleName_, oidcRoleName) };


      // ossAkId Field Functions 
      bool hasOssAkId() const { return this->ossAkId_ != nullptr;};
      void deleteOssAkId() { this->ossAkId_ = nullptr;};
      inline string getOssAkId() const { DARABONBA_PTR_GET_DEFAULT(ossAkId_, "") };
      inline Data& setOssAkId(string ossAkId) { DARABONBA_PTR_SET_VALUE(ossAkId_, ossAkId) };


      // ossAkSecret Field Functions 
      bool hasOssAkSecret() const { return this->ossAkSecret_ != nullptr;};
      void deleteOssAkSecret() { this->ossAkSecret_ = nullptr;};
      inline string getOssAkSecret() const { DARABONBA_PTR_GET_DEFAULT(ossAkSecret_, "") };
      inline Data& setOssAkSecret(string ossAkSecret) { DARABONBA_PTR_SET_VALUE(ossAkSecret_, ossAkSecret) };


      // ossMountDescs Field Functions 
      bool hasOssMountDescs() const { return this->ossMountDescs_ != nullptr;};
      void deleteOssMountDescs() { this->ossMountDescs_ = nullptr;};
      inline const vector<Data::OssMountDescs> & getOssMountDescs() const { DARABONBA_PTR_GET_CONST(ossMountDescs_, vector<Data::OssMountDescs>) };
      inline vector<Data::OssMountDescs> getOssMountDescs() { DARABONBA_PTR_GET(ossMountDescs_, vector<Data::OssMountDescs>) };
      inline Data& setOssMountDescs(const vector<Data::OssMountDescs> & ossMountDescs) { DARABONBA_PTR_SET_VALUE(ossMountDescs_, ossMountDescs) };
      inline Data& setOssMountDescs(vector<Data::OssMountDescs> && ossMountDescs) { DARABONBA_PTR_SET_RVALUE(ossMountDescs_, ossMountDescs) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // packageUrl Field Functions 
      bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
      void deletePackageUrl() { this->packageUrl_ = nullptr;};
      inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
      inline Data& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
      inline Data& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


      // php Field Functions 
      bool hasPhp() const { return this->php_ != nullptr;};
      void deletePhp() { this->php_ = nullptr;};
      inline string getPhp() const { DARABONBA_PTR_GET_DEFAULT(php_, "") };
      inline Data& setPhp(string php) { DARABONBA_PTR_SET_VALUE(php_, php) };


      // phpArmsConfigLocation Field Functions 
      bool hasPhpArmsConfigLocation() const { return this->phpArmsConfigLocation_ != nullptr;};
      void deletePhpArmsConfigLocation() { this->phpArmsConfigLocation_ = nullptr;};
      inline string getPhpArmsConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpArmsConfigLocation_, "") };
      inline Data& setPhpArmsConfigLocation(string phpArmsConfigLocation) { DARABONBA_PTR_SET_VALUE(phpArmsConfigLocation_, phpArmsConfigLocation) };


      // phpConfig Field Functions 
      bool hasPhpConfig() const { return this->phpConfig_ != nullptr;};
      void deletePhpConfig() { this->phpConfig_ = nullptr;};
      inline string getPhpConfig() const { DARABONBA_PTR_GET_DEFAULT(phpConfig_, "") };
      inline Data& setPhpConfig(string phpConfig) { DARABONBA_PTR_SET_VALUE(phpConfig_, phpConfig) };


      // phpConfigLocation Field Functions 
      bool hasPhpConfigLocation() const { return this->phpConfigLocation_ != nullptr;};
      void deletePhpConfigLocation() { this->phpConfigLocation_ = nullptr;};
      inline string getPhpConfigLocation() const { DARABONBA_PTR_GET_DEFAULT(phpConfigLocation_, "") };
      inline Data& setPhpConfigLocation(string phpConfigLocation) { DARABONBA_PTR_SET_VALUE(phpConfigLocation_, phpConfigLocation) };


      // postStart Field Functions 
      bool hasPostStart() const { return this->postStart_ != nullptr;};
      void deletePostStart() { this->postStart_ = nullptr;};
      inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
      inline Data& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


      // preStop Field Functions 
      bool hasPreStop() const { return this->preStop_ != nullptr;};
      void deletePreStop() { this->preStop_ = nullptr;};
      inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
      inline Data& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


      // programmingLanguage Field Functions 
      bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
      void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
      inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
      inline Data& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


      // pvtzDiscovery Field Functions 
      bool hasPvtzDiscovery() const { return this->pvtzDiscovery_ != nullptr;};
      void deletePvtzDiscovery() { this->pvtzDiscovery_ = nullptr;};
      inline string getPvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(pvtzDiscovery_, "") };
      inline Data& setPvtzDiscovery(string pvtzDiscovery) { DARABONBA_PTR_SET_VALUE(pvtzDiscovery_, pvtzDiscovery) };


      // python Field Functions 
      bool hasPython() const { return this->python_ != nullptr;};
      void deletePython() { this->python_ = nullptr;};
      inline string getPython() const { DARABONBA_PTR_GET_DEFAULT(python_, "") };
      inline Data& setPython(string python) { DARABONBA_PTR_SET_VALUE(python_, python) };


      // pythonModules Field Functions 
      bool hasPythonModules() const { return this->pythonModules_ != nullptr;};
      void deletePythonModules() { this->pythonModules_ = nullptr;};
      inline string getPythonModules() const { DARABONBA_PTR_GET_DEFAULT(pythonModules_, "") };
      inline Data& setPythonModules(string pythonModules) { DARABONBA_PTR_SET_VALUE(pythonModules_, pythonModules) };


      // readiness Field Functions 
      bool hasReadiness() const { return this->readiness_ != nullptr;};
      void deleteReadiness() { this->readiness_ = nullptr;};
      inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
      inline Data& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
      inline Data& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // secretMountDesc Field Functions 
      bool hasSecretMountDesc() const { return this->secretMountDesc_ != nullptr;};
      void deleteSecretMountDesc() { this->secretMountDesc_ = nullptr;};
      inline const vector<Data::SecretMountDesc> & getSecretMountDesc() const { DARABONBA_PTR_GET_CONST(secretMountDesc_, vector<Data::SecretMountDesc>) };
      inline vector<Data::SecretMountDesc> getSecretMountDesc() { DARABONBA_PTR_GET(secretMountDesc_, vector<Data::SecretMountDesc>) };
      inline Data& setSecretMountDesc(const vector<Data::SecretMountDesc> & secretMountDesc) { DARABONBA_PTR_SET_VALUE(secretMountDesc_, secretMountDesc) };
      inline Data& setSecretMountDesc(vector<Data::SecretMountDesc> && secretMountDesc) { DARABONBA_PTR_SET_RVALUE(secretMountDesc_, secretMountDesc) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // serviceTags Field Functions 
      bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
      void deleteServiceTags() { this->serviceTags_ = nullptr;};
      inline const map<string, string> & getServiceTags() const { DARABONBA_PTR_GET_CONST(serviceTags_, map<string, string>) };
      inline map<string, string> getServiceTags() { DARABONBA_PTR_GET(serviceTags_, map<string, string>) };
      inline Data& setServiceTags(const map<string, string> & serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };
      inline Data& setServiceTags(map<string, string> && serviceTags) { DARABONBA_PTR_SET_RVALUE(serviceTags_, serviceTags) };


      // sidecarContainersConfig Field Functions 
      bool hasSidecarContainersConfig() const { return this->sidecarContainersConfig_ != nullptr;};
      void deleteSidecarContainersConfig() { this->sidecarContainersConfig_ = nullptr;};
      inline const vector<Data::SidecarContainersConfig> & getSidecarContainersConfig() const { DARABONBA_PTR_GET_CONST(sidecarContainersConfig_, vector<Data::SidecarContainersConfig>) };
      inline vector<Data::SidecarContainersConfig> getSidecarContainersConfig() { DARABONBA_PTR_GET(sidecarContainersConfig_, vector<Data::SidecarContainersConfig>) };
      inline Data& setSidecarContainersConfig(const vector<Data::SidecarContainersConfig> & sidecarContainersConfig) { DARABONBA_PTR_SET_VALUE(sidecarContainersConfig_, sidecarContainersConfig) };
      inline Data& setSidecarContainersConfig(vector<Data::SidecarContainersConfig> && sidecarContainersConfig) { DARABONBA_PTR_SET_RVALUE(sidecarContainersConfig_, sidecarContainersConfig) };


      // slsConfigs Field Functions 
      bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
      void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
      inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
      inline Data& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


      // slsLogEnvTags Field Functions 
      bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
      void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
      inline string getSlsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
      inline Data& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


      // startupProbe Field Functions 
      bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
      void deleteStartupProbe() { this->startupProbe_ = nullptr;};
      inline string getStartupProbe() const { DARABONBA_PTR_GET_DEFAULT(startupProbe_, "") };
      inline Data& setStartupProbe(string startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };


      // swimlanePvtzDiscovery Field Functions 
      bool hasSwimlanePvtzDiscovery() const { return this->swimlanePvtzDiscovery_ != nullptr;};
      void deleteSwimlanePvtzDiscovery() { this->swimlanePvtzDiscovery_ = nullptr;};
      inline string getSwimlanePvtzDiscovery() const { DARABONBA_PTR_GET_DEFAULT(swimlanePvtzDiscovery_, "") };
      inline Data& setSwimlanePvtzDiscovery(string swimlanePvtzDiscovery) { DARABONBA_PTR_SET_VALUE(swimlanePvtzDiscovery_, swimlanePvtzDiscovery) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // terminationGracePeriodSeconds Field Functions 
      bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
      void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
      inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
      inline Data& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // tomcatConfig Field Functions 
      bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
      void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
      inline string getTomcatConfig() const { DARABONBA_PTR_GET_DEFAULT(tomcatConfig_, "") };
      inline Data& setTomcatConfig(string tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };


      // updateStrategy Field Functions 
      bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
      void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
      inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
      inline Data& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // warStartOptions Field Functions 
      bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
      void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
      inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
      inline Data& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


      // webContainer Field Functions 
      bool hasWebContainer() const { return this->webContainer_ != nullptr;};
      void deleteWebContainer() { this->webContainer_ = nullptr;};
      inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
      inline Data& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the RAM role that is required to pull images across accounts. For more information, see [Pull images across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/190675.html) and [Use a RAM role to grant permissions across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/223585.html).
      shared_ptr<string> acrAssumeRoleArn_ {};
      // The ID of the Container Registry Enterprise Edition instance.
      shared_ptr<string> acrInstanceId_ {};
      // The agent version.
      shared_ptr<string> agentVersion_ {};
      // The configuration of the Application Load Balancer (ALB) gateway readiness gate.
      shared_ptr<string> albIngressReadinessGate_ {};
      // The application description.
      shared_ptr<string> appDescription_ {};
      // The application ID.
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The type of the SAE application.
      // 
      // - micro_service
      // 
      // - web
      // 
      // - job
      shared_ptr<string> appSource_ {};
      // Specifies whether to bind an elastic IP address (EIP). Valid values:
      // 
      // - **true**: Bind an EIP.
      // 
      // - **false**: Do not bind an EIP.
      shared_ptr<bool> associateEip_ {};
      // The ID of the baseline application.
      shared_ptr<string> baseAppId_ {};
      // The interval between batches in a phased release. Unit: seconds.
      shared_ptr<int32_t> batchWaitTime_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The Cloud Monitor service ID.
      shared_ptr<string> cmsServiceId_ {};
      // The startup command of the image. The command must be an executable object that exists in the container. Example:
      // 
      // ```
      // command:
      //       - echo
      //       - abc
      //       - >
      //       - file0
      // ```
      // 
      // Based on the preceding example, `Command="echo", CommandArgs=["abc", ">", "file0"]`.
      shared_ptr<string> command_ {};
      // The arguments of the image startup command. The arguments are required by the **Command** parameter. Format:
      // 
      // `["a","b"]`
      // 
      // In the example of the **Command** parameter, `CommandArgs=["abc", ">", "file0"]`. The value `["abc", ">", "file0"]` must be converted into a string in the JSON array format. If this parameter is not required, you do not need to specify it.
      shared_ptr<string> commandArgs_ {};
      // The configurations of the ConfigMap.
      shared_ptr<vector<Data::ConfigMapMountDesc>> configMapMountDesc_ {};
      // The CPU required by each instance. Unit: millicores. The value cannot be 0. The following specifications are supported:
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
      // The custom mapping between a domain name and an IP address in the container. Valid values:
      // 
      // - **hostName**: The domain name or hostname.
      // 
      // - **ip**: The IP address.
      shared_ptr<string> customHostAlias_ {};
      // The type of the custom image. If you do not use a custom image, set this parameter to an empty string. Valid values:
      // 
      // - internet: a public image
      // 
      // - intranet: a private image
      shared_ptr<string> customImageNetworkType_ {};
      // The instance name of the application in the ASI cluster.
      shared_ptr<string> deploymentName_ {};
      // The disk storage size. Unit: GB.
      shared_ptr<int32_t> diskSize_ {};
      // The version of the .NET framework:
      // 
      // - .NET 3.1
      // 
      // - .NET 5.0
      // 
      // - .NET 6.0
      // 
      // - .NET 7.0
      // 
      // - .NET 8.0
      shared_ptr<string> dotnet_ {};
      // The version of the application runtime environment in the High-Speed Service Framework (HSF), such as an Ali-Tomcat container.
      shared_ptr<string> edasContainerVersion_ {};
      // The shared temporary storage.
      shared_ptr<vector<Data::EmptyDirDesc>> emptyDirDesc_ {};
      // Specifies whether to enable Application High Availability Service (AHAS). Valid values:
      // 
      // - **true**: Enable AHAS.
      // 
      // - **false**: Disable AHAS.
      shared_ptr<string> enableAhas_ {};
      // Specifies whether to enable the CPU burst feature:
      // 
      // - true: Enable
      // 
      // - false: Disable
      shared_ptr<string> enableCpuBurst_ {};
      // Specifies whether to enable the canary release rule. This rule is applicable only to applications that use the Spring Cloud and Dubbo frameworks. Valid values:
      // 
      // - **true**: Enable the canary release rule.
      // 
      // - **false**: Disable the canary release rule.
      shared_ptr<bool> enableGreyTagRoute_ {};
      // Specifies whether to enable the idle mode:
      // 
      // - true: Enable
      // 
      // - false: Disable
      shared_ptr<bool> enableIdle_ {};
      // Specifies whether to reuse the agent version configuration of the namespace.
      shared_ptr<bool> enableNamespaceAgentVersion_ {};
      // Specifies whether to enable the new ARMS feature:
      // 
      // - true: Enable
      // 
      // - false: Disable
      shared_ptr<bool> enableNewArms_ {};
      // Specifies whether to enable custom metric collection for Prometheus.
      shared_ptr<bool> enablePrometheus_ {};
      // The environment variables for the container. You can customize environment variables or reference a ConfigMap. To reference a ConfigMap, you must first create a ConfigMap. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
      // 
      // - Custom configuration
      // 
      //   - **name**: The name of the environment variable.
      // 
      //   - **value**: The value of the environment variable.
      // 
      // - Reference a configuration item
      // 
      //   - **name**: The name of the environment variable. You can reference a single key or all keys. To reference all keys, enter `sae-sys-configmap-all-<ConfigMap name>`, for example, `sae-sys-configmap-all-test1`.
      // 
      //   - **valueFrom**: The reference of the environment variable. Set the value to `configMapRef`.
      // 
      //   - **configMapId**: The ID of the ConfigMap.
      // 
      //   - **key**: The key. If you want to reference all keys, do not specify this parameter.
      shared_ptr<string> envs_ {};
      // The number of GPUs.
      shared_ptr<string> gpuCount_ {};
      // The GPU card type.
      shared_ptr<string> gpuType_ {};
      shared_ptr<string> headlessPvtzDiscovery_ {};
      shared_ptr<string> html_ {};
      shared_ptr<string> idleHour_ {};
      // The ID of the secret.
      shared_ptr<string> imagePullSecrets_ {};
      // The URL of the image. This parameter is required when **Package Type** is set to **Image**.
      shared_ptr<string> imageUrl_ {};
      // The configurations of the init container.
      shared_ptr<vector<Data::InitContainersConfig>> initContainersConfig_ {};
      // Specifies whether the application is a stateful application.
      shared_ptr<bool> isStateful_ {};
      // The arguments for starting the JAR package. The default startup command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
      shared_ptr<string> jarStartArgs_ {};
      // The options for starting the JAR package. The default startup command is: `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
      shared_ptr<string> jarStartOptions_ {};
      // The version of the Java Development Kit (JDK) that the deployment package requires. The following versions are supported:
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
      // This parameter is not supported when **Package Type** is set to **Image**.
      shared_ptr<string> jdk_ {};
      // The configurations for collecting logs to Kafka. Valid values:
      // 
      // - **kafkaEndpoint**: The endpoint of the Kafka API.
      // 
      // - **kafkaInstanceId**: The ID of the Kafka instance.
      // 
      // - **kafkaConfigs**: The configurations of one or more logs. For more information about the example and parameters, see the **kafkaConfigs** request parameter in this topic.
      shared_ptr<string> kafkaConfigs_ {};
      // The labels.
      shared_ptr<map<string, string>> labels_ {};
      // The liveness probe of the container. A container that fails the health check is shut down and restored. The following methods are supported:
      // 
      // - **exec**: example: `{"exec":{"command":["sh","-c","cat/home/admin/start.sh"]},"initialDelaySeconds":30,"periodSeconds":30,"timeoutSeconds":2}`
      // 
      // - **httpGet**: example:`{"httpGet":{"path":"/","port":18091,"scheme":"HTTP","isContainKeyWord":true,"keyWord":"SAE"},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
      // 
      // - **tcpSocket**: example:`{"tcpSocket":{"port":18091},"initialDelaySeconds":11,"periodSeconds":10,"timeoutSeconds":1}`
      // 
      // > You can use only one method for a health check.
      // 
      // The parameters are described as follows:
      // 
      // - **exec.command**: The command that is used for the health check.
      // 
      // - **httpGet.path**: The request path.
      // 
      // - **httpGet.scheme**: **HTTP** or **HTTPS**.
      // 
      // - **httpGet.isContainKeyWord**: Specifies whether the response must contain a keyword. A value of **true** indicates that the response must contain the keyword. A value of **false** indicates that the response does not need to contain the keyword. If you do not specify this parameter, this advanced feature is not used.
      // 
      // - **httpGet.keyWord**: The custom keyword. This parameter is required if you set the **isContainKeyWord** parameter.
      // 
      // - **tcpSocket.port**: The port that is used for the TCP connection check.
      // 
      // - **initialDelaySeconds**: The delay for the health check. Default value: 10. Unit: seconds.
      // 
      // - **periodSeconds**: The interval for the health check. Default value: 30. Unit: seconds.
      // 
      // - **timeoutSeconds**: The timeout period for the health check. Default value: 1. Unit: seconds. If you set this parameter to 0 or do not specify this parameter, the default value is used.
      shared_ptr<string> liveness_ {};
      // The Loki configurations.
      shared_ptr<string> lokiConfigs_ {};
      // The maximum surge instance ratio.
      shared_ptr<int32_t> maxSurgeInstanceRatio_ {};
      // The maximum number of surge instances.
      shared_ptr<int32_t> maxSurgeInstances_ {};
      // The memory required by each instance. Unit: MB. The value cannot be 0. This parameter corresponds to the \\`Cpu\\` parameter. The following specifications are supported:
      // 
      // - **1024**: corresponds to 500 millicores and 1,000 millicores.
      // 
      // - **2048**: corresponds to 500, 1,000, and 2,000 millicores.
      // 
      // - **4096**: corresponds to 1,000, 2,000, and 4,000 millicores.
      // 
      // - **8192**: corresponds to 2,000, 4,000, and 8,000 millicores.
      // 
      // - **12288**: corresponds to 12,000 millicores.
      // 
      // - **16384**: corresponds to 4,000, 8,000, and 16,000 millicores.
      // 
      // - **24576**: corresponds to 12,000 millicores.
      // 
      // - **32768**: corresponds to 16,000 millicores.
      // 
      // - **65536**: corresponds to 8,000, 16,000, and 32,000 millicores.
      // 
      // - **131072**: corresponds to 32,000 millicores.
      shared_ptr<int32_t> memory_ {};
      // The Nacos registry. Valid values:
      // 
      // - **0**: SAE built-in Nacos.
      // 
      // - **1**: User-created Nacos.
      // 
      // - **2**: MSE Nacos.
      shared_ptr<string> microRegistration_ {};
      // The configuration of the registry. This parameter takes effect only when the registry is MSE Nacos Enterprise Edition.
      shared_ptr<string> microRegistrationConfig_ {};
      // The configurations of microservice governance.
      // 
      // - Specifies whether to enable microservice governance (enable):
      // 
      //   - true: Enable
      // 
      //   - false: Disable
      // 
      // - The configuration of graceful start and shutdown (mseLosslessRule):
      // 
      //   - delayTime: The delay time.
      // 
      //   - enable: Specifies whether to enable graceful start. true indicates that graceful start is enabled. false indicates that graceful start is not enabled.
      // 
      //   - notice: Specifies whether to enable notifications. true indicates that notifications are enabled. false indicates that notifications are not enabled.
      // 
      //   - warmupTime: The warm-up duration for a small amount of traffic. Unit: seconds.
      shared_ptr<string> microserviceEngineConfig_ {};
      // The percentage of the minimum number of ready instances. Valid values:
      // 
      // - -1: The default value. This value indicates that the percentage is not used. If you do not specify this parameter, the system uses the default value **-1**.
      // 
      // - **0 to 100**: The percentage of the minimum number of ready instances. The value is rounded up. For example, if you set this parameter to **50**%, and you have five instances, the minimum number of ready instances is 3.
      // 
      // > If you specify both \\`MinReadyInstances\\` and **MinReadyInstanceRatio**, and the value of **MinReadyInstanceRatio** is not **-1**, the value of **MinReadyInstanceRatio** takes precedence. For example, if **MinReadyInstances** is set to **5** and **MinReadyInstanceRatio** is set to **50**, the minimum number of ready instances is calculated based on the value of **MinReadyInstanceRatio**.
      shared_ptr<int32_t> minReadyInstanceRatio_ {};
      // The minimum number of ready instances. Valid values:
      // 
      // - If you set this parameter to **0**, the application may be interrupted during an upgrade.
      // 
      // - If you set this parameter to -1, the system uses a recommended value, which is 25% of the total number of instances. For example, if you have five instances, the minimum number of ready instances is 2 after the value is rounded up.
      // 
      // > We recommend that you set the minimum number of ready instances to a value of 1 or greater to ensure that the application is not interrupted during a rolling update.
      shared_ptr<int32_t> minReadyInstances_ {};
      // The mount description.
      shared_ptr<vector<Data::MountDesc>> mountDesc_ {};
      // The mount target of the Apsara File Storage NAS file system in the application VPC. If you do not change the NAS configuration during a deployment, you do not need to specify this parameter. If you want to clear the NAS configuration, set this parameter to an empty string ("").
      shared_ptr<string> mountHost_ {};
      // The ID of the application in Microservices Engine (MSE).
      shared_ptr<string> mseApplicationId_ {};
      // The name of the application after the SAE service is registered with MSE.
      shared_ptr<string> mseApplicationName_ {};
      // The namespace ID.
      shared_ptr<string> namespaceId_ {};
      // The configurations for mounting a NAS file system.
      shared_ptr<string> nasConfigs_ {};
      // The ID of the NAS file system.
      shared_ptr<string> nasId_ {};
      // The application version.
      // 
      // - lite: Lightweight Edition
      // 
      // - std: Standard Edition
      // 
      // - pro: Professional Edition
      shared_ptr<string> newSaeVersion_ {};
      // The RAM role for identity authentication.
      // 
      // > You must create an OpenID Connect (OIDC) identity provider (IdP) and a RAM role for the IdP in the same region beforehand. For more information, see [Create an OIDC IdP](https://help.aliyun.com/document_detail/2331022.html) and [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/2331016.html).
      shared_ptr<string> oidcRoleName_ {};
      // The AccessKey ID that is used to read data from and write data to Object Storage Service (OSS).
      shared_ptr<string> ossAkId_ {};
      // The AccessKey secret that is used to read data from and write data to OSS.
      shared_ptr<string> ossAkSecret_ {};
      // The description of the OSS mount.
      shared_ptr<vector<Data::OssMountDescs>> ossMountDescs_ {};
      // The type of the application package. Valid values:
      // 
      // - If you deploy the application using Java, valid values are **FatJar**, **War**, and **Image**.
      // 
      // - If you deploy the application using PHP, the following values are supported:
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
      shared_ptr<string> packageType_ {};
      // The URL of the deployment package. If you upload the deployment package using SAE, note the following:
      // 
      // - You cannot download the package from this URL. Call the \\`GetPackageVersionAccessableUrl\\` operation to obtain a download URL that is valid for 10 minutes.
      // 
      // - SAE stores the package for a maximum of 90 days. After 90 days, the URL is not returned and you cannot download the package.
      shared_ptr<string> packageUrl_ {};
      // The version of the deployment package. This parameter is required when **Package Type** is set to **FatJar** or **War**.
      shared_ptr<string> packageVersion_ {};
      // The PHP version required for the deployment package. This parameter is not supported for images.
      shared_ptr<string> php_ {};
      // The mount path of the Application Real-Time Monitoring Service (ARMS) configuration file for a PHP application. Make sure that the PHP server loads the configuration file from this path.
      // 
      // SAE automatically renders the correct configuration file. You do not need to manage the content of the configuration file.
      shared_ptr<string> phpArmsConfigLocation_ {};
      // The content of the PHP configuration file.
      shared_ptr<string> phpConfig_ {};
      // The mount path of the PHP application startup configuration file. Make sure that the PHP server uses this configuration file to start.
      shared_ptr<string> phpConfigLocation_ {};
      // The script that runs after the container starts. The script runs immediately after the container is created. Example: `{"exec":{"command":["cat","/etc/group"]}}`
      shared_ptr<string> postStart_ {};
      // The script that runs before the container is stopped. The script runs before the container is deleted. Example: `{"exec":{"command":["cat","/etc/group"]}}`
      shared_ptr<string> preStop_ {};
      // The programming language of the application. Valid values:
      // 
      // - **java**: Java
      // 
      // - **php**: PHP
      // 
      // - **other**: other languages, such as Python, C++, Go, .NET, and Node.js.
      shared_ptr<string> programmingLanguage_ {};
      // Enables service registration and discovery for a Kubernetes Service.
      shared_ptr<string> pvtzDiscovery_ {};
      // The Python environment. PYTHON 3.9.15 is supported.
      shared_ptr<string> python_ {};
      // The dependencies for custom installation modules. By default, the dependencies that are defined in the requirements.txt file in the root directory are installed. If no software package is configured or a custom software package is used, you can specify the dependencies to be installed.
      shared_ptr<string> pythonModules_ {};
      // The readiness probe of the application. A container that fails the health check multiple times is shut down and restarted. A container that fails the health check does not receive traffic from a Server Load Balancer (SLB) instance. You can perform the health check using the **exec**, **httpGet**, or **tcpSocket** method. For more information, see the **Liveness** parameter.
      // 
      // > You can use only one method for a health check.
      shared_ptr<string> readiness_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The number of application instances.
      shared_ptr<int32_t> replicas_ {};
      // The resource type. Only `application` is supported.
      shared_ptr<string> resourceType_ {};
      // The description of the secret that you want to mount.
      shared_ptr<vector<Data::SecretMountDesc>> secretMountDesc_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The canary release tags of the application configuration.
      shared_ptr<map<string, string>> serviceTags_ {};
      // The configurations of the sidecar container.
      shared_ptr<vector<Data::SidecarContainersConfig>> sidecarContainersConfig_ {};
      // The configurations for collecting logs to Simple Log Service (SLS).
      // 
      // - To use an SLS resource that is automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
      // 
      // - To use a custom SLS resource: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
      // 
      // The parameters are described as follows:
      // 
      // - **projectName**: The name of the SLS project.
      // 
      // - **logDir**: The log path.
      // 
      // - **logType**: The log type. **stdout** indicates the standard output log of the container. You can specify only one log of this type. If you do not specify this parameter, file logs are collected.
      // 
      // - **logstoreName**: The name of the Logstore in SLS.
      // 
      // - **logtailName**: The name of the Logtail configuration in SLS. If you do not specify this parameter, a new Logtail configuration is created.
      // 
      // If you do not change the log collection configuration during a deployment, you do not need to specify this parameter. If you no longer need to use the log collection feature, set this parameter to an empty string ("") in the request.
      shared_ptr<string> slsConfigs_ {};
      // The environment tags for SLS logs.
      shared_ptr<string> slsLogEnvTags_ {};
      // The startup probe of the application.
      shared_ptr<string> startupProbe_ {};
      // The configuration for service registration and discovery based on a Kubernetes Service and for end-to-end canary release.
      shared_ptr<string> swimlanePvtzDiscovery_ {};
      // The tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The timeout period for a graceful shutdown. Default value: 30. Unit: seconds. The value can range from 1 to 300.
      shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
      // The time zone. Default value: **Asia/Shanghai**.
      shared_ptr<string> timezone_ {};
      // The Tomcat configuration. To delete the configuration, set this parameter to "" or "{}".
      // 
      // - **port**: The port number. The port number can range from 1024 to 65535. A port number smaller than 1024 requires the root permission to be operated. Because the container is configured with the administrator permission, specify a port number that is greater than 1024. If you do not configure this parameter, the default port 8080 is used.
      // 
      // - **contextPath**: The access path. The default value is the root directory "/".
      // 
      // - **maxThreads**: The maximum number of connections in the connection pool. Default value: 400.
      // 
      // - **uriEncoding**: The URI encoding scheme of Tomcat. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. If you do not set this parameter, the default value **ISO-8859-1** is used.
      // 
      // - **useBodyEncoding**: Specifies whether to use **BodyEncoding for URL**. Default value: **true**.
      shared_ptr<string> tomcatConfig_ {};
      // The deployment policy. If the minimum number of ready instances is 1, the value of the **UpdateStrategy** parameter is "". If the minimum number of ready instances is greater than 1, see the following examples:
      // 
      // - Canary release of one instance, phased release in two batches, automatic batching, and a 1-minute interval between batches: `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`
      // 
      // - Canary release of one instance and phased release in two batches with manual batching: `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`
      // 
      // - Phased release in two batches, automatic batching, and a 0-minute interval between batches: `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
      // 
      // The parameters are described as follows:
      // 
      // - **type**: The type of the release policy. Valid values: **GrayBatchUpdate** (canary release) and **BatchUpdate** (phased release).
      // 
      // - **batchUpdate**: The phased release policy.
      // 
      //   - **batch**: The number of release batches.
      // 
      //   - **releaseType**: The processing method for batches. Valid values: **auto** and **manual**.
      // 
      //   - **batchWaitTime**: The interval between batches. Unit: seconds.
      // 
      // - **grayUpdate**: The number of batches for the remaining instances after the canary release. This parameter is required when **type** is set to **GrayBatchUpdate**.
      shared_ptr<string> updateStrategy_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
      // The options for starting the WAR package. The default startup command is: `java $JAVA_OPTS $CATALINA_OPTS -Options org.apache.catalina.startup.Bootstrap "$@" start`.
      shared_ptr<string> warStartOptions_ {};
      // The Tomcat version that the deployment package requires. The following versions are supported:
      // 
      // - **apache-tomcat-7.0.91**
      // 
      // - **apache-tomcat-8.5.42**
      // 
      // This parameter is not supported when **Package Type** is set to **Image**.
      shared_ptr<string> webContainer_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationConfigResponseBody::Data) };
    inline DescribeApplicationConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationConfigResponseBody::Data) };
    inline DescribeApplicationConfigResponseBody& setData(const DescribeApplicationConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationConfigResponseBody& setData(DescribeApplicationConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationConfigResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // - **2xx**: The request is successful.
    // 
    // - **3xx**: The request is redirected.
    // 
    // - **4xx**: The request is invalid.
    // 
    // - **5xx**: A server error occurs.
    shared_ptr<string> code_ {};
    // The information about the application.
    shared_ptr<DescribeApplicationConfigResponseBody::Data> data_ {};
    // The error code.
    // 
    // - This parameter is not returned if the request is successful.
    // 
    // - If the request fails, this parameter is returned. For more information, see the "Error codes" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the application configuration was retrieved. Valid values:
    // 
    // - **true**: The configuration was retrieved.
    // 
    // - **false**: The configuration failed to be retrieved.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
