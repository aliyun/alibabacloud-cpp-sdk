// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYAUTHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYAUTHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayAuthShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayAuthShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_TO_JSON(AuthResourceList, authResourceListShrink_);
      DARABONBA_PTR_TO_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_TO_JSON(ExternalAuthZJSON, externalAuthZJSONShrink_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Jwks, jwks_);
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_TO_JSON(ScopesList, scopesListShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Sub, sub_);
      DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
      DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayAuthShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_FROM_JSON(AuthResourceList, authResourceListShrink_);
      DARABONBA_PTR_FROM_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_FROM_JSON(ExternalAuthZJSON, externalAuthZJSONShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_FROM_JSON(ScopesList, scopesListShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Sub, sub_);
      DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
      DARABONBA_PTR_FROM_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGatewayAuthShrinkRequest() = default ;
    AddGatewayAuthShrinkRequest(const AddGatewayAuthShrinkRequest &) = default ;
    AddGatewayAuthShrinkRequest(AddGatewayAuthShrinkRequest &&) = default ;
    AddGatewayAuthShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayAuthShrinkRequest() = default ;
    AddGatewayAuthShrinkRequest& operator=(const AddGatewayAuthShrinkRequest &) = default ;
    AddGatewayAuthShrinkRequest& operator=(AddGatewayAuthShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authResourceConfig_ == nullptr && this->authResourceListShrink_ == nullptr && this->authResourceMode_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr
        && this->cookieDomain_ == nullptr && this->externalAuthZJSONShrink_ == nullptr && this->gatewayUniqueId_ == nullptr && this->isWhite_ == nullptr && this->issuer_ == nullptr
        && this->jwks_ == nullptr && this->loginUrl_ == nullptr && this->name_ == nullptr && this->redirectUrl_ == nullptr && this->scopesListShrink_ == nullptr
        && this->status_ == nullptr && this->sub_ == nullptr && this->tokenName_ == nullptr && this->tokenNamePrefix_ == nullptr && this->tokenPass_ == nullptr
        && this->tokenPosition_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayAuthShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authResourceConfig Field Functions 
    bool hasAuthResourceConfig() const { return this->authResourceConfig_ != nullptr;};
    void deleteAuthResourceConfig() { this->authResourceConfig_ = nullptr;};
    inline string getAuthResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(authResourceConfig_, "") };
    inline AddGatewayAuthShrinkRequest& setAuthResourceConfig(string authResourceConfig) { DARABONBA_PTR_SET_VALUE(authResourceConfig_, authResourceConfig) };


    // authResourceListShrink Field Functions 
    bool hasAuthResourceListShrink() const { return this->authResourceListShrink_ != nullptr;};
    void deleteAuthResourceListShrink() { this->authResourceListShrink_ = nullptr;};
    inline string getAuthResourceListShrink() const { DARABONBA_PTR_GET_DEFAULT(authResourceListShrink_, "") };
    inline AddGatewayAuthShrinkRequest& setAuthResourceListShrink(string authResourceListShrink) { DARABONBA_PTR_SET_VALUE(authResourceListShrink_, authResourceListShrink) };


    // authResourceMode Field Functions 
    bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
    void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
    inline int32_t getAuthResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
    inline AddGatewayAuthShrinkRequest& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline AddGatewayAuthShrinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline AddGatewayAuthShrinkRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cookieDomain Field Functions 
    bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
    void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
    inline string getCookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
    inline AddGatewayAuthShrinkRequest& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


    // externalAuthZJSONShrink Field Functions 
    bool hasExternalAuthZJSONShrink() const { return this->externalAuthZJSONShrink_ != nullptr;};
    void deleteExternalAuthZJSONShrink() { this->externalAuthZJSONShrink_ = nullptr;};
    inline string getExternalAuthZJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(externalAuthZJSONShrink_, "") };
    inline AddGatewayAuthShrinkRequest& setExternalAuthZJSONShrink(string externalAuthZJSONShrink) { DARABONBA_PTR_SET_VALUE(externalAuthZJSONShrink_, externalAuthZJSONShrink) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayAuthShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline AddGatewayAuthShrinkRequest& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline AddGatewayAuthShrinkRequest& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline AddGatewayAuthShrinkRequest& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline AddGatewayAuthShrinkRequest& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayAuthShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // redirectUrl Field Functions 
    bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
    void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
    inline string getRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
    inline AddGatewayAuthShrinkRequest& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


    // scopesListShrink Field Functions 
    bool hasScopesListShrink() const { return this->scopesListShrink_ != nullptr;};
    void deleteScopesListShrink() { this->scopesListShrink_ = nullptr;};
    inline string getScopesListShrink() const { DARABONBA_PTR_GET_DEFAULT(scopesListShrink_, "") };
    inline AddGatewayAuthShrinkRequest& setScopesListShrink(string scopesListShrink) { DARABONBA_PTR_SET_VALUE(scopesListShrink_, scopesListShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline AddGatewayAuthShrinkRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline AddGatewayAuthShrinkRequest& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline AddGatewayAuthShrinkRequest& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenNamePrefix Field Functions 
    bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
    void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
    inline string getTokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
    inline AddGatewayAuthShrinkRequest& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline AddGatewayAuthShrinkRequest& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline AddGatewayAuthShrinkRequest& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewayAuthShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the returned result. Valid values:
    // - zh: Chinese. This is the default value.
    // - en: English.
    shared_ptr<string> acceptLanguage_ {};
    // The YAML configuration for the complex mode.
    shared_ptr<string> authResourceConfig_ {};
    // The list of authorization rules for authentication. Multiple rule conditions use the OR operator, and multiple matching items within a rule condition use the AND operator.
    shared_ptr<string> authResourceListShrink_ {};
    // The authorization resource mode. Valid values:
    // - 0: simple mode.
    // - 1: complex mode.
    shared_ptr<int32_t> authResourceMode_ {};
    // The application ID registered in the service. This parameter is used for OIDC and IDaaS.
    shared_ptr<string> clientId_ {};
    // The application secret registered in the service. This parameter is used for OIDC and IDaaS.
    shared_ptr<string> clientSecret_ {};
    // The domain name of the cookie. After authentication, the cookie is sent to the specified domain name to maintain the logon state.
    // 
    // For example, if you set the value to `Cookie-domain=a.example.com`, the cookie is sent to the `a.example.com` domain name. If you set the value to `Cookie-domain=.example.com`, the cookie is sent to all subdomains of `example.com`.
    shared_ptr<string> cookieDomain_ {};
    // The custom authentication information.
    shared_ptr<string> externalAuthZJSONShrink_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The authorization blacklist and whitelist mode. Valid values:
    // - true: whitelist mode. Hosts and paths in the list can be accessed without verification, while all others require verification.
    // - false: blacklist mode. Hosts and paths in the list require verification, while all others can be accessed directly.
    shared_ptr<bool> isWhite_ {};
    // Used when the authentication type is JWT or OIDC:
    // - JWT: specifies the `iss` (issuer) claim of the JWT.
    // - OIDC: specifies the `iss` (issuer) claim of the OIDC token.
    shared_ptr<string> issuer_ {};
    // The JWT public key. JSON format is supported.
    shared_ptr<string> jwks_ {};
    // The URL of the user logon page for the IDaaS instance. This parameter is used for IDaaS.
    shared_ptr<string> loginUrl_ {};
    // The name of the authentication.
    shared_ptr<string> name_ {};
    // The redirect URL after successful authorization. This parameter is used for OIDC and IDaaS. The value must be the same as the redirect URL configured in OIDC or IDaaS.
    shared_ptr<string> redirectUrl_ {};
    // The OIDC authorization scopes. This parameter is used for OIDC.
    shared_ptr<string> scopesListShrink_ {};
    // An unavailable parameter. You do not need to specify this parameter. By default, authentication is disabled after it is created.
    shared_ptr<bool> status_ {};
    // Used when the authentication type is JWT. Specifies the `sub` (subject) claim of the JWT. Make sure that the value of the `sub` field in the JWT payload is the same as the value configured here. If this parameter is not specified or is empty, the default value is the same as the value of the Issuer parameter.
    shared_ptr<string> sub_ {};
    // The location where the JWT token is stored.
    // 
    // By default, the token to be verified is placed in the Authorization header with the Bearer prefix, such as `Authorization: Bearer token`.
    shared_ptr<string> tokenName_ {};
    // The prefix of the JWT token.
    // 
    // By default, the token to be verified is placed in the Authorization header with the Bearer prefix, such as `Authorization: Bearer token`.
    shared_ptr<string> tokenNamePrefix_ {};
    // Specifies whether to pass through the token.
    shared_ptr<bool> tokenPass_ {};
    // The position of the JWT token. Valid values:
    // - HEADER: transmitted in the HTTP header.
    // 
    // By default, the token to be verified is placed in the Authorization header with the Bearer prefix, such as Authorization: Bearer token.
    shared_ptr<string> tokenPosition_ {};
    // The authentication type. Valid values:
    // - JWT
    // - OIDC
    // - IDaaS
    // - ExternalAuthZ (custom authentication service)
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
