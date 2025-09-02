// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstanceHistoryResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CycTime, cycTime_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagType, dagType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceHistoryId, instanceHistoryId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CycTime, cycTime_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagType, dagType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceHistoryId, instanceHistoryId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListInstanceHistoryResponseBodyInstances() = default ;
    ListInstanceHistoryResponseBodyInstances(const ListInstanceHistoryResponseBodyInstances &) = default ;
    ListInstanceHistoryResponseBodyInstances(ListInstanceHistoryResponseBodyInstances &&) = default ;
    ListInstanceHistoryResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryResponseBodyInstances() = default ;
    ListInstanceHistoryResponseBodyInstances& operator=(const ListInstanceHistoryResponseBodyInstances &) = default ;
    ListInstanceHistoryResponseBodyInstances& operator=(ListInstanceHistoryResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginRunningTime_ != nullptr
        && this->beginWaitResTime_ != nullptr && this->beginWaitTimeTime_ != nullptr && this->bizdate_ != nullptr && this->createTime_ != nullptr && this->cycTime_ != nullptr
        && this->dagId_ != nullptr && this->dagType_ != nullptr && this->errorMessage_ != nullptr && this->finishTime_ != nullptr && this->instanceHistoryId_ != nullptr
        && this->instanceId_ != nullptr && this->modifyTime_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->status_ != nullptr
        && this->taskType_ != nullptr; };
    // beginRunningTime Field Functions 
    bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
    void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
    inline int64_t beginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


    // beginWaitResTime Field Functions 
    bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
    void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
    inline int64_t beginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


    // beginWaitTimeTime Field Functions 
    bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
    void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
    inline int64_t beginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cycTime Field Functions 
    bool hasCycTime() const { return this->cycTime_ != nullptr;};
    void deleteCycTime() { this->cycTime_ = nullptr;};
    inline int64_t cycTime() const { DARABONBA_PTR_GET_DEFAULT(cycTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setCycTime(int64_t cycTime) { DARABONBA_PTR_SET_VALUE(cycTime_, cycTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagType Field Functions 
    bool hasDagType() const { return this->dagType_ != nullptr;};
    void deleteDagType() { this->dagType_ = nullptr;};
    inline string dagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
    inline ListInstanceHistoryResponseBodyInstances& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstanceHistoryResponseBodyInstances& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceHistoryId Field Functions 
    bool hasInstanceHistoryId() const { return this->instanceHistoryId_ != nullptr;};
    void deleteInstanceHistoryId() { this->instanceHistoryId_ = nullptr;};
    inline int64_t instanceHistoryId() const { DARABONBA_PTR_GET_DEFAULT(instanceHistoryId_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setInstanceHistoryId(int64_t instanceHistoryId) { DARABONBA_PTR_SET_VALUE(instanceHistoryId_, instanceHistoryId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListInstanceHistoryResponseBodyInstances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListInstanceHistoryResponseBodyInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceHistoryResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListInstanceHistoryResponseBodyInstances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the instance started to be run. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> beginRunningTime_ = nullptr;
    // The time when the instance started to wait for resources.
    std::shared_ptr<int64_t> beginWaitResTime_ = nullptr;
    // The time when the instance started to wait to be scheduled.
    std::shared_ptr<int64_t> beginWaitTimeTime_ = nullptr;
    // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The time when the instance was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the node started to be run. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> cycTime_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // Indicates whether the instance is associated with a monitoring rule in Data Quality. Valid values:
    // 
    // *   0: The instance is associated with a monitoring rule in Data Quality.
    // *   1: The instance is not associated with a monitoring rule in Data Quality.
    std::shared_ptr<string> dagType_ = nullptr;
    // The error message. This parameter is deprecated. You can call the GetInstanceLog operation to query the error information related to the node.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the running of the node was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The historical record number of the instance.
    std::shared_ptr<int64_t> instanceHistoryId_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The time when the node was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The status of the node that generates the instance. Valid values:
    // 
    // *   NOT_RUN: The node is not run.
    // *   WAIT_TIME: The node is waiting for the scheduling time to arrive.
    // *   WAIT_RESOURCE: The node is waiting for resources.
    // *   RUNNING: The node is running.
    // *   CHECKING: Data quality is being checked for the node.
    // *   CHECKING_CONDITION: Branch conditions are being checked for the node.
    // *   FAILURE: The node fails to be run.
    // *   SUCCESS: The node is successfully run.
    std::shared_ptr<string> status_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL(0): The node is an auto triggered node. The scheduling system regularly runs the node.
    // *   MANUAL(1): The node is a manually triggered node. The scheduling system does not regularly run the node.
    // *   PAUSE(2): The node is a frozen node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
    // *   SKIP(3): The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
    // *   SKIP_UNCHOOSE(4): The node is an unselected node in a temporary workflow. This type of node exists only in temporary workflows. The scheduling system sets the status of the node to successful when the scheduling system starts to run the node.
    // *   SKIP_CYCLE(5): The node is a node that is scheduled by the week or month and is waiting for the scheduling time to arrive. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
    // *   CONDITION_UNCHOOSE(6): The node is not selected by its ancestor branch node and is run as a dry-run node.
    // *   REALTIME_DEPRECATED(7): The node has instances that are generated in real time but deprecated. The scheduling system sets the status of the node to successful.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
