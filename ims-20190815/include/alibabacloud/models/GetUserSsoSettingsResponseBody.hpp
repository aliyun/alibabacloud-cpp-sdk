// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSSOSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSSOSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserSsoSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserSsoSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserSsoSettings, userSsoSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserSsoSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserSsoSettings, userSsoSettings_);
    };
    GetUserSsoSettingsResponseBody() = default ;
    GetUserSsoSettingsResponseBody(const GetUserSsoSettingsResponseBody &) = default ;
    GetUserSsoSettingsResponseBody(GetUserSsoSettingsResponseBody &&) = default ;
    GetUserSsoSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserSsoSettingsResponseBody() = default ;
    GetUserSsoSettingsResponseBody& operator=(const GetUserSsoSettingsResponseBody &) = default ;
    GetUserSsoSettingsResponseBody& operator=(GetUserSsoSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserSsoSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserSsoSettings& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_TO_JSON(AuxiliaryDomain, auxiliaryDomain_);
        DARABONBA_PTR_TO_JSON(MetadataDocument, metadataDocument_);
        DARABONBA_PTR_TO_JSON(SsoEnabled, ssoEnabled_);
        DARABONBA_PTR_TO_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
      };
      friend void from_json(const Darabonba::Json& j, UserSsoSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_FROM_JSON(AuxiliaryDomain, auxiliaryDomain_);
        DARABONBA_PTR_FROM_JSON(MetadataDocument, metadataDocument_);
        DARABONBA_PTR_FROM_JSON(SsoEnabled, ssoEnabled_);
        DARABONBA_PTR_FROM_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
      };
      UserSsoSettings() = default ;
      UserSsoSettings(const UserSsoSettings &) = default ;
      UserSsoSettings(UserSsoSettings &&) = default ;
      UserSsoSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserSsoSettings() = default ;
      UserSsoSettings& operator=(const UserSsoSettings &) = default ;
      UserSsoSettings& operator=(UserSsoSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authnSignAlgo_ == nullptr
        && this->auxiliaryDomain_ == nullptr && this->metadataDocument_ == nullptr && this->ssoEnabled_ == nullptr && this->ssoLoginWithDomain_ == nullptr; };
      // authnSignAlgo Field Functions 
      bool hasAuthnSignAlgo() const { return this->authnSignAlgo_ != nullptr;};
      void deleteAuthnSignAlgo() { this->authnSignAlgo_ = nullptr;};
      inline string getAuthnSignAlgo() const { DARABONBA_PTR_GET_DEFAULT(authnSignAlgo_, "") };
      inline UserSsoSettings& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


      // auxiliaryDomain Field Functions 
      bool hasAuxiliaryDomain() const { return this->auxiliaryDomain_ != nullptr;};
      void deleteAuxiliaryDomain() { this->auxiliaryDomain_ = nullptr;};
      inline string getAuxiliaryDomain() const { DARABONBA_PTR_GET_DEFAULT(auxiliaryDomain_, "") };
      inline UserSsoSettings& setAuxiliaryDomain(string auxiliaryDomain) { DARABONBA_PTR_SET_VALUE(auxiliaryDomain_, auxiliaryDomain) };


      // metadataDocument Field Functions 
      bool hasMetadataDocument() const { return this->metadataDocument_ != nullptr;};
      void deleteMetadataDocument() { this->metadataDocument_ = nullptr;};
      inline string getMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(metadataDocument_, "") };
      inline UserSsoSettings& setMetadataDocument(string metadataDocument) { DARABONBA_PTR_SET_VALUE(metadataDocument_, metadataDocument) };


      // ssoEnabled Field Functions 
      bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
      void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
      inline bool getSsoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
      inline UserSsoSettings& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


      // ssoLoginWithDomain Field Functions 
      bool hasSsoLoginWithDomain() const { return this->ssoLoginWithDomain_ != nullptr;};
      void deleteSsoLoginWithDomain() { this->ssoLoginWithDomain_ = nullptr;};
      inline bool getSsoLoginWithDomain() const { DARABONBA_PTR_GET_DEFAULT(ssoLoginWithDomain_, false) };
      inline UserSsoSettings& setSsoLoginWithDomain(bool ssoLoginWithDomain) { DARABONBA_PTR_SET_VALUE(ssoLoginWithDomain_, ssoLoginWithDomain) };


    protected:
      // The signature algorithm supported by the Alibaba Cloud service provider (SP). Valid values:
      // 
      // - rsa-sha256
      // 
      // - rsa-sha1
      shared_ptr<string> authnSignAlgo_ {};
      // The auxiliary domain name.
      shared_ptr<string> auxiliaryDomain_ {};
      // The metadata file. The value is Base64-encoded.
      shared_ptr<string> metadataDocument_ {};
      // Indicates whether user-based SSO is enabled.
      shared_ptr<bool> ssoEnabled_ {};
      // Specifies whether the `<saml:NameID>` element in a SAML response must contain a domain name when a user logs on using SAML SSO. The username for SSO logon matching is specified on the identity provider (IdP) side.
      // 
      // - If this parameter is set to `true`, the value of the `<saml:NameID>` element **must** be in the `username@domain` format. The `domain` can be the default domain name or a domain alias, if a domain alias is configured.
      // 
      // - If this parameter is set to `false`, the value of the `<saml:NameID>` element \\*\\*must\\*\\* contain only the \\`username\\` and \\*\\*must not\\*\\* contain the \\`domain\\` part.
      // 
      // The default value is `true`.
      shared_ptr<bool> ssoLoginWithDomain_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userSsoSettings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserSsoSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userSsoSettings Field Functions 
    bool hasUserSsoSettings() const { return this->userSsoSettings_ != nullptr;};
    void deleteUserSsoSettings() { this->userSsoSettings_ = nullptr;};
    inline const GetUserSsoSettingsResponseBody::UserSsoSettings & getUserSsoSettings() const { DARABONBA_PTR_GET_CONST(userSsoSettings_, GetUserSsoSettingsResponseBody::UserSsoSettings) };
    inline GetUserSsoSettingsResponseBody::UserSsoSettings getUserSsoSettings() { DARABONBA_PTR_GET(userSsoSettings_, GetUserSsoSettingsResponseBody::UserSsoSettings) };
    inline GetUserSsoSettingsResponseBody& setUserSsoSettings(const GetUserSsoSettingsResponseBody::UserSsoSettings & userSsoSettings) { DARABONBA_PTR_SET_VALUE(userSsoSettings_, userSsoSettings) };
    inline GetUserSsoSettingsResponseBody& setUserSsoSettings(GetUserSsoSettingsResponseBody::UserSsoSettings && userSsoSettings) { DARABONBA_PTR_SET_RVALUE(userSsoSettings_, userSsoSettings) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The user-based SSO settings.
    shared_ptr<GetUserSsoSettingsResponseBody::UserSsoSettings> userSsoSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
