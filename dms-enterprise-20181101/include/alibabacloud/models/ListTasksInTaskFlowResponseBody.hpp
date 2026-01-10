// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTasksInTaskFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksInTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksInTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListTasksInTaskFlowResponseBody() = default ;
    ListTasksInTaskFlowResponseBody(const ListTasksInTaskFlowResponseBody &) = default ;
    ListTasksInTaskFlowResponseBody(ListTasksInTaskFlowResponseBody &&) = default ;
    ListTasksInTaskFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksInTaskFlowResponseBody() = default ;
    ListTasksInTaskFlowResponseBody& operator=(const ListTasksInTaskFlowResponseBody &) = default ;
    ListTasksInTaskFlowResponseBody& operator=(ListTasksInTaskFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(Task, task_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(Task, task_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(GraphParam, graphParam_);
          DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
          DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(GraphParam, graphParam_);
          DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
          DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->graphParam_ == nullptr
        && this->nodeConfig_ == nullptr && this->nodeContent_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeOutput_ == nullptr
        && this->nodeType_ == nullptr && this->timeVariables_ == nullptr; };
        // graphParam Field Functions 
        bool hasGraphParam() const { return this->graphParam_ != nullptr;};
        void deleteGraphParam() { this->graphParam_ = nullptr;};
        inline string getGraphParam() const { DARABONBA_PTR_GET_DEFAULT(graphParam_, "") };
        inline Task& setGraphParam(string graphParam) { DARABONBA_PTR_SET_VALUE(graphParam_, graphParam) };


        // nodeConfig Field Functions 
        bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
        void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
        inline string getNodeConfig() const { DARABONBA_PTR_GET_DEFAULT(nodeConfig_, "") };
        inline Task& setNodeConfig(string nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };


        // nodeContent Field Functions 
        bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
        void deleteNodeContent() { this->nodeContent_ = nullptr;};
        inline string getNodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
        inline Task& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Task& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Task& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeOutput Field Functions 
        bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
        void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
        inline string getNodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
        inline Task& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline Task& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // timeVariables Field Functions 
        bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
        void deleteTimeVariables() { this->timeVariables_ = nullptr;};
        inline string getTimeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
        inline Task& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


      protected:
        // The position of the node on the Directed Acyclic Graph (DAG).
        shared_ptr<string> graphParam_ {};
        // The advanced configuration for the node.
        shared_ptr<string> nodeConfig_ {};
        // The configuration for the node.
        shared_ptr<string> nodeContent_ {};
        // The ID of the node.
        shared_ptr<string> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The output variables for the task.
        shared_ptr<string> nodeOutput_ {};
        // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
        shared_ptr<string> nodeType_ {};
        // The time variables configured for the node.
        shared_ptr<string> timeVariables_ {};
      };

      virtual bool empty() const override { return this->task_ == nullptr; };
      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<Tasks::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<Tasks::Task>) };
      inline vector<Tasks::Task> getTask() { DARABONBA_PTR_GET(task_, vector<Tasks::Task>) };
      inline Tasks& setTask(const vector<Tasks::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline Tasks& setTask(vector<Tasks::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    protected:
      shared_ptr<vector<Tasks::Task>> task_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tasks_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTasksInTaskFlowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTasksInTaskFlowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTasksInTaskFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTasksInTaskFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const ListTasksInTaskFlowResponseBody::Tasks & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, ListTasksInTaskFlowResponseBody::Tasks) };
    inline ListTasksInTaskFlowResponseBody::Tasks getTasks() { DARABONBA_PTR_GET(tasks_, ListTasksInTaskFlowResponseBody::Tasks) };
    inline ListTasksInTaskFlowResponseBody& setTasks(const ListTasksInTaskFlowResponseBody::Tasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListTasksInTaskFlowResponseBody& setTasks(ListTasksInTaskFlowResponseBody::Tasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The tasks in the task flow.
    shared_ptr<ListTasksInTaskFlowResponseBody::Tasks> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
