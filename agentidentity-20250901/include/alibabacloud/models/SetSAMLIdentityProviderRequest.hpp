// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetSAMLIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSAMLIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(JITProvisionStatus, JITProvisionStatus_);
      DARABONBA_PTR_TO_JSON(JITUpdateStatus, JITUpdateStatus_);
      DARABONBA_PTR_TO_JSON(LoginURL, loginURL_);
      DARABONBA_PTR_TO_JSON(SAMLBindingType, SAMLBindingType_);
      DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_TO_JSON(X509Certificates, x509Certificates_);
    };
    friend void from_json(const Darabonba::Json& j, SetSAMLIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(JITProvisionStatus, JITProvisionStatus_);
      DARABONBA_PTR_FROM_JSON(JITUpdateStatus, JITUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(LoginURL, loginURL_);
      DARABONBA_PTR_FROM_JSON(SAMLBindingType, SAMLBindingType_);
      DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_FROM_JSON(X509Certificates, x509Certificates_);
    };
    SetSAMLIdentityProviderRequest() = default ;
    SetSAMLIdentityProviderRequest(const SetSAMLIdentityProviderRequest &) = default ;
    SetSAMLIdentityProviderRequest(SetSAMLIdentityProviderRequest &&) = default ;
    SetSAMLIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSAMLIdentityProviderRequest() = default ;
    SetSAMLIdentityProviderRequest& operator=(const SetSAMLIdentityProviderRequest &) = default ;
    SetSAMLIdentityProviderRequest& operator=(SetSAMLIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && this->JITProvisionStatus_ == nullptr && this->JITUpdateStatus_ == nullptr && this->loginURL_ == nullptr && this->SAMLBindingType_ == nullptr && this->SSOStatus_ == nullptr
        && this->userPoolName_ == nullptr && this->x509Certificates_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SetSAMLIdentityProviderRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // JITProvisionStatus Field Functions 
    bool hasJITProvisionStatus() const { return this->JITProvisionStatus_ != nullptr;};
    void deleteJITProvisionStatus() { this->JITProvisionStatus_ = nullptr;};
    inline string getJITProvisionStatus() const { DARABONBA_PTR_GET_DEFAULT(JITProvisionStatus_, "") };
    inline SetSAMLIdentityProviderRequest& setJITProvisionStatus(string JITProvisionStatus) { DARABONBA_PTR_SET_VALUE(JITProvisionStatus_, JITProvisionStatus) };


    // JITUpdateStatus Field Functions 
    bool hasJITUpdateStatus() const { return this->JITUpdateStatus_ != nullptr;};
    void deleteJITUpdateStatus() { this->JITUpdateStatus_ = nullptr;};
    inline string getJITUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(JITUpdateStatus_, "") };
    inline SetSAMLIdentityProviderRequest& setJITUpdateStatus(string JITUpdateStatus) { DARABONBA_PTR_SET_VALUE(JITUpdateStatus_, JITUpdateStatus) };


    // loginURL Field Functions 
    bool hasLoginURL() const { return this->loginURL_ != nullptr;};
    void deleteLoginURL() { this->loginURL_ = nullptr;};
    inline string getLoginURL() const { DARABONBA_PTR_GET_DEFAULT(loginURL_, "") };
    inline SetSAMLIdentityProviderRequest& setLoginURL(string loginURL) { DARABONBA_PTR_SET_VALUE(loginURL_, loginURL) };


    // SAMLBindingType Field Functions 
    bool hasSAMLBindingType() const { return this->SAMLBindingType_ != nullptr;};
    void deleteSAMLBindingType() { this->SAMLBindingType_ = nullptr;};
    inline string getSAMLBindingType() const { DARABONBA_PTR_GET_DEFAULT(SAMLBindingType_, "") };
    inline SetSAMLIdentityProviderRequest& setSAMLBindingType(string SAMLBindingType) { DARABONBA_PTR_SET_VALUE(SAMLBindingType_, SAMLBindingType) };


    // SSOStatus Field Functions 
    bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
    void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
    inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
    inline SetSAMLIdentityProviderRequest& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline SetSAMLIdentityProviderRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    // x509Certificates Field Functions 
    bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
    void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
    inline const vector<string> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<string>) };
    inline vector<string> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<string>) };
    inline SetSAMLIdentityProviderRequest& setX509Certificates(const vector<string> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
    inline SetSAMLIdentityProviderRequest& setX509Certificates(vector<string> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


  protected:
    // The IdP identifier. This is the EntityID from the SAML metadata of the external IdP.
    shared_ptr<string> entityId_ {};
    // The enabling status of Just-In-Time (JIT) user synchronization and creation. Valid values:
    // - Enabled: Enabled. If a user with the same name does not exist in the user pool during SAML logon, automatic creation is performed.
    // - Disabled: Shutdown. If the user is not found, the logon is failed. Default value.
    shared_ptr<string> JITProvisionStatus_ {};
    // The enabling status of updating user information through synchronization. Valid values:
    // - Enabled: The update is enabled. If a user with the same name exists during SAML logon, the user information is updated based on the attributes (DisplayName and Description) passed by the IdP.
    // - Disabled: The update is disabled. Only the logon state is updated, and user attributes are not updated. Default value.
    shared_ptr<string> JITUpdateStatus_ {};
    // The IdP logon URL. When a user logs on, the browser is redirected to this URL to complete SAML authentication.
    shared_ptr<string> loginURL_ {};
    // The SAML protocol binding type. Valid values:
    // - HTTP-Redirect: AuthnRequest is sent by using HTTP redirect. Default value.
    // - HTTP-POST: AuthnRequest is sent by using HTTP POST.
    shared_ptr<string> SAMLBindingType_ {};
    // The enabling status of single sign-on (SSO). Valid values:
    // - Enabled: SAML SSO is enabled, and users can log on through an external IdP.
    // - Disabled: SAML SSO is disabled, and users cannot log on through the IdP. Default value.
    shared_ptr<string> SSOStatus_ {};
    // The name of the user pool.
    shared_ptr<string> userPoolName_ {};
    // The list of X.509 certificates in PEM format. If you specify this parameter, all existing certificates are replaced.
    shared_ptr<vector<string>> x509Certificates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
