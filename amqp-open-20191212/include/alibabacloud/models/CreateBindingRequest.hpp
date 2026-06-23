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
    virtual bool empty() const override { return this->argument_ == nullptr
        && this->bindingKey_ == nullptr && this->bindingType_ == nullptr && this->destinationName_ == nullptr && this->instanceId_ == nullptr && this->sourceExchange_ == nullptr
        && this->virtualHost_ == nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string getArgument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline CreateBindingRequest& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string getBindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline CreateBindingRequest& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
    inline CreateBindingRequest& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // destinationName Field Functions 
    bool hasDestinationName() const { return this->destinationName_ != nullptr;};
    void deleteDestinationName() { this->destinationName_ = nullptr;};
    inline string getDestinationName() const { DARABONBA_PTR_GET_DEFAULT(destinationName_, "") };
    inline CreateBindingRequest& setDestinationName(string destinationName) { DARABONBA_PTR_SET_VALUE(destinationName_, destinationName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBindingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sourceExchange Field Functions 
    bool hasSourceExchange() const { return this->sourceExchange_ != nullptr;};
    void deleteSourceExchange() { this->sourceExchange_ = nullptr;};
    inline string getSourceExchange() const { DARABONBA_PTR_GET_DEFAULT(sourceExchange_, "") };
    inline CreateBindingRequest& setSourceExchange(string sourceExchange) { DARABONBA_PTR_SET_VALUE(sourceExchange_, sourceExchange) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string getVirtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateBindingRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The key-value pairs for the message header attributes. The message header attributes consist of one or more key-value pairs. The x-match attribute is required. Other attributes are custom. The x-match attribute supports the following values:
    // 
    // - all: This is the default value. All key-value pairs in the message header must match.
    // 
    // - any: At least one key-value pair in the message header must match.
    // 
    // Separate attributes with semicolons (;) and separate keys from values with colons (:). Example: x-match:all;type:report;format:pdf
    // This parameter is valid only for headers exchanges. For other types of exchanges, this parameter is ignored.
    shared_ptr<string> argument_ {};
    // The binding key.
    // 
    // - If the source exchange is not a topic exchange:
    // 
    //   - It can contain letters, digits, hyphens (-), underscores (_), periods (.), forward slashes (/), and at signs (@).
    // 
    //   - The length must be 1 to 255 characters.
    // 
    // - If the source exchange is a topic exchange:
    // 
    //   - It can contain letters, digits, hyphens (-), underscores (_), asterisks (\\*), periods (.), number signs (#), forward slashes (/), and at signs (@).
    // 
    //   - The key cannot start or end with a period (.). If the key starts with a number sign (#) or an asterisk (\\*), a period (.) must immediately follow. If the key ends with a number sign (#) or an asterisk (\\*), a period (.) must immediately precede it. If a number sign (#) or an asterisk (\\*) is in the middle of the key, it must have a period (.) on both sides.
    // 
    //   - The length must be 1 to 255 characters.
    shared_ptr<string> bindingKey_ {};
    // The type of the destination object. Valid values:
    // 
    // - 0: Queue
    // 
    // - 1: Exchange
    // 
    // This parameter is required.
    shared_ptr<string> bindingType_ {};
    // The name of the binding destination. The destination must be created in the console. It must belong to the same vhost as `SourceExchange`. The `VirtualHost` parameter specifies the vhost.
    // 
    // This parameter is required.
    shared_ptr<string> destinationName_ {};
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the source exchange. This exchange must be created in the console.
    // 
    // This parameter is required.
    shared_ptr<string> sourceExchange_ {};
    // The name of the vhost. The vhost must be created in the console. Both `DestinationName` and `SourceExchange` must belong to this vhost.
    // 
    // This parameter is required.
    shared_ptr<string> virtualHost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
