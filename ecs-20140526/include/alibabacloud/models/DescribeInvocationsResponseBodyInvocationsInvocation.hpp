// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances.hpp>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocationTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocation& obj) { 
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeInstances, invokeInstances_);
      DARABONBA_PTR_TO_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Timed, timed_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocation& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeInstances, invokeInstances_);
      DARABONBA_PTR_FROM_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Timed, timed_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    DescribeInvocationsResponseBodyInvocationsInvocation() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocation(const DescribeInvocationsResponseBodyInvocationsInvocation &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocation(DescribeInvocationsResponseBodyInvocationsInvocation &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvocation() = default ;
    DescribeInvocationsResponseBodyInvocationsInvocation& operator=(const DescribeInvocationsResponseBodyInvocationsInvocation &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvocation& operator=(DescribeInvocationsResponseBodyInvocationsInvocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandContent_ == nullptr
        && return this->commandDescription_ == nullptr && return this->commandId_ == nullptr && return this->commandName_ == nullptr && return this->commandType_ == nullptr && return this->containerId_ == nullptr
        && return this->containerName_ == nullptr && return this->creationTime_ == nullptr && return this->frequency_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeId_ == nullptr
        && return this->invokeInstances_ == nullptr && return this->invokeStatus_ == nullptr && return this->launcher_ == nullptr && return this->ossOutputDelivery_ == nullptr && return this->parameters_ == nullptr
        && return this->repeatMode_ == nullptr && return this->tags_ == nullptr && return this->terminationMode_ == nullptr && return this->timed_ == nullptr && return this->timeout_ == nullptr
        && return this->username_ == nullptr && return this->workingDir_ == nullptr; };
    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandDescription Field Functions 
    bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
    void deleteCommandDescription() { this->commandDescription_ = nullptr;};
    inline string commandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string commandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string commandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeInstances Field Functions 
    bool hasInvokeInstances() const { return this->invokeInstances_ != nullptr;};
    void deleteInvokeInstances() { this->invokeInstances_ = nullptr;};
    inline const Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances & invokeInstances() const { DARABONBA_PTR_GET_CONST(invokeInstances_, Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances) };
    inline Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances invokeInstances() { DARABONBA_PTR_GET(invokeInstances_, Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeInstances(const Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances & invokeInstances) { DARABONBA_PTR_SET_VALUE(invokeInstances_, invokeInstances) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeInstances(Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances && invokeInstances) { DARABONBA_PTR_SET_RVALUE(invokeInstances_, invokeInstances) };


    // invokeStatus Field Functions 
    bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
    void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
    inline string invokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // ossOutputDelivery Field Functions 
    bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
    void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
    inline string ossOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeInvocationsResponseBodyInvocationsInvocationTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeInvocationsResponseBodyInvocationsInvocationTags) };
    inline Models::DescribeInvocationsResponseBodyInvocationsInvocationTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeInvocationsResponseBodyInvocationsInvocationTags) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTags(const Models::DescribeInvocationsResponseBodyInvocationsInvocationTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTags(Models::DescribeInvocationsResponseBodyInvocationsInvocationTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string terminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool timed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The command content.
    // 
    // *   If ContentEncoding is set to PlainText in the request, the original command content is returned.
    // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command content is returned.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The command description.
    std::shared_ptr<string> commandDescription_ = nullptr;
    // The command ID.
    std::shared_ptr<string> commandId_ = nullptr;
    // The command name.
    std::shared_ptr<string> commandName_ = nullptr;
    // The command type.
    std::shared_ptr<string> commandType_ = nullptr;
    // The container ID.
    std::shared_ptr<string> containerId_ = nullptr;
    // The container name.
    std::shared_ptr<string> containerName_ = nullptr;
    // The time when the command task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The schedule on which the command is run.
    std::shared_ptr<string> frequency_ = nullptr;
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
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The command task ID.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The instances on which the command was run.
    std::shared_ptr<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances> invokeInstances_ = nullptr;
    // The overall execution status of the command task.
    // 
    // >  We recommend that you ignore this parameter and check the value of `InvocationStatus` in the response to obtain the execution status.
    std::shared_ptr<string> invokeStatus_ = nullptr;
    // The launcher for script execution. The value cannot exceed 1 KB in length.
    std::shared_ptr<string> launcher_ = nullptr;
    // Command to execute the Output OSS delivery configuration.
    std::shared_ptr<string> ossOutputDelivery_ = nullptr;
    // The custom parameters in the command.
    std::shared_ptr<string> parameters_ = nullptr;
    // The execution mode of the command. Valid values:
    // 
    // *   Once: The command is immediately run.
    // *   Period: The command is run on a schedule.
    // *   NextRebootOnly: The command is run the next time the instances start.
    // *   EveryReboot: The command is run every time the instances start.
    // *   DryRun: The system performs only a dry run, without running the actual command. The system checks the request parameters, the execution environments on the instances, and the status of Cloud Assistant Agent.
    std::shared_ptr<string> repeatMode_ = nullptr;
    // The tags of the command task.
    std::shared_ptr<Models::DescribeInvocationsResponseBodyInvocationsInvocationTags> tags_ = nullptr;
    // Indicates how the command task is stopped when a command execution is manually stopped or times out. Valid values:
    // 
    // *   Process: The process of the command is stopped.
    // *   ProcessTree: The process tree of the command is stopped. In this case, the process of the command and all subprocesses are stopped.
    std::shared_ptr<string> terminationMode_ = nullptr;
    // Indicates whether the command is to be automatically run.
    std::shared_ptr<bool> timed_ = nullptr;
    // The maximum timeout period for the command execution. Unit: seconds.
    // 
    // When a command cannot be run, the command execution times out. When a command execution times out, Cloud Assistant Agent forcefully terminates the command process by canceling the process ID (PID) of the command.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // The username used to run the command on the instances.
    std::shared_ptr<string> username_ = nullptr;
    // The execution path of the command.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
