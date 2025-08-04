// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOKEDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONSINVOKEDESKTOPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocationsInvokeDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocationsInvokeDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(Dropped, dropped_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Repeats, repeats_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocationsInvokeDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops() = default ;
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops(const DescribeInvocationsResponseBodyInvocationsInvokeDesktops &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops(DescribeInvocationsResponseBodyInvocationsInvokeDesktops &&) = default ;
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocationsInvokeDesktops() = default ;
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops& operator=(const DescribeInvocationsResponseBodyInvocationsInvokeDesktops &) = default ;
    DescribeInvocationsResponseBodyInvocationsInvokeDesktops& operator=(DescribeInvocationsResponseBodyInvocationsInvokeDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->dropped_ != nullptr && this->errorCode_ != nullptr && this->errorInfo_ != nullptr
        && this->exitCode_ != nullptr && this->finishTime_ != nullptr && this->invocationStatus_ != nullptr && this->output_ != nullptr && this->repeats_ != nullptr
        && this->startTime_ != nullptr && this->stopTime_ != nullptr && this->updateTime_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // dropped Field Functions 
    bool hasDropped() const { return this->dropped_ != nullptr;};
    void deleteDropped() { this->dropped_ = nullptr;};
    inline int32_t dropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int64_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // repeats Field Functions 
    bool hasRepeats() const { return this->repeats_ != nullptr;};
    void deleteRepeats() { this->repeats_ = nullptr;};
    inline int32_t repeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeInvocationsResponseBodyInvocationsInvokeDesktops& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the command execution was performed.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The cloud computer name.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The size of the text that is truncated and discarded when the Output value exceeds 24 KB in size.
    std::shared_ptr<int32_t> dropped_ = nullptr;
    // The code explaining why the command failed to be sent or executed. Valid values:
    // 
    // *   Null: The command is executed successfully.
    // *   InstanceNotExists: The specified cloud computer does not exist or is released.
    // *   InstanceReleased: The cloud computer is released during the execution.
    // *   InstanceNotRunning: The cloud computer is not running during the execution.
    // *   CommandNotApplicable: The command cannot be executed on the specified cloud computer.
    // *   ClientNotRunning: The Cloud Assistant agent is not running.
    // *   ClientNotResponse: The Cloud Assistant agent does not respond.
    // *   ClientIsUpgrading: The Cloud Assistant agent is being updated.
    // *   ClientNeedUpgrade: The Cloud Assistant agent needs to be updated.
    // *   DeliveryTimeout: The command sending times out.
    // *   ExecutionTimeout: The command execution times out.
    // *   ExecutionException: An exception occurs when the command is being executed.
    // *   ExecutionInterrupted: The command execution is interrupted.
    // *   ExitCodeNonzero: The command execution completes, but the exit code is not 0.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The message explaining why the command failed to be sent or executed. Valid values:
    // 
    // *   Null: The command is executed successfully.
    // *   the specified instance does not exists: The specified cloud computer does not exist or is released.
    // *   the instance has released when create task: The cloud computer is released during the execution.
    // *   the instance is not running when create task: The cloud computer is not running during the execution.
    // *   the command is not applicable: The command cannot be executed on the specified cloud computer.
    // *   the aliyun service is not running on the instance: The Cloud Assistant agent is not running.
    // *   the aliyun service in the instance does not response: The Cloud Assistant agent does not respond.
    // *   the aliyun service in the instance is upgrading now: The Cloud Assistant agent is being updated.
    // *   the aliyun service in the instance need upgrade: The Cloud Assistant agent needs to be updated.
    // *   the command delivery has been timeout: The command sending times out.
    // *   the command execution has been timeout: The command execution times out.
    // *   the command execution got an exception: An exception occurs when the command is being executed.
    // *   the command execution has been interrupted: The command execution is interrupted.
    // *   the command execution exit code is not zero: The command execution completes, but the exit code is not 0.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The exit code of the execution.
    std::shared_ptr<int64_t> exitCode_ = nullptr;
    // The time when the command execution ended.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The execution progress of the command on a single cloud computer.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The command output.
    // 
    // *   When the `IncludeOutput` parameter is set to false, the output is not returned.
    // *   When the `ContentEncoding` parameter is set to Base64, the output is returned as a Base64-encoded string.
    std::shared_ptr<string> output_ = nullptr;
    // The number of times the command has been executed on the cloud computer.
    std::shared_ptr<int32_t> repeats_ = nullptr;
    // The start time of the command execution.
    std::shared_ptr<string> startTime_ = nullptr;
    // The stop time of the command execution (StopInvocatio).
    std::shared_ptr<string> stopTime_ = nullptr;
    // The time when the execution status was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
