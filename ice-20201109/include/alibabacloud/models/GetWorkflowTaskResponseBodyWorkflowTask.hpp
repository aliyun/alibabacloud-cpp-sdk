// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODYWORKFLOWTASK_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODYWORKFLOWTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowTaskResponseBodyWorkflowTaskWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetWorkflowTaskResponseBodyWorkflowTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowTaskResponseBodyWorkflowTask& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityResults, activityResults_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowTaskResponseBodyWorkflowTask& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityResults, activityResults_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    GetWorkflowTaskResponseBodyWorkflowTask() = default ;
    GetWorkflowTaskResponseBodyWorkflowTask(const GetWorkflowTaskResponseBodyWorkflowTask &) = default ;
    GetWorkflowTaskResponseBodyWorkflowTask(GetWorkflowTaskResponseBodyWorkflowTask &&) = default ;
    GetWorkflowTaskResponseBodyWorkflowTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowTaskResponseBodyWorkflowTask() = default ;
    GetWorkflowTaskResponseBodyWorkflowTask& operator=(const GetWorkflowTaskResponseBodyWorkflowTask &) = default ;
    GetWorkflowTaskResponseBodyWorkflowTask& operator=(GetWorkflowTaskResponseBodyWorkflowTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityResults_ == nullptr
        && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskInput_ == nullptr
        && return this->userData_ == nullptr && return this->workflow_ == nullptr; };
    // activityResults Field Functions 
    bool hasActivityResults() const { return this->activityResults_ != nullptr;};
    void deleteActivityResults() { this->activityResults_ = nullptr;};
    inline string activityResults() const { DARABONBA_PTR_GET_DEFAULT(activityResults_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setActivityResults(string activityResults) { DARABONBA_PTR_SET_VALUE(activityResults_, activityResults) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInput Field Functions 
    bool hasTaskInput() const { return this->taskInput_ != nullptr;};
    void deleteTaskInput() { this->taskInput_ = nullptr;};
    inline string taskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow) };
    inline Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow workflow() { DARABONBA_PTR_GET(workflow_, Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow) };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setWorkflow(const Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline GetWorkflowTaskResponseBodyWorkflowTask& setWorkflow(Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    // The results for all nodes of the workflow task.
    std::shared_ptr<string> activityResults_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the task was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The task state.
    // 
    // Valid values:
    // 
    // *   Init: The task is being initialized.
    // *   Failed: The task failed.
    // *   Canceled: The task is canceled.
    // *   Processing: The task is in progress.
    // *   Succeed: The task is successful.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the workflow task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The input of the workflow task.
    std::shared_ptr<string> taskInput_ = nullptr;
    // The user-defined field that was specified when the workflow task was submitted.
    std::shared_ptr<string> userData_ = nullptr;
    // The workflow Information.
    std::shared_ptr<Models::GetWorkflowTaskResponseBodyWorkflowTaskWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
