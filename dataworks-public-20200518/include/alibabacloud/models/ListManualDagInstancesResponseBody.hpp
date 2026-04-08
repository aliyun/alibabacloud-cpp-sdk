// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANUALDAGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANUALDAGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListManualDagInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListManualDagInstancesResponseBody() = default ;
    ListManualDagInstancesResponseBody(const ListManualDagInstancesResponseBody &) = default ;
    ListManualDagInstancesResponseBody(ListManualDagInstancesResponseBody &&) = default ;
    ListManualDagInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManualDagInstancesResponseBody() = default ;
    ListManualDagInstancesResponseBody& operator=(const ListManualDagInstancesResponseBody &) = default ;
    ListManualDagInstancesResponseBody& operator=(ListManualDagInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(BeginRunningTime, beginRunningTime_);
        DARABONBA_PTR_TO_JSON(BeginWaitResTime, beginWaitResTime_);
        DARABONBA_PTR_TO_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(CycTime, cycTime_);
        DARABONBA_PTR_TO_JSON(DagId, dagId_);
        DARABONBA_PTR_TO_JSON(DagType, dagType_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginRunningTime, beginRunningTime_);
        DARABONBA_PTR_FROM_JSON(BeginWaitResTime, beginWaitResTime_);
        DARABONBA_PTR_FROM_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(CycTime, cycTime_);
        DARABONBA_PTR_FROM_JSON(DagId, dagId_);
        DARABONBA_PTR_FROM_JSON(DagType, dagType_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginRunningTime_ == nullptr
        && this->beginWaitResTime_ == nullptr && this->beginWaitTimeTime_ == nullptr && this->bizDate_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr
        && this->cycTime_ == nullptr && this->dagId_ == nullptr && this->dagType_ == nullptr && this->finishTime_ == nullptr && this->instanceId_ == nullptr
        && this->modifyTime_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->paramValues_ == nullptr && this->status_ == nullptr
        && this->taskType_ == nullptr; };
      // beginRunningTime Field Functions 
      bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
      void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
      inline int64_t getBeginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
      inline Instances& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


      // beginWaitResTime Field Functions 
      bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
      void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
      inline int64_t getBeginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
      inline Instances& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


      // beginWaitTimeTime Field Functions 
      bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
      void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
      inline int64_t getBeginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
      inline Instances& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline int64_t getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
      inline Instances& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Instances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Instances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // cycTime Field Functions 
      bool hasCycTime() const { return this->cycTime_ != nullptr;};
      void deleteCycTime() { this->cycTime_ = nullptr;};
      inline int64_t getCycTime() const { DARABONBA_PTR_GET_DEFAULT(cycTime_, 0L) };
      inline Instances& setCycTime(int64_t cycTime) { DARABONBA_PTR_SET_VALUE(cycTime_, cycTime) };


      // dagId Field Functions 
      bool hasDagId() const { return this->dagId_ != nullptr;};
      void deleteDagId() { this->dagId_ = nullptr;};
      inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
      inline Instances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


      // dagType Field Functions 
      bool hasDagType() const { return this->dagType_ != nullptr;};
      void deleteDagType() { this->dagType_ = nullptr;};
      inline string getDagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
      inline Instances& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Instances& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Instances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Instances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline Instances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Instances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // paramValues Field Functions 
      bool hasParamValues() const { return this->paramValues_ != nullptr;};
      void deleteParamValues() { this->paramValues_ = nullptr;};
      inline string getParamValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
      inline Instances& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Instances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The time when the instance started to run.
      shared_ptr<int64_t> beginRunningTime_ {};
      // The time when the instance started to wait for resources.
      shared_ptr<int64_t> beginWaitResTime_ {};
      // The time when the instance started to wait to be scheduled.
      shared_ptr<int64_t> beginWaitTimeTime_ {};
      // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
      shared_ptr<int64_t> bizDate_ {};
      // The time when the instance was generated.
      shared_ptr<int64_t> createTime_ {};
      // The name of the account that is used to run the instance. For example, if you use an account named Test to run the instance, the value of this parameter is Test.
      shared_ptr<string> createUser_ {};
      // The time when the instance was scheduled to run.
      shared_ptr<int64_t> cycTime_ {};
      // The ID of the DAG for the instance in the manually triggered workflow.
      shared_ptr<int64_t> dagId_ {};
      // The type of the manually triggered workflow.
      shared_ptr<string> dagType_ {};
      // The time when the instance finished running.
      shared_ptr<int64_t> finishTime_ {};
      // The instance ID.
      shared_ptr<int64_t> instanceId_ {};
      // The time when the instance was last modified.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the node in the manually triggered workflow.
      shared_ptr<int64_t> nodeId_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The parameters related to the instance.
      shared_ptr<string> paramValues_ {};
      // The status of the instance. Valid values:
      // 
      // *   NOT_RUN: The instance is not run.
      // *   WAIT_TIME: The instance is waiting for its scheduling time to arrive.
      // *   WAIT_RESOURCE: The instance is waiting for resources.
      // *   RUNNING: The instance is running.
      // *   CHECKING: Data quality is being checked for the instance.
      // *   CHECKING_CONDITION: Branch conditions are being checked for the instance.
      // *   FAILURE: The instance fails to be run.
      // *   SUCCESS: The instance is successfully run.
      shared_ptr<string> status_ {};
      // The scheduling type of the node. Valid values:
      // 
      // *   NORMAL(0): The node is an auto triggered node. The scheduling system regularly runs the node.
      // *   MANUAL(1): The node is a manually triggered node. The scheduling system does not regularly run the node.
      // *   PAUSE(2): The node is a frozen node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
      // *   SKIP(3): The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
      // *   SKIP_UNCHOOSE(4): The node is an unselected node in a temporary workflow. This type of node exists only in temporary workflows. The scheduling system sets the status of the node to successful when the scheduling system starts to run the node.
      // *   SKIP_CYCLE(5): The node is a node that is scheduled by week or month and is waiting for the scheduling time to arrive. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
      // *   CONDITION_UNCHOOSE(6): The node is not selected by its ancestor branch node and is run as a dry-run node.
      // *   REALTIME_DEPRECATED(7): The node has instances that are generated in real time but deprecated. The scheduling system sets the status of the node to successful.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListManualDagInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListManualDagInstancesResponseBody::Instances>) };
    inline vector<ListManualDagInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListManualDagInstancesResponseBody::Instances>) };
    inline ListManualDagInstancesResponseBody& setInstances(const vector<ListManualDagInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListManualDagInstancesResponseBody& setInstances(vector<ListManualDagInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManualDagInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances in the manually triggered workflow.
    shared_ptr<vector<ListManualDagInstancesResponseBody::Instances>> instances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
