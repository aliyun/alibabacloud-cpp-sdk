// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREDENTIALPROVIDERRESPONSEBODY_HPP_
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
  class GetCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialProvider, credentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialProvider, credentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCredentialProviderResponseBody() = default ;
    GetCredentialProviderResponseBody(const GetCredentialProviderResponseBody &) = default ;
    GetCredentialProviderResponseBody(GetCredentialProviderResponseBody &&) = default ;
    GetCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCredentialProviderResponseBody() = default ;
    GetCredentialProviderResponseBody& operator=(const GetCredentialProviderResponseBody &) = default ;
    GetCredentialProviderResponseBody& operator=(GetCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CredentialProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialProvider& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialProviderConfig, credentialProviderConfig_);
        DARABONBA_PTR_TO_JSON(CredentialProviderCreationType, credentialProviderCreationType_);
        DARABONBA_PTR_TO_JSON(CredentialProviderId, credentialProviderId_);
        DARABONBA_PTR_TO_JSON(CredentialProviderIdentifier, credentialProviderIdentifier_);
        DARABONBA_PTR_TO_JSON(CredentialProviderName, credentialProviderName_);
        DARABONBA_PTR_TO_JSON(CredentialProviderType, credentialProviderType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderConfig, credentialProviderConfig_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderCreationType, credentialProviderCreationType_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderId, credentialProviderId_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderIdentifier, credentialProviderIdentifier_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderName, credentialProviderName_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderType, credentialProviderType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CredentialProvider() = default ;
      CredentialProvider(const CredentialProvider &) = default ;
      CredentialProvider(CredentialProvider &&) = default ;
      CredentialProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CredentialProvider() = default ;
      CredentialProvider& operator=(const CredentialProvider &) = default ;
      CredentialProvider& operator=(CredentialProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CredentialProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CredentialProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(JwtProviderConfig, jwtProviderConfig_);
          DARABONBA_PTR_TO_JSON(OAuthProviderConfig, OAuthProviderConfig_);
          DARABONBA_PTR_TO_JSON(ProviderCredentialIds, providerCredentialIds_);
        };
        friend void from_json(const Darabonba::Json& j, CredentialProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(JwtProviderConfig, jwtProviderConfig_);
          DARABONBA_PTR_FROM_JSON(OAuthProviderConfig, OAuthProviderConfig_);
          DARABONBA_PTR_FROM_JSON(ProviderCredentialIds, providerCredentialIds_);
        };
        CredentialProviderConfig() = default ;
        CredentialProviderConfig(const CredentialProviderConfig &) = default ;
        CredentialProviderConfig(CredentialProviderConfig &&) = default ;
        CredentialProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CredentialProviderConfig() = default ;
        CredentialProviderConfig& operator=(const CredentialProviderConfig &) = default ;
        CredentialProviderConfig& operator=(CredentialProviderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OAuthProviderConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OAuthProviderConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(Scope, scope_);
            DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          };
          friend void from_json(const Darabonba::Json& j, OAuthProviderConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
            DARABONBA_PTR_FROM_JSON(Scope, scope_);
            DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          };
          OAuthProviderConfig() = default ;
          OAuthProviderConfig(const OAuthProviderConfig &) = default ;
          OAuthProviderConfig(OAuthProviderConfig &&) = default ;
          OAuthProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OAuthProviderConfig() = default ;
          OAuthProviderConfig& operator=(const OAuthProviderConfig &) = default ;
          OAuthProviderConfig& operator=(OAuthProviderConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clientId_ == nullptr
        && this->scope_ == nullptr && this->tokenEndpoint_ == nullptr; };
          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline OAuthProviderConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
          inline OAuthProviderConfig& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


          // tokenEndpoint Field Functions 
          bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
          void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
          inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
          inline OAuthProviderConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        protected:
          // OAuth协议中的client_id，客户端ID。
          shared_ptr<string> clientId_ {};
          // OAuth协议中的scope，权限范围。
          shared_ptr<string> scope_ {};
          // OAuth协议的Token端点。
          shared_ptr<string> tokenEndpoint_ {};
        };

        class JwtProviderConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JwtProviderConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AllowedTokenIssuers, allowedTokenIssuers_);
            DARABONBA_PTR_TO_JSON(DerivedShortTokenEnabled, derivedShortTokenEnabled_);
            DARABONBA_PTR_TO_JSON(Expiration, expiration_);
            DARABONBA_PTR_TO_JSON(ExpirationCleanupEnabled, expirationCleanupEnabled_);
            DARABONBA_PTR_TO_JSON(Issuer, issuer_);
            DARABONBA_PTR_TO_JSON(JwksEndpoint, jwksEndpoint_);
          };
          friend void from_json(const Darabonba::Json& j, JwtProviderConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AllowedTokenIssuers, allowedTokenIssuers_);
            DARABONBA_PTR_FROM_JSON(DerivedShortTokenEnabled, derivedShortTokenEnabled_);
            DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
            DARABONBA_PTR_FROM_JSON(ExpirationCleanupEnabled, expirationCleanupEnabled_);
            DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
            DARABONBA_PTR_FROM_JSON(JwksEndpoint, jwksEndpoint_);
          };
          JwtProviderConfig() = default ;
          JwtProviderConfig(const JwtProviderConfig &) = default ;
          JwtProviderConfig(JwtProviderConfig &&) = default ;
          JwtProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~JwtProviderConfig() = default ;
          JwtProviderConfig& operator=(const JwtProviderConfig &) = default ;
          JwtProviderConfig& operator=(JwtProviderConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allowedTokenIssuers_ == nullptr
        && this->derivedShortTokenEnabled_ == nullptr && this->expiration_ == nullptr && this->expirationCleanupEnabled_ == nullptr && this->issuer_ == nullptr && this->jwksEndpoint_ == nullptr; };
          // allowedTokenIssuers Field Functions 
          bool hasAllowedTokenIssuers() const { return this->allowedTokenIssuers_ != nullptr;};
          void deleteAllowedTokenIssuers() { this->allowedTokenIssuers_ = nullptr;};
          inline const vector<string> & getAllowedTokenIssuers() const { DARABONBA_PTR_GET_CONST(allowedTokenIssuers_, vector<string>) };
          inline vector<string> getAllowedTokenIssuers() { DARABONBA_PTR_GET(allowedTokenIssuers_, vector<string>) };
          inline JwtProviderConfig& setAllowedTokenIssuers(const vector<string> & allowedTokenIssuers) { DARABONBA_PTR_SET_VALUE(allowedTokenIssuers_, allowedTokenIssuers) };
          inline JwtProviderConfig& setAllowedTokenIssuers(vector<string> && allowedTokenIssuers) { DARABONBA_PTR_SET_RVALUE(allowedTokenIssuers_, allowedTokenIssuers) };


          // derivedShortTokenEnabled Field Functions 
          bool hasDerivedShortTokenEnabled() const { return this->derivedShortTokenEnabled_ != nullptr;};
          void deleteDerivedShortTokenEnabled() { this->derivedShortTokenEnabled_ = nullptr;};
          inline bool getDerivedShortTokenEnabled() const { DARABONBA_PTR_GET_DEFAULT(derivedShortTokenEnabled_, false) };
          inline JwtProviderConfig& setDerivedShortTokenEnabled(bool derivedShortTokenEnabled) { DARABONBA_PTR_SET_VALUE(derivedShortTokenEnabled_, derivedShortTokenEnabled) };


          // expiration Field Functions 
          bool hasExpiration() const { return this->expiration_ != nullptr;};
          void deleteExpiration() { this->expiration_ = nullptr;};
          inline int32_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
          inline JwtProviderConfig& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


          // expirationCleanupEnabled Field Functions 
          bool hasExpirationCleanupEnabled() const { return this->expirationCleanupEnabled_ != nullptr;};
          void deleteExpirationCleanupEnabled() { this->expirationCleanupEnabled_ = nullptr;};
          inline bool getExpirationCleanupEnabled() const { DARABONBA_PTR_GET_DEFAULT(expirationCleanupEnabled_, false) };
          inline JwtProviderConfig& setExpirationCleanupEnabled(bool expirationCleanupEnabled) { DARABONBA_PTR_SET_VALUE(expirationCleanupEnabled_, expirationCleanupEnabled) };


          // issuer Field Functions 
          bool hasIssuer() const { return this->issuer_ != nullptr;};
          void deleteIssuer() { this->issuer_ = nullptr;};
          inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
          inline JwtProviderConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


          // jwksEndpoint Field Functions 
          bool hasJwksEndpoint() const { return this->jwksEndpoint_ != nullptr;};
          void deleteJwksEndpoint() { this->jwksEndpoint_ = nullptr;};
          inline string getJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(jwksEndpoint_, "") };
          inline JwtProviderConfig& setJwksEndpoint(string jwksEndpoint) { DARABONBA_PTR_SET_VALUE(jwksEndpoint_, jwksEndpoint) };


        protected:
          // 签发出的JWT中的issuer字段的允许列表。
          shared_ptr<vector<string>> allowedTokenIssuers_ {};
          // 是否开启JWT派生短令牌能力。
          shared_ptr<bool> derivedShortTokenEnabled_ {};
          // JWT的有效时长，单位秒。
          shared_ptr<int32_t> expiration_ {};
          // 是否开启JWT过期清理。
          shared_ptr<bool> expirationCleanupEnabled_ {};
          // JWT issuer。
          shared_ptr<string> issuer_ {};
          // JWKs端点地址。
          shared_ptr<string> jwksEndpoint_ {};
        };

        virtual bool empty() const override { return this->jwtProviderConfig_ == nullptr
        && this->OAuthProviderConfig_ == nullptr && this->providerCredentialIds_ == nullptr; };
        // jwtProviderConfig Field Functions 
        bool hasJwtProviderConfig() const { return this->jwtProviderConfig_ != nullptr;};
        void deleteJwtProviderConfig() { this->jwtProviderConfig_ = nullptr;};
        inline const CredentialProviderConfig::JwtProviderConfig & getJwtProviderConfig() const { DARABONBA_PTR_GET_CONST(jwtProviderConfig_, CredentialProviderConfig::JwtProviderConfig) };
        inline CredentialProviderConfig::JwtProviderConfig getJwtProviderConfig() { DARABONBA_PTR_GET(jwtProviderConfig_, CredentialProviderConfig::JwtProviderConfig) };
        inline CredentialProviderConfig& setJwtProviderConfig(const CredentialProviderConfig::JwtProviderConfig & jwtProviderConfig) { DARABONBA_PTR_SET_VALUE(jwtProviderConfig_, jwtProviderConfig) };
        inline CredentialProviderConfig& setJwtProviderConfig(CredentialProviderConfig::JwtProviderConfig && jwtProviderConfig) { DARABONBA_PTR_SET_RVALUE(jwtProviderConfig_, jwtProviderConfig) };


        // OAuthProviderConfig Field Functions 
        bool hasOAuthProviderConfig() const { return this->OAuthProviderConfig_ != nullptr;};
        void deleteOAuthProviderConfig() { this->OAuthProviderConfig_ = nullptr;};
        inline const CredentialProviderConfig::OAuthProviderConfig & getOAuthProviderConfig() const { DARABONBA_PTR_GET_CONST(OAuthProviderConfig_, CredentialProviderConfig::OAuthProviderConfig) };
        inline CredentialProviderConfig::OAuthProviderConfig getOAuthProviderConfig() { DARABONBA_PTR_GET(OAuthProviderConfig_, CredentialProviderConfig::OAuthProviderConfig) };
        inline CredentialProviderConfig& setOAuthProviderConfig(const CredentialProviderConfig::OAuthProviderConfig & oAuthProviderConfig) { DARABONBA_PTR_SET_VALUE(OAuthProviderConfig_, oAuthProviderConfig) };
        inline CredentialProviderConfig& setOAuthProviderConfig(CredentialProviderConfig::OAuthProviderConfig && oAuthProviderConfig) { DARABONBA_PTR_SET_RVALUE(OAuthProviderConfig_, oAuthProviderConfig) };


        // providerCredentialIds Field Functions 
        bool hasProviderCredentialIds() const { return this->providerCredentialIds_ != nullptr;};
        void deleteProviderCredentialIds() { this->providerCredentialIds_ = nullptr;};
        inline const vector<string> & getProviderCredentialIds() const { DARABONBA_PTR_GET_CONST(providerCredentialIds_, vector<string>) };
        inline vector<string> getProviderCredentialIds() { DARABONBA_PTR_GET(providerCredentialIds_, vector<string>) };
        inline CredentialProviderConfig& setProviderCredentialIds(const vector<string> & providerCredentialIds) { DARABONBA_PTR_SET_VALUE(providerCredentialIds_, providerCredentialIds) };
        inline CredentialProviderConfig& setProviderCredentialIds(vector<string> && providerCredentialIds) { DARABONBA_PTR_SET_RVALUE(providerCredentialIds_, providerCredentialIds) };


      protected:
        // JWT身份提供商配置。
        shared_ptr<CredentialProviderConfig::JwtProviderConfig> jwtProviderConfig_ {};
        // OAuth 2LO机用类型的提供商的配置。
        shared_ptr<CredentialProviderConfig::OAuthProviderConfig> OAuthProviderConfig_ {};
        // 认证令牌提供商的敏感配置对应的凭据ID列表。
        shared_ptr<vector<string>> providerCredentialIds_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialProviderConfig_ == nullptr && this->credentialProviderCreationType_ == nullptr && this->credentialProviderId_ == nullptr && this->credentialProviderIdentifier_ == nullptr && this->credentialProviderName_ == nullptr
        && this->credentialProviderType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CredentialProvider& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialProviderConfig Field Functions 
      bool hasCredentialProviderConfig() const { return this->credentialProviderConfig_ != nullptr;};
      void deleteCredentialProviderConfig() { this->credentialProviderConfig_ = nullptr;};
      inline const CredentialProvider::CredentialProviderConfig & getCredentialProviderConfig() const { DARABONBA_PTR_GET_CONST(credentialProviderConfig_, CredentialProvider::CredentialProviderConfig) };
      inline CredentialProvider::CredentialProviderConfig getCredentialProviderConfig() { DARABONBA_PTR_GET(credentialProviderConfig_, CredentialProvider::CredentialProviderConfig) };
      inline CredentialProvider& setCredentialProviderConfig(const CredentialProvider::CredentialProviderConfig & credentialProviderConfig) { DARABONBA_PTR_SET_VALUE(credentialProviderConfig_, credentialProviderConfig) };
      inline CredentialProvider& setCredentialProviderConfig(CredentialProvider::CredentialProviderConfig && credentialProviderConfig) { DARABONBA_PTR_SET_RVALUE(credentialProviderConfig_, credentialProviderConfig) };


      // credentialProviderCreationType Field Functions 
      bool hasCredentialProviderCreationType() const { return this->credentialProviderCreationType_ != nullptr;};
      void deleteCredentialProviderCreationType() { this->credentialProviderCreationType_ = nullptr;};
      inline string getCredentialProviderCreationType() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderCreationType_, "") };
      inline CredentialProvider& setCredentialProviderCreationType(string credentialProviderCreationType) { DARABONBA_PTR_SET_VALUE(credentialProviderCreationType_, credentialProviderCreationType) };


      // credentialProviderId Field Functions 
      bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
      void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
      inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
      inline CredentialProvider& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


      // credentialProviderIdentifier Field Functions 
      bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
      void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
      inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
      inline CredentialProvider& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


      // credentialProviderName Field Functions 
      bool hasCredentialProviderName() const { return this->credentialProviderName_ != nullptr;};
      void deleteCredentialProviderName() { this->credentialProviderName_ = nullptr;};
      inline string getCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderName_, "") };
      inline CredentialProvider& setCredentialProviderName(string credentialProviderName) { DARABONBA_PTR_SET_VALUE(credentialProviderName_, credentialProviderName) };


      // credentialProviderType Field Functions 
      bool hasCredentialProviderType() const { return this->credentialProviderType_ != nullptr;};
      void deleteCredentialProviderType() { this->credentialProviderType_ = nullptr;};
      inline string getCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderType_, "") };
      inline CredentialProvider& setCredentialProviderType(string credentialProviderType) { DARABONBA_PTR_SET_VALUE(credentialProviderType_, credentialProviderType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CredentialProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CredentialProvider& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CredentialProvider& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CredentialProvider& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 认证令牌提供商的创建时间，Unix时间戳。
      shared_ptr<int64_t> createTime_ {};
      // 认证令牌提供商的配置。
      shared_ptr<CredentialProvider::CredentialProviderConfig> credentialProviderConfig_ {};
      // 认证令牌提供商的创建类型。
      shared_ptr<string> credentialProviderCreationType_ {};
      // 认证令牌提供商ID。
      shared_ptr<string> credentialProviderId_ {};
      // 认证令牌提供商的业务标识。
      shared_ptr<string> credentialProviderIdentifier_ {};
      // 认证令牌提供商名称。
      shared_ptr<string> credentialProviderName_ {};
      // 认证令牌提供商的类型。
      shared_ptr<string> credentialProviderType_ {};
      // 描述。
      shared_ptr<string> description_ {};
      // EIAM实例ID。
      shared_ptr<string> instanceId_ {};
      // 认证令牌提供商的状态。
      shared_ptr<string> status_ {};
      // 认证令牌提供商的更新时间，Unix时间戳。
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->credentialProvider_ == nullptr
        && this->requestId_ == nullptr; };
    // credentialProvider Field Functions 
    bool hasCredentialProvider() const { return this->credentialProvider_ != nullptr;};
    void deleteCredentialProvider() { this->credentialProvider_ = nullptr;};
    inline const GetCredentialProviderResponseBody::CredentialProvider & getCredentialProvider() const { DARABONBA_PTR_GET_CONST(credentialProvider_, GetCredentialProviderResponseBody::CredentialProvider) };
    inline GetCredentialProviderResponseBody::CredentialProvider getCredentialProvider() { DARABONBA_PTR_GET(credentialProvider_, GetCredentialProviderResponseBody::CredentialProvider) };
    inline GetCredentialProviderResponseBody& setCredentialProvider(const GetCredentialProviderResponseBody::CredentialProvider & credentialProvider) { DARABONBA_PTR_SET_VALUE(credentialProvider_, credentialProvider) };
    inline GetCredentialProviderResponseBody& setCredentialProvider(GetCredentialProviderResponseBody::CredentialProvider && credentialProvider) { DARABONBA_PTR_SET_RVALUE(credentialProvider_, credentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCredentialProviderResponseBody::CredentialProvider> credentialProvider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
