// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody(const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody(GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody &&) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& operator=(const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& operator=(GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->delay_ == nullptr && this->exchange_ == nullptr && this->expiration_ == nullptr && this->messageId_ == nullptr && this->queueMsgIdMap_ == nullptr
        && this->remoteAddress_ == nullptr && this->routingKey_ == nullptr && this->sendErrorInfo_ == nullptr && this->timeStamp_ == nullptr && this->userId_ == nullptr
        && this->vhost_ == nullptr && this->XDelay_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline string getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
      inline Data& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // exchange Field Functions 
      bool hasExchange() const { return this->exchange_ != nullptr;};
      void deleteExchange() { this->exchange_ = nullptr;};
      inline string getExchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
      inline Data& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Data& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Data& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // queueMsgIdMap Field Functions 
      bool hasQueueMsgIdMap() const { return this->queueMsgIdMap_ != nullptr;};
      void deleteQueueMsgIdMap() { this->queueMsgIdMap_ = nullptr;};
      inline       const Darabonba::Json & getQueueMsgIdMap() const { DARABONBA_GET(queueMsgIdMap_) };
      Darabonba::Json & getQueueMsgIdMap() { DARABONBA_GET(queueMsgIdMap_) };
      inline Data& setQueueMsgIdMap(const Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_VALUE(queueMsgIdMap_, queueMsgIdMap) };
      inline Data& setQueueMsgIdMap(Darabonba::Json && queueMsgIdMap) { DARABONBA_SET_RVALUE(queueMsgIdMap_, queueMsgIdMap) };


      // remoteAddress Field Functions 
      bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
      void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
      inline string getRemoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
      inline Data& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


      // routingKey Field Functions 
      bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
      void deleteRoutingKey() { this->routingKey_ = nullptr;};
      inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
      inline Data& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


      // sendErrorInfo Field Functions 
      bool hasSendErrorInfo() const { return this->sendErrorInfo_ != nullptr;};
      void deleteSendErrorInfo() { this->sendErrorInfo_ = nullptr;};
      inline string getSendErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(sendErrorInfo_, "") };
      inline Data& setSendErrorInfo(string sendErrorInfo) { DARABONBA_PTR_SET_VALUE(sendErrorInfo_, sendErrorInfo) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline Data& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // vhost Field Functions 
      bool hasVhost() const { return this->vhost_ != nullptr;};
      void deleteVhost() { this->vhost_ = nullptr;};
      inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
      inline Data& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


      // XDelay Field Functions 
      bool hasXDelay() const { return this->XDelay_ != nullptr;};
      void deleteXDelay() { this->XDelay_ = nullptr;};
      inline string getXDelay() const { DARABONBA_PTR_GET_DEFAULT(XDelay_, "") };
      inline Data& setXDelay(string XDelay) { DARABONBA_PTR_SET_VALUE(XDelay_, XDelay) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> delay_ {};
      shared_ptr<string> exchange_ {};
      shared_ptr<string> expiration_ {};
      shared_ptr<string> messageId_ {};
      Darabonba::Json queueMsgIdMap_ {};
      shared_ptr<string> remoteAddress_ {};
      shared_ptr<string> routingKey_ {};
      shared_ptr<string> sendErrorInfo_ {};
      shared_ptr<string> timeStamp_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> vhost_ {};
      shared_ptr<string> XDelay_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setData(const GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setData(GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetSendTraceByConnectionAndChannelAndDeliveryTagResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
