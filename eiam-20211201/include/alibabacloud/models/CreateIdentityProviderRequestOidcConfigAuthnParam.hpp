// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTOIDCCONFIGAUTHNPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTOIDCCONFIGAUTHNPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestOidcConfigAuthnParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
    };
    CreateIdentityProviderRequestOidcConfigAuthnParam() = default ;
    CreateIdentityProviderRequestOidcConfigAuthnParam(const CreateIdentityProviderRequestOidcConfigAuthnParam &) = default ;
    CreateIdentityProviderRequestOidcConfigAuthnParam(CreateIdentityProviderRequestOidcConfigAuthnParam &&) = default ;
    CreateIdentityProviderRequestOidcConfigAuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestOidcConfigAuthnParam() = default ;
    CreateIdentityProviderRequestOidcConfigAuthnParam& operator=(const CreateIdentityProviderRequestOidcConfigAuthnParam &) = default ;
    CreateIdentityProviderRequestOidcConfigAuthnParam& operator=(CreateIdentityProviderRequestOidcConfigAuthnParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authnMethod_ != nullptr
        && this->clientId_ != nullptr && this->clientSecret_ != nullptr; };
    // authnMethod Field Functions 
    bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
    void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
    inline string authnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
    inline CreateIdentityProviderRequestOidcConfigAuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateIdentityProviderRequestOidcConfigAuthnParam& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CreateIdentityProviderRequestOidcConfigAuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


  protected:
    // OIDC authentication method. Value range:
    // 
    // - client_secret_basic
    // 
    // - client_secret_post
    std::shared_ptr<string> authnMethod_ = nullptr;
    // The ID of the client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The  secret of the client.
    std::shared_ptr<string> clientSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
