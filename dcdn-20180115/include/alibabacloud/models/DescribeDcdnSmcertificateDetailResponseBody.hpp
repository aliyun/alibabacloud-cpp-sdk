// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSMCERTIFICATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSMCertificateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSMCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(EncryptCertificate, encryptCertificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(SignCertificate, signCertificate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSMCertificateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(EncryptCertificate, encryptCertificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(SignCertificate, signCertificate_);
    };
    DescribeDcdnSMCertificateDetailResponseBody() = default ;
    DescribeDcdnSMCertificateDetailResponseBody(const DescribeDcdnSMCertificateDetailResponseBody &) = default ;
    DescribeDcdnSMCertificateDetailResponseBody(DescribeDcdnSMCertificateDetailResponseBody &&) = default ;
    DescribeDcdnSMCertificateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSMCertificateDetailResponseBody() = default ;
    DescribeDcdnSMCertificateDetailResponseBody& operator=(const DescribeDcdnSMCertificateDetailResponseBody &) = default ;
    DescribeDcdnSMCertificateDetailResponseBody& operator=(DescribeDcdnSMCertificateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certExpireTime_ != nullptr
        && this->certIdentifier_ != nullptr && this->certName_ != nullptr && this->certOrg_ != nullptr && this->commonName_ != nullptr && this->encryptCertificate_ != nullptr
        && this->requestId_ != nullptr && this->sans_ != nullptr && this->signCertificate_ != nullptr; };
    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // encryptCertificate Field Functions 
    bool hasEncryptCertificate() const { return this->encryptCertificate_ != nullptr;};
    void deleteEncryptCertificate() { this->encryptCertificate_ = nullptr;};
    inline string encryptCertificate() const { DARABONBA_PTR_GET_DEFAULT(encryptCertificate_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setEncryptCertificate(string encryptCertificate) { DARABONBA_PTR_SET_VALUE(encryptCertificate_, encryptCertificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // signCertificate Field Functions 
    bool hasSignCertificate() const { return this->signCertificate_ != nullptr;};
    void deleteSignCertificate() { this->signCertificate_ = nullptr;};
    inline string signCertificate() const { DARABONBA_PTR_GET_DEFAULT(signCertificate_, "") };
    inline DescribeDcdnSMCertificateDetailResponseBody& setSignCertificate(string signCertificate) { DARABONBA_PTR_SET_VALUE(signCertificate_, signCertificate) };


  protected:
    // The time when the certificate expires. The time is displayed in UTC.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> certOrg_ = nullptr;
    // The top-level domain name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The content of the encryption certificate.
    std::shared_ptr<string> encryptCertificate_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The domain name on the additional certificate.
    std::shared_ptr<string> sans_ = nullptr;
    // The content of the signature certificate.
    std::shared_ptr<string> signCertificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
