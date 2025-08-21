// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERSSOSETTINGSRESPONSEBODYUSERSSOSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_SETUSERSSOSETTINGSRESPONSEBODYUSERSSOSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetUserSsoSettingsResponseBodyUserSsoSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserSsoSettingsResponseBodyUserSsoSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AuxiliaryDomain, auxiliaryDomain_);
      DARABONBA_PTR_TO_JSON(MetadataDocument, metadataDocument_);
      DARABONBA_PTR_TO_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_TO_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserSsoSettingsResponseBodyUserSsoSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AuxiliaryDomain, auxiliaryDomain_);
      DARABONBA_PTR_FROM_JSON(MetadataDocument, metadataDocument_);
      DARABONBA_PTR_FROM_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_FROM_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
    };
    SetUserSsoSettingsResponseBodyUserSsoSettings() = default ;
    SetUserSsoSettingsResponseBodyUserSsoSettings(const SetUserSsoSettingsResponseBodyUserSsoSettings &) = default ;
    SetUserSsoSettingsResponseBodyUserSsoSettings(SetUserSsoSettingsResponseBodyUserSsoSettings &&) = default ;
    SetUserSsoSettingsResponseBodyUserSsoSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserSsoSettingsResponseBodyUserSsoSettings() = default ;
    SetUserSsoSettingsResponseBodyUserSsoSettings& operator=(const SetUserSsoSettingsResponseBodyUserSsoSettings &) = default ;
    SetUserSsoSettingsResponseBodyUserSsoSettings& operator=(SetUserSsoSettingsResponseBodyUserSsoSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auxiliaryDomain_ != nullptr
        && this->metadataDocument_ != nullptr && this->ssoEnabled_ != nullptr && this->ssoLoginWithDomain_ != nullptr; };
    // auxiliaryDomain Field Functions 
    bool hasAuxiliaryDomain() const { return this->auxiliaryDomain_ != nullptr;};
    void deleteAuxiliaryDomain() { this->auxiliaryDomain_ = nullptr;};
    inline string auxiliaryDomain() const { DARABONBA_PTR_GET_DEFAULT(auxiliaryDomain_, "") };
    inline SetUserSsoSettingsResponseBodyUserSsoSettings& setAuxiliaryDomain(string auxiliaryDomain) { DARABONBA_PTR_SET_VALUE(auxiliaryDomain_, auxiliaryDomain) };


    // metadataDocument Field Functions 
    bool hasMetadataDocument() const { return this->metadataDocument_ != nullptr;};
    void deleteMetadataDocument() { this->metadataDocument_ = nullptr;};
    inline string metadataDocument() const { DARABONBA_PTR_GET_DEFAULT(metadataDocument_, "") };
    inline SetUserSsoSettingsResponseBodyUserSsoSettings& setMetadataDocument(string metadataDocument) { DARABONBA_PTR_SET_VALUE(metadataDocument_, metadataDocument) };


    // ssoEnabled Field Functions 
    bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
    void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
    inline bool ssoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
    inline SetUserSsoSettingsResponseBodyUserSsoSettings& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


    // ssoLoginWithDomain Field Functions 
    bool hasSsoLoginWithDomain() const { return this->ssoLoginWithDomain_ != nullptr;};
    void deleteSsoLoginWithDomain() { this->ssoLoginWithDomain_ = nullptr;};
    inline bool ssoLoginWithDomain() const { DARABONBA_PTR_GET_DEFAULT(ssoLoginWithDomain_, false) };
    inline SetUserSsoSettingsResponseBodyUserSsoSettings& setSsoLoginWithDomain(bool ssoLoginWithDomain) { DARABONBA_PTR_SET_VALUE(ssoLoginWithDomain_, ssoLoginWithDomain) };


  protected:
    // The auxiliary domain name.
    std::shared_ptr<string> auxiliaryDomain_ = nullptr;
    // The metadata file, which is Base64-encoded.
    std::shared_ptr<string> metadataDocument_ = nullptr;
    // Indicates whether user-based SSO is enabled.
    std::shared_ptr<bool> ssoEnabled_ = nullptr;
    // Indicates whether the SAML SSO requires a domain name in the `<saml:NameID>` element of the SAML response. If yes, the username specified by the IdP for SSO must have a domain name as the suffix.
    // 
    // *   If the value of the parameter is `true`, the `<saml:NameID>` element **must** be in the `username@domain` format. You can set `domain` to the default domain name or the configured domain alias.
    // *   If the value of the parameter is `false`, the `<saml:NameID>` element **must** be in the `username` format and **cannot** contain the `domain` suffix.
    // 
    // The default value is `true`.
    std::shared_ptr<bool> ssoLoginWithDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
