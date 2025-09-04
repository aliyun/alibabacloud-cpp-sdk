// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DeleteBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SourceExchange, sourceExchange_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SourceExchange, sourceExchange_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    DeleteBindingRequest() = default ;
    DeleteBindingRequest(const DeleteBindingRequest &) = default ;
    DeleteBindingRequest(DeleteBindingRequest &&) = default ;
    DeleteBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBindingRequest() = default ;
    DeleteBindingRequest& operator=(const DeleteBindingRequest &) = default ;
    DeleteBindingRequest& operator=(DeleteBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindingKey_ != nullptr
        && this->bindingType_ != nullptr && this->destinationName_ != nullptr && this->instanceId_ != nullptr && this->sourceExchange_ != nullptr && this->virtualHost_ != nullptr; };
    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string bindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline DeleteBindingRequest& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline string bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
    inline DeleteBindingRequest& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // destinationName Field Functions 
    bool hasDestinationName() const { return this->destinationName_ != nullptr;};
    void deleteDestinationName() { this->destinationName_ = nullptr;};
    inline string destinationName() const { DARABONBA_PTR_GET_DEFAULT(destinationName_, "") };
    inline DeleteBindingRequest& setDestinationName(string destinationName) { DARABONBA_PTR_SET_VALUE(destinationName_, destinationName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteBindingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sourceExchange Field Functions 
    bool hasSourceExchange() const { return this->sourceExchange_ != nullptr;};
    void deleteSourceExchange() { this->sourceExchange_ = nullptr;};
    inline string sourceExchange() const { DARABONBA_PTR_GET_DEFAULT(sourceExchange_, "") };
    inline DeleteBindingRequest& setSourceExchange(string sourceExchange) { DARABONBA_PTR_SET_VALUE(sourceExchange_, sourceExchange) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline DeleteBindingRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The binding key.
    std::shared_ptr<string> bindingKey_ = nullptr;
    // The type of the object that you want to unbind from the source exchange. Valid values:
    // 
    // *   **QUEUE**
    // *   **EXCHANGE**
    // 
    // This parameter is required.
    std::shared_ptr<string> bindingType_ = nullptr;
    // The name of the object that you want to unbind from the source exchange.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationName_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the source exchange.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceExchange_ = nullptr;
    // The vhost name.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
