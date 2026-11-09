// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMAUTHCONNECTBLACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMAUTHCONNECTBLACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteCustomAuthConnectBlackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomAuthConnectBlackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomAuthConnectBlackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteCustomAuthConnectBlackRequest() = default ;
    DeleteCustomAuthConnectBlackRequest(const DeleteCustomAuthConnectBlackRequest &) = default ;
    DeleteCustomAuthConnectBlackRequest(DeleteCustomAuthConnectBlackRequest &&) = default ;
    DeleteCustomAuthConnectBlackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomAuthConnectBlackRequest() = default ;
    DeleteCustomAuthConnectBlackRequest& operator=(const DeleteCustomAuthConnectBlackRequest &) = default ;
    DeleteCustomAuthConnectBlackRequest& operator=(DeleteCustomAuthConnectBlackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->instanceId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DeleteCustomAuthConnectBlackRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCustomAuthConnectBlackRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The client ID of the device.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The ID of the MSMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
