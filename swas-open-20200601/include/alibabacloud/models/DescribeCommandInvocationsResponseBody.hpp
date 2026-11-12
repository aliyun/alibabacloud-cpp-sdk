// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDINVOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCommandInvocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandInvocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandInvocations, commandInvocations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandInvocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandInvocations, commandInvocations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommandInvocationsResponseBody() = default ;
    DescribeCommandInvocationsResponseBody(const DescribeCommandInvocationsResponseBody &) = default ;
    DescribeCommandInvocationsResponseBody(DescribeCommandInvocationsResponseBody &&) = default ;
    DescribeCommandInvocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandInvocationsResponseBody() = default ;
    DescribeCommandInvocationsResponseBody& operator=(const DescribeCommandInvocationsResponseBody &) = default ;
    DescribeCommandInvocationsResponseBody& operator=(DescribeCommandInvocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommandInvocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommandInvocations& obj) { 
        DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
        DARABONBA_PTR_TO_JSON(CommandId, commandId_);
        DARABONBA_PTR_TO_JSON(CommandName, commandName_);
        DARABONBA_PTR_TO_JSON(CommandType, commandType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_TO_JSON(InvokeInstances, invokeInstances_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      };
      friend void from_json(const Darabonba::Json& j, CommandInvocations& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
        DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
        DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
        DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
        DARABONBA_PTR_FROM_JSON(InvokeInstances, invokeInstances_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      };
      CommandInvocations() = default ;
      CommandInvocations(const CommandInvocations &) = default ;
      CommandInvocations(CommandInvocations &&) = default ;
      CommandInvocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommandInvocations() = default ;
      CommandInvocations& operator=(const CommandInvocations &) = default ;
      CommandInvocations& operator=(CommandInvocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InvokeInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvokeInstances& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, InvokeInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        InvokeInstances() = default ;
        InvokeInstances(const InvokeInstances &) = default ;
        InvokeInstances(InvokeInstances &&) = default ;
        InvokeInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvokeInstances() = default ;
        InvokeInstances& operator=(const InvokeInstances &) = default ;
        InvokeInstances& operator=(InvokeInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorInfo_ == nullptr && this->exitCode_ == nullptr && this->finishTime_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr
        && this->output_ == nullptr && this->startTime_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline InvokeInstances& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorInfo Field Functions 
        bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
        void deleteErrorInfo() { this->errorInfo_ = nullptr;};
        inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
        inline InvokeInstances& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


        // exitCode Field Functions 
        bool hasExitCode() const { return this->exitCode_ != nullptr;};
        void deleteExitCode() { this->exitCode_ = nullptr;};
        inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
        inline InvokeInstances& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline InvokeInstances& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InvokeInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline InvokeInstances& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
        inline InvokeInstances& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline InvokeInstances& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The error code for the command delivery failure or execution failure. Valid values:
        // 
        // - Empty: The command executed normally.
        // - InstanceNotExists: The specified instance does not exist or has been released.
        // - InstanceReleased: The instance was released during command execution.
        // - InstanceNotRunning: The instance was not running when the command was executed.
        // - CommandNotApplicable: The command is not applicable to the specified instance.
        // - AccountNotExists: The specified account does not exist.
        // - DirectoryNotExists: The specified directory does not exist.
        // - BadCronExpression: The specified cron expression is invalid.
        // - ClientNotRunning: The Cloud Assistant Agent is not running.
        // - ClientNotResponse: The Cloud Assistant Agent is not responding.
        // - ClientIsUpgrading: The Cloud Assistant Agent is being upgraded.
        // - ClientNeedUpgrade: The Cloud Assistant Agent needs to be upgraded.
        // - DeliveryTimeout: Command delivery timed out.
        // - ExecutionTimeout: Command execution timed out.
        // - ExecutionException: An exception occurred during command execution.
        // - ExecutionInterrupted: Command execution was interrupted.
        // - ExitCodeNonzero: Command execution completed with a non-zero exit code.
        shared_ptr<string> errorCode_ {};
        // The details of the command delivery failure or execution failure. Valid values:
        // 
        // - Empty: The command executed normally.
        // - the specified instance does not exists: The specified instance does not exist or has been released.
        // - the instance has released when create task: The instance was released during command execution.
        // - the instance is not running when create task: The instance was not running when the command was executed.
        // - the command is not applicable: The command is not applicable to the specified instance.
        // - the specified account does not exists: The specified account does not exist.
        // - the specified directory does not exists: The specified directory does not exist.
        // - the cron job expression is invalid: The specified cron expression is invalid.
        // - the aliyun service is not running on the instance: The Cloud Assistant Agent is not running.
        // - the aliyun service in the instance does not response: The Cloud Assistant Agent is not responding.
        // - the aliyun service in the instance is upgrading now: The Cloud Assistant Agent is being upgraded.
        // - the aliyun service in the instance need upgrade: The Cloud Assistant Agent needs to be upgraded.
        // - the command delivery has been timeout: Command delivery timed out.
        // - the command execution has been timeout: Command execution timed out.
        // - the command execution got an exception: An exception occurred during command execution.
        // - the command execution has been interrupted: Command execution was interrupted.
        // - the command execution exit code is not zero: Command execution completed with a non-zero exit code.
        shared_ptr<string> errorInfo_ {};
        // The exit code of the command.
        // 
        // - For Linux instances, this is the exit code of the Shell command.
        // - For Windows instances, this is the exit code of the Bat or PowerShell command.
        shared_ptr<int64_t> exitCode_ {};
        // The time when the command process ended. The time is displayed in UTC (Z) in the format of YYYY-MM-DDThh:mm:ssZ.
        shared_ptr<string> finishTime_ {};
        // The instance ID of the simple application server.
        shared_ptr<string> instanceId_ {};
        // The command execution status on a single instance. Valid values:
        // - Pending: The system is validating or sending the command.
        // - Invalid: The specified command type or parameter is invalid.
        // - Aborted: Failed to send the command to the instance. The instance must be running and the command must be delivered within 1 minute.
        // - Running: The command is running on the instance.
        // - Success:
        //     - One-time task: The command execution is complete and the exit code is 0.
        //     - Scheduled task: The last execution succeeded with an exit code of 0, and the specified schedule has ended.
        // - Failed:
        //     -  One-time task: The command execution is complete and the exit code is not 0.
        //     -  Scheduled task: The last execution succeeded with an exit code that is not 0, and the specified schedule will be aborted.
        // - Error: An exception occurred during command execution and the command cannot continue.
        // - Timeout: The command execution timed out.
        // - Cancelled: The command execution action has been canceled and the command was never started.
        // - Stopping: The task is being stopped.
        // - Terminated: The command was terminated during execution.
        shared_ptr<string> invocationStatus_ {};
        // The output information of the command execution.
        shared_ptr<string> output_ {};
        // The time when the command started running on the instance. The time is displayed in UTC (Z) in the format of YYYY-MM-DDThh:mm:ssZ.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandDescription_ == nullptr && this->commandId_ == nullptr && this->commandName_ == nullptr && this->commandType_ == nullptr && this->creationTime_ == nullptr
        && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr && this->invokeInstances_ == nullptr && this->parameters_ == nullptr && this->timeout_ == nullptr
        && this->username_ == nullptr && this->workingDir_ == nullptr; };
      // commandContent Field Functions 
      bool hasCommandContent() const { return this->commandContent_ != nullptr;};
      void deleteCommandContent() { this->commandContent_ = nullptr;};
      inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
      inline CommandInvocations& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


      // commandDescription Field Functions 
      bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
      void deleteCommandDescription() { this->commandDescription_ = nullptr;};
      inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
      inline CommandInvocations& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


      // commandId Field Functions 
      bool hasCommandId() const { return this->commandId_ != nullptr;};
      void deleteCommandId() { this->commandId_ = nullptr;};
      inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
      inline CommandInvocations& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


      // commandName Field Functions 
      bool hasCommandName() const { return this->commandName_ != nullptr;};
      void deleteCommandName() { this->commandName_ = nullptr;};
      inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
      inline CommandInvocations& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


      // commandType Field Functions 
      bool hasCommandType() const { return this->commandType_ != nullptr;};
      void deleteCommandType() { this->commandType_ = nullptr;};
      inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
      inline CommandInvocations& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline CommandInvocations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline CommandInvocations& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline CommandInvocations& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


      // invokeInstances Field Functions 
      bool hasInvokeInstances() const { return this->invokeInstances_ != nullptr;};
      void deleteInvokeInstances() { this->invokeInstances_ = nullptr;};
      inline const vector<CommandInvocations::InvokeInstances> & getInvokeInstances() const { DARABONBA_PTR_GET_CONST(invokeInstances_, vector<CommandInvocations::InvokeInstances>) };
      inline vector<CommandInvocations::InvokeInstances> getInvokeInstances() { DARABONBA_PTR_GET(invokeInstances_, vector<CommandInvocations::InvokeInstances>) };
      inline CommandInvocations& setInvokeInstances(const vector<CommandInvocations::InvokeInstances> & invokeInstances) { DARABONBA_PTR_SET_VALUE(invokeInstances_, invokeInstances) };
      inline CommandInvocations& setInvokeInstances(vector<CommandInvocations::InvokeInstances> && invokeInstances) { DARABONBA_PTR_SET_RVALUE(invokeInstances_, invokeInstances) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline CommandInvocations& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
      inline CommandInvocations& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline CommandInvocations& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // workingDir Field Functions 
      bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
      void deleteWorkingDir() { this->workingDir_ = nullptr;};
      inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
      inline CommandInvocations& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    protected:
      // The command content.
      shared_ptr<string> commandContent_ {};
      // The command description.
      shared_ptr<string> commandDescription_ {};
      // The command ID.
      shared_ptr<string> commandId_ {};
      // The command name.
      shared_ptr<string> commandName_ {};
      // The command type.
      shared_ptr<string> commandType_ {};
      // The time when the command was created, in the format of YYYY-MM-DDThh:mm:ss.
      shared_ptr<string> creationTime_ {};
      // The execution status of the command. Valid values:
      // 
      // - Pending: The system is validating or sending the command.
      // - Invalid: The specified command type or parameter is invalid.
      // - Aborted: Failed to send the command to the instance. The instance must be running and the command must be delivered within 1 minute.
      // - Running: The command is running on the instance.
      // - Success: The command execution is complete and the exit code is 0.
      // - Failed: The command execution is complete and the exit code is not 0.
      // - Error: An exception occurred during command execution and the command cannot continue.
      // - Timeout: The command execution timed out.
      // - Cancelled: The command execution action has been canceled and the command was never started.
      // - Stopping: The command execution is being stopped.
      // - Terminated: The command was terminated during execution.
      shared_ptr<string> invocationStatus_ {};
      // The command execution ID.
      shared_ptr<string> invokeId_ {};
      // The list of target instances for execution.
      shared_ptr<vector<CommandInvocations::InvokeInstances>> invokeInstances_ {};
      // The custom parameters included in the command. If no parameters exist, the default value is {}.
      shared_ptr<string> parameters_ {};
      // The timeout period, in seconds.
      shared_ptr<int64_t> timeout_ {};
      // The username used to run the command.
      shared_ptr<string> username_ {};
      // The path in which the command was executed.
      shared_ptr<string> workingDir_ {};
    };

    virtual bool empty() const override { return this->commandInvocations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // commandInvocations Field Functions 
    bool hasCommandInvocations() const { return this->commandInvocations_ != nullptr;};
    void deleteCommandInvocations() { this->commandInvocations_ = nullptr;};
    inline const vector<DescribeCommandInvocationsResponseBody::CommandInvocations> & getCommandInvocations() const { DARABONBA_PTR_GET_CONST(commandInvocations_, vector<DescribeCommandInvocationsResponseBody::CommandInvocations>) };
    inline vector<DescribeCommandInvocationsResponseBody::CommandInvocations> getCommandInvocations() { DARABONBA_PTR_GET(commandInvocations_, vector<DescribeCommandInvocationsResponseBody::CommandInvocations>) };
    inline DescribeCommandInvocationsResponseBody& setCommandInvocations(const vector<DescribeCommandInvocationsResponseBody::CommandInvocations> & commandInvocations) { DARABONBA_PTR_SET_VALUE(commandInvocations_, commandInvocations) };
    inline DescribeCommandInvocationsResponseBody& setCommandInvocations(vector<DescribeCommandInvocationsResponseBody::CommandInvocations> && commandInvocations) { DARABONBA_PTR_SET_RVALUE(commandInvocations_, commandInvocations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCommandInvocationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCommandInvocationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommandInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCommandInvocationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of command executions.
    shared_ptr<vector<DescribeCommandInvocationsResponseBody::CommandInvocations>> commandInvocations_ {};
    // The page number of the query result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page settings for a paged query. This is the paging size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
