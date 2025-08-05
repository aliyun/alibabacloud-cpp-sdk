// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKRABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKRABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Exchange, exchange_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
    };
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters(const GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters(GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->exchange_ != nullptr && this->instanceId_ != nullptr && this->messageId_ != nullptr && this->properties_ != nullptr && this->queueName_ != nullptr
        && this->routingKey_ != nullptr && this->targetType_ != nullptr && this->virtualHostName_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange & exchange() const { DARABONBA_PTR_GET_CONST(exchange_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange exchange() { DARABONBA_PTR_GET(exchange_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setExchange(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setExchange(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setInstanceId(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setInstanceId(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId messageId() { DARABONBA_PTR_GET(messageId_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setMessageId(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setMessageId(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setProperties(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setProperties(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setQueueName(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setQueueName(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey & routingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey routingKey() { DARABONBA_PTR_GET(routingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setRoutingKey(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setRoutingKey(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType & targetType() const { DARABONBA_PTR_GET_CONST(targetType_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType targetType() { DARABONBA_PTR_GET(targetType_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setTargetType(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType & targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setTargetType(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType && targetType) { DARABONBA_PTR_SET_RVALUE(targetType_, targetType) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName & virtualHostName() const { DARABONBA_PTR_GET_CONST(virtualHostName_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName virtualHostName() { DARABONBA_PTR_GET(virtualHostName_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setVirtualHostName(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName & virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };
    inline GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters& setVirtualHostName(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName && virtualHostName) { DARABONBA_PTR_SET_RVALUE(virtualHostName_, virtualHostName) };


  protected:
    // The message content.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody> body_ = nullptr;
    // The exchange mode. This parameter is available only if TargetType is set to Exchange.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange> exchange_ = nullptr;
    // The target service type is Message Queue for RabbitMQ instance.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId> instanceId_ = nullptr;
    // The message ID.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId> messageId_ = nullptr;
    // The tags that are used to filter messages.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties> properties_ = nullptr;
    // The queue mode. This parameter is available only if TargetType is set to Queue.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName> queueName_ = nullptr;
    // The routing rule for the message. This parameter is available only if TargetType is set to Exchange.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey> routingKey_ = nullptr;
    // The target type.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType> targetType_ = nullptr;
    // The name of the vhost of the Message Queue for RabbitMQ instance.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName> virtualHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
