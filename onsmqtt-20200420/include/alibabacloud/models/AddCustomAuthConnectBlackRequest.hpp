// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMAUTHCONNECTBLACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMAUTHCONNECTBLACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class AddCustomAuthConnectBlackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomAuthConnectBlackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomAuthConnectBlackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddCustomAuthConnectBlackRequest() = default ;
    AddCustomAuthConnectBlackRequest(const AddCustomAuthConnectBlackRequest &) = default ;
    AddCustomAuthConnectBlackRequest(AddCustomAuthConnectBlackRequest &&) = default ;
    AddCustomAuthConnectBlackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomAuthConnectBlackRequest() = default ;
    AddCustomAuthConnectBlackRequest& operator=(const AddCustomAuthConnectBlackRequest &) = default ;
    AddCustomAuthConnectBlackRequest& operator=(AddCustomAuthConnectBlackRequest &&) = default ;
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
    inline AddCustomAuthConnectBlackRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddCustomAuthConnectBlackRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The client ID of the device to be blocked from connecting.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The ID of the Message Queue for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
