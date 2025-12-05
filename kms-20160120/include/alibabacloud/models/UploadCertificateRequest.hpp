// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UploadCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    UploadCertificateRequest() = default ;
    UploadCertificateRequest(const UploadCertificateRequest &) = default ;
    UploadCertificateRequest(UploadCertificateRequest &&) = default ;
    UploadCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCertificateRequest() = default ;
    UploadCertificateRequest& operator=(const UploadCertificateRequest &) = default ;
    UploadCertificateRequest& operator=(UploadCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificate_ == nullptr
        && return this->certificateChain_ == nullptr && return this->certificateId_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UploadCertificateRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // certificateChain Field Functions 
    bool hasCertificateChain() const { return this->certificateChain_ != nullptr;};
    void deleteCertificateChain() { this->certificateChain_ = nullptr;};
    inline string certificateChain() const { DARABONBA_PTR_GET_DEFAULT(certificateChain_, "") };
    inline UploadCertificateRequest& setCertificateChain(string certificateChain) { DARABONBA_PTR_SET_VALUE(certificateChain_, certificateChain) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline UploadCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The certificate issued by the CA, which is in the Privacy Enhanced Mail (PEM) format.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificate_ = nullptr;
    // The certificate chain issued by the CA, which is in the PEM format.
    std::shared_ptr<string> certificateChain_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
