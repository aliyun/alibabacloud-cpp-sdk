// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstancesResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataInstances& obj) { 
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
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskRerunTime, taskRerunTime_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataInstances& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskRerunTime, taskRerunTime_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListInstancesResponseBodyDataInstances() = default ;
    ListInstancesResponseBodyDataInstances(const ListInstancesResponseBodyDataInstances &) = default ;
    ListInstancesResponseBodyDataInstances(ListInstancesResponseBodyDataInstances &&) = default ;
    ListInstancesResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataInstances() = default ;
    ListInstancesResponseBodyDataInstances& operator=(const ListInstancesResponseBodyDataInstances &) = default ;
    ListInstancesResponseBodyDataInstances& operator=(ListInstancesResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->beginRunningTime_ != nullptr && this->beginWaitResTime_ != nullptr && this->beginWaitTimeTime_ != nullptr && this->bizdate_ != nullptr && this->businessId_ != nullptr
        && this->connection_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->cycTime_ != nullptr && this->dagId_ != nullptr
        && this->dagType_ != nullptr && this->dqcDescription_ != nullptr && this->dqcType_ != nullptr && this->errorMessage_ != nullptr && this->finishTime_ != nullptr
        && this->instanceId_ != nullptr && this->modifyTime_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->paramValues_ != nullptr
        && this->priority_ != nullptr && this->relatedFlowId_ != nullptr && this->repeatInterval_ != nullptr && this->repeatability_ != nullptr && this->status_ != nullptr
        && this->taskRerunTime_ != nullptr && this->taskType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // beginRunningTime Field Functions 
    bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
    void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
    inline int64_t beginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


    // beginWaitResTime Field Functions 
    bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
    void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
    inline int64_t beginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


    // beginWaitTimeTime Field Functions 
    bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
    void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
    inline int64_t beginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline ListInstancesResponseBodyDataInstances& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListInstancesResponseBodyDataInstances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // cycTime Field Functions 
    bool hasCycTime() const { return this->cycTime_ != nullptr;};
    void deleteCycTime() { this->cycTime_ = nullptr;};
    inline int64_t cycTime() const { DARABONBA_PTR_GET_DEFAULT(cycTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setCycTime(int64_t cycTime) { DARABONBA_PTR_SET_VALUE(cycTime_, cycTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagType Field Functions 
    bool hasDagType() const { return this->dagType_ != nullptr;};
    void deleteDagType() { this->dagType_ = nullptr;};
    inline string dagType() const { DARABONBA_PTR_GET_DEFAULT(dagType_, "") };
    inline ListInstancesResponseBodyDataInstances& setDagType(string dagType) { DARABONBA_PTR_SET_VALUE(dagType_, dagType) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline ListInstancesResponseBodyDataInstances& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline int32_t dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
    inline ListInstancesResponseBodyDataInstances& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstancesResponseBodyDataInstances& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListInstancesResponseBodyDataInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline ListInstancesResponseBodyDataInstances& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListInstancesResponseBodyDataInstances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // relatedFlowId Field Functions 
    bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
    void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
    inline int64_t relatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline ListInstancesResponseBodyDataInstances& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline ListInstancesResponseBodyDataInstances& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyDataInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskRerunTime Field Functions 
    bool hasTaskRerunTime() const { return this->taskRerunTime_ != nullptr;};
    void deleteTaskRerunTime() { this->taskRerunTime_ = nullptr;};
    inline int32_t taskRerunTime() const { DARABONBA_PTR_GET_DEFAULT(taskRerunTime_, 0) };
    inline ListInstancesResponseBodyDataInstances& setTaskRerunTime(int32_t taskRerunTime) { DARABONBA_PTR_SET_VALUE(taskRerunTime_, taskRerunTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListInstancesResponseBodyDataInstances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The type of the workflow. Valid values:
    // 
    // *   DAILY: The workflow is used to run auto triggered nodes.
    // *   MANUAL: The workflow is used to run manually triggered nodes.
    // *   SMOKE_TEST: The workflow is used to perform smoke testing.
    // *   SUPPLY_DATA: The workflow is used to backfill data.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The time when the instance started to run.
    std::shared_ptr<int64_t> beginRunningTime_ = nullptr;
    // The time when the node stopped running.
    std::shared_ptr<int64_t> beginWaitResTime_ = nullptr;
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<int64_t> beginWaitTimeTime_ = nullptr;
    // The number of entries to return on each page. Default value: 10. Maximum value: 100.
    // 
    // You cannot specify the sorting method for the instances to be returned by this operation. By default, the instances are sorted in descending order of the time when the instances were created.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The ID of the workflow to which the node belongs.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The number of times the node can be rerun. The value of this parameter can be empty or an integer that is greater than or equal to 0.
    // 
    // *   If the value of this parameter is empty, the number of times that the node can be rerun is not specified.
    // *   If the value of this parameter is 0, the node cannot be rerun.
    // *   If the value of this parameter is a positive integer such as n, the node can be rerun n times. For example, if the value of this parameter is 1, the node can be rerun once. If the value of this parameter is 2, the node can be rerun twice.
    std::shared_ptr<string> connection_ = nullptr;
    // The interval at which the node is rerun after the node fails to run. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID of the node.
    std::shared_ptr<string> createUser_ = nullptr;
    // The error message returned.
    std::shared_ptr<int64_t> cycTime_ = nullptr;
    // The time when the instance started to wait for resources.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
    std::shared_ptr<string> dagType_ = nullptr;
    // The operation that you want to perform.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   NOT_RUN: The node is not run.
    // *   WAIT_TIME: The node is waiting for the scheduling time to arrive.
    // *   WAIT_RESOURCE: The node is waiting for resources.
    // *   RUNNING: The node is running.
    // *   CHECKING: Data quality is being checked for the node.
    // *   CHECKING_CONDITION: Branch conditions are being checked for the node.
    // *   FAILURE: The node fails to run.
    // *   SUCCESS: The node is successfully run.
    std::shared_ptr<int32_t> dqcType_ = nullptr;
    // The name of the account that is used to run the instance. For example, if an account named Test was used to run the instance to backfill data, the value of this parameter is Test.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the Alibaba Cloud account used by the workspace administrator. You can log on to the Alibaba Cloud Management Console and view the ID on the Security Settings page of the Account Center console.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The number of the page to return. Minimum value:1. Maximum value: 100.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the workflow. You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the name of the workflow.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment. The value DEV indicates the development environment.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the workflow.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The table and partition filter expression in Data Quality that are associated with the node.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The total number of instances.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
    std::shared_ptr<int64_t> relatedFlowId_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL(0): The node is an auto triggered node. The scheduling system regularly runs the node.
    // 
    // *   MANUAL(1): The node is a manually triggered node. The scheduling system does not regularly run the node.
    // 
    // *   PAUSE(2): The node is a frozen node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
    // 
    // *   SKIP(3): The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to succeeded when the scheduling system starts to run the node.
    // 
    // *   SKIP_UNCHOOSE(4): The node is an unselected node in a temporary workflow. This type of node exists only in temporary workflows. The scheduling system sets the status of the node to succeeded when the scheduling system starts to run the node.
    // 
    // *   SKIP_CYCLE(5): The node is a node that is scheduled by week or month and is waiting for the scheduling time to arrive. The scheduling system regularly runs the node but sets the status of the node to succeeded when the scheduling system starts to run the node.
    // 
    // *   CONDITION_UNCHOOSE(6): The node is not selected by its ancestor branch node and is run as a dry-run node.
    // 
    //     REALTIME_DEPRECATED(7): The node has instances that are generated in real time but deprecated. The scheduling system sets the status of the node to succeeded.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   NOT_RUN: The node is not run.
    // *   WAIT_TIME: The node is waiting for the scheduling time to arrive.
    // *   WAIT_RESOURCE: The node is waiting for resources.
    // *   RUNNING: The node is running.
    // *   CHECKING: Data quality is being checked for the node.
    // *   CHECKING_CONDITION: Branch conditions are being checked for the node.
    // *   FAILURE: The node fails to run.
    // *   SUCCESS: The node is successfully run.
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The data timestamp of the instances that you want to query. Specify the timestamp in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the workspace. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to query the ID of the workspace.
    std::shared_ptr<int32_t> taskRerunTime_ = nullptr;
    // The information about the instances.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
