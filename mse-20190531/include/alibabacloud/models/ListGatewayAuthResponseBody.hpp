// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHRESPONSEBODY_HPP_
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
  class ListGatewayAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayAuthResponseBody() = default ;
    ListGatewayAuthResponseBody(const ListGatewayAuthResponseBody &) = default ;
    ListGatewayAuthResponseBody(ListGatewayAuthResponseBody &&) = default ;
    ListGatewayAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthResponseBody() = default ;
    ListGatewayAuthResponseBody& operator=(const ListGatewayAuthResponseBody &) = default ;
    ListGatewayAuthResponseBody& operator=(ListGatewayAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AuthResourceMode, authResourceMode_);
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
          DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
          DARABONBA_PTR_TO_JSON(ExternalAuthZ, externalAuthZ_);
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
          DARABONBA_PTR_TO_JSON(Sub, sub_);
          DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
          DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
          DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
          DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthResourceMode, authResourceMode_);
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
          DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
          DARABONBA_PTR_FROM_JSON(ExternalAuthZ, externalAuthZ_);
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
          DARABONBA_PTR_FROM_JSON(Sub, sub_);
          DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
          DARABONBA_PTR_FROM_JSON(TokenNamePrefix, tokenNamePrefix_);
          DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
          DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExternalAuthZ : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExternalAuthZ& obj) { 
            DARABONBA_PTR_TO_JSON(AllowRequestHeaders, allowRequestHeaders_);
            DARABONBA_PTR_TO_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
            DARABONBA_PTR_TO_JSON(BodyMaxBytes, bodyMaxBytes_);
            DARABONBA_PTR_TO_JSON(IsRestrict, isRestrict_);
            DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
            DARABONBA_PTR_TO_JSON(Service, service_);
            DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            DARABONBA_PTR_TO_JSON(TokenKey, tokenKey_);
            DARABONBA_PTR_TO_JSON(WithRematchRoute, withRematchRoute_);
            DARABONBA_PTR_TO_JSON(WithRequestBody, withRequestBody_);
          };
          friend void from_json(const Darabonba::Json& j, ExternalAuthZ& obj) { 
            DARABONBA_PTR_FROM_JSON(AllowRequestHeaders, allowRequestHeaders_);
            DARABONBA_PTR_FROM_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
            DARABONBA_PTR_FROM_JSON(BodyMaxBytes, bodyMaxBytes_);
            DARABONBA_PTR_FROM_JSON(IsRestrict, isRestrict_);
            DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
            DARABONBA_PTR_FROM_JSON(Service, service_);
            DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(TokenKey, tokenKey_);
            DARABONBA_PTR_FROM_JSON(WithRematchRoute, withRematchRoute_);
            DARABONBA_PTR_FROM_JSON(WithRequestBody, withRequestBody_);
          };
          ExternalAuthZ() = default ;
          ExternalAuthZ(const ExternalAuthZ &) = default ;
          ExternalAuthZ(ExternalAuthZ &&) = default ;
          ExternalAuthZ(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExternalAuthZ() = default ;
          ExternalAuthZ& operator=(const ExternalAuthZ &) = default ;
          ExternalAuthZ& operator=(ExternalAuthZ &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Service : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Service& obj) { 
              DARABONBA_PTR_TO_JSON(GroupName, groupName_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Namespace, namespace_);
              DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            };
            friend void from_json(const Darabonba::Json& j, Service& obj) { 
              DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
              DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            };
            Service() = default ;
            Service(const Service &) = default ;
            Service(Service &&) = default ;
            Service(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Service() = default ;
            Service& operator=(const Service &) = default ;
            Service& operator=(Service &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->groupName_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->sourceType_ == nullptr; };
            // groupName Field Functions 
            bool hasGroupName() const { return this->groupName_ != nullptr;};
            void deleteGroupName() { this->groupName_ = nullptr;};
            inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
            inline Service& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Service& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // namespace Field Functions 
            bool hasNamespace() const { return this->namespace_ != nullptr;};
            void deleteNamespace() { this->namespace_ = nullptr;};
            inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
            inline Service& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


            // sourceType Field Functions 
            bool hasSourceType() const { return this->sourceType_ != nullptr;};
            void deleteSourceType() { this->sourceType_ = nullptr;};
            inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
            inline Service& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          protected:
            shared_ptr<string> groupName_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> namespace_ {};
            shared_ptr<string> sourceType_ {};
          };

          virtual bool empty() const override { return this->allowRequestHeaders_ == nullptr
        && this->allowUpstreamHeaders_ == nullptr && this->bodyMaxBytes_ == nullptr && this->isRestrict_ == nullptr && this->prefixPath_ == nullptr && this->service_ == nullptr
        && this->serviceId_ == nullptr && this->timeout_ == nullptr && this->tokenKey_ == nullptr && this->withRematchRoute_ == nullptr && this->withRequestBody_ == nullptr; };
          // allowRequestHeaders Field Functions 
          bool hasAllowRequestHeaders() const { return this->allowRequestHeaders_ != nullptr;};
          void deleteAllowRequestHeaders() { this->allowRequestHeaders_ = nullptr;};
          inline const vector<string> & getAllowRequestHeaders() const { DARABONBA_PTR_GET_CONST(allowRequestHeaders_, vector<string>) };
          inline vector<string> getAllowRequestHeaders() { DARABONBA_PTR_GET(allowRequestHeaders_, vector<string>) };
          inline ExternalAuthZ& setAllowRequestHeaders(const vector<string> & allowRequestHeaders) { DARABONBA_PTR_SET_VALUE(allowRequestHeaders_, allowRequestHeaders) };
          inline ExternalAuthZ& setAllowRequestHeaders(vector<string> && allowRequestHeaders) { DARABONBA_PTR_SET_RVALUE(allowRequestHeaders_, allowRequestHeaders) };


          // allowUpstreamHeaders Field Functions 
          bool hasAllowUpstreamHeaders() const { return this->allowUpstreamHeaders_ != nullptr;};
          void deleteAllowUpstreamHeaders() { this->allowUpstreamHeaders_ = nullptr;};
          inline const vector<string> & getAllowUpstreamHeaders() const { DARABONBA_PTR_GET_CONST(allowUpstreamHeaders_, vector<string>) };
          inline vector<string> getAllowUpstreamHeaders() { DARABONBA_PTR_GET(allowUpstreamHeaders_, vector<string>) };
          inline ExternalAuthZ& setAllowUpstreamHeaders(const vector<string> & allowUpstreamHeaders) { DARABONBA_PTR_SET_VALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };
          inline ExternalAuthZ& setAllowUpstreamHeaders(vector<string> && allowUpstreamHeaders) { DARABONBA_PTR_SET_RVALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };


          // bodyMaxBytes Field Functions 
          bool hasBodyMaxBytes() const { return this->bodyMaxBytes_ != nullptr;};
          void deleteBodyMaxBytes() { this->bodyMaxBytes_ = nullptr;};
          inline int32_t getBodyMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(bodyMaxBytes_, 0) };
          inline ExternalAuthZ& setBodyMaxBytes(int32_t bodyMaxBytes) { DARABONBA_PTR_SET_VALUE(bodyMaxBytes_, bodyMaxBytes) };


          // isRestrict Field Functions 
          bool hasIsRestrict() const { return this->isRestrict_ != nullptr;};
          void deleteIsRestrict() { this->isRestrict_ = nullptr;};
          inline bool getIsRestrict() const { DARABONBA_PTR_GET_DEFAULT(isRestrict_, false) };
          inline ExternalAuthZ& setIsRestrict(bool isRestrict) { DARABONBA_PTR_SET_VALUE(isRestrict_, isRestrict) };


          // prefixPath Field Functions 
          bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
          void deletePrefixPath() { this->prefixPath_ = nullptr;};
          inline string getPrefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
          inline ExternalAuthZ& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


          // service Field Functions 
          bool hasService() const { return this->service_ != nullptr;};
          void deleteService() { this->service_ = nullptr;};
          inline const ExternalAuthZ::Service & getService() const { DARABONBA_PTR_GET_CONST(service_, ExternalAuthZ::Service) };
          inline ExternalAuthZ::Service getService() { DARABONBA_PTR_GET(service_, ExternalAuthZ::Service) };
          inline ExternalAuthZ& setService(const ExternalAuthZ::Service & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
          inline ExternalAuthZ& setService(ExternalAuthZ::Service && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
          inline ExternalAuthZ& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline ExternalAuthZ& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // tokenKey Field Functions 
          bool hasTokenKey() const { return this->tokenKey_ != nullptr;};
          void deleteTokenKey() { this->tokenKey_ = nullptr;};
          inline string getTokenKey() const { DARABONBA_PTR_GET_DEFAULT(tokenKey_, "") };
          inline ExternalAuthZ& setTokenKey(string tokenKey) { DARABONBA_PTR_SET_VALUE(tokenKey_, tokenKey) };


          // withRematchRoute Field Functions 
          bool hasWithRematchRoute() const { return this->withRematchRoute_ != nullptr;};
          void deleteWithRematchRoute() { this->withRematchRoute_ = nullptr;};
          inline bool getWithRematchRoute() const { DARABONBA_PTR_GET_DEFAULT(withRematchRoute_, false) };
          inline ExternalAuthZ& setWithRematchRoute(bool withRematchRoute) { DARABONBA_PTR_SET_VALUE(withRematchRoute_, withRematchRoute) };


          // withRequestBody Field Functions 
          bool hasWithRequestBody() const { return this->withRequestBody_ != nullptr;};
          void deleteWithRequestBody() { this->withRequestBody_ = nullptr;};
          inline bool getWithRequestBody() const { DARABONBA_PTR_GET_DEFAULT(withRequestBody_, false) };
          inline ExternalAuthZ& setWithRequestBody(bool withRequestBody) { DARABONBA_PTR_SET_VALUE(withRequestBody_, withRequestBody) };


        protected:
          shared_ptr<vector<string>> allowRequestHeaders_ {};
          shared_ptr<vector<string>> allowUpstreamHeaders_ {};
          shared_ptr<int32_t> bodyMaxBytes_ {};
          shared_ptr<bool> isRestrict_ {};
          shared_ptr<string> prefixPath_ {};
          shared_ptr<ExternalAuthZ::Service> service_ {};
          shared_ptr<int64_t> serviceId_ {};
          shared_ptr<int32_t> timeout_ {};
          shared_ptr<string> tokenKey_ {};
          shared_ptr<bool> withRematchRoute_ {};
          shared_ptr<bool> withRequestBody_ {};
        };

        virtual bool empty() const override { return this->authResourceMode_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->cookieDomain_ == nullptr && this->externalAuthZ_ == nullptr && this->gatewayId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isWhite_ == nullptr
        && this->issuer_ == nullptr && this->jwks_ == nullptr && this->loginUrl_ == nullptr && this->name_ == nullptr && this->redirectUrl_ == nullptr
        && this->scopesList_ == nullptr && this->status_ == nullptr && this->sub_ == nullptr && this->tokenName_ == nullptr && this->tokenNamePrefix_ == nullptr
        && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr && this->type_ == nullptr; };
        // authResourceMode Field Functions 
        bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
        void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
        inline int32_t getAuthResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
        inline Result& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Result& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline Result& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


        // cookieDomain Field Functions 
        bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
        void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
        inline string getCookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
        inline Result& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


        // externalAuthZ Field Functions 
        bool hasExternalAuthZ() const { return this->externalAuthZ_ != nullptr;};
        void deleteExternalAuthZ() { this->externalAuthZ_ = nullptr;};
        inline const Result::ExternalAuthZ & getExternalAuthZ() const { DARABONBA_PTR_GET_CONST(externalAuthZ_, Result::ExternalAuthZ) };
        inline Result::ExternalAuthZ getExternalAuthZ() { DARABONBA_PTR_GET(externalAuthZ_, Result::ExternalAuthZ) };
        inline Result& setExternalAuthZ(const Result::ExternalAuthZ & externalAuthZ) { DARABONBA_PTR_SET_VALUE(externalAuthZ_, externalAuthZ) };
        inline Result& setExternalAuthZ(Result::ExternalAuthZ && externalAuthZ) { DARABONBA_PTR_SET_RVALUE(externalAuthZ_, externalAuthZ) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Result& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isWhite Field Functions 
        bool hasIsWhite() const { return this->isWhite_ != nullptr;};
        void deleteIsWhite() { this->isWhite_ = nullptr;};
        inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
        inline Result& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline Result& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwks Field Functions 
        bool hasJwks() const { return this->jwks_ != nullptr;};
        void deleteJwks() { this->jwks_ = nullptr;};
        inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
        inline Result& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Result& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // redirectUrl Field Functions 
        bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
        void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
        inline string getRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
        inline Result& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


        // scopesList Field Functions 
        bool hasScopesList() const { return this->scopesList_ != nullptr;};
        void deleteScopesList() { this->scopesList_ = nullptr;};
        inline string getScopesList() const { DARABONBA_PTR_GET_DEFAULT(scopesList_, "") };
        inline Result& setScopesList(string scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
        inline Result& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // sub Field Functions 
        bool hasSub() const { return this->sub_ != nullptr;};
        void deleteSub() { this->sub_ = nullptr;};
        inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
        inline Result& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


        // tokenName Field Functions 
        bool hasTokenName() const { return this->tokenName_ != nullptr;};
        void deleteTokenName() { this->tokenName_ = nullptr;};
        inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
        inline Result& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


        // tokenNamePrefix Field Functions 
        bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
        void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
        inline string getTokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
        inline Result& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


        // tokenPass Field Functions 
        bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
        void deleteTokenPass() { this->tokenPass_ = nullptr;};
        inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
        inline Result& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


        // tokenPosition Field Functions 
        bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
        void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
        inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
        inline Result& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> authResourceMode_ {};
        shared_ptr<string> clientId_ {};
        shared_ptr<string> clientSecret_ {};
        shared_ptr<string> cookieDomain_ {};
        shared_ptr<Result::ExternalAuthZ> externalAuthZ_ {};
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isWhite_ {};
        shared_ptr<string> issuer_ {};
        shared_ptr<string> jwks_ {};
        shared_ptr<string> loginUrl_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> redirectUrl_ {};
        shared_ptr<string> scopesList_ {};
        shared_ptr<bool> status_ {};
        shared_ptr<string> sub_ {};
        shared_ptr<string> tokenName_ {};
        shared_ptr<string> tokenNamePrefix_ {};
        shared_ptr<bool> tokenPass_ {};
        shared_ptr<string> tokenPosition_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayAuthResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayAuthResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayAuthResponseBody::Data) };
    inline ListGatewayAuthResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayAuthResponseBody::Data) };
    inline ListGatewayAuthResponseBody& setData(const ListGatewayAuthResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayAuthResponseBody& setData(ListGatewayAuthResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayAuthResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayAuthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListGatewayAuthResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
