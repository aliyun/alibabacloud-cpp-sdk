// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATIAGENTREGISTERINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATIAGENTREGISTERINFOSRESPONSEBODY_HPP_
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
  class ListAtiAgentRegisterInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAtiAgentRegisterInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AgentRegisterInfos, agentRegisterInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListAtiAgentRegisterInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AgentRegisterInfos, agentRegisterInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListAtiAgentRegisterInfosResponseBody() = default ;
    ListAtiAgentRegisterInfosResponseBody(const ListAtiAgentRegisterInfosResponseBody &) = default ;
    ListAtiAgentRegisterInfosResponseBody(ListAtiAgentRegisterInfosResponseBody &&) = default ;
    ListAtiAgentRegisterInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAtiAgentRegisterInfosResponseBody() = default ;
    ListAtiAgentRegisterInfosResponseBody& operator=(const ListAtiAgentRegisterInfosResponseBody &) = default ;
    ListAtiAgentRegisterInfosResponseBody& operator=(ListAtiAgentRegisterInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentRegisterInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentRegisterInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AgentRegisterInfo, agentRegisterInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AgentRegisterInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentRegisterInfo, agentRegisterInfo_);
      };
      AgentRegisterInfos() = default ;
      AgentRegisterInfos(const AgentRegisterInfos &) = default ;
      AgentRegisterInfos(AgentRegisterInfos &&) = default ;
      AgentRegisterInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentRegisterInfos() = default ;
      AgentRegisterInfos& operator=(const AgentRegisterInfos &) = default ;
      AgentRegisterInfos& operator=(AgentRegisterInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AgentRegisterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentRegisterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
          DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
          DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_TO_JSON(AtiName, atiName_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, AgentRegisterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
          DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
          DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_FROM_JSON(AtiName, atiName_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        AgentRegisterInfo() = default ;
        AgentRegisterInfo(const AgentRegisterInfo &) = default ;
        AgentRegisterInfo(AgentRegisterInfo &&) = default ;
        AgentRegisterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentRegisterInfo() = default ;
        AgentRegisterInfo& operator=(const AgentRegisterInfo &) = default ;
        AgentRegisterInfo& operator=(AgentRegisterInfo &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            };
            friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
              DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
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
            virtual bool empty() const override { return this->protocol_ == nullptr; };
            // protocol Field Functions 
            bool hasProtocol() const { return this->protocol_ != nullptr;};
            void deleteProtocol() { this->protocol_ = nullptr;};
            inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
            inline Endpoint& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          protected:
            shared_ptr<string> protocol_ {};
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

        virtual bool empty() const override { return this->agentDisplayName_ == nullptr
        && this->agentHost_ == nullptr && this->agentId_ == nullptr && this->agentRegisterInfoId_ == nullptr && this->agentVersion_ == nullptr && this->atiName_ == nullptr
        && this->createTimestamp_ == nullptr && this->endpoints_ == nullptr && this->status_ == nullptr && this->updateTimestamp_ == nullptr; };
        // agentDisplayName Field Functions 
        bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
        void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
        inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
        inline AgentRegisterInfo& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


        // agentHost Field Functions 
        bool hasAgentHost() const { return this->agentHost_ != nullptr;};
        void deleteAgentHost() { this->agentHost_ = nullptr;};
        inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
        inline AgentRegisterInfo& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline AgentRegisterInfo& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentRegisterInfoId Field Functions 
        bool hasAgentRegisterInfoId() const { return this->agentRegisterInfoId_ != nullptr;};
        void deleteAgentRegisterInfoId() { this->agentRegisterInfoId_ = nullptr;};
        inline string getAgentRegisterInfoId() const { DARABONBA_PTR_GET_DEFAULT(agentRegisterInfoId_, "") };
        inline AgentRegisterInfo& setAgentRegisterInfoId(string agentRegisterInfoId) { DARABONBA_PTR_SET_VALUE(agentRegisterInfoId_, agentRegisterInfoId) };


        // agentVersion Field Functions 
        bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
        void deleteAgentVersion() { this->agentVersion_ = nullptr;};
        inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
        inline AgentRegisterInfo& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


        // atiName Field Functions 
        bool hasAtiName() const { return this->atiName_ != nullptr;};
        void deleteAtiName() { this->atiName_ = nullptr;};
        inline string getAtiName() const { DARABONBA_PTR_GET_DEFAULT(atiName_, "") };
        inline AgentRegisterInfo& setAtiName(string atiName) { DARABONBA_PTR_SET_VALUE(atiName_, atiName) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline string getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, "") };
        inline AgentRegisterInfo& setCreateTimestamp(string createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // endpoints Field Functions 
        bool hasEndpoints() const { return this->endpoints_ != nullptr;};
        void deleteEndpoints() { this->endpoints_ = nullptr;};
        inline const AgentRegisterInfo::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, AgentRegisterInfo::Endpoints) };
        inline AgentRegisterInfo::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, AgentRegisterInfo::Endpoints) };
        inline AgentRegisterInfo& setEndpoints(const AgentRegisterInfo::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
        inline AgentRegisterInfo& setEndpoints(AgentRegisterInfo::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AgentRegisterInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline string getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, "") };
        inline AgentRegisterInfo& setUpdateTimestamp(string updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        shared_ptr<string> agentDisplayName_ {};
        shared_ptr<string> agentHost_ {};
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentRegisterInfoId_ {};
        shared_ptr<string> agentVersion_ {};
        shared_ptr<string> atiName_ {};
        shared_ptr<string> createTimestamp_ {};
        shared_ptr<AgentRegisterInfo::Endpoints> endpoints_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->agentRegisterInfo_ == nullptr; };
      // agentRegisterInfo Field Functions 
      bool hasAgentRegisterInfo() const { return this->agentRegisterInfo_ != nullptr;};
      void deleteAgentRegisterInfo() { this->agentRegisterInfo_ = nullptr;};
      inline const vector<AgentRegisterInfos::AgentRegisterInfo> & getAgentRegisterInfo() const { DARABONBA_PTR_GET_CONST(agentRegisterInfo_, vector<AgentRegisterInfos::AgentRegisterInfo>) };
      inline vector<AgentRegisterInfos::AgentRegisterInfo> getAgentRegisterInfo() { DARABONBA_PTR_GET(agentRegisterInfo_, vector<AgentRegisterInfos::AgentRegisterInfo>) };
      inline AgentRegisterInfos& setAgentRegisterInfo(const vector<AgentRegisterInfos::AgentRegisterInfo> & agentRegisterInfo) { DARABONBA_PTR_SET_VALUE(agentRegisterInfo_, agentRegisterInfo) };
      inline AgentRegisterInfos& setAgentRegisterInfo(vector<AgentRegisterInfos::AgentRegisterInfo> && agentRegisterInfo) { DARABONBA_PTR_SET_RVALUE(agentRegisterInfo_, agentRegisterInfo) };


    protected:
      shared_ptr<vector<AgentRegisterInfos::AgentRegisterInfo>> agentRegisterInfo_ {};
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
      // The cause of the authentication failure. Valid values:
      // - ExplicitDeny: Explicit denial.
      // - ImplicitDeny: Implicit denial.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->agentRegisterInfos_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail) };
    inline ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail) };
    inline ListAtiAgentRegisterInfosResponseBody& setAccessDeniedDetail(const ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ListAtiAgentRegisterInfosResponseBody& setAccessDeniedDetail(ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // agentRegisterInfos Field Functions 
    bool hasAgentRegisterInfos() const { return this->agentRegisterInfos_ != nullptr;};
    void deleteAgentRegisterInfos() { this->agentRegisterInfos_ = nullptr;};
    inline const ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos & getAgentRegisterInfos() const { DARABONBA_PTR_GET_CONST(agentRegisterInfos_, ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos) };
    inline ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos getAgentRegisterInfos() { DARABONBA_PTR_GET(agentRegisterInfos_, ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos) };
    inline ListAtiAgentRegisterInfosResponseBody& setAgentRegisterInfos(const ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos & agentRegisterInfos) { DARABONBA_PTR_SET_VALUE(agentRegisterInfos_, agentRegisterInfos) };
    inline ListAtiAgentRegisterInfosResponseBody& setAgentRegisterInfos(ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos && agentRegisterInfos) { DARABONBA_PTR_SET_RVALUE(agentRegisterInfos_, agentRegisterInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAtiAgentRegisterInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAtiAgentRegisterInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAtiAgentRegisterInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAtiAgentRegisterInfosResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAtiAgentRegisterInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline ListAtiAgentRegisterInfosResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListAtiAgentRegisterInfosResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The details about the access denial. This field is returned only when RAM authentication fails.
    shared_ptr<ListAtiAgentRegisterInfosResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<ListAtiAgentRegisterInfosResponseBody::AgentRegisterInfos> agentRegisterInfos_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page set for the paged query. This is the paging size. Maximum value: **100**. Default value: **20**. Settings determine how many rows are displayed per page.
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
