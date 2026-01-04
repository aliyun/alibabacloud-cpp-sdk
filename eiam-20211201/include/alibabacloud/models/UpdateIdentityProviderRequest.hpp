// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
    };
    UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest(UpdateIdentityProviderRequest &&) = default ;
    UpdateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest& operator=(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest& operator=(UpdateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WeComConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WeComConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
        DARABONBA_PTR_TO_JSON(CorpSecret, corpSecret_);
        DARABONBA_PTR_TO_JSON(TrustableDomain, trustableDomain_);
      };
      friend void from_json(const Darabonba::Json& j, WeComConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
        DARABONBA_PTR_FROM_JSON(CorpSecret, corpSecret_);
        DARABONBA_PTR_FROM_JSON(TrustableDomain, trustableDomain_);
      };
      WeComConfig() = default ;
      WeComConfig(const WeComConfig &) = default ;
      WeComConfig(WeComConfig &&) = default ;
      WeComConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WeComConfig() = default ;
      WeComConfig& operator=(const WeComConfig &) = default ;
      WeComConfig& operator=(WeComConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->authorizeCallbackDomain_ == nullptr && this->corpSecret_ == nullptr && this->trustableDomain_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline WeComConfig& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // authorizeCallbackDomain Field Functions 
      bool hasAuthorizeCallbackDomain() const { return this->authorizeCallbackDomain_ != nullptr;};
      void deleteAuthorizeCallbackDomain() { this->authorizeCallbackDomain_ = nullptr;};
      inline string getAuthorizeCallbackDomain() const { DARABONBA_PTR_GET_DEFAULT(authorizeCallbackDomain_, "") };
      inline WeComConfig& setAuthorizeCallbackDomain(string authorizeCallbackDomain) { DARABONBA_PTR_SET_VALUE(authorizeCallbackDomain_, authorizeCallbackDomain) };


      // corpSecret Field Functions 
      bool hasCorpSecret() const { return this->corpSecret_ != nullptr;};
      void deleteCorpSecret() { this->corpSecret_ = nullptr;};
      inline string getCorpSecret() const { DARABONBA_PTR_GET_DEFAULT(corpSecret_, "") };
      inline WeComConfig& setCorpSecret(string corpSecret) { DARABONBA_PTR_SET_VALUE(corpSecret_, corpSecret) };


      // trustableDomain Field Functions 
      bool hasTrustableDomain() const { return this->trustableDomain_ != nullptr;};
      void deleteTrustableDomain() { this->trustableDomain_ = nullptr;};
      inline string getTrustableDomain() const { DARABONBA_PTR_GET_DEFAULT(trustableDomain_, "") };
      inline WeComConfig& setTrustableDomain(string trustableDomain) { DARABONBA_PTR_SET_VALUE(trustableDomain_, trustableDomain) };


    protected:
      // 企业微信自建应用的Id
      shared_ptr<string> agentId_ {};
      // 授权回调域
      shared_ptr<string> authorizeCallbackDomain_ {};
      // 企业微信自建应用的corpSecret
      shared_ptr<string> corpSecret_ {};
      // 可信域名
      shared_ptr<string> trustableDomain_ {};
    };

    class OidcConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
        DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_TO_JSON(GrantType, grantType_);
        DARABONBA_PTR_TO_JSON(PkceChallengeMethod, pkceChallengeMethod_);
        DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
      };
      friend void from_json(const Darabonba::Json& j, OidcConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
        DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
        DARABONBA_PTR_FROM_JSON(PkceChallengeMethod, pkceChallengeMethod_);
        DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
      };
      OidcConfig() = default ;
      OidcConfig(const OidcConfig &) = default ;
      OidcConfig(OidcConfig &&) = default ;
      OidcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OidcConfig() = default ;
      OidcConfig& operator=(const OidcConfig &) = default ;
      OidcConfig& operator=(OidcConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndpointConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        EndpointConfig() = default ;
        EndpointConfig(const EndpointConfig &) = default ;
        EndpointConfig(EndpointConfig &&) = default ;
        EndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointConfig() = default ;
        EndpointConfig& operator=(const EndpointConfig &) = default ;
        EndpointConfig& operator=(EndpointConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->issuer_ == nullptr && this->jwksUri_ == nullptr && this->tokenEndpoint_ == nullptr && this->userinfoEndpoint_ == nullptr; };
        // authorizationEndpoint Field Functions 
        bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
        void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
        inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
        inline EndpointConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline EndpointConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksUri Field Functions 
        bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
        void deleteJwksUri() { this->jwksUri_ = nullptr;};
        inline string getJwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
        inline EndpointConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


        // tokenEndpoint Field Functions 
        bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
        void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
        inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
        inline EndpointConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        // userinfoEndpoint Field Functions 
        bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
        void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
        inline string getUserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
        inline EndpointConfig& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


      protected:
        // oAuth2 授权端点。
        shared_ptr<string> authorizationEndpoint_ {};
        // OIDC issuer信息。
        shared_ptr<string> issuer_ {};
        // OIDC jwks地址。
        shared_ptr<string> jwksUri_ {};
        // oAuth2 Token端点。
        shared_ptr<string> tokenEndpoint_ {};
        // OIDC 用户信息端点。
        shared_ptr<string> userinfoEndpoint_ {};
      };

      class AuthnParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthnParam& obj) { 
          DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        };
        friend void from_json(const Darabonba::Json& j, AuthnParam& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        };
        AuthnParam() = default ;
        AuthnParam(const AuthnParam &) = default ;
        AuthnParam(AuthnParam &&) = default ;
        AuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthnParam() = default ;
        AuthnParam& operator=(const AuthnParam &) = default ;
        AuthnParam& operator=(AuthnParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authnMethod_ == nullptr
        && this->clientSecret_ == nullptr; };
        // authnMethod Field Functions 
        bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
        void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
        inline string getAuthnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
        inline AuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline AuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      protected:
        // OIDC/oAuth2 认证方法。
        shared_ptr<string> authnMethod_ {};
        // OIDC/oAuth2 客户端密钥。
        shared_ptr<string> clientSecret_ {};
      };

      virtual bool empty() const override { return this->authnParam_ == nullptr
        && this->endpointConfig_ == nullptr && this->grantScopes_ == nullptr && this->grantType_ == nullptr && this->pkceChallengeMethod_ == nullptr && this->pkceRequired_ == nullptr; };
      // authnParam Field Functions 
      bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
      void deleteAuthnParam() { this->authnParam_ = nullptr;};
      inline const OidcConfig::AuthnParam & getAuthnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, OidcConfig::AuthnParam) };
      inline OidcConfig::AuthnParam getAuthnParam() { DARABONBA_PTR_GET(authnParam_, OidcConfig::AuthnParam) };
      inline OidcConfig& setAuthnParam(const OidcConfig::AuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
      inline OidcConfig& setAuthnParam(OidcConfig::AuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


      // endpointConfig Field Functions 
      bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
      void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
      inline const OidcConfig::EndpointConfig & getEndpointConfig() const { DARABONBA_PTR_GET_CONST(endpointConfig_, OidcConfig::EndpointConfig) };
      inline OidcConfig::EndpointConfig getEndpointConfig() { DARABONBA_PTR_GET(endpointConfig_, OidcConfig::EndpointConfig) };
      inline OidcConfig& setEndpointConfig(const OidcConfig::EndpointConfig & endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };
      inline OidcConfig& setEndpointConfig(OidcConfig::EndpointConfig && endpointConfig) { DARABONBA_PTR_SET_RVALUE(endpointConfig_, endpointConfig) };


      // grantScopes Field Functions 
      bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
      void deleteGrantScopes() { this->grantScopes_ = nullptr;};
      inline const vector<string> & getGrantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
      inline vector<string> getGrantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
      inline OidcConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
      inline OidcConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


      // grantType Field Functions 
      bool hasGrantType() const { return this->grantType_ != nullptr;};
      void deleteGrantType() { this->grantType_ = nullptr;};
      inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
      inline OidcConfig& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


      // pkceChallengeMethod Field Functions 
      bool hasPkceChallengeMethod() const { return this->pkceChallengeMethod_ != nullptr;};
      void deletePkceChallengeMethod() { this->pkceChallengeMethod_ = nullptr;};
      inline string getPkceChallengeMethod() const { DARABONBA_PTR_GET_DEFAULT(pkceChallengeMethod_, "") };
      inline OidcConfig& setPkceChallengeMethod(string pkceChallengeMethod) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethod_, pkceChallengeMethod) };


      // pkceRequired Field Functions 
      bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
      void deletePkceRequired() { this->pkceRequired_ = nullptr;};
      inline bool getPkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
      inline OidcConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


    protected:
      // OIDC客户端认证配置。
      shared_ptr<OidcConfig::AuthnParam> authnParam_ {};
      // OIDC 端点配置。
      shared_ptr<OidcConfig::EndpointConfig> endpointConfig_ {};
      // OIDC标准参数，如profile、email等
      shared_ptr<vector<string>> grantScopes_ {};
      // OIDC授权类型。
      shared_ptr<string> grantType_ {};
      // 支持的PKCE算法类型。
      shared_ptr<string> pkceChallengeMethod_ {};
      // AuthorizationCode授权模式下是否使用PKCE。
      shared_ptr<bool> pkceRequired_ {};
    };

    class LdapConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LdapConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AdministratorPassword, administratorPassword_);
        DARABONBA_PTR_TO_JSON(AdministratorUsername, administratorUsername_);
        DARABONBA_PTR_TO_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
        DARABONBA_PTR_TO_JSON(CertificateFingerprints, certificateFingerprints_);
        DARABONBA_PTR_TO_JSON(LdapProtocol, ldapProtocol_);
        DARABONBA_PTR_TO_JSON(LdapServerHost, ldapServerHost_);
        DARABONBA_PTR_TO_JSON(LdapServerPort, ldapServerPort_);
        DARABONBA_PTR_TO_JSON(StartTlsStatus, startTlsStatus_);
      };
      friend void from_json(const Darabonba::Json& j, LdapConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AdministratorPassword, administratorPassword_);
        DARABONBA_PTR_FROM_JSON(AdministratorUsername, administratorUsername_);
        DARABONBA_PTR_FROM_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
        DARABONBA_PTR_FROM_JSON(CertificateFingerprints, certificateFingerprints_);
        DARABONBA_PTR_FROM_JSON(LdapProtocol, ldapProtocol_);
        DARABONBA_PTR_FROM_JSON(LdapServerHost, ldapServerHost_);
        DARABONBA_PTR_FROM_JSON(LdapServerPort, ldapServerPort_);
        DARABONBA_PTR_FROM_JSON(StartTlsStatus, startTlsStatus_);
      };
      LdapConfig() = default ;
      LdapConfig(const LdapConfig &) = default ;
      LdapConfig(LdapConfig &&) = default ;
      LdapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LdapConfig() = default ;
      LdapConfig& operator=(const LdapConfig &) = default ;
      LdapConfig& operator=(LdapConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->administratorPassword_ == nullptr
        && this->administratorUsername_ == nullptr && this->certificateFingerprintStatus_ == nullptr && this->certificateFingerprints_ == nullptr && this->ldapProtocol_ == nullptr && this->ldapServerHost_ == nullptr
        && this->ldapServerPort_ == nullptr && this->startTlsStatus_ == nullptr; };
      // administratorPassword Field Functions 
      bool hasAdministratorPassword() const { return this->administratorPassword_ != nullptr;};
      void deleteAdministratorPassword() { this->administratorPassword_ = nullptr;};
      inline string getAdministratorPassword() const { DARABONBA_PTR_GET_DEFAULT(administratorPassword_, "") };
      inline LdapConfig& setAdministratorPassword(string administratorPassword) { DARABONBA_PTR_SET_VALUE(administratorPassword_, administratorPassword) };


      // administratorUsername Field Functions 
      bool hasAdministratorUsername() const { return this->administratorUsername_ != nullptr;};
      void deleteAdministratorUsername() { this->administratorUsername_ = nullptr;};
      inline string getAdministratorUsername() const { DARABONBA_PTR_GET_DEFAULT(administratorUsername_, "") };
      inline LdapConfig& setAdministratorUsername(string administratorUsername) { DARABONBA_PTR_SET_VALUE(administratorUsername_, administratorUsername) };


      // certificateFingerprintStatus Field Functions 
      bool hasCertificateFingerprintStatus() const { return this->certificateFingerprintStatus_ != nullptr;};
      void deleteCertificateFingerprintStatus() { this->certificateFingerprintStatus_ = nullptr;};
      inline string getCertificateFingerprintStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateFingerprintStatus_, "") };
      inline LdapConfig& setCertificateFingerprintStatus(string certificateFingerprintStatus) { DARABONBA_PTR_SET_VALUE(certificateFingerprintStatus_, certificateFingerprintStatus) };


      // certificateFingerprints Field Functions 
      bool hasCertificateFingerprints() const { return this->certificateFingerprints_ != nullptr;};
      void deleteCertificateFingerprints() { this->certificateFingerprints_ = nullptr;};
      inline const vector<string> & getCertificateFingerprints() const { DARABONBA_PTR_GET_CONST(certificateFingerprints_, vector<string>) };
      inline vector<string> getCertificateFingerprints() { DARABONBA_PTR_GET(certificateFingerprints_, vector<string>) };
      inline LdapConfig& setCertificateFingerprints(const vector<string> & certificateFingerprints) { DARABONBA_PTR_SET_VALUE(certificateFingerprints_, certificateFingerprints) };
      inline LdapConfig& setCertificateFingerprints(vector<string> && certificateFingerprints) { DARABONBA_PTR_SET_RVALUE(certificateFingerprints_, certificateFingerprints) };


      // ldapProtocol Field Functions 
      bool hasLdapProtocol() const { return this->ldapProtocol_ != nullptr;};
      void deleteLdapProtocol() { this->ldapProtocol_ = nullptr;};
      inline string getLdapProtocol() const { DARABONBA_PTR_GET_DEFAULT(ldapProtocol_, "") };
      inline LdapConfig& setLdapProtocol(string ldapProtocol) { DARABONBA_PTR_SET_VALUE(ldapProtocol_, ldapProtocol) };


      // ldapServerHost Field Functions 
      bool hasLdapServerHost() const { return this->ldapServerHost_ != nullptr;};
      void deleteLdapServerHost() { this->ldapServerHost_ = nullptr;};
      inline string getLdapServerHost() const { DARABONBA_PTR_GET_DEFAULT(ldapServerHost_, "") };
      inline LdapConfig& setLdapServerHost(string ldapServerHost) { DARABONBA_PTR_SET_VALUE(ldapServerHost_, ldapServerHost) };


      // ldapServerPort Field Functions 
      bool hasLdapServerPort() const { return this->ldapServerPort_ != nullptr;};
      void deleteLdapServerPort() { this->ldapServerPort_ = nullptr;};
      inline int32_t getLdapServerPort() const { DARABONBA_PTR_GET_DEFAULT(ldapServerPort_, 0) };
      inline LdapConfig& setLdapServerPort(int32_t ldapServerPort) { DARABONBA_PTR_SET_VALUE(ldapServerPort_, ldapServerPort) };


      // startTlsStatus Field Functions 
      bool hasStartTlsStatus() const { return this->startTlsStatus_ != nullptr;};
      void deleteStartTlsStatus() { this->startTlsStatus_ = nullptr;};
      inline string getStartTlsStatus() const { DARABONBA_PTR_GET_DEFAULT(startTlsStatus_, "") };
      inline LdapConfig& setStartTlsStatus(string startTlsStatus) { DARABONBA_PTR_SET_VALUE(startTlsStatus_, startTlsStatus) };


    protected:
      // 管理员密码
      shared_ptr<string> administratorPassword_ {};
      // 管理员账号
      shared_ptr<string> administratorUsername_ {};
      // 是否验证指纹证书
      shared_ptr<string> certificateFingerprintStatus_ {};
      // 证书指纹列表
      shared_ptr<vector<string>> certificateFingerprints_ {};
      // 通信协议
      shared_ptr<string> ldapProtocol_ {};
      // ad/ldap 服务器地址
      shared_ptr<string> ldapServerHost_ {};
      // 端口号
      shared_ptr<int32_t> ldapServerPort_ {};
      // startTls是否开启
      shared_ptr<string> startTlsStatus_ {};
    };

    class LarkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LarkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
      };
      friend void from_json(const Darabonba::Json& j, LarkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
      };
      LarkConfig() = default ;
      LarkConfig(const LarkConfig &) = default ;
      LarkConfig(LarkConfig &&) = default ;
      LarkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LarkConfig() = default ;
      LarkConfig& operator=(const LarkConfig &) = default ;
      LarkConfig& operator=(LarkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appSecret_ == nullptr && this->encryptKey_ == nullptr && this->verificationToken_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline LarkConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
      inline LarkConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline LarkConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // verificationToken Field Functions 
      bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
      void deleteVerificationToken() { this->verificationToken_ = nullptr;};
      inline string getVerificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
      inline LarkConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appSecret_ {};
      shared_ptr<string> encryptKey_ {};
      shared_ptr<string> verificationToken_ {};
    };

    class DingtalkAppConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DingtalkAppConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_TO_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
      };
      friend void from_json(const Darabonba::Json& j, DingtalkAppConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_FROM_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
      };
      DingtalkAppConfig() = default ;
      DingtalkAppConfig(const DingtalkAppConfig &) = default ;
      DingtalkAppConfig(DingtalkAppConfig &&) = default ;
      DingtalkAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DingtalkAppConfig() = default ;
      DingtalkAppConfig& operator=(const DingtalkAppConfig &) = default ;
      DingtalkAppConfig& operator=(DingtalkAppConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appSecret_ == nullptr && this->dingtalkLoginVersion_ == nullptr && this->encryptKey_ == nullptr && this->verificationToken_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline DingtalkAppConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
      inline DingtalkAppConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


      // dingtalkLoginVersion Field Functions 
      bool hasDingtalkLoginVersion() const { return this->dingtalkLoginVersion_ != nullptr;};
      void deleteDingtalkLoginVersion() { this->dingtalkLoginVersion_ = nullptr;};
      inline string getDingtalkLoginVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkLoginVersion_, "") };
      inline DingtalkAppConfig& setDingtalkLoginVersion(string dingtalkLoginVersion) { DARABONBA_PTR_SET_VALUE(dingtalkLoginVersion_, dingtalkLoginVersion) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline DingtalkAppConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // verificationToken Field Functions 
      bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
      void deleteVerificationToken() { this->verificationToken_ = nullptr;};
      inline string getVerificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
      inline DingtalkAppConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


    protected:
      // 钉钉一方应用的AppKey
      shared_ptr<string> appKey_ {};
      // 钉钉一方应用的AppSecret
      shared_ptr<string> appSecret_ {};
      shared_ptr<string> dingtalkLoginVersion_ {};
      shared_ptr<string> encryptKey_ {};
      shared_ptr<string> verificationToken_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dingtalkAppConfig_ == nullptr && this->identityProviderId_ == nullptr && this->identityProviderName_ == nullptr && this->instanceId_ == nullptr && this->larkConfig_ == nullptr
        && this->ldapConfig_ == nullptr && this->logoUrl_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->oidcConfig_ == nullptr && this->weComConfig_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIdentityProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dingtalkAppConfig Field Functions 
    bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
    void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequest::DingtalkAppConfig & getDingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, UpdateIdentityProviderRequest::DingtalkAppConfig) };
    inline UpdateIdentityProviderRequest::DingtalkAppConfig getDingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, UpdateIdentityProviderRequest::DingtalkAppConfig) };
    inline UpdateIdentityProviderRequest& setDingtalkAppConfig(const UpdateIdentityProviderRequest::DingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
    inline UpdateIdentityProviderRequest& setDingtalkAppConfig(UpdateIdentityProviderRequest::DingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline UpdateIdentityProviderRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline UpdateIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateIdentityProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // larkConfig Field Functions 
    bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
    void deleteLarkConfig() { this->larkConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequest::LarkConfig & getLarkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, UpdateIdentityProviderRequest::LarkConfig) };
    inline UpdateIdentityProviderRequest::LarkConfig getLarkConfig() { DARABONBA_PTR_GET(larkConfig_, UpdateIdentityProviderRequest::LarkConfig) };
    inline UpdateIdentityProviderRequest& setLarkConfig(const UpdateIdentityProviderRequest::LarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
    inline UpdateIdentityProviderRequest& setLarkConfig(UpdateIdentityProviderRequest::LarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequest::LdapConfig & getLdapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, UpdateIdentityProviderRequest::LdapConfig) };
    inline UpdateIdentityProviderRequest::LdapConfig getLdapConfig() { DARABONBA_PTR_GET(ldapConfig_, UpdateIdentityProviderRequest::LdapConfig) };
    inline UpdateIdentityProviderRequest& setLdapConfig(const UpdateIdentityProviderRequest::LdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline UpdateIdentityProviderRequest& setLdapConfig(UpdateIdentityProviderRequest::LdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline UpdateIdentityProviderRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline UpdateIdentityProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcConfig Field Functions 
    bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
    void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequest::OidcConfig & getOidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, UpdateIdentityProviderRequest::OidcConfig) };
    inline UpdateIdentityProviderRequest::OidcConfig getOidcConfig() { DARABONBA_PTR_GET(oidcConfig_, UpdateIdentityProviderRequest::OidcConfig) };
    inline UpdateIdentityProviderRequest& setOidcConfig(const UpdateIdentityProviderRequest::OidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
    inline UpdateIdentityProviderRequest& setOidcConfig(UpdateIdentityProviderRequest::OidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


    // weComConfig Field Functions 
    bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
    void deleteWeComConfig() { this->weComConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequest::WeComConfig & getWeComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, UpdateIdentityProviderRequest::WeComConfig) };
    inline UpdateIdentityProviderRequest::WeComConfig getWeComConfig() { DARABONBA_PTR_GET(weComConfig_, UpdateIdentityProviderRequest::WeComConfig) };
    inline UpdateIdentityProviderRequest& setWeComConfig(const UpdateIdentityProviderRequest::WeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
    inline UpdateIdentityProviderRequest& setWeComConfig(UpdateIdentityProviderRequest::WeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


  protected:
    shared_ptr<string> clientToken_ {};
    // 钉钉出基本信息
    shared_ptr<UpdateIdentityProviderRequest::DingtalkAppConfig> dingtalkAppConfig_ {};
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // 身份提供方名称
    shared_ptr<string> identityProviderName_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 飞书配置
    shared_ptr<UpdateIdentityProviderRequest::LarkConfig> larkConfig_ {};
    // AD/LDAP基本信息
    shared_ptr<UpdateIdentityProviderRequest::LdapConfig> ldapConfig_ {};
    shared_ptr<string> logoUrl_ {};
    // 网络端点ID
    shared_ptr<string> networkAccessEndpointId_ {};
    // OIDC IdP配置。
    shared_ptr<UpdateIdentityProviderRequest::OidcConfig> oidcConfig_ {};
    // 企业微信基本信息
    shared_ptr<UpdateIdentityProviderRequest::WeComConfig> weComConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
