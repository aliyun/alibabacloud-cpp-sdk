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
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The time when the instance started running.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> beginRunningTime_ {};
        // The time when the instance started waiting for resources.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> beginWaitResTime_ {};
        // The time when the instance started waiting for scheduling.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> beginWaitTimeTime_ {};
        // The data timestamp of the scheduled node. This is typically the day before the node runs.
        // 
        // The value is a 13-digit number, such as `1590336000000`.
        shared_ptr<int64_t> bizdate_ {};
        // The business process ID.
        shared_ptr<int64_t> businessId_ {};
        // The connection string.
        shared_ptr<string> connection_ {};
        // The time when the instance was created.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> createTime_ {};
        // The user who triggered the instance to run. For example, if user Test triggered a data backfill instance, the CreateUser is Test.
        shared_ptr<string> createUser_ {};
        // The scheduled runtime of the node.
        // 
        // The value is a 13-digit number, such as `1590422400000`.
        shared_ptr<int64_t> cycTime_ {};
        // The workflow ID.
        shared_ptr<int64_t> dagId_ {};
        // The type of the workflow. Valid values:
        // 
        // - DAILY(0): daily scheduling workflow.
        // - MANUAL(1): manual task workflow.
        // - SMOKE_TEST(2): smoke testing workflow.
        // - SUPPLY_DATA(3): data backfill workflow.
        // - MANUAL_FLOW(4): manually triggered dataflow PAI workflow (such as running a workflow in the IDE).
        // - BUSINESS_PROCESS_DAG(5): manual business process workflow.
        shared_ptr<string> dagType_ {};
        // The DQC partitioning rule string.
        shared_ptr<string> dqcDescription_ {};
        // The DQC type. Valid values:
        // - 0: associated with DQC.
        // - 1: not associated with DQC.
        shared_ptr<int32_t> dqcType_ {};
        // **[Deprecated]** The error message of the instance run. You can call [GetInstanceLog](https://help.aliyun.com/document_detail/173983.html) to obtain the error information of the executed task.
        shared_ptr<string> errorMessage_ {};
        // The time when the scheduled node finished running.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> finishTime_ {};
        // The instance ID.
        shared_ptr<int64_t> instanceId_ {};
        // The time when the scheduled node was last modified.
        // 
        // The value is a 13-digit number, such as `1590416703313`.
        shared_ptr<int64_t> modifyTime_ {};
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The node name.
        shared_ptr<string> nodeName_ {};
        // The parameter information.
        shared_ptr<string> paramValues_ {};
        // The priority of the instance. Valid values: 1, 3, 5, 7, and 8.
        // 
        // A larger value indicates a higher priority. Default value: 1.
        shared_ptr<int32_t> priority_ {};
        // The ID of the associated business process.
        shared_ptr<int64_t> relatedFlowId_ {};
        // The interval at which the node is rescheduled after a failure. Unit: milliseconds.
        shared_ptr<int64_t> repeatInterval_ {};
        // Indicates whether the instance task can be rerun.
        shared_ptr<bool> repeatability_ {};
        // The status of the node. Valid values:
        // 
        // - NOT_RUN(1): The node is not run.
        // - WAIT_TIME(2): The node is waiting for the scheduled time to arrive.
        // - WAIT_RESOURCE(3): The node has been sent to the execution engine and is waiting for resources to be scheduled.
        // - RUNNING(4): The node is running.
        // - CHECKING(7): The node has finished running and has been sent to Data Quality for data verification.
        // - CHECKING_CONDITION(8): The node has finished running and is undergoing branch condition verification.
        // - WAIT_TRIGGER(9): The node is waiting to be triggered. A trigger-based node enters this state after the waiting time elapses.
        // - FAILURE(5): The node failed to run.
        // - SUCCESS(6): The node ran successfully.
        shared_ptr<string> status_ {};
        // The number of remaining reruns for the instance. The value can be empty or an integer greater than or equal to 0.
        // - Empty: The node corresponding to this instance does not have automatic rerun configured.
        // - 0: The instance cannot be rerun.
        // - An integer greater than 0 (n): The instance can be rerun n times. For example, if the value is 1, the remaining rerun count is 1. If the value is 2, the remaining rerun count is 2, and so on. The initial value is the automatic rerun count defined for the corresponding node plus 1.
        shared_ptr<int32_t> taskRerunTime_ {};
        // The scheduling type of the task instance. Valid values:
        // - NORMAL(0): The node is a normal scheduled node that is triggered by daily scheduling.
        // - MANUAL(1): The node is a manual node that is not triggered by daily scheduling.
        // - PAUSE(2): The node is a frozen node that is triggered by daily scheduling but is set to failed when scheduling starts.
        // - SKIP(3): The node is a dry-run node that is triggered by daily scheduling but is set to successful when scheduling starts.
        // - SKIP_UNCHOOSE(4): The node is an unselected node in a temporary workflow. It exists only in temporary workflows and is set to successful when scheduling starts.
        // - SKIP_CYCLE(5): The node is a weekly or monthly node whose scheduling cycle has not arrived. It is triggered by daily scheduling but is set to successful when scheduling starts.
        // - CONDITION_UNCHOOSE(6): The upstream instance contains a branch (IF) node, but this downstream node is not selected by the branch node and is set to a dry-run node.
        // - REALTIME_DEPRECATED(7): The node is an expired periodic instance generated in real time. This type of node is set to successful.
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
      // The instance information.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of instances.
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
    // The list of instances.
    shared_ptr<ListInstancesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
