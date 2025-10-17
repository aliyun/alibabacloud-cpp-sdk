// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeSubscriptionInstanceStatusResponseBody() = default ;
    DescribeSubscriptionInstanceStatusResponseBody(const DescribeSubscriptionInstanceStatusResponseBody &) = default ;
    DescribeSubscriptionInstanceStatusResponseBody(DescribeSubscriptionInstanceStatusResponseBody &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBody() = default ;
    DescribeSubscriptionInstanceStatusResponseBody& operator=(const DescribeSubscriptionInstanceStatusResponseBody &) = default ;
    DescribeSubscriptionInstanceStatusResponseBody& operator=(DescribeSubscriptionInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimestamp_ == nullptr
        && return this->consumptionCheckpoint_ == nullptr && return this->consumptionClient_ == nullptr && return this->endTimestamp_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr
        && return this->errorMessage_ == nullptr && return this->payType_ == nullptr && return this->requestId_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->status_ == nullptr
        && return this->subscribeTopic_ == nullptr && return this->subscriptionDataType_ == nullptr && return this->subscriptionHost_ == nullptr && return this->subscriptionInstanceID_ == nullptr && return this->subscriptionInstanceName_ == nullptr
        && return this->subscriptionObject_ == nullptr && return this->success_ == nullptr && return this->taskId_ == nullptr; };
    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSourceEndpoint(const DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSourceEndpoint(DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string subscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType & subscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType subscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionDataType(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionDataType(DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost & subscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost subscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionHost(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionHost(DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // subscriptionInstanceID Field Functions 
    bool hasSubscriptionInstanceID() const { return this->subscriptionInstanceID_ != nullptr;};
    void deleteSubscriptionInstanceID() { this->subscriptionInstanceID_ = nullptr;};
    inline string subscriptionInstanceID() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceID_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionInstanceID(string subscriptionInstanceID) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceID_, subscriptionInstanceID) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string subscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // subscriptionObject Field Functions 
    bool hasSubscriptionObject() const { return this->subscriptionObject_ != nullptr;};
    void deleteSubscriptionObject() { this->subscriptionObject_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject & subscriptionObject() const { DARABONBA_PTR_GET_CONST(subscriptionObject_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject subscriptionObject() { DARABONBA_PTR_GET(subscriptionObject_, DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionObject(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject & subscriptionObject) { DARABONBA_PTR_SET_VALUE(subscriptionObject_, subscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionObject(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject && subscriptionObject) { DARABONBA_PTR_SET_RVALUE(subscriptionObject_, subscriptionObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The start of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information, in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The end of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The error message returned if change tracking failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The billing method of the change tracking instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint> sourceEndpoint_ = nullptr;
    // The status of the change tracking task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Starting**: The task is being started.
    // *   **Normal**: The task is running as expected.
    // *   **Abnormal**: The task is not running as expected.
    std::shared_ptr<string> status_ = nullptr;
    // The topic of the change tracking instance.
    // 
    // >  This parameter is returned only if your change tracking instance is of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    std::shared_ptr<string> subscribeTopic_ = nullptr;
    // The types of operations that are tracked by the task.
    std::shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType> subscriptionDataType_ = nullptr;
    // The endpoint of the change tracking instance.
    std::shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionHost> subscriptionHost_ = nullptr;
    // The ID of the change tracking instance.
    std::shared_ptr<string> subscriptionInstanceID_ = nullptr;
    // The name of the change tracking instance.
    std::shared_ptr<string> subscriptionInstanceName_ = nullptr;
    // The objects for change tracking.
    std::shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject> subscriptionObject_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The ID of the change tracking task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
