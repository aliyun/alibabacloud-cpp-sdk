// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DeleteExchangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExchangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExchangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    DeleteExchangeRequest() = default ;
    DeleteExchangeRequest(const DeleteExchangeRequest &) = default ;
    DeleteExchangeRequest(DeleteExchangeRequest &&) = default ;
    DeleteExchangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExchangeRequest() = default ;
    DeleteExchangeRequest& operator=(const DeleteExchangeRequest &) = default ;
    DeleteExchangeRequest& operator=(DeleteExchangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangeName_ == nullptr
        && return this->instanceId_ == nullptr && return this->virtualHost_ == nullptr; };
    // exchangeName Field Functions 
    bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
    void deleteExchangeName() { this->exchangeName_ = nullptr;};
    inline string exchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
    inline DeleteExchangeRequest& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteExchangeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline DeleteExchangeRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The name of the exchange that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> exchangeName_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance whose exchange you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The vhost to which the exchange that you want to delete belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
