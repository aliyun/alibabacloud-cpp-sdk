// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkflowTasksResponseBodyTaskListWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListWorkflowTasksResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowTasksResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowTasksResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    ListWorkflowTasksResponseBodyTaskList() = default ;
    ListWorkflowTasksResponseBodyTaskList(const ListWorkflowTasksResponseBodyTaskList &) = default ;
    ListWorkflowTasksResponseBodyTaskList(ListWorkflowTasksResponseBodyTaskList &&) = default ;
    ListWorkflowTasksResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowTasksResponseBodyTaskList() = default ;
    ListWorkflowTasksResponseBodyTaskList& operator=(const ListWorkflowTasksResponseBodyTaskList &) = default ;
    ListWorkflowTasksResponseBodyTaskList& operator=(ListWorkflowTasksResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskInput_ != nullptr && this->userData_ != nullptr
        && this->workflow_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInput Field Functions 
    bool hasTaskInput() const { return this->taskInput_ != nullptr;};
    void deleteTaskInput() { this->taskInput_ = nullptr;};
    inline string taskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListWorkflowTasksResponseBodyTaskList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const Models::ListWorkflowTasksResponseBodyTaskListWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, Models::ListWorkflowTasksResponseBodyTaskListWorkflow) };
    inline Models::ListWorkflowTasksResponseBodyTaskListWorkflow workflow() { DARABONBA_PTR_GET(workflow_, Models::ListWorkflowTasksResponseBodyTaskListWorkflow) };
    inline ListWorkflowTasksResponseBodyTaskList& setWorkflow(const Models::ListWorkflowTasksResponseBodyTaskListWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline ListWorkflowTasksResponseBodyTaskList& setWorkflow(Models::ListWorkflowTasksResponseBodyTaskListWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskInput_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<Models::ListWorkflowTasksResponseBodyTaskListWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
