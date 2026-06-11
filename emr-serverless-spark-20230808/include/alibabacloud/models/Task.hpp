// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASK_HPP_
#define ALIBABACLOUD_MODELS_TASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/SparkConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class Task : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Task& obj) { 
      DARABONBA_PTR_TO_JSON(archives, archives_);
      DARABONBA_PTR_TO_JSON(artifactUrl, artifactUrl_);
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(categoryBizId, categoryBizId_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(credential, credential_);
      DARABONBA_PTR_TO_JSON(defaultCatalogId, defaultCatalogId_);
      DARABONBA_PTR_TO_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_TO_JSON(defaultResourceQueueId, defaultResourceQueueId_);
      DARABONBA_PTR_TO_JSON(defaultSqlComputeId, defaultSqlComputeId_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(extraArtifactIds, extraArtifactIds_);
      DARABONBA_PTR_TO_JSON(extraSparkSubmitParams, extraSparkSubmitParams_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(hasChanged, hasChanged_);
      DARABONBA_PTR_TO_JSON(hasCommited, hasCommited_);
      DARABONBA_PTR_TO_JSON(isStreaming, isStreaming_);
      DARABONBA_PTR_TO_JSON(jars, jars_);
      DARABONBA_PTR_TO_JSON(kernelId, kernelId_);
      DARABONBA_PTR_TO_JSON(lastRunResourceQueueId, lastRunResourceQueueId_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(pyFiles, pyFiles_);
      DARABONBA_PTR_TO_JSON(rayActiveDeadlineSeconds, rayActiveDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(rayBackoffLimit, rayBackoffLimit_);
      DARABONBA_PTR_TO_JSON(rayEntrypoint, rayEntrypoint_);
      DARABONBA_PTR_TO_JSON(rayEntrypointMemory, rayEntrypointMemory_);
      DARABONBA_PTR_TO_JSON(rayEntrypointNumCpus, rayEntrypointNumCpus_);
      DARABONBA_PTR_TO_JSON(rayEntrypointNumGpus, rayEntrypointNumGpus_);
      DARABONBA_PTR_TO_JSON(rayEntrypointResources, rayEntrypointResources_);
      DARABONBA_PTR_TO_JSON(rayExtraParam, rayExtraParam_);
      DARABONBA_PTR_TO_JSON(rayHeadSpec, rayHeadSpec_);
      DARABONBA_PTR_TO_JSON(rayMetadataJson, rayMetadataJson_);
      DARABONBA_PTR_TO_JSON(rayNetworkServiceName, rayNetworkServiceName_);
      DARABONBA_PTR_TO_JSON(rayRuntimeEnvJson, rayRuntimeEnvJson_);
      DARABONBA_PTR_TO_JSON(rayShutdownAfterJobFinishes, rayShutdownAfterJobFinishes_);
      DARABONBA_PTR_TO_JSON(raySubmissionMode, raySubmissionMode_);
      DARABONBA_PTR_TO_JSON(rayTtlSecondsAfterFinished, rayTtlSecondsAfterFinished_);
      DARABONBA_PTR_TO_JSON(rayVersion, rayVersion_);
      DARABONBA_PTR_TO_JSON(rayVolumeIds, rayVolumeIds_);
      DARABONBA_PTR_TO_JSON(rayWorkerSpec, rayWorkerSpec_);
      DARABONBA_PTR_TO_JSON(rayWorkingDir, rayWorkingDir_);
      DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_TO_JSON(sparkArgs, sparkArgs_);
      DARABONBA_PTR_TO_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_TO_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_TO_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_TO_JSON(sparkEntrypoint, sparkEntrypoint_);
      DARABONBA_PTR_TO_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_TO_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_TO_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_TO_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_TO_JSON(sparkSubmitClause, sparkSubmitClause_);
      DARABONBA_PTR_TO_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Task& obj) { 
      DARABONBA_PTR_FROM_JSON(archives, archives_);
      DARABONBA_PTR_FROM_JSON(artifactUrl, artifactUrl_);
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(categoryBizId, categoryBizId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(credential, credential_);
      DARABONBA_PTR_FROM_JSON(defaultCatalogId, defaultCatalogId_);
      DARABONBA_PTR_FROM_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_FROM_JSON(defaultResourceQueueId, defaultResourceQueueId_);
      DARABONBA_PTR_FROM_JSON(defaultSqlComputeId, defaultSqlComputeId_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(extraArtifactIds, extraArtifactIds_);
      DARABONBA_PTR_FROM_JSON(extraSparkSubmitParams, extraSparkSubmitParams_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(hasChanged, hasChanged_);
      DARABONBA_PTR_FROM_JSON(hasCommited, hasCommited_);
      DARABONBA_PTR_FROM_JSON(isStreaming, isStreaming_);
      DARABONBA_PTR_FROM_JSON(jars, jars_);
      DARABONBA_PTR_FROM_JSON(kernelId, kernelId_);
      DARABONBA_PTR_FROM_JSON(lastRunResourceQueueId, lastRunResourceQueueId_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(pyFiles, pyFiles_);
      DARABONBA_PTR_FROM_JSON(rayActiveDeadlineSeconds, rayActiveDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(rayBackoffLimit, rayBackoffLimit_);
      DARABONBA_PTR_FROM_JSON(rayEntrypoint, rayEntrypoint_);
      DARABONBA_PTR_FROM_JSON(rayEntrypointMemory, rayEntrypointMemory_);
      DARABONBA_PTR_FROM_JSON(rayEntrypointNumCpus, rayEntrypointNumCpus_);
      DARABONBA_PTR_FROM_JSON(rayEntrypointNumGpus, rayEntrypointNumGpus_);
      DARABONBA_PTR_FROM_JSON(rayEntrypointResources, rayEntrypointResources_);
      DARABONBA_PTR_FROM_JSON(rayExtraParam, rayExtraParam_);
      DARABONBA_PTR_FROM_JSON(rayHeadSpec, rayHeadSpec_);
      DARABONBA_PTR_FROM_JSON(rayMetadataJson, rayMetadataJson_);
      DARABONBA_PTR_FROM_JSON(rayNetworkServiceName, rayNetworkServiceName_);
      DARABONBA_PTR_FROM_JSON(rayRuntimeEnvJson, rayRuntimeEnvJson_);
      DARABONBA_PTR_FROM_JSON(rayShutdownAfterJobFinishes, rayShutdownAfterJobFinishes_);
      DARABONBA_PTR_FROM_JSON(raySubmissionMode, raySubmissionMode_);
      DARABONBA_PTR_FROM_JSON(rayTtlSecondsAfterFinished, rayTtlSecondsAfterFinished_);
      DARABONBA_PTR_FROM_JSON(rayVersion, rayVersion_);
      DARABONBA_PTR_FROM_JSON(rayVolumeIds, rayVolumeIds_);
      DARABONBA_PTR_FROM_JSON(rayWorkerSpec, rayWorkerSpec_);
      DARABONBA_PTR_FROM_JSON(rayWorkingDir, rayWorkingDir_);
      DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_FROM_JSON(sparkArgs, sparkArgs_);
      DARABONBA_PTR_FROM_JSON(sparkConf, sparkConf_);
      DARABONBA_PTR_FROM_JSON(sparkDriverCores, sparkDriverCores_);
      DARABONBA_PTR_FROM_JSON(sparkDriverMemory, sparkDriverMemory_);
      DARABONBA_PTR_FROM_JSON(sparkEntrypoint, sparkEntrypoint_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorCores, sparkExecutorCores_);
      DARABONBA_PTR_FROM_JSON(sparkExecutorMemory, sparkExecutorMemory_);
      DARABONBA_PTR_FROM_JSON(sparkLogLevel, sparkLogLevel_);
      DARABONBA_PTR_FROM_JSON(sparkLogPath, sparkLogPath_);
      DARABONBA_PTR_FROM_JSON(sparkSubmitClause, sparkSubmitClause_);
      DARABONBA_PTR_FROM_JSON(sparkVersion, sparkVersion_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Task() = default ;
    Task(const Task &) = default ;
    Task(Task &&) = default ;
    Task(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Task() = default ;
    Task& operator=(const Task &) = default ;
    Task& operator=(Task &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RayWorkerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayWorkerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(minReplica, minReplica_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
      };
      friend void from_json(const Darabonba::Json& j, RayWorkerSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(minReplica, minReplica_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
      };
      RayWorkerSpec() = default ;
      RayWorkerSpec(const RayWorkerSpec &) = default ;
      RayWorkerSpec(RayWorkerSpec &&) = default ;
      RayWorkerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayWorkerSpec() = default ;
      RayWorkerSpec& operator=(const RayWorkerSpec &) = default ;
      RayWorkerSpec& operator=(RayWorkerSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpuSpec_ == nullptr && this->groupName_ == nullptr && this->maxReplica_ == nullptr && this->memory_ == nullptr && this->minReplica_ == nullptr
        && this->queueName_ == nullptr && this->replica_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline RayWorkerSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline RayWorkerSpec& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline RayWorkerSpec& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // maxReplica Field Functions 
      bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
      void deleteMaxReplica() { this->maxReplica_ = nullptr;};
      inline int32_t getMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
      inline RayWorkerSpec& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline RayWorkerSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minReplica Field Functions 
      bool hasMinReplica() const { return this->minReplica_ != nullptr;};
      void deleteMinReplica() { this->minReplica_ = nullptr;};
      inline int32_t getMinReplica() const { DARABONBA_PTR_GET_DEFAULT(minReplica_, 0) };
      inline RayWorkerSpec& setMinReplica(int32_t minReplica) { DARABONBA_PTR_SET_VALUE(minReplica_, minReplica) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline RayWorkerSpec& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline RayWorkerSpec& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    protected:
      shared_ptr<string> cpu_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int32_t> maxReplica_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<int32_t> minReplica_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<int32_t> replica_ {};
    };

    class RayHeadSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayHeadSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
      };
      friend void from_json(const Darabonba::Json& j, RayHeadSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
      };
      RayHeadSpec() = default ;
      RayHeadSpec(const RayHeadSpec &) = default ;
      RayHeadSpec(RayHeadSpec &&) = default ;
      RayHeadSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayHeadSpec() = default ;
      RayHeadSpec& operator=(const RayHeadSpec &) = default ;
      RayHeadSpec& operator=(RayHeadSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->enableAutoScaling_ == nullptr && this->gpuSpec_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr
        && this->replica_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline RayHeadSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // enableAutoScaling Field Functions 
      bool hasEnableAutoScaling() const { return this->enableAutoScaling_ != nullptr;};
      void deleteEnableAutoScaling() { this->enableAutoScaling_ = nullptr;};
      inline bool getEnableAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(enableAutoScaling_, false) };
      inline RayHeadSpec& setEnableAutoScaling(bool enableAutoScaling) { DARABONBA_PTR_SET_VALUE(enableAutoScaling_, enableAutoScaling) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline RayHeadSpec& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // idleTimeoutSeconds Field Functions 
      bool hasIdleTimeoutSeconds() const { return this->idleTimeoutSeconds_ != nullptr;};
      void deleteIdleTimeoutSeconds() { this->idleTimeoutSeconds_ = nullptr;};
      inline int64_t getIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutSeconds_, 0L) };
      inline RayHeadSpec& setIdleTimeoutSeconds(int64_t idleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(idleTimeoutSeconds_, idleTimeoutSeconds) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline RayHeadSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline RayHeadSpec& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline RayHeadSpec& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    protected:
      shared_ptr<string> cpu_ {};
      shared_ptr<bool> enableAutoScaling_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<int64_t> idleTimeoutSeconds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<int32_t> replica_ {};
    };

    class Credential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credential& obj) { 
        DARABONBA_PTR_TO_JSON(accessId, accessId_);
        DARABONBA_PTR_TO_JSON(accessUrl, accessUrl_);
        DARABONBA_PTR_TO_JSON(expire, expire_);
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(path, path_);
        DARABONBA_PTR_TO_JSON(policy, policy_);
        DARABONBA_PTR_TO_JSON(securityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, Credential& obj) { 
        DARABONBA_PTR_FROM_JSON(accessId, accessId_);
        DARABONBA_PTR_FROM_JSON(accessUrl, accessUrl_);
        DARABONBA_PTR_FROM_JSON(expire, expire_);
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(path, path_);
        DARABONBA_PTR_FROM_JSON(policy, policy_);
        DARABONBA_PTR_FROM_JSON(securityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(signature, signature_);
      };
      Credential() = default ;
      Credential(const Credential &) = default ;
      Credential(Credential &&) = default ;
      Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credential() = default ;
      Credential& operator=(const Credential &) = default ;
      Credential& operator=(Credential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->accessUrl_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->path_ == nullptr && this->policy_ == nullptr
        && this->securityToken_ == nullptr && this->signature_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline Credential& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // accessUrl Field Functions 
      bool hasAccessUrl() const { return this->accessUrl_ != nullptr;};
      void deleteAccessUrl() { this->accessUrl_ = nullptr;};
      inline string getAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(accessUrl_, "") };
      inline Credential& setAccessUrl(string accessUrl) { DARABONBA_PTR_SET_VALUE(accessUrl_, accessUrl) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
      inline Credential& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Credential& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Credential& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Credential& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Credential& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Credential& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessId_ {};
      // The access URL.
      shared_ptr<string> accessUrl_ {};
      // The expiration time.
      shared_ptr<int64_t> expire_ {};
      // The domain name.
      shared_ptr<string> host_ {};
      // The path.
      shared_ptr<string> path_ {};
      // The policy.
      shared_ptr<string> policy_ {};
      // The security token.
      shared_ptr<string> securityToken_ {};
      // The signature.
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->archives_ == nullptr
        && this->artifactUrl_ == nullptr && this->bizId_ == nullptr && this->categoryBizId_ == nullptr && this->content_ == nullptr && this->creator_ == nullptr
        && this->credential_ == nullptr && this->defaultCatalogId_ == nullptr && this->defaultDatabase_ == nullptr && this->defaultResourceQueueId_ == nullptr && this->defaultSqlComputeId_ == nullptr
        && this->deploymentId_ == nullptr && this->environmentId_ == nullptr && this->extraArtifactIds_ == nullptr && this->extraSparkSubmitParams_ == nullptr && this->files_ == nullptr
        && this->fusion_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->hasChanged_ == nullptr && this->hasCommited_ == nullptr
        && this->isStreaming_ == nullptr && this->jars_ == nullptr && this->kernelId_ == nullptr && this->lastRunResourceQueueId_ == nullptr && this->modifier_ == nullptr
        && this->name_ == nullptr && this->params_ == nullptr && this->pyFiles_ == nullptr && this->rayActiveDeadlineSeconds_ == nullptr && this->rayBackoffLimit_ == nullptr
        && this->rayEntrypoint_ == nullptr && this->rayEntrypointMemory_ == nullptr && this->rayEntrypointNumCpus_ == nullptr && this->rayEntrypointNumGpus_ == nullptr && this->rayEntrypointResources_ == nullptr
        && this->rayExtraParam_ == nullptr && this->rayHeadSpec_ == nullptr && this->rayMetadataJson_ == nullptr && this->rayNetworkServiceName_ == nullptr && this->rayRuntimeEnvJson_ == nullptr
        && this->rayShutdownAfterJobFinishes_ == nullptr && this->raySubmissionMode_ == nullptr && this->rayTtlSecondsAfterFinished_ == nullptr && this->rayVersion_ == nullptr && this->rayVolumeIds_ == nullptr
        && this->rayWorkerSpec_ == nullptr && this->rayWorkingDir_ == nullptr && this->sessionClusterId_ == nullptr && this->sparkArgs_ == nullptr && this->sparkConf_ == nullptr
        && this->sparkDriverCores_ == nullptr && this->sparkDriverMemory_ == nullptr && this->sparkEntrypoint_ == nullptr && this->sparkExecutorCores_ == nullptr && this->sparkExecutorMemory_ == nullptr
        && this->sparkLogLevel_ == nullptr && this->sparkLogPath_ == nullptr && this->sparkSubmitClause_ == nullptr && this->sparkVersion_ == nullptr && this->tags_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr; };
    // archives Field Functions 
    bool hasArchives() const { return this->archives_ != nullptr;};
    void deleteArchives() { this->archives_ = nullptr;};
    inline const vector<string> & getArchives() const { DARABONBA_PTR_GET_CONST(archives_, vector<string>) };
    inline vector<string> getArchives() { DARABONBA_PTR_GET(archives_, vector<string>) };
    inline Task& setArchives(const vector<string> & archives) { DARABONBA_PTR_SET_VALUE(archives_, archives) };
    inline Task& setArchives(vector<string> && archives) { DARABONBA_PTR_SET_RVALUE(archives_, archives) };


    // artifactUrl Field Functions 
    bool hasArtifactUrl() const { return this->artifactUrl_ != nullptr;};
    void deleteArtifactUrl() { this->artifactUrl_ = nullptr;};
    inline string getArtifactUrl() const { DARABONBA_PTR_GET_DEFAULT(artifactUrl_, "") };
    inline Task& setArtifactUrl(string artifactUrl) { DARABONBA_PTR_SET_VALUE(artifactUrl_, artifactUrl) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline Task& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // categoryBizId Field Functions 
    bool hasCategoryBizId() const { return this->categoryBizId_ != nullptr;};
    void deleteCategoryBizId() { this->categoryBizId_ = nullptr;};
    inline string getCategoryBizId() const { DARABONBA_PTR_GET_DEFAULT(categoryBizId_, "") };
    inline Task& setCategoryBizId(string categoryBizId) { DARABONBA_PTR_SET_VALUE(categoryBizId_, categoryBizId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Task& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline Task& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const Task::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Task::Credential) };
    inline Task::Credential getCredential() { DARABONBA_PTR_GET(credential_, Task::Credential) };
    inline Task& setCredential(const Task::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline Task& setCredential(Task::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // defaultCatalogId Field Functions 
    bool hasDefaultCatalogId() const { return this->defaultCatalogId_ != nullptr;};
    void deleteDefaultCatalogId() { this->defaultCatalogId_ = nullptr;};
    inline string getDefaultCatalogId() const { DARABONBA_PTR_GET_DEFAULT(defaultCatalogId_, "") };
    inline Task& setDefaultCatalogId(string defaultCatalogId) { DARABONBA_PTR_SET_VALUE(defaultCatalogId_, defaultCatalogId) };


    // defaultDatabase Field Functions 
    bool hasDefaultDatabase() const { return this->defaultDatabase_ != nullptr;};
    void deleteDefaultDatabase() { this->defaultDatabase_ = nullptr;};
    inline string getDefaultDatabase() const { DARABONBA_PTR_GET_DEFAULT(defaultDatabase_, "") };
    inline Task& setDefaultDatabase(string defaultDatabase) { DARABONBA_PTR_SET_VALUE(defaultDatabase_, defaultDatabase) };


    // defaultResourceQueueId Field Functions 
    bool hasDefaultResourceQueueId() const { return this->defaultResourceQueueId_ != nullptr;};
    void deleteDefaultResourceQueueId() { this->defaultResourceQueueId_ = nullptr;};
    inline string getDefaultResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceQueueId_, "") };
    inline Task& setDefaultResourceQueueId(string defaultResourceQueueId) { DARABONBA_PTR_SET_VALUE(defaultResourceQueueId_, defaultResourceQueueId) };


    // defaultSqlComputeId Field Functions 
    bool hasDefaultSqlComputeId() const { return this->defaultSqlComputeId_ != nullptr;};
    void deleteDefaultSqlComputeId() { this->defaultSqlComputeId_ = nullptr;};
    inline string getDefaultSqlComputeId() const { DARABONBA_PTR_GET_DEFAULT(defaultSqlComputeId_, "") };
    inline Task& setDefaultSqlComputeId(string defaultSqlComputeId) { DARABONBA_PTR_SET_VALUE(defaultSqlComputeId_, defaultSqlComputeId) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Task& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline Task& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // extraArtifactIds Field Functions 
    bool hasExtraArtifactIds() const { return this->extraArtifactIds_ != nullptr;};
    void deleteExtraArtifactIds() { this->extraArtifactIds_ = nullptr;};
    inline const vector<string> & getExtraArtifactIds() const { DARABONBA_PTR_GET_CONST(extraArtifactIds_, vector<string>) };
    inline vector<string> getExtraArtifactIds() { DARABONBA_PTR_GET(extraArtifactIds_, vector<string>) };
    inline Task& setExtraArtifactIds(const vector<string> & extraArtifactIds) { DARABONBA_PTR_SET_VALUE(extraArtifactIds_, extraArtifactIds) };
    inline Task& setExtraArtifactIds(vector<string> && extraArtifactIds) { DARABONBA_PTR_SET_RVALUE(extraArtifactIds_, extraArtifactIds) };


    // extraSparkSubmitParams Field Functions 
    bool hasExtraSparkSubmitParams() const { return this->extraSparkSubmitParams_ != nullptr;};
    void deleteExtraSparkSubmitParams() { this->extraSparkSubmitParams_ = nullptr;};
    inline string getExtraSparkSubmitParams() const { DARABONBA_PTR_GET_DEFAULT(extraSparkSubmitParams_, "") };
    inline Task& setExtraSparkSubmitParams(string extraSparkSubmitParams) { DARABONBA_PTR_SET_VALUE(extraSparkSubmitParams_, extraSparkSubmitParams) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<string> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<string>) };
    inline vector<string> getFiles() { DARABONBA_PTR_GET(files_, vector<string>) };
    inline Task& setFiles(const vector<string> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline Task& setFiles(vector<string> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline Task& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline Task& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Task& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasChanged Field Functions 
    bool hasHasChanged() const { return this->hasChanged_ != nullptr;};
    void deleteHasChanged() { this->hasChanged_ = nullptr;};
    inline bool getHasChanged() const { DARABONBA_PTR_GET_DEFAULT(hasChanged_, false) };
    inline Task& setHasChanged(bool hasChanged) { DARABONBA_PTR_SET_VALUE(hasChanged_, hasChanged) };


    // hasCommited Field Functions 
    bool hasHasCommited() const { return this->hasCommited_ != nullptr;};
    void deleteHasCommited() { this->hasCommited_ = nullptr;};
    inline bool getHasCommited() const { DARABONBA_PTR_GET_DEFAULT(hasCommited_, false) };
    inline Task& setHasCommited(bool hasCommited) { DARABONBA_PTR_SET_VALUE(hasCommited_, hasCommited) };


    // isStreaming Field Functions 
    bool hasIsStreaming() const { return this->isStreaming_ != nullptr;};
    void deleteIsStreaming() { this->isStreaming_ = nullptr;};
    inline bool getIsStreaming() const { DARABONBA_PTR_GET_DEFAULT(isStreaming_, false) };
    inline Task& setIsStreaming(bool isStreaming) { DARABONBA_PTR_SET_VALUE(isStreaming_, isStreaming) };


    // jars Field Functions 
    bool hasJars() const { return this->jars_ != nullptr;};
    void deleteJars() { this->jars_ = nullptr;};
    inline const vector<string> & getJars() const { DARABONBA_PTR_GET_CONST(jars_, vector<string>) };
    inline vector<string> getJars() { DARABONBA_PTR_GET(jars_, vector<string>) };
    inline Task& setJars(const vector<string> & jars) { DARABONBA_PTR_SET_VALUE(jars_, jars) };
    inline Task& setJars(vector<string> && jars) { DARABONBA_PTR_SET_RVALUE(jars_, jars) };


    // kernelId Field Functions 
    bool hasKernelId() const { return this->kernelId_ != nullptr;};
    void deleteKernelId() { this->kernelId_ = nullptr;};
    inline string getKernelId() const { DARABONBA_PTR_GET_DEFAULT(kernelId_, "") };
    inline Task& setKernelId(string kernelId) { DARABONBA_PTR_SET_VALUE(kernelId_, kernelId) };


    // lastRunResourceQueueId Field Functions 
    bool hasLastRunResourceQueueId() const { return this->lastRunResourceQueueId_ != nullptr;};
    void deleteLastRunResourceQueueId() { this->lastRunResourceQueueId_ = nullptr;};
    inline string getLastRunResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(lastRunResourceQueueId_, "") };
    inline Task& setLastRunResourceQueueId(string lastRunResourceQueueId) { DARABONBA_PTR_SET_VALUE(lastRunResourceQueueId_, lastRunResourceQueueId) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline int64_t getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, 0L) };
    inline Task& setModifier(int64_t modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const map<string, string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, map<string, string>) };
    inline map<string, string> getParams() { DARABONBA_PTR_GET(params_, map<string, string>) };
    inline Task& setParams(const map<string, string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline Task& setParams(map<string, string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // pyFiles Field Functions 
    bool hasPyFiles() const { return this->pyFiles_ != nullptr;};
    void deletePyFiles() { this->pyFiles_ = nullptr;};
    inline const vector<string> & getPyFiles() const { DARABONBA_PTR_GET_CONST(pyFiles_, vector<string>) };
    inline vector<string> getPyFiles() { DARABONBA_PTR_GET(pyFiles_, vector<string>) };
    inline Task& setPyFiles(const vector<string> & pyFiles) { DARABONBA_PTR_SET_VALUE(pyFiles_, pyFiles) };
    inline Task& setPyFiles(vector<string> && pyFiles) { DARABONBA_PTR_SET_RVALUE(pyFiles_, pyFiles) };


    // rayActiveDeadlineSeconds Field Functions 
    bool hasRayActiveDeadlineSeconds() const { return this->rayActiveDeadlineSeconds_ != nullptr;};
    void deleteRayActiveDeadlineSeconds() { this->rayActiveDeadlineSeconds_ = nullptr;};
    inline int64_t getRayActiveDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(rayActiveDeadlineSeconds_, 0L) };
    inline Task& setRayActiveDeadlineSeconds(int64_t rayActiveDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(rayActiveDeadlineSeconds_, rayActiveDeadlineSeconds) };


    // rayBackoffLimit Field Functions 
    bool hasRayBackoffLimit() const { return this->rayBackoffLimit_ != nullptr;};
    void deleteRayBackoffLimit() { this->rayBackoffLimit_ = nullptr;};
    inline int32_t getRayBackoffLimit() const { DARABONBA_PTR_GET_DEFAULT(rayBackoffLimit_, 0) };
    inline Task& setRayBackoffLimit(int32_t rayBackoffLimit) { DARABONBA_PTR_SET_VALUE(rayBackoffLimit_, rayBackoffLimit) };


    // rayEntrypoint Field Functions 
    bool hasRayEntrypoint() const { return this->rayEntrypoint_ != nullptr;};
    void deleteRayEntrypoint() { this->rayEntrypoint_ = nullptr;};
    inline string getRayEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(rayEntrypoint_, "") };
    inline Task& setRayEntrypoint(string rayEntrypoint) { DARABONBA_PTR_SET_VALUE(rayEntrypoint_, rayEntrypoint) };


    // rayEntrypointMemory Field Functions 
    bool hasRayEntrypointMemory() const { return this->rayEntrypointMemory_ != nullptr;};
    void deleteRayEntrypointMemory() { this->rayEntrypointMemory_ = nullptr;};
    inline string getRayEntrypointMemory() const { DARABONBA_PTR_GET_DEFAULT(rayEntrypointMemory_, "") };
    inline Task& setRayEntrypointMemory(string rayEntrypointMemory) { DARABONBA_PTR_SET_VALUE(rayEntrypointMemory_, rayEntrypointMemory) };


    // rayEntrypointNumCpus Field Functions 
    bool hasRayEntrypointNumCpus() const { return this->rayEntrypointNumCpus_ != nullptr;};
    void deleteRayEntrypointNumCpus() { this->rayEntrypointNumCpus_ = nullptr;};
    inline string getRayEntrypointNumCpus() const { DARABONBA_PTR_GET_DEFAULT(rayEntrypointNumCpus_, "") };
    inline Task& setRayEntrypointNumCpus(string rayEntrypointNumCpus) { DARABONBA_PTR_SET_VALUE(rayEntrypointNumCpus_, rayEntrypointNumCpus) };


    // rayEntrypointNumGpus Field Functions 
    bool hasRayEntrypointNumGpus() const { return this->rayEntrypointNumGpus_ != nullptr;};
    void deleteRayEntrypointNumGpus() { this->rayEntrypointNumGpus_ = nullptr;};
    inline string getRayEntrypointNumGpus() const { DARABONBA_PTR_GET_DEFAULT(rayEntrypointNumGpus_, "") };
    inline Task& setRayEntrypointNumGpus(string rayEntrypointNumGpus) { DARABONBA_PTR_SET_VALUE(rayEntrypointNumGpus_, rayEntrypointNumGpus) };


    // rayEntrypointResources Field Functions 
    bool hasRayEntrypointResources() const { return this->rayEntrypointResources_ != nullptr;};
    void deleteRayEntrypointResources() { this->rayEntrypointResources_ = nullptr;};
    inline string getRayEntrypointResources() const { DARABONBA_PTR_GET_DEFAULT(rayEntrypointResources_, "") };
    inline Task& setRayEntrypointResources(string rayEntrypointResources) { DARABONBA_PTR_SET_VALUE(rayEntrypointResources_, rayEntrypointResources) };


    // rayExtraParam Field Functions 
    bool hasRayExtraParam() const { return this->rayExtraParam_ != nullptr;};
    void deleteRayExtraParam() { this->rayExtraParam_ = nullptr;};
    inline string getRayExtraParam() const { DARABONBA_PTR_GET_DEFAULT(rayExtraParam_, "") };
    inline Task& setRayExtraParam(string rayExtraParam) { DARABONBA_PTR_SET_VALUE(rayExtraParam_, rayExtraParam) };


    // rayHeadSpec Field Functions 
    bool hasRayHeadSpec() const { return this->rayHeadSpec_ != nullptr;};
    void deleteRayHeadSpec() { this->rayHeadSpec_ = nullptr;};
    inline const Task::RayHeadSpec & getRayHeadSpec() const { DARABONBA_PTR_GET_CONST(rayHeadSpec_, Task::RayHeadSpec) };
    inline Task::RayHeadSpec getRayHeadSpec() { DARABONBA_PTR_GET(rayHeadSpec_, Task::RayHeadSpec) };
    inline Task& setRayHeadSpec(const Task::RayHeadSpec & rayHeadSpec) { DARABONBA_PTR_SET_VALUE(rayHeadSpec_, rayHeadSpec) };
    inline Task& setRayHeadSpec(Task::RayHeadSpec && rayHeadSpec) { DARABONBA_PTR_SET_RVALUE(rayHeadSpec_, rayHeadSpec) };


    // rayMetadataJson Field Functions 
    bool hasRayMetadataJson() const { return this->rayMetadataJson_ != nullptr;};
    void deleteRayMetadataJson() { this->rayMetadataJson_ = nullptr;};
    inline string getRayMetadataJson() const { DARABONBA_PTR_GET_DEFAULT(rayMetadataJson_, "") };
    inline Task& setRayMetadataJson(string rayMetadataJson) { DARABONBA_PTR_SET_VALUE(rayMetadataJson_, rayMetadataJson) };


    // rayNetworkServiceName Field Functions 
    bool hasRayNetworkServiceName() const { return this->rayNetworkServiceName_ != nullptr;};
    void deleteRayNetworkServiceName() { this->rayNetworkServiceName_ = nullptr;};
    inline string getRayNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(rayNetworkServiceName_, "") };
    inline Task& setRayNetworkServiceName(string rayNetworkServiceName) { DARABONBA_PTR_SET_VALUE(rayNetworkServiceName_, rayNetworkServiceName) };


    // rayRuntimeEnvJson Field Functions 
    bool hasRayRuntimeEnvJson() const { return this->rayRuntimeEnvJson_ != nullptr;};
    void deleteRayRuntimeEnvJson() { this->rayRuntimeEnvJson_ = nullptr;};
    inline string getRayRuntimeEnvJson() const { DARABONBA_PTR_GET_DEFAULT(rayRuntimeEnvJson_, "") };
    inline Task& setRayRuntimeEnvJson(string rayRuntimeEnvJson) { DARABONBA_PTR_SET_VALUE(rayRuntimeEnvJson_, rayRuntimeEnvJson) };


    // rayShutdownAfterJobFinishes Field Functions 
    bool hasRayShutdownAfterJobFinishes() const { return this->rayShutdownAfterJobFinishes_ != nullptr;};
    void deleteRayShutdownAfterJobFinishes() { this->rayShutdownAfterJobFinishes_ = nullptr;};
    inline bool getRayShutdownAfterJobFinishes() const { DARABONBA_PTR_GET_DEFAULT(rayShutdownAfterJobFinishes_, false) };
    inline Task& setRayShutdownAfterJobFinishes(bool rayShutdownAfterJobFinishes) { DARABONBA_PTR_SET_VALUE(rayShutdownAfterJobFinishes_, rayShutdownAfterJobFinishes) };


    // raySubmissionMode Field Functions 
    bool hasRaySubmissionMode() const { return this->raySubmissionMode_ != nullptr;};
    void deleteRaySubmissionMode() { this->raySubmissionMode_ = nullptr;};
    inline string getRaySubmissionMode() const { DARABONBA_PTR_GET_DEFAULT(raySubmissionMode_, "") };
    inline Task& setRaySubmissionMode(string raySubmissionMode) { DARABONBA_PTR_SET_VALUE(raySubmissionMode_, raySubmissionMode) };


    // rayTtlSecondsAfterFinished Field Functions 
    bool hasRayTtlSecondsAfterFinished() const { return this->rayTtlSecondsAfterFinished_ != nullptr;};
    void deleteRayTtlSecondsAfterFinished() { this->rayTtlSecondsAfterFinished_ = nullptr;};
    inline int64_t getRayTtlSecondsAfterFinished() const { DARABONBA_PTR_GET_DEFAULT(rayTtlSecondsAfterFinished_, 0L) };
    inline Task& setRayTtlSecondsAfterFinished(int64_t rayTtlSecondsAfterFinished) { DARABONBA_PTR_SET_VALUE(rayTtlSecondsAfterFinished_, rayTtlSecondsAfterFinished) };


    // rayVersion Field Functions 
    bool hasRayVersion() const { return this->rayVersion_ != nullptr;};
    void deleteRayVersion() { this->rayVersion_ = nullptr;};
    inline string getRayVersion() const { DARABONBA_PTR_GET_DEFAULT(rayVersion_, "") };
    inline Task& setRayVersion(string rayVersion) { DARABONBA_PTR_SET_VALUE(rayVersion_, rayVersion) };


    // rayVolumeIds Field Functions 
    bool hasRayVolumeIds() const { return this->rayVolumeIds_ != nullptr;};
    void deleteRayVolumeIds() { this->rayVolumeIds_ = nullptr;};
    inline const vector<string> & getRayVolumeIds() const { DARABONBA_PTR_GET_CONST(rayVolumeIds_, vector<string>) };
    inline vector<string> getRayVolumeIds() { DARABONBA_PTR_GET(rayVolumeIds_, vector<string>) };
    inline Task& setRayVolumeIds(const vector<string> & rayVolumeIds) { DARABONBA_PTR_SET_VALUE(rayVolumeIds_, rayVolumeIds) };
    inline Task& setRayVolumeIds(vector<string> && rayVolumeIds) { DARABONBA_PTR_SET_RVALUE(rayVolumeIds_, rayVolumeIds) };


    // rayWorkerSpec Field Functions 
    bool hasRayWorkerSpec() const { return this->rayWorkerSpec_ != nullptr;};
    void deleteRayWorkerSpec() { this->rayWorkerSpec_ = nullptr;};
    inline const vector<Task::RayWorkerSpec> & getRayWorkerSpec() const { DARABONBA_PTR_GET_CONST(rayWorkerSpec_, vector<Task::RayWorkerSpec>) };
    inline vector<Task::RayWorkerSpec> getRayWorkerSpec() { DARABONBA_PTR_GET(rayWorkerSpec_, vector<Task::RayWorkerSpec>) };
    inline Task& setRayWorkerSpec(const vector<Task::RayWorkerSpec> & rayWorkerSpec) { DARABONBA_PTR_SET_VALUE(rayWorkerSpec_, rayWorkerSpec) };
    inline Task& setRayWorkerSpec(vector<Task::RayWorkerSpec> && rayWorkerSpec) { DARABONBA_PTR_SET_RVALUE(rayWorkerSpec_, rayWorkerSpec) };


    // rayWorkingDir Field Functions 
    bool hasRayWorkingDir() const { return this->rayWorkingDir_ != nullptr;};
    void deleteRayWorkingDir() { this->rayWorkingDir_ = nullptr;};
    inline string getRayWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(rayWorkingDir_, "") };
    inline Task& setRayWorkingDir(string rayWorkingDir) { DARABONBA_PTR_SET_VALUE(rayWorkingDir_, rayWorkingDir) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string getSessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline Task& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


    // sparkArgs Field Functions 
    bool hasSparkArgs() const { return this->sparkArgs_ != nullptr;};
    void deleteSparkArgs() { this->sparkArgs_ = nullptr;};
    inline string getSparkArgs() const { DARABONBA_PTR_GET_DEFAULT(sparkArgs_, "") };
    inline Task& setSparkArgs(string sparkArgs) { DARABONBA_PTR_SET_VALUE(sparkArgs_, sparkArgs) };


    // sparkConf Field Functions 
    bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
    void deleteSparkConf() { this->sparkConf_ = nullptr;};
    inline const vector<SparkConf> & getSparkConf() const { DARABONBA_PTR_GET_CONST(sparkConf_, vector<SparkConf>) };
    inline vector<SparkConf> getSparkConf() { DARABONBA_PTR_GET(sparkConf_, vector<SparkConf>) };
    inline Task& setSparkConf(const vector<SparkConf> & sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };
    inline Task& setSparkConf(vector<SparkConf> && sparkConf) { DARABONBA_PTR_SET_RVALUE(sparkConf_, sparkConf) };


    // sparkDriverCores Field Functions 
    bool hasSparkDriverCores() const { return this->sparkDriverCores_ != nullptr;};
    void deleteSparkDriverCores() { this->sparkDriverCores_ = nullptr;};
    inline int32_t getSparkDriverCores() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverCores_, 0) };
    inline Task& setSparkDriverCores(int32_t sparkDriverCores) { DARABONBA_PTR_SET_VALUE(sparkDriverCores_, sparkDriverCores) };


    // sparkDriverMemory Field Functions 
    bool hasSparkDriverMemory() const { return this->sparkDriverMemory_ != nullptr;};
    void deleteSparkDriverMemory() { this->sparkDriverMemory_ = nullptr;};
    inline int64_t getSparkDriverMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverMemory_, 0L) };
    inline Task& setSparkDriverMemory(int64_t sparkDriverMemory) { DARABONBA_PTR_SET_VALUE(sparkDriverMemory_, sparkDriverMemory) };


    // sparkEntrypoint Field Functions 
    bool hasSparkEntrypoint() const { return this->sparkEntrypoint_ != nullptr;};
    void deleteSparkEntrypoint() { this->sparkEntrypoint_ = nullptr;};
    inline string getSparkEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(sparkEntrypoint_, "") };
    inline Task& setSparkEntrypoint(string sparkEntrypoint) { DARABONBA_PTR_SET_VALUE(sparkEntrypoint_, sparkEntrypoint) };


    // sparkExecutorCores Field Functions 
    bool hasSparkExecutorCores() const { return this->sparkExecutorCores_ != nullptr;};
    void deleteSparkExecutorCores() { this->sparkExecutorCores_ = nullptr;};
    inline int32_t getSparkExecutorCores() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorCores_, 0) };
    inline Task& setSparkExecutorCores(int32_t sparkExecutorCores) { DARABONBA_PTR_SET_VALUE(sparkExecutorCores_, sparkExecutorCores) };


    // sparkExecutorMemory Field Functions 
    bool hasSparkExecutorMemory() const { return this->sparkExecutorMemory_ != nullptr;};
    void deleteSparkExecutorMemory() { this->sparkExecutorMemory_ = nullptr;};
    inline int64_t getSparkExecutorMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorMemory_, 0L) };
    inline Task& setSparkExecutorMemory(int64_t sparkExecutorMemory) { DARABONBA_PTR_SET_VALUE(sparkExecutorMemory_, sparkExecutorMemory) };


    // sparkLogLevel Field Functions 
    bool hasSparkLogLevel() const { return this->sparkLogLevel_ != nullptr;};
    void deleteSparkLogLevel() { this->sparkLogLevel_ = nullptr;};
    inline string getSparkLogLevel() const { DARABONBA_PTR_GET_DEFAULT(sparkLogLevel_, "") };
    inline Task& setSparkLogLevel(string sparkLogLevel) { DARABONBA_PTR_SET_VALUE(sparkLogLevel_, sparkLogLevel) };


    // sparkLogPath Field Functions 
    bool hasSparkLogPath() const { return this->sparkLogPath_ != nullptr;};
    void deleteSparkLogPath() { this->sparkLogPath_ = nullptr;};
    inline string getSparkLogPath() const { DARABONBA_PTR_GET_DEFAULT(sparkLogPath_, "") };
    inline Task& setSparkLogPath(string sparkLogPath) { DARABONBA_PTR_SET_VALUE(sparkLogPath_, sparkLogPath) };


    // sparkSubmitClause Field Functions 
    bool hasSparkSubmitClause() const { return this->sparkSubmitClause_ != nullptr;};
    void deleteSparkSubmitClause() { this->sparkSubmitClause_ = nullptr;};
    inline string getSparkSubmitClause() const { DARABONBA_PTR_GET_DEFAULT(sparkSubmitClause_, "") };
    inline Task& setSparkSubmitClause(string sparkSubmitClause) { DARABONBA_PTR_SET_VALUE(sparkSubmitClause_, sparkSubmitClause) };


    // sparkVersion Field Functions 
    bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
    void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
    inline string getSparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
    inline Task& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline Task& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Task& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline Task& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Task& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The --archives parameter.
    shared_ptr<vector<string>> archives_ {};
    // The temporary URL to access the resource file.
    shared_ptr<string> artifactUrl_ {};
    // The business ID.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // The business ID of the folder.
    shared_ptr<string> categoryBizId_ {};
    // The content of the Spark job.
    shared_ptr<string> content_ {};
    // The UID of the creator.
    // 
    // This parameter is required.
    shared_ptr<int64_t> creator_ {};
    // The information for directly uploading files to Object Storage Service (OSS).
    shared_ptr<Task::Credential> credential_ {};
    // The default catalog ID.
    shared_ptr<string> defaultCatalogId_ {};
    // The default database.
    shared_ptr<string> defaultDatabase_ {};
    // The default queue ID for the task.
    shared_ptr<string> defaultResourceQueueId_ {};
    // The default SQL session ID.
    shared_ptr<string> defaultSqlComputeId_ {};
    // The deployment ID of the streaming task.
    shared_ptr<string> deploymentId_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // The IDs of extra Spark resources.
    shared_ptr<vector<string>> extraArtifactIds_ {};
    // The custom parameters for the spark-submit command.
    shared_ptr<string> extraSparkSubmitParams_ {};
    // The --files parameter.
    shared_ptr<vector<string>> files_ {};
    // Indicates whether to enable fusion.
    shared_ptr<bool> fusion_ {};
    // The time when the task was created.
    // 
    // This parameter is required.
    shared_ptr<string> gmtCreated_ {};
    // The time when the task was last modified.
    // 
    // This parameter is required.
    shared_ptr<string> gmtModified_ {};
    // Indicates whether the task has been changed since the last commit.
    shared_ptr<bool> hasChanged_ {};
    // Indicates whether the task has been committed.
    // 
    // This parameter is required.
    shared_ptr<bool> hasCommited_ {};
    // Indicates whether the task is a streaming task.
    shared_ptr<bool> isStreaming_ {};
    // The --jars parameter.
    shared_ptr<vector<string>> jars_ {};
    shared_ptr<string> kernelId_ {};
    // The ID of the resource queue that was used for the last run.
    shared_ptr<string> lastRunResourceQueueId_ {};
    // The UID of the user who last updated the task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> modifier_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<map<string, string>> params_ {};
    // The PySpark dependency pyfiles.
    shared_ptr<vector<string>> pyFiles_ {};
    shared_ptr<int64_t> rayActiveDeadlineSeconds_ {};
    shared_ptr<int32_t> rayBackoffLimit_ {};
    shared_ptr<string> rayEntrypoint_ {};
    shared_ptr<string> rayEntrypointMemory_ {};
    shared_ptr<string> rayEntrypointNumCpus_ {};
    shared_ptr<string> rayEntrypointNumGpus_ {};
    shared_ptr<string> rayEntrypointResources_ {};
    shared_ptr<string> rayExtraParam_ {};
    shared_ptr<Task::RayHeadSpec> rayHeadSpec_ {};
    shared_ptr<string> rayMetadataJson_ {};
    shared_ptr<string> rayNetworkServiceName_ {};
    shared_ptr<string> rayRuntimeEnvJson_ {};
    shared_ptr<bool> rayShutdownAfterJobFinishes_ {};
    shared_ptr<string> raySubmissionMode_ {};
    shared_ptr<int64_t> rayTtlSecondsAfterFinished_ {};
    shared_ptr<string> rayVersion_ {};
    shared_ptr<vector<string>> rayVolumeIds_ {};
    shared_ptr<vector<Task::RayWorkerSpec>> rayWorkerSpec_ {};
    shared_ptr<string> rayWorkingDir_ {};
    shared_ptr<string> sessionClusterId_ {};
    // The Spark parameters.
    shared_ptr<string> sparkArgs_ {};
    // The list of Spark configurations.
    shared_ptr<vector<SparkConf>> sparkConf_ {};
    // The number of cores for the Spark driver.
    // 
    // This parameter is required.
    shared_ptr<int32_t> sparkDriverCores_ {};
    // The memory of the Spark driver.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sparkDriverMemory_ {};
    // The entrypoint of the Spark main class.
    shared_ptr<string> sparkEntrypoint_ {};
    // The number of cores for the Spark executor.
    // 
    // This parameter is required.
    shared_ptr<int32_t> sparkExecutorCores_ {};
    // The memory of the Spark executor.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sparkExecutorMemory_ {};
    // The log level for Spark.
    // 
    // This parameter is required.
    shared_ptr<string> sparkLogLevel_ {};
    // The Spark log path.
    // 
    // This parameter is required.
    shared_ptr<string> sparkLogPath_ {};
    // The spark-submit statement.
    shared_ptr<string> sparkSubmitClause_ {};
    // The Spark version.
    // 
    // This parameter is required.
    shared_ptr<string> sparkVersion_ {};
    // The task tags.
    shared_ptr<map<string, string>> tags_ {};
    // The task timeout duration.
    shared_ptr<int32_t> timeout_ {};
    // The task type.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
