// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRAYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRayJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(activeDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(backoffLimit, backoffLimit_);
      DARABONBA_PTR_TO_JSON(clusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
      DARABONBA_PTR_TO_JSON(dashboardUrl, dashboardUrl_);
      DARABONBA_PTR_TO_JSON(dashboardUrlExtra, dashboardUrlExtra_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_TO_JSON(entrypointMemory, entrypointMemory_);
      DARABONBA_PTR_TO_JSON(entrypointNumCpus, entrypointNumCpus_);
      DARABONBA_PTR_TO_JSON(entrypointNumGpus, entrypointNumGpus_);
      DARABONBA_PTR_TO_JSON(entrypointResources, entrypointResources_);
      DARABONBA_PTR_TO_JSON(extraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(guHours, guHours_);
      DARABONBA_PTR_TO_JSON(headSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(logBucketName, logBucketName_);
      DARABONBA_PTR_TO_JSON(logPath, logPath_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(metadataJson, metadataJson_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(runtimeEnvJson, runtimeEnvJson_);
      DARABONBA_PTR_TO_JSON(shutdownAfterJobFinishes, shutdownAfterJobFinishes_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
      DARABONBA_PTR_TO_JSON(submissionMode, submissionMode_);
      DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_TO_JSON(ttlSecondsAfterFinished, ttlSecondsAfterFinished_);
      DARABONBA_PTR_TO_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_TO_JSON(workerSpecs, workerSpecs_);
      DARABONBA_PTR_TO_JSON(workingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, GetRayJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(activeDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(backoffLimit, backoffLimit_);
      DARABONBA_PTR_FROM_JSON(clusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
      DARABONBA_PTR_FROM_JSON(dashboardUrl, dashboardUrl_);
      DARABONBA_PTR_FROM_JSON(dashboardUrlExtra, dashboardUrlExtra_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_FROM_JSON(entrypointMemory, entrypointMemory_);
      DARABONBA_PTR_FROM_JSON(entrypointNumCpus, entrypointNumCpus_);
      DARABONBA_PTR_FROM_JSON(entrypointNumGpus, entrypointNumGpus_);
      DARABONBA_PTR_FROM_JSON(entrypointResources, entrypointResources_);
      DARABONBA_PTR_FROM_JSON(extraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(guHours, guHours_);
      DARABONBA_PTR_FROM_JSON(headSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(logBucketName, logBucketName_);
      DARABONBA_PTR_FROM_JSON(logPath, logPath_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(metadataJson, metadataJson_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(runtimeEnvJson, runtimeEnvJson_);
      DARABONBA_PTR_FROM_JSON(shutdownAfterJobFinishes, shutdownAfterJobFinishes_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
      DARABONBA_PTR_FROM_JSON(submissionMode, submissionMode_);
      DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_FROM_JSON(ttlSecondsAfterFinished, ttlSecondsAfterFinished_);
      DARABONBA_PTR_FROM_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_FROM_JSON(workerSpecs, workerSpecs_);
      DARABONBA_PTR_FROM_JSON(workingDir, workingDir_);
    };
    GetRayJobResponseBody() = default ;
    GetRayJobResponseBody(const GetRayJobResponseBody &) = default ;
    GetRayJobResponseBody(GetRayJobResponseBody &&) = default ;
    GetRayJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayJobResponseBody() = default ;
    GetRayJobResponseBody& operator=(const GetRayJobResponseBody &) = default ;
    GetRayJobResponseBody& operator=(GetRayJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkerSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkerSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(minReplica, minReplica_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
      };
      friend void from_json(const Darabonba::Json& j, WorkerSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(minReplica, minReplica_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
      };
      WorkerSpecs() = default ;
      WorkerSpecs(const WorkerSpecs &) = default ;
      WorkerSpecs(WorkerSpecs &&) = default ;
      WorkerSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkerSpecs() = default ;
      WorkerSpecs& operator=(const WorkerSpecs &) = default ;
      WorkerSpecs& operator=(WorkerSpecs &&) = default ;
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
      inline WorkerSpecs& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline WorkerSpecs& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline WorkerSpecs& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // maxReplica Field Functions 
      bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
      void deleteMaxReplica() { this->maxReplica_ = nullptr;};
      inline int32_t getMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
      inline WorkerSpecs& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline WorkerSpecs& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minReplica Field Functions 
      bool hasMinReplica() const { return this->minReplica_ != nullptr;};
      void deleteMinReplica() { this->minReplica_ = nullptr;};
      inline int32_t getMinReplica() const { DARABONBA_PTR_GET_DEFAULT(minReplica_, 0) };
      inline WorkerSpecs& setMinReplica(int32_t minReplica) { DARABONBA_PTR_SET_VALUE(minReplica_, minReplica) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline WorkerSpecs& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline WorkerSpecs& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


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

    class HeadSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeadSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
      };
      friend void from_json(const Darabonba::Json& j, HeadSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
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
        && this->enableAutoScaling_ == nullptr && this->gpuSpec_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr
        && this->replica_ == nullptr; };
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


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline HeadSpec& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    protected:
      shared_ptr<string> cpu_ {};
      shared_ptr<bool> enableAutoScaling_ {};
      shared_ptr<string> gpuSpec_ {};
      shared_ptr<int32_t> idleTimeoutSeconds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<int32_t> replica_ {};
    };

    class GuHours : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GuHours& obj) { 
        DARABONBA_PTR_TO_JSON(gpuHours, gpuHours_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
      };
      friend void from_json(const Darabonba::Json& j, GuHours& obj) { 
        DARABONBA_PTR_FROM_JSON(gpuHours, gpuHours_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
      };
      GuHours() = default ;
      GuHours(const GuHours &) = default ;
      GuHours(GuHours &&) = default ;
      GuHours(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GuHours() = default ;
      GuHours& operator=(const GuHours &) = default ;
      GuHours& operator=(GuHours &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gpuHours_ == nullptr
        && this->gpuSpec_ == nullptr; };
      // gpuHours Field Functions 
      bool hasGpuHours() const { return this->gpuHours_ != nullptr;};
      void deleteGpuHours() { this->gpuHours_ = nullptr;};
      inline double getGpuHours() const { DARABONBA_PTR_GET_DEFAULT(gpuHours_, 0.0) };
      inline GuHours& setGpuHours(double gpuHours) { DARABONBA_PTR_SET_VALUE(gpuHours_, gpuHours) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline GuHours& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    protected:
      shared_ptr<double> gpuHours_ {};
      shared_ptr<string> gpuSpec_ {};
    };

    virtual bool empty() const override { return this->activeDeadlineSeconds_ == nullptr
        && this->backoffLimit_ == nullptr && this->clusterState_ == nullptr && this->creatorName_ == nullptr && this->cuHours_ == nullptr && this->dashboardUrl_ == nullptr
        && this->dashboardUrlExtra_ == nullptr && this->displayReleaseVersion_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->entrypoint_ == nullptr
        && this->entrypointMemory_ == nullptr && this->entrypointNumCpus_ == nullptr && this->entrypointNumGpus_ == nullptr && this->entrypointResources_ == nullptr && this->extraParam_ == nullptr
        && this->guHours_ == nullptr && this->headSpec_ == nullptr && this->logBucketName_ == nullptr && this->logPath_ == nullptr && this->message_ == nullptr
        && this->metadataJson_ == nullptr && this->name_ == nullptr && this->networkServiceName_ == nullptr && this->requestId_ == nullptr && this->runtimeEnvJson_ == nullptr
        && this->shutdownAfterJobFinishes_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->submissionId_ == nullptr && this->submissionMode_ == nullptr
        && this->submitTime_ == nullptr && this->tags_ == nullptr && this->taskBizId_ == nullptr && this->ttlSecondsAfterFinished_ == nullptr && this->volumeIds_ == nullptr
        && this->workerSpecs_ == nullptr && this->workingDir_ == nullptr; };
    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int32_t getActiveDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0) };
    inline GetRayJobResponseBody& setActiveDeadlineSeconds(int32_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // backoffLimit Field Functions 
    bool hasBackoffLimit() const { return this->backoffLimit_ != nullptr;};
    void deleteBackoffLimit() { this->backoffLimit_ = nullptr;};
    inline int32_t getBackoffLimit() const { DARABONBA_PTR_GET_DEFAULT(backoffLimit_, 0) };
    inline GetRayJobResponseBody& setBackoffLimit(int32_t backoffLimit) { DARABONBA_PTR_SET_VALUE(backoffLimit_, backoffLimit) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline GetRayJobResponseBody& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetRayJobResponseBody& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // cuHours Field Functions 
    bool hasCuHours() const { return this->cuHours_ != nullptr;};
    void deleteCuHours() { this->cuHours_ = nullptr;};
    inline double getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
    inline GetRayJobResponseBody& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


    // dashboardUrl Field Functions 
    bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
    void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
    inline string getDashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
    inline GetRayJobResponseBody& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


    // dashboardUrlExtra Field Functions 
    bool hasDashboardUrlExtra() const { return this->dashboardUrlExtra_ != nullptr;};
    void deleteDashboardUrlExtra() { this->dashboardUrlExtra_ = nullptr;};
    inline const vector<string> & getDashboardUrlExtra() const { DARABONBA_PTR_GET_CONST(dashboardUrlExtra_, vector<string>) };
    inline vector<string> getDashboardUrlExtra() { DARABONBA_PTR_GET(dashboardUrlExtra_, vector<string>) };
    inline GetRayJobResponseBody& setDashboardUrlExtra(const vector<string> & dashboardUrlExtra) { DARABONBA_PTR_SET_VALUE(dashboardUrlExtra_, dashboardUrlExtra) };
    inline GetRayJobResponseBody& setDashboardUrlExtra(vector<string> && dashboardUrlExtra) { DARABONBA_PTR_SET_RVALUE(dashboardUrlExtra_, dashboardUrlExtra) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline GetRayJobResponseBody& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetRayJobResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetRayJobResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entrypoint Field Functions 
    bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
    void deleteEntrypoint() { this->entrypoint_ = nullptr;};
    inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
    inline GetRayJobResponseBody& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


    // entrypointMemory Field Functions 
    bool hasEntrypointMemory() const { return this->entrypointMemory_ != nullptr;};
    void deleteEntrypointMemory() { this->entrypointMemory_ = nullptr;};
    inline string getEntrypointMemory() const { DARABONBA_PTR_GET_DEFAULT(entrypointMemory_, "") };
    inline GetRayJobResponseBody& setEntrypointMemory(string entrypointMemory) { DARABONBA_PTR_SET_VALUE(entrypointMemory_, entrypointMemory) };


    // entrypointNumCpus Field Functions 
    bool hasEntrypointNumCpus() const { return this->entrypointNumCpus_ != nullptr;};
    void deleteEntrypointNumCpus() { this->entrypointNumCpus_ = nullptr;};
    inline string getEntrypointNumCpus() const { DARABONBA_PTR_GET_DEFAULT(entrypointNumCpus_, "") };
    inline GetRayJobResponseBody& setEntrypointNumCpus(string entrypointNumCpus) { DARABONBA_PTR_SET_VALUE(entrypointNumCpus_, entrypointNumCpus) };


    // entrypointNumGpus Field Functions 
    bool hasEntrypointNumGpus() const { return this->entrypointNumGpus_ != nullptr;};
    void deleteEntrypointNumGpus() { this->entrypointNumGpus_ = nullptr;};
    inline string getEntrypointNumGpus() const { DARABONBA_PTR_GET_DEFAULT(entrypointNumGpus_, "") };
    inline GetRayJobResponseBody& setEntrypointNumGpus(string entrypointNumGpus) { DARABONBA_PTR_SET_VALUE(entrypointNumGpus_, entrypointNumGpus) };


    // entrypointResources Field Functions 
    bool hasEntrypointResources() const { return this->entrypointResources_ != nullptr;};
    void deleteEntrypointResources() { this->entrypointResources_ = nullptr;};
    inline string getEntrypointResources() const { DARABONBA_PTR_GET_DEFAULT(entrypointResources_, "") };
    inline GetRayJobResponseBody& setEntrypointResources(string entrypointResources) { DARABONBA_PTR_SET_VALUE(entrypointResources_, entrypointResources) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline GetRayJobResponseBody& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // guHours Field Functions 
    bool hasGuHours() const { return this->guHours_ != nullptr;};
    void deleteGuHours() { this->guHours_ = nullptr;};
    inline const GetRayJobResponseBody::GuHours & getGuHours() const { DARABONBA_PTR_GET_CONST(guHours_, GetRayJobResponseBody::GuHours) };
    inline GetRayJobResponseBody::GuHours getGuHours() { DARABONBA_PTR_GET(guHours_, GetRayJobResponseBody::GuHours) };
    inline GetRayJobResponseBody& setGuHours(const GetRayJobResponseBody::GuHours & guHours) { DARABONBA_PTR_SET_VALUE(guHours_, guHours) };
    inline GetRayJobResponseBody& setGuHours(GetRayJobResponseBody::GuHours && guHours) { DARABONBA_PTR_SET_RVALUE(guHours_, guHours) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline const GetRayJobResponseBody::HeadSpec & getHeadSpec() const { DARABONBA_PTR_GET_CONST(headSpec_, GetRayJobResponseBody::HeadSpec) };
    inline GetRayJobResponseBody::HeadSpec getHeadSpec() { DARABONBA_PTR_GET(headSpec_, GetRayJobResponseBody::HeadSpec) };
    inline GetRayJobResponseBody& setHeadSpec(const GetRayJobResponseBody::HeadSpec & headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };
    inline GetRayJobResponseBody& setHeadSpec(GetRayJobResponseBody::HeadSpec && headSpec) { DARABONBA_PTR_SET_RVALUE(headSpec_, headSpec) };


    // logBucketName Field Functions 
    bool hasLogBucketName() const { return this->logBucketName_ != nullptr;};
    void deleteLogBucketName() { this->logBucketName_ = nullptr;};
    inline string getLogBucketName() const { DARABONBA_PTR_GET_DEFAULT(logBucketName_, "") };
    inline GetRayJobResponseBody& setLogBucketName(string logBucketName) { DARABONBA_PTR_SET_VALUE(logBucketName_, logBucketName) };


    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string getLogPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline GetRayJobResponseBody& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRayJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metadataJson Field Functions 
    bool hasMetadataJson() const { return this->metadataJson_ != nullptr;};
    void deleteMetadataJson() { this->metadataJson_ = nullptr;};
    inline string getMetadataJson() const { DARABONBA_PTR_GET_DEFAULT(metadataJson_, "") };
    inline GetRayJobResponseBody& setMetadataJson(string metadataJson) { DARABONBA_PTR_SET_VALUE(metadataJson_, metadataJson) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRayJobResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkServiceName Field Functions 
    bool hasNetworkServiceName() const { return this->networkServiceName_ != nullptr;};
    void deleteNetworkServiceName() { this->networkServiceName_ = nullptr;};
    inline string getNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(networkServiceName_, "") };
    inline GetRayJobResponseBody& setNetworkServiceName(string networkServiceName) { DARABONBA_PTR_SET_VALUE(networkServiceName_, networkServiceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRayJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runtimeEnvJson Field Functions 
    bool hasRuntimeEnvJson() const { return this->runtimeEnvJson_ != nullptr;};
    void deleteRuntimeEnvJson() { this->runtimeEnvJson_ = nullptr;};
    inline string getRuntimeEnvJson() const { DARABONBA_PTR_GET_DEFAULT(runtimeEnvJson_, "") };
    inline GetRayJobResponseBody& setRuntimeEnvJson(string runtimeEnvJson) { DARABONBA_PTR_SET_VALUE(runtimeEnvJson_, runtimeEnvJson) };


    // shutdownAfterJobFinishes Field Functions 
    bool hasShutdownAfterJobFinishes() const { return this->shutdownAfterJobFinishes_ != nullptr;};
    void deleteShutdownAfterJobFinishes() { this->shutdownAfterJobFinishes_ = nullptr;};
    inline bool getShutdownAfterJobFinishes() const { DARABONBA_PTR_GET_DEFAULT(shutdownAfterJobFinishes_, false) };
    inline GetRayJobResponseBody& setShutdownAfterJobFinishes(bool shutdownAfterJobFinishes) { DARABONBA_PTR_SET_VALUE(shutdownAfterJobFinishes_, shutdownAfterJobFinishes) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRayJobResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRayJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submissionId Field Functions 
    bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
    void deleteSubmissionId() { this->submissionId_ = nullptr;};
    inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
    inline GetRayJobResponseBody& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


    // submissionMode Field Functions 
    bool hasSubmissionMode() const { return this->submissionMode_ != nullptr;};
    void deleteSubmissionMode() { this->submissionMode_ = nullptr;};
    inline string getSubmissionMode() const { DARABONBA_PTR_GET_DEFAULT(submissionMode_, "") };
    inline GetRayJobResponseBody& setSubmissionMode(string submissionMode) { DARABONBA_PTR_SET_VALUE(submissionMode_, submissionMode) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline int64_t getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
    inline GetRayJobResponseBody& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline GetRayJobResponseBody& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRayJobResponseBody& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string getTaskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline GetRayJobResponseBody& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


    // ttlSecondsAfterFinished Field Functions 
    bool hasTtlSecondsAfterFinished() const { return this->ttlSecondsAfterFinished_ != nullptr;};
    void deleteTtlSecondsAfterFinished() { this->ttlSecondsAfterFinished_ = nullptr;};
    inline int32_t getTtlSecondsAfterFinished() const { DARABONBA_PTR_GET_DEFAULT(ttlSecondsAfterFinished_, 0) };
    inline GetRayJobResponseBody& setTtlSecondsAfterFinished(int32_t ttlSecondsAfterFinished) { DARABONBA_PTR_SET_VALUE(ttlSecondsAfterFinished_, ttlSecondsAfterFinished) };


    // volumeIds Field Functions 
    bool hasVolumeIds() const { return this->volumeIds_ != nullptr;};
    void deleteVolumeIds() { this->volumeIds_ = nullptr;};
    inline const vector<string> & getVolumeIds() const { DARABONBA_PTR_GET_CONST(volumeIds_, vector<string>) };
    inline vector<string> getVolumeIds() { DARABONBA_PTR_GET(volumeIds_, vector<string>) };
    inline GetRayJobResponseBody& setVolumeIds(const vector<string> & volumeIds) { DARABONBA_PTR_SET_VALUE(volumeIds_, volumeIds) };
    inline GetRayJobResponseBody& setVolumeIds(vector<string> && volumeIds) { DARABONBA_PTR_SET_RVALUE(volumeIds_, volumeIds) };


    // workerSpecs Field Functions 
    bool hasWorkerSpecs() const { return this->workerSpecs_ != nullptr;};
    void deleteWorkerSpecs() { this->workerSpecs_ = nullptr;};
    inline const vector<GetRayJobResponseBody::WorkerSpecs> & getWorkerSpecs() const { DARABONBA_PTR_GET_CONST(workerSpecs_, vector<GetRayJobResponseBody::WorkerSpecs>) };
    inline vector<GetRayJobResponseBody::WorkerSpecs> getWorkerSpecs() { DARABONBA_PTR_GET(workerSpecs_, vector<GetRayJobResponseBody::WorkerSpecs>) };
    inline GetRayJobResponseBody& setWorkerSpecs(const vector<GetRayJobResponseBody::WorkerSpecs> & workerSpecs) { DARABONBA_PTR_SET_VALUE(workerSpecs_, workerSpecs) };
    inline GetRayJobResponseBody& setWorkerSpecs(vector<GetRayJobResponseBody::WorkerSpecs> && workerSpecs) { DARABONBA_PTR_SET_RVALUE(workerSpecs_, workerSpecs) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline GetRayJobResponseBody& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    shared_ptr<int32_t> activeDeadlineSeconds_ {};
    shared_ptr<int32_t> backoffLimit_ {};
    shared_ptr<string> clusterState_ {};
    shared_ptr<string> creatorName_ {};
    shared_ptr<double> cuHours_ {};
    shared_ptr<string> dashboardUrl_ {};
    shared_ptr<vector<string>> dashboardUrlExtra_ {};
    shared_ptr<string> displayReleaseVersion_ {};
    shared_ptr<int64_t> duration_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> entrypoint_ {};
    shared_ptr<string> entrypointMemory_ {};
    shared_ptr<string> entrypointNumCpus_ {};
    shared_ptr<string> entrypointNumGpus_ {};
    shared_ptr<string> entrypointResources_ {};
    shared_ptr<string> extraParam_ {};
    shared_ptr<GetRayJobResponseBody::GuHours> guHours_ {};
    shared_ptr<GetRayJobResponseBody::HeadSpec> headSpec_ {};
    shared_ptr<string> logBucketName_ {};
    shared_ptr<string> logPath_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> metadataJson_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> networkServiceName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> runtimeEnvJson_ {};
    shared_ptr<bool> shutdownAfterJobFinishes_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> submissionId_ {};
    shared_ptr<string> submissionMode_ {};
    shared_ptr<int64_t> submitTime_ {};
    shared_ptr<vector<Tag>> tags_ {};
    shared_ptr<string> taskBizId_ {};
    shared_ptr<int32_t> ttlSecondsAfterFinished_ {};
    shared_ptr<vector<string>> volumeIds_ {};
    shared_ptr<vector<GetRayJobResponseBody::WorkerSpecs>> workerSpecs_ {};
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
