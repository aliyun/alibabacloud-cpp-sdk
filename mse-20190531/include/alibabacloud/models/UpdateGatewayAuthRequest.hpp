// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHREQUEST_HPP_
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
  class UpdateGatewayAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_TO_JSON(AuthResourceList, authResourceList_);
      DARABONBA_PTR_TO_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_TO_JSON(DeleteResourceIdList, deleteResourceIdList_);
      DARABONBA_PTR_TO_JSON(ExternalAuthZJSON, externalAuthZJSON_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
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
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_FROM_JSON(AuthResourceList, authResourceList_);
      DARABONBA_PTR_FROM_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_FROM_JSON(DeleteResourceIdList, deleteResourceIdList_);
      DARABONBA_PTR_FROM_JSON(ExternalAuthZJSON, externalAuthZJSON_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
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
    UpdateGatewayAuthRequest() = default ;
    UpdateGatewayAuthRequest(const UpdateGatewayAuthRequest &) = default ;
    UpdateGatewayAuthRequest(UpdateGatewayAuthRequest &&) = default ;
    UpdateGatewayAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthRequest() = default ;
    UpdateGatewayAuthRequest& operator=(const UpdateGatewayAuthRequest &) = default ;
    UpdateGatewayAuthRequest& operator=(UpdateGatewayAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExternalAuthZJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalAuthZJSON& obj) { 
        DARABONBA_PTR_TO_JSON(AllowRequestHeaders, allowRequestHeaders_);
        DARABONBA_PTR_TO_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
        DARABONBA_PTR_TO_JSON(BodyMaxBytes, bodyMaxBytes_);
        DARABONBA_PTR_TO_JSON(IsRestrict, isRestrict_);
        DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(TokenKey, tokenKey_);
        DARABONBA_PTR_TO_JSON(WithRematchRoute, withRematchRoute_);
        DARABONBA_PTR_TO_JSON(WithRequestBody, withRequestBody_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalAuthZJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowRequestHeaders, allowRequestHeaders_);
        DARABONBA_PTR_FROM_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
        DARABONBA_PTR_FROM_JSON(BodyMaxBytes, bodyMaxBytes_);
        DARABONBA_PTR_FROM_JSON(IsRestrict, isRestrict_);
        DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(TokenKey, tokenKey_);
        DARABONBA_PTR_FROM_JSON(WithRematchRoute, withRematchRoute_);
        DARABONBA_PTR_FROM_JSON(WithRequestBody, withRequestBody_);
      };
      ExternalAuthZJSON() = default ;
      ExternalAuthZJSON(const ExternalAuthZJSON &) = default ;
      ExternalAuthZJSON(ExternalAuthZJSON &&) = default ;
      ExternalAuthZJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalAuthZJSON() = default ;
      ExternalAuthZJSON& operator=(const ExternalAuthZJSON &) = default ;
      ExternalAuthZJSON& operator=(ExternalAuthZJSON &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowRequestHeaders_ == nullptr
        && this->allowUpstreamHeaders_ == nullptr && this->bodyMaxBytes_ == nullptr && this->isRestrict_ == nullptr && this->prefixPath_ == nullptr && this->serviceId_ == nullptr
        && this->timeout_ == nullptr && this->tokenKey_ == nullptr && this->withRematchRoute_ == nullptr && this->withRequestBody_ == nullptr; };
      // allowRequestHeaders Field Functions 
      bool hasAllowRequestHeaders() const { return this->allowRequestHeaders_ != nullptr;};
      void deleteAllowRequestHeaders() { this->allowRequestHeaders_ = nullptr;};
      inline const vector<string> & getAllowRequestHeaders() const { DARABONBA_PTR_GET_CONST(allowRequestHeaders_, vector<string>) };
      inline vector<string> getAllowRequestHeaders() { DARABONBA_PTR_GET(allowRequestHeaders_, vector<string>) };
      inline ExternalAuthZJSON& setAllowRequestHeaders(const vector<string> & allowRequestHeaders) { DARABONBA_PTR_SET_VALUE(allowRequestHeaders_, allowRequestHeaders) };
      inline ExternalAuthZJSON& setAllowRequestHeaders(vector<string> && allowRequestHeaders) { DARABONBA_PTR_SET_RVALUE(allowRequestHeaders_, allowRequestHeaders) };


      // allowUpstreamHeaders Field Functions 
      bool hasAllowUpstreamHeaders() const { return this->allowUpstreamHeaders_ != nullptr;};
      void deleteAllowUpstreamHeaders() { this->allowUpstreamHeaders_ = nullptr;};
      inline const vector<string> & getAllowUpstreamHeaders() const { DARABONBA_PTR_GET_CONST(allowUpstreamHeaders_, vector<string>) };
      inline vector<string> getAllowUpstreamHeaders() { DARABONBA_PTR_GET(allowUpstreamHeaders_, vector<string>) };
      inline ExternalAuthZJSON& setAllowUpstreamHeaders(const vector<string> & allowUpstreamHeaders) { DARABONBA_PTR_SET_VALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };
      inline ExternalAuthZJSON& setAllowUpstreamHeaders(vector<string> && allowUpstreamHeaders) { DARABONBA_PTR_SET_RVALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };


      // bodyMaxBytes Field Functions 
      bool hasBodyMaxBytes() const { return this->bodyMaxBytes_ != nullptr;};
      void deleteBodyMaxBytes() { this->bodyMaxBytes_ = nullptr;};
      inline int32_t getBodyMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(bodyMaxBytes_, 0) };
      inline ExternalAuthZJSON& setBodyMaxBytes(int32_t bodyMaxBytes) { DARABONBA_PTR_SET_VALUE(bodyMaxBytes_, bodyMaxBytes) };


      // isRestrict Field Functions 
      bool hasIsRestrict() const { return this->isRestrict_ != nullptr;};
      void deleteIsRestrict() { this->isRestrict_ = nullptr;};
      inline bool getIsRestrict() const { DARABONBA_PTR_GET_DEFAULT(isRestrict_, false) };
      inline ExternalAuthZJSON& setIsRestrict(bool isRestrict) { DARABONBA_PTR_SET_VALUE(isRestrict_, isRestrict) };


      // prefixPath Field Functions 
      bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
      void deletePrefixPath() { this->prefixPath_ = nullptr;};
      inline string getPrefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
      inline ExternalAuthZJSON& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
      inline ExternalAuthZJSON& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline ExternalAuthZJSON& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // tokenKey Field Functions 
      bool hasTokenKey() const { return this->tokenKey_ != nullptr;};
      void deleteTokenKey() { this->tokenKey_ = nullptr;};
      inline string getTokenKey() const { DARABONBA_PTR_GET_DEFAULT(tokenKey_, "") };
      inline ExternalAuthZJSON& setTokenKey(string tokenKey) { DARABONBA_PTR_SET_VALUE(tokenKey_, tokenKey) };


      // withRematchRoute Field Functions 
      bool hasWithRematchRoute() const { return this->withRematchRoute_ != nullptr;};
      void deleteWithRematchRoute() { this->withRematchRoute_ = nullptr;};
      inline bool getWithRematchRoute() const { DARABONBA_PTR_GET_DEFAULT(withRematchRoute_, false) };
      inline ExternalAuthZJSON& setWithRematchRoute(bool withRematchRoute) { DARABONBA_PTR_SET_VALUE(withRematchRoute_, withRematchRoute) };


      // withRequestBody Field Functions 
      bool hasWithRequestBody() const { return this->withRequestBody_ != nullptr;};
      void deleteWithRequestBody() { this->withRequestBody_ = nullptr;};
      inline bool getWithRequestBody() const { DARABONBA_PTR_GET_DEFAULT(withRequestBody_, false) };
      inline ExternalAuthZJSON& setWithRequestBody(bool withRequestBody) { DARABONBA_PTR_SET_VALUE(withRequestBody_, withRequestBody) };


    protected:
      shared_ptr<vector<string>> allowRequestHeaders_ {};
      shared_ptr<vector<string>> allowUpstreamHeaders_ {};
      shared_ptr<int32_t> bodyMaxBytes_ {};
      shared_ptr<bool> isRestrict_ {};
      shared_ptr<string> prefixPath_ {};
      shared_ptr<int64_t> serviceId_ {};
      shared_ptr<int32_t> timeout_ {};
      shared_ptr<string> tokenKey_ {};
      shared_ptr<bool> withRematchRoute_ {};
      shared_ptr<bool> withRequestBody_ {};
    };

    class AuthResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderList_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, AuthResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderList_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      AuthResourceList() = default ;
      AuthResourceList(const AuthResourceList &) = default ;
      AuthResourceList(AuthResourceList &&) = default ;
      AuthResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthResourceList() = default ;
      AuthResourceList& operator=(const AuthResourceList &) = default ;
      AuthResourceList& operator=(AuthResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthResourceHeaderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthResourceHeaderList& obj) { 
          DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
          DARABONBA_PTR_TO_JSON(HeaderMethod, headerMethod_);
          DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
        };
        friend void from_json(const Darabonba::Json& j, AuthResourceHeaderList& obj) { 
          DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
          DARABONBA_PTR_FROM_JSON(HeaderMethod, headerMethod_);
          DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
        };
        AuthResourceHeaderList() = default ;
        AuthResourceHeaderList(const AuthResourceHeaderList &) = default ;
        AuthResourceHeaderList(AuthResourceHeaderList &&) = default ;
        AuthResourceHeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthResourceHeaderList() = default ;
        AuthResourceHeaderList& operator=(const AuthResourceHeaderList &) = default ;
        AuthResourceHeaderList& operator=(AuthResourceHeaderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->headerKey_ == nullptr
        && this->headerMethod_ == nullptr && this->headerValue_ == nullptr; };
        // headerKey Field Functions 
        bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
        void deleteHeaderKey() { this->headerKey_ = nullptr;};
        inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
        inline AuthResourceHeaderList& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


        // headerMethod Field Functions 
        bool hasHeaderMethod() const { return this->headerMethod_ != nullptr;};
        void deleteHeaderMethod() { this->headerMethod_ = nullptr;};
        inline string getHeaderMethod() const { DARABONBA_PTR_GET_DEFAULT(headerMethod_, "") };
        inline AuthResourceHeaderList& setHeaderMethod(string headerMethod) { DARABONBA_PTR_SET_VALUE(headerMethod_, headerMethod) };


        // headerValue Field Functions 
        bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
        void deleteHeaderValue() { this->headerValue_ = nullptr;};
        inline string getHeaderValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
        inline AuthResourceHeaderList& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


      protected:
        shared_ptr<string> headerKey_ {};
        shared_ptr<string> headerMethod_ {};
        shared_ptr<string> headerValue_ {};
      };

      virtual bool empty() const override { return this->authResourceHeaderList_ == nullptr
        && this->domainId_ == nullptr && this->id_ == nullptr && this->ignoreCase_ == nullptr && this->matchType_ == nullptr && this->path_ == nullptr; };
      // authResourceHeaderList Field Functions 
      bool hasAuthResourceHeaderList() const { return this->authResourceHeaderList_ != nullptr;};
      void deleteAuthResourceHeaderList() { this->authResourceHeaderList_ = nullptr;};
      inline const vector<AuthResourceList::AuthResourceHeaderList> & getAuthResourceHeaderList() const { DARABONBA_PTR_GET_CONST(authResourceHeaderList_, vector<AuthResourceList::AuthResourceHeaderList>) };
      inline vector<AuthResourceList::AuthResourceHeaderList> getAuthResourceHeaderList() { DARABONBA_PTR_GET(authResourceHeaderList_, vector<AuthResourceList::AuthResourceHeaderList>) };
      inline AuthResourceList& setAuthResourceHeaderList(const vector<AuthResourceList::AuthResourceHeaderList> & authResourceHeaderList) { DARABONBA_PTR_SET_VALUE(authResourceHeaderList_, authResourceHeaderList) };
      inline AuthResourceList& setAuthResourceHeaderList(vector<AuthResourceList::AuthResourceHeaderList> && authResourceHeaderList) { DARABONBA_PTR_SET_RVALUE(authResourceHeaderList_, authResourceHeaderList) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
      inline AuthResourceList& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AuthResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ignoreCase Field Functions 
      bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
      void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
      inline bool getIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
      inline AuthResourceList& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline AuthResourceList& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline AuthResourceList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<vector<AuthResourceList::AuthResourceHeaderList>> authResourceHeaderList_ {};
      shared_ptr<int64_t> domainId_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> ignoreCase_ {};
      shared_ptr<string> matchType_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authResourceConfig_ == nullptr && this->authResourceList_ == nullptr && this->authResourceMode_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr
        && this->cookieDomain_ == nullptr && this->deleteResourceIdList_ == nullptr && this->externalAuthZJSON_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr
        && this->isWhite_ == nullptr && this->issuer_ == nullptr && this->jwks_ == nullptr && this->loginUrl_ == nullptr && this->name_ == nullptr
        && this->redirectUrl_ == nullptr && this->scopesList_ == nullptr && this->status_ == nullptr && this->sub_ == nullptr && this->tokenName_ == nullptr
        && this->tokenNamePrefix_ == nullptr && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayAuthRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authResourceConfig Field Functions 
    bool hasAuthResourceConfig() const { return this->authResourceConfig_ != nullptr;};
    void deleteAuthResourceConfig() { this->authResourceConfig_ = nullptr;};
    inline string getAuthResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(authResourceConfig_, "") };
    inline UpdateGatewayAuthRequest& setAuthResourceConfig(string authResourceConfig) { DARABONBA_PTR_SET_VALUE(authResourceConfig_, authResourceConfig) };


    // authResourceList Field Functions 
    bool hasAuthResourceList() const { return this->authResourceList_ != nullptr;};
    void deleteAuthResourceList() { this->authResourceList_ = nullptr;};
    inline const vector<UpdateGatewayAuthRequest::AuthResourceList> & getAuthResourceList() const { DARABONBA_PTR_GET_CONST(authResourceList_, vector<UpdateGatewayAuthRequest::AuthResourceList>) };
    inline vector<UpdateGatewayAuthRequest::AuthResourceList> getAuthResourceList() { DARABONBA_PTR_GET(authResourceList_, vector<UpdateGatewayAuthRequest::AuthResourceList>) };
    inline UpdateGatewayAuthRequest& setAuthResourceList(const vector<UpdateGatewayAuthRequest::AuthResourceList> & authResourceList) { DARABONBA_PTR_SET_VALUE(authResourceList_, authResourceList) };
    inline UpdateGatewayAuthRequest& setAuthResourceList(vector<UpdateGatewayAuthRequest::AuthResourceList> && authResourceList) { DARABONBA_PTR_SET_RVALUE(authResourceList_, authResourceList) };


    // authResourceMode Field Functions 
    bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
    void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
    inline int32_t getAuthResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
    inline UpdateGatewayAuthRequest& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline UpdateGatewayAuthRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline UpdateGatewayAuthRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cookieDomain Field Functions 
    bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
    void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
    inline string getCookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
    inline UpdateGatewayAuthRequest& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


    // deleteResourceIdList Field Functions 
    bool hasDeleteResourceIdList() const { return this->deleteResourceIdList_ != nullptr;};
    void deleteDeleteResourceIdList() { this->deleteResourceIdList_ = nullptr;};
    inline const vector<int64_t> & getDeleteResourceIdList() const { DARABONBA_PTR_GET_CONST(deleteResourceIdList_, vector<int64_t>) };
    inline vector<int64_t> getDeleteResourceIdList() { DARABONBA_PTR_GET(deleteResourceIdList_, vector<int64_t>) };
    inline UpdateGatewayAuthRequest& setDeleteResourceIdList(const vector<int64_t> & deleteResourceIdList) { DARABONBA_PTR_SET_VALUE(deleteResourceIdList_, deleteResourceIdList) };
    inline UpdateGatewayAuthRequest& setDeleteResourceIdList(vector<int64_t> && deleteResourceIdList) { DARABONBA_PTR_SET_RVALUE(deleteResourceIdList_, deleteResourceIdList) };


    // externalAuthZJSON Field Functions 
    bool hasExternalAuthZJSON() const { return this->externalAuthZJSON_ != nullptr;};
    void deleteExternalAuthZJSON() { this->externalAuthZJSON_ = nullptr;};
    inline const UpdateGatewayAuthRequest::ExternalAuthZJSON & getExternalAuthZJSON() const { DARABONBA_PTR_GET_CONST(externalAuthZJSON_, UpdateGatewayAuthRequest::ExternalAuthZJSON) };
    inline UpdateGatewayAuthRequest::ExternalAuthZJSON getExternalAuthZJSON() { DARABONBA_PTR_GET(externalAuthZJSON_, UpdateGatewayAuthRequest::ExternalAuthZJSON) };
    inline UpdateGatewayAuthRequest& setExternalAuthZJSON(const UpdateGatewayAuthRequest::ExternalAuthZJSON & externalAuthZJSON) { DARABONBA_PTR_SET_VALUE(externalAuthZJSON_, externalAuthZJSON) };
    inline UpdateGatewayAuthRequest& setExternalAuthZJSON(UpdateGatewayAuthRequest::ExternalAuthZJSON && externalAuthZJSON) { DARABONBA_PTR_SET_RVALUE(externalAuthZJSON_, externalAuthZJSON) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayAuthRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayAuthRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline UpdateGatewayAuthRequest& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline UpdateGatewayAuthRequest& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline UpdateGatewayAuthRequest& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline UpdateGatewayAuthRequest& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayAuthRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // redirectUrl Field Functions 
    bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
    void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
    inline string getRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
    inline UpdateGatewayAuthRequest& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


    // scopesList Field Functions 
    bool hasScopesList() const { return this->scopesList_ != nullptr;};
    void deleteScopesList() { this->scopesList_ = nullptr;};
    inline const vector<string> & getScopesList() const { DARABONBA_PTR_GET_CONST(scopesList_, vector<string>) };
    inline vector<string> getScopesList() { DARABONBA_PTR_GET(scopesList_, vector<string>) };
    inline UpdateGatewayAuthRequest& setScopesList(const vector<string> & scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };
    inline UpdateGatewayAuthRequest& setScopesList(vector<string> && scopesList) { DARABONBA_PTR_SET_RVALUE(scopesList_, scopesList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UpdateGatewayAuthRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline UpdateGatewayAuthRequest& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline UpdateGatewayAuthRequest& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenNamePrefix Field Functions 
    bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
    void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
    inline string getTokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
    inline UpdateGatewayAuthRequest& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline UpdateGatewayAuthRequest& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline UpdateGatewayAuthRequest& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateGatewayAuthRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> authResourceConfig_ {};
    shared_ptr<vector<UpdateGatewayAuthRequest::AuthResourceList>> authResourceList_ {};
    shared_ptr<int32_t> authResourceMode_ {};
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientSecret_ {};
    shared_ptr<string> cookieDomain_ {};
    shared_ptr<vector<int64_t>> deleteResourceIdList_ {};
    shared_ptr<UpdateGatewayAuthRequest::ExternalAuthZJSON> externalAuthZJSON_ {};
    shared_ptr<string> gatewayUniqueId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isWhite_ {};
    shared_ptr<string> issuer_ {};
    shared_ptr<string> jwks_ {};
    shared_ptr<string> loginUrl_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> redirectUrl_ {};
    shared_ptr<vector<string>> scopesList_ {};
    shared_ptr<bool> status_ {};
    shared_ptr<string> sub_ {};
    shared_ptr<string> tokenName_ {};
    shared_ptr<string> tokenNamePrefix_ {};
    shared_ptr<bool> tokenPass_ {};
    shared_ptr<string> tokenPosition_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
