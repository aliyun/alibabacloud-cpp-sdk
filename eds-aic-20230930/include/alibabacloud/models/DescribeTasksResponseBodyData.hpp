// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(FailedChildCount, failedChildCount_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RunningChildCount, runningChildCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuccessChildCount, successChildCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TotalChildCount, totalChildCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(FailedChildCount, failedChildCount_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RunningChildCount, runningChildCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuccessChildCount, successChildCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TotalChildCount, totalChildCount_);
    };
    DescribeTasksResponseBodyData() = default ;
    DescribeTasksResponseBodyData(const DescribeTasksResponseBodyData &) = default ;
    DescribeTasksResponseBodyData(DescribeTasksResponseBodyData &&) = default ;
    DescribeTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyData() = default ;
    DescribeTasksResponseBodyData& operator=(const DescribeTasksResponseBodyData &) = default ;
    DescribeTasksResponseBodyData& operator=(DescribeTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->failedChildCount_ != nullptr && this->finishTime_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr
        && this->instanceStatus_ != nullptr && this->invokeId_ != nullptr && this->level_ != nullptr && this->operator_ != nullptr && this->param_ != nullptr
        && this->parentTaskId_ != nullptr && this->regionId_ != nullptr && this->resourceId_ != nullptr && this->result_ != nullptr && this->runningChildCount_ != nullptr
        && this->startTime_ != nullptr && this->successChildCount_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr && this->taskType_ != nullptr
        && this->totalChildCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeTasksResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DescribeTasksResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // failedChildCount Field Functions 
    bool hasFailedChildCount() const { return this->failedChildCount_ != nullptr;};
    void deleteFailedChildCount() { this->failedChildCount_ = nullptr;};
    inline int32_t failedChildCount() const { DARABONBA_PTR_GET_DEFAULT(failedChildCount_, 0) };
    inline DescribeTasksResponseBodyData& setFailedChildCount(int32_t failedChildCount) { DARABONBA_PTR_SET_VALUE(failedChildCount_, failedChildCount) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeTasksResponseBodyData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTasksResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeTasksResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeTasksResponseBodyData& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeTasksResponseBodyData& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeTasksResponseBodyData& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeTasksResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline DescribeTasksResponseBodyData& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string parentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline DescribeTasksResponseBodyData& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTasksResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeTasksResponseBodyData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeTasksResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // runningChildCount Field Functions 
    bool hasRunningChildCount() const { return this->runningChildCount_ != nullptr;};
    void deleteRunningChildCount() { this->runningChildCount_ = nullptr;};
    inline int32_t runningChildCount() const { DARABONBA_PTR_GET_DEFAULT(runningChildCount_, 0) };
    inline DescribeTasksResponseBodyData& setRunningChildCount(int32_t runningChildCount) { DARABONBA_PTR_SET_VALUE(runningChildCount_, runningChildCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTasksResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // successChildCount Field Functions 
    bool hasSuccessChildCount() const { return this->successChildCount_ != nullptr;};
    void deleteSuccessChildCount() { this->successChildCount_ = nullptr;};
    inline int32_t successChildCount() const { DARABONBA_PTR_GET_DEFAULT(successChildCount_, 0) };
    inline DescribeTasksResponseBodyData& setSuccessChildCount(int32_t successChildCount) { DARABONBA_PTR_SET_VALUE(successChildCount_, successChildCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTasksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeTasksResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTasksResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // totalChildCount Field Functions 
    bool hasTotalChildCount() const { return this->totalChildCount_ != nullptr;};
    void deleteTotalChildCount() { this->totalChildCount_ = nullptr;};
    inline int32_t totalChildCount() const { DARABONBA_PTR_GET_DEFAULT(totalChildCount_, 0) };
    inline DescribeTasksResponseBodyData& setTotalChildCount(int32_t totalChildCount) { DARABONBA_PTR_SET_VALUE(totalChildCount_, totalChildCount) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The total number of failed subtasks.
    std::shared_ptr<int32_t> failedChildCount_ = nullptr;
    // The end time of the task.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the cloud phone instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the cloud phone instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The state of the cloud phone instance.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The ID of the command execution.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The level of the task.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The operator.
    std::shared_ptr<string> operator_ = nullptr;
    // The parameters of the task.
    std::shared_ptr<string> param_ = nullptr;
    // The ID of the parent task.
    std::shared_ptr<string> parentTaskId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The execution result of the task.
    std::shared_ptr<string> result_ = nullptr;
    // The total number of the subtasks that are running.
    std::shared_ptr<int32_t> runningChildCount_ = nullptr;
    // The start time of the task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total number of successfully executed subtasks.
    std::shared_ptr<int32_t> successChildCount_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The state of the task.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
    // The total number of subtasks of the current batch task.
    std::shared_ptr<int32_t> totalChildCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
