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
    virtual bool empty() const override { return this->alternateExchange_ == nullptr
        && this->autoDeleteState_ == nullptr && this->exchangeName_ == nullptr && this->exchangeType_ == nullptr && this->instanceId_ == nullptr && this->internal_ == nullptr
        && this->virtualHost_ == nullptr && this->XDelayedType_ == nullptr; };
    // alternateExchange Field Functions 
    bool hasAlternateExchange() const { return this->alternateExchange_ != nullptr;};
    void deleteAlternateExchange() { this->alternateExchange_ = nullptr;};
    inline string getAlternateExchange() const { DARABONBA_PTR_GET_DEFAULT(alternateExchange_, "") };
    inline CreateExchangeRequest& setAlternateExchange(string alternateExchange) { DARABONBA_PTR_SET_VALUE(alternateExchange_, alternateExchange) };


    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool getAutoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline CreateExchangeRequest& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string getExchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline CreateExchangeRequest& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // exchangeType Field Functions 
    bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
    void deleteExchangeType() { this->exchangeType_ = nullptr;};
    inline string getExchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
    inline CreateExchangeRequest& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExchangeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline bool getInternal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
    inline CreateExchangeRequest& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string getVirtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateExchangeRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


    // XDelayedType Field Functions 
    bool hasXDelayedType() const { return this->XDelayedType_ != nullptr;};
    void deleteXDelayedType() { this->XDelayedType_ = nullptr;};
    inline string getXDelayedType() const { DARABONBA_PTR_GET_DEFAULT(XDelayedType_, "") };
    inline CreateExchangeRequest& setXDelayedType(string XDelayedType) { DARABONBA_PTR_SET_VALUE(XDelayedType_, XDelayedType) };


  protected:
    // The alternate exchange. Configure an alternate exchange to receive messages that fail to be routed.
    shared_ptr<string> alternateExchange_ {};
    // Specifies whether to automatically delete the exchange. Valid values:
    // 
    // - **true**: Yes. The exchange is automatically deleted after the last queue is unbound from it.
    // 
    // - **false**: No. The exchange is not automatically deleted after the last queue is unbound from it.
    // 
    // This parameter is required.
    shared_ptr<bool> autoDeleteState_ {};
    // The name of the exchange. Note:
    // 
    // - The name can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@). The name must be 1 to 255 characters in length.
    // 
    // - The name of an exchange cannot be changed after the exchange is created. To change the name, delete the exchange and create a new one.
    // 
    // This parameter is required.
    shared_ptr<string> exchangeName_ {};
    // The type of the exchange. Valid values:
    // 
    // - **DIRECT**: This routing rule type routes messages to a queue whose binding key exactly matches the routing key of the message.
    // 
    // - **TOPIC**: This type is similar to the DIRECT type. It routes messages to bound queues using routing key pattern matching and string comparison.
    // 
    // - **FANOUT**: This routing rule type is simple. It routes all messages sent to the exchange to all queues that are bound to the exchange. This works like a broadcast feature.
    // 
    // - **HEADERS**: This type is similar to the DIRECT type. It uses header properties instead of a routing key for routing. When a queue is bound to a headers exchange, key-value pairs are defined for the binding. When a message is sent to the exchange, key-value pairs are defined in the message header. The exchange routes the message by comparing the key-value pairs in the header with the key-value pairs of the binding.
    // 
    // This parameter is required.
    shared_ptr<string> exchangeType_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the exchange is an internal exchange. Valid values:
    // 
    // - **false**: No
    // 
    // - **true**: Yes
    // 
    // This parameter is required.
    shared_ptr<bool> internal_ {};
    // The name of the vhost to which the exchange belongs.
    // 
    // This parameter is required.
    shared_ptr<string> virtualHost_ {};
    // An x-delayed-message exchange lets you use the x-delay header property to specify a delivery delay for a message in milliseconds. The routing rule for the delayed message is determined by the exchange type that you specify for the XDelayedType parameter. This parameter sets the actual exchange type to which the message is delivered after the delay. Valid values:
    // 
    // - **DIRECT**: Delivers the delayed message to the specified queue that is bound to a DIRECT exchange.
    // 
    // - **TOPIC**: Delivers the delayed message to queues that are bound to a TOPIC exchange.
    // 
    // - **FANOUT**: Delivers the delayed message to queues that are bound to a FANOUT exchange.
    // 
    // - **HEADERS**: Delivers the delayed message to queues that are bound to a HEADERS exchange.
    // 
    // - **X-JMS-TOPIC**: Delivers the delayed message to queues that are bound to an X-JMS-TOPIC exchange.
    shared_ptr<string> XDelayedType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
