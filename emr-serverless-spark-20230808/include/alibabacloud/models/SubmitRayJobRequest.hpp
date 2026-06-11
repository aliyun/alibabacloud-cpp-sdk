// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITRAYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITRAYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SubmitRayJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRayJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(activeDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_TO_JSON(entrypointMemory, entrypointMemory_);
      DARABONBA_PTR_TO_JSON(entrypointNumCpus, entrypointNumCpus_);
      DARABONBA_PTR_TO_JSON(entrypointNumGpus, entrypointNumGpus_);
      DARABONBA_PTR_TO_JSON(entrypointResources, entrypointResources_);
      DARABONBA_PTR_TO_JSON(extraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(headSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(metadataJson, metadataJson_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_TO_JSON(runtimeEnvJson, runtimeEnvJson_);
      DARABONBA_PTR_TO_JSON(shutdownAfterJobFinishes, shutdownAfterJobFinishes_);
      DARABONBA_PTR_TO_JSON(submissionMode, submissionMode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(ttlSecondsAfterFinished, ttlSecondsAfterFinished_);
      DARABONBA_PTR_TO_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_TO_JSON(workerSpec, workerSpec_);
      DARABONBA_PTR_TO_JSON(workingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRayJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(activeDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_FROM_JSON(entrypointMemory, entrypointMemory_);
      DARABONBA_PTR_FROM_JSON(entrypointNumCpus, entrypointNumCpus_);
      DARABONBA_PTR_FROM_JSON(entrypointNumGpus, entrypointNumGpus_);
      DARABONBA_PTR_FROM_JSON(entrypointResources, entrypointResources_);
      DARABONBA_PTR_FROM_JSON(extraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(headSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(metadataJson, metadataJson_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_FROM_JSON(runtimeEnvJson, runtimeEnvJson_);
      DARABONBA_PTR_FROM_JSON(shutdownAfterJobFinishes, shutdownAfterJobFinishes_);
      DARABONBA_PTR_FROM_JSON(submissionMode, submissionMode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(ttlSecondsAfterFinished, ttlSecondsAfterFinished_);
      DARABONBA_PTR_FROM_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_FROM_JSON(workerSpec, workerSpec_);
      DARABONBA_PTR_FROM_JSON(workingDir, workingDir_);
    };
    SubmitRayJobRequest() = default ;
    SubmitRayJobRequest(const SubmitRayJobRequest &) = default ;
    SubmitRayJobRequest(SubmitRayJobRequest &&) = default ;
    SubmitRayJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRayJobRequest() = default ;
    SubmitRayJobRequest& operator=(const SubmitRayJobRequest &) = default ;
    SubmitRayJobRequest& operator=(SubmitRayJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(minReplica, minReplica_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(workerType, workerType_);
      };
      friend void from_json(const Darabonba::Json& j, WorkerSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(minReplica, minReplica_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
        DARABONBA_PTR_FROM_JSON(workerType, workerType_);
      };
      WorkerSpec() = default ;
      WorkerSpec(const WorkerSpec &) = default ;
      WorkerSpec(WorkerSpec &&) = default ;
      WorkerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkerSpec() = default ;
      WorkerSpec& operator=(const WorkerSpec &) = default ;
      WorkerSpec& operator=(WorkerSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpuSpec_ == nullptr && this->groupName_ == nullptr && this->maxReplica_ == nullptr && this->memory_ == nullptr && this->minReplica_ == nullptr
        && this->queueName_ == nullptr && this->replica_ == nullptr && this->workerType_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline WorkerSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline WorkerSpec& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline WorkerSpec& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // maxReplica Field Functions 
      bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
      void deleteMaxReplica() { this->maxReplica_ = nullptr;};
      inline int32_t getMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
      inline WorkerSpec& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline WorkerSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minReplica Field Functions 
      bool hasMinReplica() const { return this->minReplica_ != nullptr;};
      void deleteMinReplica() { this->minReplica_ = nullptr;};
      inline int32_t getMinReplica() const { DARABONBA_PTR_GET_DEFAULT(minReplica_, 0) };
      inline WorkerSpec& setMinReplica(int32_t minReplica) { DARABONBA_PTR_SET_VALUE(minReplica_, minReplica) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline WorkerSpec& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline WorkerSpec& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // workerType Field Functions 
      bool hasWorkerType() const { return this->workerType_ != nullptr;};
      void deleteWorkerType() { this->workerType_ = nullptr;};
      inline string getWorkerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
      inline WorkerSpec& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


    protected:
      shared_ptr<string> cpu_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int32_t> maxReplica_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<int32_t> minReplica_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<int32_t> replica_ {};
      shared_ptr<string> workerType_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class HeadSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeadSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
      };
      friend void from_json(const Darabonba::Json& j, HeadSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      };
      HeadSpec() = default ;
      HeadSpec(const HeadSpec &) = default ;
      HeadSpec(HeadSpec &&) = default ;
      HeadSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HeadSpec() = default ;
      HeadSpec& operator=(const HeadSpec &) = default ;
      HeadSpec& operator=(HeadSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->enableAutoScaling_ == nullptr && this->gpuSpec_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline HeadSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // enableAutoScaling Field Functions 
      bool hasEnableAutoScaling() const { return this->enableAutoScaling_ != nullptr;};
      void deleteEnableAutoScaling() { this->enableAutoScaling_ = nullptr;};
      inline bool getEnableAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(enableAutoScaling_, false) };
      inline HeadSpec& setEnableAutoScaling(bool enableAutoScaling) { DARABONBA_PTR_SET_VALUE(enableAutoScaling_, enableAutoScaling) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline HeadSpec& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // idleTimeoutSeconds Field Functions 
      bool hasIdleTimeoutSeconds() const { return this->idleTimeoutSeconds_ != nullptr;};
      void deleteIdleTimeoutSeconds() { this->idleTimeoutSeconds_ = nullptr;};
      inline int32_t getIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutSeconds_, 0) };
      inline HeadSpec& setIdleTimeoutSeconds(int32_t idleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(idleTimeoutSeconds_, idleTimeoutSeconds) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline HeadSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline HeadSpec& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    protected:
      shared_ptr<string> cpu_ {};
      shared_ptr<bool> enableAutoScaling_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<int32_t> idleTimeoutSeconds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> queueName_ {};
    };

    virtual bool empty() const override { return this->activeDeadlineSeconds_ == nullptr
        && this->displayReleaseVersion_ == nullptr && this->entrypoint_ == nullptr && this->entrypointMemory_ == nullptr && this->entrypointNumCpus_ == nullptr && this->entrypointNumGpus_ == nullptr
        && this->entrypointResources_ == nullptr && this->extraParam_ == nullptr && this->headSpec_ == nullptr && this->metadataJson_ == nullptr && this->name_ == nullptr
        && this->networkServiceName_ == nullptr && this->runtimeEnvJson_ == nullptr && this->shutdownAfterJobFinishes_ == nullptr && this->submissionMode_ == nullptr && this->tags_ == nullptr
        && this->ttlSecondsAfterFinished_ == nullptr && this->volumeIds_ == nullptr && this->workerSpec_ == nullptr && this->workingDir_ == nullptr; };
    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int32_t getActiveDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0) };
    inline SubmitRayJobRequest& setActiveDeadlineSeconds(int32_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline SubmitRayJobRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // entrypoint Field Functions 
    bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
    void deleteEntrypoint() { this->entrypoint_ = nullptr;};
    inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
    inline SubmitRayJobRequest& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


    // entrypointMemory Field Functions 
    bool hasEntrypointMemory() const { return this->entrypointMemory_ != nullptr;};
    void deleteEntrypointMemory() { this->entrypointMemory_ = nullptr;};
    inline string getEntrypointMemory() const { DARABONBA_PTR_GET_DEFAULT(entrypointMemory_, "") };
    inline SubmitRayJobRequest& setEntrypointMemory(string entrypointMemory) { DARABONBA_PTR_SET_VALUE(entrypointMemory_, entrypointMemory) };


    // entrypointNumCpus Field Functions 
    bool hasEntrypointNumCpus() const { return this->entrypointNumCpus_ != nullptr;};
    void deleteEntrypointNumCpus() { this->entrypointNumCpus_ = nullptr;};
    inline string getEntrypointNumCpus() const { DARABONBA_PTR_GET_DEFAULT(entrypointNumCpus_, "") };
    inline SubmitRayJobRequest& setEntrypointNumCpus(string entrypointNumCpus) { DARABONBA_PTR_SET_VALUE(entrypointNumCpus_, entrypointNumCpus) };


    // entrypointNumGpus Field Functions 
    bool hasEntrypointNumGpus() const { return this->entrypointNumGpus_ != nullptr;};
    void deleteEntrypointNumGpus() { this->entrypointNumGpus_ = nullptr;};
    inline string getEntrypointNumGpus() const { DARABONBA_PTR_GET_DEFAULT(entrypointNumGpus_, "") };
    inline SubmitRayJobRequest& setEntrypointNumGpus(string entrypointNumGpus) { DARABONBA_PTR_SET_VALUE(entrypointNumGpus_, entrypointNumGpus) };


    // entrypointResources Field Functions 
    bool hasEntrypointResources() const { return this->entrypointResources_ != nullptr;};
    void deleteEntrypointResources() { this->entrypointResources_ = nullptr;};
    inline string getEntrypointResources() const { DARABONBA_PTR_GET_DEFAULT(entrypointResources_, "") };
    inline SubmitRayJobRequest& setEntrypointResources(string entrypointResources) { DARABONBA_PTR_SET_VALUE(entrypointResources_, entrypointResources) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline SubmitRayJobRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline const SubmitRayJobRequest::HeadSpec & getHeadSpec() const { DARABONBA_PTR_GET_CONST(headSpec_, SubmitRayJobRequest::HeadSpec) };
    inline SubmitRayJobRequest::HeadSpec getHeadSpec() { DARABONBA_PTR_GET(headSpec_, SubmitRayJobRequest::HeadSpec) };
    inline SubmitRayJobRequest& setHeadSpec(const SubmitRayJobRequest::HeadSpec & headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };
    inline SubmitRayJobRequest& setHeadSpec(SubmitRayJobRequest::HeadSpec && headSpec) { DARABONBA_PTR_SET_RVALUE(headSpec_, headSpec) };


    // metadataJson Field Functions 
    bool hasMetadataJson() const { return this->metadataJson_ != nullptr;};
    void deleteMetadataJson() { this->metadataJson_ = nullptr;};
    inline string getMetadataJson() const { DARABONBA_PTR_GET_DEFAULT(metadataJson_, "") };
    inline SubmitRayJobRequest& setMetadataJson(string metadataJson) { DARABONBA_PTR_SET_VALUE(metadataJson_, metadataJson) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitRayJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkServiceName Field Functions 
    bool hasNetworkServiceName() const { return this->networkServiceName_ != nullptr;};
    void deleteNetworkServiceName() { this->networkServiceName_ = nullptr;};
    inline string getNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(networkServiceName_, "") };
    inline SubmitRayJobRequest& setNetworkServiceName(string networkServiceName) { DARABONBA_PTR_SET_VALUE(networkServiceName_, networkServiceName) };


    // runtimeEnvJson Field Functions 
    bool hasRuntimeEnvJson() const { return this->runtimeEnvJson_ != nullptr;};
    void deleteRuntimeEnvJson() { this->runtimeEnvJson_ = nullptr;};
    inline string getRuntimeEnvJson() const { DARABONBA_PTR_GET_DEFAULT(runtimeEnvJson_, "") };
    inline SubmitRayJobRequest& setRuntimeEnvJson(string runtimeEnvJson) { DARABONBA_PTR_SET_VALUE(runtimeEnvJson_, runtimeEnvJson) };


    // shutdownAfterJobFinishes Field Functions 
    bool hasShutdownAfterJobFinishes() const { return this->shutdownAfterJobFinishes_ != nullptr;};
    void deleteShutdownAfterJobFinishes() { this->shutdownAfterJobFinishes_ = nullptr;};
    inline bool getShutdownAfterJobFinishes() const { DARABONBA_PTR_GET_DEFAULT(shutdownAfterJobFinishes_, false) };
    inline SubmitRayJobRequest& setShutdownAfterJobFinishes(bool shutdownAfterJobFinishes) { DARABONBA_PTR_SET_VALUE(shutdownAfterJobFinishes_, shutdownAfterJobFinishes) };


    // submissionMode Field Functions 
    bool hasSubmissionMode() const { return this->submissionMode_ != nullptr;};
    void deleteSubmissionMode() { this->submissionMode_ = nullptr;};
    inline string getSubmissionMode() const { DARABONBA_PTR_GET_DEFAULT(submissionMode_, "") };
    inline SubmitRayJobRequest& setSubmissionMode(string submissionMode) { DARABONBA_PTR_SET_VALUE(submissionMode_, submissionMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SubmitRayJobRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SubmitRayJobRequest::Tags>) };
    inline vector<SubmitRayJobRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SubmitRayJobRequest::Tags>) };
    inline SubmitRayJobRequest& setTags(const vector<SubmitRayJobRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SubmitRayJobRequest& setTags(vector<SubmitRayJobRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // ttlSecondsAfterFinished Field Functions 
    bool hasTtlSecondsAfterFinished() const { return this->ttlSecondsAfterFinished_ != nullptr;};
    void deleteTtlSecondsAfterFinished() { this->ttlSecondsAfterFinished_ = nullptr;};
    inline int32_t getTtlSecondsAfterFinished() const { DARABONBA_PTR_GET_DEFAULT(ttlSecondsAfterFinished_, 0) };
    inline SubmitRayJobRequest& setTtlSecondsAfterFinished(int32_t ttlSecondsAfterFinished) { DARABONBA_PTR_SET_VALUE(ttlSecondsAfterFinished_, ttlSecondsAfterFinished) };


    // volumeIds Field Functions 
    bool hasVolumeIds() const { return this->volumeIds_ != nullptr;};
    void deleteVolumeIds() { this->volumeIds_ = nullptr;};
    inline const vector<string> & getVolumeIds() const { DARABONBA_PTR_GET_CONST(volumeIds_, vector<string>) };
    inline vector<string> getVolumeIds() { DARABONBA_PTR_GET(volumeIds_, vector<string>) };
    inline SubmitRayJobRequest& setVolumeIds(const vector<string> & volumeIds) { DARABONBA_PTR_SET_VALUE(volumeIds_, volumeIds) };
    inline SubmitRayJobRequest& setVolumeIds(vector<string> && volumeIds) { DARABONBA_PTR_SET_RVALUE(volumeIds_, volumeIds) };


    // workerSpec Field Functions 
    bool hasWorkerSpec() const { return this->workerSpec_ != nullptr;};
    void deleteWorkerSpec() { this->workerSpec_ = nullptr;};
    inline const vector<SubmitRayJobRequest::WorkerSpec> & getWorkerSpec() const { DARABONBA_PTR_GET_CONST(workerSpec_, vector<SubmitRayJobRequest::WorkerSpec>) };
    inline vector<SubmitRayJobRequest::WorkerSpec> getWorkerSpec() { DARABONBA_PTR_GET(workerSpec_, vector<SubmitRayJobRequest::WorkerSpec>) };
    inline SubmitRayJobRequest& setWorkerSpec(const vector<SubmitRayJobRequest::WorkerSpec> & workerSpec) { DARABONBA_PTR_SET_VALUE(workerSpec_, workerSpec) };
    inline SubmitRayJobRequest& setWorkerSpec(vector<SubmitRayJobRequest::WorkerSpec> && workerSpec) { DARABONBA_PTR_SET_RVALUE(workerSpec_, workerSpec) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline SubmitRayJobRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    shared_ptr<int32_t> activeDeadlineSeconds_ {};
    shared_ptr<string> displayReleaseVersion_ {};
    shared_ptr<string> entrypoint_ {};
    shared_ptr<string> entrypointMemory_ {};
    shared_ptr<string> entrypointNumCpus_ {};
    shared_ptr<string> entrypointNumGpus_ {};
    shared_ptr<string> entrypointResources_ {};
    shared_ptr<string> extraParam_ {};
    shared_ptr<SubmitRayJobRequest::HeadSpec> headSpec_ {};
    shared_ptr<string> metadataJson_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> networkServiceName_ {};
    shared_ptr<string> runtimeEnvJson_ {};
    shared_ptr<bool> shutdownAfterJobFinishes_ {};
    shared_ptr<string> submissionMode_ {};
    shared_ptr<vector<SubmitRayJobRequest::Tags>> tags_ {};
    shared_ptr<int32_t> ttlSecondsAfterFinished_ {};
    shared_ptr<vector<string>> volumeIds_ {};
    shared_ptr<vector<SubmitRayJobRequest::WorkerSpec>> workerSpec_ {};
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
