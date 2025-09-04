// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Argument, argument_);
      DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SourceExchange, sourceExchange_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Argument, argument_);
      DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SourceExchange, sourceExchange_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    CreateBindingRequest() = default ;
    CreateBindingRequest(const CreateBindingRequest &) = default ;
    CreateBindingRequest(CreateBindingRequest &&) = default ;
    CreateBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBindingRequest() = default ;
    CreateBindingRequest& operator=(const CreateBindingRequest &) = default ;
    CreateBindingRequest& operator=(CreateBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argument_ != nullptr
        && this->bindingKey_ != nullptr && this->bindingType_ != nullptr && this->destinationName_ != nullptr && this->instanceId_ != nullptr && this->sourceExchange_ != nullptr
        && this->virtualHost_ != nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string argument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline CreateBindingRequest& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string bindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline CreateBindingRequest& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline string bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
    inline CreateBindingRequest& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // destinationName Field Functions 
    bool hasDestinationName() const { return this->destinationName_ != nullptr;};
    void deleteDestinationName() { this->destinationName_ = nullptr;};
    inline string destinationName() const { DARABONBA_PTR_GET_DEFAULT(destinationName_, "") };
    inline CreateBindingRequest& setDestinationName(string destinationName) { DARABONBA_PTR_SET_VALUE(destinationName_, destinationName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBindingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sourceExchange Field Functions 
    bool hasSourceExchange() const { return this->sourceExchange_ != nullptr;};
    void deleteSourceExchange() { this->sourceExchange_ = nullptr;};
    inline string sourceExchange() const { DARABONBA_PTR_GET_DEFAULT(sourceExchange_, "") };
    inline CreateBindingRequest& setSourceExchange(string sourceExchange) { DARABONBA_PTR_SET_VALUE(sourceExchange_, sourceExchange) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateBindingRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The key-value pairs that are configured for the headers attributes of a message. One or more key-value pairs can be concatenated to configure the headers attributes of a message. You must specify the x-match attribute as one of the valid values. You can specify custom values for other attributes. Valid values of the x-match attribute:
    // 
    // *   \\*\\*all: \\*\\*A headers exchange routes a message to a queue only if all binding attributes of the queue except for x-match match the headers attributes of the message. This value is the default value.
    // *   \\*\\*any: \\*\\*A headers exchange routes a message to a queue if one or more binding attributes of the queue except for x-match match the headers attributes of the message.
    // 
    // Separate the attributes with semicolons (;). Separate the key and value of an attribute with a colon (:). Example: x-match:all;type:report;format:pdf. This parameter is available for only headers exchanges. You can set this parameter to an arbitrary value for other types of exchanges.
    std::shared_ptr<string> argument_ = nullptr;
    // The binding key.
    // 
    // *   If the source exchange is not a topic exchange, the binding key must meet the following conventions:
    // 
    //     *   The binding key can contain only letters, digits, hyphens (-), underscores (_), periods (.), forward slashes (/), and at signs (@).
    //     *   The binding key must be 1 to 255 characters in length.
    // 
    // *   If the source exchange is a topic exchange, the binding key must meet the following conventions:
    // 
    //     *   The binding key can contain letters, digits, hyphens (-), underscores (_), asterisks (\\*), periods (.), number signs (#), forward slashes (/), and at signs (@).
    //     *   The binding key cannot start or end with a period (.). If a binding key starts with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be followed by a period (.). If the binding key ends with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be preceded by a period (.). If a number sign (#) or an asterisk (\\*) is used in the middle of a binding key, the number sign (#) or asterisk (\\*) must be preceded and followed by a period (.).
    //     *   The binding key must be 1 to 255 characters in length.
    std::shared_ptr<string> bindingKey_ = nullptr;
    // The type of the object that you want to bind to the source exchange. Valid values:
    // 
    // *   \\*\\*0: \\*\\*Queue
    // *   \\*\\*1: \\*\\*Exchange
    // 
    // This parameter is required.
    std::shared_ptr<string> bindingType_ = nullptr;
    // The name of the object that you want to bind to the source exchange. You must create the object in the ApsaraMQ for RabbitMQ console in advance. The vhost of the object is the same as the vhost to which the source exchange specified by **SourceExchange** belongs. The vhost of the source exchange is the one specified by **VirtualHost**.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationName_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the source exchange. You must create the source exchange in the ApsaraMQ for RabbitMQ console in advance.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceExchange_ = nullptr;
    // The virtual host (vhost) name. You must create the vhost in the ApsaraMQ for RabbitMQ console in advance. The object specified by **DestinationName** and the source exchange specified by **SourceExchange** must belong to the vhost.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
