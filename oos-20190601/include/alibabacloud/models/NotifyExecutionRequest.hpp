// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class NotifyExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(LoopItem, loopItem_);
      DARABONBA_PTR_TO_JSON(NotifyNote, notifyNote_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskExecutionIds, taskExecutionIds_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(LoopItem, loopItem_);
      DARABONBA_PTR_FROM_JSON(NotifyNote, notifyNote_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionIds, taskExecutionIds_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    NotifyExecutionRequest() = default ;
    NotifyExecutionRequest(const NotifyExecutionRequest &) = default ;
    NotifyExecutionRequest(NotifyExecutionRequest &&) = default ;
    NotifyExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyExecutionRequest() = default ;
    NotifyExecutionRequest& operator=(const NotifyExecutionRequest &) = default ;
    NotifyExecutionRequest& operator=(NotifyExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && return this->executionStatus_ == nullptr && return this->loopItem_ == nullptr && return this->notifyNote_ == nullptr && return this->notifyType_ == nullptr && return this->parameters_ == nullptr
        && return this->regionId_ == nullptr && return this->taskExecutionId_ == nullptr && return this->taskExecutionIds_ == nullptr && return this->taskName_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline NotifyExecutionRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string executionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline NotifyExecutionRequest& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // loopItem Field Functions 
    bool hasLoopItem() const { return this->loopItem_ != nullptr;};
    void deleteLoopItem() { this->loopItem_ = nullptr;};
    inline string loopItem() const { DARABONBA_PTR_GET_DEFAULT(loopItem_, "") };
    inline NotifyExecutionRequest& setLoopItem(string loopItem) { DARABONBA_PTR_SET_VALUE(loopItem_, loopItem) };


    // notifyNote Field Functions 
    bool hasNotifyNote() const { return this->notifyNote_ != nullptr;};
    void deleteNotifyNote() { this->notifyNote_ = nullptr;};
    inline string notifyNote() const { DARABONBA_PTR_GET_DEFAULT(notifyNote_, "") };
    inline NotifyExecutionRequest& setNotifyNote(string notifyNote) { DARABONBA_PTR_SET_VALUE(notifyNote_, notifyNote) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline NotifyExecutionRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline NotifyExecutionRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline NotifyExecutionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline NotifyExecutionRequest& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


    // taskExecutionIds Field Functions 
    bool hasTaskExecutionIds() const { return this->taskExecutionIds_ != nullptr;};
    void deleteTaskExecutionIds() { this->taskExecutionIds_ = nullptr;};
    inline string taskExecutionIds() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionIds_, "") };
    inline NotifyExecutionRequest& setTaskExecutionIds(string taskExecutionIds) { DARABONBA_PTR_SET_VALUE(taskExecutionIds_, taskExecutionIds) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline NotifyExecutionRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the execution.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionId_ = nullptr;
    // The state of the terminated execution. This parameter is valid if you set the NotifyType parameter to CompleteExecution.
    std::shared_ptr<string> executionStatus_ = nullptr;
    // The items of the child node in the loop task.
    std::shared_ptr<string> loopItem_ = nullptr;
    // The description for the notification.
    std::shared_ptr<string> notifyNote_ = nullptr;
    // The type of the notification. Valid values:
    // 
    // *   **ExecuteTask**: starts to run a specific task. This value is used if you perform debugging in the Debug mode. If you set this parameter to ExecuteTask, you also need to set the Parameters parameter.
    // *   **CancelTask**: cancels a current task. This value is used if you perform debugging in the Debug mode.
    // *   **CompleteExecution**: manually terminates an execution if you perform debugging in the Debug mode. You can specify the state of the terminated execution by using the **ExecutionStatus** parameter.
    // *   **Approve**: approves an execution. For example, you are aware of the risks of an operation task and agree to approve the execution.
    // *   **Reject**: rejects an execution. For example, you want to reject the execution of a high-risk operation task.
    // *   **RetryTask**: retries a failed task whose execution mode is Suspend upon Failure.
    // *   **SkipTask**: skips a failed task whose execution mode is Suspend upon Failure.
    // 
    // This parameter is required.
    std::shared_ptr<string> notifyType_ = nullptr;
    // The parameters of the subsequent task. This parameter is valid if you set the NotifyType parameter to ExecuteTask.
    std::shared_ptr<string> parameters_ = nullptr;
    // The ID of the region in which the execution resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The execution ID of the task.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
    // The execution IDs of the tasks.
    std::shared_ptr<string> taskExecutionIds_ = nullptr;
    // The name of the subsequent task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
