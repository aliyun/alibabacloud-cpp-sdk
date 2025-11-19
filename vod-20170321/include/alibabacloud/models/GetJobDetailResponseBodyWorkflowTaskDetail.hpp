// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYWORKFLOWTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYWORKFLOWTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobDetailResponseBodyWorkflowTaskDetailWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBodyWorkflowTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBodyWorkflowTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityResults, activityResults_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBodyWorkflowTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityResults, activityResults_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    GetJobDetailResponseBodyWorkflowTaskDetail() = default ;
    GetJobDetailResponseBodyWorkflowTaskDetail(const GetJobDetailResponseBodyWorkflowTaskDetail &) = default ;
    GetJobDetailResponseBodyWorkflowTaskDetail(GetJobDetailResponseBodyWorkflowTaskDetail &&) = default ;
    GetJobDetailResponseBodyWorkflowTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBodyWorkflowTaskDetail() = default ;
    GetJobDetailResponseBodyWorkflowTaskDetail& operator=(const GetJobDetailResponseBodyWorkflowTaskDetail &) = default ;
    GetJobDetailResponseBodyWorkflowTaskDetail& operator=(GetJobDetailResponseBodyWorkflowTaskDetail &&) = default ;
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
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setActivityResults(string activityResults) { DARABONBA_PTR_SET_VALUE(activityResults_, activityResults) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInput Field Functions 
    bool hasTaskInput() const { return this->taskInput_ != nullptr;};
    void deleteTaskInput() { this->taskInput_ = nullptr;};
    inline string taskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow) };
    inline Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow workflow() { DARABONBA_PTR_GET(workflow_, Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow) };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setWorkflow(const Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline GetJobDetailResponseBodyWorkflowTaskDetail& setWorkflow(Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    std::shared_ptr<string> activityResults_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskInput_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<Models::GetJobDetailResponseBodyWorkflowTaskDetailWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
