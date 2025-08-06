// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIGAUTHNPARAM_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIGAUTHNPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequestOidcConfigAuthnParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequestOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequestOidcConfigAuthnParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
    };
    UpdateIdentityProviderRequestOidcConfigAuthnParam() = default ;
    UpdateIdentityProviderRequestOidcConfigAuthnParam(const UpdateIdentityProviderRequestOidcConfigAuthnParam &) = default ;
    UpdateIdentityProviderRequestOidcConfigAuthnParam(UpdateIdentityProviderRequestOidcConfigAuthnParam &&) = default ;
    UpdateIdentityProviderRequestOidcConfigAuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequestOidcConfigAuthnParam() = default ;
    UpdateIdentityProviderRequestOidcConfigAuthnParam& operator=(const UpdateIdentityProviderRequestOidcConfigAuthnParam &) = default ;
    UpdateIdentityProviderRequestOidcConfigAuthnParam& operator=(UpdateIdentityProviderRequestOidcConfigAuthnParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authnMethod_ != nullptr
        && this->clientSecret_ != nullptr; };
    // authnMethod Field Functions 
    bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
    void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
    inline string authnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
    inline UpdateIdentityProviderRequestOidcConfigAuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline UpdateIdentityProviderRequestOidcConfigAuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


  protected:
    // OIDC/oAuth2 认证方法。
    std::shared_ptr<string> authnMethod_ = nullptr;
    // OIDC/oAuth2 客户端密钥。
    std::shared_ptr<string> clientSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
