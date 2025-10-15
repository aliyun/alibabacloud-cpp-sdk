// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILOIDCCONFIGAUTHNPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILOIDCCONFIGAUTHNPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam(const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam(GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnMethod_ == nullptr
        && return this->clientId_ == nullptr && return this->clientSecret_ == nullptr; };
    // authnMethod Field Functions 
    bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
    void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
    inline string authnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


  protected:
    // OIDC/OAuth2 authentication method.
    std::shared_ptr<string> authnMethod_ = nullptr;
    // The client ID of the device whose access credential you want to query.
    std::shared_ptr<string> clientId_ = nullptr;
    // The application secret registered with the OIDC authentication service.
    std::shared_ptr<string> clientSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
