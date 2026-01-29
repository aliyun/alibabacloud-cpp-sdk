// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERAYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERAYCLUSTERREQUEST_HPP_
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
  class UpdateRayClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRayClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(extraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(headSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_TO_JSON(workerSpec, workerSpec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRayClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(extraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(headSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkServiceName, networkServiceName_);
      DARABONBA_PTR_FROM_JSON(workerSpec, workerSpec_);
    };
    UpdateRayClusterRequest() = default ;
    UpdateRayClusterRequest(const UpdateRayClusterRequest &) = default ;
    UpdateRayClusterRequest(UpdateRayClusterRequest &&) = default ;
    UpdateRayClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRayClusterRequest() = default ;
    UpdateRayClusterRequest& operator=(const UpdateRayClusterRequest &) = default ;
    UpdateRayClusterRequest& operator=(UpdateRayClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
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
        && this->groupName_ == nullptr && this->maxReplica_ == nullptr && this->memory_ == nullptr && this->minReplica_ == nullptr && this->queueName_ == nullptr
        && this->replica_ == nullptr && this->workerType_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline WorkerSpec& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


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
      shared_ptr<string> groupName_ {};
      shared_ptr<int32_t> maxReplica_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<int32_t> minReplica_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<int32_t> replica_ {};
      shared_ptr<string> workerType_ {};
    };

    class HeadSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeadSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(enableAutoScaling, enableAutoScaling_);
        DARABONBA_PTR_TO_JSON(idleTimeoutSeconds, idleTimeoutSeconds_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
      };
      friend void from_json(const Darabonba::Json& j, HeadSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
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
        && this->enableAutoScaling_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr; };
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
      shared_ptr<int32_t> idleTimeoutSeconds_ {};
      shared_ptr<string> memory_ {};
      shared_ptr<string> queueName_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayReleaseVersion_ == nullptr && this->extraParam_ == nullptr && this->headSpec_ == nullptr && this->name_ == nullptr && this->networkServiceName_ == nullptr
        && this->workerSpec_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRayClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline UpdateRayClusterRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline UpdateRayClusterRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline const UpdateRayClusterRequest::HeadSpec & getHeadSpec() const { DARABONBA_PTR_GET_CONST(headSpec_, UpdateRayClusterRequest::HeadSpec) };
    inline UpdateRayClusterRequest::HeadSpec getHeadSpec() { DARABONBA_PTR_GET(headSpec_, UpdateRayClusterRequest::HeadSpec) };
    inline UpdateRayClusterRequest& setHeadSpec(const UpdateRayClusterRequest::HeadSpec & headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };
    inline UpdateRayClusterRequest& setHeadSpec(UpdateRayClusterRequest::HeadSpec && headSpec) { DARABONBA_PTR_SET_RVALUE(headSpec_, headSpec) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRayClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkServiceName Field Functions 
    bool hasNetworkServiceName() const { return this->networkServiceName_ != nullptr;};
    void deleteNetworkServiceName() { this->networkServiceName_ = nullptr;};
    inline string getNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(networkServiceName_, "") };
    inline UpdateRayClusterRequest& setNetworkServiceName(string networkServiceName) { DARABONBA_PTR_SET_VALUE(networkServiceName_, networkServiceName) };


    // workerSpec Field Functions 
    bool hasWorkerSpec() const { return this->workerSpec_ != nullptr;};
    void deleteWorkerSpec() { this->workerSpec_ = nullptr;};
    inline const vector<UpdateRayClusterRequest::WorkerSpec> & getWorkerSpec() const { DARABONBA_PTR_GET_CONST(workerSpec_, vector<UpdateRayClusterRequest::WorkerSpec>) };
    inline vector<UpdateRayClusterRequest::WorkerSpec> getWorkerSpec() { DARABONBA_PTR_GET(workerSpec_, vector<UpdateRayClusterRequest::WorkerSpec>) };
    inline UpdateRayClusterRequest& setWorkerSpec(const vector<UpdateRayClusterRequest::WorkerSpec> & workerSpec) { DARABONBA_PTR_SET_VALUE(workerSpec_, workerSpec) };
    inline UpdateRayClusterRequest& setWorkerSpec(vector<UpdateRayClusterRequest::WorkerSpec> && workerSpec) { DARABONBA_PTR_SET_RVALUE(workerSpec_, workerSpec) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> displayReleaseVersion_ {};
    shared_ptr<string> extraParam_ {};
    shared_ptr<UpdateRayClusterRequest::HeadSpec> headSpec_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> networkServiceName_ {};
    shared_ptr<vector<UpdateRayClusterRequest::WorkerSpec>> workerSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
