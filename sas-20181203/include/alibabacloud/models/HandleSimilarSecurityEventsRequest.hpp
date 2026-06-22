// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESIMILARSECURITYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLESIMILARSECURITYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleSimilarSecurityEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSimilarSecurityEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSimilarSecurityEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarkMissParam, markMissParam_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    HandleSimilarSecurityEventsRequest() = default ;
    HandleSimilarSecurityEventsRequest(const HandleSimilarSecurityEventsRequest &) = default ;
    HandleSimilarSecurityEventsRequest(HandleSimilarSecurityEventsRequest &&) = default ;
    HandleSimilarSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSimilarSecurityEventsRequest() = default ;
    HandleSimilarSecurityEventsRequest& operator=(const HandleSimilarSecurityEventsRequest &) = default ;
    HandleSimilarSecurityEventsRequest& operator=(HandleSimilarSecurityEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markMissParam_ == nullptr
        && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->remark_ == nullptr && this->resourceOwnerId_ == nullptr && this->sourceIp_ == nullptr
        && this->taskId_ == nullptr; };
    // markMissParam Field Functions 
    bool hasMarkMissParam() const { return this->markMissParam_ != nullptr;};
    void deleteMarkMissParam() { this->markMissParam_ = nullptr;};
    inline string getMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(markMissParam_, "") };
    inline HandleSimilarSecurityEventsRequest& setMarkMissParam(string markMissParam) { DARABONBA_PTR_SET_VALUE(markMissParam_, markMissParam) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HandleSimilarSecurityEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline HandleSimilarSecurityEventsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline HandleSimilarSecurityEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline HandleSimilarSecurityEventsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The rule for adding items to the whitelist. For example, to add a whitelist rule based on file MD5 where the file contains the string "a", set this parameter to {"field":"md5","operate":"contains","fieldValue":"aa"}.
    shared_ptr<string> markMissParam_ {};
    // The type of operation for batch processing alert events of the same type.
    // >Call the [DescribeSecurityEventOperations](~~DescribeSecurityEventOperations~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
    // The configuration of the sub-operation for handling alerting events. The value is in JSON format.
    // 
    // > This parameter is required when **OperationCode** is set to **kill_and_quara**, **block_ip**, or **virus_quara**. For other values of **OperationCode**, this parameter can be left empty.
    // 
    // > When **OperationCode** is set to **block_ip**, the following field is included:
    // > - **expireTime**: the lock expiration time. Unit: milliseconds.
    // >
    // > When **OperationCode** is set to **kill_and_quara**, the following field is included:
    // > - **subOperation**: the method used to scan and remove threats. Valid values:
    // >     - **killAndQuaraFileByMd5andPath**: terminates the process and moves the file to the quarantined file.
    // >     - **killByMd5andPath**: terminates the running process.
    // >
    // > When **OperationCode** is set to **virus_quara**, the following field is included:
    // > - **subOperation**: the method used to scan and remove threats. Valid values:
    // >    - **quaraFileByMd5andPath**: moves the source file of the process to the quarantined file.
    shared_ptr<string> operationParams_ {};
    // The remarks for the operation.
    shared_ptr<string> remark_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The ID of the task that batch processes all alert events of the same type.
    // >Call the [CreateSimilarSecurityEventsQueryTask](~~CreateSimilarSecurityEventsQueryTask~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
