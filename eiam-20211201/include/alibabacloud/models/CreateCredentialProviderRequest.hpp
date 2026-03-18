// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALPROVIDERREQUEST_HPP_
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
  class CreateCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CredentialProviderConfig, credentialProviderConfig_);
      DARABONBA_PTR_TO_JSON(CredentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_TO_JSON(CredentialProviderName, credentialProviderName_);
      DARABONBA_PTR_TO_JSON(CredentialProviderType, credentialProviderType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderConfig, credentialProviderConfig_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderName, credentialProviderName_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderType, credentialProviderType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCredentialProviderRequest() = default ;
    CreateCredentialProviderRequest(const CreateCredentialProviderRequest &) = default ;
    CreateCredentialProviderRequest(CreateCredentialProviderRequest &&) = default ;
    CreateCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialProviderRequest() = default ;
    CreateCredentialProviderRequest& operator=(const CreateCredentialProviderRequest &) = default ;
    CreateCredentialProviderRequest& operator=(CreateCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CredentialProviderConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialProviderConfig& obj) { 
        DARABONBA_PTR_TO_JSON(JwtProviderConfig, jwtProviderConfig_);
        DARABONBA_PTR_TO_JSON(OAuthProviderConfig, OAuthProviderConfig_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialProviderConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(JwtProviderConfig, jwtProviderConfig_);
        DARABONBA_PTR_FROM_JSON(OAuthProviderConfig, OAuthProviderConfig_);
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
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, OAuthProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
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
        && this->clientSecret_ == nullptr && this->scope_ == nullptr && this->tokenEndpoint_ == nullptr; };
        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline OAuthProviderConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clientSecret Field Functions 
        bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
        void deleteClientSecret() { this->clientSecret_ = nullptr;};
        inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
        inline OAuthProviderConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


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
        // 
        // This parameter is required.
        shared_ptr<string> clientId_ {};
        // OAuth协议中的client_secret，客户端密钥。
        // 
        // This parameter is required.
        shared_ptr<string> clientSecret_ {};
        // OAuth协议中的scope，权限范围。
        shared_ptr<string> scope_ {};
        // OAuth协议的Token端点。
        // 
        // This parameter is required.
        shared_ptr<string> tokenEndpoint_ {};
      };

      class JwtProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JwtProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedTokenIssuers, allowedTokenIssuers_);
          DARABONBA_PTR_TO_JSON(DerivedShortTokenEnabled, derivedShortTokenEnabled_);
          DARABONBA_PTR_TO_JSON(Expiration, expiration_);
          DARABONBA_PTR_TO_JSON(ExpirationCleanupEnabled, expirationCleanupEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, JwtProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedTokenIssuers, allowedTokenIssuers_);
          DARABONBA_PTR_FROM_JSON(DerivedShortTokenEnabled, derivedShortTokenEnabled_);
          DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
          DARABONBA_PTR_FROM_JSON(ExpirationCleanupEnabled, expirationCleanupEnabled_);
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
        && this->derivedShortTokenEnabled_ == nullptr && this->expiration_ == nullptr && this->expirationCleanupEnabled_ == nullptr; };
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


      protected:
        // 签发出的JWT中的issuer字段的允许列表。
        shared_ptr<vector<string>> allowedTokenIssuers_ {};
        // 是否开启JWT派生短令牌能力。
        shared_ptr<bool> derivedShortTokenEnabled_ {};
        // JWT的有效时长，单位秒。
        shared_ptr<int32_t> expiration_ {};
        // 是否开启JWT过期清理。
        shared_ptr<bool> expirationCleanupEnabled_ {};
      };

      virtual bool empty() const override { return this->jwtProviderConfig_ == nullptr
        && this->OAuthProviderConfig_ == nullptr; };
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


    protected:
      // JWT身份提供商配置。
      shared_ptr<CredentialProviderConfig::JwtProviderConfig> jwtProviderConfig_ {};
      // OAuth 2LO机用类型的提供商的配置。
      shared_ptr<CredentialProviderConfig::OAuthProviderConfig> OAuthProviderConfig_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->credentialProviderConfig_ == nullptr && this->credentialProviderIdentifier_ == nullptr && this->credentialProviderName_ == nullptr && this->credentialProviderType_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCredentialProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialProviderConfig Field Functions 
    bool hasCredentialProviderConfig() const { return this->credentialProviderConfig_ != nullptr;};
    void deleteCredentialProviderConfig() { this->credentialProviderConfig_ = nullptr;};
    inline const CreateCredentialProviderRequest::CredentialProviderConfig & getCredentialProviderConfig() const { DARABONBA_PTR_GET_CONST(credentialProviderConfig_, CreateCredentialProviderRequest::CredentialProviderConfig) };
    inline CreateCredentialProviderRequest::CredentialProviderConfig getCredentialProviderConfig() { DARABONBA_PTR_GET(credentialProviderConfig_, CreateCredentialProviderRequest::CredentialProviderConfig) };
    inline CreateCredentialProviderRequest& setCredentialProviderConfig(const CreateCredentialProviderRequest::CredentialProviderConfig & credentialProviderConfig) { DARABONBA_PTR_SET_VALUE(credentialProviderConfig_, credentialProviderConfig) };
    inline CreateCredentialProviderRequest& setCredentialProviderConfig(CreateCredentialProviderRequest::CredentialProviderConfig && credentialProviderConfig) { DARABONBA_PTR_SET_RVALUE(credentialProviderConfig_, credentialProviderConfig) };


    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline CreateCredentialProviderRequest& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


    // credentialProviderName Field Functions 
    bool hasCredentialProviderName() const { return this->credentialProviderName_ != nullptr;};
    void deleteCredentialProviderName() { this->credentialProviderName_ = nullptr;};
    inline string getCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderName_, "") };
    inline CreateCredentialProviderRequest& setCredentialProviderName(string credentialProviderName) { DARABONBA_PTR_SET_VALUE(credentialProviderName_, credentialProviderName) };


    // credentialProviderType Field Functions 
    bool hasCredentialProviderType() const { return this->credentialProviderType_ != nullptr;};
    void deleteCredentialProviderType() { this->credentialProviderType_ = nullptr;};
    inline string getCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderType_, "") };
    inline CreateCredentialProviderRequest& setCredentialProviderType(string credentialProviderType) { DARABONBA_PTR_SET_VALUE(credentialProviderType_, credentialProviderType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCredentialProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 保证请求幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符，且不能超过64个字符。
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 认证令牌提供商的配置。
    shared_ptr<CreateCredentialProviderRequest::CredentialProviderConfig> credentialProviderConfig_ {};
    // 认证令牌提供商的业务标识。是一个具备可读性的唯一标识。
    // 
    // This parameter is required.
    shared_ptr<string> credentialProviderIdentifier_ {};
    // 认证令牌提供商名称。
    // 
    // This parameter is required.
    shared_ptr<string> credentialProviderName_ {};
    // 认证令牌提供商的类型。
    // 
    // This parameter is required.
    shared_ptr<string> credentialProviderType_ {};
    // 描述。
    shared_ptr<string> description_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
