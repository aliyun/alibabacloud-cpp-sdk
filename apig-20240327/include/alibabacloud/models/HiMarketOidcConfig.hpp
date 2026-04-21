// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETOIDCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETOIDCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketOidcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketOidcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authCodeConfig, authCodeConfig_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(grantType, grantType_);
      DARABONBA_PTR_TO_JSON(identityMapping, identityMapping_);
      DARABONBA_PTR_TO_JSON(logoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketOidcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authCodeConfig, authCodeConfig_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(grantType, grantType_);
      DARABONBA_PTR_FROM_JSON(identityMapping, identityMapping_);
      DARABONBA_PTR_FROM_JSON(logoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    HiMarketOidcConfig() = default ;
    HiMarketOidcConfig(const HiMarketOidcConfig &) = default ;
    HiMarketOidcConfig(HiMarketOidcConfig &&) = default ;
    HiMarketOidcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketOidcConfig() = default ;
    HiMarketOidcConfig& operator=(const HiMarketOidcConfig &) = default ;
    HiMarketOidcConfig& operator=(HiMarketOidcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityMapping : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityMapping& obj) { 
        DARABONBA_PTR_TO_JSON(customFields, customFields_);
        DARABONBA_PTR_TO_JSON(emailField, emailField_);
        DARABONBA_PTR_TO_JSON(userIdField, userIdField_);
        DARABONBA_PTR_TO_JSON(userNameField, userNameField_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityMapping& obj) { 
        DARABONBA_PTR_FROM_JSON(customFields, customFields_);
        DARABONBA_PTR_FROM_JSON(emailField, emailField_);
        DARABONBA_PTR_FROM_JSON(userIdField, userIdField_);
        DARABONBA_PTR_FROM_JSON(userNameField, userNameField_);
      };
      IdentityMapping() = default ;
      IdentityMapping(const IdentityMapping &) = default ;
      IdentityMapping(IdentityMapping &&) = default ;
      IdentityMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityMapping() = default ;
      IdentityMapping& operator=(const IdentityMapping &) = default ;
      IdentityMapping& operator=(IdentityMapping &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customFields_ == nullptr
        && this->emailField_ == nullptr && this->userIdField_ == nullptr && this->userNameField_ == nullptr; };
      // customFields Field Functions 
      bool hasCustomFields() const { return this->customFields_ != nullptr;};
      void deleteCustomFields() { this->customFields_ = nullptr;};
      inline const map<string, string> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, map<string, string>) };
      inline map<string, string> getCustomFields() { DARABONBA_PTR_GET(customFields_, map<string, string>) };
      inline IdentityMapping& setCustomFields(const map<string, string> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
      inline IdentityMapping& setCustomFields(map<string, string> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


      // emailField Field Functions 
      bool hasEmailField() const { return this->emailField_ != nullptr;};
      void deleteEmailField() { this->emailField_ = nullptr;};
      inline string getEmailField() const { DARABONBA_PTR_GET_DEFAULT(emailField_, "") };
      inline IdentityMapping& setEmailField(string emailField) { DARABONBA_PTR_SET_VALUE(emailField_, emailField) };


      // userIdField Field Functions 
      bool hasUserIdField() const { return this->userIdField_ != nullptr;};
      void deleteUserIdField() { this->userIdField_ = nullptr;};
      inline string getUserIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
      inline IdentityMapping& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


      // userNameField Field Functions 
      bool hasUserNameField() const { return this->userNameField_ != nullptr;};
      void deleteUserNameField() { this->userNameField_ = nullptr;};
      inline string getUserNameField() const { DARABONBA_PTR_GET_DEFAULT(userNameField_, "") };
      inline IdentityMapping& setUserNameField(string userNameField) { DARABONBA_PTR_SET_VALUE(userNameField_, userNameField) };


    protected:
      shared_ptr<map<string, string>> customFields_ {};
      shared_ptr<string> emailField_ {};
      shared_ptr<string> userIdField_ {};
      shared_ptr<string> userNameField_ {};
    };

    class AuthCodeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthCodeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(authorizationEndpoint, authorizationEndpoint_);
        DARABONBA_PTR_TO_JSON(clientId, clientId_);
        DARABONBA_PTR_TO_JSON(clientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(issuer, issuer_);
        DARABONBA_PTR_TO_JSON(jwkSetUri, jwkSetUri_);
        DARABONBA_PTR_TO_JSON(redirectUri, redirectUri_);
        DARABONBA_PTR_TO_JSON(scopes, scopes_);
        DARABONBA_PTR_TO_JSON(tokenEndpoint, tokenEndpoint_);
        DARABONBA_PTR_TO_JSON(userInfoEndpoint, userInfoEndpoint_);
      };
      friend void from_json(const Darabonba::Json& j, AuthCodeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(authorizationEndpoint, authorizationEndpoint_);
        DARABONBA_PTR_FROM_JSON(clientId, clientId_);
        DARABONBA_PTR_FROM_JSON(clientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(jwkSetUri, jwkSetUri_);
        DARABONBA_PTR_FROM_JSON(redirectUri, redirectUri_);
        DARABONBA_PTR_FROM_JSON(scopes, scopes_);
        DARABONBA_PTR_FROM_JSON(tokenEndpoint, tokenEndpoint_);
        DARABONBA_PTR_FROM_JSON(userInfoEndpoint, userInfoEndpoint_);
      };
      AuthCodeConfig() = default ;
      AuthCodeConfig(const AuthCodeConfig &) = default ;
      AuthCodeConfig(AuthCodeConfig &&) = default ;
      AuthCodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthCodeConfig() = default ;
      AuthCodeConfig& operator=(const AuthCodeConfig &) = default ;
      AuthCodeConfig& operator=(AuthCodeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->issuer_ == nullptr && this->jwkSetUri_ == nullptr && this->redirectUri_ == nullptr
        && this->scopes_ == nullptr && this->tokenEndpoint_ == nullptr && this->userInfoEndpoint_ == nullptr; };
      // authorizationEndpoint Field Functions 
      bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
      void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
      inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
      inline AuthCodeConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline AuthCodeConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline AuthCodeConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline AuthCodeConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // jwkSetUri Field Functions 
      bool hasJwkSetUri() const { return this->jwkSetUri_ != nullptr;};
      void deleteJwkSetUri() { this->jwkSetUri_ = nullptr;};
      inline string getJwkSetUri() const { DARABONBA_PTR_GET_DEFAULT(jwkSetUri_, "") };
      inline AuthCodeConfig& setJwkSetUri(string jwkSetUri) { DARABONBA_PTR_SET_VALUE(jwkSetUri_, jwkSetUri) };


      // redirectUri Field Functions 
      bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
      void deleteRedirectUri() { this->redirectUri_ = nullptr;};
      inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
      inline AuthCodeConfig& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


      // scopes Field Functions 
      bool hasScopes() const { return this->scopes_ != nullptr;};
      void deleteScopes() { this->scopes_ = nullptr;};
      inline string getScopes() const { DARABONBA_PTR_GET_DEFAULT(scopes_, "") };
      inline AuthCodeConfig& setScopes(string scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };


      // tokenEndpoint Field Functions 
      bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
      void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
      inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
      inline AuthCodeConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


      // userInfoEndpoint Field Functions 
      bool hasUserInfoEndpoint() const { return this->userInfoEndpoint_ != nullptr;};
      void deleteUserInfoEndpoint() { this->userInfoEndpoint_ = nullptr;};
      inline string getUserInfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userInfoEndpoint_, "") };
      inline AuthCodeConfig& setUserInfoEndpoint(string userInfoEndpoint) { DARABONBA_PTR_SET_VALUE(userInfoEndpoint_, userInfoEndpoint) };


    protected:
      shared_ptr<string> authorizationEndpoint_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientSecret_ {};
      shared_ptr<string> issuer_ {};
      shared_ptr<string> jwkSetUri_ {};
      shared_ptr<string> redirectUri_ {};
      shared_ptr<string> scopes_ {};
      shared_ptr<string> tokenEndpoint_ {};
      shared_ptr<string> userInfoEndpoint_ {};
    };

    virtual bool empty() const override { return this->authCodeConfig_ == nullptr
        && this->enabled_ == nullptr && this->grantType_ == nullptr && this->identityMapping_ == nullptr && this->logoUrl_ == nullptr && this->name_ == nullptr
        && this->provider_ == nullptr; };
    // authCodeConfig Field Functions 
    bool hasAuthCodeConfig() const { return this->authCodeConfig_ != nullptr;};
    void deleteAuthCodeConfig() { this->authCodeConfig_ = nullptr;};
    inline const HiMarketOidcConfig::AuthCodeConfig & getAuthCodeConfig() const { DARABONBA_PTR_GET_CONST(authCodeConfig_, HiMarketOidcConfig::AuthCodeConfig) };
    inline HiMarketOidcConfig::AuthCodeConfig getAuthCodeConfig() { DARABONBA_PTR_GET(authCodeConfig_, HiMarketOidcConfig::AuthCodeConfig) };
    inline HiMarketOidcConfig& setAuthCodeConfig(const HiMarketOidcConfig::AuthCodeConfig & authCodeConfig) { DARABONBA_PTR_SET_VALUE(authCodeConfig_, authCodeConfig) };
    inline HiMarketOidcConfig& setAuthCodeConfig(HiMarketOidcConfig::AuthCodeConfig && authCodeConfig) { DARABONBA_PTR_SET_RVALUE(authCodeConfig_, authCodeConfig) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline HiMarketOidcConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline HiMarketOidcConfig& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // identityMapping Field Functions 
    bool hasIdentityMapping() const { return this->identityMapping_ != nullptr;};
    void deleteIdentityMapping() { this->identityMapping_ = nullptr;};
    inline const HiMarketOidcConfig::IdentityMapping & getIdentityMapping() const { DARABONBA_PTR_GET_CONST(identityMapping_, HiMarketOidcConfig::IdentityMapping) };
    inline HiMarketOidcConfig::IdentityMapping getIdentityMapping() { DARABONBA_PTR_GET(identityMapping_, HiMarketOidcConfig::IdentityMapping) };
    inline HiMarketOidcConfig& setIdentityMapping(const HiMarketOidcConfig::IdentityMapping & identityMapping) { DARABONBA_PTR_SET_VALUE(identityMapping_, identityMapping) };
    inline HiMarketOidcConfig& setIdentityMapping(HiMarketOidcConfig::IdentityMapping && identityMapping) { DARABONBA_PTR_SET_RVALUE(identityMapping_, identityMapping) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline HiMarketOidcConfig& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HiMarketOidcConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline HiMarketOidcConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    shared_ptr<HiMarketOidcConfig::AuthCodeConfig> authCodeConfig_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> grantType_ {};
    shared_ptr<HiMarketOidcConfig::IdentityMapping> identityMapping_ {};
    shared_ptr<string> logoUrl_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
