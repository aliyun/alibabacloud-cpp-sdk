// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCESINVOKEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCESINVOKEINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Dropped, dropped_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceInvokeStatus, instanceInvokeStatus_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(OssOutputStatus, ossOutputStatus_);
      DARABONBA_PTR_TO_JSON(OssOutputUri, ossOutputUri_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Repeats, repeats_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(Timed, timed_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceInvokeStatus, instanceInvokeStatus_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(OssOutputStatus, ossOutputStatus_);
      DARABONBA_PTR_FROM_JSON(OssOutputUri, ossOutputUri_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(Timed, timed_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& operator=(const DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& operator=(DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->dropped_ != nullptr && this->errorCode_ != nullptr && this->errorInfo_ != nullptr && this->exitCode_ != nullptr && this->finishTime_ != nullptr
        && this->instanceId_ != nullptr && this->instanceInvokeStatus_ != nullptr && this->invocationStatus_ != nullptr && this->ossOutputStatus_ != nullptr && this->ossOutputUri_ != nullptr
        && this->output_ != nullptr && this->repeats_ != nullptr && this->startTime_ != nullptr && this->stopTime_ != nullptr && this->timed_ != nullptr
        && this->updateTime_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dropped Field Functions 
    bool hasDropped() const { return this->dropped_ != nullptr;};
    void deleteDropped() { this->dropped_ = nullptr;};
    inline int32_t dropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int64_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceInvokeStatus Field Functions 
    bool hasInstanceInvokeStatus() const { return this->instanceInvokeStatus_ != nullptr;};
    void deleteInstanceInvokeStatus() { this->instanceInvokeStatus_ = nullptr;};
    inline string instanceInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceInvokeStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setInstanceInvokeStatus(string instanceInvokeStatus) { DARABONBA_PTR_SET_VALUE(instanceInvokeStatus_, instanceInvokeStatus) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // ossOutputStatus Field Functions 
    bool hasOssOutputStatus() const { return this->ossOutputStatus_ != nullptr;};
    void deleteOssOutputStatus() { this->ossOutputStatus_ = nullptr;};
    inline string ossOutputStatus() const { DARABONBA_PTR_GET_DEFAULT(ossOutputStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setOssOutputStatus(string ossOutputStatus) { DARABONBA_PTR_SET_VALUE(ossOutputStatus_, ossOutputStatus) };


    // ossOutputUri Field Functions 
    bool hasOssOutputUri() const { return this->ossOutputUri_ != nullptr;};
    void deleteOssOutputUri() { this->ossOutputUri_ = nullptr;};
    inline string ossOutputUri() const { DARABONBA_PTR_GET_DEFAULT(ossOutputUri_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setOssOutputUri(string ossOutputUri) { DARABONBA_PTR_SET_VALUE(ossOutputUri_, ossOutputUri) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // repeats Field Functions 
    bool hasRepeats() const { return this->repeats_ != nullptr;};
    void deleteRepeats() { this->repeats_ = nullptr;};
    inline int32_t repeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool timed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the command task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The size of the Output text that was truncated and discarded because the Output value exceeded 24 KB in size.
    std::shared_ptr<int32_t> dropped_ = nullptr;
    // The error code for the failure to send or run the command. Valid values:
    // 
    // *   If this parameter is empty, the command was run as expected.
    // *   InstanceNotExists: The specified instance did not exist or was released.
    // *   InstanceReleased: The instance was released while the command was being run.
    // *   InstanceNotRunning: The instance was not running when the command started to be run.
    // *   CommandNotApplicable: The command was inapplicable to the specified instance.
    // *   AccountNotExists: The username specified to run the command did not exist.
    // *   DirectoryNotExists: The specified directory did not exist.
    // *   BadCronExpression: The specified cron expression for the execution schedule was invalid.
    // *   ClientNotRunning: Cloud Assistant Agent was not running.
    // *   ClientNotResponse: Cloud Assistant Agent did not respond.
    // *   ClientIsUpgrading: Cloud Assistant Agent was being upgraded.
    // *   ClientNeedUpgrade: Cloud Assistant Agent needed to be upgraded.
    // *   DeliveryTimeout: The request to send the command timed out.
    // *   ExecutionTimeout: The execution timed out.
    // *   ExecutionException: An exception occurred while the command was being executed.
    // *   ExecutionInterrupted: The command task was interrupted.
    // *   ExitCodeNonzero: The execution was complete, but the exit code was not 0.
    // *   SecurityGroupRuleDenied: Access to Cloud Assistant was denied by security group rules.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned when the command failed to be sent or run. Valid values:
    // 
    // *   If this parameter is empty, the command was run as expected.
    // *   The security group rules denied access to the aliyun service.
    // *   The specified instance does not exist.
    // *   The specified instance was released during task execution.
    // *   The specified instance was not running during task execution.
    // *   The OS type of the instance does not support the specified command type.
    // *   The specified account does not exist.
    // *   The specified directory does not exist.
    // *   The cron expression is invalid.
    // *   The aliyun service is not running on the instance.
    // *   The aliyun service in the instance does not response.
    // *   The aliyun service in the instance is upgrading during task execution.
    // *   The aliyun service in the instance need to be upgraded to at least version to support the feature. indicates the earliest version that supports the feature. indicates the name of the feature.
    // *   The command delivery has been timeout.
    // *   The command execution has been timeout.
    // *   The command execution got an exception.
    // *   The command execution exit code is not zero.
    // *   The specified instance was released during task execution.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The exit code of the execution. Valid values:
    // 
    // *   For Linux instances, the value is the exit code of the shell process.
    // *   For Windows instances, the value is the exit code of the batch or PowerShell process.
    std::shared_ptr<int64_t> exitCode_ = nullptr;
    // The time when the command process ended.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The execution status of the command on a single instance.
    // 
    // >  We recommend that you ignore this parameter and check the value of `InvocationStatus` in the response to obtain the execution status.
    std::shared_ptr<string> instanceInvokeStatus_ = nullptr;
    // The execution status on a single instance. Valid values:
    // 
    // *   Pending: The command is being verified or sent.
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
    //     *   Scheduled task: The last execution was complete, the exit code was 0, and the specified period ended.
    // 
    // *   Failed:
    // 
    //     *   One-time task: The execution was complete, but the exit code was not 0.
    //     *   Scheduled task: The last execution was complete, but the exit code was not 0. The specified period is about to end.
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
    //     *   Scheduled task: The command is waiting to be run.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    std::shared_ptr<string> ossOutputStatus_ = nullptr;
    std::shared_ptr<string> ossOutputUri_ = nullptr;
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
    // The time when the command started to be run on the instance.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time when the command task was stopped. If you call the `StopInvocation` operation to stop the command task, the value of this parameter is the time when the operation is called.
    std::shared_ptr<string> stopTime_ = nullptr;
    // Indicates whether the command is to be automatically run.
    std::shared_ptr<bool> timed_ = nullptr;
    // The time when the execution status was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
