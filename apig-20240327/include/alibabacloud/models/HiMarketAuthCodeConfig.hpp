// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETAUTHCODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETAUTHCODECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketAuthCodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketAuthCodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(jwkSetUri, jwkSetUri_);
      DARABONBA_PTR_TO_JSON(redirectUri, redirectUri_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(tokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_TO_JSON(userInfoEndpoint, userInfoEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketAuthCodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(jwkSetUri, jwkSetUri_);
      DARABONBA_PTR_FROM_JSON(redirectUri, redirectUri_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(tokenEndpoint, tokenEndpoint_);
      DARABONBA_PTR_FROM_JSON(userInfoEndpoint, userInfoEndpoint_);
    };
    HiMarketAuthCodeConfig() = default ;
    HiMarketAuthCodeConfig(const HiMarketAuthCodeConfig &) = default ;
    HiMarketAuthCodeConfig(HiMarketAuthCodeConfig &&) = default ;
    HiMarketAuthCodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketAuthCodeConfig() = default ;
    HiMarketAuthCodeConfig& operator=(const HiMarketAuthCodeConfig &) = default ;
    HiMarketAuthCodeConfig& operator=(HiMarketAuthCodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->issuer_ == nullptr && this->jwkSetUri_ == nullptr && this->redirectUri_ == nullptr
        && this->scopes_ == nullptr && this->tokenEndpoint_ == nullptr && this->userInfoEndpoint_ == nullptr; };
    // authorizationEndpoint Field Functions 
    bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
    void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
    inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
    inline HiMarketAuthCodeConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline HiMarketAuthCodeConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline HiMarketAuthCodeConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline HiMarketAuthCodeConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwkSetUri Field Functions 
    bool hasJwkSetUri() const { return this->jwkSetUri_ != nullptr;};
    void deleteJwkSetUri() { this->jwkSetUri_ = nullptr;};
    inline string getJwkSetUri() const { DARABONBA_PTR_GET_DEFAULT(jwkSetUri_, "") };
    inline HiMarketAuthCodeConfig& setJwkSetUri(string jwkSetUri) { DARABONBA_PTR_SET_VALUE(jwkSetUri_, jwkSetUri) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline HiMarketAuthCodeConfig& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline string getScopes() const { DARABONBA_PTR_GET_DEFAULT(scopes_, "") };
    inline HiMarketAuthCodeConfig& setScopes(string scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline HiMarketAuthCodeConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


    // userInfoEndpoint Field Functions 
    bool hasUserInfoEndpoint() const { return this->userInfoEndpoint_ != nullptr;};
    void deleteUserInfoEndpoint() { this->userInfoEndpoint_ = nullptr;};
    inline string getUserInfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userInfoEndpoint_, "") };
    inline HiMarketAuthCodeConfig& setUserInfoEndpoint(string userInfoEndpoint) { DARABONBA_PTR_SET_VALUE(userInfoEndpoint_, userInfoEndpoint) };


  protected:
    // The URL of the identity provider\\"s authorization endpoint. Your application redirects users to this URL to sign in and grant consent.
    shared_ptr<string> authorizationEndpoint_ {};
    // The unique identifier for your application. The identity provider assigns this ID when you register your application.
    shared_ptr<string> clientId_ {};
    // The secret key for your application. This secret authenticates your application with the identity provider.
    shared_ptr<string> clientSecret_ {};
    // The URL of the identity provider that issues the tokens. This URL uniquely identifies the provider.
    shared_ptr<string> issuer_ {};
    // The URL of the identity provider\\"s JSON Web Key Set (JWKS) document. This document contains the public signing keys for token validation.
    shared_ptr<string> jwkSetUri_ {};
    // The URL where the identity provider redirects the user after authorizing your application. This URL must be registered in your application settings with the identity provider.
    shared_ptr<string> redirectUri_ {};
    // A space-separated list of requested permissions. For example: `openid profile`.
    shared_ptr<string> scopes_ {};
    // The URL of the identity provider\\"s token endpoint. Your application uses this endpoint to exchange an authorization code for an access token.
    shared_ptr<string> tokenEndpoint_ {};
    // The URL of the identity provider\\"s user info endpoint. Your application can use this endpoint to retrieve the authenticated user\\"s profile information.
    shared_ptr<string> userInfoEndpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
