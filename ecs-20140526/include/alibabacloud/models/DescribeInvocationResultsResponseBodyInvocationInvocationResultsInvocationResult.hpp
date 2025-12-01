// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATIONINVOCATIONRESULTSINVOCATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATIONINVOCATIONRESULTSINVOCATIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Dropped, dropped_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_TO_JSON(OssOutputStatus, ossOutputStatus_);
      DARABONBA_PTR_TO_JSON(OssOutputUri, ossOutputUri_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Repeats, repeats_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_FROM_JSON(OssOutputStatus, ossOutputStatus_);
      DARABONBA_PTR_FROM_JSON(OssOutputUri, ossOutputUri_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult() = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult(const DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult &) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult(DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult &&) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult() = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& operator=(const DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult &) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& operator=(DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->dropped_ == nullptr && return this->errorCode_ == nullptr && return this->errorInfo_ == nullptr
        && return this->exitCode_ == nullptr && return this->finishedTime_ == nullptr && return this->instanceId_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeId_ == nullptr
        && return this->invokeRecordStatus_ == nullptr && return this->launcher_ == nullptr && return this->ossOutputDelivery_ == nullptr && return this->ossOutputStatus_ == nullptr && return this->ossOutputUri_ == nullptr
        && return this->output_ == nullptr && return this->repeats_ == nullptr && return this->startTime_ == nullptr && return this->stopTime_ == nullptr && return this->tags_ == nullptr
        && return this->terminationMode_ == nullptr && return this->username_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // dropped Field Functions 
    bool hasDropped() const { return this->dropped_ != nullptr;};
    void deleteDropped() { this->dropped_ = nullptr;};
    inline int32_t dropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int64_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeRecordStatus Field Functions 
    bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
    void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
    inline string invokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // ossOutputDelivery Field Functions 
    bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
    void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
    inline string ossOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


    // ossOutputStatus Field Functions 
    bool hasOssOutputStatus() const { return this->ossOutputStatus_ != nullptr;};
    void deleteOssOutputStatus() { this->ossOutputStatus_ = nullptr;};
    inline string ossOutputStatus() const { DARABONBA_PTR_GET_DEFAULT(ossOutputStatus_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setOssOutputStatus(string ossOutputStatus) { DARABONBA_PTR_SET_VALUE(ossOutputStatus_, ossOutputStatus) };


    // ossOutputUri Field Functions 
    bool hasOssOutputUri() const { return this->ossOutputUri_ != nullptr;};
    void deleteOssOutputUri() { this->ossOutputUri_ = nullptr;};
    inline string ossOutputUri() const { DARABONBA_PTR_GET_DEFAULT(ossOutputUri_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setOssOutputUri(string ossOutputUri) { DARABONBA_PTR_SET_VALUE(ossOutputUri_, ossOutputUri) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // repeats Field Functions 
    bool hasRepeats() const { return this->repeats_ != nullptr;};
    void deleteRepeats() { this->repeats_ = nullptr;};
    inline int32_t repeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags) };
    inline Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setTags(const Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setTags(Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string terminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
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
    std::shared_ptr<string> commandId_ = nullptr;
    // Command to execute the Output OSS delivery configuration.
    std::shared_ptr<string> containerId_ = nullptr;
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
    //     *   Scheduled task: The last execution was complete, but the exit code was not 0. The specified period was about to end.
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
    std::shared_ptr<string> containerName_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<int32_t> dropped_ = nullptr;
    // The time when the command started to be run on the instance.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The key of tag N of the command task. Valid values of N: 1 to 20. The tag key cannot be an empty string.
    // 
    // If a single tag is specified to query resources, up to 1,000 resources that have this tag added can be displayed in the response. If multiple tags are specified to query resources, up to 1,000 resources that have all these tags added can be displayed in the response. To query more than 1,000 resources that have specified tags added, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
    // 
    // The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
    std::shared_ptr<int64_t> exitCode_ = nullptr;
    // The total number of the commands.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The value of tag N of the command task. Valid values of N: 1 to 20. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The tag of the command task.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The number of times that the command was run on the instance.
    // 
    // *   If the command is set to run only once, the value is 0 or 1.
    // *   If the command is set to run on a schedule, the value is the number of times that the command has been run on the instance.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The page number.
    std::shared_ptr<string> invokeRecordStatus_ = nullptr;
    // The exit code of the command task.
    // 
    // *   For Linux instances, the value is the exit code of the shell command.
    // *   For Windows instances, the value is the exit code of the batch or PowerShell command.
    std::shared_ptr<string> launcher_ = nullptr;
    // The tags of the command task.
    std::shared_ptr<string> ossOutputDelivery_ = nullptr;
    // The execution results.
    std::shared_ptr<string> ossOutputStatus_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> ossOutputUri_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> output_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> repeats_ = nullptr;
    // Details about the execution results.
    std::shared_ptr<string> startTime_ = nullptr;
    // root
    std::shared_ptr<string> stopTime_ = nullptr;
    // The time when the command task was completed. If the command task times out, the end time is equal to the start time of the command task specified by `StartTime` plus the timeout period specified by `Timeout`.
    std::shared_ptr<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResultTags> tags_ = nullptr;
    // The execution status of the command. Valid values:
    // 
    // *   Running:
    // 
    //     *   Scheduled task: Before you stop the scheduled execution of the command, the execution state is always Running.
    //     *   One-time task: If the command is being run on instances, the execution state is Running.
    // 
    // *   Finished:
    // 
    //     *   Scheduled task: The execution state can never be Finished.
    //     *   One-time task: The execution was complete on all instances, or the execution was stopped on some instances and was complete on the other instances.
    // 
    // *   Failed:
    // 
    //     *   Scheduled task: The execution state can never be Failed.
    //     *   One-time task: The execution failed on all instances.
    // 
    // *   PartialFailed:
    // 
    //     *   Scheduled task: The execution state can never be PartialFailed.
    //     *   One-time task: The execution failed on some instances.
    // 
    // *   Stopped: The task was stopped.
    // 
    // *   Stopping: The task is being stopped.
    std::shared_ptr<string> terminationMode_ = nullptr;
    // The size of the Output text that was truncated and discarded because the `Output` value exceeded 24 KB in size.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
