// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHATIAGENTREGISTERINFOMARKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHATIAGENTREGISTERINFOMARKETRESPONSEBODY_HPP_
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
  class SearchAtiAgentRegisterInfoMarketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAtiAgentRegisterInfoMarketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAtiAgentRegisterInfoMarketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchAtiAgentRegisterInfoMarketResponseBody() = default ;
    SearchAtiAgentRegisterInfoMarketResponseBody(const SearchAtiAgentRegisterInfoMarketResponseBody &) = default ;
    SearchAtiAgentRegisterInfoMarketResponseBody(SearchAtiAgentRegisterInfoMarketResponseBody &&) = default ;
    SearchAtiAgentRegisterInfoMarketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAtiAgentRegisterInfoMarketResponseBody() = default ;
    SearchAtiAgentRegisterInfoMarketResponseBody& operator=(const SearchAtiAgentRegisterInfoMarketResponseBody &) = default ;
    SearchAtiAgentRegisterInfoMarketResponseBody& operator=(SearchAtiAgentRegisterInfoMarketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agents& obj) { 
        DARABONBA_PTR_TO_JSON(Agent, agent_);
      };
      friend void from_json(const Darabonba::Json& j, Agents& obj) { 
        DARABONBA_PTR_FROM_JSON(Agent, agent_);
      };
      Agents() = default ;
      Agents(const Agents &) = default ;
      Agents(Agents &&) = default ;
      Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agents() = default ;
      Agents& operator=(const Agents &) = default ;
      Agents& operator=(Agents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Agent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agent& obj) { 
          DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
          DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
          DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Protocols, protocols_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TrustCardUrl, trustCardUrl_);
          DARABONBA_PTR_TO_JSON(TrustLevel, trustLevel_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Agent& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
          DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
          DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TrustCardUrl, trustCardUrl_);
          DARABONBA_PTR_FROM_JSON(TrustLevel, trustLevel_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        Agent() = default ;
        Agent(const Agent &) = default ;
        Agent(Agent &&) = default ;
        Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agent() = default ;
        Agent& operator=(const Agent &) = default ;
        Agent& operator=(Agent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Protocols : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Protocols& obj) { 
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Protocols& obj) { 
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          };
          Protocols() = default ;
          Protocols(const Protocols &) = default ;
          Protocols(Protocols &&) = default ;
          Protocols(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Protocols() = default ;
          Protocols& operator=(const Protocols &) = default ;
          Protocols& operator=(Protocols &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->protocol_ == nullptr; };
          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline const vector<string> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<string>) };
          inline vector<string> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<string>) };
          inline Protocols& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
          inline Protocols& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


        protected:
          shared_ptr<vector<string>> protocol_ {};
        };

        virtual bool empty() const override { return this->agentDescription_ == nullptr
        && this->agentDisplayName_ == nullptr && this->agentHost_ == nullptr && this->agentId_ == nullptr && this->agentVersion_ == nullptr && this->createTimestamp_ == nullptr
        && this->protocols_ == nullptr && this->status_ == nullptr && this->trustCardUrl_ == nullptr && this->trustLevel_ == nullptr && this->updateTimestamp_ == nullptr; };
        // agentDescription Field Functions 
        bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
        void deleteAgentDescription() { this->agentDescription_ = nullptr;};
        inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
        inline Agent& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


        // agentDisplayName Field Functions 
        bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
        void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
        inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
        inline Agent& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


        // agentHost Field Functions 
        bool hasAgentHost() const { return this->agentHost_ != nullptr;};
        void deleteAgentHost() { this->agentHost_ = nullptr;};
        inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
        inline Agent& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Agent& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentVersion Field Functions 
        bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
        void deleteAgentVersion() { this->agentVersion_ = nullptr;};
        inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
        inline Agent& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Agent& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // protocols Field Functions 
        bool hasProtocols() const { return this->protocols_ != nullptr;};
        void deleteProtocols() { this->protocols_ = nullptr;};
        inline const Agent::Protocols & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, Agent::Protocols) };
        inline Agent::Protocols getProtocols() { DARABONBA_PTR_GET(protocols_, Agent::Protocols) };
        inline Agent& setProtocols(const Agent::Protocols & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
        inline Agent& setProtocols(Agent::Protocols && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Agent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // trustCardUrl Field Functions 
        bool hasTrustCardUrl() const { return this->trustCardUrl_ != nullptr;};
        void deleteTrustCardUrl() { this->trustCardUrl_ = nullptr;};
        inline string getTrustCardUrl() const { DARABONBA_PTR_GET_DEFAULT(trustCardUrl_, "") };
        inline Agent& setTrustCardUrl(string trustCardUrl) { DARABONBA_PTR_SET_VALUE(trustCardUrl_, trustCardUrl) };


        // trustLevel Field Functions 
        bool hasTrustLevel() const { return this->trustLevel_ != nullptr;};
        void deleteTrustLevel() { this->trustLevel_ = nullptr;};
        inline string getTrustLevel() const { DARABONBA_PTR_GET_DEFAULT(trustLevel_, "") };
        inline Agent& setTrustLevel(string trustLevel) { DARABONBA_PTR_SET_VALUE(trustLevel_, trustLevel) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Agent& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        shared_ptr<string> agentDescription_ {};
        shared_ptr<string> agentDisplayName_ {};
        shared_ptr<string> agentHost_ {};
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentVersion_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<Agent::Protocols> protocols_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> trustCardUrl_ {};
        shared_ptr<string> trustLevel_ {};
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->agent_ == nullptr; };
      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline const vector<Agents::Agent> & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, vector<Agents::Agent>) };
      inline vector<Agents::Agent> getAgent() { DARABONBA_PTR_GET(agent_, vector<Agents::Agent>) };
      inline Agents& setAgent(const vector<Agents::Agent> & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
      inline Agents& setAgent(vector<Agents::Agent> && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    protected:
      shared_ptr<vector<Agents::Agent>> agent_ {};
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
      // The unauthorized operation that was attempted.
      shared_ptr<string> authAction_ {};
      // The display name of the authorization principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authorization principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The identity type.
      shared_ptr<string> authPrincipalType_ {};
      // The encrypted diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The reason for the authentication failure. Valid values:
      // - ExplicitDeny: explicit deny.
      // - ImplicitDeny: implicit deny.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->agents_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setAccessDeniedDetail(const SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setAccessDeniedDetail(SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline const SearchAtiAgentRegisterInfoMarketResponseBody::Agents & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, SearchAtiAgentRegisterInfoMarketResponseBody::Agents) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody::Agents getAgents() { DARABONBA_PTR_GET(agents_, SearchAtiAgentRegisterInfoMarketResponseBody::Agents) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setAgents(const SearchAtiAgentRegisterInfoMarketResponseBody::Agents & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setAgents(SearchAtiAgentRegisterInfoMarketResponseBody::Agents && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchAtiAgentRegisterInfoMarketResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The details of the access denial. This field is returned only when RAM authentication fails.
    shared_ptr<SearchAtiAgentRegisterInfoMarketResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<SearchAtiAgentRegisterInfoMarketResponseBody::Agents> agents_ {};
    // The number of entries per batch query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number. Minimum value: **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for the paged query. Settings: maximum value: **100**. Default value: **20**. This parameter controls paging behavior.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
