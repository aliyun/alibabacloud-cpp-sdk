// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayAuthRequestAuthResourceList.hpp>
#include <alibabacloud/models/AddGatewayAuthRequestExternalAuthZJSON.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_TO_JSON(AuthResourceList, authResourceList_);
      DARABONBA_PTR_TO_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_TO_JSON(ExternalAuthZJSON, externalAuthZJSON_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Jwks, jwks_);
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_TO_JSON(ScopesList, scopesList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Sub, sub_);
      DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
      DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_FROM_JSON(AuthResourceList, authResourceList_);
      DARABONBA_PTR_FROM_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_FROM_JSON(ExternalAuthZJSON, externalAuthZJSON_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_FROM_JSON(ScopesList, scopesList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Sub, sub_);
      DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
      DARABONBA_PTR_FROM_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGatewayAuthRequest() = default ;
    AddGatewayAuthRequest(const AddGatewayAuthRequest &) = default ;
    AddGatewayAuthRequest(AddGatewayAuthRequest &&) = default ;
    AddGatewayAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayAuthRequest() = default ;
    AddGatewayAuthRequest& operator=(const AddGatewayAuthRequest &) = default ;
    AddGatewayAuthRequest& operator=(AddGatewayAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->authResourceConfig_ != nullptr && this->authResourceList_ != nullptr && this->authResourceMode_ != nullptr && this->clientId_ != nullptr && this->clientSecret_ != nullptr
        && this->cookieDomain_ != nullptr && this->externalAuthZJSON_ != nullptr && this->gatewayUniqueId_ != nullptr && this->isWhite_ != nullptr && this->issuer_ != nullptr
        && this->jwks_ != nullptr && this->loginUrl_ != nullptr && this->name_ != nullptr && this->redirectUrl_ != nullptr && this->scopesList_ != nullptr
        && this->status_ != nullptr && this->sub_ != nullptr && this->tokenName_ != nullptr && this->tokenNamePrefix_ != nullptr && this->tokenPass_ != nullptr
        && this->tokenPosition_ != nullptr && this->type_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayAuthRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authResourceConfig Field Functions 
    bool hasAuthResourceConfig() const { return this->authResourceConfig_ != nullptr;};
    void deleteAuthResourceConfig() { this->authResourceConfig_ = nullptr;};
    inline string authResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(authResourceConfig_, "") };
    inline AddGatewayAuthRequest& setAuthResourceConfig(string authResourceConfig) { DARABONBA_PTR_SET_VALUE(authResourceConfig_, authResourceConfig) };


    // authResourceList Field Functions 
    bool hasAuthResourceList() const { return this->authResourceList_ != nullptr;};
    void deleteAuthResourceList() { this->authResourceList_ = nullptr;};
    inline const vector<AddGatewayAuthRequestAuthResourceList> & authResourceList() const { DARABONBA_PTR_GET_CONST(authResourceList_, vector<AddGatewayAuthRequestAuthResourceList>) };
    inline vector<AddGatewayAuthRequestAuthResourceList> authResourceList() { DARABONBA_PTR_GET(authResourceList_, vector<AddGatewayAuthRequestAuthResourceList>) };
    inline AddGatewayAuthRequest& setAuthResourceList(const vector<AddGatewayAuthRequestAuthResourceList> & authResourceList) { DARABONBA_PTR_SET_VALUE(authResourceList_, authResourceList) };
    inline AddGatewayAuthRequest& setAuthResourceList(vector<AddGatewayAuthRequestAuthResourceList> && authResourceList) { DARABONBA_PTR_SET_RVALUE(authResourceList_, authResourceList) };


    // authResourceMode Field Functions 
    bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
    void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
    inline int32_t authResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
    inline AddGatewayAuthRequest& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline AddGatewayAuthRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline AddGatewayAuthRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cookieDomain Field Functions 
    bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
    void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
    inline string cookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
    inline AddGatewayAuthRequest& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


    // externalAuthZJSON Field Functions 
    bool hasExternalAuthZJSON() const { return this->externalAuthZJSON_ != nullptr;};
    void deleteExternalAuthZJSON() { this->externalAuthZJSON_ = nullptr;};
    inline const AddGatewayAuthRequestExternalAuthZJSON & externalAuthZJSON() const { DARABONBA_PTR_GET_CONST(externalAuthZJSON_, AddGatewayAuthRequestExternalAuthZJSON) };
    inline AddGatewayAuthRequestExternalAuthZJSON externalAuthZJSON() { DARABONBA_PTR_GET(externalAuthZJSON_, AddGatewayAuthRequestExternalAuthZJSON) };
    inline AddGatewayAuthRequest& setExternalAuthZJSON(const AddGatewayAuthRequestExternalAuthZJSON & externalAuthZJSON) { DARABONBA_PTR_SET_VALUE(externalAuthZJSON_, externalAuthZJSON) };
    inline AddGatewayAuthRequest& setExternalAuthZJSON(AddGatewayAuthRequestExternalAuthZJSON && externalAuthZJSON) { DARABONBA_PTR_SET_RVALUE(externalAuthZJSON_, externalAuthZJSON) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayAuthRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline AddGatewayAuthRequest& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline AddGatewayAuthRequest& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string jwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline AddGatewayAuthRequest& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string loginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline AddGatewayAuthRequest& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayAuthRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // redirectUrl Field Functions 
    bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
    void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
    inline string redirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
    inline AddGatewayAuthRequest& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


    // scopesList Field Functions 
    bool hasScopesList() const { return this->scopesList_ != nullptr;};
    void deleteScopesList() { this->scopesList_ = nullptr;};
    inline const vector<string> & scopesList() const { DARABONBA_PTR_GET_CONST(scopesList_, vector<string>) };
    inline vector<string> scopesList() { DARABONBA_PTR_GET(scopesList_, vector<string>) };
    inline AddGatewayAuthRequest& setScopesList(const vector<string> & scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };
    inline AddGatewayAuthRequest& setScopesList(vector<string> && scopesList) { DARABONBA_PTR_SET_RVALUE(scopesList_, scopesList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline AddGatewayAuthRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline AddGatewayAuthRequest& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string tokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline AddGatewayAuthRequest& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenNamePrefix Field Functions 
    bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
    void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
    inline string tokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
    inline AddGatewayAuthRequest& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool tokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline AddGatewayAuthRequest& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string tokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline AddGatewayAuthRequest& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewayAuthRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> authResourceConfig_ = nullptr;
    // The information about the resource to be authorized.
    std::shared_ptr<vector<AddGatewayAuthRequestAuthResourceList>> authResourceList_ = nullptr;
    std::shared_ptr<int32_t> authResourceMode_ = nullptr;
    // The application ID registered with the OIDC authentication service.
    std::shared_ptr<string> clientId_ = nullptr;
    // The application secret registered with the OIDC authentication service.
    std::shared_ptr<string> clientSecret_ = nullptr;
    // The domain name of the cookie. After the authentication is passed, the cookie is sent to the specified domain name to maintain the logon status. For example, if you set `Cookie-domain` to a.example.com, the cookie is sent to the domain name `a.example.com`. If you set `Cookie-domain` to .example.com, the cookie is sent to all subdomains of `example.com`.
    std::shared_ptr<string> cookieDomain_ = nullptr;
    // The information about the custom authentication service.
    std::shared_ptr<AddGatewayAuthRequestExternalAuthZJSON> externalAuthZJSON_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies whether to enable the whitelist feature.
    std::shared_ptr<bool> isWhite_ = nullptr;
    // The iss value of JWT claims, which indicates the issuer. You must make sure that the value of this parameter is the same as the iss value in the payload of JWT claims.
    std::shared_ptr<string> issuer_ = nullptr;
    // The JWT public key. The JSON format is supported.
    std::shared_ptr<string> jwks_ = nullptr;
    // The URL that is used to log on to the IDaaS instance.
    std::shared_ptr<string> loginUrl_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The redirect URL.
    std::shared_ptr<string> redirectUrl_ = nullptr;
    // The OIDC scope.
    std::shared_ptr<vector<string>> scopesList_ = nullptr;
    // The status.
    std::shared_ptr<bool> status_ = nullptr;
    // The sub value of JWT claims, which indicates the subject. You must make sure that the value of this parameter is the same as the sub value in the payload of JWT claims. If you do not set this parameter or leave it empty, the default value, which is the value of the Issuer parameter, is used.
    std::shared_ptr<string> sub_ = nullptr;
    // The name of the parameter that is required to verify a token. By default, a token is prefixed with Bearer and stored in the authorization header. Example: `Authorization: Bearer token`.
    std::shared_ptr<string> tokenName_ = nullptr;
    // The name prefix of the parameter that is required to verify a token. By default, a token is prefixed with Bearer and stored in the authorization header. Example: `Authorization: Bearer token`
    std::shared_ptr<string> tokenNamePrefix_ = nullptr;
    // Specifies whether to enable pass-through.
    std::shared_ptr<bool> tokenPass_ = nullptr;
    // The position of the parameter that is required to verify a token. By default, a token is prefixed with Bearer and stored in the authorization header. Example: `Authorization: Bearer token`.
    std::shared_ptr<string> tokenPosition_ = nullptr;
    // The authentication type. JSON Web Token (JWT) authentication, OpenID Connect (OIDC) authentication, Identity as a Service (IDaaS) authentication, or custom authentication are supported.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
