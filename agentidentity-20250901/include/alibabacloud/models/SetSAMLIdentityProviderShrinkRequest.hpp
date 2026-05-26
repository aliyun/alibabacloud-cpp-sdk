// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetSAMLIdentityProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSAMLIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(JITProvisionStatus, JITProvisionStatus_);
      DARABONBA_PTR_TO_JSON(JITUpdateStatus, JITUpdateStatus_);
      DARABONBA_PTR_TO_JSON(LoginURL, loginURL_);
      DARABONBA_PTR_TO_JSON(SAMLBindingType, SAMLBindingType_);
      DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_TO_JSON(X509Certificates, x509CertificatesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SetSAMLIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(JITProvisionStatus, JITProvisionStatus_);
      DARABONBA_PTR_FROM_JSON(JITUpdateStatus, JITUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(LoginURL, loginURL_);
      DARABONBA_PTR_FROM_JSON(SAMLBindingType, SAMLBindingType_);
      DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_FROM_JSON(X509Certificates, x509CertificatesShrink_);
    };
    SetSAMLIdentityProviderShrinkRequest() = default ;
    SetSAMLIdentityProviderShrinkRequest(const SetSAMLIdentityProviderShrinkRequest &) = default ;
    SetSAMLIdentityProviderShrinkRequest(SetSAMLIdentityProviderShrinkRequest &&) = default ;
    SetSAMLIdentityProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSAMLIdentityProviderShrinkRequest() = default ;
    SetSAMLIdentityProviderShrinkRequest& operator=(const SetSAMLIdentityProviderShrinkRequest &) = default ;
    SetSAMLIdentityProviderShrinkRequest& operator=(SetSAMLIdentityProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && this->JITProvisionStatus_ == nullptr && this->JITUpdateStatus_ == nullptr && this->loginURL_ == nullptr && this->SAMLBindingType_ == nullptr && this->SSOStatus_ == nullptr
        && this->userPoolName_ == nullptr && this->x509CertificatesShrink_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // JITProvisionStatus Field Functions 
    bool hasJITProvisionStatus() const { return this->JITProvisionStatus_ != nullptr;};
    void deleteJITProvisionStatus() { this->JITProvisionStatus_ = nullptr;};
    inline string getJITProvisionStatus() const { DARABONBA_PTR_GET_DEFAULT(JITProvisionStatus_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setJITProvisionStatus(string JITProvisionStatus) { DARABONBA_PTR_SET_VALUE(JITProvisionStatus_, JITProvisionStatus) };


    // JITUpdateStatus Field Functions 
    bool hasJITUpdateStatus() const { return this->JITUpdateStatus_ != nullptr;};
    void deleteJITUpdateStatus() { this->JITUpdateStatus_ = nullptr;};
    inline string getJITUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(JITUpdateStatus_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setJITUpdateStatus(string JITUpdateStatus) { DARABONBA_PTR_SET_VALUE(JITUpdateStatus_, JITUpdateStatus) };


    // loginURL Field Functions 
    bool hasLoginURL() const { return this->loginURL_ != nullptr;};
    void deleteLoginURL() { this->loginURL_ = nullptr;};
    inline string getLoginURL() const { DARABONBA_PTR_GET_DEFAULT(loginURL_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setLoginURL(string loginURL) { DARABONBA_PTR_SET_VALUE(loginURL_, loginURL) };


    // SAMLBindingType Field Functions 
    bool hasSAMLBindingType() const { return this->SAMLBindingType_ != nullptr;};
    void deleteSAMLBindingType() { this->SAMLBindingType_ = nullptr;};
    inline string getSAMLBindingType() const { DARABONBA_PTR_GET_DEFAULT(SAMLBindingType_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setSAMLBindingType(string SAMLBindingType) { DARABONBA_PTR_SET_VALUE(SAMLBindingType_, SAMLBindingType) };


    // SSOStatus Field Functions 
    bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
    void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
    inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    // x509CertificatesShrink Field Functions 
    bool hasX509CertificatesShrink() const { return this->x509CertificatesShrink_ != nullptr;};
    void deleteX509CertificatesShrink() { this->x509CertificatesShrink_ = nullptr;};
    inline string getX509CertificatesShrink() const { DARABONBA_PTR_GET_DEFAULT(x509CertificatesShrink_, "") };
    inline SetSAMLIdentityProviderShrinkRequest& setX509CertificatesShrink(string x509CertificatesShrink) { DARABONBA_PTR_SET_VALUE(x509CertificatesShrink_, x509CertificatesShrink) };


  protected:
    shared_ptr<string> entityId_ {};
    shared_ptr<string> JITProvisionStatus_ {};
    shared_ptr<string> JITUpdateStatus_ {};
    shared_ptr<string> loginURL_ {};
    shared_ptr<string> SAMLBindingType_ {};
    shared_ptr<string> SSOStatus_ {};
    shared_ptr<string> userPoolName_ {};
    shared_ptr<string> x509CertificatesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
