// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODESINVOKENODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKENODESINVOKENODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &&) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& operator=(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& operator=(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorInfo_ == nullptr && return this->finishTime_ == nullptr && return this->invocationStatus_ == nullptr && return this->nodeId_ == nullptr
        && return this->startTime_ == nullptr && return this->updateTime_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the file sending task was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error code returned when the file failed to be sent to the instance. Valid values:
    // 
    // Null: The file is sent to the instance. NodeNotExists: The specified instance does not exist or has been released. NodeReleased: The instance was released while the file was being sent. NodeNotRunning: The instance was not running while the file sending task was being created. AccountNotExists: The specified account does not exist. ClientNotRunning: Cloud Assistant Agent is not running. ClientNotResponse: Cloud Assistant Agent did not respond. ClientIsUpgrading: Cloud Assistant Agent was being upgraded. ClientNeedUpgrade: Cloud Assistant Agent needs to be upgraded. DeliveryTimeout: The file sending task timed out. FileCreateFail: The file failed to be created. FileAlreadyExists: A file with the same name exists in the specified directory. FileContentInvalid: The file content is invalid. FileNameInvalid: The file name is invalid. FilePathInvalid: The specified directory is invalid. FileAuthorityInvalid: The specified permissions on the file are invalid. UserGroupNotExists: The specified user group does not exist.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the command failed to be sent or run. Valid values:
    // 
    // *   null: The command is run as expected.
    // *   the specified instance does not exists: The specified instance does not exist or is released.
    // *   the node has released when create task: The instance is released when the command is being run.
    // *   the node is not running when create task: The instance is not in the Running state while the command is being run.
    // *   the command is not applicable: The command is not applicable to the specified instance.
    // *   the specified account does not exists: The specified account does not exist.
    // *   the specified directory does not exists: The specified directory does not exist.
    // *   the cron job expression is invalid: The cron expression that specifies the execution time is invalid.
    // *   the aliyun service is not running on the instance: Cloud Assistant Agent is not running.
    // *   the aliyun service in the instance does not response: Cloud Assistant Agent does not respond.
    // *   the aliyun service in the node is upgrading now: Cloud Assistant Agent is being upgraded.
    // *   the aliyun service in the node need upgrade: Cloud Assistant Agent needs to be upgraded.
    // *   the command delivery has been timeout: The request to send the command timed out.
    // *   the command execution has been timeout: The command execution timed out.
    // *   the command execution got an exception: An exception occurred when the command is being run.
    // *   the command execution has been interrupted: The command execution is interrupted.
    // *   the command execution exit code is not zero: The command execution completes, but the exit code is not 0.
    // *   the specified instance has been released: The instance is released while the file is being sent.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The time when the file sending task ends. The time is in the 2020-05-22T17:04:18 format.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The status of the file sending task on an instance. Valid values:
    // 
    // *   Pending: The file is being verified or sent.
    // *   Invalid: The file is invalid.
    // *   Running: The file is being sent to the instance.
    // *   Aborted: The file failed to be sent to the instance.
    // *   Success: The file is sent.
    // *   Failed: The file failed to be created on the instance.
    // *   Error: An error occurred and interrupted the file sending task.
    // *   Timeout: The file sending task timed out.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
