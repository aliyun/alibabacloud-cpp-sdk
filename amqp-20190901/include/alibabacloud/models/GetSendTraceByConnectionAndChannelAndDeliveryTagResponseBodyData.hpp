// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(Exchange, exchange_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_ANY_TO_JSON(QueueMsgIdMap, queueMsgIdMap_);
      DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SendErrorInfo, sendErrorInfo_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
      DARABONBA_PTR_TO_JSON(XDelay, XDelay_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_ANY_FROM_JSON(QueueMsgIdMap, queueMsgIdMap_);
      DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SendErrorInfo, sendErrorInfo_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
      DARABONBA_PTR_FROM_JSON(XDelay, XDelay_);
    };
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData(const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData(GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData &&) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& operator=(const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& operator=(GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->delay_ == nullptr && return this->exchange_ == nullptr && return this->expiration_ == nullptr && return this->messageId_ == nullptr && return this->queueMsgIdMap_ == nullptr
        && return this->remoteAddress_ == nullptr && return this->routingKey_ == nullptr && return this->sendErrorInfo_ == nullptr && return this->timeStamp_ == nullptr && return this->userId_ == nullptr
        && return this->vhost_ == nullptr && return this->XDelay_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline string delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline string exchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // queueMsgIdMap Field Functions 
    bool hasQueueMsgIdMap() const { return this->queueMsgIdMap_ != nullptr;};
    void deleteQueueMsgIdMap() { this->queueMsgIdMap_ = nullptr;};
    inline     const Darabonba::Json & queueMsgIdMap() const { DARABONBA_GET(queueMsgIdMap_) };
    Darabonba::Json & queueMsgIdMap() { DARABONBA_GET(queueMsgIdMap_) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setQueueMsgIdMap(const Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_VALUE(queueMsgIdMap_, queueMsgIdMap) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setQueueMsgIdMap(Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_RVALUE(queueMsgIdMap_, queueMsgIdMap) };


    // remoteAddress Field Functions 
    bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
    void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
    inline string remoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string routingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // sendErrorInfo Field Functions 
    bool hasSendErrorInfo() const { return this->sendErrorInfo_ != nullptr;};
    void deleteSendErrorInfo() { this->sendErrorInfo_ = nullptr;};
    inline string sendErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(sendErrorInfo_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setSendErrorInfo(string sendErrorInfo) { DARABONBA_PTR_SET_VALUE(sendErrorInfo_, sendErrorInfo) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string vhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


    // XDelay Field Functions 
    bool hasXDelay() const { return this->XDelay_ != nullptr;};
    void deleteXDelay() { this->XDelay_ = nullptr;};
    inline string XDelay() const { DARABONBA_PTR_GET_DEFAULT(XDelay_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBodyData& setXDelay(string XDelay) { DARABONBA_PTR_SET_VALUE(XDelay_, XDelay) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> delay_ = nullptr;
    std::shared_ptr<string> exchange_ = nullptr;
    std::shared_ptr<string> expiration_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    Darabonba::Json queueMsgIdMap_ = nullptr;
    std::shared_ptr<string> remoteAddress_ = nullptr;
    std::shared_ptr<string> routingKey_ = nullptr;
    std::shared_ptr<string> sendErrorInfo_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> vhost_ = nullptr;
    std::shared_ptr<string> XDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
