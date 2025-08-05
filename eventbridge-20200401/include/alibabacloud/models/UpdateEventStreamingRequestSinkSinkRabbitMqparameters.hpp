// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKRABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKRABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkRabbitMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkRabbitMQParameters& obj) { 
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
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters(const UpdateEventStreamingRequestSinkSinkRabbitMQParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters(UpdateEventStreamingRequestSinkSinkRabbitMQParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters& operator=(const UpdateEventStreamingRequestSinkSinkRabbitMQParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRabbitMQParameters& operator=(UpdateEventStreamingRequestSinkSinkRabbitMQParameters &&) = default ;
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
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange & exchange() const { DARABONBA_PTR_GET_CONST(exchange_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange exchange() { DARABONBA_PTR_GET(exchange_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setExchange(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setExchange(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setInstanceId(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setInstanceId(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId messageId() { DARABONBA_PTR_GET(messageId_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setMessageId(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setMessageId(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setProperties(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setProperties(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setQueueName(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setQueueName(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey & routingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey routingKey() { DARABONBA_PTR_GET(routingKey_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setRoutingKey(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setRoutingKey(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType & targetType() const { DARABONBA_PTR_GET_CONST(targetType_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType targetType() { DARABONBA_PTR_GET(targetType_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setTargetType(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType & targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setTargetType(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType && targetType) { DARABONBA_PTR_SET_RVALUE(targetType_, targetType) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName & virtualHostName() const { DARABONBA_PTR_GET_CONST(virtualHostName_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName virtualHostName() { DARABONBA_PTR_GET(virtualHostName_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setVirtualHostName(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName & virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };
    inline UpdateEventStreamingRequestSinkSinkRabbitMQParameters& setVirtualHostName(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName && virtualHostName) { DARABONBA_PTR_SET_RVALUE(virtualHostName_, virtualHostName) };


  protected:
    // The message body.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody> body_ = nullptr;
    // The exchange mode. This parameter is required only if you set TargetType to Exchange.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange> exchange_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId> instanceId_ = nullptr;
    // The message ID.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId> messageId_ = nullptr;
    // The attributes that you want to use to filter messages.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties> properties_ = nullptr;
    // The queue mode. This parameter is required only if you set TargetType to Queue.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName> queueName_ = nullptr;
    // The rule that you want to use to route messages. This parameter is required only if you set TargetType to Exchange.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey> routingKey_ = nullptr;
    // The type of the resource to which you want to deliver events.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType> targetType_ = nullptr;
    // The name of the vhost of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName> virtualHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
