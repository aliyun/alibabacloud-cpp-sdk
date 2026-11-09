// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMAUTHIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMAUTHIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class AddCustomAuthIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomAuthIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
      DARABONBA_PTR_TO_JSON(SignMode, signMode_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomAuthIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
      DARABONBA_PTR_FROM_JSON(SignMode, signMode_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    AddCustomAuthIdentityRequest() = default ;
    AddCustomAuthIdentityRequest(const AddCustomAuthIdentityRequest &) = default ;
    AddCustomAuthIdentityRequest(AddCustomAuthIdentityRequest &&) = default ;
    AddCustomAuthIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomAuthIdentityRequest() = default ;
    AddCustomAuthIdentityRequest& operator=(const AddCustomAuthIdentityRequest &) = default ;
    AddCustomAuthIdentityRequest& operator=(AddCustomAuthIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->identityType_ == nullptr && this->instanceId_ == nullptr && this->secret_ == nullptr && this->signMode_ == nullptr && this->username_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline AddCustomAuthIdentityRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline AddCustomAuthIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddCustomAuthIdentityRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline AddCustomAuthIdentityRequest& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // signMode Field Functions 
    bool hasSignMode() const { return this->signMode_ != nullptr;};
    void deleteSignMode() { this->signMode_ = nullptr;};
    inline string getSignMode() const { DARABONBA_PTR_GET_DEFAULT(signMode_, "") };
    inline AddCustomAuthIdentityRequest& setSignMode(string signMode) { DARABONBA_PTR_SET_VALUE(signMode_, signMode) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline AddCustomAuthIdentityRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The client ID of the device. Specify this parameter when the identity type is CLIENT.
    shared_ptr<string> clientId_ {};
    // The identity type.
    // 
    // - USER: Username only.
    // 
    // - CLIENT: Specific to a client.
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The secret.
    // 
    // This parameter is required.
    shared_ptr<string> secret_ {};
    // The signature verification method. Valid values:
    // - ORIGIN: Original value comparison. The password is compared with the secret.
    // - SIGNED: Signature verification. An HmacSHA1 signature is generated for the clientId by using the secret, and then the signature is compared with the password.
    // 
    // This parameter is required.
    shared_ptr<string> signMode_ {};
    // The username.
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
