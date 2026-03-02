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
    // The signature algorithm that is supported by the Alibaba Cloud service provider (SP). Valid values:
    // 
    // - rsa-sha256
    // 
    // - rsa-sha1 (default)
    shared_ptr<string> authnSignAlgo_ {};
    // The auxiliary domain name.
    shared_ptr<string> auxiliaryDomain_ {};
    // The metadata file. The file must be Base64-encoded.
    // 
    // The file is provided by an identity provider (IdP) that supports the Security Assertion Markup Language (SAML) 2.0 protocol.
    shared_ptr<string> metadataDocument_ {};
    // Specifies whether to enable user-based SSO for Resource Access Management (RAM) users. Valid values:
    // 
    // - true: Enables user-based SSO.
    // 
    // - false (default): Disables user-based SSO.
    shared_ptr<bool> ssoEnabled_ {};
    // Specifies whether the `<saml:NameID>` element in a SAML response must contain a domain name when a user logs on using SAML-based SSO. This applies if the username that is specified on the IdP for logon matching contains a domain name suffix.
    // 
    // - If this parameter is set to `true`, the value of the `<saml:NameID>` element **must** be in the `username@domain` format, which includes a domain name suffix. The `domain` can be the default domain name or a domain alias if one is configured.
    // 
    // - If this parameter is set to `false`, the value of the `<saml:NameID>` element **must** be the `username` only. The value **must not** contain the `domain` part.
    // 
    // The default value is `true`.
    shared_ptr<bool> ssoLoginWithDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
