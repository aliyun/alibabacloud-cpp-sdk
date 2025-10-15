// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIGPROTOCOLENDPOINTDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIGPROTOCOLENDPOINTDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& obj) { 
      DARABONBA_PTR_TO_JSON(Oauth2AuthorizationEndpoint, oauth2AuthorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(Oauth2DeviceAuthorizationEndpoint, oauth2DeviceAuthorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(Oauth2RevokeEndpoint, oauth2RevokeEndpoint_);
      DARABONBA_PTR_TO_JSON(Oauth2TokenEndpoint, oauth2TokenEndpoint_);
      DARABONBA_PTR_TO_JSON(Oauth2UserinfoEndpoint, oauth2UserinfoEndpoint_);
      DARABONBA_PTR_TO_JSON(OidcIssuer, oidcIssuer_);
      DARABONBA_PTR_TO_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
      DARABONBA_PTR_TO_JSON(OidcLogoutEndpoint, oidcLogoutEndpoint_);
      DARABONBA_PTR_TO_JSON(SamlMetaEndpoint, samlMetaEndpoint_);
      DARABONBA_PTR_TO_JSON(SamlSsoEndpoint, samlSsoEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(Oauth2AuthorizationEndpoint, oauth2AuthorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(Oauth2DeviceAuthorizationEndpoint, oauth2DeviceAuthorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(Oauth2RevokeEndpoint, oauth2RevokeEndpoint_);
      DARABONBA_PTR_FROM_JSON(Oauth2TokenEndpoint, oauth2TokenEndpoint_);
      DARABONBA_PTR_FROM_JSON(Oauth2UserinfoEndpoint, oauth2UserinfoEndpoint_);
      DARABONBA_PTR_FROM_JSON(OidcIssuer, oidcIssuer_);
      DARABONBA_PTR_FROM_JSON(OidcJwksEndpoint, oidcJwksEndpoint_);
      DARABONBA_PTR_FROM_JSON(OidcLogoutEndpoint, oidcLogoutEndpoint_);
      DARABONBA_PTR_FROM_JSON(SamlMetaEndpoint, samlMetaEndpoint_);
      DARABONBA_PTR_FROM_JSON(SamlSsoEndpoint, samlSsoEndpoint_);
    };
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain(const GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain(GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain &&) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& operator=(const GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& operator=(GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oauth2AuthorizationEndpoint_ == nullptr
        && return this->oauth2DeviceAuthorizationEndpoint_ == nullptr && return this->oauth2RevokeEndpoint_ == nullptr && return this->oauth2TokenEndpoint_ == nullptr && return this->oauth2UserinfoEndpoint_ == nullptr && return this->oidcIssuer_ == nullptr
        && return this->oidcJwksEndpoint_ == nullptr && return this->oidcLogoutEndpoint_ == nullptr && return this->samlMetaEndpoint_ == nullptr && return this->samlSsoEndpoint_ == nullptr; };
    // oauth2AuthorizationEndpoint Field Functions 
    bool hasOauth2AuthorizationEndpoint() const { return this->oauth2AuthorizationEndpoint_ != nullptr;};
    void deleteOauth2AuthorizationEndpoint() { this->oauth2AuthorizationEndpoint_ = nullptr;};
    inline string oauth2AuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2AuthorizationEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOauth2AuthorizationEndpoint(string oauth2AuthorizationEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2AuthorizationEndpoint_, oauth2AuthorizationEndpoint) };


    // oauth2DeviceAuthorizationEndpoint Field Functions 
    bool hasOauth2DeviceAuthorizationEndpoint() const { return this->oauth2DeviceAuthorizationEndpoint_ != nullptr;};
    void deleteOauth2DeviceAuthorizationEndpoint() { this->oauth2DeviceAuthorizationEndpoint_ = nullptr;};
    inline string oauth2DeviceAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2DeviceAuthorizationEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOauth2DeviceAuthorizationEndpoint(string oauth2DeviceAuthorizationEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2DeviceAuthorizationEndpoint_, oauth2DeviceAuthorizationEndpoint) };


    // oauth2RevokeEndpoint Field Functions 
    bool hasOauth2RevokeEndpoint() const { return this->oauth2RevokeEndpoint_ != nullptr;};
    void deleteOauth2RevokeEndpoint() { this->oauth2RevokeEndpoint_ = nullptr;};
    inline string oauth2RevokeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2RevokeEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOauth2RevokeEndpoint(string oauth2RevokeEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2RevokeEndpoint_, oauth2RevokeEndpoint) };


    // oauth2TokenEndpoint Field Functions 
    bool hasOauth2TokenEndpoint() const { return this->oauth2TokenEndpoint_ != nullptr;};
    void deleteOauth2TokenEndpoint() { this->oauth2TokenEndpoint_ = nullptr;};
    inline string oauth2TokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2TokenEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOauth2TokenEndpoint(string oauth2TokenEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2TokenEndpoint_, oauth2TokenEndpoint) };


    // oauth2UserinfoEndpoint Field Functions 
    bool hasOauth2UserinfoEndpoint() const { return this->oauth2UserinfoEndpoint_ != nullptr;};
    void deleteOauth2UserinfoEndpoint() { this->oauth2UserinfoEndpoint_ = nullptr;};
    inline string oauth2UserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oauth2UserinfoEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOauth2UserinfoEndpoint(string oauth2UserinfoEndpoint) { DARABONBA_PTR_SET_VALUE(oauth2UserinfoEndpoint_, oauth2UserinfoEndpoint) };


    // oidcIssuer Field Functions 
    bool hasOidcIssuer() const { return this->oidcIssuer_ != nullptr;};
    void deleteOidcIssuer() { this->oidcIssuer_ = nullptr;};
    inline string oidcIssuer() const { DARABONBA_PTR_GET_DEFAULT(oidcIssuer_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOidcIssuer(string oidcIssuer) { DARABONBA_PTR_SET_VALUE(oidcIssuer_, oidcIssuer) };


    // oidcJwksEndpoint Field Functions 
    bool hasOidcJwksEndpoint() const { return this->oidcJwksEndpoint_ != nullptr;};
    void deleteOidcJwksEndpoint() { this->oidcJwksEndpoint_ = nullptr;};
    inline string oidcJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oidcJwksEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOidcJwksEndpoint(string oidcJwksEndpoint) { DARABONBA_PTR_SET_VALUE(oidcJwksEndpoint_, oidcJwksEndpoint) };


    // oidcLogoutEndpoint Field Functions 
    bool hasOidcLogoutEndpoint() const { return this->oidcLogoutEndpoint_ != nullptr;};
    void deleteOidcLogoutEndpoint() { this->oidcLogoutEndpoint_ = nullptr;};
    inline string oidcLogoutEndpoint() const { DARABONBA_PTR_GET_DEFAULT(oidcLogoutEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setOidcLogoutEndpoint(string oidcLogoutEndpoint) { DARABONBA_PTR_SET_VALUE(oidcLogoutEndpoint_, oidcLogoutEndpoint) };


    // samlMetaEndpoint Field Functions 
    bool hasSamlMetaEndpoint() const { return this->samlMetaEndpoint_ != nullptr;};
    void deleteSamlMetaEndpoint() { this->samlMetaEndpoint_ = nullptr;};
    inline string samlMetaEndpoint() const { DARABONBA_PTR_GET_DEFAULT(samlMetaEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setSamlMetaEndpoint(string samlMetaEndpoint) { DARABONBA_PTR_SET_VALUE(samlMetaEndpoint_, samlMetaEndpoint) };


    // samlSsoEndpoint Field Functions 
    bool hasSamlSsoEndpoint() const { return this->samlSsoEndpoint_ != nullptr;};
    void deleteSamlSsoEndpoint() { this->samlSsoEndpoint_ = nullptr;};
    inline string samlSsoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(samlSsoEndpoint_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain& setSamlSsoEndpoint(string samlSsoEndpoint) { DARABONBA_PTR_SET_VALUE(samlSsoEndpoint_, samlSsoEndpoint) };


  protected:
    // The OAuth2.0 authorization endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oauth2AuthorizationEndpoint_ = nullptr;
    // The OAuth2.0 device authorization endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oauth2DeviceAuthorizationEndpoint_ = nullptr;
    // The OAuth2.0 token revocation endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oauth2RevokeEndpoint_ = nullptr;
    // The OAuth2.0 token endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oauth2TokenEndpoint_ = nullptr;
    // The OIDC UserInfo endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oauth2UserinfoEndpoint_ = nullptr;
    // The information about the OIDC issuer. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oidcIssuer_ = nullptr;
    // The JSON Web Key Set (JWKS) URL of the OIDC issuer. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oidcJwksEndpoint_ = nullptr;
    // The OIDC relying party (RP)-initiated logout endpoint. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<string> oidcLogoutEndpoint_ = nullptr;
    // The metadata URL of the SAML protocol. This parameter is returned only when the SSO protocol of the application is SAML 2.0.
    std::shared_ptr<string> samlMetaEndpoint_ = nullptr;
    // The request receiving URL of the SAML protocol. This parameter is returned only when the SSO protocol of the application is SAML 2.0.
    std::shared_ptr<string> samlSsoEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
