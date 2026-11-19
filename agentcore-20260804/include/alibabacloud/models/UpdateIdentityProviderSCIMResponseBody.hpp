// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateIdentityProviderSCIMResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateIdentityProviderSCIMResponseBody() = default ;
    UpdateIdentityProviderSCIMResponseBody(const UpdateIdentityProviderSCIMResponseBody &) = default ;
    UpdateIdentityProviderSCIMResponseBody(UpdateIdentityProviderSCIMResponseBody &&) = default ;
    UpdateIdentityProviderSCIMResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderSCIMResponseBody() = default ;
    UpdateIdentityProviderSCIMResponseBody& operator=(const UpdateIdentityProviderSCIMResponseBody &) = default ;
    UpdateIdentityProviderSCIMResponseBody& operator=(UpdateIdentityProviderSCIMResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_TO_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_TO_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(oidc, oidc_);
        DARABONBA_PTR_TO_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(saml, saml_);
        DARABONBA_PTR_TO_JSON(scimStatus, scimStatus_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(eventSubscriptionCallbackUrl, eventSubscriptionCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(identityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(loginCallbackUrl, loginCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(loginEnabled, loginEnabled_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(oidc, oidc_);
        DARABONBA_PTR_FROM_JSON(operationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(saml, saml_);
        DARABONBA_PTR_FROM_JSON(scimStatus, scimStatus_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      class Saml : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Saml& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(x509Certificates, x509Certificates_);
        };
        friend void from_json(const Darabonba::Json& j, Saml& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(x509Certificates, x509Certificates_);
        };
        Saml() = default ;
        Saml(const Saml &) = default ;
        Saml(Saml &&) = default ;
        Saml(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Saml() = default ;
        Saml& operator=(const Saml &) = default ;
        Saml& operator=(Saml &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->x509Certificates_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Saml& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Saml& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Saml& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // x509Certificates Field Functions 
        bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
        void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
        inline const vector<string> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<string>) };
        inline vector<string> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<string>) };
        inline Saml& setX509Certificates(const vector<string> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
        inline Saml& setX509Certificates(vector<string> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


      protected:
        // The SAML binding type. Valid values: HTTP-Redirect and HTTP-POST. This field is required when you manually enter the configuration. The query returns the short name.
        shared_ptr<string> bindingType_ {};
        // The IdP entity ID. This field is required when you manually enter the metadata. It must be a non-empty string of up to 2,048 characters. You cannot change the entity ID after it is configured. This ID is different from the local entity ID returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The IdP SSO logon URL. This field is required when you manually enter the metadata. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // The list of IdP signing certificates. When you manually enter the configuration, this field is required and must be a non-empty array of PEM X.509 certificate texts. The system verifies the current validity period. A maximum of two certificates are retained after deduplication.
        shared_ptr<vector<string>> x509Certificates_ {};
      };

      class Oidc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Oidc& obj) { 
          DARABONBA_PTR_TO_JSON(authorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(clientAuthMethod, clientAuthMethod_);
          DARABONBA_PTR_TO_JSON(clientId, clientId_);
          DARABONBA_PTR_TO_JSON(discoveryEndpoint, discoveryEndpoint_);
          DARABONBA_PTR_TO_JSON(issuer, issuer_);
          DARABONBA_PTR_TO_JSON(jwksUri, jwksUri_);
          DARABONBA_PTR_TO_JSON(pkceRequired, pkceRequired_);
          DARABONBA_PTR_TO_JSON(scopes, scopes_);
          DARABONBA_PTR_TO_JSON(ssoMappingClaim, ssoMappingClaim_);
          DARABONBA_PTR_TO_JSON(tokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_TO_JSON(userinfoEndpoint, userinfoEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, Oidc& obj) { 
          DARABONBA_PTR_FROM_JSON(authorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(clientAuthMethod, clientAuthMethod_);
          DARABONBA_PTR_FROM_JSON(clientId, clientId_);
          DARABONBA_PTR_FROM_JSON(discoveryEndpoint, discoveryEndpoint_);
          DARABONBA_PTR_FROM_JSON(issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(jwksUri, jwksUri_);
          DARABONBA_PTR_FROM_JSON(pkceRequired, pkceRequired_);
          DARABONBA_PTR_FROM_JSON(scopes, scopes_);
          DARABONBA_PTR_FROM_JSON(ssoMappingClaim, ssoMappingClaim_);
          DARABONBA_PTR_FROM_JSON(tokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(userinfoEndpoint, userinfoEndpoint_);
        };
        Oidc() = default ;
        Oidc(const Oidc &) = default ;
        Oidc(Oidc &&) = default ;
        Oidc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Oidc() = default ;
        Oidc& operator=(const Oidc &) = default ;
        Oidc& operator=(Oidc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->clientAuthMethod_ == nullptr && this->clientId_ == nullptr && this->discoveryEndpoint_ == nullptr && this->issuer_ == nullptr && this->jwksUri_ == nullptr
        && this->pkceRequired_ == nullptr && this->scopes_ == nullptr && this->ssoMappingClaim_ == nullptr && this->tokenEndpoint_ == nullptr && this->userinfoEndpoint_ == nullptr; };
        // authorizationEndpoint Field Functions 
        bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
        void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
        inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
        inline Oidc& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


        // clientAuthMethod Field Functions 
        bool hasClientAuthMethod() const { return this->clientAuthMethod_ != nullptr;};
        void deleteClientAuthMethod() { this->clientAuthMethod_ = nullptr;};
        inline string getClientAuthMethod() const { DARABONBA_PTR_GET_DEFAULT(clientAuthMethod_, "") };
        inline Oidc& setClientAuthMethod(string clientAuthMethod) { DARABONBA_PTR_SET_VALUE(clientAuthMethod_, clientAuthMethod) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Oidc& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // discoveryEndpoint Field Functions 
        bool hasDiscoveryEndpoint() const { return this->discoveryEndpoint_ != nullptr;};
        void deleteDiscoveryEndpoint() { this->discoveryEndpoint_ = nullptr;};
        inline string getDiscoveryEndpoint() const { DARABONBA_PTR_GET_DEFAULT(discoveryEndpoint_, "") };
        inline Oidc& setDiscoveryEndpoint(string discoveryEndpoint) { DARABONBA_PTR_SET_VALUE(discoveryEndpoint_, discoveryEndpoint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline Oidc& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksUri Field Functions 
        bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
        void deleteJwksUri() { this->jwksUri_ = nullptr;};
        inline string getJwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
        inline Oidc& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


        // pkceRequired Field Functions 
        bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
        void deletePkceRequired() { this->pkceRequired_ = nullptr;};
        inline bool getPkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
        inline Oidc& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


        // scopes Field Functions 
        bool hasScopes() const { return this->scopes_ != nullptr;};
        void deleteScopes() { this->scopes_ = nullptr;};
        inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
        inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
        inline Oidc& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
        inline Oidc& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


        // ssoMappingClaim Field Functions 
        bool hasSsoMappingClaim() const { return this->ssoMappingClaim_ != nullptr;};
        void deleteSsoMappingClaim() { this->ssoMappingClaim_ = nullptr;};
        inline string getSsoMappingClaim() const { DARABONBA_PTR_GET_DEFAULT(ssoMappingClaim_, "") };
        inline Oidc& setSsoMappingClaim(string ssoMappingClaim) { DARABONBA_PTR_SET_VALUE(ssoMappingClaim_, ssoMappingClaim) };


        // tokenEndpoint Field Functions 
        bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
        void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
        inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
        inline Oidc& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        // userinfoEndpoint Field Functions 
        bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
        void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
        inline string getUserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
        inline Oidc& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


      protected:
        // The authorization endpoint. This field is required in manual mode and must be an absolute HTTPS URL. Do not specify this field in discovery mode.
        shared_ptr<string> authorizationEndpoint_ {};
        // The client authentication method. Default value: client_secret_post. If the value is none, Proof Key for Code Exchange (PKCE) must be enabled.
        shared_ptr<string> clientAuthMethod_ {};
        // The client ID registered in the external IdP. This ID is different from the Matrix client ID. You cannot change the client ID in place after it is configured.
        shared_ptr<string> clientId_ {};
        // The absolute HTTPS OIDC discovery endpoint. This field is mutually exclusive with manually entered endpoints.
        shared_ptr<string> discoveryEndpoint_ {};
        // The absolute HTTPS issuer of the external IdP. You cannot change the issuer in place after it is configured.
        shared_ptr<string> issuer_ {};
        // The authorization endpoint. This field is required in manual mode and must be an absolute HTTPS URL. Do not specify this field in discovery mode.
        shared_ptr<string> jwksUri_ {};
        // Specifies whether PKCE is enabled. Default value: true. This parameter must be set to true when no client authentication is used.
        shared_ptr<bool> pkceRequired_ {};
        // The array of strings that must contain openid. Default values: openid, profile, and email.
        shared_ptr<vector<string>> scopes_ {};
        // The name of the claim in the ID token that is used to match the SCIM externalId. If omitted during creation, the default value sub is used. If omitted during an update, the saved value is retained. For Azure, you can specify oid. The value must be non-empty and cannot contain whitespace characters. When querying oidc, the saved value is returned. When querying oidcConfiguration, the actual upstream value is returned, which may be empty.
        shared_ptr<string> ssoMappingClaim_ {};
        // The authorization endpoint. This field is required in manual mode and must be an absolute HTTPS URL. Do not specify this field in discovery mode.
        shared_ptr<string> tokenEndpoint_ {};
        // The optional absolute HTTPS URL for manual mode. Leave this field empty in discovery mode.
        shared_ptr<string> userinfoEndpoint_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(binding, binding_);
          DARABONBA_PTR_TO_JSON(certificates, certificates_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(binding, binding_);
          DARABONBA_PTR_FROM_JSON(certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->binding_ == nullptr
        && this->certificates_ == nullptr && this->entityId_ == nullptr && this->loginUrl_ == nullptr; };
        // binding Field Functions 
        bool hasBinding() const { return this->binding_ != nullptr;};
        void deleteBinding() { this->binding_ = nullptr;};
        inline string getBinding() const { DARABONBA_PTR_GET_DEFAULT(binding_, "") };
        inline Metadata& setBinding(string binding) { DARABONBA_PTR_SET_VALUE(binding_, binding) };


        // certificates Field Functions 
        bool hasCertificates() const { return this->certificates_ != nullptr;};
        void deleteCertificates() { this->certificates_ = nullptr;};
        inline string getCertificates() const { DARABONBA_PTR_GET_DEFAULT(certificates_, "") };
        inline Metadata& setCertificates(string certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Metadata& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Metadata& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


      protected:
        // The SAML binding URI in the historical metadata snapshot. To update CustomSSO, use the saml.bindingType field.
        shared_ptr<string> binding_ {};
        // The certificate string in the historical metadata snapshot. To edit the configuration, use the saml.x509Certificates field instead of submitting the old metadata.
        shared_ptr<string> certificates_ {};
        // The IdP entity ID. This field is required when you manually enter the metadata. It must be a non-empty string of up to 2,048 characters. You cannot change the entity ID after it is configured. This ID is different from the local entity ID returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The IdP SSO logon URL. This field is required when you manually enter the metadata. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
      };

      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(bindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_TO_JSON(ssoStatus, ssoStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(bindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(loginUrl, loginUrl_);
          DARABONBA_PTR_FROM_JSON(ssoStatus, ssoStatus_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->ssoStatus_ == nullptr; };
        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Configuration& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Configuration& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // loginUrl Field Functions 
        bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
        void deleteLoginUrl() { this->loginUrl_ = nullptr;};
        inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
        inline Configuration& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


        // ssoStatus Field Functions 
        bool hasSsoStatus() const { return this->ssoStatus_ != nullptr;};
        void deleteSsoStatus() { this->ssoStatus_ = nullptr;};
        inline string getSsoStatus() const { DARABONBA_PTR_GET_DEFAULT(ssoStatus_, "") };
        inline Configuration& setSsoStatus(string ssoStatus) { DARABONBA_PTR_SET_VALUE(ssoStatus_, ssoStatus) };


      protected:
        // The SAML binding type. Valid values: HTTP-Redirect and HTTP-POST. This field is required when you manually enter the configuration. The query returns the short name.
        shared_ptr<string> bindingType_ {};
        // The IdP entity ID. This field is required when you manually enter the metadata. It must be a non-empty string of up to 2,048 characters. You cannot change the entity ID after it is configured. This ID is different from the local entity ID returned by the SP query.
        shared_ptr<string> entityId_ {};
        // The IdP SSO logon URL. This field is required when you manually enter the metadata. It must be an absolute HTTPS URL and cannot contain user credentials or fragments.
        shared_ptr<string> loginUrl_ {};
        // The actual SSO logon status of AgentIdentity. The actual switch value is Enabled or Disabled, which is not equivalent to the expected value of loginEnabled saved in the access configuration.
        shared_ptr<string> ssoStatus_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->createdAt_ == nullptr && this->eventSubscriptionCallbackUrl_ == nullptr && this->identityProviderType_ == nullptr && this->loginCallbackUrl_ == nullptr && this->loginEnabled_ == nullptr
        && this->metadata_ == nullptr && this->oidc_ == nullptr && this->operationStatus_ == nullptr && this->protocol_ == nullptr && this->saml_ == nullptr
        && this->scimStatus_ == nullptr && this->status_ == nullptr && this->syncEnabled_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // eventSubscriptionCallbackUrl Field Functions 
      bool hasEventSubscriptionCallbackUrl() const { return this->eventSubscriptionCallbackUrl_ != nullptr;};
      void deleteEventSubscriptionCallbackUrl() { this->eventSubscriptionCallbackUrl_ = nullptr;};
      inline string getEventSubscriptionCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionCallbackUrl_, "") };
      inline Data& setEventSubscriptionCallbackUrl(string eventSubscriptionCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventSubscriptionCallbackUrl_, eventSubscriptionCallbackUrl) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline Data& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // loginCallbackUrl Field Functions 
      bool hasLoginCallbackUrl() const { return this->loginCallbackUrl_ != nullptr;};
      void deleteLoginCallbackUrl() { this->loginCallbackUrl_ = nullptr;};
      inline string getLoginCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(loginCallbackUrl_, "") };
      inline Data& setLoginCallbackUrl(string loginCallbackUrl) { DARABONBA_PTR_SET_VALUE(loginCallbackUrl_, loginCallbackUrl) };


      // loginEnabled Field Functions 
      bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
      void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
      inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
      inline Data& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // oidc Field Functions 
      bool hasOidc() const { return this->oidc_ != nullptr;};
      void deleteOidc() { this->oidc_ = nullptr;};
      inline const Data::Oidc & getOidc() const { DARABONBA_PTR_GET_CONST(oidc_, Data::Oidc) };
      inline Data::Oidc getOidc() { DARABONBA_PTR_GET(oidc_, Data::Oidc) };
      inline Data& setOidc(const Data::Oidc & oidc) { DARABONBA_PTR_SET_VALUE(oidc_, oidc) };
      inline Data& setOidc(Data::Oidc && oidc) { DARABONBA_PTR_SET_RVALUE(oidc_, oidc) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline Data& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Data::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Data::Saml) };
      inline Data::Saml getSaml() { DARABONBA_PTR_GET(saml_, Data::Saml) };
      inline Data& setSaml(const Data::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Data& setSaml(Data::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


      // scimStatus Field Functions 
      bool hasScimStatus() const { return this->scimStatus_ != nullptr;};
      void deleteScimStatus() { this->scimStatus_ = nullptr;};
      inline string getScimStatus() const { DARABONBA_PTR_GET_DEFAULT(scimStatus_, "") };
      inline Data& setScimStatus(string scimStatus) { DARABONBA_PTR_SET_VALUE(scimStatus_, scimStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Data& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The actual upstream configuration. The actual SAML configuration is read back on demand only by the GetIdentityProvider API operation. The SCIM query and preparation operations return the actual receiving status and URL.
      shared_ptr<Data::Configuration> configuration_ {};
      // The time when the record was created on the server.
      shared_ptr<string> createdAt_ {};
      // The SAML vendor event callback URL. For CustomSSO, an empty string is returned. To obtain the SCIM receiving URL, call the SCIM query or preparation API operation. The example shows a JSON empty string "", but the actual value does not include double quotation marks.
      shared_ptr<string> eventSubscriptionCallbackUrl_ {};
      // The identity provider type. General CRUD operations support DingTalk, Feishu, and CustomSSO. SP queries support only CustomSSO. The SCIM path uses the CustomSSO shared pool.
      shared_ptr<string> identityProviderType_ {};
      // The SAML vendor callback URL. For CustomSSO, an empty string is returned. To obtain the Assertion Consumer Service (ACS) URL for SAML, call the SP query API operation. The example shows a JSON empty string "", but the actual value does not include double quotation marks.
      shared_ptr<string> loginCallbackUrl_ {};
      // Specifies whether logon is enabled. Do not set this parameter to true during CustomSSO initialization. You must save a valid SAML configuration before enabling logon. Disabling logon does not delete the configuration. If an asynchronous task fails, this expected value does not indicate that the change has taken effect on the upstream server.
      shared_ptr<bool> loginEnabled_ {};
      // The standard identity provider (IdP) metadata. Vendor parameters are used for DingTalk and Feishu. To update CustomSSO, use the protocol and saml fields. This field is not accepted for CustomSSO updates. The return value does not include vendor keys.
      shared_ptr<Data::Metadata> metadata_ {};
      // The security summary of the expected OIDC configuration. This summary does not include credentials. The original SAML fields and their meanings are retained.
      shared_ptr<Data::Oidc> oidc_ {};
      // The original status of the most recent independent SCIM operation task. If no historical tasks exist, an empty string ("") is returned.
      shared_ptr<string> operationStatus_ {};
      // The logon protocol. Only SAML is supported. This field may not be returned if no valid configuration is saved. You cannot use OIDC as a placeholder for initialization.
      shared_ptr<string> protocol_ {};
      // The SAML logon configuration. You can provide the input by using XML or by manually entering all fields. The query returns the standardized configuration and does not echo the original XML. This field can be omitted if it is not configured.
      shared_ptr<Data::Saml> saml_ {};
      // The independent SCIM status. This field does not change the meaning of the original status field for shared resources and logon configurations. It corresponds to the data.status field in the query API operation.
      shared_ptr<string> scimStatus_ {};
      // The operation status of the CustomSSO user pool lifecycle and logon configuration tasks. This status does not indicate the result of SCIM operations. To query the result of the SCIM switch, use the GetIdentityProviderSCIM.operationStatus field. You cannot use this field to determine whether all protocols are configured.
      shared_ptr<string> status_ {};
      // Specifies whether to enable SCIM synchronization. Do not set this parameter to true during CustomSSO initialization. You can only update this parameter later by calling UpdateIdentityProviderSCIM. Determine the result based on the operationStatus field.
      shared_ptr<bool> syncEnabled_ {};
      // The time when the record was last updated on the server.
      shared_ptr<string> updatedAt_ {};
      // Required. The ID of the destination workspace. The region of the request must be the same as the region of the destination workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateIdentityProviderSCIMResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateIdentityProviderSCIMResponseBody::Data) };
    inline UpdateIdentityProviderSCIMResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateIdentityProviderSCIMResponseBody::Data) };
    inline UpdateIdentityProviderSCIMResponseBody& setData(const UpdateIdentityProviderSCIMResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateIdentityProviderSCIMResponseBody& setData(UpdateIdentityProviderSCIMResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateIdentityProviderSCIMResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateIdentityProviderSCIMResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateIdentityProviderSCIMResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business result code. If the request fails, use this code in combination with the HTTP status code and the result message for troubleshooting.
    shared_ptr<string> code_ {};
    // The data object. Retains the original fields and the meaning of the status field. The new scimStatus field corresponds to the data.status field in the query API operation, and the operationStatus field retains the status of the most recent SCIM task.
    shared_ptr<UpdateIdentityProviderSCIMResponseBody::Data> data_ {};
    // The HTTP status code. Indicates the processing status of the current request, which does not necessarily reflect the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result message. Indicates whether the request is accepted or returns an error message. For an asynchronous task, check the task result by calling the corresponding query API operation.
    shared_ptr<string> message_ {};
    // The request ID. Retain this ID to correlate the current call and troubleshoot failures.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current request is successful. A value of true indicates that the request is processed successfully. For asynchronous write operations, you must continue to query the task result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
