// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeInvocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody(DescribeInvocationsResponseBody &&) = default ;
    DescribeInvocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody& operator=(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody& operator=(DescribeInvocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Invocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocations& obj) { 
        DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_TO_JSON(CommandType, commandType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DesktopScenario, desktopScenario_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_TO_JSON(InvokeDesktopCount, invokeDesktopCount_);
        DARABONBA_PTR_TO_JSON(InvokeDesktopSucceedCount, invokeDesktopSucceedCount_);
        DARABONBA_PTR_TO_JSON(InvokeDesktops, invokeDesktops_);
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      };
      friend void from_json(const Darabonba::Json& j, Invocations& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
        DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DesktopScenario, desktopScenario_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_FROM_JSON(InvokeDesktopCount, invokeDesktopCount_);
        DARABONBA_PTR_FROM_JSON(InvokeDesktopSucceedCount, invokeDesktopSucceedCount_);
        DARABONBA_PTR_FROM_JSON(InvokeDesktops, invokeDesktops_);
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      };
      Invocations() = default ;
      Invocations(const Invocations &) = default ;
      Invocations(Invocations &&) = default ;
      Invocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocations() = default ;
      Invocations& operator=(const Invocations &) = default ;
      Invocations& operator=(Invocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InvokeDesktops : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvokeDesktops& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
          DARABONBA_PTR_TO_JSON(Dropped, dropped_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(JvsAgentId, jvsAgentId_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(Repeats, repeats_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, InvokeDesktops& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
          DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
          DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(JvsAgentId, jvsAgentId_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        InvokeDesktops() = default ;
        InvokeDesktops(const InvokeDesktops &) = default ;
        InvokeDesktops(InvokeDesktops &&) = default ;
        InvokeDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvokeDesktops() = default ;
        InvokeDesktops& operator=(const InvokeDesktops &) = default ;
        InvokeDesktops& operator=(InvokeDesktops &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->dropped_ == nullptr && this->errorCode_ == nullptr && this->errorInfo_ == nullptr
        && this->exitCode_ == nullptr && this->finishTime_ == nullptr && this->invocationStatus_ == nullptr && this->jvsAgentId_ == nullptr && this->output_ == nullptr
        && this->repeats_ == nullptr && this->startTime_ == nullptr && this->stopTime_ == nullptr && this->updateTime_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline InvokeDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // desktopId Field Functions 
        bool hasDesktopId() const { return this->desktopId_ != nullptr;};
        void deleteDesktopId() { this->desktopId_ = nullptr;};
        inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
        inline InvokeDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


        // desktopName Field Functions 
        bool hasDesktopName() const { return this->desktopName_ != nullptr;};
        void deleteDesktopName() { this->desktopName_ = nullptr;};
        inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
        inline InvokeDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


        // dropped Field Functions 
        bool hasDropped() const { return this->dropped_ != nullptr;};
        void deleteDropped() { this->dropped_ = nullptr;};
        inline int32_t getDropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
        inline InvokeDesktops& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline InvokeDesktops& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorInfo Field Functions 
        bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
        void deleteErrorInfo() { this->errorInfo_ = nullptr;};
        inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
        inline InvokeDesktops& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


        // exitCode Field Functions 
        bool hasExitCode() const { return this->exitCode_ != nullptr;};
        void deleteExitCode() { this->exitCode_ = nullptr;};
        inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
        inline InvokeDesktops& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline InvokeDesktops& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline InvokeDesktops& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // jvsAgentId Field Functions 
        bool hasJvsAgentId() const { return this->jvsAgentId_ != nullptr;};
        void deleteJvsAgentId() { this->jvsAgentId_ = nullptr;};
        inline string getJvsAgentId() const { DARABONBA_PTR_GET_DEFAULT(jvsAgentId_, "") };
        inline InvokeDesktops& setJvsAgentId(string jvsAgentId) { DARABONBA_PTR_SET_VALUE(jvsAgentId_, jvsAgentId) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
        inline InvokeDesktops& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        // repeats Field Functions 
        bool hasRepeats() const { return this->repeats_ != nullptr;};
        void deleteRepeats() { this->repeats_ = nullptr;};
        inline int32_t getRepeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
        inline InvokeDesktops& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline InvokeDesktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // stopTime Field Functions 
        bool hasStopTime() const { return this->stopTime_ != nullptr;};
        void deleteStopTime() { this->stopTime_ = nullptr;};
        inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
        inline InvokeDesktops& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline InvokeDesktops& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The creation time of the script process.
        shared_ptr<string> creationTime_ {};
        // The cloud desktop ID.
        shared_ptr<string> desktopId_ {};
        // The cloud desktop name.
        shared_ptr<string> desktopName_ {};
        // The length of the truncated and discarded text after the text length in the Output field exceeds 24 KB.
        shared_ptr<int32_t> dropped_ {};
        // The error code for the command delivery failure or execution failure. Valid values:
        // 
        // - Empty: The command ran normally.
        // - InstanceNotExists: The specified cloud desktop does not exist or has been released.
        // - InstanceReleased: The cloud desktop was released during task execution.
        // - InstanceNotRunning: The cloud desktop was not running when the task was created.
        // - CommandNotApplicable: The command is not applicable to the specified cloud desktop.
        // - ClientNotRunning: The Cloud Assistant client is not running.
        // - ClientNotResponse: The Cloud Assistant client is not responding.
        // - ClientIsUpgrading: The Cloud Assistant client is being upgraded.
        // - ClientNeedUpgrade: The Cloud Assistant client needs to be upgraded.
        // - DeliveryTimeout: Command delivery timed out.
        // - ExecutionTimeout: Command execution timed out.
        // - ExecutionException: An exception occurred during command execution.
        // - ExecutionInterrupted: Command execution was interrupted.
        // - ExitCodeNonzero: Command execution completed with a non-zero exit code.
        shared_ptr<string> errorCode_ {};
        // The detailed information about the command delivery failure or execution failure. Valid values:
        // 
        // - Empty: The command ran normally.
        // - the specified instance does not exists: The specified cloud desktop does not exist or has been released.
        // - the instance has released when create task: The cloud desktop was released during task execution.
        // - the instance is not running when create task: The cloud desktop was not running when the task was created.
        // - the command is not applicable: The command is not applicable to the specified cloud desktop.
        // - the aliyun service is not running on the instance: The Cloud Assistant client is not running.
        // - the aliyun service in the instance does not response: The Cloud Assistant client is not responding.
        // - the aliyun service in the instance is upgrading now: The Cloud Assistant client is being upgraded.
        // - the aliyun service in the instance need upgrade: The Cloud Assistant client needs to be upgraded.
        // - the command delivery has been timeout: Command delivery timed out.
        // - the command execution has been timeout: Command execution timed out.
        // - the command execution got an exception: An exception occurred during command execution.
        // - the command execution has been interrupted: Command execution was interrupted.
        // - the command execution exit code is not zero: Command execution completed with a non-zero exit code.
        shared_ptr<string> errorInfo_ {};
        // The exit code of the script process.
        shared_ptr<int64_t> exitCode_ {};
        // The end time of the script process.
        shared_ptr<string> finishTime_ {};
        // The script execution status on a single cloud desktop.
        shared_ptr<string> invocationStatus_ {};
        shared_ptr<string> jvsAgentId_ {};
        // The output of the script process.
        // 
        // - If the request parameter `IncludeOutput` is set to false, Output is not returned.
        // - If the request parameter `ContentEncoding` is set to Base64, Output is the Base64-encoded output.
        shared_ptr<string> output_ {};
        // The number of times the command was run on the cloud desktop.
        shared_ptr<int32_t> repeats_ {};
        // The time when the script process started running on the cloud desktop.
        shared_ptr<string> startTime_ {};
        // The time when execution was stopped, if StopInvocation was called.
        shared_ptr<string> stopTime_ {};
        // The update time of the task status.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandType_ == nullptr && this->creationTime_ == nullptr && this->desktopScenario_ == nullptr && this->endUserId_ == nullptr && this->invocationStatus_ == nullptr
        && this->invokeDesktopCount_ == nullptr && this->invokeDesktopSucceedCount_ == nullptr && this->invokeDesktops_ == nullptr && this->invokeId_ == nullptr; };
      // commandContent Field Functions 
      bool hasCommandContent() const { return this->commandContent_ != nullptr;};
      void deleteCommandContent() { this->commandContent_ = nullptr;};
      inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
      inline Invocations& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


      // commandType Field Functions 
      bool hasCommandType() const { return this->commandType_ != nullptr;};
      void deleteCommandType() { this->commandType_ = nullptr;};
      inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
      inline Invocations& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Invocations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // desktopScenario Field Functions 
      bool hasDesktopScenario() const { return this->desktopScenario_ != nullptr;};
      void deleteDesktopScenario() { this->desktopScenario_ = nullptr;};
      inline string getDesktopScenario() const { DARABONBA_PTR_GET_DEFAULT(desktopScenario_, "") };
      inline Invocations& setDesktopScenario(string desktopScenario) { DARABONBA_PTR_SET_VALUE(desktopScenario_, desktopScenario) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Invocations& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline Invocations& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // invokeDesktopCount Field Functions 
      bool hasInvokeDesktopCount() const { return this->invokeDesktopCount_ != nullptr;};
      void deleteInvokeDesktopCount() { this->invokeDesktopCount_ = nullptr;};
      inline int32_t getInvokeDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(invokeDesktopCount_, 0) };
      inline Invocations& setInvokeDesktopCount(int32_t invokeDesktopCount) { DARABONBA_PTR_SET_VALUE(invokeDesktopCount_, invokeDesktopCount) };


      // invokeDesktopSucceedCount Field Functions 
      bool hasInvokeDesktopSucceedCount() const { return this->invokeDesktopSucceedCount_ != nullptr;};
      void deleteInvokeDesktopSucceedCount() { this->invokeDesktopSucceedCount_ = nullptr;};
      inline int32_t getInvokeDesktopSucceedCount() const { DARABONBA_PTR_GET_DEFAULT(invokeDesktopSucceedCount_, 0) };
      inline Invocations& setInvokeDesktopSucceedCount(int32_t invokeDesktopSucceedCount) { DARABONBA_PTR_SET_VALUE(invokeDesktopSucceedCount_, invokeDesktopSucceedCount) };


      // invokeDesktops Field Functions 
      bool hasInvokeDesktops() const { return this->invokeDesktops_ != nullptr;};
      void deleteInvokeDesktops() { this->invokeDesktops_ = nullptr;};
      inline const vector<Invocations::InvokeDesktops> & getInvokeDesktops() const { DARABONBA_PTR_GET_CONST(invokeDesktops_, vector<Invocations::InvokeDesktops>) };
      inline vector<Invocations::InvokeDesktops> getInvokeDesktops() { DARABONBA_PTR_GET(invokeDesktops_, vector<Invocations::InvokeDesktops>) };
      inline Invocations& setInvokeDesktops(const vector<Invocations::InvokeDesktops> & invokeDesktops) { DARABONBA_PTR_SET_VALUE(invokeDesktops_, invokeDesktops) };
      inline Invocations& setInvokeDesktops(vector<Invocations::InvokeDesktops> && invokeDesktops) { DARABONBA_PTR_SET_RVALUE(invokeDesktops_, invokeDesktops) };


      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline Invocations& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    protected:
      // The script content, transmitted in Base64 encoding.
      shared_ptr<string> commandContent_ {};
      // The script type.
      shared_ptr<string> commandType_ {};
      // The creation time of the task.
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> desktopScenario_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
      // The overall execution status of the script. The overall execution status depends on the combined execution status of all cloud desktops in this call. Valid values:
      // 
      // - Pending: The system is validating or sending the command. If the script execution status on at least one cloud desktop is Pending, the overall execution status is Pending.
      // - Running: The command is running on the cloud desktop. If the script execution status on at least one cloud desktop is Running, the overall execution status is Running.
      // - Success: The script execution status on each cloud desktop is Stopped or Success, and the script execution status on at least one cloud desktop is Success. The overall execution status is Success.
      // - Failed: The script execution status on each cloud desktop is Stopped or Failed. The overall execution status is Failed. The return value is Failed when one or more of the following statuses occur on a cloud desktop:
      //     - Command validation failed (Invalid).
      //     - Command delivery failed (Aborted).
      //     - Command execution completed but the exit code is non-zero (Failed).
      //     - Command execution timed out (Timeout).
      //     - Command execution encountered an exception (Error).
      // - Stopping: The task is being stopped. If the script execution status on at least one instance is Stopping, the overall execution status is Stopping.
      // - Stopped: The task has been stopped. If the script execution status on all instances is Stopped, the overall execution status is Stopped. The return value is Stopped when the script execution status on an instance is one of the following:
      //     - Task cancelled (Cancelled).
      //     - Task terminated (Terminated).
      // - PartialFailed: Some instances succeeded and some instances failed. If the script execution status on each instance is Success, Failed, or Stopped, the overall execution status is PartialFailed.
      shared_ptr<string> invocationStatus_ {};
      // The total number of cloud desktops on which the script was run.
      shared_ptr<int32_t> invokeDesktopCount_ {};
      // The total number of cloud desktops on which the script was run successfully.
      shared_ptr<int32_t> invokeDesktopSucceedCount_ {};
      // The list of target cloud desktops for execution.
      shared_ptr<vector<Invocations::InvokeDesktops>> invokeDesktops_ {};
      // The execution ID.
      shared_ptr<string> invokeId_ {};
    };

    virtual bool empty() const override { return this->invocations_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const vector<DescribeInvocationsResponseBody::Invocations> & getInvocations() const { DARABONBA_PTR_GET_CONST(invocations_, vector<DescribeInvocationsResponseBody::Invocations>) };
    inline vector<DescribeInvocationsResponseBody::Invocations> getInvocations() { DARABONBA_PTR_GET(invocations_, vector<DescribeInvocationsResponseBody::Invocations>) };
    inline DescribeInvocationsResponseBody& setInvocations(const vector<DescribeInvocationsResponseBody::Invocations> & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(vector<DescribeInvocationsResponseBody::Invocations> && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array of script execution records.
    shared_ptr<vector<DescribeInvocationsResponseBody::Invocations>> invocations_ {};
    // The pagination token returned in this call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
