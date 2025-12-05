// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(ExportablePrivateKey, exportablePrivateKey_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Serial, serial_);
      DARABONBA_PTR_TO_JSON(SignatureAlgorithm, signatureAlgorithm_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_TO_JSON(SubjectKeyIdentifier, subjectKeyIdentifier_);
      DARABONBA_PTR_TO_JSON(SubjectPublicKey, subjectPublicKey_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(ExportablePrivateKey, exportablePrivateKey_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Serial, serial_);
      DARABONBA_PTR_FROM_JSON(SignatureAlgorithm, signatureAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_FROM_JSON(SubjectKeyIdentifier, subjectKeyIdentifier_);
      DARABONBA_PTR_FROM_JSON(SubjectPublicKey, subjectPublicKey_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    DescribeCertificateResponseBody() = default ;
    DescribeCertificateResponseBody(const DescribeCertificateResponseBody &) = default ;
    DescribeCertificateResponseBody(DescribeCertificateResponseBody &&) = default ;
    DescribeCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateResponseBody() = default ;
    DescribeCertificateResponseBody& operator=(const DescribeCertificateResponseBody &) = default ;
    DescribeCertificateResponseBody& operator=(DescribeCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->certificateId_ == nullptr && return this->createdAt_ == nullptr && return this->exportablePrivateKey_ == nullptr && return this->issuer_ == nullptr && return this->keySpec_ == nullptr
        && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->requestId_ == nullptr && return this->serial_ == nullptr && return this->signatureAlgorithm_ == nullptr
        && return this->status_ == nullptr && return this->subject_ == nullptr && return this->subjectAlternativeNames_ == nullptr && return this->subjectKeyIdentifier_ == nullptr && return this->subjectPublicKey_ == nullptr
        && return this->tags_ == nullptr && return this->updatedAt_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeCertificateResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeCertificateResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DescribeCertificateResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // exportablePrivateKey Field Functions 
    bool hasExportablePrivateKey() const { return this->exportablePrivateKey_ != nullptr;};
    void deleteExportablePrivateKey() { this->exportablePrivateKey_ = nullptr;};
    inline bool exportablePrivateKey() const { DARABONBA_PTR_GET_DEFAULT(exportablePrivateKey_, false) };
    inline DescribeCertificateResponseBody& setExportablePrivateKey(bool exportablePrivateKey) { DARABONBA_PTR_SET_VALUE(exportablePrivateKey_, exportablePrivateKey) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeCertificateResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string keySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline DescribeCertificateResponseBody& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline DescribeCertificateResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline DescribeCertificateResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serial Field Functions 
    bool hasSerial() const { return this->serial_ != nullptr;};
    void deleteSerial() { this->serial_ = nullptr;};
    inline string serial() const { DARABONBA_PTR_GET_DEFAULT(serial_, "") };
    inline DescribeCertificateResponseBody& setSerial(string serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


    // signatureAlgorithm Field Functions 
    bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
    void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
    inline string signatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
    inline DescribeCertificateResponseBody& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeCertificateResponseBody& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const vector<string> & subjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<string>) };
    inline vector<string> subjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<string>) };
    inline DescribeCertificateResponseBody& setSubjectAlternativeNames(const vector<string> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline DescribeCertificateResponseBody& setSubjectAlternativeNames(vector<string> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


    // subjectKeyIdentifier Field Functions 
    bool hasSubjectKeyIdentifier() const { return this->subjectKeyIdentifier_ != nullptr;};
    void deleteSubjectKeyIdentifier() { this->subjectKeyIdentifier_ = nullptr;};
    inline string subjectKeyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(subjectKeyIdentifier_, "") };
    inline DescribeCertificateResponseBody& setSubjectKeyIdentifier(string subjectKeyIdentifier) { DARABONBA_PTR_SET_VALUE(subjectKeyIdentifier_, subjectKeyIdentifier) };


    // subjectPublicKey Field Functions 
    bool hasSubjectPublicKey() const { return this->subjectPublicKey_ != nullptr;};
    void deleteSubjectPublicKey() { this->subjectPublicKey_ = nullptr;};
    inline string subjectPublicKey() const { DARABONBA_PTR_GET_DEFAULT(subjectPublicKey_, "") };
    inline DescribeCertificateResponseBody& setSubjectPublicKey(string subjectPublicKey) { DARABONBA_PTR_SET_VALUE(subjectPublicKey_, subjectPublicKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline DescribeCertificateResponseBody& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline DescribeCertificateResponseBody& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline DescribeCertificateResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the certificate.
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The time when the certificate was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // Indicates whether the private key of the certificate can be exported for use. Valid values:
    // 
    // *   true: The private key of the certificate can be exported for use. This is the default value.
    // *   false: The private key of the certificate cannot be exported for use.
    std::shared_ptr<bool> exportablePrivateKey_ = nullptr;
    // The certificate issuer in the distinguished name (DN) format.
    std::shared_ptr<string> issuer_ = nullptr;
    // The type of the key.
    std::shared_ptr<string> keySpec_ = nullptr;
    // The end of the validity period of the certificate.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The beginning of the validity period of the certificate.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serial_ = nullptr;
    // The signature algorithm of the certificate. Valid values:
    // 
    // *   RSA2048-SHA256
    // *   ECDSA-SHA256
    // *   SM2-SM3
    std::shared_ptr<string> signatureAlgorithm_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   PENDING: The certificate is to be imported.
    // *   ACTIVE: The certificate is enabled.
    // *   INACTIVE: The certificate is disabled.
    // *   REVOKED: The certificate is revoked.
    std::shared_ptr<string> status_ = nullptr;
    // The subject of the certificate, which is in the DN format.
    std::shared_ptr<string> subject_ = nullptr;
    // The alias of the certificate subject.
    // 
    // A domain name list is supported. A maximum of 10 domain names are supported.
    std::shared_ptr<vector<string>> subjectAlternativeNames_ = nullptr;
    // The public key identifier of the certificate subject.
    std::shared_ptr<string> subjectKeyIdentifier_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> subjectPublicKey_ = nullptr;
    // The tag of the certificate.
    Darabonba::Json tags_ = nullptr;
    // The time when the certificate was updated.
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
