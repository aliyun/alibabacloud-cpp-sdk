// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYRESPONSEBODY_HPP_
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
  class ListInstanceHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstanceHistoryResponseBody() = default ;
    ListInstanceHistoryResponseBody(const ListInstanceHistoryResponseBody &) = default ;
    ListInstanceHistoryResponseBody(ListInstanceHistoryResponseBody &&) = default ;
    ListInstanceHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryResponseBody() = default ;
    ListInstanceHistoryResponseBody& operator=(const ListInstanceHistoryResponseBody &) = default ;
    ListInstanceHistoryResponseBody& operator=(ListInstanceHistoryResponseBody &&) = default ;
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
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
        && this->beginWaitResTime_ == nullptr && this->beginWaitTimeTime_ == nullptr && this->bizdate_ == nullptr && this->createTime_ == nullptr && this->cycTime_ == nullptr
        && this->dagId_ == nullptr && this->dagType_ == nullptr && this->errorMessage_ == nullptr && this->finishTime_ == nullptr && this->instanceHistoryId_ == nullptr
        && this->instanceId_ == nullptr && this->modifyTime_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->status_ == nullptr
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


      // bizdate Field Functions 
      bool hasBizdate() const { return this->bizdate_ != nullptr;};
      void deleteBizdate() { this->bizdate_ = nullptr;};
      inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
      inline Instances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Instances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


      // instanceHistoryId Field Functions 
      bool hasInstanceHistoryId() const { return this->instanceHistoryId_ != nullptr;};
      void deleteInstanceHistoryId() { this->instanceHistoryId_ = nullptr;};
      inline int64_t getInstanceHistoryId() const { DARABONBA_PTR_GET_DEFAULT(instanceHistoryId_, 0L) };
      inline Instances& setInstanceHistoryId(int64_t instanceHistoryId) { DARABONBA_PTR_SET_VALUE(instanceHistoryId_, instanceHistoryId) };


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
      // The time when the instance started running, in timestamp format.
      shared_ptr<int64_t> beginRunningTime_ {};
      // The time when the instance started waiting for resources.
      // 
      // The value is a 13-digit number, such as `1590416703313`.
      shared_ptr<int64_t> beginWaitResTime_ {};
      // The time when the instance started waiting for scheduling.
      // 
      // The value is a 13-digit number, such as `1590416703313`.
      shared_ptr<int64_t> beginWaitTimeTime_ {};
      // The business date on which the scheduled node was run. This value is typically one day before the run time of the node.
      // 
      // The value is a 13-digit number, such as `1590336000000`.
      shared_ptr<int64_t> bizdate_ {};
      // The time when the instance was created.
      // 
      // The value is a 13-digit number, such as `1590416703313`.
      shared_ptr<int64_t> createTime_ {};
      // The scheduled run time of the node, in timestamp format.
      shared_ptr<int64_t> cycTime_ {};
      // The ID of the workflow.
      shared_ptr<int64_t> dagId_ {};
      // The Data Quality Check (DQC) type. Valid values:
      // 
      // - 0: associated with DQC.
      // - 1: not associated with DQC.
      shared_ptr<string> dagType_ {};
      // **[Deprecated]** The error message returned when the instance failed to run. This field is deprecated. You can call the GetInstanceLog operation to obtain the error information of the node.
      shared_ptr<string> errorMessage_ {};
      // The time when the scheduled node finished running, in timestamp format.
      shared_ptr<int64_t> finishTime_ {};
      // The history archive ID of the instance.
      shared_ptr<int64_t> instanceHistoryId_ {};
      // The ID of the instance.
      shared_ptr<int64_t> instanceId_ {};
      // The time when the scheduled node was last modified.
      // 
      // The value is a 13-digit number, such as `1590416703313`.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the node.
      shared_ptr<int64_t> nodeId_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The status of the node. Valid values:
      // 
      // - NOT_RUN: The node is not run.
      // - WAIT_TIME: The node is waiting for the scheduled time (DueTime or CycTime) to arrive.
      // - WAIT_RESOURCE: The node is waiting for resources.
      // - RUNNING: The node is running.
      // - CHECKING: The node is sent to Data Quality for data verification.
      // - CHECKING_CONDITION: The node is undergoing branch condition verification.
      // - FAILURE: The node failed to run.
      // - SUCCESS: The node ran successfully.
      shared_ptr<string> status_ {};
      // The scheduling type of the node instance. Valid values:
      // 
      // - NORMAL(0): A normal scheduling node. The node is scheduled on a daily basis.
      // - MANUAL(1): A manual node. The node is not scheduled on a daily basis.
      // - PAUSE(2): A frozen node. The node is scheduled on a daily basis, but is set to failed when scheduling starts.
      // - SKIP(3): A dry-run node. The node is scheduled on a daily basis, but is set to successful when scheduling starts.
      // - SKIP_UNCHOOSE(4): A node that is not selected in a temporary workflow. This type of node exists only in temporary workflows and is set to successful when scheduling starts.
      // - SKIP_CYCLE(5): A weekly or monthly node that has not reached its run cycle. The node is scheduled on a daily basis, but is set to successful when scheduling starts.
      // - CONDITION_UNCHOOSE(6): A downstream node that is not selected by an upstream branch (IF) node. The node is directly set to dry-run.
      // - REALTIME_DEPRECATED(7): An expired periodic instance generated in real time. This type of node is directly set to successful.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ListInstanceHistoryResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ListInstanceHistoryResponseBody::Instances>) };
    inline vector<ListInstanceHistoryResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ListInstanceHistoryResponseBody::Instances>) };
    inline ListInstanceHistoryResponseBody& setInstances(const vector<ListInstanceHistoryResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstanceHistoryResponseBody& setInstances(vector<ListInstanceHistoryResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstanceHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of instances.
    shared_ptr<vector<ListInstanceHistoryResponseBody::Instances>> instances_ {};
    // The request ID. Used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
