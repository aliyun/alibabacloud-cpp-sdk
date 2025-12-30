// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeTaskResponseBody() = default ;
    DescribeTaskResponseBody(const DescribeTaskResponseBody &) = default ;
    DescribeTaskResponseBody(DescribeTaskResponseBody &&) = default ;
    DescribeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskResponseBody() = default ;
    DescribeTaskResponseBody& operator=(const DescribeTaskResponseBody &) = default ;
    DescribeTaskResponseBody& operator=(DescribeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Steps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Steps& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(StageTag, stageTag_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StepName, stepName_);
        DARABONBA_PTR_TO_JSON(StepState, stepState_);
        DARABONBA_PTR_TO_JSON(StepType, stepType_);
        DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Steps& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(StageTag, stageTag_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StepName, stepName_);
        DARABONBA_PTR_FROM_JSON(StepState, stepState_);
        DARABONBA_PTR_FROM_JSON(StepType, stepType_);
        DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Steps() = default ;
      Steps(const Steps &) = default ;
      Steps(Steps &&) = default ;
      Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Steps() = default ;
      Steps& operator=(const Steps &) = default ;
      Steps& operator=(Steps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTasks& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskState, taskState_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, SubTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        SubTasks() = default ;
        SubTasks(const SubTasks &) = default ;
        SubTasks(SubTasks &&) = default ;
        SubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTasks() = default ;
        SubTasks& operator=(const SubTasks &) = default ;
        SubTasks& operator=(SubTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->message_ == nullptr && this->taskId_ == nullptr && this->taskState_ == nullptr && this->taskType_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SubTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline SubTasks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline SubTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskState Field Functions 
        bool hasTaskState() const { return this->taskState_ != nullptr;};
        void deleteTaskState() { this->taskState_ = nullptr;};
        inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
        inline SubTasks& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline SubTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline SubTasks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The error message returned for failed sub tasks.
        shared_ptr<string> message_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The task status.
        shared_ptr<string> taskState_ {};
        // The task type.
        // 
        // Valid values:
        // 
        // *   reclone_node_sub_task
        // *   initialize_bare_cluster
        // *   extend_bare_cluster
        // *   reclone_node
        // *   reboot_node
        // *   extend_ack_edge_cluster
        // *   extend_cluster
        // *   initialize_ack_edge_cluster
        // *   cut_node_sub_task
        // *   reboot_node_sub_task
        // *   reclone_ack_edge_node
        // *   initialize_cluster
        // *   cut_cluster
        // *   reclone_bare_node
        // *   cut_bare_cluster
        shared_ptr<string> taskType_ {};
        // The update time.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->stageTag_ == nullptr && this->startTime_ == nullptr && this->stepName_ == nullptr && this->stepState_ == nullptr && this->stepType_ == nullptr
        && this->subTasks_ == nullptr && this->updateTime_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Steps& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // stageTag Field Functions 
      bool hasStageTag() const { return this->stageTag_ != nullptr;};
      void deleteStageTag() { this->stageTag_ = nullptr;};
      inline string getStageTag() const { DARABONBA_PTR_GET_DEFAULT(stageTag_, "") };
      inline Steps& setStageTag(string stageTag) { DARABONBA_PTR_SET_VALUE(stageTag_, stageTag) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Steps& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // stepName Field Functions 
      bool hasStepName() const { return this->stepName_ != nullptr;};
      void deleteStepName() { this->stepName_ = nullptr;};
      inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
      inline Steps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


      // stepState Field Functions 
      bool hasStepState() const { return this->stepState_ != nullptr;};
      void deleteStepState() { this->stepState_ = nullptr;};
      inline string getStepState() const { DARABONBA_PTR_GET_DEFAULT(stepState_, "") };
      inline Steps& setStepState(string stepState) { DARABONBA_PTR_SET_VALUE(stepState_, stepState) };


      // stepType Field Functions 
      bool hasStepType() const { return this->stepType_ != nullptr;};
      void deleteStepType() { this->stepType_ = nullptr;};
      inline string getStepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
      inline Steps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


      // subTasks Field Functions 
      bool hasSubTasks() const { return this->subTasks_ != nullptr;};
      void deleteSubTasks() { this->subTasks_ = nullptr;};
      inline const vector<Steps::SubTasks> & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<Steps::SubTasks>) };
      inline vector<Steps::SubTasks> getSubTasks() { DARABONBA_PTR_GET(subTasks_, vector<Steps::SubTasks>) };
      inline Steps& setSubTasks(const vector<Steps::SubTasks> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
      inline Steps& setSubTasks(vector<Steps::SubTasks> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Steps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The error message of the step.
      shared_ptr<string> message_ {};
      // The stage marker.
      // 
      // Valid values:
      // 
      // *   机器释放: Machine release.
      // *   节点并发初始化: Node concurrent initialization.
      // *   节点释放: Node release.
      // *   机器替换: Machine replacement.
      // *   节点缩容: Node scale-in.
      // *   提前续费: Early renewal.
      // *   物理机清理: Physical machine cleanup.
      // *   节点清理: Node cleanup.
      // *   创建K8s集群: Create Kubernetes cluster.
      // *   网络初始化: Network initialization.
      // *   节点重启: Node restart.
      // *   节点退订: Node unsubscribe.
      // *   集群扩容: Cluster scale-out.
      // *   异常机器释放: Abnormal machine release.
      shared_ptr<string> stageTag_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // The name of the step.
      shared_ptr<string> stepName_ {};
      // The step status.
      // 
      // Valid values:
      // 
      // *   execution_success
      // *   execution_failed
      shared_ptr<string> stepState_ {};
      // The type of the step.
      // 
      // Valid values:
      // 
      // *   normal: A normal step has only one successor step.
      // *   dispersive: A dispersive step has multiple successor steps.
      shared_ptr<string> stepType_ {};
      // The sub tasks.
      shared_ptr<vector<Steps::SubTasks>> subTasks_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->createTime_ == nullptr && this->message_ == nullptr && this->nodeIds_ == nullptr && this->requestId_ == nullptr
        && this->steps_ == nullptr && this->taskState_ == nullptr && this->taskType_ == nullptr && this->updateTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeTaskResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeTaskResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DescribeTaskResponseBody& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DescribeTaskResponseBody& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<DescribeTaskResponseBody::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<DescribeTaskResponseBody::Steps>) };
    inline vector<DescribeTaskResponseBody::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<DescribeTaskResponseBody::Steps>) };
    inline DescribeTaskResponseBody& setSteps(const vector<DescribeTaskResponseBody::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline DescribeTaskResponseBody& setSteps(vector<DescribeTaskResponseBody::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeTaskResponseBody& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeTaskResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The create time.
    shared_ptr<string> createTime_ {};
    // The error message returned for failed tasks.
    shared_ptr<string> message_ {};
    // The IDs of the nodes.
    shared_ptr<vector<string>> nodeIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The steps.
    shared_ptr<vector<DescribeTaskResponseBody::Steps>> steps_ {};
    // The task status.
    // 
    // Valid values:
    // 
    // *   running
    // *   execution_success
    // *   execution_fail
    // *   waiting_to_run
    shared_ptr<string> taskState_ {};
    // The task type.
    // 
    // Valid values:
    // 
    // *   reclone_node_sub_task
    // *   initialize_bare_cluster
    // *   extend_bare_cluster
    // *   reclone_node
    // *   reboot_node
    // *   extend_ack_edge_cluster
    // *   extend_cluster
    // *   initialize_ack_edge_cluster
    // *   cut_node_sub_task
    // *   reboot_node_sub_task
    // *   reclone_ack_edge_node
    // *   initialize_cluster
    // *   cut_cluster
    // *   reclone_bare_node
    // *   cut_bare_cluster
    shared_ptr<string> taskType_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
