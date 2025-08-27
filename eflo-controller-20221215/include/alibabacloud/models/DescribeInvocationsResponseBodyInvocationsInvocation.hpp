// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOCATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvocation& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvocation& obj) { 
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
    virtual bool empty() const override { this->commandContent_ != nullptr
        && this->commandDescription_ != nullptr && this->commandName_ != nullptr && this->creationTime_ != nullptr && this->frequency_ != nullptr && this->invocationStatus_ != nullptr
        && this->invokeId_ != nullptr && this->invokeNodes_ != nullptr && this->invokeStatus_ != nullptr && this->parameters_ != nullptr && this->repeatMode_ != nullptr
        && this->timeout_ != nullptr && this->username_ != nullptr && this->workingDir_ != nullptr; };
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


    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string commandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


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


    // invokeNodes Field Functions 
    bool hasInvokeNodes() const { return this->invokeNodes_ != nullptr;};
    void deleteInvokeNodes() { this->invokeNodes_ = nullptr;};
    inline const Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes & invokeNodes() const { DARABONBA_PTR_GET_CONST(invokeNodes_, Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes) };
    inline Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes invokeNodes() { DARABONBA_PTR_GET(invokeNodes_, Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeNodes(const Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes & invokeNodes) { DARABONBA_PTR_SET_VALUE(invokeNodes_, invokeNodes) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeNodes(Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes && invokeNodes) { DARABONBA_PTR_SET_RVALUE(invokeNodes_, invokeNodes) };


    // invokeStatus Field Functions 
    bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
    void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
    inline string invokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


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


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvocation& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


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
    // The executed command.
    // 
    // *   If ContentEncoding is set to PlainText in the request, the original command content is returned.
    // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command content is returned.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The command description.
    std::shared_ptr<string> commandDescription_ = nullptr;
    // The command name.
    std::shared_ptr<string> commandName_ = nullptr;
    // The time when the command task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The schedule on which the command was run.
    std::shared_ptr<string> frequency_ = nullptr;
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
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The execution ID.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The command execution records.
    std::shared_ptr<Models::DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes> invokeNodes_ = nullptr;
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
    std::shared_ptr<string> invokeStatus_ = nullptr;
    // The custom parameters in the command.
    std::shared_ptr<string> parameters_ = nullptr;
    // The execution mode of the command. Valid values:
    // 
    // *   Once: The command is run immediately.
    // *   Period: The command is run on a schedule.
    // *   NextRebootOnly: The command is run the next time the instances start.
    // *   EveryReboot: runs the command every time the instances start.
    std::shared_ptr<string> repeatMode_ = nullptr;
    // The timeout period for the command execution. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The username that is used to run the command.
    std::shared_ptr<string> username_ = nullptr;
    // The working directory of the command on the instance.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
