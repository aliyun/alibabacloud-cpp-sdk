// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDINVOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCommandInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCommandInvocationsRequest() = default ;
    DescribeCommandInvocationsRequest(const DescribeCommandInvocationsRequest &) = default ;
    DescribeCommandInvocationsRequest(DescribeCommandInvocationsRequest &&) = default ;
    DescribeCommandInvocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandInvocationsRequest() = default ;
    DescribeCommandInvocationsRequest& operator=(const DescribeCommandInvocationsRequest &) = default ;
    DescribeCommandInvocationsRequest& operator=(DescribeCommandInvocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->commandName_ == nullptr && this->commandType_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeCommandInvocationsRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline DescribeCommandInvocationsRequest& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DescribeCommandInvocationsRequest& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCommandInvocationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeCommandInvocationsRequest& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeCommandInvocationsRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeCommandInvocationsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeCommandInvocationsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommandInvocationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command ID. You can call [DescribeCommands](https://help.aliyun.com/document_detail/64843.html) to query all available command IDs.
    shared_ptr<string> commandId_ {};
    // The command name. If the InstanceId parameter is also specified, this parameter does not take effect.
    shared_ptr<string> commandName_ {};
    // The command type. Valid values:
    // 
    // - RunBatScript: Bat command for Windows instances.
    // - RunPowerShellScript: PowerShell command for Windows instances.
    // - RunShellScript: Shell command for Linux instances.
    shared_ptr<string> commandType_ {};
    // The instance ID of the simple application server.
    shared_ptr<string> instanceId_ {};
    // The overall execution status of the command. The overall execution status depends on the common execution status across all instances in this invocation. Valid values:
    // -  Pending: The system is validating or sending the command. If the command execution status on at least one instance is Pending, the overall execution status is Pending.
    // -  Running: The command is running on instances. If the command execution status on at least one instance is Running, the overall execution status is Running.
    // -  Success: The command execution status on each instance is Stopped or Success, and the command execution status on at least one instance is Success. In this case, the overall execution status is Success.
    //     -  One-time task: The command execution is complete and the exit code is 0.
    // -  Failed: The command execution status on each instance is Stopped or Failed. In this case, the overall execution status is Failed. The overall execution status is Failed when the command execution status on an instance is one or more of the following values:
    //     - Command validation failed (Invalid).
    //     - Command sending failed (Aborted).
    //     - Command execution is complete but the exit code is not 0 (Failed).
    //     - Command execution timed out (Timeout).
    //     - Command execution encountered an exception (Error).
    // -  Stopping: The task is being stopped. If the command execution status on at least one instance is Stopping, the overall execution status is Stopping.
    // -  Stopped: The task is stopped. If the command execution status on all instances is Stopped, the overall execution status is Stopped. The overall execution status is Stopped when the command execution status on an instance is one of the following values:
    //     - Task canceled (Cancelled).
    //     - Task terminated (Terminated).
    // -  PartialFailed: The command execution succeeded on some instances and failed on others. If the command execution status on each instance is Success, Failed, or Stopped, the overall execution status is PartialFailed.
    // > The `InvokeStatus` response parameter has a similar meaning, but we recommend that you check the value of this parameter.
    shared_ptr<string> invocationStatus_ {};
    // The command execution ID.
    shared_ptr<string> invokeId_ {};
    // The page number. Minimum value: 1. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page for a paged query.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The region ID. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
