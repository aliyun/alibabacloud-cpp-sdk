// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
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
  class DescribeInvocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody(DescribeInvocationsResponseBody &&) = default ;
    DescribeInvocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody& operator=(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody& operator=(DescribeInvocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Invocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocations& obj) { 
        DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      };
      friend void from_json(const Darabonba::Json& j, Invocations& obj) { 
        DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      };
      Invocations() = default ;
      Invocations(const Invocations &) = default ;
      Invocations(Invocations &&) = default ;
      Invocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocations() = default ;
      Invocations& operator=(const Invocations &) = default ;
      Invocations& operator=(Invocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Invocation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invocation& obj) { 
          DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_TO_JSON(CommandName, commandName_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Frequency, frequency_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_TO_JSON(InvokeNodes, invokeNodes_);
          DARABONBA_PTR_TO_JSON(InvokeStatus, invokeStatus_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
        };
        friend void from_json(const Darabonba::Json& j, Invocation& obj) { 
          DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_FROM_JSON(InvokeNodes, invokeNodes_);
          DARABONBA_PTR_FROM_JSON(InvokeStatus, invokeStatus_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
        };
        Invocation() = default ;
        Invocation(const Invocation &) = default ;
        Invocation(Invocation &&) = default ;
        Invocation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Invocation() = default ;
        Invocation& operator=(const Invocation &) = default ;
        Invocation& operator=(Invocation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InvokeNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvokeNodes& obj) { 
            DARABONBA_PTR_TO_JSON(InvokeNode, invokeNode_);
          };
          friend void from_json(const Darabonba::Json& j, InvokeNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(InvokeNode, invokeNode_);
          };
          InvokeNodes() = default ;
          InvokeNodes(const InvokeNodes &) = default ;
          InvokeNodes(InvokeNodes &&) = default ;
          InvokeNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvokeNodes() = default ;
          InvokeNodes& operator=(const InvokeNodes &) = default ;
          InvokeNodes& operator=(InvokeNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InvokeNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InvokeNode& obj) { 
              DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_TO_JSON(Dropped, dropped_);
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
              DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeInvokeStatus, nodeInvokeStatus_);
              DARABONBA_PTR_TO_JSON(Output, output_);
              DARABONBA_PTR_TO_JSON(Repeats, repeats_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
              DARABONBA_PTR_TO_JSON(Timed, timed_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, InvokeNode& obj) { 
              DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
              DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeInvokeStatus, nodeInvokeStatus_);
              DARABONBA_PTR_FROM_JSON(Output, output_);
              DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
              DARABONBA_PTR_FROM_JSON(Timed, timed_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            InvokeNode() = default ;
            InvokeNode(const InvokeNode &) = default ;
            InvokeNode(InvokeNode &&) = default ;
            InvokeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InvokeNode() = default ;
            InvokeNode& operator=(const InvokeNode &) = default ;
            InvokeNode& operator=(InvokeNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->dropped_ == nullptr && this->errorCode_ == nullptr && this->errorInfo_ == nullptr && this->exitCode_ == nullptr && this->finishTime_ == nullptr
        && this->invocationStatus_ == nullptr && this->nodeId_ == nullptr && this->nodeInvokeStatus_ == nullptr && this->output_ == nullptr && this->repeats_ == nullptr
        && this->startTime_ == nullptr && this->stopTime_ == nullptr && this->timed_ == nullptr && this->updateTime_ == nullptr; };
            // creationTime Field Functions 
            bool hasCreationTime() const { return this->creationTime_ != nullptr;};
            void deleteCreationTime() { this->creationTime_ = nullptr;};
            inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
            inline InvokeNode& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


            // dropped Field Functions 
            bool hasDropped() const { return this->dropped_ != nullptr;};
            void deleteDropped() { this->dropped_ = nullptr;};
            inline int32_t getDropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
            inline InvokeNode& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline InvokeNode& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorInfo Field Functions 
            bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
            void deleteErrorInfo() { this->errorInfo_ = nullptr;};
            inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
            inline InvokeNode& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


            // exitCode Field Functions 
            bool hasExitCode() const { return this->exitCode_ != nullptr;};
            void deleteExitCode() { this->exitCode_ = nullptr;};
            inline int32_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0) };
            inline InvokeNode& setExitCode(int32_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


            // finishTime Field Functions 
            bool hasFinishTime() const { return this->finishTime_ != nullptr;};
            void deleteFinishTime() { this->finishTime_ = nullptr;};
            inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
            inline InvokeNode& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


            // invocationStatus Field Functions 
            bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
            void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
            inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
            inline InvokeNode& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline InvokeNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // nodeInvokeStatus Field Functions 
            bool hasNodeInvokeStatus() const { return this->nodeInvokeStatus_ != nullptr;};
            void deleteNodeInvokeStatus() { this->nodeInvokeStatus_ = nullptr;};
            inline string getNodeInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeInvokeStatus_, "") };
            inline InvokeNode& setNodeInvokeStatus(string nodeInvokeStatus) { DARABONBA_PTR_SET_VALUE(nodeInvokeStatus_, nodeInvokeStatus) };


            // output Field Functions 
            bool hasOutput() const { return this->output_ != nullptr;};
            void deleteOutput() { this->output_ = nullptr;};
            inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
            inline InvokeNode& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


            // repeats Field Functions 
            bool hasRepeats() const { return this->repeats_ != nullptr;};
            void deleteRepeats() { this->repeats_ = nullptr;};
            inline int32_t getRepeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
            inline InvokeNode& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline InvokeNode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline InvokeNode& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


            // timed Field Functions 
            bool hasTimed() const { return this->timed_ != nullptr;};
            void deleteTimed() { this->timed_ = nullptr;};
            inline string getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, "") };
            inline InvokeNode& setTimed(string timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline InvokeNode& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            // The start time of the execution.
            shared_ptr<string> creationTime_ {};
            // The size of the Output text that was truncated and discarded because the Output value exceeded 24 KB in size.
            shared_ptr<int32_t> dropped_ {};
            // The error code returned when the file failed to be sent to the instance. Valid values:
            // 
            // *   Null: The file is sent to the instance.
            // *   NodeNotExists: The specified instance does not exist or has been released.
            // *   NodeReleased: The instance was released while the file was being sent.
            // *   NodeNotRunning: The instance was not running while the file sending task was being created.
            // *   AccountNotExists: The specified account does not exist.
            // *   ClientNotRunning: Cloud Assistant Agent is not running.
            // *   ClientNotResponse: Cloud Assistant Agent does not respond.
            // *   ClientIsUpgrading: Cloud Assistant Agent is being upgraded.
            // *   ClientNeedUpgrade: Cloud Assistant Agent needs to be upgraded.
            // *   DeliveryTimeout: The file sending task timed out.
            // *   FileCreateFail: The file failed to be created.
            // *   FileAlreadyExists: A file with the same name exists in the specified directory.
            // *   FileContentInvalid: The file content is invalid.
            // *   FileNameInvalid: The file name is invalid.
            // *   FilePathInvalid: The specified directory is invalid.
            // *   FileAuthorityInvalid: The specified permissions on the file are invalid.
            // *   UserGroupNotExists: The specified user group does not exist.
            shared_ptr<string> errorCode_ {};
            // The error message returned when the command cannot be sent or run.
            // 
            // *   If this parameter is empty, the command was run as expected.
            // *   the specified node does not exists: The specified instance does not exist or is released.
            // *   the node has node when create task: The instance is released when the command is being run.
            // *   the node is not running when create task: The instance is not in the Running state while the command is being run.
            // *   the command is not applicable: The command is not applicable to the specified instance.
            // *   the specified account does not exists: The specified account does not exist.
            // *   the specified directory does not exists: The specified directory does not exist.
            // *   the cron job expression is invalid: The cron expression that specifies the execution time is invalid.
            // *   the aliyun service is not running on the instance: Cloud Assistant Agent is not running.
            // *   the aliyun service in the instance does not response: Cloud Assistant Agent does not respond.
            // *   the aliyun service in the node is upgrading now: Cloud Assistant Agent is being upgraded.
            // *   the aliyun service in the node need upgrade: Cloud Assistant Agent needs to be upgraded.
            // *   the command delivery has been timeout: The request to send the command timed out.
            // *   the command execution has been timeout: The command execution timed out.
            // *   the command execution got an exception: An exception occurred when the command is being run.
            // *   the command execution has been interrupted: The command execution is interrupted.
            // *   the command execution exit code is not zero: The command execution completes, but the exit code is not 0.
            // *   the specified node has been released: The instance is released while the file is being sent.
            shared_ptr<string> errorInfo_ {};
            // The exit code of the execution. Valid values:
            // 
            // *   For Linux instances, the value is the exit code of the shell process.
            // *   For Windows instances, the value is the exit code of the batch or PowerShell process.
            shared_ptr<int32_t> exitCode_ {};
            // The end time of the execution.
            shared_ptr<string> finishTime_ {};
            // The execution status of the command on a single instance. Valid values:
            // 
            // *   Pending: The command was being verified or sent.
            // 
            // *   Invalid: The specified command type or parameter is invalid.
            // 
            // *   Aborted: The command failed to be sent to the instance. To send a command to an instance, make sure that the instance is in the Running state and the command can be sent to the instance within 1 minute.
            // 
            // *   Running: The command is being run on the instance.
            // 
            // *   Success:
            // 
            //     *   One-time task: The execution was complete, and the exit code was 0.
            //     *   Recurring execution: The previous occurrence of the execution is complete, and the exit code is 0. The specified recurring period during which the command is run ends.
            // 
            // *   Failed:
            // 
            //     *   One-time task: The execution was complete, but the exit code was not 0.
            //     *   Recurring execution: The previous occurrence of the execution is complete, but the exit code is not 0. The specified recurring period during which the command is run is about to end.
            // 
            // *   Error: The execution cannot proceed due to an exception.
            // 
            // *   Timeout: The execution timed out.
            // 
            // *   Cancelled: The execution was canceled before it started.
            // 
            // *   Stopping: The command task is being stopped.
            // 
            // *   Terminated: The execution was terminated before completion.
            // 
            // *   Scheduled:
            // 
            //     *   One-time task: The execution state can never be Scheduled.
            //     *   Recurring execution: The command is waiting to be run.
            shared_ptr<string> invocationStatus_ {};
            // The node ID.
            shared_ptr<string> nodeId_ {};
            // The execution status of the command on a single instance.
            shared_ptr<string> nodeInvokeStatus_ {};
            // The command output.
            // 
            // *   If ContentEncoding is set to PlainText in the request, the original command output is returned.
            // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command output is returned.
            shared_ptr<string> output_ {};
            // The number of times that the command was run on the instance.
            // 
            // *   If the command is set to run only once, the value is 0 or 1.
            // *   If the command is set to run on a schedule, the value is the number of times that the command has been run on the instance.
            shared_ptr<int32_t> repeats_ {};
            // The start time.
            shared_ptr<string> startTime_ {};
            // The time when the command task was stopped. If you call the StopInvocation operation to stop the command task, the value of this parameter is the time when the operation is called.
            shared_ptr<string> stopTime_ {};
            // Indicates whether the command is to be automatically run. Valid values:
            // 
            // *   true: The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Period`, `NextRebootOnly`, or `EveryReboot`.
            // 
            // *   false (default): The command meets the following requirements.
            // 
            //     *   The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Once`.
            //     *   The command task is canceled, stopped, or completed.
            shared_ptr<string> timed_ {};
            // The update time of the execution.
            shared_ptr<string> updateTime_ {};
          };

          virtual bool empty() const override { return this->invokeNode_ == nullptr; };
          // invokeNode Field Functions 
          bool hasInvokeNode() const { return this->invokeNode_ != nullptr;};
          void deleteInvokeNode() { this->invokeNode_ = nullptr;};
          inline const vector<InvokeNodes::InvokeNode> & getInvokeNode() const { DARABONBA_PTR_GET_CONST(invokeNode_, vector<InvokeNodes::InvokeNode>) };
          inline vector<InvokeNodes::InvokeNode> getInvokeNode() { DARABONBA_PTR_GET(invokeNode_, vector<InvokeNodes::InvokeNode>) };
          inline InvokeNodes& setInvokeNode(const vector<InvokeNodes::InvokeNode> & invokeNode) { DARABONBA_PTR_SET_VALUE(invokeNode_, invokeNode) };
          inline InvokeNodes& setInvokeNode(vector<InvokeNodes::InvokeNode> && invokeNode) { DARABONBA_PTR_SET_RVALUE(invokeNode_, invokeNode) };


        protected:
          // The command execution records of the node.
          shared_ptr<vector<InvokeNodes::InvokeNode>> invokeNode_ {};
        };

        virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandDescription_ == nullptr && this->commandName_ == nullptr && this->creationTime_ == nullptr && this->frequency_ == nullptr && this->invocationStatus_ == nullptr
        && this->invokeId_ == nullptr && this->invokeNodes_ == nullptr && this->invokeStatus_ == nullptr && this->parameters_ == nullptr && this->repeatMode_ == nullptr
        && this->timeout_ == nullptr && this->username_ == nullptr && this->workingDir_ == nullptr; };
        // commandContent Field Functions 
        bool hasCommandContent() const { return this->commandContent_ != nullptr;};
        void deleteCommandContent() { this->commandContent_ = nullptr;};
        inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
        inline Invocation& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


        // commandDescription Field Functions 
        bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
        void deleteCommandDescription() { this->commandDescription_ = nullptr;};
        inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
        inline Invocation& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


        // commandName Field Functions 
        bool hasCommandName() const { return this->commandName_ != nullptr;};
        void deleteCommandName() { this->commandName_ = nullptr;};
        inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
        inline Invocation& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Invocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
        inline Invocation& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline Invocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // invokeId Field Functions 
        bool hasInvokeId() const { return this->invokeId_ != nullptr;};
        void deleteInvokeId() { this->invokeId_ = nullptr;};
        inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
        inline Invocation& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


        // invokeNodes Field Functions 
        bool hasInvokeNodes() const { return this->invokeNodes_ != nullptr;};
        void deleteInvokeNodes() { this->invokeNodes_ = nullptr;};
        inline const Invocation::InvokeNodes & getInvokeNodes() const { DARABONBA_PTR_GET_CONST(invokeNodes_, Invocation::InvokeNodes) };
        inline Invocation::InvokeNodes getInvokeNodes() { DARABONBA_PTR_GET(invokeNodes_, Invocation::InvokeNodes) };
        inline Invocation& setInvokeNodes(const Invocation::InvokeNodes & invokeNodes) { DARABONBA_PTR_SET_VALUE(invokeNodes_, invokeNodes) };
        inline Invocation& setInvokeNodes(Invocation::InvokeNodes && invokeNodes) { DARABONBA_PTR_SET_RVALUE(invokeNodes_, invokeNodes) };


        // invokeStatus Field Functions 
        bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
        void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
        inline string getInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
        inline Invocation& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Invocation& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // repeatMode Field Functions 
        bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
        void deleteRepeatMode() { this->repeatMode_ = nullptr;};
        inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
        inline Invocation& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline Invocation& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Invocation& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // workingDir Field Functions 
        bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
        void deleteWorkingDir() { this->workingDir_ = nullptr;};
        inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
        inline Invocation& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


      protected:
        // The executed command.
        // 
        // *   If ContentEncoding is set to PlainText in the request, the original command content is returned.
        // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command content is returned.
        shared_ptr<string> commandContent_ {};
        // The command description.
        shared_ptr<string> commandDescription_ {};
        // The command name.
        shared_ptr<string> commandName_ {};
        // The time when the command task was created.
        shared_ptr<string> creationTime_ {};
        // The schedule on which the command was run.
        shared_ptr<string> frequency_ {};
        // The overall execution state of the command task. The value of this parameter depends on the execution states of the command task on all the involved instances. Valid values:
        // 
        // *   Pending: The command was being verified or sent. If the execution state on at least one instance is Pending, the overall execution state is Pending.
        // 
        // *   Scheduled: The command that is set to run on a schedule is sent and waiting to be run. If the execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
        // 
        // *   Running: The command is being run on the instance. When the execution state on at least one instance is Running, the overall execution state is Running.
        // 
        // *   Success: When the execution state on at least one instance is Success and the execution state on the other instances is Stopped or Success, the overall execution state is Success.
        // 
        //     *   One-time task: The execution is complete, and the exit code is 0.
        //     *   Scheduled task: The last execution was complete, the exit code was 0, and the specified period ended.
        // 
        // *   Failed: When the execution state on all instances is Stopped or Failed, the overall execution state is Failed. When the execution state on an instance is one of the following values, Failed is returned as the overall execution state:
        // 
        //     *   Invalid: The command is invalid.
        //     *   Aborted: The command failed to be sent.
        //     *   Failed: The execution was complete, but the exit code was not 0.
        //     *   Timeout: The execution timed out.
        //     *   Error: An error occurred while the command was being run.
        // 
        // *   Stopping: The command task is being stopped. When the execution state on at least one instance is Stopping, the overall execution state is Stopping.
        // 
        // *   Stopped: The task was stopped. When the execution state on all instances is Stopped, the overall execution state is Stopped. When the execution state on an instance is one of the following values, Stopped is returned as the overall execution state:
        // 
        //     *   Cancelled: The task was canceled.
        //     *   Terminated: The task was terminated.
        // 
        // *   PartialFailed: The execution was complete on some instances and failed on other instances. When the execution state is Success on some instances and is Failed or Stopped on the other instances, the overall execution state is PartialFailed.
        // 
        // >  The value of the `InvokeStatus` response parameter is similar to the value of InvocationStatus. We recommend that you ignore InvokeStatus and check the value of InvocationStatus.
        shared_ptr<string> invocationStatus_ {};
        // The execution ID.
        shared_ptr<string> invokeId_ {};
        // The command execution records.
        shared_ptr<Invocation::InvokeNodes> invokeNodes_ {};
        // The overall execution status of the command task. The value of this parameter depends on the execution states of the command task on all involved instances. Valid values:
        // 
        // *   Running:
        // 
        //     *   Scheduled task: Before you stop the scheduled execution of the command, the overall execution state is always Running.
        //     *   One-time task: If the command is being run on instances, the overall execution state is Running.
        // 
        // *   Finished:
        // 
        //     *   Scheduled task: The overall execution state can never be Finished.
        //     *   One-time task: The execution is complete on all instances, or the execution is stopped on some instances and is complete on the other instances.
        // 
        // *   Failed:
        // 
        //     *   Scheduled task: The overall execution state can never be Failed.
        //     *   One-time task: The execution failed on all instances.
        // 
        // *   Stopped: The task is stopped.
        // 
        // *   Stopping: The task is being stopped.
        // 
        // *   PartialFailed: The task fails on some instances. If you specify both this parameter and `InstanceId`, this parameter does not take effect.
        shared_ptr<string> invokeStatus_ {};
        // The custom parameters in the command.
        shared_ptr<string> parameters_ {};
        // The execution mode of the command. Valid values:
        // 
        // *   Once: The command is run immediately.
        // *   Period: The command is run on a schedule.
        // *   NextRebootOnly: The command is run the next time the instances start.
        // *   EveryReboot: runs the command every time the instances start.
        shared_ptr<string> repeatMode_ {};
        // The timeout period for the command execution. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The username that is used to run the command.
        shared_ptr<string> username_ {};
        // The working directory of the command on the instance.
        shared_ptr<string> workingDir_ {};
      };

      virtual bool empty() const override { return this->invocation_ == nullptr; };
      // invocation Field Functions 
      bool hasInvocation() const { return this->invocation_ != nullptr;};
      void deleteInvocation() { this->invocation_ = nullptr;};
      inline const vector<Invocations::Invocation> & getInvocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Invocations::Invocation>) };
      inline vector<Invocations::Invocation> getInvocation() { DARABONBA_PTR_GET(invocation_, vector<Invocations::Invocation>) };
      inline Invocations& setInvocation(const vector<Invocations::Invocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
      inline Invocations& setInvocation(vector<Invocations::Invocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    protected:
      // The file sending records.
      shared_ptr<vector<Invocations::Invocation>> invocation_ {};
    };

    virtual bool empty() const override { return this->invocations_ == nullptr
        && this->requestId_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const DescribeInvocationsResponseBody::Invocations & getInvocations() const { DARABONBA_PTR_GET_CONST(invocations_, DescribeInvocationsResponseBody::Invocations) };
    inline DescribeInvocationsResponseBody::Invocations getInvocations() { DARABONBA_PTR_GET(invocations_, DescribeInvocationsResponseBody::Invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(const DescribeInvocationsResponseBody::Invocations & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(DescribeInvocationsResponseBody::Invocations && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The command execution record.
    shared_ptr<DescribeInvocationsResponseBody::Invocations> invocations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
