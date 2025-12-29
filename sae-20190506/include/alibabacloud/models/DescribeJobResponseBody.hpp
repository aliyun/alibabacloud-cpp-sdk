// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeJobResponseBody() = default ;
    DescribeJobResponseBody(const DescribeJobResponseBody &) = default ;
    DescribeJobResponseBody(DescribeJobResponseBody &&) = default ;
    DescribeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBody() = default ;
    DescribeJobResponseBody& operator=(const DescribeJobResponseBody &) = default ;
    DescribeJobResponseBody& operator=(DescribeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
        DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
        DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BackoffLimit, backoffLimit_);
        DARABONBA_PTR_TO_JSON(BestEffortType, bestEffortType_);
        DARABONBA_PTR_TO_JSON(Command, command_);
        DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
        DARABONBA_PTR_TO_JSON(ConcurrencyPolicy, concurrencyPolicy_);
        DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CustomHostAlias, customHostAlias_);
        DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
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
        DARABONBA_PTR_TO_JSON(PublicWebHookUrls, publicWebHookUrls_);
        DARABONBA_PTR_TO_JSON(Python, python_);
        DARABONBA_PTR_TO_JSON(PythonModules, pythonModules_);
        DARABONBA_PTR_TO_JSON(RefAppId, refAppId_);
        DARABONBA_PTR_TO_JSON(RefedAppIds, refedAppIds_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Slice, slice_);
        DARABONBA_PTR_TO_JSON(SliceEnvs, sliceEnvs_);
        DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
        DARABONBA_PTR_TO_JSON(Suspend, suspend_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
        DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcWebHookUrls, vpcWebHookUrls_);
        DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
        DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AcrAssumeRoleArn, acrAssumeRoleArn_);
        DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BackoffLimit, backoffLimit_);
        DARABONBA_PTR_FROM_JSON(BestEffortType, bestEffortType_);
        DARABONBA_PTR_FROM_JSON(Command, command_);
        DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
        DARABONBA_PTR_FROM_JSON(ConcurrencyPolicy, concurrencyPolicy_);
        DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CustomHostAlias, customHostAlias_);
        DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
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
        DARABONBA_PTR_FROM_JSON(PublicWebHookUrls, publicWebHookUrls_);
        DARABONBA_PTR_FROM_JSON(Python, python_);
        DARABONBA_PTR_FROM_JSON(PythonModules, pythonModules_);
        DARABONBA_PTR_FROM_JSON(RefAppId, refAppId_);
        DARABONBA_PTR_FROM_JSON(RefedAppIds, refedAppIds_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Slice, slice_);
        DARABONBA_PTR_FROM_JSON(SliceEnvs, sliceEnvs_);
        DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
        DARABONBA_PTR_FROM_JSON(Suspend, suspend_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
        DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcWebHookUrls, vpcWebHookUrls_);
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
        // The name of the bucket.
        shared_ptr<string> bucketName_ {};
        // The directory or object in OSS. If the specified directory or object does not exist, an error is returned.
        shared_ptr<string> bucketPath_ {};
        // The path of the container in SAE. The parameter value that you specified overwrites the original value. If the specified path does not exist, SAE automatically creates the path.
        shared_ptr<string> mountPath_ {};
        // Indicates whether the job template can use the container directory to read data from or write data to resources in the directory of the OSS bucket. Valid values:
        // 
        // *   **true**: The job template has the read-only permissions.
        // *   **false**: The job template has the read and write permissions.
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
        // The path on which the NAS file system is mounted.
        shared_ptr<string> mountPath_ {};
        // The directory in the NAS file system.
        shared_ptr<string> nasPath_ {};
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
        // The ConfigMap ID.
        shared_ptr<int64_t> configMapId_ {};
        // The ConfigMap name.
        shared_ptr<string> configMapName_ {};
        // The key-value pair that is stored in the ConfigMap.
        shared_ptr<string> key_ {};
        // The path on which the ConfigMap is mounted.
        shared_ptr<string> mountPath_ {};
      };

      virtual bool empty() const override { return this->acrAssumeRoleArn_ == nullptr
        && this->acrInstanceId_ == nullptr && this->appDescription_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->backoffLimit_ == nullptr
        && this->bestEffortType_ == nullptr && this->command_ == nullptr && this->commandArgs_ == nullptr && this->concurrencyPolicy_ == nullptr && this->configMapMountDesc_ == nullptr
        && this->cpu_ == nullptr && this->customHostAlias_ == nullptr && this->edasContainerVersion_ == nullptr && this->envs_ == nullptr && this->imagePullSecrets_ == nullptr
        && this->imageUrl_ == nullptr && this->jarStartArgs_ == nullptr && this->jarStartOptions_ == nullptr && this->jdk_ == nullptr && this->memory_ == nullptr
        && this->mountDesc_ == nullptr && this->mountHost_ == nullptr && this->namespaceId_ == nullptr && this->nasConfigs_ == nullptr && this->nasId_ == nullptr
        && this->ossAkId_ == nullptr && this->ossAkSecret_ == nullptr && this->ossMountDescs_ == nullptr && this->packageType_ == nullptr && this->packageUrl_ == nullptr
        && this->packageVersion_ == nullptr && this->phpConfig_ == nullptr && this->phpConfigLocation_ == nullptr && this->postStart_ == nullptr && this->preStop_ == nullptr
        && this->programmingLanguage_ == nullptr && this->publicWebHookUrls_ == nullptr && this->python_ == nullptr && this->pythonModules_ == nullptr && this->refAppId_ == nullptr
        && this->refedAppIds_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr && this->securityGroupId_ == nullptr && this->slice_ == nullptr
        && this->sliceEnvs_ == nullptr && this->slsConfigs_ == nullptr && this->suspend_ == nullptr && this->tags_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr
        && this->timeout_ == nullptr && this->timezone_ == nullptr && this->tomcatConfig_ == nullptr && this->triggerConfig_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcWebHookUrls_ == nullptr && this->warStartOptions_ == nullptr && this->webContainer_ == nullptr; };
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


      // backoffLimit Field Functions 
      bool hasBackoffLimit() const { return this->backoffLimit_ != nullptr;};
      void deleteBackoffLimit() { this->backoffLimit_ = nullptr;};
      inline int64_t getBackoffLimit() const { DARABONBA_PTR_GET_DEFAULT(backoffLimit_, 0L) };
      inline Data& setBackoffLimit(int64_t backoffLimit) { DARABONBA_PTR_SET_VALUE(backoffLimit_, backoffLimit) };


      // bestEffortType Field Functions 
      bool hasBestEffortType() const { return this->bestEffortType_ != nullptr;};
      void deleteBestEffortType() { this->bestEffortType_ = nullptr;};
      inline string getBestEffortType() const { DARABONBA_PTR_GET_DEFAULT(bestEffortType_, "") };
      inline Data& setBestEffortType(string bestEffortType) { DARABONBA_PTR_SET_VALUE(bestEffortType_, bestEffortType) };


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


      // concurrencyPolicy Field Functions 
      bool hasConcurrencyPolicy() const { return this->concurrencyPolicy_ != nullptr;};
      void deleteConcurrencyPolicy() { this->concurrencyPolicy_ = nullptr;};
      inline string getConcurrencyPolicy() const { DARABONBA_PTR_GET_DEFAULT(concurrencyPolicy_, "") };
      inline Data& setConcurrencyPolicy(string concurrencyPolicy) { DARABONBA_PTR_SET_VALUE(concurrencyPolicy_, concurrencyPolicy) };


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


      // edasContainerVersion Field Functions 
      bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
      void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
      inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
      inline Data& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


      // envs Field Functions 
      bool hasEnvs() const { return this->envs_ != nullptr;};
      void deleteEnvs() { this->envs_ = nullptr;};
      inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
      inline Data& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


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


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Data& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


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


      // publicWebHookUrls Field Functions 
      bool hasPublicWebHookUrls() const { return this->publicWebHookUrls_ != nullptr;};
      void deletePublicWebHookUrls() { this->publicWebHookUrls_ = nullptr;};
      inline const vector<string> & getPublicWebHookUrls() const { DARABONBA_PTR_GET_CONST(publicWebHookUrls_, vector<string>) };
      inline vector<string> getPublicWebHookUrls() { DARABONBA_PTR_GET(publicWebHookUrls_, vector<string>) };
      inline Data& setPublicWebHookUrls(const vector<string> & publicWebHookUrls) { DARABONBA_PTR_SET_VALUE(publicWebHookUrls_, publicWebHookUrls) };
      inline Data& setPublicWebHookUrls(vector<string> && publicWebHookUrls) { DARABONBA_PTR_SET_RVALUE(publicWebHookUrls_, publicWebHookUrls) };


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


      // refAppId Field Functions 
      bool hasRefAppId() const { return this->refAppId_ != nullptr;};
      void deleteRefAppId() { this->refAppId_ = nullptr;};
      inline string getRefAppId() const { DARABONBA_PTR_GET_DEFAULT(refAppId_, "") };
      inline Data& setRefAppId(string refAppId) { DARABONBA_PTR_SET_VALUE(refAppId_, refAppId) };


      // refedAppIds Field Functions 
      bool hasRefedAppIds() const { return this->refedAppIds_ != nullptr;};
      void deleteRefedAppIds() { this->refedAppIds_ = nullptr;};
      inline const vector<string> & getRefedAppIds() const { DARABONBA_PTR_GET_CONST(refedAppIds_, vector<string>) };
      inline vector<string> getRefedAppIds() { DARABONBA_PTR_GET(refedAppIds_, vector<string>) };
      inline Data& setRefedAppIds(const vector<string> & refedAppIds) { DARABONBA_PTR_SET_VALUE(refedAppIds_, refedAppIds) };
      inline Data& setRefedAppIds(vector<string> && refedAppIds) { DARABONBA_PTR_SET_RVALUE(refedAppIds_, refedAppIds) };


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


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // slice Field Functions 
      bool hasSlice() const { return this->slice_ != nullptr;};
      void deleteSlice() { this->slice_ = nullptr;};
      inline bool getSlice() const { DARABONBA_PTR_GET_DEFAULT(slice_, false) };
      inline Data& setSlice(bool slice) { DARABONBA_PTR_SET_VALUE(slice_, slice) };


      // sliceEnvs Field Functions 
      bool hasSliceEnvs() const { return this->sliceEnvs_ != nullptr;};
      void deleteSliceEnvs() { this->sliceEnvs_ = nullptr;};
      inline string getSliceEnvs() const { DARABONBA_PTR_GET_DEFAULT(sliceEnvs_, "") };
      inline Data& setSliceEnvs(string sliceEnvs) { DARABONBA_PTR_SET_VALUE(sliceEnvs_, sliceEnvs) };


      // slsConfigs Field Functions 
      bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
      void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
      inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
      inline Data& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


      // suspend Field Functions 
      bool hasSuspend() const { return this->suspend_ != nullptr;};
      void deleteSuspend() { this->suspend_ = nullptr;};
      inline bool getSuspend() const { DARABONBA_PTR_GET_DEFAULT(suspend_, false) };
      inline Data& setSuspend(bool suspend) { DARABONBA_PTR_SET_VALUE(suspend_, suspend) };


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


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline Data& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


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


      // triggerConfig Field Functions 
      bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
      void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
      inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
      inline Data& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


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


      // vpcWebHookUrls Field Functions 
      bool hasVpcWebHookUrls() const { return this->vpcWebHookUrls_ != nullptr;};
      void deleteVpcWebHookUrls() { this->vpcWebHookUrls_ = nullptr;};
      inline const vector<string> & getVpcWebHookUrls() const { DARABONBA_PTR_GET_CONST(vpcWebHookUrls_, vector<string>) };
      inline vector<string> getVpcWebHookUrls() { DARABONBA_PTR_GET(vpcWebHookUrls_, vector<string>) };
      inline Data& setVpcWebHookUrls(const vector<string> & vpcWebHookUrls) { DARABONBA_PTR_SET_VALUE(vpcWebHookUrls_, vpcWebHookUrls) };
      inline Data& setVpcWebHookUrls(vector<string> && vpcWebHookUrls) { DARABONBA_PTR_SET_RVALUE(vpcWebHookUrls_, vpcWebHookUrls) };


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
      // The Alibaba Cloud Resource Name (ARN) of the RAM role that is used to pull images across accounts. For more information, see [Pull images across Alibaba Cloud accounts](https://help.aliyun.com/document_detail/190675.html) and [Grant permissions across Alibaba Cloud accounts by using a RAM role](https://help.aliyun.com/document_detail/223585.html).
      shared_ptr<string> acrAssumeRoleArn_ {};
      // The ID of the Container Registry Enterprise Edition instance.
      shared_ptr<string> acrInstanceId_ {};
      // The description of the job template.
      shared_ptr<string> appDescription_ {};
      // The ID of the job template.
      shared_ptr<string> appId_ {};
      // The name of the job template.
      shared_ptr<string> appName_ {};
      // The number of times that the job was retried.
      shared_ptr<int64_t> backoffLimit_ {};
      shared_ptr<string> bestEffortType_ {};
      // The command that is used to start the image. The command must be an existing executable object in the container. Example:
      // 
      //     command:
      //           - echo
      //           - abc
      //           - >
      //           - file0
      // 
      // In this example, the Command parameter is set to `Command="echo", CommandArgs=["abc", ">", "file0"]`.
      shared_ptr<string> command_ {};
      // The arguments of the image startup command. This parameter contains the arguments that are required for **Command**. Format:
      // 
      // `["a","b"]`
      // 
      // In the preceding **Command** example, the CommandArgs parameter is set to `CommandArgs=["abc", ">", "file0"]`. The data type of `["abc", ">", "file0"]` must be an array of strings in the JSON format. If this parameter does not exist in the Command parameter, you do not need to configure it.
      shared_ptr<string> commandArgs_ {};
      // The concurrency policy of the job. Valid values:
      // 
      // *   **Forbid**: Concurrent running is prohibited. If the previous job is not completed, no new job is created.
      // *   **Allow**: Concurrent running is allowed.
      // *   **Replace**: If the previous job is not completed when the time to create a new job is reached, the new job replaces the previous job.
      shared_ptr<string> concurrencyPolicy_ {};
      // The details of the ConfigMap.
      shared_ptr<vector<Data::ConfigMapMountDesc>> configMapMountDesc_ {};
      // The CPU specifications required for each instance. Unit: millicore. This parameter cannot be set to 0. Valid values:
      // 
      // *   **500**
      // *   **1000**
      // *   **2000**
      // *   **4000**
      // *   **8000**
      // *   **16000**
      // *   **32000**
      shared_ptr<int32_t> cpu_ {};
      // The custom mapping between the hostname and IP address in the container. Valid values:
      // 
      // *   **hostName**: the domain name or hostname.
      // *   **ip**: the IP address.
      shared_ptr<string> customHostAlias_ {};
      // The version of the container, such as Ali-Tomcat, in which a job that is developed based on High-speed Service Framework (HSF) is deployed.
      shared_ptr<string> edasContainerVersion_ {};
      // The environment variables. You can configure custom environment variables or reference a ConfigMap. If you want to reference a ConfigMap, you must first create a ConfigMap. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
      // 
      // *   Custom configuration
      // 
      //     *   **name**: the name of the environment variable.
      //     *   **value**: the value of the environment variable.
      // 
      // *   Reference a ConfigMap
      // 
      //     *   **name**: the name of the environment variable. You can reference one or all keys. To reference all keys, specify `sae-sys-configmap-all-<ConfigMap name>`. Example: `sae-sys-configmap-all-test1`.
      //     *   **valueFrom**: the reference of the environment variable. Set the value to `configMapRef`.
      //     *   **configMapId**: the ID of the ConfigMap.
      //     *   **key**: the key. If you want to reference all keys, you do not need to configure this parameter.
      shared_ptr<string> envs_ {};
      // The ID of the corresponding secret.
      shared_ptr<string> imagePullSecrets_ {};
      // The URL of the image. This parameter is returned only if **PackageType** is set to **Image**.
      shared_ptr<string> imageUrl_ {};
      // The arguments in the JAR package. The arguments are used to start the job. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
      shared_ptr<string> jarStartArgs_ {};
      // The option settings in the JAR package. The settings are used to start the job. The default startup command is `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`.
      shared_ptr<string> jarStartOptions_ {};
      // The version of the Java Development Kit (JDK) on which the deployment package of the application depends. The following versions are supported:
      // 
      // *   **Open JDK 8**
      // *   **Open JDK 7**
      // *   **Dragonwell 11**
      // *   **Dragonwell 8**
      // *   **openjdk-8u191-jdk-alpine3.9**
      // *   **openjdk-7u201-jdk-alpine3.9**
      // 
      // This parameter is not returned if **PackageType** is set to **Image**.
      shared_ptr<string> jdk_ {};
      // The size of memory that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
      // 
      // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
      // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
      // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
      // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
      // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
      // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
      // *   This parameter is set to **24567** if the Cpu parameter is set to 12000.
      // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
      // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
      // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
      shared_ptr<int32_t> memory_ {};
      // The details of the mounted NAS file system.
      shared_ptr<vector<Data::MountDesc>> mountDesc_ {};
      // The mount target of the Apsara File Storage NAS (NAS) file system in the virtual private cloud (VPC) where the job template is deployed. If you do not need to modify the NAS configurations when you deploy the job template, configure the **MountHost** parameter only in the first request. You do not need to include this parameter in subsequent requests. If you no longer need to use NAS, leave the **MountHost** parameter empty in the request.
      shared_ptr<string> mountHost_ {};
      // The namespace ID.
      shared_ptr<string> namespaceId_ {};
      // The configurations for mounting the NAS file system.
      shared_ptr<string> nasConfigs_ {};
      // The ID of the NAS file system.
      shared_ptr<string> nasId_ {};
      // The AccessKey ID that is used to read data from and write data to Object Storage Service (OSS).
      shared_ptr<string> ossAkId_ {};
      // The AccessKey secret that is used to read data from and write data to OSS.
      shared_ptr<string> ossAkSecret_ {};
      // The description of mounted OSS buckets.
      shared_ptr<vector<Data::OssMountDescs>> ossMountDescs_ {};
      // The type of the deployment package. Valid values:
      // 
      // *   If you deploy a Java job template, you can set this parameter to **FatJar**, **War**, or **Image**.
      // 
      // *   If you deploy a PHP job template, the following types are available:
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
      // 
      // *   If you deploy a Python job template, you can set this parameter to **PythonZip** or **Image**.
      shared_ptr<string> packageType_ {};
      // The URL of the deployment package. This parameter is returned only if **PackageType** is set to **FatJar** or **War**.
      shared_ptr<string> packageUrl_ {};
      // The version of the deployment package. This parameter is required only if **PackageType** is set to **FatJar** or **War**.
      shared_ptr<string> packageVersion_ {};
      // The details of the PHP configuration file.
      shared_ptr<string> phpConfig_ {};
      // The path on which the PHP configuration file for job startup is mounted. Make sure that the PHP server uses this configuration file during the startup.
      shared_ptr<string> phpConfigLocation_ {};
      // The script that is run immediately after the container is started. Example: `{"exec":{"command":["cat","/etc/group"\\]}}`
      shared_ptr<string> postStart_ {};
      // The script that is run before the container is stopped. Example: `{"exec":{"command":["cat","/etc/group"\\]}}`
      shared_ptr<string> preStop_ {};
      // The programming language in which the job template is created. Valid values:
      // 
      // *   **java**: Java
      // *   **php**: PHP
      // *   **python**: Python
      // *   **other**: other programming languages, such as C++, Go, .NET, and Node.js
      shared_ptr<string> programmingLanguage_ {};
      // The Internet request URLs of one-time jobs.
      shared_ptr<vector<string>> publicWebHookUrls_ {};
      // The Python environment. PYTHON 3.9.15 is supported.
      shared_ptr<string> python_ {};
      // The configurations for installing custom module dependencies. By default, the dependencies defined by the requirements.txt file in the root directory are installed. If no software package is configured, you can specify dependencies based on your business requirements.
      shared_ptr<string> pythonModules_ {};
      // The ID of the job template that you reference.
      shared_ptr<string> refAppId_ {};
      // The IDs of the referenced job templates.
      shared_ptr<vector<string>> refedAppIds_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The number of job instances.
      shared_ptr<int32_t> replicas_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // Indicates whether job sharding is enabled.
      shared_ptr<bool> slice_ {};
      // The parameters of job sharding.
      shared_ptr<string> sliceEnvs_ {};
      // The logging configurations of Log Service.
      // 
      // *   To use Log Service resources that are automatically created by SAE, set this parameter to `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
      // *   To use custom Log Service resources, set this parameter to `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
      // 
      // Parameter description:
      // 
      // *   **projectName**: the name of the Log Service project.
      // *   **logDir**: the path in which logs are stored.
      // *   **logType**: the log type. **stdout**: the standard output (stdout) log of the container. Only one stdout value for this parameter can be specified. If this parameter is not configured, file logs are collected.
      // *   **logstoreName**: the name of the Logstore in Log Service.
      // *   **logtailName**: the name of the Logtail in Log Service. If this parameter is not configured, a new Logtail is created.
      // 
      // If you do not need to modify the logging configurations when you deploy the application, configure **SlsConfigs** only in the first request. If you no longer need to use Log Service, leave **SlsConfigs** empty in the request.
      shared_ptr<string> slsConfigs_ {};
      // Indicates whether the job template is suspended.
      shared_ptr<bool> suspend_ {};
      // The tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The timeout period for a graceful shutdown. Default value: 30. Unit: seconds. Valid values: 1 to 300.
      shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
      // The timeout period of the job. Unit: seconds.
      shared_ptr<int64_t> timeout_ {};
      // The time zone. Default value: **Asia/Shanghai**.
      shared_ptr<string> timezone_ {};
      // The Tomcat configuration. If you want to delete the configuration, set this parameter to {} or leave this parameter empty. Parameter description:
      // 
      // *   **port**: the port number. Valid values: 1024 to 65535. The root permissions are required to perform operations on ports whose number is smaller than 1024. Enter a value that ranges from 1025 to 65535 because the container has only the admin permissions. If this parameter is not configured, the default value 8080 is used.
      // *   **contextPath**: the path. Default value: /. The value indicates the root directory.
      // *   **maxThreads**: the maximum number of connections in the connection pool. Default value: 400.
      // *   **uriEncoding**: the URI encoding scheme in the Tomcat container. Valid values: **UTF-8**, **ISO-8859-1**, **GBK**, and **GB2312**. If this parameter is not configured, the default value **ISO-8859-1** is used.
      // *   **useBodyEncoding**: indicates whether to use the encoding scheme that is specified by **BodyEncoding for URL**. Default value: **true**.
      shared_ptr<string> tomcatConfig_ {};
      shared_ptr<string> triggerConfig_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
      // The internal request URLs for one-time jobs.
      shared_ptr<vector<string>> vpcWebHookUrls_ {};
      // The option settings in the WAR package. The settings are used to start the job. The default startup command is `java $JAVA_OPTS $CATALINA_OPTS -Options org.apache.catalina.startup.Bootstrap "$@" start`.
      shared_ptr<string> warStartOptions_ {};
      // The version of the Tomcat container on which the deployment package depends. The following versions are supported:
      // 
      // *   **apache-tomcat-7.0.91**
      // *   **apache-tomcat-8.5.42**
      // 
      // This parameter is not returned if **PackageType** is set to **Image**.
      shared_ptr<string> webContainer_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeJobResponseBody::Data) };
    inline DescribeJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeJobResponseBody::Data) };
    inline DescribeJobResponseBody& setData(const DescribeJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJobResponseBody& setData(DescribeJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeJobResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information of the job template.
    shared_ptr<DescribeJobResponseBody::Data> data_ {};
    // The error code returned. Take note of the following rules:
    // 
    // *   If the call is successful, **ErrorCode** is not returned.
    // *   If the call fails, **ErrorCode** is returned. For more information, see the "**Error codes**" section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the configurations of the job template were obtained. Valid values:
    // 
    // *   **true**: The configurations were obtained.
    // *   **false**: The configurations failed to be obtained.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
