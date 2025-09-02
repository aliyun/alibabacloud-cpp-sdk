// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetManualDagInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManualDagInstancesResponseBodyInstances& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetManualDagInstancesResponseBodyInstances& obj) { 
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
    GetManualDagInstancesResponseBodyInstances() = default ;
    GetManualDagInstancesResponseBodyInstances(const GetManualDagInstancesResponseBodyInstances &) = default ;
    GetManualDagInstancesResponseBodyInstances(GetManualDagInstancesResponseBodyInstances &&) = default ;
    GetManualDagInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManualDagInstancesResponseBodyInstances() = default ;
    GetManualDagInstancesResponseBodyInstances& operator=(const GetManualDagInstancesResponseBodyInstances &) = default ;
    GetManualDagInstancesResponseBodyInstances& operator=(GetManualDagInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginRunningTime_ != nullptr
        && this->beginWaitResTime_ != nullptr && this->beginWaitTimeTime_ != nullptr && this->bizDate_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr
        && this->cycTime_ != nullptr && this->dagId_ != nullptr && this->dagType_ != nullptr && this->finishTime_ != nullptr && this->instanceId_ != nullptr
        && this->modifyTime_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->paramValues_ != nullptr && this->status_ != nullptr
        && this->taskType_ != nullptr; };
    // beginRunningTime Field Functions 
    bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
    void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
    inline int64_t beginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


    // beginWaitResTime Field Functions 
    bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
    void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
    inline int64_t beginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


    // beginWaitTimeTime Field Functions 
    bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
    void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
    inline int64_t beginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // cycTime Field Functions 
    bool hasCycTime() const { return this->cycTime_ != nullptr;};
    void deleteCycTime() { this->cycTime_ = nullptr;};
    inline int64_t cycTime() const { DARABONBA_PTR_GET_DEFAULT(cycTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setCycTime(int64_t cycTime) { DARABONBA_PTR_SET_VALUE(cycTime_, cycTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagType Field Functions 
    bool hasDagType() const { return this->dagType_ != nullptr;};
    void deleteDagType() { this->dagType_ = nullptr;};
    inline string dagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetManualDagInstancesResponseBodyInstances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetManualDagInstancesResponseBodyInstances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the instance started to run.
    std::shared_ptr<int64_t> beginRunningTime_ = nullptr;
    // The time when the instance started to wait for resources.
    std::shared_ptr<int64_t> beginWaitResTime_ = nullptr;
    // The time when the instance started to wait to be scheduled.
    std::shared_ptr<int64_t> beginWaitTimeTime_ = nullptr;
    // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    // The time when the instance was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The user who performed the operation.
    std::shared_ptr<string> createUser_ = nullptr;
    // The time when the instance was scheduled to run.
    std::shared_ptr<int64_t> cycTime_ = nullptr;
    // The ID of the DAG for the manually triggered workflow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The type of the manually triggered workflow.
    std::shared_ptr<string> dagType_ = nullptr;
    // The time when the instance finished running.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The ID of the instance in the manually triggered workflow.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The time when the instance was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The ID of the node in the manually triggered workflow.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The parameters related to the instance.
    std::shared_ptr<string> paramValues_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The scheduling type of the node that generates the instance. Valid values:
    // 
    // *   NORMAL(0): The node is an auto triggered node. The scheduling system regularly runs the node.
    // *   MANUAL(1): The node is a manually triggered node. The scheduling system does not regularly run the node.
    // *   PAUSE(2): The node is a paused node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
    // *   SKIP(3): The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
    // *   SKIP_UNCHOOSE(4): The node is an unselected node in a temporary workflow. This type of node exists only in temporary workflows. The scheduling system sets the status of the node to successful when the scheduling system starts to run the node.
    // *   SKIP_CYCLE(5): The node is a node that is scheduled by week or month and is waiting for the scheduling time to arrive. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
    // *   CONDITION_UNCHOOSE(6): The node is not selected by its ancestor branch node and is run as a dry-run node.
    // *   REALTIME_DEPRECATED(7): The node has instances that are generated in real time but deprecated. The scheduling system sets the status of the node to successful.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
