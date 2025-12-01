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
    // The size of the Output text that was truncated and discarded because the Output value exceeded 24 KB in size.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> commandDescription_ = nullptr;
    // The time when the command process ended.
    std::shared_ptr<string> commandId_ = nullptr;
    // The command output.
    // 
    // *   If ContentEncoding is set to PlainText in the request, the original command output is returned.
    // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command output is returned.
    std::shared_ptr<string> commandName_ = nullptr;
    // The execution status of the command on a single instance.
    // 
    // >  We recommend that you ignore this parameter and check the value of `InvocationStatus` in the response to obtain the execution status.
    std::shared_ptr<string> commandType_ = nullptr;
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
    std::shared_ptr<string> containerId_ = nullptr;
    // The time when the command started to be run on the instance.
    std::shared_ptr<string> containerName_ = nullptr;
    // The number of times that the command was run on the instance.
    // 
    // *   If the command is set to run only once, the value is 0 or 1.
    // *   If the command is set to run on a schedule, the value is the number of times that the command has been run on the instance.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The command execution Output delivers the object URI to OSS. This field is an empty string when the delivery fails or is in progress.
    std::shared_ptr<string> frequency_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The time when the command task was created.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The tags that are added to the command.
    std::shared_ptr<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeInstances> invokeInstances_ = nullptr;
    // Indicates whether the command is to be automatically run.
    std::shared_ptr<string> invokeStatus_ = nullptr;
    // The output delivery status of the command execution. Valid values:
    // 
    // *   InProgress: The delivery is in progress.
    // *   Finished: The delivery is complete.
    // *   Failed: The delivery failed.
    std::shared_ptr<string> launcher_ = nullptr;
    // Specifies whether to return the command outputs in the response.
    // 
    // *   true: The command outputs are returned. When this parameter is set to true, you must specify `InvokeId`, `InstanceId`, or both.
    // *   false: The command outputs are not returned.
    // 
    // Default value: false
    std::shared_ptr<string> ossOutputDelivery_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    std::shared_ptr<string> parameters_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> repeatMode_ = nullptr;
    // The error code for the failure to send or run the command. Valid values:
    // 
    // *   If this parameter is empty, the command is run normally.
    // *   InstanceNotExists: The specified instance did not exist or was released.
    // *   InstanceReleased: The instance is released during command execution.
    // *   InstanceNotRunning: The instance was not running when the command started to be run.
    // *   CommandNotApplicable: The command was inapplicable to the specified instance.
    // *   AccountNotExists: The username specified to run the command did not exist.
    // *   DirectoryNotExists: The specified directory did not exist.
    // *   BadCronExpression: The specified cron expression for the execution schedule was invalid.
    // *   ClientNotRunning: Cloud Assistant Agent was not running.
    // *   ClientNotResponse: Cloud Assistant Agent does not respond.
    // *   ClientIsUpgrading: Cloud Assistant Agent is being upgraded.
    // *   ClientNeedUpgrade: Cloud Assistant Agent needed to be upgraded.
    // *   DeliveryTimeout: The request to send the command timed out.
    // *   ExecutionTimeout: The execution timed out.
    // *   ExecutionException: An exception occurred while the command was being executed.
    // *   ExecutionInterrupted: The command task was interrupted.
    // *   ExitCodeNonzero: The execution was complete, but the exit code was not 0.
    // *   SecurityGroupRuleDenied: Access to Cloud Assistant was denied by security group rules.
    // *   TaskConcurrencyLimit: The number of concurrent tasks exceeds the maximum limit.
    std::shared_ptr<Models::DescribeInvocationsResponseBodyInvocationsInvocationTags> tags_ = nullptr;
    // The time when the execution status was updated.
    std::shared_ptr<string> terminationMode_ = nullptr;
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 50.
    // 
    // Default value: 10.
    std::shared_ptr<bool> timed_ = nullptr;
    // The execution mode of the command. If you specify both this parameter and `InstanceId`, this parameter does not take effect. Valid values:
    // 
    // *   Once: The command is immediately run.
    // *   Period: The command is run on a schedule.
    // *   NextRebootOnly: The command is run the next time the instances start.
    // *   EveryReboot: The command is run every time the instances start.
    // 
    // This parameter is empty by default, which indicates that commands run in all modes are queried.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // The exit code of the execution. Valid values:
    // 
    // *   For Linux instances, the value is the exit code of the shell process.
    // *   For Windows instances, the value is the exit code of the batch or PowerShell process.
    std::shared_ptr<string> username_ = nullptr;
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
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
