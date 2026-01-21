// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeProcesses, nodeProcesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeProcesses, nodeProcesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitoringAgentProcessesResponseBody() = default ;
    DescribeMonitoringAgentProcessesResponseBody(const DescribeMonitoringAgentProcessesResponseBody &) = default ;
    DescribeMonitoringAgentProcessesResponseBody(DescribeMonitoringAgentProcessesResponseBody &&) = default ;
    DescribeMonitoringAgentProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentProcessesResponseBody() = default ;
    DescribeMonitoringAgentProcessesResponseBody& operator=(const DescribeMonitoringAgentProcessesResponseBody &) = default ;
    DescribeMonitoringAgentProcessesResponseBody& operator=(DescribeMonitoringAgentProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeProcesses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeProcesses& obj) { 
        DARABONBA_PTR_TO_JSON(NodeProcess, nodeProcess_);
      };
      friend void from_json(const Darabonba::Json& j, NodeProcesses& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeProcess, nodeProcess_);
      };
      NodeProcesses() = default ;
      NodeProcesses(const NodeProcesses &) = default ;
      NodeProcesses(NodeProcesses &&) = default ;
      NodeProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeProcesses() = default ;
      NodeProcesses& operator=(const NodeProcesses &) = default ;
      NodeProcesses& operator=(NodeProcesses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeProcess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeProcess& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ProcessId, processId_);
          DARABONBA_PTR_TO_JSON(ProcessName, processName_);
          DARABONBA_PTR_TO_JSON(ProcessUser, processUser_);
        };
        friend void from_json(const Darabonba::Json& j, NodeProcess& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
          DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
          DARABONBA_PTR_FROM_JSON(ProcessUser, processUser_);
        };
        NodeProcess() = default ;
        NodeProcess(const NodeProcess &) = default ;
        NodeProcess(NodeProcess &&) = default ;
        NodeProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeProcess() = default ;
        NodeProcess& operator=(const NodeProcess &) = default ;
        NodeProcess& operator=(NodeProcess &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->processId_ == nullptr && this->processName_ == nullptr && this->processUser_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline NodeProcess& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline NodeProcess& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NodeProcess& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // processId Field Functions 
        bool hasProcessId() const { return this->processId_ != nullptr;};
        void deleteProcessId() { this->processId_ = nullptr;};
        inline int64_t getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
        inline NodeProcess& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


        // processName Field Functions 
        bool hasProcessName() const { return this->processName_ != nullptr;};
        void deleteProcessName() { this->processName_ = nullptr;};
        inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
        inline NodeProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


        // processUser Field Functions 
        bool hasProcessUser() const { return this->processUser_ != nullptr;};
        void deleteProcessUser() { this->processUser_ = nullptr;};
        inline string getProcessUser() const { DARABONBA_PTR_GET_DEFAULT(processUser_, "") };
        inline NodeProcess& setProcessUser(string processUser) { DARABONBA_PTR_SET_VALUE(processUser_, processUser) };


      protected:
        // The command used to obtain the number of processes. Valid value: `number`.
        // 
        // >  The `number` command obtains the number of processes that match the condition.
        shared_ptr<string> command_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The ID of the process.
        shared_ptr<int64_t> processId_ {};
        // The name of the process.
        shared_ptr<string> processName_ {};
        // The user who launched the process.
        shared_ptr<string> processUser_ {};
      };

      virtual bool empty() const override { return this->nodeProcess_ == nullptr; };
      // nodeProcess Field Functions 
      bool hasNodeProcess() const { return this->nodeProcess_ != nullptr;};
      void deleteNodeProcess() { this->nodeProcess_ = nullptr;};
      inline const vector<NodeProcesses::NodeProcess> & getNodeProcess() const { DARABONBA_PTR_GET_CONST(nodeProcess_, vector<NodeProcesses::NodeProcess>) };
      inline vector<NodeProcesses::NodeProcess> getNodeProcess() { DARABONBA_PTR_GET(nodeProcess_, vector<NodeProcesses::NodeProcess>) };
      inline NodeProcesses& setNodeProcess(const vector<NodeProcesses::NodeProcess> & nodeProcess) { DARABONBA_PTR_SET_VALUE(nodeProcess_, nodeProcess) };
      inline NodeProcesses& setNodeProcess(vector<NodeProcesses::NodeProcess> && nodeProcess) { DARABONBA_PTR_SET_RVALUE(nodeProcess_, nodeProcess) };


    protected:
      shared_ptr<vector<NodeProcesses::NodeProcess>> nodeProcess_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nodeProcesses_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeProcesses Field Functions 
    bool hasNodeProcesses() const { return this->nodeProcesses_ != nullptr;};
    void deleteNodeProcesses() { this->nodeProcesses_ = nullptr;};
    inline const DescribeMonitoringAgentProcessesResponseBody::NodeProcesses & getNodeProcesses() const { DARABONBA_PTR_GET_CONST(nodeProcesses_, DescribeMonitoringAgentProcessesResponseBody::NodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBody::NodeProcesses getNodeProcesses() { DARABONBA_PTR_GET(nodeProcesses_, DescribeMonitoringAgentProcessesResponseBody::NodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBody& setNodeProcesses(const DescribeMonitoringAgentProcessesResponseBody::NodeProcesses & nodeProcesses) { DARABONBA_PTR_SET_VALUE(nodeProcesses_, nodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBody& setNodeProcesses(DescribeMonitoringAgentProcessesResponseBody::NodeProcesses && nodeProcesses) { DARABONBA_PTR_SET_RVALUE(nodeProcesses_, nodeProcesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentProcessesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The value 200 indicates that the call was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The information about the processes.
    shared_ptr<DescribeMonitoringAgentProcessesResponseBody::NodeProcesses> nodeProcesses_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
