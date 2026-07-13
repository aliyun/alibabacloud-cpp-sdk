// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIAGENTREGISTERINFORESPONSEBODY_HPP_
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
  class DescribeAtiAgentRegisterInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiAgentRegisterInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AtiName, atiName_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(IdentityCertSerialNumber, identityCertSerialNumber_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerCertSerialNumber, serverCertSerialNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrustCard, trustCard_);
      DARABONBA_PTR_TO_JSON(TrustCardUrl, trustCardUrl_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiAgentRegisterInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AtiName, atiName_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(IdentityCertSerialNumber, identityCertSerialNumber_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerCertSerialNumber, serverCertSerialNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrustCard, trustCard_);
      DARABONBA_PTR_FROM_JSON(TrustCardUrl, trustCardUrl_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeAtiAgentRegisterInfoResponseBody() = default ;
    DescribeAtiAgentRegisterInfoResponseBody(const DescribeAtiAgentRegisterInfoResponseBody &) = default ;
    DescribeAtiAgentRegisterInfoResponseBody(DescribeAtiAgentRegisterInfoResponseBody &&) = default ;
    DescribeAtiAgentRegisterInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiAgentRegisterInfoResponseBody() = default ;
    DescribeAtiAgentRegisterInfoResponseBody& operator=(const DescribeAtiAgentRegisterInfoResponseBody &) = default ;
    DescribeAtiAgentRegisterInfoResponseBody& operator=(DescribeAtiAgentRegisterInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RejectReason : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RejectReason& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RejectReason& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RejectReason() = default ;
      RejectReason(const RejectReason &) = default ;
      RejectReason(RejectReason &&) = default ;
      RejectReason(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RejectReason() = default ;
      RejectReason& operator=(const RejectReason &) = default ;
      RejectReason& operator=(RejectReason &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->type_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RejectReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RejectReason& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The detailed information about the Agent registration failure.
      shared_ptr<string> message_ {};
      // The type of the review failure. Valid values:
      // - ACME_VERIFY_FAILED: ACME verification failed.  
      // - INFO_AUDIT_FAILED: Agent information review failed.
      shared_ptr<string> type_ {};
    };

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
      // The encrypted complete diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The cause of the authentication failure. Valid values:
      // - ExplicitDeny: explicit deny.
      // - ImplicitDeny: implicit deny.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->agentDescription_ == nullptr && this->agentDisplayName_ == nullptr && this->agentHost_ == nullptr && this->agentId_ == nullptr && this->agentRegisterInfoId_ == nullptr
        && this->agentVersion_ == nullptr && this->atiName_ == nullptr && this->createTimestamp_ == nullptr && this->endpoints_ == nullptr && this->identityCertSerialNumber_ == nullptr
        && this->registrantId_ == nullptr && this->registrantName_ == nullptr && this->rejectReason_ == nullptr && this->requestId_ == nullptr && this->serverCertSerialNumber_ == nullptr
        && this->status_ == nullptr && this->trustCard_ == nullptr && this->trustCardUrl_ == nullptr && this->updateTimestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAccessDeniedDetail(const DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAccessDeniedDetail(DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // agentDescription Field Functions 
    bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
    void deleteAgentDescription() { this->agentDescription_ = nullptr;};
    inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


    // agentDisplayName Field Functions 
    bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
    void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
    inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


    // agentHost Field Functions 
    bool hasAgentHost() const { return this->agentHost_ != nullptr;};
    void deleteAgentHost() { this->agentHost_ = nullptr;};
    inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentRegisterInfoId Field Functions 
    bool hasAgentRegisterInfoId() const { return this->agentRegisterInfoId_ != nullptr;};
    void deleteAgentRegisterInfoId() { this->agentRegisterInfoId_ = nullptr;};
    inline string getAgentRegisterInfoId() const { DARABONBA_PTR_GET_DEFAULT(agentRegisterInfoId_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentRegisterInfoId(string agentRegisterInfoId) { DARABONBA_PTR_SET_VALUE(agentRegisterInfoId_, agentRegisterInfoId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // atiName Field Functions 
    bool hasAtiName() const { return this->atiName_ != nullptr;};
    void deleteAtiName() { this->atiName_ = nullptr;};
    inline string getAtiName() const { DARABONBA_PTR_GET_DEFAULT(atiName_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setAtiName(string atiName) { DARABONBA_PTR_SET_VALUE(atiName_, atiName) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoResponseBody::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, DescribeAtiAgentRegisterInfoResponseBody::Endpoints) };
    inline DescribeAtiAgentRegisterInfoResponseBody::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, DescribeAtiAgentRegisterInfoResponseBody::Endpoints) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setEndpoints(const DescribeAtiAgentRegisterInfoResponseBody::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setEndpoints(DescribeAtiAgentRegisterInfoResponseBody::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // identityCertSerialNumber Field Functions 
    bool hasIdentityCertSerialNumber() const { return this->identityCertSerialNumber_ != nullptr;};
    void deleteIdentityCertSerialNumber() { this->identityCertSerialNumber_ = nullptr;};
    inline string getIdentityCertSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(identityCertSerialNumber_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setIdentityCertSerialNumber(string identityCertSerialNumber) { DARABONBA_PTR_SET_VALUE(identityCertSerialNumber_, identityCertSerialNumber) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // rejectReason Field Functions 
    bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
    void deleteRejectReason() { this->rejectReason_ = nullptr;};
    inline const DescribeAtiAgentRegisterInfoResponseBody::RejectReason & getRejectReason() const { DARABONBA_PTR_GET_CONST(rejectReason_, DescribeAtiAgentRegisterInfoResponseBody::RejectReason) };
    inline DescribeAtiAgentRegisterInfoResponseBody::RejectReason getRejectReason() { DARABONBA_PTR_GET(rejectReason_, DescribeAtiAgentRegisterInfoResponseBody::RejectReason) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setRejectReason(const DescribeAtiAgentRegisterInfoResponseBody::RejectReason & rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setRejectReason(DescribeAtiAgentRegisterInfoResponseBody::RejectReason && rejectReason) { DARABONBA_PTR_SET_RVALUE(rejectReason_, rejectReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverCertSerialNumber Field Functions 
    bool hasServerCertSerialNumber() const { return this->serverCertSerialNumber_ != nullptr;};
    void deleteServerCertSerialNumber() { this->serverCertSerialNumber_ = nullptr;};
    inline string getServerCertSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serverCertSerialNumber_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setServerCertSerialNumber(string serverCertSerialNumber) { DARABONBA_PTR_SET_VALUE(serverCertSerialNumber_, serverCertSerialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trustCard Field Functions 
    bool hasTrustCard() const { return this->trustCard_ != nullptr;};
    void deleteTrustCard() { this->trustCard_ = nullptr;};
    inline string getTrustCard() const { DARABONBA_PTR_GET_DEFAULT(trustCard_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setTrustCard(string trustCard) { DARABONBA_PTR_SET_VALUE(trustCard_, trustCard) };


    // trustCardUrl Field Functions 
    bool hasTrustCardUrl() const { return this->trustCardUrl_ != nullptr;};
    void deleteTrustCardUrl() { this->trustCardUrl_ = nullptr;};
    inline string getTrustCardUrl() const { DARABONBA_PTR_GET_DEFAULT(trustCardUrl_, "") };
    inline DescribeAtiAgentRegisterInfoResponseBody& setTrustCardUrl(string trustCardUrl) { DARABONBA_PTR_SET_VALUE(trustCardUrl_, trustCardUrl) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeAtiAgentRegisterInfoResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The details about the access denial. This field is returned only when RAM authentication fails.
    shared_ptr<DescribeAtiAgentRegisterInfoResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The description of the Agent capabilities.
    shared_ptr<string> agentDescription_ {};
    // The display name of the Agent.
    shared_ptr<string> agentDisplayName_ {};
    // The endpoint domain name through which the Agent provides services.
    shared_ptr<string> agentHost_ {};
    // The Agent ID, which is uniformly assigned by CNNIC after real-name verification. The AgentId serves as the unique identifier that binds the Agent to the verified registrant.
    shared_ptr<string> agentId_ {};
    // The Agent registration ID. This ID is automatically generated by the Alibaba Cloud ATS platform and is globally unique within the platform. It is automatically generated during the Agent registration process. In the multi-step registration process through the API, this ID must be carried throughout all steps to ensure that each step is associated with the same Agent and the complete registration process is completed.
    shared_ptr<string> agentRegisterInfoId_ {};
    // The version of the Agent.
    shared_ptr<string> agentVersion_ {};
    // The ATI name, which is a globally unique identifier in the ATI trust system. Example: ati://v1.0.0.www.example.com
    // - ati:// — The protocol prefix that identifies this as a resource in the ATI system.
    // - v1.0.0 — The Agent version number.
    // - www.example.com — The domain name (FQDN) bound to the Agent.
    shared_ptr<string> atiName_ {};
    // The creation time (timestamp).
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<DescribeAtiAgentRegisterInfoResponseBody::Endpoints> endpoints_ {};
    // Ignore.
    shared_ptr<string> identityCertSerialNumber_ {};
    // The ID of the verified registrant.
    shared_ptr<string> registrantId_ {};
    // The name of the registrant.
    shared_ptr<string> registrantName_ {};
    // The reason why the Agent registration review failed.
    shared_ptr<DescribeAtiAgentRegisterInfoResponseBody::RejectReason> rejectReason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Ignore.
    shared_ptr<string> serverCertSerialNumber_ {};
    // The status of the Agent. Valid values:
    // 
    // - Draft: The Agent registration form is being filled out and has not been formally submitted. In the Draft state, only modification and detail viewing operations are supported.
    // - Private CA Pending Issuance: The Agent registration has been formally submitted. Alibaba Cloud has completed the ACME DNS-01 pre-check and submitted the registration information along with the generated DNS records to CNNIC. The system is waiting for CNNIC to approve and issue the Private CA and complete the TL sealing.
    // - DNS Pending Verification: CNNIC has approved the registration, issued the Private CA certificate, and completed the TL sealing, but the DNS records of the user have not been verified. The user needs to add the corresponding DNS records in the domain name resolution and complete verification.
    // - Active: All processes are complete. The Private CA certificate has been issued, the TL has been sealed, and the DNS records have been verified. The Agent is activated and can be discovered and trusted across the network.
    // - Expired: The Agent identity certificate has expired because the user did not renew the certificate within the validity period.
    // - Revoked: The Agent certificate has been revoked, the DNS records have been cleaned up, and the Agent can no longer be discovered or trusted. The Agent cannot be restored to the Active state.
    shared_ptr<string> status_ {};
    // Ignore.
    shared_ptr<string> trustCard_ {};
    // Deprecated.
    shared_ptr<string> trustCardUrl_ {};
    // The update time (timestamp).
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
