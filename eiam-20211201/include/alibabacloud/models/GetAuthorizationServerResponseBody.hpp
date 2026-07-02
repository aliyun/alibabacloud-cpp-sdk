// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetAuthorizationServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServer, authorizationServer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServer, authorizationServer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuthorizationServerResponseBody() = default ;
    GetAuthorizationServerResponseBody(const GetAuthorizationServerResponseBody &) = default ;
    GetAuthorizationServerResponseBody(GetAuthorizationServerResponseBody &&) = default ;
    GetAuthorizationServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationServerResponseBody() = default ;
    GetAuthorizationServerResponseBody& operator=(const GetAuthorizationServerResponseBody &) = default ;
    GetAuthorizationServerResponseBody& operator=(GetAuthorizationServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationServer& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
        DARABONBA_PTR_TO_JSON(AuthorizationServerName, authorizationServerName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreationType, creationType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(IssuerDomain, issuerDomain_);
        DARABONBA_PTR_TO_JSON(IssuerMode, issuerMode_);
        DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_TO_JSON(ProtocolEndpoint, protocolEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationServer& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationServerName, authorizationServerName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(IssuerDomain, issuerDomain_);
        DARABONBA_PTR_FROM_JSON(IssuerMode, issuerMode_);
        DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
        DARABONBA_PTR_FROM_JSON(ProtocolEndpoint, protocolEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AuthorizationServer() = default ;
      AuthorizationServer(const AuthorizationServer &) = default ;
      AuthorizationServer(AuthorizationServer &&) = default ;
      AuthorizationServer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationServer() = default ;
      AuthorizationServer& operator=(const AuthorizationServer &) = default ;
      AuthorizationServer& operator=(AuthorizationServer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProtocolEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProtocolEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Oauth2TokenEndpoint, oauth2TokenEndpoint_);
          DARABONBA_PTR_TO_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, ProtocolEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Oauth2TokenEndpoint, oauth2TokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
        };
        ProtocolEndpoint() = default ;
        ProtocolEndpoint(const ProtocolEndpoint &) = default ;
        ProtocolEndpoint(ProtocolEndpoint &&) = default ;
        ProtocolEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProtocolEndpoint() = default ;
        ProtocolEndpoint& operator=(const ProtocolEndpoint &) = default ;
        ProtocolEndpoint& operator=(ProtocolEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->oauth2TokenEndpoint_ == nullptr
        && this->oidcJwksEndpoint_ == nullptr; };
        // oauth2TokenEndpoint Field Functions 
        bool hasOauth2TokenEndpoint() const { return this->oauth2TokenEndpoint_ != nullptr;};
        void deleteOauth2TokenEndpoint() { this->oauth2TokenEndpoint_ = nullptr;};
        inline string getOauth2TokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2TokenEndpoint_, "") };
        inline ProtocolEndpoint& setOauth2TokenEndpoint(string oauth2TokenEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2TokenEndpoint_, oauth2TokenEndpoint) };


        // oidcJwksEndpoint Field Functions 
        bool hasOidcJwksEndpoint() const { return this->oidcJwksEndpoint_ != nullptr;};
        void deleteOidcJwksEndpoint() { this->oidcJwksEndpoint_ = nullptr;};
        inline string getOidcJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oidcJwksEndpoint_, "") };
        inline ProtocolEndpoint& setOidcJwksEndpoint(string oidcJwksEndpoint) { DARABONBA_PTR_SET_VALUE(oidcJwksEndpoint_, oidcJwksEndpoint) };


      protected:
        // The token endpoint of the authorization server.
        shared_ptr<string> oauth2TokenEndpoint_ {};
        // The JWKS endpoint of the authorization server.
        shared_ptr<string> oidcJwksEndpoint_ {};
      };

      virtual bool empty() const override { return this->authorizationServerId_ == nullptr
        && this->authorizationServerName_ == nullptr && this->createTime_ == nullptr && this->creationType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->issuer_ == nullptr && this->issuerDomain_ == nullptr && this->issuerMode_ == nullptr && this->lastUpdateTime_ == nullptr && this->protocolEndpoint_ == nullptr
        && this->status_ == nullptr; };
      // authorizationServerId Field Functions 
      bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
      void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
      inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
      inline AuthorizationServer& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


      // authorizationServerName Field Functions 
      bool hasAuthorizationServerName() const { return this->authorizationServerName_ != nullptr;};
      void deleteAuthorizationServerName() { this->authorizationServerName_ = nullptr;};
      inline string getAuthorizationServerName() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerName_, "") };
      inline AuthorizationServer& setAuthorizationServerName(string authorizationServerName) { DARABONBA_PTR_SET_VALUE(authorizationServerName_, authorizationServerName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationServer& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creationType Field Functions 
      bool hasCreationType() const { return this->creationType_ != nullptr;};
      void deleteCreationType() { this->creationType_ = nullptr;};
      inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
      inline AuthorizationServer& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorizationServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationServer& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline AuthorizationServer& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // issuerDomain Field Functions 
      bool hasIssuerDomain() const { return this->issuerDomain_ != nullptr;};
      void deleteIssuerDomain() { this->issuerDomain_ = nullptr;};
      inline string getIssuerDomain() const { DARABONBA_PTR_GET_DEFAULT(issuerDomain_, "") };
      inline AuthorizationServer& setIssuerDomain(string issuerDomain) { DARABONBA_PTR_SET_VALUE(issuerDomain_, issuerDomain) };


      // issuerMode Field Functions 
      bool hasIssuerMode() const { return this->issuerMode_ != nullptr;};
      void deleteIssuerMode() { this->issuerMode_ = nullptr;};
      inline string getIssuerMode() const { DARABONBA_PTR_GET_DEFAULT(issuerMode_, "") };
      inline AuthorizationServer& setIssuerMode(string issuerMode) { DARABONBA_PTR_SET_VALUE(issuerMode_, issuerMode) };


      // lastUpdateTime Field Functions 
      bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
      void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
      inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
      inline AuthorizationServer& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      // protocolEndpoint Field Functions 
      bool hasProtocolEndpoint() const { return this->protocolEndpoint_ != nullptr;};
      void deleteProtocolEndpoint() { this->protocolEndpoint_ = nullptr;};
      inline const AuthorizationServer::ProtocolEndpoint & getProtocolEndpoint() const { DARABONBA_PTR_GET_CONST(protocolEndpoint_, AuthorizationServer::ProtocolEndpoint) };
      inline AuthorizationServer::ProtocolEndpoint getProtocolEndpoint() { DARABONBA_PTR_GET(protocolEndpoint_, AuthorizationServer::ProtocolEndpoint) };
      inline AuthorizationServer& setProtocolEndpoint(const AuthorizationServer::ProtocolEndpoint & protocolEndpoint) { DARABONBA_PTR_SET_VALUE(protocolEndpoint_, protocolEndpoint) };
      inline AuthorizationServer& setProtocolEndpoint(AuthorizationServer::ProtocolEndpoint && protocolEndpoint) { DARABONBA_PTR_SET_RVALUE(protocolEndpoint_, protocolEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AuthorizationServer& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The authorization server ID.
      shared_ptr<string> authorizationServerId_ {};
      // The name of the authorization server.
      shared_ptr<string> authorizationServerName_ {};
      // The time when the authorization server was created.
      shared_ptr<int64_t> createTime_ {};
      // The creation type.
      shared_ptr<string> creationType_ {};
      // The description of the authorization server.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The issuer of the authorization token.
      shared_ptr<string> issuer_ {};
      // The domain name used by the issuer.
      shared_ptr<string> issuerDomain_ {};
      // The issuer mode.
      shared_ptr<string> issuerMode_ {};
      // The time when the authorization server was last updated.
      shared_ptr<int64_t> lastUpdateTime_ {};
      // The endpoint configuration of the authorization server.
      shared_ptr<AuthorizationServer::ProtocolEndpoint> protocolEndpoint_ {};
      // The status of the authorization server.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->authorizationServer_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationServer Field Functions 
    bool hasAuthorizationServer() const { return this->authorizationServer_ != nullptr;};
    void deleteAuthorizationServer() { this->authorizationServer_ = nullptr;};
    inline const GetAuthorizationServerResponseBody::AuthorizationServer & getAuthorizationServer() const { DARABONBA_PTR_GET_CONST(authorizationServer_, GetAuthorizationServerResponseBody::AuthorizationServer) };
    inline GetAuthorizationServerResponseBody::AuthorizationServer getAuthorizationServer() { DARABONBA_PTR_GET(authorizationServer_, GetAuthorizationServerResponseBody::AuthorizationServer) };
    inline GetAuthorizationServerResponseBody& setAuthorizationServer(const GetAuthorizationServerResponseBody::AuthorizationServer & authorizationServer) { DARABONBA_PTR_SET_VALUE(authorizationServer_, authorizationServer) };
    inline GetAuthorizationServerResponseBody& setAuthorizationServer(GetAuthorizationServerResponseBody::AuthorizationServer && authorizationServer) { DARABONBA_PTR_SET_RVALUE(authorizationServer_, authorizationServer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorizationServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorization server.
    shared_ptr<GetAuthorizationServerResponseBody::AuthorizationServer> authorizationServer_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
