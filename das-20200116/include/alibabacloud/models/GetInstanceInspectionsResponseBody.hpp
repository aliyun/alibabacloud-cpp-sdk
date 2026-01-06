// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceInspectionsResponseBody() = default ;
    GetInstanceInspectionsResponseBody(const GetInstanceInspectionsResponseBody &) = default ;
    GetInstanceInspectionsResponseBody(GetInstanceInspectionsResponseBody &&) = default ;
    GetInstanceInspectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsResponseBody() = default ;
    GetInstanceInspectionsResponseBody& operator=(const GetInstanceInspectionsResponseBody &) = default ;
    GetInstanceInspectionsResponseBody& operator=(GetInstanceInspectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AutoFunction, autoFunction_);
          DARABONBA_ANY_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(EnableDasPro, enableDasPro_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Instance, instance_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_ANY_TO_JSON(ScoreMap, scoreMap_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoFunction, autoFunction_);
          DARABONBA_ANY_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(EnableDasPro, enableDasPro_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_ANY_FROM_JSON(ScoreMap, scoreMap_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Instance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instance& obj) { 
            DARABONBA_PTR_TO_JSON(AccountId, accountId_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Cpu, cpu_);
            DARABONBA_PTR_TO_JSON(Engine, engine_);
            DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
            DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
            DARABONBA_PTR_TO_JSON(InstanceArea, instanceArea_);
            DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(Memory, memory_);
            DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Storage, storage_);
            DARABONBA_PTR_TO_JSON(Uuid, uuid_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Instance& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
            DARABONBA_PTR_FROM_JSON(Engine, engine_);
            DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
            DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
            DARABONBA_PTR_FROM_JSON(InstanceArea, instanceArea_);
            DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(Memory, memory_);
            DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Storage, storage_);
            DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          Instance() = default ;
          Instance(const Instance &) = default ;
          Instance(Instance &&) = default ;
          Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instance() = default ;
          Instance& operator=(const Instance &) = default ;
          Instance& operator=(Instance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountId_ == nullptr
        && this->category_ == nullptr && this->cpu_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->instanceAlias_ == nullptr
        && this->instanceArea_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->memory_ == nullptr && this->networkType_ == nullptr
        && this->nodeId_ == nullptr && this->region_ == nullptr && this->storage_ == nullptr && this->uuid_ == nullptr && this->vpcId_ == nullptr; };
          // accountId Field Functions 
          bool hasAccountId() const { return this->accountId_ != nullptr;};
          void deleteAccountId() { this->accountId_ = nullptr;};
          inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
          inline Instance& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline Instance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // cpu Field Functions 
          bool hasCpu() const { return this->cpu_ != nullptr;};
          void deleteCpu() { this->cpu_ = nullptr;};
          inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
          inline Instance& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


          // engine Field Functions 
          bool hasEngine() const { return this->engine_ != nullptr;};
          void deleteEngine() { this->engine_ = nullptr;};
          inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
          inline Instance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


          // engineVersion Field Functions 
          bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
          void deleteEngineVersion() { this->engineVersion_ = nullptr;};
          inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
          inline Instance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


          // instanceAlias Field Functions 
          bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
          void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
          inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
          inline Instance& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


          // instanceArea Field Functions 
          bool hasInstanceArea() const { return this->instanceArea_ != nullptr;};
          void deleteInstanceArea() { this->instanceArea_ = nullptr;};
          inline string getInstanceArea() const { DARABONBA_PTR_GET_DEFAULT(instanceArea_, "") };
          inline Instance& setInstanceArea(string instanceArea) { DARABONBA_PTR_SET_VALUE(instanceArea_, instanceArea) };


          // instanceClass Field Functions 
          bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
          void deleteInstanceClass() { this->instanceClass_ = nullptr;};
          inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
          inline Instance& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // memory Field Functions 
          bool hasMemory() const { return this->memory_ != nullptr;};
          void deleteMemory() { this->memory_ = nullptr;};
          inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
          inline Instance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          // networkType Field Functions 
          bool hasNetworkType() const { return this->networkType_ != nullptr;};
          void deleteNetworkType() { this->networkType_ = nullptr;};
          inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
          inline Instance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline Instance& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Instance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // storage Field Functions 
          bool hasStorage() const { return this->storage_ != nullptr;};
          void deleteStorage() { this->storage_ = nullptr;};
          inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
          inline Instance& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline Instance& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Instance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The account ID. You can view the ID of the logon account by moving the pointer over the profile in the Alibaba Cloud management console.
          shared_ptr<string> accountId_ {};
          // The connection mode of the instance. Valid values:
          // 
          // *   **standard**: standard mode.
          // *   **safe**: database proxy mode.
          shared_ptr<string> category_ {};
          // The CPU specification of the instance. For example, if a value of 8 is returned, the instance has eight CPU cores.
          shared_ptr<string> cpu_ {};
          // The database engine. Valid values:
          // 
          // *   **MySQL**
          // *   **Redis**
          // *   **PolarDBMySQL**
          shared_ptr<string> engine_ {};
          // The version number of the database engine.
          shared_ptr<string> engineVersion_ {};
          // The instance name.
          shared_ptr<string> instanceAlias_ {};
          // The type of the instance on which the database is deployed. Valid values:
          // 
          // *   **RDS**: an Alibaba Cloud database instance.
          // *   **ECS**: an Elastic Compute Service (ECS) instance on which a self-managed database is deployed.
          // *   **IDC**: a self-managed database instance that is not deployed on Alibaba Cloud.
          // 
          // >  The value IDC indicates that the instance is deployed in a data center.
          shared_ptr<string> instanceArea_ {};
          // The instance type.
          shared_ptr<string> instanceClass_ {};
          // The instance ID.
          shared_ptr<string> instanceId_ {};
          // The memory capacity of the database that is deployed on the instance. Unit: MB.
          shared_ptr<int32_t> memory_ {};
          // The network type of the instance.
          shared_ptr<string> networkType_ {};
          // The ID of the node on the instance.
          shared_ptr<string> nodeId_ {};
          // The region ID of the instance.
          shared_ptr<string> region_ {};
          // The storage space of the instance. Unit: GB.
          shared_ptr<int32_t> storage_ {};
          // The unique identifier of the instance.
          shared_ptr<string> uuid_ {};
          // The ID of the virtual private cloud (VPC) in which the instance is deployed.
          shared_ptr<string> vpcId_ {};
        };

        class AutoFunction : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AutoFunction& obj) { 
            DARABONBA_PTR_TO_JSON(AutoIndex, autoIndex_);
            DARABONBA_PTR_TO_JSON(AutoLimitedSql, autoLimitedSql_);
            DARABONBA_PTR_TO_JSON(AutoResourceOptimize, autoResourceOptimize_);
            DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
            DARABONBA_PTR_TO_JSON(EventSubscription, eventSubscription_);
          };
          friend void from_json(const Darabonba::Json& j, AutoFunction& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoIndex, autoIndex_);
            DARABONBA_PTR_FROM_JSON(AutoLimitedSql, autoLimitedSql_);
            DARABONBA_PTR_FROM_JSON(AutoResourceOptimize, autoResourceOptimize_);
            DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
            DARABONBA_PTR_FROM_JSON(EventSubscription, eventSubscription_);
          };
          AutoFunction() = default ;
          AutoFunction(const AutoFunction &) = default ;
          AutoFunction(AutoFunction &&) = default ;
          AutoFunction(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AutoFunction() = default ;
          AutoFunction& operator=(const AutoFunction &) = default ;
          AutoFunction& operator=(AutoFunction &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoIndex_ == nullptr
        && this->autoLimitedSql_ == nullptr && this->autoResourceOptimize_ == nullptr && this->autoScale_ == nullptr && this->eventSubscription_ == nullptr; };
          // autoIndex Field Functions 
          bool hasAutoIndex() const { return this->autoIndex_ != nullptr;};
          void deleteAutoIndex() { this->autoIndex_ = nullptr;};
          inline int32_t getAutoIndex() const { DARABONBA_PTR_GET_DEFAULT(autoIndex_, 0) };
          inline AutoFunction& setAutoIndex(int32_t autoIndex) { DARABONBA_PTR_SET_VALUE(autoIndex_, autoIndex) };


          // autoLimitedSql Field Functions 
          bool hasAutoLimitedSql() const { return this->autoLimitedSql_ != nullptr;};
          void deleteAutoLimitedSql() { this->autoLimitedSql_ = nullptr;};
          inline int32_t getAutoLimitedSql() const { DARABONBA_PTR_GET_DEFAULT(autoLimitedSql_, 0) };
          inline AutoFunction& setAutoLimitedSql(int32_t autoLimitedSql) { DARABONBA_PTR_SET_VALUE(autoLimitedSql_, autoLimitedSql) };


          // autoResourceOptimize Field Functions 
          bool hasAutoResourceOptimize() const { return this->autoResourceOptimize_ != nullptr;};
          void deleteAutoResourceOptimize() { this->autoResourceOptimize_ = nullptr;};
          inline int32_t getAutoResourceOptimize() const { DARABONBA_PTR_GET_DEFAULT(autoResourceOptimize_, 0) };
          inline AutoFunction& setAutoResourceOptimize(int32_t autoResourceOptimize) { DARABONBA_PTR_SET_VALUE(autoResourceOptimize_, autoResourceOptimize) };


          // autoScale Field Functions 
          bool hasAutoScale() const { return this->autoScale_ != nullptr;};
          void deleteAutoScale() { this->autoScale_ = nullptr;};
          inline int32_t getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, 0) };
          inline AutoFunction& setAutoScale(int32_t autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


          // eventSubscription Field Functions 
          bool hasEventSubscription() const { return this->eventSubscription_ != nullptr;};
          void deleteEventSubscription() { this->eventSubscription_ = nullptr;};
          inline int32_t getEventSubscription() const { DARABONBA_PTR_GET_DEFAULT(eventSubscription_, 0) };
          inline AutoFunction& setEventSubscription(int32_t eventSubscription) { DARABONBA_PTR_SET_VALUE(eventSubscription_, eventSubscription) };


        protected:
          // Indicates whether the feature of automatically creating and deleting indexes is enabled. Valid values:
          // 
          // *   **0**: disabled.
          // *   **1**: enabled.
          // *   **2**: not supported.
          shared_ptr<int32_t> autoIndex_ {};
          // Indicates whether the automatic throttling feature is enabled. Valid values:
          // 
          // *   **0**: disabled.
          // *   **1**: enabled.
          // *   **2**: not supported.
          shared_ptr<int32_t> autoLimitedSql_ {};
          // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
          // 
          // *   **0**: disabled.
          // *   **1**: enabled.
          // *   **2**: not supported.
          shared_ptr<int32_t> autoResourceOptimize_ {};
          // Indicates whether the auto scaling feature is enabled. Valid values:
          // 
          // *   **0**: disabled.
          // *   **1**: enabled.
          // *   **2**: not supported.
          shared_ptr<int32_t> autoScale_ {};
          // Indicates whether the event subscription feature is enabled. Valid values:
          // 
          // *   **0**: disabled.
          // *   **1**: enabled.
          // *   **2**: not supported.
          shared_ptr<int32_t> eventSubscription_ {};
        };

        virtual bool empty() const override { return this->autoFunction_ == nullptr
        && this->data_ == nullptr && this->enableDasPro_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr && this->instance_ == nullptr
        && this->score_ == nullptr && this->scoreMap_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->taskType_ == nullptr; };
        // autoFunction Field Functions 
        bool hasAutoFunction() const { return this->autoFunction_ != nullptr;};
        void deleteAutoFunction() { this->autoFunction_ = nullptr;};
        inline const List::AutoFunction & getAutoFunction() const { DARABONBA_PTR_GET_CONST(autoFunction_, List::AutoFunction) };
        inline List::AutoFunction getAutoFunction() { DARABONBA_PTR_GET(autoFunction_, List::AutoFunction) };
        inline List& setAutoFunction(const List::AutoFunction & autoFunction) { DARABONBA_PTR_SET_VALUE(autoFunction_, autoFunction) };
        inline List& setAutoFunction(List::AutoFunction && autoFunction) { DARABONBA_PTR_SET_RVALUE(autoFunction_, autoFunction) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline List& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline List& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // enableDasPro Field Functions 
        bool hasEnableDasPro() const { return this->enableDasPro_ != nullptr;};
        void deleteEnableDasPro() { this->enableDasPro_ = nullptr;};
        inline int32_t getEnableDasPro() const { DARABONBA_PTR_GET_DEFAULT(enableDasPro_, 0) };
        inline List& setEnableDasPro(int32_t enableDasPro) { DARABONBA_PTR_SET_VALUE(enableDasPro_, enableDasPro) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline List& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline const List::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, List::Instance) };
        inline List::Instance getInstance() { DARABONBA_PTR_GET(instance_, List::Instance) };
        inline List& setInstance(const List::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
        inline List& setInstance(List::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline List& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // scoreMap Field Functions 
        bool hasScoreMap() const { return this->scoreMap_ != nullptr;};
        void deleteScoreMap() { this->scoreMap_ = nullptr;};
        inline         const Darabonba::Json & getScoreMap() const { DARABONBA_GET(scoreMap_) };
        Darabonba::Json & getScoreMap() { DARABONBA_GET(scoreMap_) };
        inline List& setScoreMap(const Darabonba::Json & scoreMap) { DARABONBA_SET_VALUE(scoreMap_, scoreMap) };
        inline List& setScoreMap(Darabonba::Json && scoreMap) { DARABONBA_SET_RVALUE(scoreMap_, scoreMap) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
        inline List& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline List& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // Indicates whether the autonomy service is enabled.
        shared_ptr<List::AutoFunction> autoFunction_ {};
        // The data returned.
        Darabonba::Json data_ {};
        // Indicates whether DAS Enterprise Edition is enabled. Valid values:
        // 
        // *   **0**: disabled.
        // *   **1**: enabled.
        // *   **2**: not supported.
        shared_ptr<int32_t> enableDasPro_ {};
        // The end time of the inspection and scoring task. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        // 
        // >  The end time must be later than the start time.
        shared_ptr<int64_t> endTime_ {};
        // The time when the task was created. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> gmtCreate_ {};
        // The information about the instance.
        shared_ptr<List::Instance> instance_ {};
        // The inspection score of the instance.
        shared_ptr<int32_t> score_ {};
        // The scores that are deducted for the instance.
        Darabonba::Json scoreMap_ {};
        // The start time of the inspection and scoring task. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> startTime_ {};
        // The state of the inspection and scoring task. Valid values:
        // 
        // *   **0**: The task is waiting for execution.
        // *   **1**: The task is in progress.
        // *   **2**: The task is complete.
        shared_ptr<int32_t> state_ {};
        // The mode in which the inspection and scoring task was initiated. Valid values:
        // 
        // *   **0**: automatic mode.
        // *   **1**: manual mode.
        shared_ptr<int32_t> taskType_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The detailed information.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number. The value returned is a positive integer. Default value: 1.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page. Default value: 10.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceInspectionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceInspectionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceInspectionsResponseBody::Data) };
    inline GetInstanceInspectionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceInspectionsResponseBody::Data) };
    inline GetInstanceInspectionsResponseBody& setData(const GetInstanceInspectionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceInspectionsResponseBody& setData(GetInstanceInspectionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceInspectionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceInspectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetInstanceInspectionsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The details.
    shared_ptr<GetInstanceInspectionsResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, Successful is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
