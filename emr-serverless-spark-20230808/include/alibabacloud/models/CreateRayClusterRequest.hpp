// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERAYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERAYCLUSTERREQUEST_HPP_
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
  class CreateRayClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRayClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(extraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(headSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_TO_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_TO_JSON(workerSpec, workerSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRayClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(extraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(headSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_FROM_JSON(volumeIds, volumeIds_);
      DARABONBA_PTR_FROM_JSON(workerSpec, workerSpec_);
    };
    CreateRayClusterRequest() = default ;
    CreateRayClusterRequest(const CreateRayClusterRequest &) = default ;
    CreateRayClusterRequest(CreateRayClusterRequest &&) = default ;
    CreateRayClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRayClusterRequest() = default ;
    CreateRayClusterRequest& operator=(const CreateRayClusterRequest &) = default ;
    CreateRayClusterRequest& operator=(CreateRayClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(env, env_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(minReplica, minReplica_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(rayStartParams, rayStartParams_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(workerType, workerType_);
      };
      friend void from_json(const Darabonba::Json& j, WorkerSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(env, env_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(maxReplica, maxReplica_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(minReplica, minReplica_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(rayStartParams, rayStartParams_);
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
        && this->displayReleaseVersion_ == nullptr && this->env_ == nullptr && this->gpuSpec_ == nullptr && this->groupName_ == nullptr && this->maxReplica_ == nullptr
        && this->memory_ == nullptr && this->minReplica_ == nullptr && this->queueName_ == nullptr && this->rayStartParams_ == nullptr && this->replica_ == nullptr
        && this->workerType_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline WorkerSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline WorkerSpec& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline WorkerSpec& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


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


      // rayStartParams Field Functions 
      bool hasRayStartParams() const { return this->rayStartParams_ != nullptr;};
      void deleteRayStartParams() { this->rayStartParams_ = nullptr;};
      inline string getRayStartParams() const { DARABONBA_PTR_GET_DEFAULT(rayStartParams_, "") };
      inline WorkerSpec& setRayStartParams(string rayStartParams) { DARABONBA_PTR_SET_VALUE(rayStartParams_, rayStartParams) };


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
      // The number of CPU cores.
      shared_ptr<string> cpu_ {};
      // The engine version. If this parameter is not specified, the value is the same as that of the head node.
      shared_ptr<string> displayReleaseVersion_ {};
      // The environment variables.
      shared_ptr<string> env_ {};
      // The GPU model.
      shared_ptr<string> gpuSpec_ {};
      // The worker group name.
      shared_ptr<string> groupName_ {};
      // The maximum number of workers after automatic scaling is enabled. Minimum value: 1.
      shared_ptr<int32_t> maxReplica_ {};
      // The memory size. Unit: Gi.
      shared_ptr<string> memory_ {};
      // The minimum number of workers after automatic scaling is enabled. Minimum value: 1. The value must be less than or equal to maxReplica.
      shared_ptr<int32_t> minReplica_ {};
      // The queue name.
      shared_ptr<string> queueName_ {};
      // The Ray node startup parameters.
      shared_ptr<string> rayStartParams_ {};
      // The number of workers. Minimum value: 1.
      shared_ptr<int32_t> replica_ {};
      // The worker type.
      shared_ptr<string> workerType_ {};
    };

    class HeadSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeadSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_TO_JSON(env, env_);
        DARABONBA_PTR_TO_JSON(gftConfig, gftConfig_);
        DARABONBA_PTR_TO_JSON(gftEnabled, gftEnabled_);
        DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(rayStartParams, rayStartParams_);
      };
      friend void from_json(const Darabonba::Json& j, HeadSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_FROM_JSON(env, env_);
        DARABONBA_PTR_FROM_JSON(gftConfig, gftConfig_);
        DARABONBA_PTR_FROM_JSON(gftEnabled, gftEnabled_);
        DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(rayStartParams, rayStartParams_);
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
      class GftConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GftConfig& obj) { 
          DARABONBA_PTR_TO_JSON(redisPassword, redisPassword_);
          DARABONBA_PTR_TO_JSON(redisUrl, redisUrl_);
          DARABONBA_PTR_TO_JSON(redisUsername, redisUsername_);
        };
        friend void from_json(const Darabonba::Json& j, GftConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(redisPassword, redisPassword_);
          DARABONBA_PTR_FROM_JSON(redisUrl, redisUrl_);
          DARABONBA_PTR_FROM_JSON(redisUsername, redisUsername_);
        };
        GftConfig() = default ;
        GftConfig(const GftConfig &) = default ;
        GftConfig(GftConfig &&) = default ;
        GftConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GftConfig() = default ;
        GftConfig& operator=(const GftConfig &) = default ;
        GftConfig& operator=(GftConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->redisPassword_ == nullptr
        && this->redisUrl_ == nullptr && this->redisUsername_ == nullptr; };
        // redisPassword Field Functions 
        bool hasRedisPassword() const { return this->redisPassword_ != nullptr;};
        void deleteRedisPassword() { this->redisPassword_ = nullptr;};
        inline string getRedisPassword() const { DARABONBA_PTR_GET_DEFAULT(redisPassword_, "") };
        inline GftConfig& setRedisPassword(string redisPassword) { DARABONBA_PTR_SET_VALUE(redisPassword_, redisPassword) };


        // redisUrl Field Functions 
        bool hasRedisUrl() const { return this->redisUrl_ != nullptr;};
        void deleteRedisUrl() { this->redisUrl_ = nullptr;};
        inline string getRedisUrl() const { DARABONBA_PTR_GET_DEFAULT(redisUrl_, "") };
        inline GftConfig& setRedisUrl(string redisUrl) { DARABONBA_PTR_SET_VALUE(redisUrl_, redisUrl) };


        // redisUsername Field Functions 
        bool hasRedisUsername() const { return this->redisUsername_ != nullptr;};
        void deleteRedisUsername() { this->redisUsername_ = nullptr;};
        inline string getRedisUsername() const { DARABONBA_PTR_GET_DEFAULT(redisUsername_, "") };
        inline GftConfig& setRedisUsername(string redisUsername) { DARABONBA_PTR_SET_VALUE(redisUsername_, redisUsername) };


      protected:
        // The Redis password.
        shared_ptr<string> redisPassword_ {};
        // The Redis URL.
        shared_ptr<string> redisUrl_ {};
        // The Redis username.
        shared_ptr<string> redisUsername_ {};
      };

      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->displayReleaseVersion_ == nullptr && this->enableAutoScaling_ == nullptr && this->env_ == nullptr && this->gftConfig_ == nullptr && this->gftEnabled_ == nullptr
        && this->gpuSpec_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr && this->rayStartParams_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline HeadSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline HeadSpec& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // enableAutoScaling Field Functions 
      bool hasEnableAutoScaling() const { return this->enableAutoScaling_ != nullptr;};
      void deleteEnableAutoScaling() { this->enableAutoScaling_ = nullptr;};
      inline bool getEnableAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(enableAutoScaling_, false) };
      inline HeadSpec& setEnableAutoScaling(bool enableAutoScaling) { DARABONBA_PTR_SET_VALUE(enableAutoScaling_, enableAutoScaling) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline HeadSpec& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // gftConfig Field Functions 
      bool hasGftConfig() const { return this->gftConfig_ != nullptr;};
      void deleteGftConfig() { this->gftConfig_ = nullptr;};
      inline const HeadSpec::GftConfig & getGftConfig() const { DARABONBA_PTR_GET_CONST(gftConfig_, HeadSpec::GftConfig) };
      inline HeadSpec::GftConfig getGftConfig() { DARABONBA_PTR_GET(gftConfig_, HeadSpec::GftConfig) };
      inline HeadSpec& setGftConfig(const HeadSpec::GftConfig & gftConfig) { DARABONBA_PTR_SET_VALUE(gftConfig_, gftConfig) };
      inline HeadSpec& setGftConfig(HeadSpec::GftConfig && gftConfig) { DARABONBA_PTR_SET_RVALUE(gftConfig_, gftConfig) };


      // gftEnabled Field Functions 
      bool hasGftEnabled() const { return this->gftEnabled_ != nullptr;};
      void deleteGftEnabled() { this->gftEnabled_ = nullptr;};
      inline bool getGftEnabled() const { DARABONBA_PTR_GET_DEFAULT(gftEnabled_, false) };
      inline HeadSpec& setGftEnabled(bool gftEnabled) { DARABONBA_PTR_SET_VALUE(gftEnabled_, gftEnabled) };


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


      // rayStartParams Field Functions 
      bool hasRayStartParams() const { return this->rayStartParams_ != nullptr;};
      void deleteRayStartParams() { this->rayStartParams_ = nullptr;};
      inline string getRayStartParams() const { DARABONBA_PTR_GET_DEFAULT(rayStartParams_, "") };
      inline HeadSpec& setRayStartParams(string rayStartParams) { DARABONBA_PTR_SET_VALUE(rayStartParams_, rayStartParams) };


    protected:
      // The number of CPU cores.
      shared_ptr<string> cpu_ {};
      // The Ray DPI engine version.
      shared_ptr<string> displayReleaseVersion_ {};
      // Specifies whether to enable automatic scaling for workers.
      shared_ptr<bool> enableAutoScaling_ {};
      // The environment variables.
      shared_ptr<string> env_ {};
      // The GCS Fault Tolerance configuration.
      shared_ptr<HeadSpec::GftConfig> gftConfig_ {};
      // Specifies whether to enable GCS Fault Tolerance.
      shared_ptr<bool> gftEnabled_ {};
      // The GPU model.
      shared_ptr<string> gpuSpec_ {};
      // The idle timeout period of workers after automatic scaling is enabled.
      shared_ptr<int32_t> idleTimeoutSeconds_ {};
      // The memory size. Unit: Gi.
      shared_ptr<string> memory_ {};
      // The queue name.
      shared_ptr<string> queueName_ {};
      // The Ray node startup parameters.
      shared_ptr<string> rayStartParams_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayReleaseVersion_ == nullptr && this->extraParam_ == nullptr && this->headSpec_ == nullptr && this->name_ == nullptr && this->networkServiceName_ == nullptr
        && this->volumeIds_ == nullptr && this->workerSpec_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRayClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline CreateRayClusterRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline CreateRayClusterRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline const CreateRayClusterRequest::HeadSpec & getHeadSpec() const { DARABONBA_PTR_GET_CONST(headSpec_, CreateRayClusterRequest::HeadSpec) };
    inline CreateRayClusterRequest::HeadSpec getHeadSpec() { DARABONBA_PTR_GET(headSpec_, CreateRayClusterRequest::HeadSpec) };
    inline CreateRayClusterRequest& setHeadSpec(const CreateRayClusterRequest::HeadSpec & headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };
    inline CreateRayClusterRequest& setHeadSpec(CreateRayClusterRequest::HeadSpec && headSpec) { DARABONBA_PTR_SET_RVALUE(headSpec_, headSpec) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRayClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkServiceName Field Functions 
    bool hasNetworkServiceName() const { return this->networkServiceName_ != nullptr;};
    void deleteNetworkServiceName() { this->networkServiceName_ = nullptr;};
    inline string getNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(networkServiceName_, "") };
    inline CreateRayClusterRequest& setNetworkServiceName(string networkServiceName) { DARABONBA_PTR_SET_VALUE(networkServiceName_, networkServiceName) };


    // volumeIds Field Functions 
    bool hasVolumeIds() const { return this->volumeIds_ != nullptr;};
    void deleteVolumeIds() { this->volumeIds_ = nullptr;};
    inline const vector<string> & getVolumeIds() const { DARABONBA_PTR_GET_CONST(volumeIds_, vector<string>) };
    inline vector<string> getVolumeIds() { DARABONBA_PTR_GET(volumeIds_, vector<string>) };
    inline CreateRayClusterRequest& setVolumeIds(const vector<string> & volumeIds) { DARABONBA_PTR_SET_VALUE(volumeIds_, volumeIds) };
    inline CreateRayClusterRequest& setVolumeIds(vector<string> && volumeIds) { DARABONBA_PTR_SET_RVALUE(volumeIds_, volumeIds) };


    // workerSpec Field Functions 
    bool hasWorkerSpec() const { return this->workerSpec_ != nullptr;};
    void deleteWorkerSpec() { this->workerSpec_ = nullptr;};
    inline const vector<CreateRayClusterRequest::WorkerSpec> & getWorkerSpec() const { DARABONBA_PTR_GET_CONST(workerSpec_, vector<CreateRayClusterRequest::WorkerSpec>) };
    inline vector<CreateRayClusterRequest::WorkerSpec> getWorkerSpec() { DARABONBA_PTR_GET(workerSpec_, vector<CreateRayClusterRequest::WorkerSpec>) };
    inline CreateRayClusterRequest& setWorkerSpec(const vector<CreateRayClusterRequest::WorkerSpec> & workerSpec) { DARABONBA_PTR_SET_VALUE(workerSpec_, workerSpec) };
    inline CreateRayClusterRequest& setWorkerSpec(vector<CreateRayClusterRequest::WorkerSpec> && workerSpec) { DARABONBA_PTR_SET_RVALUE(workerSpec_, workerSpec) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The Ray DPI engine version.
    shared_ptr<string> displayReleaseVersion_ {};
    // The extra parameters. The value must be in JSON format.
    shared_ptr<string> extraParam_ {};
    // The parameters of the Ray cluster head node.
    shared_ptr<CreateRayClusterRequest::HeadSpec> headSpec_ {};
    // The name of the Ray cluster. The name must be 1 to 64 characters in length.
    shared_ptr<string> name_ {};
    // The network connectivity name.
    shared_ptr<string> networkServiceName_ {};
    // The list of managed directory IDs to mount.
    shared_ptr<vector<string>> volumeIds_ {};
    // The parameters of the Ray cluster worker nodes. A maximum of 50 groups are supported.
    shared_ptr<vector<CreateRayClusterRequest::WorkerSpec>> workerSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
