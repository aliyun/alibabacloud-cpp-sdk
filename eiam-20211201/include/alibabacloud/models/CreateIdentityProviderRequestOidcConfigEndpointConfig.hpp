// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTOIDCCONFIGENDPOINTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTOIDCCONFIGENDPOINTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestOidcConfigEndpointConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestOidcConfigEndpointConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestOidcConfigEndpointConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
    };
    CreateIdentityProviderRequestOidcConfigEndpointConfig() = default ;
    CreateIdentityProviderRequestOidcConfigEndpointConfig(const CreateIdentityProviderRequestOidcConfigEndpointConfig &) = default ;
    CreateIdentityProviderRequestOidcConfigEndpointConfig(CreateIdentityProviderRequestOidcConfigEndpointConfig &&) = default ;
    CreateIdentityProviderRequestOidcConfigEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestOidcConfigEndpointConfig() = default ;
    CreateIdentityProviderRequestOidcConfigEndpointConfig& operator=(const CreateIdentityProviderRequestOidcConfigEndpointConfig &) = default ;
    CreateIdentityProviderRequestOidcConfigEndpointConfig& operator=(CreateIdentityProviderRequestOidcConfigEndpointConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationEndpoint_ != nullptr
        && this->issuer_ != nullptr && this->jwksUri_ != nullptr && this->tokenEndpoint_ != nullptr && this->userinfoEndpoint_ != nullptr; };
    // authorizationEndpoint Field Functions 
    bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
    void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
    inline string authorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
    inline CreateIdentityProviderRequestOidcConfigEndpointConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline CreateIdentityProviderRequestOidcConfigEndpointConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwksUri Field Functions 
    bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
    void deleteJwksUri() { this->jwksUri_ = nullptr;};
    inline string jwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
    inline CreateIdentityProviderRequestOidcConfigEndpointConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string tokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline CreateIdentityProviderRequestOidcConfigEndpointConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


    // userinfoEndpoint Field Functions 
    bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
    void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
    inline string userinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
    inline CreateIdentityProviderRequestOidcConfigEndpointConfig& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


  protected:
    // OIDC authorization endpoint.
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // OIDC issuer information.
    std::shared_ptr<string> issuer_ = nullptr;
    // OIDC jwks uri.
    std::shared_ptr<string> jwksUri_ = nullptr;
    // OIDC token endpoint.
    std::shared_ptr<string> tokenEndpoint_ = nullptr;
    // OIDC user info endpoint.
    std::shared_ptr<string> userinfoEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
