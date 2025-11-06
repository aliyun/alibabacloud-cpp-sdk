// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDTRACEBYMSGIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSENDTRACEBYMSGIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetSendTraceByMsgIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendTraceByMsgIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Exchange, exchange_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageBodyLength, messageBodyLength_);
      DARABONBA_ANY_TO_JSON(MessagePropertiesMap, messagePropertiesMap_);
      DARABONBA_ANY_TO_JSON(QueueMsgIdMap, queueMsgIdMap_);
      DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SendErrorInfo, sendErrorInfo_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendTraceByMsgIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageBodyLength, messageBodyLength_);
      DARABONBA_ANY_FROM_JSON(MessagePropertiesMap, messagePropertiesMap_);
      DARABONBA_ANY_FROM_JSON(QueueMsgIdMap, queueMsgIdMap_);
      DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SendErrorInfo, sendErrorInfo_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
    };
    GetSendTraceByMsgIdResponseBodyDataVoList() = default ;
    GetSendTraceByMsgIdResponseBodyDataVoList(const GetSendTraceByMsgIdResponseBodyDataVoList &) = default ;
    GetSendTraceByMsgIdResponseBodyDataVoList(GetSendTraceByMsgIdResponseBodyDataVoList &&) = default ;
    GetSendTraceByMsgIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendTraceByMsgIdResponseBodyDataVoList() = default ;
    GetSendTraceByMsgIdResponseBodyDataVoList& operator=(const GetSendTraceByMsgIdResponseBodyDataVoList &) = default ;
    GetSendTraceByMsgIdResponseBodyDataVoList& operator=(GetSendTraceByMsgIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->exchange_ == nullptr && return this->instanceId_ == nullptr && return this->messageBodyLength_ == nullptr && return this->messagePropertiesMap_ == nullptr && return this->queueMsgIdMap_ == nullptr
        && return this->remoteAddress_ == nullptr && return this->routingKey_ == nullptr && return this->sendErrorInfo_ == nullptr && return this->timeStamp_ == nullptr && return this->userId_ == nullptr
        && return this->vhost_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline string exchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageBodyLength Field Functions 
    bool hasMessageBodyLength() const { return this->messageBodyLength_ != nullptr;};
    void deleteMessageBodyLength() { this->messageBodyLength_ = nullptr;};
    inline string messageBodyLength() const { DARABONBA_PTR_GET_DEFAULT(messageBodyLength_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setMessageBodyLength(string messageBodyLength) { DARABONBA_PTR_SET_VALUE(messageBodyLength_, messageBodyLength) };


    // messagePropertiesMap Field Functions 
    bool hasMessagePropertiesMap() const { return this->messagePropertiesMap_ != nullptr;};
    void deleteMessagePropertiesMap() { this->messagePropertiesMap_ = nullptr;};
    inline     const Darabonba::Json & messagePropertiesMap() const { DARABONBA_GET(messagePropertiesMap_) };
    Darabonba::Json & messagePropertiesMap() { DARABONBA_GET(messagePropertiesMap_) };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setMessagePropertiesMap(const Darabonba::Json & messagePropertiesMap) { DARABONBA_SET_VALUE(messagePropertiesMap_, messagePropertiesMap) };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setMessagePropertiesMap(Darabonba::Json & messagePropertiesMap) { DARABONBA_SET_RVALUE(messagePropertiesMap_, messagePropertiesMap) };


    // queueMsgIdMap Field Functions 
    bool hasQueueMsgIdMap() const { return this->queueMsgIdMap_ != nullptr;};
    void deleteQueueMsgIdMap() { this->queueMsgIdMap_ = nullptr;};
    inline     const Darabonba::Json & queueMsgIdMap() const { DARABONBA_GET(queueMsgIdMap_) };
    Darabonba::Json & queueMsgIdMap() { DARABONBA_GET(queueMsgIdMap_) };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setQueueMsgIdMap(const Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_VALUE(queueMsgIdMap_, queueMsgIdMap) };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setQueueMsgIdMap(Darabonba::Json & queueMsgIdMap) { DARABONBA_SET_RVALUE(queueMsgIdMap_, queueMsgIdMap) };


    // remoteAddress Field Functions 
    bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
    void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
    inline string remoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string routingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // sendErrorInfo Field Functions 
    bool hasSendErrorInfo() const { return this->sendErrorInfo_ != nullptr;};
    void deleteSendErrorInfo() { this->sendErrorInfo_ = nullptr;};
    inline string sendErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(sendErrorInfo_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setSendErrorInfo(string sendErrorInfo) { DARABONBA_PTR_SET_VALUE(sendErrorInfo_, sendErrorInfo) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string vhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline GetSendTraceByMsgIdResponseBodyDataVoList& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> exchange_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> messageBodyLength_ = nullptr;
    Darabonba::Json messagePropertiesMap_ = nullptr;
    Darabonba::Json queueMsgIdMap_ = nullptr;
    std::shared_ptr<string> remoteAddress_ = nullptr;
    std::shared_ptr<string> routingKey_ = nullptr;
    std::shared_ptr<string> sendErrorInfo_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> vhost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
