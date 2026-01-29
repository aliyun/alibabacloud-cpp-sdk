// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYCLUSTERRESPONSEBODY_HPP_
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
  class ListRayClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(rayClusters, rayClusters_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(rayClusters, rayClusters_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRayClusterResponseBody() = default ;
    ListRayClusterResponseBody(const ListRayClusterResponseBody &) = default ;
    ListRayClusterResponseBody(ListRayClusterResponseBody &&) = default ;
    ListRayClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayClusterResponseBody() = default ;
    ListRayClusterResponseBody& operator=(const ListRayClusterResponseBody &) = default ;
    ListRayClusterResponseBody& operator=(ListRayClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RayClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayClusters& obj) { 
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(dashboardUrl, dashboardUrl_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(grpcEndpoint, grpcEndpoint_);
        DARABONBA_PTR_TO_JSON(headSpec, headSpec_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(modified, modified_);
        DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(modifier, modifier_);
        DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkServiceName, networkServiceName_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(workerSpec, workerSpec_);
      };
      friend void from_json(const Darabonba::Json& j, RayClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(dashboardUrl, dashboardUrl_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(grpcEndpoint, grpcEndpoint_);
        DARABONBA_PTR_FROM_JSON(headSpec, headSpec_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(modified, modified_);
        DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkServiceName, networkServiceName_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(workerSpec, workerSpec_);
      };
      RayClusters() = default ;
      RayClusters(const RayClusters &) = default ;
      RayClusters(RayClusters &&) = default ;
      RayClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayClusters() = default ;
      RayClusters& operator=(const RayClusters &) = default ;
      RayClusters& operator=(RayClusters &&) = default ;
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
          DARABONBA_PTR_TO_JSON(replica, replica_);
        };
        friend void from_json(const Darabonba::Json& j, HeadSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(enableAutoScaling, enableAutoScaling_);
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
        && this->enableAutoScaling_ == nullptr && this->idleTimeoutSeconds_ == nullptr && this->memory_ == nullptr && this->queueName_ == nullptr && this->replica_ == nullptr; };
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


        // replica Field Functions 
        bool hasReplica() const { return this->replica_ != nullptr;};
        void deleteReplica() { this->replica_ = nullptr;};
        inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
        inline HeadSpec& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      protected:
        shared_ptr<string> cpu_ {};
        shared_ptr<bool> enableAutoScaling_ {};
        shared_ptr<int32_t> idleTimeoutSeconds_ {};
        shared_ptr<string> memory_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<int32_t> replica_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dashboardUrl_ == nullptr && this->description_ == nullptr
        && this->displayReleaseVersion_ == nullptr && this->grpcEndpoint_ == nullptr && this->headSpec_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr
        && this->modified_ == nullptr && this->modifiedTime_ == nullptr && this->modifier_ == nullptr && this->modifierName_ == nullptr && this->name_ == nullptr
        && this->networkServiceName_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->userId_ == nullptr && this->workerSpec_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline RayClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline RayClusters& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline RayClusters& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline RayClusters& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // dashboardUrl Field Functions 
      bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
      void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
      inline string getDashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
      inline RayClusters& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RayClusters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline RayClusters& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // grpcEndpoint Field Functions 
      bool hasGrpcEndpoint() const { return this->grpcEndpoint_ != nullptr;};
      void deleteGrpcEndpoint() { this->grpcEndpoint_ = nullptr;};
      inline string getGrpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(grpcEndpoint_, "") };
      inline RayClusters& setGrpcEndpoint(string grpcEndpoint) { DARABONBA_PTR_SET_VALUE(grpcEndpoint_, grpcEndpoint) };


      // headSpec Field Functions 
      bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
      void deleteHeadSpec() { this->headSpec_ = nullptr;};
      inline const RayClusters::HeadSpec & getHeadSpec() const { DARABONBA_PTR_GET_CONST(headSpec_, RayClusters::HeadSpec) };
      inline RayClusters::HeadSpec getHeadSpec() { DARABONBA_PTR_GET(headSpec_, RayClusters::HeadSpec) };
      inline RayClusters& setHeadSpec(const RayClusters::HeadSpec & headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };
      inline RayClusters& setHeadSpec(RayClusters::HeadSpec && headSpec) { DARABONBA_PTR_SET_RVALUE(headSpec_, headSpec) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RayClusters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RayClusters& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline bool getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, false) };
      inline RayClusters& setModified(bool modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline RayClusters& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline RayClusters& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifierName Field Functions 
      bool hasModifierName() const { return this->modifierName_ != nullptr;};
      void deleteModifierName() { this->modifierName_ = nullptr;};
      inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
      inline RayClusters& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RayClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkServiceName Field Functions 
      bool hasNetworkServiceName() const { return this->networkServiceName_ != nullptr;};
      void deleteNetworkServiceName() { this->networkServiceName_ = nullptr;};
      inline string getNetworkServiceName() const { DARABONBA_PTR_GET_DEFAULT(networkServiceName_, "") };
      inline RayClusters& setNetworkServiceName(string networkServiceName) { DARABONBA_PTR_SET_VALUE(networkServiceName_, networkServiceName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline RayClusters& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline RayClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline RayClusters& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workerSpec Field Functions 
      bool hasWorkerSpec() const { return this->workerSpec_ != nullptr;};
      void deleteWorkerSpec() { this->workerSpec_ = nullptr;};
      inline const vector<RayClusters::WorkerSpec> & getWorkerSpec() const { DARABONBA_PTR_GET_CONST(workerSpec_, vector<RayClusters::WorkerSpec>) };
      inline vector<RayClusters::WorkerSpec> getWorkerSpec() { DARABONBA_PTR_GET(workerSpec_, vector<RayClusters::WorkerSpec>) };
      inline RayClusters& setWorkerSpec(const vector<RayClusters::WorkerSpec> & workerSpec) { DARABONBA_PTR_SET_VALUE(workerSpec_, workerSpec) };
      inline RayClusters& setWorkerSpec(vector<RayClusters::WorkerSpec> && workerSpec) { DARABONBA_PTR_SET_RVALUE(workerSpec_, workerSpec) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> dashboardUrl_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayReleaseVersion_ {};
      shared_ptr<string> grpcEndpoint_ {};
      shared_ptr<RayClusters::HeadSpec> headSpec_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> modified_ {};
      shared_ptr<int64_t> modifiedTime_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifierName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> networkServiceName_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<vector<RayClusters::WorkerSpec>> workerSpec_ {};
    };

    virtual bool empty() const override { return this->rayClusters_ == nullptr
        && this->requestId_ == nullptr; };
    // rayClusters Field Functions 
    bool hasRayClusters() const { return this->rayClusters_ != nullptr;};
    void deleteRayClusters() { this->rayClusters_ = nullptr;};
    inline const vector<ListRayClusterResponseBody::RayClusters> & getRayClusters() const { DARABONBA_PTR_GET_CONST(rayClusters_, vector<ListRayClusterResponseBody::RayClusters>) };
    inline vector<ListRayClusterResponseBody::RayClusters> getRayClusters() { DARABONBA_PTR_GET(rayClusters_, vector<ListRayClusterResponseBody::RayClusters>) };
    inline ListRayClusterResponseBody& setRayClusters(const vector<ListRayClusterResponseBody::RayClusters> & rayClusters) { DARABONBA_PTR_SET_VALUE(rayClusters_, rayClusters) };
    inline ListRayClusterResponseBody& setRayClusters(vector<ListRayClusterResponseBody::RayClusters> && rayClusters) { DARABONBA_PTR_SET_RVALUE(rayClusters_, rayClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRayClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListRayClusterResponseBody::RayClusters>> rayClusters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
