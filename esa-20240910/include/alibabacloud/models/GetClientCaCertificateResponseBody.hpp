// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetClientCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetClientCaCertificateResponseBody() = default ;
    GetClientCaCertificateResponseBody(const GetClientCaCertificateResponseBody &) = default ;
    GetClientCaCertificateResponseBody(GetClientCaCertificateResponseBody &&) = default ;
    GetClientCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientCaCertificateResponseBody() = default ;
    GetClientCaCertificateResponseBody& operator=(const GetClientCaCertificateResponseBody &) = default ;
    GetClientCaCertificateResponseBody& operator=(GetClientCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FingerprintSha256, fingerprintSha256_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(PubkeyAlgorithm, pubkeyAlgorithm_);
        DARABONBA_PTR_TO_JSON(SAN, SAN_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FingerprintSha256, fingerprintSha256_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(PubkeyAlgorithm, pubkeyAlgorithm_);
        DARABONBA_PTR_FROM_JSON(SAN, SAN_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->createTime_ == nullptr && this->fingerprintSha256_ == nullptr && this->id_ == nullptr && this->issuer_ == nullptr && this->name_ == nullptr
        && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->pubkeyAlgorithm_ == nullptr && this->SAN_ == nullptr && this->serialNumber_ == nullptr
        && this->signatureAlgorithm_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Result& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fingerprintSha256 Field Functions 
      bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
      void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
      inline string getFingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
      inline Result& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Result& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
      inline Result& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
      inline Result& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // pubkeyAlgorithm Field Functions 
      bool hasPubkeyAlgorithm() const { return this->pubkeyAlgorithm_ != nullptr;};
      void deletePubkeyAlgorithm() { this->pubkeyAlgorithm_ = nullptr;};
      inline string getPubkeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(pubkeyAlgorithm_, "") };
      inline Result& setPubkeyAlgorithm(string pubkeyAlgorithm) { DARABONBA_PTR_SET_VALUE(pubkeyAlgorithm_, pubkeyAlgorithm) };


      // SAN Field Functions 
      bool hasSAN() const { return this->SAN_ != nullptr;};
      void deleteSAN() { this->SAN_ = nullptr;};
      inline string getSAN() const { DARABONBA_PTR_GET_DEFAULT(SAN_, "") };
      inline Result& setSAN(string SAN) { DARABONBA_PTR_SET_VALUE(SAN_, SAN) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Result& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // signatureAlgorithm Field Functions 
      bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
      void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
      inline string getSignatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
      inline Result& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The Common Name of the certificate.
      shared_ptr<string> commonName_ {};
      // The time when the certificate was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> fingerprintSha256_ {};
      // The certificate ID.
      shared_ptr<string> id_ {};
      // The certificate authority (CA) that issued the certificate.
      shared_ptr<string> issuer_ {};
      // The certificate name.
      shared_ptr<string> name_ {};
      // The time when the certificate expires.
      shared_ptr<string> notAfter_ {};
      // The time when the certificate takes effect.
      shared_ptr<string> notBefore_ {};
      // The public-key algorithm of the certificate.
      shared_ptr<string> pubkeyAlgorithm_ {};
      // The Subject Alternative Name (SAN) of the certificate.
      shared_ptr<string> SAN_ {};
      shared_ptr<string> serialNumber_ {};
      // The signature algorithm of the certificate.
      shared_ptr<string> signatureAlgorithm_ {};
      // The certificate status.
      shared_ptr<string> status_ {};
      // The certificate type.
      shared_ptr<string> type_ {};
      // The time when the certificate was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->certificate_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr && this->status_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline GetClientCaCertificateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetClientCaCertificateResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetClientCaCertificateResponseBody::Result) };
    inline GetClientCaCertificateResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetClientCaCertificateResponseBody::Result) };
    inline GetClientCaCertificateResponseBody& setResult(const GetClientCaCertificateResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetClientCaCertificateResponseBody& setResult(GetClientCaCertificateResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetClientCaCertificateResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetClientCaCertificateResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClientCaCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The certificate content.
    shared_ptr<string> certificate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The certificate information.
    shared_ptr<GetClientCaCertificateResponseBody::Result> result_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
    // The website name.
    shared_ptr<string> siteName_ {};
    // The certificate status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
