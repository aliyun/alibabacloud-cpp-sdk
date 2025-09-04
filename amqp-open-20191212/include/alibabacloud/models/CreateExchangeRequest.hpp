// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateExchangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExchangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlternateExchange, alternateExchange_);
      DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
      DARABONBA_PTR_TO_JSON(XDelayedType, XDelayedType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExchangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlternateExchange, alternateExchange_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
      DARABONBA_PTR_FROM_JSON(XDelayedType, XDelayedType_);
    };
    CreateExchangeRequest() = default ;
    CreateExchangeRequest(const CreateExchangeRequest &) = default ;
    CreateExchangeRequest(CreateExchangeRequest &&) = default ;
    CreateExchangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExchangeRequest() = default ;
    CreateExchangeRequest& operator=(const CreateExchangeRequest &) = default ;
    CreateExchangeRequest& operator=(CreateExchangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alternateExchange_ != nullptr
        && this->autoDeleteState_ != nullptr && this->exchangeName_ != nullptr && this->exchangeType_ != nullptr && this->instanceId_ != nullptr && this->internal_ != nullptr
        && this->virtualHost_ != nullptr && this->XDelayedType_ != nullptr; };
    // alternateExchange Field Functions 
    bool hasAlternateExchange() const { return this->alternateExchange_ != nullptr;};
    void deleteAlternateExchange() { this->alternateExchange_ = nullptr;};
    inline string alternateExchange() const { DARABONBA_PTR_GET_DEFAULT(alternateExchange_, "") };
    inline CreateExchangeRequest& setAlternateExchange(string alternateExchange) { DARABONBA_PTR_SET_VALUE(alternateExchange_, alternateExchange) };


    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool autoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline CreateExchangeRequest& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline CreateExchangeRequest& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline string exchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
    inline CreateExchangeRequest& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExchangeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline bool internal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
    inline CreateExchangeRequest& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateExchangeRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


    // XDelayedType Field Functions 
    bool hasXDelayedType() const { return this->XDelayedType_ != nullptr;};
    void deleteXDelayedType() { this->XDelayedType_ = nullptr;};
    inline string XDelayedType() const { DARABONBA_PTR_GET_DEFAULT(XDelayedType_, "") };
    inline CreateExchangeRequest& setXDelayedType(string XDelayedType) { DARABONBA_PTR_SET_VALUE(XDelayedType_, XDelayedType) };


  protected:
    // The alternate exchange. An alternate exchange is used to receive messages that fail to be routed to queues from the current exchange.
    std::shared_ptr<string> alternateExchange_ = nullptr;
    // Specifies whether to automatically delete the exchange. Valid values:
    // 
    // *   **true**: If the last queue that is bound to the exchange is unbound, the exchange is automatically deleted.
    // *   **false**: If the last queue that is bound to the exchange is unbound, the exchange is not automatically deleted.
    // 
    // This parameter is required.
    std::shared_ptr<bool> autoDeleteState_ = nullptr;
    // The name of the exchange that you want to create. The exchange name must meet the following conventions:
    // 
    // *   The name must be 1 to 255 characters in length, and can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@).
    // *   After the exchange is created, you cannot change its name. If you want to change its name, delete the exchange and create another exchange.
    // 
    // This parameter is required.
    std::shared_ptr<string> exchangeName_ = nullptr;
    // The exchange type. Valid values:
    // 
    // *   **DIRECT**: An exchange of this type routes a message to the queue whose binding key is exactly the same as the routing key of the message.
    // *   **TOPIC**: This type of exchange is similar to direct exchanges. An exchange of this type routes a message to one or more queues based on the results of the fuzzy match or multi-condition match between the routing key of the message and the binding keys of the current exchange.
    // *   **FANOUT**: An exchange of this type routes all received messages to all queues bound to this exchange. You can use a fanout exchange to broadcast messages.
    // *   **HEADERS**: This type of exchange is similar to direct exchanges. The only difference is that a headers exchange routes messages based on the headers attributes instead of routing keys. When you bind a headers exchange to a queue, you must configure binding attributes in the key-value format for the binding. When you send a message to a headers exchange, you must configure the headers attributes in the key-value format for the message. After a headers exchange receives a message, the exchange routes the message based on the matching results between the headers attributes of the message and the binding attributes of the bound queues.
    // *   **X-CONSISTENT-HASH**: An exchange of this type allows you to perform hash calculations on routing keys or header values and use consistent hashing to route a message to different queues.
    // 
    // This parameter is required.
    std::shared_ptr<string> exchangeType_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ for which you want to create an exchange.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether the exchange is an internal exchange. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // This parameter is required.
    std::shared_ptr<bool> internal_ = nullptr;
    // The name of the vhost to which the exchange that you want to create belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
    std::shared_ptr<string> XDelayedType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
