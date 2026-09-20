// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANUALDAGINSTANCESRESPONSEBODY_HPP_
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
  class GetManualDagInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManualDagInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetManualDagInstancesResponseBody() = default ;
    GetManualDagInstancesResponseBody(const GetManualDagInstancesResponseBody &) = default ;
    GetManualDagInstancesResponseBody(GetManualDagInstancesResponseBody &&) = default ;
    GetManualDagInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManualDagInstancesResponseBody() = default ;
    GetManualDagInstancesResponseBody& operator=(const GetManualDagInstancesResponseBody &) = default ;
    GetManualDagInstancesResponseBody& operator=(GetManualDagInstancesResponseBody &&) = default ;
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
      // The time when the instance node started to run.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> beginRunningTime_ {};
      // The time when the instance node started to wait for resources.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> beginWaitResTime_ {};
      // The time when the instance node started to wait for scheduling.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> beginWaitTimeTime_ {};
      // The business date. This is typically the day before the node runs.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> bizDate_ {};
      // The time when the instance node was created.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> createTime_ {};
      // The operator.
      shared_ptr<string> createUser_ {};
      // The scheduled time of the instance node.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> cycTime_ {};
      // The DAG ID of the manual workflow instance.
      shared_ptr<int64_t> dagId_ {};
      // The type of the manual workflow.
      shared_ptr<string> dagType_ {};
      // The time when the instance node finished running.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> finishTime_ {};
      // The internal instance ID.
      shared_ptr<int64_t> instanceId_ {};
      // The most recent modification time of the instance node.
      // 
      // The value is a 13-digit number, for example, `1605178414676`.
      shared_ptr<int64_t> modifyTime_ {};
      // The internal node ID of the workflow.
      shared_ptr<int64_t> nodeId_ {};
      // The node name.
      shared_ptr<string> nodeName_ {};
      // The parameter information of the instance.
      shared_ptr<string> paramValues_ {};
      // The status of the instance node. Valid values:
      // - NOT_RUN: The instance is not run.
      // - WAIT_TIME: The instance is waiting for the scheduled dueTime or cycleTime.
      // - WAIT_RESOURCE: The instance is waiting for resources.
      // - RUNNING: The instance is running.
      // - CHECKING: The instance is submitted to Data Quality for data verification.
      // - CHECKING_CONDITION: The instance is performing branch condition verification.
      // - FAILURE: The instance failed to run.
      // - SUCCESS: The instance is run successfully.
      shared_ptr<string> status_ {};
      // The scheduling type of the instance node. Valid values:
      // - NORMAL(0): a normal scheduling node. The node is scheduled on a daily basis.
      // - MANUAL(1): a manual node. The node is not scheduled on a daily basis.
      // - PAUSE(2): a paused node. The node is scheduled on a daily basis, but is set to failed when scheduling starts.
      // - SKIP(3): a dry-run node. The node is scheduled on a daily basis, but is set to successful when scheduling starts.
      // - SKIP_UNCHOOSE(4): a node that is not selected in a temporary workflow. This type of node exists only in temporary workflows and is set to successful when scheduling starts.
      // - SKIP_CYCLE(5): a weekly or monthly node that has not reached its run cycle. The node is scheduled on a daily basis, but is set to successful when scheduling starts.
      // - CONDITION_UNCHOOSE(6): a downstream node that is not selected by an upstream branch (IF) node. The node is directly set to dry-run.
      // - REALTIME_DEPRECATED(7): an expired periodic instance generated in real time. This type of node is directly set to successful.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetManualDagInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetManualDagInstancesResponseBody::Instances>) };
    inline vector<GetManualDagInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<GetManualDagInstancesResponseBody::Instances>) };
    inline GetManualDagInstancesResponseBody& setInstances(const vector<GetManualDagInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetManualDagInstancesResponseBody& setInstances(vector<GetManualDagInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManualDagInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of internal instances of the manual workflow.
    shared_ptr<vector<GetManualDagInstancesResponseBody::Instances>> instances_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
