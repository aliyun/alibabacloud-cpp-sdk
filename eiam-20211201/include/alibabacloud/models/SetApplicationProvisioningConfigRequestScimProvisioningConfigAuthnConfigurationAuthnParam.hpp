// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIGAUTHNCONFIGURATIONAUTHNPARAM_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIGAUTHNCONFIGURATIONAUTHNPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
    };
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam(const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam(SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam &&) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& operator=(const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& operator=(SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->authnMethod_ == nullptr && return this->clientId_ == nullptr && return this->clientSecret_ == nullptr && return this->tokenEndpoint_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // authnMethod Field Functions 
    bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
    void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
    inline string authnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string tokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


  protected:
    // The access token. If the GrantType parameter is set to bearer_token, you can set this parameter.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The authentication mode of the SCIM protocol. Valid values:
    // 
    // *   client_secret_basic: The client secret is passed in the request header.
    // *   client_secret_post: The client secret is passed in the request body.
    std::shared_ptr<string> authnMethod_ = nullptr;
    // The client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The client secret of the application.
    std::shared_ptr<string> clientSecret_ = nullptr;
    // The token endpoint.
    std::shared_ptr<string> tokenEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
