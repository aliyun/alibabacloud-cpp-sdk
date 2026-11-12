// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeInvocationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvocationResult, invocationResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvocationResult, invocationResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvocationResultResponseBody() = default ;
    DescribeInvocationResultResponseBody(const DescribeInvocationResultResponseBody &) = default ;
    DescribeInvocationResultResponseBody(DescribeInvocationResultResponseBody &&) = default ;
    DescribeInvocationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultResponseBody() = default ;
    DescribeInvocationResultResponseBody& operator=(const DescribeInvocationResultResponseBody &) = default ;
    DescribeInvocationResultResponseBody& operator=(DescribeInvocationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InvocationResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvocationResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
        DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
        DARABONBA_PTR_TO_JSON(InvokeUser, invokeUser_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, InvocationResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
        DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
        DARABONBA_PTR_FROM_JSON(InvokeUser, invokeUser_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      InvocationResult() = default ;
      InvocationResult(const InvocationResult &) = default ;
      InvocationResult(InvocationResult &&) = default ;
      InvocationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InvocationResult() = default ;
      InvocationResult& operator=(const InvocationResult &) = default ;
      InvocationResult& operator=(InvocationResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorInfo_ == nullptr && this->exitCode_ == nullptr && this->finishedTime_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr
        && this->invokeId_ == nullptr && this->invokeRecordStatus_ == nullptr && this->invokeUser_ == nullptr && this->output_ == nullptr && this->startTime_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InvocationResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline InvocationResult& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // exitCode Field Functions 
      bool hasExitCode() const { return this->exitCode_ != nullptr;};
      void deleteExitCode() { this->exitCode_ = nullptr;};
      inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
      inline InvocationResult& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
      inline InvocationResult& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InvocationResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline InvocationResult& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline InvocationResult& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


      // invokeRecordStatus Field Functions 
      bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
      void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
      inline string getInvokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
      inline InvocationResult& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


      // invokeUser Field Functions 
      bool hasInvokeUser() const { return this->invokeUser_ != nullptr;};
      void deleteInvokeUser() { this->invokeUser_ = nullptr;};
      inline string getInvokeUser() const { DARABONBA_PTR_GET_DEFAULT(invokeUser_, "") };
      inline InvocationResult& setInvokeUser(string invokeUser) { DARABONBA_PTR_SET_VALUE(invokeUser_, invokeUser) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline InvocationResult& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline InvocationResult& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The error code for the reason why the command failed to be sent or run. Valid values:
      // 
      // - Empty: The command was run normally.
      // - InstanceNotExists: The specified instance does not exist or has been released.
      // - InstanceReleased: The instance was released during command execution.
      // - InstanceNotRunning: The instance was not in the Running state when the command was run.
      // - CommandNotApplicable: The command is not applicable to the specified instance.
      // - AccountNotExists: The specified account does not exist.
      // - DirectoryNotExists: The specified directory does not exist.
      // - BadCronExpression: The specified cron expression is invalid.
      // - ClientNotRunning: The Cloud Assistant Agent is not running.
      // - ClientNotResponse: The Cloud Assistant Agent is not responding.
      // - ClientIsUpgrading: The Cloud Assistant Agent is being upgraded.
      // - ClientNeedUpgrade: The Cloud Assistant Agent needs to be upgraded.
      // - DeliveryTimeout: The command sending timed out.
      // - ExecutionTimeout: The command execution timed out.
      // - ExecutionException: An exception occurred during command execution.
      // - ExecutionInterrupted: The command execution was interrupted.
      // - ExitCodeNonzero: The command finished running, and the exit code is not 0.
      shared_ptr<string> errorCode_ {};
      // The details of the reason why the command failed to be sent or run. Valid values:
      // 
      // - Empty: The command was run normally.
      // - the specified instance does not exists: The specified instance does not exist or has been released.
      // - the instance has released when create task: The instance was released during command execution.
      // - the instance is not running when create task: The instance was not in the Running state when the command was run.
      // - the command is not applicable: The command is not applicable to the specified instance.
      // - the specified account does not exists: The specified account does not exist.
      // - the specified directory does not exists: The specified directory does not exist.
      // - the cron job expression is invalid: The specified cron expression is invalid.
      // - the aliyun service is not running on the instance: The Cloud Assistant Agent is not running.
      // - the aliyun service in the instance does not response: The Cloud Assistant Agent is not responding.
      // - the aliyun service in the instance is upgrading now: The Cloud Assistant Agent is being upgraded.
      // - the aliyun service in the instance need upgrade: The Cloud Assistant Agent needs to be upgraded.
      // - the command delivery has been timeout: The command sending timed out.
      // - the command execution has been timeout: The command execution timed out.
      // - the command execution got an exception: An exception occurred during command execution.
      // - the command execution has been interrupted: The command execution was interrupted.
      // - the command execution exit code is not zero: The command finished running, and the exit code is not 0.
      shared_ptr<string> errorInfo_ {};
      // The exit code of the command.
      // 
      // - For Linux instances, the exit code is the exit code of the shell command.
      // - For Windows instances, the exit code is the exit code of the Bat or PowerShell command.
      shared_ptr<int64_t> exitCode_ {};
      // The time when the command finished running on the instance. The time is displayed in UTC (Z) in the YYYY-MM-DDThh:mm:ssZ format.
      shared_ptr<string> finishedTime_ {};
      // The instance ID of the simple application server.
      shared_ptr<string> instanceId_ {};
      // The execution status of the command on the instance. Valid values:
      // 
      // - Pending: The system is verifying or sending the command.
      // - Invalid: The specified command type or parameter is invalid.
      // - Aborted: Failed to send the command to the instance. The instance must be in the Running state, and the command must be sent within 1 minute.
      // - Running: The command is being run on the instance.
      // - Success: The command finished running, and the exit code is 0.
      // - Failed: The command finished running, and the exit code is not 0.
      // - Error: An exception occurred during command execution and the command cannot continue.
      // - Timeout: The command execution timed out.
      // - Cancelled: The command execution has been canceled, and the command was never started.
      // - Stopping: The running command is being stopped.
      // - Terminated: The command was terminated during execution.
      shared_ptr<string> invocationStatus_ {};
      // The command execution ID.
      shared_ptr<string> invokeId_ {};
      // The command execution status. Valid values:
      // 
      // - Running: Running.
      // - Finished: Finished.
      // - Failed: Failed.
      // - Stopped: Stopped.
      shared_ptr<string> invokeRecordStatus_ {};
      // The username used to run the command on the simple application server.
      shared_ptr<string> invokeUser_ {};
      // The output of the command execution. The standard output (stdout) and standard error output (stderr) are merged into a single Output. The capacity is calculated separately for each execution and each instance. The maximum capacity of a single Output is 24 KB. Content that exceeds this limit is truncated and discarded. Even if the ExitCode is 0 or the execution status is Success, the output may still be truncated. The returned output is in UTF-8 plaintext and does not require Base64 decoding.
      shared_ptr<string> output_ {};
      // The time when the command started to be run on the instance. The time is displayed in UTC (Z) in the YYYY-MM-DDThh:mm:ssZ format.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->invocationResult_ == nullptr
        && this->requestId_ == nullptr; };
    // invocationResult Field Functions 
    bool hasInvocationResult() const { return this->invocationResult_ != nullptr;};
    void deleteInvocationResult() { this->invocationResult_ = nullptr;};
    inline const DescribeInvocationResultResponseBody::InvocationResult & getInvocationResult() const { DARABONBA_PTR_GET_CONST(invocationResult_, DescribeInvocationResultResponseBody::InvocationResult) };
    inline DescribeInvocationResultResponseBody::InvocationResult getInvocationResult() { DARABONBA_PTR_GET(invocationResult_, DescribeInvocationResultResponseBody::InvocationResult) };
    inline DescribeInvocationResultResponseBody& setInvocationResult(const DescribeInvocationResultResponseBody::InvocationResult & invocationResult) { DARABONBA_PTR_SET_VALUE(invocationResult_, invocationResult) };
    inline DescribeInvocationResultResponseBody& setInvocationResult(DescribeInvocationResultResponseBody::InvocationResult && invocationResult) { DARABONBA_PTR_SET_RVALUE(invocationResult_, invocationResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The command execution result.
    shared_ptr<DescribeInvocationResultResponseBody::InvocationResult> invocationResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
