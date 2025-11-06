// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAckTag, autoAckTag_);
      DARABONBA_PTR_TO_JSON(ClientAddress, clientAddress_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConsumeType, consumeType_);
      DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
      DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_TO_JSON(DeliveryErrorInfo, deliveryErrorInfo_);
      DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_ANY_TO_JSON(DlqQueueMsgIdMap, dlqQueueMsgIdMap_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ShowAckIcon, showAckIcon_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAckTag, autoAckTag_);
      DARABONBA_PTR_FROM_JSON(ClientAddress, clientAddress_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConsumeType, consumeType_);
      DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
      DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_FROM_JSON(DeliveryErrorInfo, deliveryErrorInfo_);
      DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_ANY_FROM_JSON(DlqQueueMsgIdMap, dlqQueueMsgIdMap_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ShowAckIcon, showAckIcon_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData(const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData(GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData &&) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& operator=(const GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& operator=(GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAckTag_ == nullptr
        && return this->clientAddress_ == nullptr && return this->code_ == nullptr && return this->consumeType_ == nullptr && return this->consumerTag_ == nullptr && return this->currentStatus_ == nullptr
        && return this->deliveryErrorInfo_ == nullptr && return this->deliveryTag_ == nullptr && return this->dlqQueueMsgIdMap_ == nullptr && return this->reason_ == nullptr && return this->showAckIcon_ == nullptr
        && return this->timeStamp_ == nullptr && return this->userId_ == nullptr; };
    // autoAckTag Field Functions 
    bool hasAutoAckTag() const { return this->autoAckTag_ != nullptr;};
    void deleteAutoAckTag() { this->autoAckTag_ = nullptr;};
    inline string autoAckTag() const { DARABONBA_PTR_GET_DEFAULT(autoAckTag_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setAutoAckTag(string autoAckTag) { DARABONBA_PTR_SET_VALUE(autoAckTag_, autoAckTag) };


    // clientAddress Field Functions 
    bool hasClientAddress() const { return this->clientAddress_ != nullptr;};
    void deleteClientAddress() { this->clientAddress_ = nullptr;};
    inline string clientAddress() const { DARABONBA_PTR_GET_DEFAULT(clientAddress_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setClientAddress(string clientAddress) { DARABONBA_PTR_SET_VALUE(clientAddress_, clientAddress) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumeType Field Functions 
    bool hasConsumeType() const { return this->consumeType_ != nullptr;};
    void deleteConsumeType() { this->consumeType_ = nullptr;};
    inline string consumeType() const { DARABONBA_PTR_GET_DEFAULT(consumeType_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setConsumeType(string consumeType) { DARABONBA_PTR_SET_VALUE(consumeType_, consumeType) };


    // consumerTag Field Functions 
    bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
    void deleteConsumerTag() { this->consumerTag_ = nullptr;};
    inline string consumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


    // currentStatus Field Functions 
    bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
    void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
    inline string currentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


    // deliveryErrorInfo Field Functions 
    bool hasDeliveryErrorInfo() const { return this->deliveryErrorInfo_ != nullptr;};
    void deleteDeliveryErrorInfo() { this->deliveryErrorInfo_ = nullptr;};
    inline string deliveryErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(deliveryErrorInfo_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setDeliveryErrorInfo(string deliveryErrorInfo) { DARABONBA_PTR_SET_VALUE(deliveryErrorInfo_, deliveryErrorInfo) };


    // deliveryTag Field Functions 
    bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
    void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
    inline string deliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setDeliveryTag(string deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


    // dlqQueueMsgIdMap Field Functions 
    bool hasDlqQueueMsgIdMap() const { return this->dlqQueueMsgIdMap_ != nullptr;};
    void deleteDlqQueueMsgIdMap() { this->dlqQueueMsgIdMap_ = nullptr;};
    inline     const Darabonba::Json & dlqQueueMsgIdMap() const { DARABONBA_GET(dlqQueueMsgIdMap_) };
    Darabonba::Json & dlqQueueMsgIdMap() { DARABONBA_GET(dlqQueueMsgIdMap_) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setDlqQueueMsgIdMap(const Darabonba::Json & dlqQueueMsgIdMap) { DARABONBA_SET_VALUE(dlqQueueMsgIdMap_, dlqQueueMsgIdMap) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setDlqQueueMsgIdMap(Darabonba::Json & dlqQueueMsgIdMap) { DARABONBA_SET_RVALUE(dlqQueueMsgIdMap_, dlqQueueMsgIdMap) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // showAckIcon Field Functions 
    bool hasShowAckIcon() const { return this->showAckIcon_ != nullptr;};
    void deleteShowAckIcon() { this->showAckIcon_ = nullptr;};
    inline bool showAckIcon() const { DARABONBA_PTR_GET_DEFAULT(showAckIcon_, false) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setShowAckIcon(bool showAckIcon) { DARABONBA_PTR_SET_VALUE(showAckIcon_, showAckIcon) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> autoAckTag_ = nullptr;
    std::shared_ptr<string> clientAddress_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> consumeType_ = nullptr;
    std::shared_ptr<string> consumerTag_ = nullptr;
    std::shared_ptr<string> currentStatus_ = nullptr;
    std::shared_ptr<string> deliveryErrorInfo_ = nullptr;
    std::shared_ptr<string> deliveryTag_ = nullptr;
    Darabonba::Json dlqQueueMsgIdMap_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<bool> showAckIcon_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
