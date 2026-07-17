// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFOMARKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFOMARKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiAgentRegisterInfoMarketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiAgentRegisterInfoMarketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrustCardContent, trustCardContent_);
      DARABONBA_PTR_TO_JSON(TrustLevel, trustLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiAgentRegisterInfoMarketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrustCardContent, trustCardContent_);
      DARABONBA_PTR_FROM_JSON(TrustLevel, trustLevel_);
    };
    DescribeAtiAgentRegisterInfoMarketResponseBody() = default ;
    DescribeAtiAgentRegisterInfoMarketResponseBody(const DescribeAtiAgentRegisterInfoMarketResponseBody &) = default ;
    DescribeAtiAgentRegisterInfoMarketResponseBody(DescribeAtiAgentRegisterInfoMarketResponseBody &&) = default ;
    DescribeAtiAgentRegisterInfoMarketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiAgentRegisterInfoMarketResponseBody() = default ;
    DescribeAtiAgentRegisterInfoMarketResponseBody& operator=(const DescribeAtiAgentRegisterInfoMarketResponseBody &) = default ;
    DescribeAtiAgentRegisterInfoMarketResponseBody& operator=(DescribeAtiAgentRegisterInfoMarketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
          DARABONBA_PTR_TO_JSON(AgentUrl, agentUrl_);
          DARABONBA_PTR_TO_JSON(MetadataUrl, metadataUrl_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Transports, transports_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentUrl, agentUrl_);
          DARABONBA_PTR_FROM_JSON(MetadataUrl, metadataUrl_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Transports, transports_);
        };
        Endpoint() = default ;
        Endpoint(const Endpoint &) = default ;
        Endpoint(Endpoint &&) = default ;
        Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoint() = default ;
        Endpoint& operator=(const Endpoint &) = default ;
        Endpoint& operator=(Endpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Transports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Transports& obj) { 
            DARABONBA_PTR_TO_JSON(Transport, transport_);
          };
          friend void from_json(const Darabonba::Json& j, Transports& obj) { 
            DARABONBA_PTR_FROM_JSON(Transport, transport_);
          };
          Transports() = default ;
          Transports(const Transports &) = default ;
          Transports(Transports &&) = default ;
          Transports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Transports() = default ;
          Transports& operator=(const Transports &) = default ;
          Transports& operator=(Transports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->transport_ == nullptr; };
          // transport Field Functions 
          bool hasTransport() const { return this->transport_ != nullptr;};
          void deleteTransport() { this->transport_ = nullptr;};
          inline const vector<string> & getTransport() const { DARABONBA_PTR_GET_CONST(transport_, vector<string>) };
          inline vector<string> getTransport() { DARABONBA_PTR_GET(transport_, vector<string>) };
          inline Transports& setTransport(const vector<string> & transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };
          inline Transports& setTransport(vector<string> && transport) { DARABONBA_PTR_SET_RVALUE(transport_, transport) };


        protected:
          shared_ptr<vector<string>> transport_ {};
        };

        virtual bool empty() const override { return this->agentUrl_ == nullptr
        && this->metadataUrl_ == nullptr && this->protocol_ == nullptr && this->transports_ == nullptr; };
        // agentUrl Field Functions 
        bool hasAgentUrl() const { return this->agentUrl_ != nullptr;};
        void deleteAgentUrl() { this->agentUrl_ = nullptr;};
        inline string getAgentUrl() const { DARABONBA_PTR_GET_DEFAULT(agentUrl_, "") };
        inline Endpoint& setAgentUrl(string agentUrl) { DARABONBA_PTR_SET_VALUE(agentUrl_, agentUrl) };


        // metadataUrl Field Functions 
        bool hasMetadataUrl() const { return this->metadataUrl_ != nullptr;};
        void deleteMetadataUrl() { this->metadataUrl_ = nullptr;};
        inline string getMetadataUrl() const { DARABONBA_PTR_GET_DEFAULT(metadataUrl_, "") };
        inline Endpoint& setMetadataUrl(string metadataUrl) { DARABONBA_PTR_SET_VALUE(metadataUrl_, metadataUrl) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Endpoint& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // transports Field Functions 
        bool hasTransports() const { return this->transports_ != nullptr;};
        void deleteTransports() { this->transports_ = nullptr;};
        inline const Endpoint::Transports & getTransports() const { DARABONBA_PTR_GET_CONST(transports_, Endpoint::Transports) };
        inline Endpoint::Transports getTransports() { DARABONBA_PTR_GET(transports_, Endpoint::Transports) };
        inline Endpoint& setTransports(const Endpoint::Transports & transports) { DARABONBA_PTR_SET_VALUE(transports_, transports) };
        inline Endpoint& setTransports(Endpoint::Transports && transports) { DARABONBA_PTR_SET_RVALUE(transports_, transports) };


      protected:
        shared_ptr<string> agentUrl_ {};
        shared_ptr<string> metadataUrl_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<Endpoint::Transports> transports_ {};
      };

      virtual bool empty() const override { return this->endpoint_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline const vector<Endpoints::Endpoint> & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, vector<Endpoints::Endpoint>) };
      inline vector<Endpoints::Endpoint> getEndpoint() { DARABONBA_PTR_GET(endpoint_, vector<Endpoints::Endpoint>) };
      inline Endpoints& setEndpoint(const vector<Endpoints::Endpoint> & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
      inline Endpoints& setEndpoint(vector<Endpoints::Endpoint> && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    protected:
      shared_ptr<vector<Endpoints::Endpoint>> endpoint_ {};
    };

    class Categories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Categories& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
      };
      friend void from_json(const Darabonba::Json& j, Categories& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
      };
      Categories() = default ;
      Categories(const Categories &) = default ;
      Categories(Categories &&) = default ;
      Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Categories() = default ;
      Categories& operator=(const Categories &) = default ;
      Categories& operator=(Categories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline const vector<string> & getCategory() const { DARABONBA_PTR_GET_CONST(category_, vector<string>) };
      inline vector<string> getCategory() { DARABONBA_PTR_GET(category_, vector<string>) };
      inline Categories& setCategory(const vector<string> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
      inline Categories& setCategory(vector<string> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    protected:
      shared_ptr<vector<string>> category_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->agentDescription_ == nullptr && this->agentDisplayName_ == nullptr && this->agentHost_ == nullptr && this->agentId_ == nullptr && this->agentRegisterInfoId_ == nullptr
        && this->agentVersion_ == nullptr && this->categories_ == nullptr && this->endpoints_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->trustCardContent_ == nullptr && this->trustLevel_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAccessDeniedDetail(const DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAccessDeniedDetail(DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // agentDescription Field Functions 
    bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
    void deleteAgentDescription() { this->agentDescription_ = nullptr;};
    inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


    // agentDisplayName Field Functions 
    bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
    void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
    inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


    // agentHost Field Functions 
    bool hasAgentHost() const { return this->agentHost_ != nullptr;};
    void deleteAgentHost() { this->agentHost_ = nullptr;};
    inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentRegisterInfoId Field Functions 
    bool hasAgentRegisterInfoId() const { return this->agentRegisterInfoId_ != nullptr;};
    void deleteAgentRegisterInfoId() { this->agentRegisterInfoId_ = nullptr;};
    inline string getAgentRegisterInfoId() const { DARABONBA_PTR_GET_DEFAULT(agentRegisterInfoId_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentRegisterInfoId(string agentRegisterInfoId) { DARABONBA_PTR_SET_VALUE(agentRegisterInfoId_, agentRegisterInfoId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoMarketResponseBody::Categories & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, DescribeAtiAgentRegisterInfoMarketResponseBody::Categories) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody::Categories getCategories() { DARABONBA_PTR_GET(categories_, DescribeAtiAgentRegisterInfoMarketResponseBody::Categories) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setCategories(const DescribeAtiAgentRegisterInfoMarketResponseBody::Categories & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setCategories(DescribeAtiAgentRegisterInfoMarketResponseBody::Categories && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setEndpoints(const DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setEndpoints(DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trustCardContent Field Functions 
    bool hasTrustCardContent() const { return this->trustCardContent_ != nullptr;};
    void deleteTrustCardContent() { this->trustCardContent_ = nullptr;};
    inline string getTrustCardContent() const { DARABONBA_PTR_GET_DEFAULT(trustCardContent_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setTrustCardContent(string trustCardContent) { DARABONBA_PTR_SET_VALUE(trustCardContent_, trustCardContent) };


    // trustLevel Field Functions 
    bool hasTrustLevel() const { return this->trustLevel_ != nullptr;};
    void deleteTrustLevel() { this->trustLevel_ = nullptr;};
    inline string getTrustLevel() const { DARABONBA_PTR_GET_DEFAULT(trustLevel_, "") };
    inline DescribeAtiAgentRegisterInfoMarketResponseBody& setTrustLevel(string trustLevel) { DARABONBA_PTR_SET_VALUE(trustLevel_, trustLevel) };


  protected:
    shared_ptr<DescribeAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<string> agentDescription_ {};
    shared_ptr<string> agentDisplayName_ {};
    shared_ptr<string> agentHost_ {};
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentRegisterInfoId_ {};
    shared_ptr<string> agentVersion_ {};
    shared_ptr<DescribeAtiAgentRegisterInfoMarketResponseBody::Categories> categories_ {};
    shared_ptr<DescribeAtiAgentRegisterInfoMarketResponseBody::Endpoints> endpoints_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> trustCardContent_ {};
    shared_ptr<string> trustLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
