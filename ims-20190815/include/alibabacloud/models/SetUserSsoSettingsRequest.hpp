// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERSSOSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERSSOSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetUserSsoSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserSsoSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_TO_JSON(AuxiliaryDomain, auxiliaryDomain_);
      DARABONBA_PTR_TO_JSON(MetadataDocument, metadataDocument_);
      DARABONBA_PTR_TO_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_TO_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserSsoSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_FROM_JSON(AuxiliaryDomain, auxiliaryDomain_);
      DARABONBA_PTR_FROM_JSON(MetadataDocument, metadataDocument_);
      DARABONBA_PTR_FROM_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_FROM_JSON(SsoLoginWithDomain, ssoLoginWithDomain_);
    };
    SetUserSsoSettingsRequest() = default ;
    SetUserSsoSettingsRequest(const SetUserSsoSettingsRequest &) = default ;
    SetUserSsoSettingsRequest(SetUserSsoSettingsRequest &&) = default ;
    SetUserSsoSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserSsoSettingsRequest() = default ;
    SetUserSsoSettingsRequest& operator=(const SetUserSsoSettingsRequest &) = default ;
    SetUserSsoSettingsRequest& operator=(SetUserSsoSettingsRequest &&) = default ;
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
    inline SetUserSsoSettingsRequest& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


    // auxiliaryDomain Field Functions 
    bool hasAuxiliaryDomain() const { return this->auxiliaryDomain_ != nullptr;};
    void deleteAuxiliaryDomain() { this->auxiliaryDomain_ = nullptr;};
    inline string getAuxiliaryDomain() const { DARABONBA_PTR_GET_DEFAULT(auxiliaryDomain_, "") };
    inline SetUserSsoSettingsRequest& setAuxiliaryDomain(string auxiliaryDomain) { DARABONBA_PTR_SET_VALUE(auxiliaryDomain_, auxiliaryDomain) };


    // metadataDocument Field Functions 
    bool hasMetadataDocument() const { return this->metadataDocument_ != nullptr;};
    void deleteMetadataDocument() { this->metadataDocument_ = nullptr;};
    inline string getMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(metadataDocument_, "") };
    inline SetUserSsoSettingsRequest& setMetadataDocument(string metadataDocument) { DARABONBA_PTR_SET_VALUE(metadataDocument_, metadataDocument) };


    // ssoEnabled Field Functions 
    bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
    void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
    inline bool getSsoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
    inline SetUserSsoSettingsRequest& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


    // ssoLoginWithDomain Field Functions 
    bool hasSsoLoginWithDomain() const { return this->ssoLoginWithDomain_ != nullptr;};
    void deleteSsoLoginWithDomain() { this->ssoLoginWithDomain_ = nullptr;};
    inline bool getSsoLoginWithDomain() const { DARABONBA_PTR_GET_DEFAULT(ssoLoginWithDomain_, false) };
    inline SetUserSsoSettingsRequest& setSsoLoginWithDomain(bool ssoLoginWithDomain) { DARABONBA_PTR_SET_VALUE(ssoLoginWithDomain_, ssoLoginWithDomain) };


  protected:
    shared_ptr<string> authnSignAlgo_ {};
    // The auxiliary domain name.
    shared_ptr<string> auxiliaryDomain_ {};
    // The metadata file, which is Base64-encoded.
    // 
    // The file is provided by an identity provider (IdP) that supports Security Assertion Markup Language (SAML) 2.0.
    shared_ptr<string> metadataDocument_ {};
    // Specifies whether to enable SSO for the RAM user. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> ssoEnabled_ {};
    // Specifies whether the SAML SSO requires a domain name in the `<saml:NameID>` element of the SAML response. If yes, the username specified by the IdP for SSO must have a domain name as the suffix.
    // 
    // *   If the value of the parameter is `true`, the `<saml:NameID>` element **must** be in the `username@domain` format. You can set `domain` to the default domain name or the configured domain alias.
    // *   If the value of the parameter is `false`, the `<saml:NameID>` element **must** be in the `username` format and **cannot** contain the `domain` suffix.
    // 
    // Set the value to the default `true`.
    shared_ptr<bool> ssoLoginWithDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
