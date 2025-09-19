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
    virtual bool empty() const override { this->markMissParam_ != nullptr
        && this->operationCode_ != nullptr && this->operationParams_ != nullptr && this->remark_ != nullptr && this->resourceOwnerId_ != nullptr && this->sourceIp_ != nullptr
        && this->taskId_ != nullptr; };
    // markMissParam Field Functions 
    bool hasMarkMissParam() const { return this->markMissParam_ != nullptr;};
    void deleteMarkMissParam() { this->markMissParam_ = nullptr;};
    inline string markMissParam() const { DARABONBA_PTR_GET_DEFAULT(markMissParam_, "") };
    inline HandleSimilarSecurityEventsRequest& setMarkMissParam(string markMissParam) { DARABONBA_PTR_SET_VALUE(markMissParam_, markMissParam) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationParams Field Functions 
    bool hasOperationParams() const { return this->operationParams_ != nullptr;};
    void deleteOperationParams() { this->operationParams_ = nullptr;};
    inline string operationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
    inline HandleSimilarSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HandleSimilarSecurityEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline HandleSimilarSecurityEventsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline HandleSimilarSecurityEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline HandleSimilarSecurityEventsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The whitelist rule. For example, if you want to add a file that contains the string a to the whitelist based on the MD5 hash value, set this parameter to {"field":"md5","operate":"contains","fieldValue":"aa"}.
    std::shared_ptr<string> markMissParam_ = nullptr;
    // The operation that you want to perform to handle the alert events.
    // 
    // >  You can call the [DescribeSecurityEventOperations](~~DescribeSecurityEventOperations~~) operation to query the operations.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The configuration of the operation that you want to perform to handle the alert events. The value of this parameter is in the JSON format.
    // 
    // >  If you set **OperationCode** to **kill_and_quara**, **block_ip**, or **virus_quara**, you must specify OperationParams. If you set **OperationCode** to other values, you can leave OperationParams empty. If you set **OperationCode** to **block_ip**, the value of OperationParams must consist of the following fields:
    // 
    // > *   **expireTime**: the end time of locking. Unit: milliseconds.
    // 
    // >  If you set **OperationCode** to **kill_and_quara**, the value of OperationParams must consist of the following fields:
    // 
    // > *   **subOperation**: the method of detection and removal. Valid values:
    // 
    // >     *   **killAndQuaraFileByMd5andPath**: terminates the process and quarantines the source file of the process.
    // >     *   **killByMd5andPath**: terminates the running process.
    // 
    // >  If you set **OperationCode** to **virus_quara**, the value of OperationParams consists of the following fields:
    // 
    // > *   **subOperation**: the method of detection and removal. Valid values:
    // 
    // >     *   **quaraFileByMd5andPath**: quarantines the source file of the process.
    std::shared_ptr<string> operationParams_ = nullptr;
    // The remark of the operation.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the task that handles the alert events at a time.
    // 
    // >  You can call the [CreateSimilarSecurityEventsQueryTask](~~CreateSimilarSecurityEventsQueryTask~~) operation to query the IDs of tasks.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
