// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(Connection, connection_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CycTime, cycTime_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagType, dagType_);
      DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_TO_JSON(PeriodNumber, periodNumber_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskRerunTime, taskRerunTime_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(Connection, connection_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CycTime, cycTime_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagType, dagType_);
      DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(PeriodNumber, periodNumber_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskRerunTime, taskRerunTime_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData(GetInstanceResponseBodyData &&) = default ;
    GetInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData& operator=(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData& operator=(GetInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->beginRunningTime_ != nullptr && this->beginWaitResTime_ != nullptr && this->beginWaitTimeTime_ != nullptr && this->bizdate_ != nullptr && this->businessId_ != nullptr
        && this->connection_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->cycTime_ != nullptr && this->dagId_ != nullptr
        && this->dagType_ != nullptr && this->dqcDescription_ != nullptr && this->dqcType_ != nullptr && this->finishTime_ != nullptr && this->instanceId_ != nullptr
        && this->modifyTime_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr && this->paramValues_ != nullptr
        && this->periodNumber_ != nullptr && this->priority_ != nullptr && this->relatedFlowId_ != nullptr && this->repeatInterval_ != nullptr && this->repeatability_ != nullptr
        && this->status_ != nullptr && this->taskRerunTime_ != nullptr && this->taskType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetInstanceResponseBodyData& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // beginRunningTime Field Functions 
    bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
    void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
    inline int64_t beginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
    inline GetInstanceResponseBodyData& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


    // beginWaitResTime Field Functions 
    bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
    void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
    inline int64_t beginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
    inline GetInstanceResponseBodyData& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


    // beginWaitTimeTime Field Functions 
    bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
    void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
    inline int64_t beginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
    inline GetInstanceResponseBodyData& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetInstanceResponseBodyData& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetInstanceResponseBodyData& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline GetInstanceResponseBodyData& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetInstanceResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetInstanceResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // cycTime Field Functions 
    bool hasCycTime() const { return this->cycTime_ != nullptr;};
    void deleteCycTime() { this->cycTime_ = nullptr;};
    inline int64_t cycTime() const { DARABONBA_PTR_GET_DEFAULT(cycTime_, 0L) };
    inline GetInstanceResponseBodyData& setCycTime(int64_t cycTime) { DARABONBA_PTR_SET_VALUE(cycTime_, cycTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetInstanceResponseBodyData& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagType Field Functions 
    bool hasDagType() const { return this->dagType_ != nullptr;};
    void deleteDagType() { this->dagType_ = nullptr;};
    inline string dagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
    inline GetInstanceResponseBodyData& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline GetInstanceResponseBodyData& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline int32_t dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
    inline GetInstanceResponseBodyData& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetInstanceResponseBodyData& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetInstanceResponseBodyData& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetInstanceResponseBodyData& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetInstanceResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetInstanceResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetInstanceResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline GetInstanceResponseBodyData& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // periodNumber Field Functions 
    bool hasPeriodNumber() const { return this->periodNumber_ != nullptr;};
    void deletePeriodNumber() { this->periodNumber_ = nullptr;};
    inline int32_t periodNumber() const { DARABONBA_PTR_GET_DEFAULT(periodNumber_, 0) };
    inline GetInstanceResponseBodyData& setPeriodNumber(int32_t periodNumber) { DARABONBA_PTR_SET_VALUE(periodNumber_, periodNumber) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetInstanceResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // relatedFlowId Field Functions 
    bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
    void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
    inline int64_t relatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
    inline GetInstanceResponseBodyData& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline GetInstanceResponseBodyData& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline GetInstanceResponseBodyData& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskRerunTime Field Functions 
    bool hasTaskRerunTime() const { return this->taskRerunTime_ != nullptr;};
    void deleteTaskRerunTime() { this->taskRerunTime_ = nullptr;};
    inline int32_t taskRerunTime() const { DARABONBA_PTR_GET_DEFAULT(taskRerunTime_, 0) };
    inline GetInstanceResponseBodyData& setTaskRerunTime(int32_t taskRerunTime) { DARABONBA_PTR_SET_VALUE(taskRerunTime_, taskRerunTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetInstanceResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The time when the instance started to run.
    std::shared_ptr<int64_t> beginRunningTime_ = nullptr;
    // The time when the instance started to wait for resources.
    std::shared_ptr<int64_t> beginWaitResTime_ = nullptr;
    // The time when the instance started to wait to be scheduled.
    std::shared_ptr<int64_t> beginWaitTimeTime_ = nullptr;
    // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The connection string.
    std::shared_ptr<string> connection_ = nullptr;
    // The time when the instance was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the instance.
    std::shared_ptr<string> createUser_ = nullptr;
    // The scheduling time of the instance.
    std::shared_ptr<int64_t> cycTime_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The type of the workflow. Valid values:
    // 
    // *   DAILY: The workflow is used to run auto triggered nodes.
    // *   MANUAL: The workflow is used to run manually triggered nodes.
    // *   SMOKE_TEST: The workflow is used to perform smoke testing.
    // *   SUPPLY_DATA: The workflow is used to backfill data.
    std::shared_ptr<string> dagType_ = nullptr;
    // The table and partition filter expression in Data Quality that are associated with the node.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // Indicates whether the instance is associated with a monitoring rule in Data Quality. Valid values:
    // 
    // *   0: The instance is associated with a monitoring rule in Data Quality.
    // *   1: The instance is not associated with a monitoring rule in Data Quality.
    std::shared_ptr<int32_t> dqcType_ = nullptr;
    // The time when the running of the instance was complete.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The time when the instance was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The owner of the instance.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameters related to the node.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The sequence number of the cycle. This parameter indicates the sequence number of the cycle of the instance on the current day.
    std::shared_ptr<int32_t> periodNumber_ = nullptr;
    // The priority of the instance. Valid values: 1, 3, 5, 7, and 8. A greater value indicates a higher priority. Default value: 1.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workflow to which the node belongs.
    std::shared_ptr<int64_t> relatedFlowId_ = nullptr;
    // The interval at which the node is rerun after the node fails to run. Unit: milliseconds.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // Indicates whether the node that generates the instance can be rerun.
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The status of the node that generates the instance. Valid values:
    // 
    // *   NOT_RUN: The node is not run.
    // *   WAIT_TIME: The node is waiting for its scheduling time to arrive.
    // *   WAIT_RESOURCE: The node is waiting for resources.
    // *   RUNNING: The node is running.
    // *   CHECKING: Data quality is being checked for the node.
    // *   CHECKING_CONDITION: Branch conditions are being checked for the node.
    // *   FAILURE: The node fails to run.
    // *   SUCCESS: The node is successfully run.
    std::shared_ptr<string> status_ = nullptr;
    // The number of times the node can be rerun. The value of this parameter can be empty or an integer that is greater than or equal to 0.
    // 
    // *   If the value of this parameter is empty, the number of times that the node can be rerun is not specified.
    // *   If the value of this parameter is 0, the node cannot be rerun.
    // *   If the value of this parameter is a positive integer such as n, the node can still be rerun n times. For example, if the value of this parameter is 1, the node can still be rerun once. If the value of this parameter is 2, the node can still be rerun twice.
    std::shared_ptr<int32_t> taskRerunTime_ = nullptr;
    // The scheduling type of the node that generates the instance. Valid values:
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
