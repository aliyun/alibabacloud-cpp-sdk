// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDAPP_HPP_
#define ALIBABACLOUD_MODELS_THIRDAPP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ThirdApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ThirdApp() = default ;
    ThirdApp(const ThirdApp &) = default ;
    ThirdApp(ThirdApp &&) = default ;
    ThirdApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdApp() = default ;
    ThirdApp& operator=(const ThirdApp &) = default ;
    ThirdApp& operator=(ThirdApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Secrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Secret, secret_);
      };
      friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Secret, secret_);
      };
      Secrets() = default ;
      Secrets(const Secrets &) = default ;
      Secrets(Secrets &&) = default ;
      Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Secrets() = default ;
      Secrets& operator=(const Secrets &) = default ;
      Secrets& operator=(Secrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->secret_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Secrets& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
      inline Secrets& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    protected:
      shared_ptr<bool> enable_ {};
      shared_ptr<string> secret_ {};
    };

    class OidcSsoConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcSsoConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
        DARABONBA_PTR_TO_JSON(CodeEffectiveTime, codeEffectiveTime_);
        DARABONBA_PTR_TO_JSON(EnableAuthLogin, enableAuthLogin_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_TO_JSON(GrantTypes, grantTypes_);
        DARABONBA_PTR_TO_JSON(IdTokenAlgorithmType, idTokenAlgorithmType_);
        DARABONBA_PTR_TO_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
        DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_TO_JSON(RefreshTokenEffective, refreshTokenEffective_);
      };
      friend void from_json(const Darabonba::Json& j, OidcSsoConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(CodeEffectiveTime, codeEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(EnableAuthLogin, enableAuthLogin_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_FROM_JSON(GrantTypes, grantTypes_);
        DARABONBA_PTR_FROM_JSON(IdTokenAlgorithmType, idTokenAlgorithmType_);
        DARABONBA_PTR_FROM_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenEffective, refreshTokenEffective_);
      };
      OidcSsoConfig() = default ;
      OidcSsoConfig(const OidcSsoConfig &) = default ;
      OidcSsoConfig(OidcSsoConfig &&) = default ;
      OidcSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OidcSsoConfig() = default ;
      OidcSsoConfig& operator=(const OidcSsoConfig &) = default ;
      OidcSsoConfig& operator=(OidcSsoConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(DiscoveryEndpoint, discoveryEndpoint_);
          DARABONBA_PTR_TO_JSON(GuestAuthorizationEndpoint, guestAuthorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JwksEndpoint, jwksEndpoint_);
          DARABONBA_PTR_TO_JSON(LogoutEndpoint, logoutEndpoint_);
          DARABONBA_PTR_TO_JSON(RevokeEndpoint, revokeEndpoint_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(DiscoveryEndpoint, discoveryEndpoint_);
          DARABONBA_PTR_FROM_JSON(GuestAuthorizationEndpoint, guestAuthorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JwksEndpoint, jwksEndpoint_);
          DARABONBA_PTR_FROM_JSON(LogoutEndpoint, logoutEndpoint_);
          DARABONBA_PTR_FROM_JSON(RevokeEndpoint, revokeEndpoint_);
          DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
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
        virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->discoveryEndpoint_ == nullptr && this->guestAuthorizationEndpoint_ == nullptr && this->issuer_ == nullptr && this->jwksEndpoint_ == nullptr && this->logoutEndpoint_ == nullptr
        && this->revokeEndpoint_ == nullptr && this->tokenEndpoint_ == nullptr && this->userinfoEndpoint_ == nullptr; };
        // authorizationEndpoint Field Functions 
        bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
        void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
        inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
        inline Endpoints& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


        // discoveryEndpoint Field Functions 
        bool hasDiscoveryEndpoint() const { return this->discoveryEndpoint_ != nullptr;};
        void deleteDiscoveryEndpoint() { this->discoveryEndpoint_ = nullptr;};
        inline string getDiscoveryEndpoint() const { DARABONBA_PTR_GET_DEFAULT(discoveryEndpoint_, "") };
        inline Endpoints& setDiscoveryEndpoint(string discoveryEndpoint) { DARABONBA_PTR_SET_VALUE(discoveryEndpoint_, discoveryEndpoint) };


        // guestAuthorizationEndpoint Field Functions 
        bool hasGuestAuthorizationEndpoint() const { return this->guestAuthorizationEndpoint_ != nullptr;};
        void deleteGuestAuthorizationEndpoint() { this->guestAuthorizationEndpoint_ = nullptr;};
        inline string getGuestAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(guestAuthorizationEndpoint_, "") };
        inline Endpoints& setGuestAuthorizationEndpoint(string guestAuthorizationEndpoint) { DARABONBA_PTR_SET_VALUE(guestAuthorizationEndpoint_, guestAuthorizationEndpoint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline Endpoints& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksEndpoint Field Functions 
        bool hasJwksEndpoint() const { return this->jwksEndpoint_ != nullptr;};
        void deleteJwksEndpoint() { this->jwksEndpoint_ = nullptr;};
        inline string getJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(jwksEndpoint_, "") };
        inline Endpoints& setJwksEndpoint(string jwksEndpoint) { DARABONBA_PTR_SET_VALUE(jwksEndpoint_, jwksEndpoint) };


        // logoutEndpoint Field Functions 
        bool hasLogoutEndpoint() const { return this->logoutEndpoint_ != nullptr;};
        void deleteLogoutEndpoint() { this->logoutEndpoint_ = nullptr;};
        inline string getLogoutEndpoint() const { DARABONBA_PTR_GET_DEFAULT(logoutEndpoint_, "") };
        inline Endpoints& setLogoutEndpoint(string logoutEndpoint) { DARABONBA_PTR_SET_VALUE(logoutEndpoint_, logoutEndpoint) };


        // revokeEndpoint Field Functions 
        bool hasRevokeEndpoint() const { return this->revokeEndpoint_ != nullptr;};
        void deleteRevokeEndpoint() { this->revokeEndpoint_ = nullptr;};
        inline string getRevokeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(revokeEndpoint_, "") };
        inline Endpoints& setRevokeEndpoint(string revokeEndpoint) { DARABONBA_PTR_SET_VALUE(revokeEndpoint_, revokeEndpoint) };


        // tokenEndpoint Field Functions 
        bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
        void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
        inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
        inline Endpoints& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        // userinfoEndpoint Field Functions 
        bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
        void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
        inline string getUserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
        inline Endpoints& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


      protected:
        shared_ptr<string> authorizationEndpoint_ {};
        shared_ptr<string> discoveryEndpoint_ {};
        shared_ptr<string> guestAuthorizationEndpoint_ {};
        shared_ptr<string> issuer_ {};
        shared_ptr<string> jwksEndpoint_ {};
        shared_ptr<string> logoutEndpoint_ {};
        shared_ptr<string> revokeEndpoint_ {};
        shared_ptr<string> tokenEndpoint_ {};
        shared_ptr<string> userinfoEndpoint_ {};
      };

      virtual bool empty() const override { return this->accessTokenEffectiveTime_ == nullptr
        && this->codeEffectiveTime_ == nullptr && this->enableAuthLogin_ == nullptr && this->endpoints_ == nullptr && this->grantScopes_ == nullptr && this->grantTypes_ == nullptr
        && this->idTokenAlgorithmType_ == nullptr && this->idTokenEffectiveTime_ == nullptr && this->redirectUris_ == nullptr && this->refreshTokenEffective_ == nullptr; };
      // accessTokenEffectiveTime Field Functions 
      bool hasAccessTokenEffectiveTime() const { return this->accessTokenEffectiveTime_ != nullptr;};
      void deleteAccessTokenEffectiveTime() { this->accessTokenEffectiveTime_ = nullptr;};
      inline int32_t getAccessTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenEffectiveTime_, 0) };
      inline OidcSsoConfig& setAccessTokenEffectiveTime(int32_t accessTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(accessTokenEffectiveTime_, accessTokenEffectiveTime) };


      // codeEffectiveTime Field Functions 
      bool hasCodeEffectiveTime() const { return this->codeEffectiveTime_ != nullptr;};
      void deleteCodeEffectiveTime() { this->codeEffectiveTime_ = nullptr;};
      inline int32_t getCodeEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(codeEffectiveTime_, 0) };
      inline OidcSsoConfig& setCodeEffectiveTime(int32_t codeEffectiveTime) { DARABONBA_PTR_SET_VALUE(codeEffectiveTime_, codeEffectiveTime) };


      // enableAuthLogin Field Functions 
      bool hasEnableAuthLogin() const { return this->enableAuthLogin_ != nullptr;};
      void deleteEnableAuthLogin() { this->enableAuthLogin_ = nullptr;};
      inline bool getEnableAuthLogin() const { DARABONBA_PTR_GET_DEFAULT(enableAuthLogin_, false) };
      inline OidcSsoConfig& setEnableAuthLogin(bool enableAuthLogin) { DARABONBA_PTR_SET_VALUE(enableAuthLogin_, enableAuthLogin) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const OidcSsoConfig::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, OidcSsoConfig::Endpoints) };
      inline OidcSsoConfig::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, OidcSsoConfig::Endpoints) };
      inline OidcSsoConfig& setEndpoints(const OidcSsoConfig::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline OidcSsoConfig& setEndpoints(OidcSsoConfig::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // grantScopes Field Functions 
      bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
      void deleteGrantScopes() { this->grantScopes_ = nullptr;};
      inline const vector<string> & getGrantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
      inline vector<string> getGrantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
      inline OidcSsoConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
      inline OidcSsoConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


      // grantTypes Field Functions 
      bool hasGrantTypes() const { return this->grantTypes_ != nullptr;};
      void deleteGrantTypes() { this->grantTypes_ = nullptr;};
      inline const vector<string> & getGrantTypes() const { DARABONBA_PTR_GET_CONST(grantTypes_, vector<string>) };
      inline vector<string> getGrantTypes() { DARABONBA_PTR_GET(grantTypes_, vector<string>) };
      inline OidcSsoConfig& setGrantTypes(const vector<string> & grantTypes) { DARABONBA_PTR_SET_VALUE(grantTypes_, grantTypes) };
      inline OidcSsoConfig& setGrantTypes(vector<string> && grantTypes) { DARABONBA_PTR_SET_RVALUE(grantTypes_, grantTypes) };


      // idTokenAlgorithmType Field Functions 
      bool hasIdTokenAlgorithmType() const { return this->idTokenAlgorithmType_ != nullptr;};
      void deleteIdTokenAlgorithmType() { this->idTokenAlgorithmType_ = nullptr;};
      inline string getIdTokenAlgorithmType() const { DARABONBA_PTR_GET_DEFAULT(idTokenAlgorithmType_, "") };
      inline OidcSsoConfig& setIdTokenAlgorithmType(string idTokenAlgorithmType) { DARABONBA_PTR_SET_VALUE(idTokenAlgorithmType_, idTokenAlgorithmType) };


      // idTokenEffectiveTime Field Functions 
      bool hasIdTokenEffectiveTime() const { return this->idTokenEffectiveTime_ != nullptr;};
      void deleteIdTokenEffectiveTime() { this->idTokenEffectiveTime_ = nullptr;};
      inline int32_t getIdTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(idTokenEffectiveTime_, 0) };
      inline OidcSsoConfig& setIdTokenEffectiveTime(int32_t idTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(idTokenEffectiveTime_, idTokenEffectiveTime) };


      // redirectUris Field Functions 
      bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
      void deleteRedirectUris() { this->redirectUris_ = nullptr;};
      inline const vector<string> & getRedirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, vector<string>) };
      inline vector<string> getRedirectUris() { DARABONBA_PTR_GET(redirectUris_, vector<string>) };
      inline OidcSsoConfig& setRedirectUris(const vector<string> & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
      inline OidcSsoConfig& setRedirectUris(vector<string> && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


      // refreshTokenEffective Field Functions 
      bool hasRefreshTokenEffective() const { return this->refreshTokenEffective_ != nullptr;};
      void deleteRefreshTokenEffective() { this->refreshTokenEffective_ = nullptr;};
      inline int32_t getRefreshTokenEffective() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenEffective_, 0) };
      inline OidcSsoConfig& setRefreshTokenEffective(int32_t refreshTokenEffective) { DARABONBA_PTR_SET_VALUE(refreshTokenEffective_, refreshTokenEffective) };


    protected:
      shared_ptr<int32_t> accessTokenEffectiveTime_ {};
      shared_ptr<int32_t> codeEffectiveTime_ {};
      shared_ptr<bool> enableAuthLogin_ {};
      shared_ptr<OidcSsoConfig::Endpoints> endpoints_ {};
      shared_ptr<vector<string>> grantScopes_ {};
      shared_ptr<vector<string>> grantTypes_ {};
      shared_ptr<string> idTokenAlgorithmType_ {};
      shared_ptr<int32_t> idTokenEffectiveTime_ {};
      shared_ptr<vector<string>> redirectUris_ {};
      shared_ptr<int32_t> refreshTokenEffective_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->name_ == nullptr && this->oidcSsoConfig_ == nullptr && this->secrets_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ThirdApp& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ThirdApp& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oidcSsoConfig Field Functions 
    bool hasOidcSsoConfig() const { return this->oidcSsoConfig_ != nullptr;};
    void deleteOidcSsoConfig() { this->oidcSsoConfig_ = nullptr;};
    inline const ThirdApp::OidcSsoConfig & getOidcSsoConfig() const { DARABONBA_PTR_GET_CONST(oidcSsoConfig_, ThirdApp::OidcSsoConfig) };
    inline ThirdApp::OidcSsoConfig getOidcSsoConfig() { DARABONBA_PTR_GET(oidcSsoConfig_, ThirdApp::OidcSsoConfig) };
    inline ThirdApp& setOidcSsoConfig(const ThirdApp::OidcSsoConfig & oidcSsoConfig) { DARABONBA_PTR_SET_VALUE(oidcSsoConfig_, oidcSsoConfig) };
    inline ThirdApp& setOidcSsoConfig(ThirdApp::OidcSsoConfig && oidcSsoConfig) { DARABONBA_PTR_SET_RVALUE(oidcSsoConfig_, oidcSsoConfig) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<ThirdApp::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<ThirdApp::Secrets>) };
    inline vector<ThirdApp::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<ThirdApp::Secrets>) };
    inline ThirdApp& setSecrets(const vector<ThirdApp::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ThirdApp& setSecrets(vector<ThirdApp::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    shared_ptr<string> appKey_ {};
    shared_ptr<string> name_ {};
    shared_ptr<ThirdApp::OidcSsoConfig> oidcSsoConfig_ {};
    shared_ptr<vector<ThirdApp::Secrets>> secrets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
