// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALSAMLIDPCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALSAMLIDPCERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListExternalSAMLIdPCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalSAMLIdPCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLIdPCertificates, SAMLIdPCertificates_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalSAMLIdPCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLIdPCertificates, SAMLIdPCertificates_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListExternalSAMLIdPCertificatesResponseBody() = default ;
    ListExternalSAMLIdPCertificatesResponseBody(const ListExternalSAMLIdPCertificatesResponseBody &) = default ;
    ListExternalSAMLIdPCertificatesResponseBody(ListExternalSAMLIdPCertificatesResponseBody &&) = default ;
    ListExternalSAMLIdPCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalSAMLIdPCertificatesResponseBody() = default ;
    ListExternalSAMLIdPCertificatesResponseBody& operator=(const ListExternalSAMLIdPCertificatesResponseBody &) = default ;
    ListExternalSAMLIdPCertificatesResponseBody& operator=(ListExternalSAMLIdPCertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLIdPCertificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLIdPCertificates& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLIdPCertificates& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
      };
      SAMLIdPCertificates() = default ;
      SAMLIdPCertificates(const SAMLIdPCertificates &) = default ;
      SAMLIdPCertificates(SAMLIdPCertificates &&) = default ;
      SAMLIdPCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLIdPCertificates() = default ;
      SAMLIdPCertificates& operator=(const SAMLIdPCertificates &) = default ;
      SAMLIdPCertificates& operator=(SAMLIdPCertificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->issuer_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->publicKey_ == nullptr && this->serialNumber_ == nullptr
        && this->signatureAlgorithm_ == nullptr && this->subject_ == nullptr && this->version_ == nullptr && this->x509Certificate_ == nullptr; };
      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline SAMLIdPCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline SAMLIdPCertificates& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
      inline SAMLIdPCertificates& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
      inline SAMLIdPCertificates& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline SAMLIdPCertificates& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline SAMLIdPCertificates& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // signatureAlgorithm Field Functions 
      bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
      void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
      inline string getSignatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
      inline SAMLIdPCertificates& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline SAMLIdPCertificates& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline SAMLIdPCertificates& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // x509Certificate Field Functions 
      bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
      void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
      inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
      inline SAMLIdPCertificates& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


    protected:
      // The ID of the certificate.
      shared_ptr<string> certificateId_ {};
      // The issuer of the certificate.
      shared_ptr<string> issuer_ {};
      // The time when the certificate expires.
      shared_ptr<string> notAfter_ {};
      // The time when the certificate was created.
      shared_ptr<string> notBefore_ {};
      // The public key of the certificate. The value of this parameter is in the PEM format and is Base64-encoded.
      shared_ptr<string> publicKey_ {};
      // The serial number of the certificate.
      shared_ptr<string> serialNumber_ {};
      // The signature algorithm of the certificate.
      shared_ptr<string> signatureAlgorithm_ {};
      // The subject of the certificate.
      shared_ptr<string> subject_ {};
      // The version of the certificate.
      shared_ptr<int32_t> version_ {};
      // The X.509 certificate in the PEM format.
      shared_ptr<string> x509Certificate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SAMLIdPCertificates_ == nullptr && this->totalCounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExternalSAMLIdPCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLIdPCertificates Field Functions 
    bool hasSAMLIdPCertificates() const { return this->SAMLIdPCertificates_ != nullptr;};
    void deleteSAMLIdPCertificates() { this->SAMLIdPCertificates_ = nullptr;};
    inline const vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates> & getSAMLIdPCertificates() const { DARABONBA_PTR_GET_CONST(SAMLIdPCertificates_, vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates>) };
    inline vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates> getSAMLIdPCertificates() { DARABONBA_PTR_GET(SAMLIdPCertificates_, vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates>) };
    inline ListExternalSAMLIdPCertificatesResponseBody& setSAMLIdPCertificates(const vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates> & sAMLIdPCertificates) { DARABONBA_PTR_SET_VALUE(SAMLIdPCertificates_, sAMLIdPCertificates) };
    inline ListExternalSAMLIdPCertificatesResponseBody& setSAMLIdPCertificates(vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates> && sAMLIdPCertificates) { DARABONBA_PTR_SET_RVALUE(SAMLIdPCertificates_, sAMLIdPCertificates) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListExternalSAMLIdPCertificatesResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The SAML signing certificates.
    shared_ptr<vector<ListExternalSAMLIdPCertificatesResponseBody::SAMLIdPCertificates>> SAMLIdPCertificates_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
