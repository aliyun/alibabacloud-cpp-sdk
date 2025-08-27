// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODESINVOKENODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODESINVOKENODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& obj) { 
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
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& operator=(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& operator=(DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->dropped_ != nullptr && this->errorCode_ != nullptr && this->errorInfo_ != nullptr && this->exitCode_ != nullptr && this->finishTime_ != nullptr
        && this->invocationStatus_ != nullptr && this->nodeId_ != nullptr && this->nodeInvokeStatus_ != nullptr && this->output_ != nullptr && this->repeats_ != nullptr
        && this->startTime_ != nullptr && this->stopTime_ != nullptr && this->timed_ != nullptr && this->updateTime_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dropped Field Functions 
    bool hasDropped() const { return this->dropped_ != nullptr;};
    void deleteDropped() { this->dropped_ = nullptr;};
    inline int32_t dropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int32_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setExitCode(int32_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeInvokeStatus Field Functions 
    bool hasNodeInvokeStatus() const { return this->nodeInvokeStatus_ != nullptr;};
    void deleteNodeInvokeStatus() { this->nodeInvokeStatus_ = nullptr;};
    inline string nodeInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeInvokeStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setNodeInvokeStatus(string nodeInvokeStatus) { DARABONBA_PTR_SET_VALUE(nodeInvokeStatus_, nodeInvokeStatus) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // repeats Field Functions 
    bool hasRepeats() const { return this->repeats_ != nullptr;};
    void deleteRepeats() { this->repeats_ = nullptr;};
    inline int32_t repeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline string timed() const { DARABONBA_PTR_GET_DEFAULT(timed_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setTimed(string timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The start time of the execution.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The size of the Output text that was truncated and discarded because the Output value exceeded 24 KB in size.
    std::shared_ptr<int32_t> dropped_ = nullptr;
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
    std::shared_ptr<string> errorCode_ = nullptr;
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
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The exit code of the execution. Valid values:
    // 
    // *   For Linux instances, the value is the exit code of the shell process.
    // *   For Windows instances, the value is the exit code of the batch or PowerShell process.
    std::shared_ptr<int32_t> exitCode_ = nullptr;
    // The end time of the execution.
    std::shared_ptr<string> finishTime_ = nullptr;
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
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The execution status of the command on a single instance.
    std::shared_ptr<string> nodeInvokeStatus_ = nullptr;
    // The command output.
    // 
    // *   If ContentEncoding is set to PlainText in the request, the original command output is returned.
    // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command output is returned.
    std::shared_ptr<string> output_ = nullptr;
    // The number of times that the command was run on the instance.
    // 
    // *   If the command is set to run only once, the value is 0 or 1.
    // *   If the command is set to run on a schedule, the value is the number of times that the command has been run on the instance.
    std::shared_ptr<int32_t> repeats_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time when the command task was stopped. If you call the StopInvocation operation to stop the command task, the value of this parameter is the time when the operation is called.
    std::shared_ptr<string> stopTime_ = nullptr;
    // Indicates whether the command is to be automatically run. Valid values:
    // 
    // *   true: The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Period`, `NextRebootOnly`, or `EveryReboot`.
    // 
    // *   false (default): The command meets the following requirements.
    // 
    //     *   The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Once`.
    //     *   The command task is canceled, stopped, or completed.
    std::shared_ptr<string> timed_ = nullptr;
    // The update time of the execution.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
