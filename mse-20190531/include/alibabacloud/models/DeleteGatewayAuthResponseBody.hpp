// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteGatewayAuthResponseBody() = default ;
    DeleteGatewayAuthResponseBody(const DeleteGatewayAuthResponseBody &) = default ;
    DeleteGatewayAuthResponseBody(DeleteGatewayAuthResponseBody &&) = default ;
    DeleteGatewayAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayAuthResponseBody() = default ;
    DeleteGatewayAuthResponseBody& operator=(const DeleteGatewayAuthResponseBody &) = default ;
    DeleteGatewayAuthResponseBody& operator=(DeleteGatewayAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Jwks, jwks_);
        DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RedirectUrl, redirectUrl_);
        DARABONBA_PTR_TO_JSON(ScopesList, scopesList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
        DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
        DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
        DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
        DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RedirectUrl, redirectUrl_);
        DARABONBA_PTR_FROM_JSON(ScopesList, scopesList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
        DARABONBA_PTR_FROM_JSON(TokenNamePrefix, tokenNamePrefix_);
        DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
        DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->cookieDomain_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isWhite_ == nullptr && this->issuer_ == nullptr && this->jwks_ == nullptr
        && this->loginUrl_ == nullptr && this->name_ == nullptr && this->redirectUrl_ == nullptr && this->scopesList_ == nullptr && this->status_ == nullptr
        && this->tokenName_ == nullptr && this->tokenNamePrefix_ == nullptr && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr && this->type_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Data& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline Data& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      // cookieDomain Field Functions 
      bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
      void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
      inline string getCookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
      inline Data& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isWhite Field Functions 
      bool hasIsWhite() const { return this->isWhite_ != nullptr;};
      void deleteIsWhite() { this->isWhite_ = nullptr;};
      inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
      inline Data& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Data& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // jwks Field Functions 
      bool hasJwks() const { return this->jwks_ != nullptr;};
      void deleteJwks() { this->jwks_ = nullptr;};
      inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
      inline Data& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


      // loginUrl Field Functions 
      bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
      void deleteLoginUrl() { this->loginUrl_ = nullptr;};
      inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
      inline Data& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // redirectUrl Field Functions 
      bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
      void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
      inline string getRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
      inline Data& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


      // scopesList Field Functions 
      bool hasScopesList() const { return this->scopesList_ != nullptr;};
      void deleteScopesList() { this->scopesList_ = nullptr;};
      inline const vector<string> & getScopesList() const { DARABONBA_PTR_GET_CONST(scopesList_, vector<string>) };
      inline vector<string> getScopesList() { DARABONBA_PTR_GET(scopesList_, vector<string>) };
      inline Data& setScopesList(const vector<string> & scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };
      inline Data& setScopesList(vector<string> && scopesList) { DARABONBA_PTR_SET_RVALUE(scopesList_, scopesList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline Data& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tokenName Field Functions 
      bool hasTokenName() const { return this->tokenName_ != nullptr;};
      void deleteTokenName() { this->tokenName_ = nullptr;};
      inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
      inline Data& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


      // tokenNamePrefix Field Functions 
      bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
      void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
      inline string getTokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
      inline Data& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


      // tokenPass Field Functions 
      bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
      void deleteTokenPass() { this->tokenPass_ = nullptr;};
      inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
      inline Data& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


      // tokenPosition Field Functions 
      bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
      void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
      inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
      inline Data& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The application ID registered for the service. This parameter is used for OIDC or IDaaS.
      shared_ptr<string> clientId_ {};
      // The application secret registered for the service. This parameter is used for OIDC or IDaaS.
      shared_ptr<string> clientSecret_ {};
      // The domain name of the cookie. After authentication, the cookie is sent to the specified domain name to maintain the logon status. This parameter is used for OIDC or IDaaS.
      shared_ptr<string> cookieDomain_ {};
      // The gateway ID.
      shared_ptr<int64_t> gatewayId_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The update time.
      shared_ptr<string> gmtModified_ {};
      // The authentication ID.
      shared_ptr<int64_t> id_ {};
      // The authorization blacklist and whitelist mode. Valid values:
      // - true: whitelist mode. Hosts and paths in the whitelist can be accessed without verification, while all other hosts and paths require verification.
      // - false: blacklist mode. Hosts and paths in the blacklist require verification, while all other hosts and paths can be accessed directly.
      shared_ptr<bool> isWhite_ {};
      // The issuer used when the authentication type is JWT or OIDC:
      // - JWT: the iss (issuer) claim of the JWT, which represents the issuer.
      // - OIDC: the iss (issuer) claim of the OIDC, which represents the issuer.
      shared_ptr<string> issuer_ {};
      // The JWT public key in JSON format.
      shared_ptr<string> jwks_ {};
      // The URL of the user logon page for the IDaaS instance. This parameter is used for IDaaS.
      shared_ptr<string> loginUrl_ {};
      // The authentication name.
      shared_ptr<string> name_ {};
      // The redirect URL after successful authorization. This parameter is used for OIDC or IDaaS and must be consistent with the redirect URL configured in OIDC or IDaaS.
      shared_ptr<string> redirectUrl_ {};
      // The OIDC scopes. This parameter is used for OIDC.
      shared_ptr<vector<string>> scopesList_ {};
      // The enabling status. Valid values:
      // - true: enabled.
      // - false: disabled.
      shared_ptr<bool> status_ {};
      // The name of the token parameter to be verified. By default, the token is prefixed with Bearer and placed in the Authorization header. Example: `Authorization: Bearer token`.
      shared_ptr<string> tokenName_ {};
      // The prefix of the JWT token.
      shared_ptr<string> tokenNamePrefix_ {};
      // Specifies whether to pass through the token.
      shared_ptr<bool> tokenPass_ {};
      // The position of the JWT token. Valid values:
      // - HEADER: transmitted through the header.
      // The token parameter to be verified. By default, the token is prefixed with Bearer and placed in the Authorization header. Example: `Authorization: Bearer token`.
      shared_ptr<string> tokenPosition_ {};
      // The authentication type. Valid values:
      // - JWT
      // - OIDC
      // - IDaaS
      // - ExternalAuthZ: custom authentication service.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeleteGatewayAuthResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteGatewayAuthResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteGatewayAuthResponseBody::Data) };
    inline DeleteGatewayAuthResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteGatewayAuthResponseBody::Data) };
    inline DeleteGatewayAuthResponseBody& setData(const DeleteGatewayAuthResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteGatewayAuthResponseBody& setData(DeleteGatewayAuthResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteGatewayAuthResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteGatewayAuthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteGatewayAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteGatewayAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code returned in synchronization with the Success parameter. When Success is true, the value is 200.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<DeleteGatewayAuthResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
