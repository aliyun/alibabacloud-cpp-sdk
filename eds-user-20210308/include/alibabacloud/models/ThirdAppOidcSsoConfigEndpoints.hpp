// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDAPPOIDCSSOCONFIGENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_THIRDAPPOIDCSSOCONFIGENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ThirdAppOidcSsoConfigEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdAppOidcSsoConfigEndpoints& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ThirdAppOidcSsoConfigEndpoints& obj) { 
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
    ThirdAppOidcSsoConfigEndpoints() = default ;
    ThirdAppOidcSsoConfigEndpoints(const ThirdAppOidcSsoConfigEndpoints &) = default ;
    ThirdAppOidcSsoConfigEndpoints(ThirdAppOidcSsoConfigEndpoints &&) = default ;
    ThirdAppOidcSsoConfigEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdAppOidcSsoConfigEndpoints() = default ;
    ThirdAppOidcSsoConfigEndpoints& operator=(const ThirdAppOidcSsoConfigEndpoints &) = default ;
    ThirdAppOidcSsoConfigEndpoints& operator=(ThirdAppOidcSsoConfigEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationEndpoint_ != nullptr
        && this->discoveryEndpoint_ != nullptr && this->guestAuthorizationEndpoint_ != nullptr && this->issuer_ != nullptr && this->jwksEndpoint_ != nullptr && this->logoutEndpoint_ != nullptr
        && this->revokeEndpoint_ != nullptr && this->tokenEndpoint_ != nullptr && this->userinfoEndpoint_ != nullptr; };
    // authorizationEndpoint Field Functions 
    bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
    void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
    inline string authorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // discoveryEndpoint Field Functions 
    bool hasDiscoveryEndpoint() const { return this->discoveryEndpoint_ != nullptr;};
    void deleteDiscoveryEndpoint() { this->discoveryEndpoint_ = nullptr;};
    inline string discoveryEndpoint() const { DARABONBA_PTR_GET_DEFAULT(discoveryEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setDiscoveryEndpoint(string discoveryEndpoint) { DARABONBA_PTR_SET_VALUE(discoveryEndpoint_, discoveryEndpoint) };


    // guestAuthorizationEndpoint Field Functions 
    bool hasGuestAuthorizationEndpoint() const { return this->guestAuthorizationEndpoint_ != nullptr;};
    void deleteGuestAuthorizationEndpoint() { this->guestAuthorizationEndpoint_ = nullptr;};
    inline string guestAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(guestAuthorizationEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setGuestAuthorizationEndpoint(string guestAuthorizationEndpoint) { DARABONBA_PTR_SET_VALUE(guestAuthorizationEndpoint_, guestAuthorizationEndpoint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwksEndpoint Field Functions 
    bool hasJwksEndpoint() const { return this->jwksEndpoint_ != nullptr;};
    void deleteJwksEndpoint() { this->jwksEndpoint_ = nullptr;};
    inline string jwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(jwksEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setJwksEndpoint(string jwksEndpoint) { DARABONBA_PTR_SET_VALUE(jwksEndpoint_, jwksEndpoint) };


    // logoutEndpoint Field Functions 
    bool hasLogoutEndpoint() const { return this->logoutEndpoint_ != nullptr;};
    void deleteLogoutEndpoint() { this->logoutEndpoint_ = nullptr;};
    inline string logoutEndpoint() const { DARABONBA_PTR_GET_DEFAULT(logoutEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setLogoutEndpoint(string logoutEndpoint) { DARABONBA_PTR_SET_VALUE(logoutEndpoint_, logoutEndpoint) };


    // revokeEndpoint Field Functions 
    bool hasRevokeEndpoint() const { return this->revokeEndpoint_ != nullptr;};
    void deleteRevokeEndpoint() { this->revokeEndpoint_ = nullptr;};
    inline string revokeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(revokeEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setRevokeEndpoint(string revokeEndpoint) { DARABONBA_PTR_SET_VALUE(revokeEndpoint_, revokeEndpoint) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string tokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


    // userinfoEndpoint Field Functions 
    bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
    void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
    inline string userinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
    inline ThirdAppOidcSsoConfigEndpoints& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


  protected:
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    std::shared_ptr<string> discoveryEndpoint_ = nullptr;
    std::shared_ptr<string> guestAuthorizationEndpoint_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> jwksEndpoint_ = nullptr;
    std::shared_ptr<string> logoutEndpoint_ = nullptr;
    std::shared_ptr<string> revokeEndpoint_ = nullptr;
    std::shared_ptr<string> tokenEndpoint_ = nullptr;
    std::shared_ptr<string> userinfoEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
