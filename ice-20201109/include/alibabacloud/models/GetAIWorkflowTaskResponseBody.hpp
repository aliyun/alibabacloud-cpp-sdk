// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIWorkflowTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowTask, workflowTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowTask, workflowTask_);
    };
    GetAIWorkflowTaskResponseBody() = default ;
    GetAIWorkflowTaskResponseBody(const GetAIWorkflowTaskResponseBody &) = default ;
    GetAIWorkflowTaskResponseBody(GetAIWorkflowTaskResponseBody &&) = default ;
    GetAIWorkflowTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIWorkflowTaskResponseBody() = default ;
    GetAIWorkflowTaskResponseBody& operator=(const GetAIWorkflowTaskResponseBody &) = default ;
    GetAIWorkflowTaskResponseBody& operator=(GetAIWorkflowTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkflowTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowTask& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(NodeResults, nodeResults_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(Workflow, workflow_);
      };
      friend void from_json(const Darabonba::Json& j, WorkflowTask& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(NodeResults, nodeResults_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
          DARABONBA_PTR_TO_JSON(Graph, graph_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, Workflow& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Graph, graph_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
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
        && this->graph_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr && this->workflowId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Workflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // graph Field Functions 
        bool hasGraph() const { return this->graph_ != nullptr;};
        void deleteGraph() { this->graph_ = nullptr;};
        inline string getGraph() const { DARABONBA_PTR_GET_DEFAULT(graph_, "") };
        inline Workflow& setGraph(string graph) { DARABONBA_PTR_SET_VALUE(graph_, graph) };


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


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Workflow& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
        inline Workflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      protected:
        // The time when the template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The workflow\\"s topological structure.
        shared_ptr<string> graph_ {};
        // The time when the template was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The name of the workflow template.
        shared_ptr<string> name_ {};
        // Workflow template status. Valid values:
        // 
        // *   Draft
        // *   Published
        // *   Editing
        shared_ptr<string> status_ {};
        // The scenario type of the template.
        shared_ptr<string> type_ {};
        // The template version.
        shared_ptr<string> version_ {};
        // The ID of the workflow template.
        shared_ptr<string> workflowId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->inputs_ == nullptr && this->nodeResults_ == nullptr && this->outputs_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->userData_ == nullptr && this->version_ == nullptr && this->workflow_ == nullptr; };
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


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
      inline WorkflowTask& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


      // nodeResults Field Functions 
      bool hasNodeResults() const { return this->nodeResults_ != nullptr;};
      void deleteNodeResults() { this->nodeResults_ = nullptr;};
      inline string getNodeResults() const { DARABONBA_PTR_GET_DEFAULT(nodeResults_, "") };
      inline WorkflowTask& setNodeResults(string nodeResults) { DARABONBA_PTR_SET_VALUE(nodeResults_, nodeResults) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline WorkflowTask& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


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


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline WorkflowTask& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline WorkflowTask& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workflow Field Functions 
      bool hasWorkflow() const { return this->workflow_ != nullptr;};
      void deleteWorkflow() { this->workflow_ = nullptr;};
      inline const WorkflowTask::Workflow & getWorkflow() const { DARABONBA_PTR_GET_CONST(workflow_, WorkflowTask::Workflow) };
      inline WorkflowTask::Workflow getWorkflow() { DARABONBA_PTR_GET(workflow_, WorkflowTask::Workflow) };
      inline WorkflowTask& setWorkflow(const WorkflowTask::Workflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
      inline WorkflowTask& setWorkflow(WorkflowTask::Workflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


    protected:
      // The time when the task was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the task was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The input parameters of the workflow task.
      shared_ptr<string> inputs_ {};
      // The results of the workflow nodes. The structure of this JSON varies based on the workflow\\"s configuration.
      shared_ptr<string> nodeResults_ {};
      // The node output.
      shared_ptr<string> outputs_ {};
      // The task state.
      // 
      // Valid values:
      // 
      // *   running
      // *   stopped
      // *   failed
      // *   partial-succeeded
      // *   succeeded
      shared_ptr<string> status_ {};
      // The ID of the workflow task.
      shared_ptr<string> taskId_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
      // The version of the workflow template that was executed.
      shared_ptr<string> version_ {};
      // The workflow template information.
      shared_ptr<WorkflowTask::Workflow> workflow_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workflowTask_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIWorkflowTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowTask Field Functions 
    bool hasWorkflowTask() const { return this->workflowTask_ != nullptr;};
    void deleteWorkflowTask() { this->workflowTask_ = nullptr;};
    inline const GetAIWorkflowTaskResponseBody::WorkflowTask & getWorkflowTask() const { DARABONBA_PTR_GET_CONST(workflowTask_, GetAIWorkflowTaskResponseBody::WorkflowTask) };
    inline GetAIWorkflowTaskResponseBody::WorkflowTask getWorkflowTask() { DARABONBA_PTR_GET(workflowTask_, GetAIWorkflowTaskResponseBody::WorkflowTask) };
    inline GetAIWorkflowTaskResponseBody& setWorkflowTask(const GetAIWorkflowTaskResponseBody::WorkflowTask & workflowTask) { DARABONBA_PTR_SET_VALUE(workflowTask_, workflowTask) };
    inline GetAIWorkflowTaskResponseBody& setWorkflowTask(GetAIWorkflowTaskResponseBody::WorkflowTask && workflowTask) { DARABONBA_PTR_SET_RVALUE(workflowTask_, workflowTask) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the workflow task.
    shared_ptr<GetAIWorkflowTaskResponseBody::WorkflowTask> workflowTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
