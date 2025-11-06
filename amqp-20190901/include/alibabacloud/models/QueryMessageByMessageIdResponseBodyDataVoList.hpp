// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEBYMESSAGEIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEBYMESSAGEIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class QueryMessageByMessageIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageByMessageIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CorrelationId, correlationId_);
      DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Immediate, immediate_);
      DARABONBA_PTR_TO_JSON(Mandatory, mandatory_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProcessToken, processToken_);
      DARABONBA_PTR_TO_JSON(ReconsumeTimes, reconsumeTimes_);
      DARABONBA_PTR_TO_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(StoreTimestamp, storeTimestamp_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageByMessageIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CorrelationId, correlationId_);
      DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Immediate, immediate_);
      DARABONBA_PTR_FROM_JSON(Mandatory, mandatory_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProcessToken, processToken_);
      DARABONBA_PTR_FROM_JSON(ReconsumeTimes, reconsumeTimes_);
      DARABONBA_PTR_FROM_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(StoreTimestamp, storeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryMessageByMessageIdResponseBodyDataVoList() = default ;
    QueryMessageByMessageIdResponseBodyDataVoList(const QueryMessageByMessageIdResponseBodyDataVoList &) = default ;
    QueryMessageByMessageIdResponseBodyDataVoList(QueryMessageByMessageIdResponseBodyDataVoList &&) = default ;
    QueryMessageByMessageIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageByMessageIdResponseBodyDataVoList() = default ;
    QueryMessageByMessageIdResponseBodyDataVoList& operator=(const QueryMessageByMessageIdResponseBodyDataVoList &) = default ;
    QueryMessageByMessageIdResponseBodyDataVoList& operator=(QueryMessageByMessageIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->body_ == nullptr && return this->clusterId_ == nullptr && return this->contentEncoding_ == nullptr && return this->contentType_ == nullptr && return this->correlationId_ == nullptr
        && return this->deliveryMode_ == nullptr && return this->exchangeName_ == nullptr && return this->expiration_ == nullptr && return this->headers_ == nullptr && return this->immediate_ == nullptr
        && return this->mandatory_ == nullptr && return this->messageId_ == nullptr && return this->priority_ == nullptr && return this->processToken_ == nullptr && return this->reconsumeTimes_ == nullptr
        && return this->replyTo_ == nullptr && return this->routingKey_ == nullptr && return this->storeTimestamp_ == nullptr && return this->timestamp_ == nullptr && return this->type_ == nullptr
        && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // correlationId Field Functions 
    bool hasCorrelationId() const { return this->correlationId_ != nullptr;};
    void deleteCorrelationId() { this->correlationId_ = nullptr;};
    inline string correlationId() const { DARABONBA_PTR_GET_DEFAULT(correlationId_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setCorrelationId(string correlationId) { DARABONBA_PTR_SET_VALUE(correlationId_, correlationId) };


    // deliveryMode Field Functions 
    bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
    void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
    inline int32_t deliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, 0) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setDeliveryMode(int32_t deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string headers() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // immediate Field Functions 
    bool hasImmediate() const { return this->immediate_ != nullptr;};
    void deleteImmediate() { this->immediate_ = nullptr;};
    inline bool immediate() const { DARABONBA_PTR_GET_DEFAULT(immediate_, false) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setImmediate(bool immediate) { DARABONBA_PTR_SET_VALUE(immediate_, immediate) };


    // mandatory Field Functions 
    bool hasMandatory() const { return this->mandatory_ != nullptr;};
    void deleteMandatory() { this->mandatory_ = nullptr;};
    inline bool mandatory() const { DARABONBA_PTR_GET_DEFAULT(mandatory_, false) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setMandatory(bool mandatory) { DARABONBA_PTR_SET_VALUE(mandatory_, mandatory) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // processToken Field Functions 
    bool hasProcessToken() const { return this->processToken_ != nullptr;};
    void deleteProcessToken() { this->processToken_ = nullptr;};
    inline string processToken() const { DARABONBA_PTR_GET_DEFAULT(processToken_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setProcessToken(string processToken) { DARABONBA_PTR_SET_VALUE(processToken_, processToken) };


    // reconsumeTimes Field Functions 
    bool hasReconsumeTimes() const { return this->reconsumeTimes_ != nullptr;};
    void deleteReconsumeTimes() { this->reconsumeTimes_ = nullptr;};
    inline int32_t reconsumeTimes() const { DARABONBA_PTR_GET_DEFAULT(reconsumeTimes_, 0) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setReconsumeTimes(int32_t reconsumeTimes) { DARABONBA_PTR_SET_VALUE(reconsumeTimes_, reconsumeTimes) };


    // replyTo Field Functions 
    bool hasReplyTo() const { return this->replyTo_ != nullptr;};
    void deleteReplyTo() { this->replyTo_ = nullptr;};
    inline string replyTo() const { DARABONBA_PTR_GET_DEFAULT(replyTo_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setReplyTo(string replyTo) { DARABONBA_PTR_SET_VALUE(replyTo_, replyTo) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string routingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // storeTimestamp Field Functions 
    bool hasStoreTimestamp() const { return this->storeTimestamp_ != nullptr;};
    void deleteStoreTimestamp() { this->storeTimestamp_ = nullptr;};
    inline int64_t storeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storeTimestamp_, 0L) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setStoreTimestamp(int64_t storeTimestamp) { DARABONBA_PTR_SET_VALUE(storeTimestamp_, storeTimestamp) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryMessageByMessageIdResponseBodyDataVoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> contentEncoding_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> correlationId_ = nullptr;
    std::shared_ptr<int32_t> deliveryMode_ = nullptr;
    std::shared_ptr<string> exchangeName_ = nullptr;
    std::shared_ptr<string> expiration_ = nullptr;
    std::shared_ptr<string> headers_ = nullptr;
    std::shared_ptr<bool> immediate_ = nullptr;
    std::shared_ptr<bool> mandatory_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> processToken_ = nullptr;
    std::shared_ptr<int32_t> reconsumeTimes_ = nullptr;
    std::shared_ptr<string> replyTo_ = nullptr;
    std::shared_ptr<string> routingKey_ = nullptr;
    std::shared_ptr<int64_t> storeTimestamp_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
