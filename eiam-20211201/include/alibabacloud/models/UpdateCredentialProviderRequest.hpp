// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALPROVIDERREQUEST_HPP_
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
  class UpdateCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CredentialProviderConfig, credentialProviderConfig_);
      DARABONBA_PTR_TO_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_TO_JSON(CredentialProviderName, credentialProviderName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderConfig, credentialProviderConfig_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderName, credentialProviderName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateCredentialProviderRequest() = default ;
    UpdateCredentialProviderRequest(const UpdateCredentialProviderRequest &) = default ;
    UpdateCredentialProviderRequest(UpdateCredentialProviderRequest &&) = default ;
    UpdateCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialProviderRequest() = default ;
    UpdateCredentialProviderRequest& operator=(const UpdateCredentialProviderRequest &) = default ;
    UpdateCredentialProviderRequest& operator=(UpdateCredentialProviderRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, OAuthProviderConfig& obj) { 
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
        virtual bool empty() const override { return this->clientSecret_ == nullptr
        && this->scope_ == nullptr && this->tokenEndpoint_ == nullptr; };
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
        // The client secret defined in the OAuth protocol.
        // 
        // > The value must be no longer than 1024 characters.
        shared_ptr<string> clientSecret_ {};
        // The scope defined in the OAuth protocol.
        // 
        // > If you do not specify the scope parameter when calling the DeveloperAPI to get an OAuth access token, the scope configured for the credential provider is used as the default.
        // 
        // >Notice: 
        // 
        // Separate multiple scope values with spaces. To clear the scope configuration, pass an empty string.
        // 
        // 
        // 
        // Rules for a single scope value:
        // 
        // 1. Allowed characters: lowercase letters, digits, and special characters `|/:_-.`
        // 
        // 2. Must contain at least one lowercase letter or digit.
        // 
        // 3. Must start with a special character `.`, a lowercase letter, or a digit.
        // 
        // 4. Must be no longer than 1024 characters.
        shared_ptr<string> scope_ {};
        // The token endpoint defined in the OAuth protocol.
        // 
        // > The value must start with `http://` or `https://`. It must be no longer than 1024 characters.
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
        // A list of allowed JWT issuers.
        // 
        // > The list must contain no more than 200 items.
        // 
        // >Notice: 
        // 
        // To clear the issuer list, pass an empty array or an empty string.
        shared_ptr<vector<string>> allowedTokenIssuers_ {};
        // Whether to enable derived short tokens for JWTs.
        shared_ptr<bool> derivedShortTokenEnabled_ {};
        // The validity period of the JWT, in seconds.
        shared_ptr<int32_t> expiration_ {};
        // Whether to enable JWT expiration cleanup.
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
      // The configuration for a JWT credential provider.
      shared_ptr<CredentialProviderConfig::JwtProviderConfig> jwtProviderConfig_ {};
      // The configuration for an OAuth credential provider.
      shared_ptr<CredentialProviderConfig::OAuthProviderConfig> OAuthProviderConfig_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->credentialProviderConfig_ == nullptr && this->credentialProviderId_ == nullptr && this->credentialProviderName_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCredentialProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // credentialProviderConfig Field Functions 
    bool hasCredentialProviderConfig() const { return this->credentialProviderConfig_ != nullptr;};
    void deleteCredentialProviderConfig() { this->credentialProviderConfig_ = nullptr;};
    inline const UpdateCredentialProviderRequest::CredentialProviderConfig & getCredentialProviderConfig() const { DARABONBA_PTR_GET_CONST(credentialProviderConfig_, UpdateCredentialProviderRequest::CredentialProviderConfig) };
    inline UpdateCredentialProviderRequest::CredentialProviderConfig getCredentialProviderConfig() { DARABONBA_PTR_GET(credentialProviderConfig_, UpdateCredentialProviderRequest::CredentialProviderConfig) };
    inline UpdateCredentialProviderRequest& setCredentialProviderConfig(const UpdateCredentialProviderRequest::CredentialProviderConfig & credentialProviderConfig) { DARABONBA_PTR_SET_VALUE(credentialProviderConfig_, credentialProviderConfig) };
    inline UpdateCredentialProviderRequest& setCredentialProviderConfig(UpdateCredentialProviderRequest::CredentialProviderConfig && credentialProviderConfig) { DARABONBA_PTR_SET_RVALUE(credentialProviderConfig_, credentialProviderConfig) };


    // credentialProviderId Field Functions 
    bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
    void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
    inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
    inline UpdateCredentialProviderRequest& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


    // credentialProviderName Field Functions 
    bool hasCredentialProviderName() const { return this->credentialProviderName_ != nullptr;};
    void deleteCredentialProviderName() { this->credentialProviderName_ = nullptr;};
    inline string getCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderName_, "") };
    inline UpdateCredentialProviderRequest& setCredentialProviderName(string credentialProviderName) { DARABONBA_PTR_SET_VALUE(credentialProviderName_, credentialProviderName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // An idempotency token that ensures request idempotence.
    // 
    // Generate a unique value on your client for each request. ClientToken supports only ASCII characters and must be no longer than 64 characters. For more information, see [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The configuration of the credential provider.
    shared_ptr<UpdateCredentialProviderRequest::CredentialProviderConfig> credentialProviderConfig_ {};
    // The ID of the credential provider.
    // 
    // This parameter is required.
    shared_ptr<string> credentialProviderId_ {};
    // The name of the credential provider.
    // 
    // > The name must be no longer than 64 characters.
    shared_ptr<string> credentialProviderName_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
