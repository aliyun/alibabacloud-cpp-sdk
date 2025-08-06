// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIGENDPOINTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIGENDPOINTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequestOidcConfigEndpointConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequestOidcConfigEndpointConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequestOidcConfigEndpointConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
    };
    UpdateIdentityProviderRequestOidcConfigEndpointConfig() = default ;
    UpdateIdentityProviderRequestOidcConfigEndpointConfig(const UpdateIdentityProviderRequestOidcConfigEndpointConfig &) = default ;
    UpdateIdentityProviderRequestOidcConfigEndpointConfig(UpdateIdentityProviderRequestOidcConfigEndpointConfig &&) = default ;
    UpdateIdentityProviderRequestOidcConfigEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequestOidcConfigEndpointConfig() = default ;
    UpdateIdentityProviderRequestOidcConfigEndpointConfig& operator=(const UpdateIdentityProviderRequestOidcConfigEndpointConfig &) = default ;
    UpdateIdentityProviderRequestOidcConfigEndpointConfig& operator=(UpdateIdentityProviderRequestOidcConfigEndpointConfig &&) = default ;
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
    inline UpdateIdentityProviderRequestOidcConfigEndpointConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline UpdateIdentityProviderRequestOidcConfigEndpointConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwksUri Field Functions 
    bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
    void deleteJwksUri() { this->jwksUri_ = nullptr;};
    inline string jwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
    inline UpdateIdentityProviderRequestOidcConfigEndpointConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string tokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline UpdateIdentityProviderRequestOidcConfigEndpointConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


    // userinfoEndpoint Field Functions 
    bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
    void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
    inline string userinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
    inline UpdateIdentityProviderRequestOidcConfigEndpointConfig& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


  protected:
    // oAuth2 授权端点。
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // OIDC issuer信息。
    std::shared_ptr<string> issuer_ = nullptr;
    // OIDC jwks地址。
    std::shared_ptr<string> jwksUri_ = nullptr;
    // oAuth2 Token端点。
    std::shared_ptr<string> tokenEndpoint_ = nullptr;
    // OIDC 用户信息端点。
    std::shared_ptr<string> userinfoEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
