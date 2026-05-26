// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSAMLIDENTITYPROVIDERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSAMLIDENTITYPROVIDERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class AddSAMLIdentityProviderCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSAMLIdentityProviderCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, AddSAMLIdentityProviderCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    AddSAMLIdentityProviderCertificateRequest() = default ;
    AddSAMLIdentityProviderCertificateRequest(const AddSAMLIdentityProviderCertificateRequest &) = default ;
    AddSAMLIdentityProviderCertificateRequest(AddSAMLIdentityProviderCertificateRequest &&) = default ;
    AddSAMLIdentityProviderCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSAMLIdentityProviderCertificateRequest() = default ;
    AddSAMLIdentityProviderCertificateRequest& operator=(const AddSAMLIdentityProviderCertificateRequest &) = default ;
    AddSAMLIdentityProviderCertificateRequest& operator=(AddSAMLIdentityProviderCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPoolName_ == nullptr
        && this->x509Certificate_ == nullptr; };
    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline AddSAMLIdentityProviderCertificateRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline AddSAMLIdentityProviderCertificateRequest& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    shared_ptr<string> userPoolName_ {};
    shared_ptr<string> x509Certificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
