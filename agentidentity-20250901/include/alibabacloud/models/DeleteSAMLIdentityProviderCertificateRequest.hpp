// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESAMLIDENTITYPROVIDERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESAMLIDENTITYPROVIDERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteSAMLIdentityProviderCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSAMLIdentityProviderCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSAMLIdentityProviderCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    DeleteSAMLIdentityProviderCertificateRequest() = default ;
    DeleteSAMLIdentityProviderCertificateRequest(const DeleteSAMLIdentityProviderCertificateRequest &) = default ;
    DeleteSAMLIdentityProviderCertificateRequest(DeleteSAMLIdentityProviderCertificateRequest &&) = default ;
    DeleteSAMLIdentityProviderCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSAMLIdentityProviderCertificateRequest() = default ;
    DeleteSAMLIdentityProviderCertificateRequest& operator=(const DeleteSAMLIdentityProviderCertificateRequest &) = default ;
    DeleteSAMLIdentityProviderCertificateRequest& operator=(DeleteSAMLIdentityProviderCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->userPoolName_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DeleteSAMLIdentityProviderCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline DeleteSAMLIdentityProviderCertificateRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> certificateId_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
