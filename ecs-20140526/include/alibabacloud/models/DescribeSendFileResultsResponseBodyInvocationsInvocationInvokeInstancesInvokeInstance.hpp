// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCESINVOKEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONSINVOCATIONINVOKEINSTANCESINVOKEINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &&) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance() = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& operator=(const DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &) = default ;
    DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& operator=(DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorInfo_ == nullptr && return this->finishTime_ == nullptr && return this->instanceId_ == nullptr && return this->invocationStatus_ == nullptr
        && return this->startTime_ == nullptr && return this->updateTime_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeInstancesInvokeInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time of the file sending task.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The error code returned when the file failed to be sent to the instance. Valid values:
    // 
    // *   Null: The file is sent to the instance.
    // *   InstanceNotExists: The instance does not exist or has been released.
    // *   InstanceReleased: The instance is released while the file is being sent.
    // *   InstanceNotRunning: The instance is not running when the file sending task is being created.
    // *   AccountNotExists: The specified account does not exist.
    // *   ClientNotRunning: Cloud Assistant Agent is not running.
    // *   ClientNotResponse: Cloud Assistant Agent does not respond.
    // *   ClientIsUpgrading: Cloud Assistant Agent is being upgraded.
    // *   ClientNeedUpgrade: Cloud Assistant Agent needs to be upgraded.
    // *   DeliveryTimeout: The file sending task timed out.
    // *   FileCreateFail: The file failed to be created.
    // *   FileAlreadyExists: A file with the same name exists in the specified directory.
    // *   FileContentInvalid: The file content is invalid.
    // *   FileNameInvalid: The file name is invalid.
    // *   FilePathInvalid: The specified directory is invalid.
    // *   FileAuthorityInvalid: The specified permissions on the file are invalid.
    // *   UserGroupNotExists: The specified user group does not exist.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned when the file failed to be sent or the file sending task failed to be executed. Valid values:
    // 
    // *   Null: The file is sent to the instance.
    // *   the specified instance does not exists
    // *   the specified instance has been released
    // *   the instance is not running when create task
    // *   the specified account does not exists
    // *   the aliyun service is not running on the instance
    // *   the aliyun service in the instance does not response
    // *   the aliyun service in the instance is upgrading now
    // *   the aliyun service in the instance need upgrade
    // *   the command delivery has been timeout
    // *   the file creation is failed due to unknown error
    // *   the authority of file is invalid
    // *   File content is empty
    // *   the content of file is invalid
    // *   File already exists
    // *   File name is invalid
    // *   File path is invalid
    // *   Owner not exists
    // *   Group not exists
    // *   Mode is invalid
    std::shared_ptr<string> errorInfo_ = nullptr;
    // The time when the file sending task was completed.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the file sending task. Valid values:
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
    // The time when the file sending task started to be executed on the instance.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time when the task status was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
