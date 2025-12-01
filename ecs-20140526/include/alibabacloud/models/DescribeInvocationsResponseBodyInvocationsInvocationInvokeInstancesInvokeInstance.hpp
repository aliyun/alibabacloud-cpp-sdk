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
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->dropped_ == nullptr && return this->errorCode_ == nullptr && return this->errorInfo_ == nullptr && return this->exitCode_ == nullptr && return this->finishTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceInvokeStatus_ == nullptr && return this->invocationStatus_ == nullptr && return this->ossOutputStatus_ == nullptr && return this->ossOutputUri_ == nullptr
        && return this->output_ == nullptr && return this->repeats_ == nullptr && return this->startTime_ == nullptr && return this->stopTime_ == nullptr && return this->timed_ == nullptr
        && return this->updateTime_ == nullptr; };
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
    // The command description.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The value of tag N of the command. You can specify up to 20 tag values for the command. The tag value can be an empty string. It can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<int32_t> dropped_ = nullptr;
    // The instances on which the command was run.
    std::shared_ptr<string> errorCode_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The total number of the commands.
    std::shared_ptr<int64_t> exitCode_ = nullptr;
    // The custom parameters in the command.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> instanceInvokeStatus_ = nullptr;
    // The key of tag N of the command. You can specify up to 20 tag keys for the command. The tag key cannot be an empty string.
    // 
    // If a single tag is specified to query resources, up to 1,000 resources that have this tag added can be displayed in the response. If multiple tags are specified to query resources, up to 1,000 resources that have all these tags added can be displayed in the response. To query more than 1,000 resources that have specified tags added, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
    // 
    // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The overall execution status of the command task. The value of this parameter depends on the execution status of the command task on all the involved instances. Valid values:
    // 
    // *   Pending: The command is being verified or sent. When the execution state on at least one instance is Pending, the overall execution state is Pending.
    // 
    // *   Scheduled: The command that is set to run on a schedule was sent and waiting to be run. When the execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
    // 
    // *   Running: The command is being run on the instances. When the execution state on at least one instance is Running, the overall execution state is Running.
    // 
    // *   Success: When the execution state on at least one instance is Success and the execution state on the other instances is Stopped or Success, the overall execution state is Success.
    // 
    //     *   One-time task: The execution was complete, and the exit code was 0.
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
    // >  `InvokeStatus` in the response functions similarly to this parameter. We recommend that you check the value of this parameter.
    std::shared_ptr<string> ossOutputStatus_ = nullptr;
    // Command to execute the Output OSS delivery configuration.
    std::shared_ptr<string> ossOutputUri_ = nullptr;
    // Indicates whether the command is to be automatically run.
    std::shared_ptr<string> output_ = nullptr;
    // The time when the command task was created.
    std::shared_ptr<int32_t> repeats_ = nullptr;
    // Details about the command executions.
    std::shared_ptr<string> startTime_ = nullptr;
    // The execution states of the command.
    std::shared_ptr<string> stopTime_ = nullptr;
    // The request ID.
    std::shared_ptr<bool> timed_ = nullptr;
    // The maximum timeout period for the command execution. Unit: seconds.
    // 
    // When a command cannot be run, the command execution times out. When a command execution times out, Cloud Assistant Agent forcefully terminates the command process by canceling the process ID (PID) of the command.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
