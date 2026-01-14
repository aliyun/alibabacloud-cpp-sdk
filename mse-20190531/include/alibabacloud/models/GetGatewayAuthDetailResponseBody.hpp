// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODY_HPP_
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
  class GetGatewayAuthDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGatewayAuthDetailResponseBody() = default ;
    GetGatewayAuthDetailResponseBody(const GetGatewayAuthDetailResponseBody &) = default ;
    GetGatewayAuthDetailResponseBody(GetGatewayAuthDetailResponseBody &&) = default ;
    GetGatewayAuthDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthDetailResponseBody() = default ;
    GetGatewayAuthDetailResponseBody& operator=(const GetGatewayAuthDetailResponseBody &) = default ;
    GetGatewayAuthDetailResponseBody& operator=(GetGatewayAuthDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthResourceConfig, authResourceConfig_);
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
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(ScopesList, scopesList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Sub, sub_);
        DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
        DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
        DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
        DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthResourceConfig, authResourceConfig_);
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
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(ScopesList, scopesList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Sub, sub_);
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
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(AuthId, authId_);
          DARABONBA_PTR_TO_JSON(AuthResourceHeaderList, authResourceHeaderList_);
          DARABONBA_PTR_TO_JSON(DomainId, domainId_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
          DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
          DARABONBA_PTR_TO_JSON(MatchType, matchType_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthId, authId_);
          DARABONBA_PTR_FROM_JSON(AuthResourceHeaderList, authResourceHeaderList_);
          DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
          DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
          DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
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

        virtual bool empty() const override { return this->authId_ == nullptr
        && this->authResourceHeaderList_ == nullptr && this->domainId_ == nullptr && this->domainName_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->ignoreCase_ == nullptr && this->isWhite_ == nullptr
        && this->matchType_ == nullptr && this->path_ == nullptr; };
        // authId Field Functions 
        bool hasAuthId() const { return this->authId_ != nullptr;};
        void deleteAuthId() { this->authId_ = nullptr;};
        inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
        inline ResourceList& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


        // authResourceHeaderList Field Functions 
        bool hasAuthResourceHeaderList() const { return this->authResourceHeaderList_ != nullptr;};
        void deleteAuthResourceHeaderList() { this->authResourceHeaderList_ = nullptr;};
        inline const vector<ResourceList::AuthResourceHeaderList> & getAuthResourceHeaderList() const { DARABONBA_PTR_GET_CONST(authResourceHeaderList_, vector<ResourceList::AuthResourceHeaderList>) };
        inline vector<ResourceList::AuthResourceHeaderList> getAuthResourceHeaderList() { DARABONBA_PTR_GET(authResourceHeaderList_, vector<ResourceList::AuthResourceHeaderList>) };
        inline ResourceList& setAuthResourceHeaderList(const vector<ResourceList::AuthResourceHeaderList> & authResourceHeaderList) { DARABONBA_PTR_SET_VALUE(authResourceHeaderList_, authResourceHeaderList) };
        inline ResourceList& setAuthResourceHeaderList(vector<ResourceList::AuthResourceHeaderList> && authResourceHeaderList) { DARABONBA_PTR_SET_RVALUE(authResourceHeaderList_, authResourceHeaderList) };


        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
        inline ResourceList& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline ResourceList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline ResourceList& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline ResourceList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResourceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResourceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ignoreCase Field Functions 
        bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
        void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
        inline bool getIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
        inline ResourceList& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


        // isWhite Field Functions 
        bool hasIsWhite() const { return this->isWhite_ != nullptr;};
        void deleteIsWhite() { this->isWhite_ = nullptr;};
        inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
        inline ResourceList& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
        inline ResourceList& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ResourceList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        shared_ptr<int64_t> authId_ {};
        shared_ptr<vector<ResourceList::AuthResourceHeaderList>> authResourceHeaderList_ {};
        shared_ptr<int64_t> domainId_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> ignoreCase_ {};
        shared_ptr<bool> isWhite_ {};
        shared_ptr<string> matchType_ {};
        shared_ptr<string> path_ {};
      };

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

      virtual bool empty() const override { return this->authResourceConfig_ == nullptr
        && this->authResourceMode_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->cookieDomain_ == nullptr && this->externalAuthZ_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->isWhite_ == nullptr && this->issuer_ == nullptr && this->jwks_ == nullptr && this->loginUrl_ == nullptr && this->name_ == nullptr
        && this->redirectUrl_ == nullptr && this->resourceList_ == nullptr && this->scopesList_ == nullptr && this->status_ == nullptr && this->sub_ == nullptr
        && this->tokenName_ == nullptr && this->tokenNamePrefix_ == nullptr && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr && this->type_ == nullptr; };
      // authResourceConfig Field Functions 
      bool hasAuthResourceConfig() const { return this->authResourceConfig_ != nullptr;};
      void deleteAuthResourceConfig() { this->authResourceConfig_ = nullptr;};
      inline string getAuthResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(authResourceConfig_, "") };
      inline Data& setAuthResourceConfig(string authResourceConfig) { DARABONBA_PTR_SET_VALUE(authResourceConfig_, authResourceConfig) };


      // authResourceMode Field Functions 
      bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
      void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
      inline int32_t getAuthResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
      inline Data& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


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


      // externalAuthZ Field Functions 
      bool hasExternalAuthZ() const { return this->externalAuthZ_ != nullptr;};
      void deleteExternalAuthZ() { this->externalAuthZ_ = nullptr;};
      inline const Data::ExternalAuthZ & getExternalAuthZ() const { DARABONBA_PTR_GET_CONST(externalAuthZ_, Data::ExternalAuthZ) };
      inline Data::ExternalAuthZ getExternalAuthZ() { DARABONBA_PTR_GET(externalAuthZ_, Data::ExternalAuthZ) };
      inline Data& setExternalAuthZ(const Data::ExternalAuthZ & externalAuthZ) { DARABONBA_PTR_SET_VALUE(externalAuthZ_, externalAuthZ) };
      inline Data& setExternalAuthZ(Data::ExternalAuthZ && externalAuthZ) { DARABONBA_PTR_SET_RVALUE(externalAuthZ_, externalAuthZ) };


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


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<Data::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Data::ResourceList>) };
      inline vector<Data::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<Data::ResourceList>) };
      inline Data& setResourceList(const vector<Data::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline Data& setResourceList(vector<Data::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // scopesList Field Functions 
      bool hasScopesList() const { return this->scopesList_ != nullptr;};
      void deleteScopesList() { this->scopesList_ = nullptr;};
      inline string getScopesList() const { DARABONBA_PTR_GET_DEFAULT(scopesList_, "") };
      inline Data& setScopesList(string scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline Data& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // sub Field Functions 
      bool hasSub() const { return this->sub_ != nullptr;};
      void deleteSub() { this->sub_ = nullptr;};
      inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
      inline Data& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


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
      shared_ptr<string> authResourceConfig_ {};
      shared_ptr<int32_t> authResourceMode_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientSecret_ {};
      shared_ptr<string> cookieDomain_ {};
      shared_ptr<Data::ExternalAuthZ> externalAuthZ_ {};
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
      shared_ptr<vector<Data::ResourceList>> resourceList_ {};
      shared_ptr<string> scopesList_ {};
      shared_ptr<bool> status_ {};
      shared_ptr<string> sub_ {};
      shared_ptr<string> tokenName_ {};
      shared_ptr<string> tokenNamePrefix_ {};
      shared_ptr<bool> tokenPass_ {};
      shared_ptr<string> tokenPosition_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayAuthDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayAuthDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayAuthDetailResponseBody::Data) };
    inline GetGatewayAuthDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayAuthDetailResponseBody::Data) };
    inline GetGatewayAuthDetailResponseBody& setData(const GetGatewayAuthDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayAuthDetailResponseBody& setData(GetGatewayAuthDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGatewayAuthDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayAuthDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayAuthDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGatewayAuthDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetGatewayAuthDetailResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
