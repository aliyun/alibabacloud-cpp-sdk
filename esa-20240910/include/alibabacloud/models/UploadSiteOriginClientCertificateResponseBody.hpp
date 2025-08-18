// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSITEORIGINCLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSITEORIGINCLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UploadSiteOriginClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSiteOriginClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(FingerprintSha256, fingerprintSha256_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SignatureAlgorithm, signatureAlgorithm_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ValidityDays, validityDays_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSiteOriginClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(FingerprintSha256, fingerprintSha256_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SignatureAlgorithm, signatureAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ValidityDays, validityDays_);
    };
    UploadSiteOriginClientCertificateResponseBody() = default ;
    UploadSiteOriginClientCertificateResponseBody(const UploadSiteOriginClientCertificateResponseBody &) = default ;
    UploadSiteOriginClientCertificateResponseBody(UploadSiteOriginClientCertificateResponseBody &&) = default ;
    UploadSiteOriginClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSiteOriginClientCertificateResponseBody() = default ;
    UploadSiteOriginClientCertificateResponseBody& operator=(const UploadSiteOriginClientCertificateResponseBody &) = default ;
    UploadSiteOriginClientCertificateResponseBody& operator=(UploadSiteOriginClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->fingerprintSha256_ != nullptr && this->id_ != nullptr && this->issuer_ != nullptr && this->notAfter_ != nullptr && this->notBefore_ != nullptr
        && this->requestId_ != nullptr && this->serialNumber_ != nullptr && this->signatureAlgorithm_ != nullptr && this->status_ != nullptr && this->validityDays_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // fingerprintSha256 Field Functions 
    bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
    void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
    inline string fingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // signatureAlgorithm Field Functions 
    bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
    void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
    inline string signatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // validityDays Field Functions 
    bool hasValidityDays() const { return this->validityDays_ != nullptr;};
    void deleteValidityDays() { this->validityDays_ = nullptr;};
    inline string validityDays() const { DARABONBA_PTR_GET_DEFAULT(validityDays_, "") };
    inline UploadSiteOriginClientCertificateResponseBody& setValidityDays(string validityDays) { DARABONBA_PTR_SET_VALUE(validityDays_, validityDays) };


  protected:
    // The Common Name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The SHA-256 fingerprint of the certificate.
    std::shared_ptr<string> fingerprintSha256_ = nullptr;
    // The certificate ID on ESA.
    std::shared_ptr<string> id_ = nullptr;
    // The CA that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The time when the certificate expires.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The time when the certificate takes effect.
    std::shared_ptr<string> notBefore_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The signature algorithm of the certificate.
    std::shared_ptr<string> signatureAlgorithm_ = nullptr;
    // The status of the certificate.
    std::shared_ptr<string> status_ = nullptr;
    // The validity period of the certificate. Unit: day.
    std::shared_ptr<string> validityDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
