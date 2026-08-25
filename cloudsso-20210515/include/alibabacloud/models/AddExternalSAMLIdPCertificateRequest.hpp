// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEXTERNALSAMLIDPCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDEXTERNALSAMLIDPCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class AddExternalSAMLIdPCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddExternalSAMLIdPCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, AddExternalSAMLIdPCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    AddExternalSAMLIdPCertificateRequest() = default ;
    AddExternalSAMLIdPCertificateRequest(const AddExternalSAMLIdPCertificateRequest &) = default ;
    AddExternalSAMLIdPCertificateRequest(AddExternalSAMLIdPCertificateRequest &&) = default ;
    AddExternalSAMLIdPCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddExternalSAMLIdPCertificateRequest() = default ;
    AddExternalSAMLIdPCertificateRequest& operator=(const AddExternalSAMLIdPCertificateRequest &) = default ;
    AddExternalSAMLIdPCertificateRequest& operator=(AddExternalSAMLIdPCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->x509Certificate_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline AddExternalSAMLIdPCertificateRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline AddExternalSAMLIdPCertificateRequest& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The X.509 certificate in the PEM format.
    // 
    // The certificate is provided by the SAML identity provider (IdP).
    shared_ptr<string> x509Certificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
