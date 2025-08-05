// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKRABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKRABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& obj) { 
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
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange & exchange() const { DARABONBA_PTR_GET_CONST(exchange_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange exchange() { DARABONBA_PTR_GET(exchange_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setExchange(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setExchange(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setInstanceId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setInstanceId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId messageId() { DARABONBA_PTR_GET(messageId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setMessageId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setMessageId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setProperties(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setProperties(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName & queueName() const { DARABONBA_PTR_GET_CONST(queueName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName queueName() { DARABONBA_PTR_GET(queueName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setQueueName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setQueueName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey & routingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey routingKey() { DARABONBA_PTR_GET(routingKey_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setRoutingKey(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setRoutingKey(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType & targetType() const { DARABONBA_PTR_GET_CONST(targetType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType targetType() { DARABONBA_PTR_GET(targetType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setTargetType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType & targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setTargetType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType && targetType) { DARABONBA_PTR_SET_RVALUE(targetType_, targetType) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName & virtualHostName() const { DARABONBA_PTR_GET_CONST(virtualHostName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName virtualHostName() { DARABONBA_PTR_GET(virtualHostName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setVirtualHostName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName & virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters& setVirtualHostName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName && virtualHostName) { DARABONBA_PTR_SET_RVALUE(virtualHostName_, virtualHostName) };


  protected:
    // The message content.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody> body_ = nullptr;
    // The exchange mode. This parameter is required only if TargetType is set to Exchange.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange> exchange_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId> instanceId_ = nullptr;
    // The message ID.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId> messageId_ = nullptr;
    // The properties that are used to filter messages.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties> properties_ = nullptr;
    // The queue mode. This parameter is required only if TargetType is set to Queue.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName> queueName_ = nullptr;
    // The rule that is used to route messages. This parameter is required only if TargetType is set to Exchange.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey> routingKey_ = nullptr;
    // The type of the resource to which events are delivered.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType> targetType_ = nullptr;
    // The name of the vhost to which the ApsaraMQ for RabbitMQ instance belongs.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName> virtualHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
