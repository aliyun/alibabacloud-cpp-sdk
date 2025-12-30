// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetWorkflowTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowTask, workflowTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowTask, workflowTask_);
    };
    GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody(GetWorkflowTaskResponseBody &&) = default ;
    GetWorkflowTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody& operator=(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody& operator=(GetWorkflowTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkflowTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowTask& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskInput, taskInput_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(Workflow, workflow_);
      };
      friend void from_json(const Darabonba::Json& j, WorkflowTask& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskInput, taskInput_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
      };
      WorkflowTask() = default ;
      WorkflowTask(const WorkflowTask &) = default ;
      WorkflowTask(WorkflowTask &&) = default ;
      WorkflowTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkflowTask() = default ;
      WorkflowTask& operator=(const WorkflowTask &) = default ;
      WorkflowTask& operator=(WorkflowTask &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Workflow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Workflow& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, Workflow& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
        };
        Workflow() = default ;
        Workflow(const Workflow &) = default ;
        Workflow(Workflow &&) = default ;
        Workflow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Workflow() = default ;
        Workflow& operator=(const Workflow &) = default ;
        Workflow& operator=(Workflow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->workflowId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Workflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Workflow& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Workflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Workflow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Workflow& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
        inline Workflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      protected:
        // The time when the workflow was created.
        shared_ptr<string> createTime_ {};
        // The time when the workflow was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The workflow name.
        shared_ptr<string> name_ {};
        // The workflow state.
        // 
        // Valid values:
        // 
        // *   Active
        // *   Inactive
        shared_ptr<string> status_ {};
        // The workflow type.
        // 
        // Valid values:
        // 
        // *   Customize: custom workflow.
        // *   System: system workflow.
        // *   Common: user-created workflow.
        shared_ptr<string> type_ {};
        // The workflow ID.
        shared_ptr<string> workflowId_ {};
      };

      virtual bool empty() const override { return this->activityResults_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskInput_ == nullptr
        && this->userData_ == nullptr && this->workflow_ == nullptr; };
      // activityResults Field Functions 
      bool hasActivityResults() const { return this->activityResults_ != nullptr;};
      void deleteActivityResults() { this->activityResults_ = nullptr;};
      inline string getActivityResults() const { DARABONBA_PTR_GET_DEFAULT(activityResults_, "") };
      inline WorkflowTask& setActivityResults(string activityResults) { DARABONBA_PTR_SET_VALUE(activityResults_, activityResults) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WorkflowTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline WorkflowTask& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WorkflowTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline WorkflowTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskInput Field Functions 
      bool hasTaskInput() const { return this->taskInput_ != nullptr;};
      void deleteTaskInput() { this->taskInput_ = nullptr;};
      inline string getTaskInput() const { DARABONBA_PTR_GET_DEFAULT(taskInput_, "") };
      inline WorkflowTask& setTaskInput(string taskInput) { DARABONBA_PTR_SET_VALUE(taskInput_, taskInput) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline WorkflowTask& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // workflow Field Functions 
      bool hasWorkflow() const { return this->workflow_ != nullptr;};
      void deleteWorkflow() { this->workflow_ = nullptr;};
      inline const WorkflowTask::Workflow & getWorkflow() const { DARABONBA_PTR_GET_CONST(workflow_, WorkflowTask::Workflow) };
      inline WorkflowTask::Workflow getWorkflow() { DARABONBA_PTR_GET(workflow_, WorkflowTask::Workflow) };
      inline WorkflowTask& setWorkflow(const WorkflowTask::Workflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
      inline WorkflowTask& setWorkflow(WorkflowTask::Workflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


    protected:
      // The results for all nodes of the workflow task.
      shared_ptr<string> activityResults_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the task was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The task state.
      // 
      // Valid values:
      // 
      // *   Init: The task is being initialized.
      // *   Failed: The task failed.
      // *   Canceled: The task is canceled.
      // *   Processing: The task is in progress.
      // *   Succeed: The task is successful.
      shared_ptr<string> status_ {};
      // The ID of the workflow task.
      shared_ptr<string> taskId_ {};
      // The input of the workflow task.
      shared_ptr<string> taskInput_ {};
      // The user-defined field that was specified when the workflow task was submitted.
      shared_ptr<string> userData_ {};
      // The workflow Information.
      shared_ptr<WorkflowTask::Workflow> workflow_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workflowTask_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowTask Field Functions 
    bool hasWorkflowTask() const { return this->workflowTask_ != nullptr;};
    void deleteWorkflowTask() { this->workflowTask_ = nullptr;};
    inline const GetWorkflowTaskResponseBody::WorkflowTask & getWorkflowTask() const { DARABONBA_PTR_GET_CONST(workflowTask_, GetWorkflowTaskResponseBody::WorkflowTask) };
    inline GetWorkflowTaskResponseBody::WorkflowTask getWorkflowTask() { DARABONBA_PTR_GET(workflowTask_, GetWorkflowTaskResponseBody::WorkflowTask) };
    inline GetWorkflowTaskResponseBody& setWorkflowTask(const GetWorkflowTaskResponseBody::WorkflowTask & workflowTask) { DARABONBA_PTR_SET_VALUE(workflowTask_, workflowTask) };
    inline GetWorkflowTaskResponseBody& setWorkflowTask(GetWorkflowTaskResponseBody::WorkflowTask && workflowTask) { DARABONBA_PTR_SET_RVALUE(workflowTask_, workflowTask) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the workflow task.
    shared_ptr<GetWorkflowTaskResponseBody::WorkflowTask> workflowTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
