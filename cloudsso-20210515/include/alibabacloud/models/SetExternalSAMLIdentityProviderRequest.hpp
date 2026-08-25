// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetExternalSAMLIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetExternalSAMLIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_TO_JSON(WantRequestSigned, wantRequestSigned_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, SetExternalSAMLIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_FROM_JSON(WantRequestSigned, wantRequestSigned_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    SetExternalSAMLIdentityProviderRequest() = default ;
    SetExternalSAMLIdentityProviderRequest(const SetExternalSAMLIdentityProviderRequest &) = default ;
    SetExternalSAMLIdentityProviderRequest(SetExternalSAMLIdentityProviderRequest &&) = default ;
    SetExternalSAMLIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetExternalSAMLIdentityProviderRequest() = default ;
    SetExternalSAMLIdentityProviderRequest& operator=(const SetExternalSAMLIdentityProviderRequest &) = default ;
    SetExternalSAMLIdentityProviderRequest& operator=(SetExternalSAMLIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->directoryId_ == nullptr && this->encodedMetadataDocument_ == nullptr && this->entityId_ == nullptr && this->loginUrl_ == nullptr && this->SSOStatus_ == nullptr
        && this->wantRequestSigned_ == nullptr && this->x509Certificate_ == nullptr; };
    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // encodedMetadataDocument Field Functions 
    bool hasEncodedMetadataDocument() const { return this->encodedMetadataDocument_ != nullptr;};
    void deleteEncodedMetadataDocument() { this->encodedMetadataDocument_ = nullptr;};
    inline string getEncodedMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(encodedMetadataDocument_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setEncodedMetadataDocument(string encodedMetadataDocument) { DARABONBA_PTR_SET_VALUE(encodedMetadataDocument_, encodedMetadataDocument) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // SSOStatus Field Functions 
    bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
    void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
    inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


    // wantRequestSigned Field Functions 
    bool hasWantRequestSigned() const { return this->wantRequestSigned_ != nullptr;};
    void deleteWantRequestSigned() { this->wantRequestSigned_ = nullptr;};
    inline bool getWantRequestSigned() const { DARABONBA_PTR_GET_DEFAULT(wantRequestSigned_, false) };
    inline SetExternalSAMLIdentityProviderRequest& setWantRequestSigned(bool wantRequestSigned) { DARABONBA_PTR_SET_VALUE(wantRequestSigned_, wantRequestSigned) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline SetExternalSAMLIdentityProviderRequest& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    // The binding for sending SAML requests. Valid values:
    // 
    // *   Post: HTTP Post bindings.
    // *   Redirect: HTTP Redirect bindings.
    shared_ptr<string> bindingType_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The metadata file of the IdP. The value of this parameter is Base64-encoded.
    // 
    // The file is provided by the IdP that supports SAML 2.0.
    shared_ptr<string> encodedMetadataDocument_ {};
    // The entity ID of the IdP.
    shared_ptr<string> entityId_ {};
    // The logon URL of the IdP.
    shared_ptr<string> loginUrl_ {};
    // The status of SSO logon. Valid values:
    // 
    // *   Enabled
    // *   Disabled (default)
    shared_ptr<string> SSOStatus_ {};
    // Specifies whether CloudSSO needs to sign SAML requests. The requests are sent when users log on to the CloudSSO user portal to initiate SAML-based SSO. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> wantRequestSigned_ {};
    // The X.509 certificate in the PEM format. If you specify this parameter, all existing certificates are replaced.
    shared_ptr<string> x509Certificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
