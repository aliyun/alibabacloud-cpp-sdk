// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
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
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->beginRunningTime_ == nullptr && this->beginWaitResTime_ == nullptr && this->beginWaitTimeTime_ == nullptr && this->bizdate_ == nullptr && this->businessId_ == nullptr
        && this->connection_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->cycTime_ == nullptr && this->dagId_ == nullptr
        && this->dagType_ == nullptr && this->dqcDescription_ == nullptr && this->dqcType_ == nullptr && this->errorMessage_ == nullptr && this->finishTime_ == nullptr
        && this->instanceId_ == nullptr && this->modifyTime_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->paramValues_ == nullptr
        && this->priority_ == nullptr && this->relatedFlowId_ == nullptr && this->repeatInterval_ == nullptr && this->repeatability_ == nullptr && this->status_ == nullptr
        && this->taskRerunTime_ == nullptr && this->taskType_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Instances& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


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


        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline Instances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline Instances& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
        inline Instances& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


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


        // dqcDescription Field Functions 
        bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
        void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
        inline string getDqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
        inline Instances& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


        // dqcType Field Functions 
        bool hasDqcType() const { return this->dqcType_ != nullptr;};
        void deleteDqcType() { this->dqcType_ = nullptr;};
        inline int32_t getDqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
        inline Instances& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Instances& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


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


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Instances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // relatedFlowId Field Functions 
        bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
        void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
        inline int64_t getRelatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
        inline Instances& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


        // repeatInterval Field Functions 
        bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
        void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
        inline int64_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
        inline Instances& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


        // repeatability Field Functions 
        bool hasRepeatability() const { return this->repeatability_ != nullptr;};
        void deleteRepeatability() { this->repeatability_ = nullptr;};
        inline bool getRepeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
        inline Instances& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskRerunTime Field Functions 
        bool hasTaskRerunTime() const { return this->taskRerunTime_ != nullptr;};
        void deleteTaskRerunTime() { this->taskRerunTime_ = nullptr;};
        inline int32_t getTaskRerunTime() const { DARABONBA_PTR_GET_DEFAULT(taskRerunTime_, 0) };
        inline Instances& setTaskRerunTime(int32_t taskRerunTime) { DARABONBA_PTR_SET_VALUE(taskRerunTime_, taskRerunTime) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline Instances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The type of the workflow. Valid values:
        // 
        // *   DAILY: The workflow is used to run auto triggered nodes.
        // *   MANUAL: The workflow is used to run manually triggered nodes.
        // *   SMOKE_TEST: The workflow is used to perform smoke testing.
        // *   SUPPLY_DATA: The workflow is used to backfill data.
        shared_ptr<int64_t> baselineId_ {};
        // The time when the instance started to run.
        shared_ptr<int64_t> beginRunningTime_ {};
        // The time when the node stopped running.
        shared_ptr<int64_t> beginWaitResTime_ {};
        // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
        shared_ptr<int64_t> beginWaitTimeTime_ {};
        // The number of entries to return on each page. Default value: 10. Maximum value: 100.
        // 
        // You cannot specify the sorting method for the instances to be returned by this operation. By default, the instances are sorted in descending order of the time when the instances were created.
        shared_ptr<int64_t> bizdate_ {};
        // The ID of the workflow to which the node belongs.
        shared_ptr<int64_t> businessId_ {};
        // The number of times the node can be rerun. The value of this parameter can be empty or an integer that is greater than or equal to 0.
        // 
        // *   If the value of this parameter is empty, the number of times that the node can be rerun is not specified.
        // *   If the value of this parameter is 0, the node cannot be rerun.
        // *   If the value of this parameter is a positive integer such as n, the node can be rerun n times. For example, if the value of this parameter is 1, the node can be rerun once. If the value of this parameter is 2, the node can be rerun twice.
        shared_ptr<string> connection_ {};
        // The interval at which the node is rerun after the node fails to run. Unit: milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID of the node.
        shared_ptr<string> createUser_ {};
        // The error message returned.
        shared_ptr<int64_t> cycTime_ {};
        // The time when the instance started to wait for resources.
        shared_ptr<int64_t> dagId_ {};
        // The data timestamp of the instance. In most cases, the value is one day before the time when the instance was run.
        shared_ptr<string> dagType_ {};
        // The operation that you want to perform.
        shared_ptr<string> dqcDescription_ {};
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
        shared_ptr<int32_t> dqcType_ {};
        // The name of the account that is used to run the instance. For example, if an account named Test was used to run the instance to backfill data, the value of this parameter is Test.
        shared_ptr<string> errorMessage_ {};
        // The ID of the Alibaba Cloud account used by the workspace administrator. You can log on to the Alibaba Cloud Management Console and view the ID on the Security Settings page of the Account Center console.
        shared_ptr<int64_t> finishTime_ {};
        // The number of the page to return. Minimum value:1. Maximum value: 100.
        shared_ptr<int64_t> instanceId_ {};
        // The name of the workflow. You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the name of the workflow.
        shared_ptr<int64_t> modifyTime_ {};
        // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment. The value DEV indicates the development environment.
        shared_ptr<int64_t> nodeId_ {};
        // The ID of the workflow.
        shared_ptr<string> nodeName_ {};
        // The table and partition filter expression in Data Quality that are associated with the node.
        shared_ptr<string> paramValues_ {};
        // The total number of instances.
        shared_ptr<int32_t> priority_ {};
        // The type of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
        shared_ptr<int64_t> relatedFlowId_ {};
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
        shared_ptr<int64_t> repeatInterval_ {};
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
        shared_ptr<bool> repeatability_ {};
        // The data timestamp of the instances that you want to query. Specify the timestamp in the yyyy-MM-dd HH:mm:ss format.
        shared_ptr<string> status_ {};
        // The ID of the workspace. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to query the ID of the workspace.
        shared_ptr<int32_t> taskRerunTime_ {};
        // The information about the instances.
        shared_ptr<string> taskType_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The name of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the name of the node.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The time when the node was scheduled to run.
      shared_ptr<int32_t> pageNumber_ {};
      // The end of the time range to query. Specify the time in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<int32_t> pageSize_ {};
      // The priority of the instance. Valid values: 1, 3, 5, 7, and 8.
      // 
      // A greater value indicates a higher priority. Default value: 1.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody& setData(const ListInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesResponseBody& setData(ListInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstancesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID of the node.
    shared_ptr<ListInstancesResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<string> errorCode_ {};
    // The page number of the returned page.
    shared_ptr<string> errorMessage_ {};
    // The error message that is returned for the instance.
    // 
    // This parameter is deprecated. You can call the [GetInstanceLog](https://help.aliyun.com/document_detail/173983.html) operation to query the error information related to the node.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The name of the node.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
