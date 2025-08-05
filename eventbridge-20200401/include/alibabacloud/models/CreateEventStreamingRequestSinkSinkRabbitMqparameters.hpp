// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKRABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKRABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkRabbitMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkRabbitMQParameters& obj) { 
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
    CreateEventStreamingRequestSinkSinkRabbitMQParameters() = default ;
    CreateEventStreamingRequestSinkSinkRabbitMQParameters(const CreateEventStreamingRequestSinkSinkRabbitMQParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRabbitMQParameters(CreateEventStreamingRequestSinkSinkRabbitMQParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParameters() = default ;
    CreateEventStreamingRequestSinkSinkRabbitMQParameters& operator=(const CreateEventStreamingRequestSinkSinkRabbitMQParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRabbitMQParameters& operator=(CreateEventStreamingRequestSinkSinkRabbitMQParameters &&) = default ;
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
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setBody(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange & exchange() const { DARABONBA_PTR_GET_CONST(exchange_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange exchange() { DARABONBA_PTR_GET(exchange_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setExchange(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setExchange(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setInstanceId(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setInstanceId(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId messageId() { DARABONBA_PTR_GET(messageId_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setMessageId(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setMessageId(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setProperties(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setProperties(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setQueueName(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setQueueName(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey & routingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey routingKey() { DARABONBA_PTR_GET(routingKey_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setRoutingKey(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setRoutingKey(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType & targetType() const { DARABONBA_PTR_GET_CONST(targetType_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType targetType() { DARABONBA_PTR_GET(targetType_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setTargetType(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType & targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setTargetType(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType && targetType) { DARABONBA_PTR_SET_RVALUE(targetType_, targetType) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName & virtualHostName() const { DARABONBA_PTR_GET_CONST(virtualHostName_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName virtualHostName() { DARABONBA_PTR_GET(virtualHostName_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setVirtualHostName(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName & virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };
    inline CreateEventStreamingRequestSinkSinkRabbitMQParameters& setVirtualHostName(Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName && virtualHostName) { DARABONBA_PTR_SET_RVALUE(virtualHostName_, virtualHostName) };


  protected:
    // The message content.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersBody> body_ = nullptr;
    // The exchange mode. This parameter is required only if you set TargetType to Exchange.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange> exchange_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId> instanceId_ = nullptr;
    // The message ID.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId> messageId_ = nullptr;
    // The properties that you want to use to filter messages.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties> properties_ = nullptr;
    // The queue mode. This parameter is required only if you set TargetType to Queue.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName> queueName_ = nullptr;
    // The rule that you want to use to route messages. This parameter is required only if you set TargetType to Exchange.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey> routingKey_ = nullptr;
    // The type of the resource to which you want to deliver events.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType> targetType_ = nullptr;
    // The name of the vhost to which the ApsaraMQ for RabbitMQ instance belongs.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName> virtualHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
