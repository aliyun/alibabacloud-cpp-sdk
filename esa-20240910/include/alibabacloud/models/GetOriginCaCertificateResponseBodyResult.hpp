// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINCACERTIFICATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINCACERTIFICATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginCaCertificateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginCaCertificateResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetOriginCaCertificateResponseBodyResult& obj) { 
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
    GetOriginCaCertificateResponseBodyResult() = default ;
    GetOriginCaCertificateResponseBodyResult(const GetOriginCaCertificateResponseBodyResult &) = default ;
    GetOriginCaCertificateResponseBodyResult(GetOriginCaCertificateResponseBodyResult &&) = default ;
    GetOriginCaCertificateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginCaCertificateResponseBodyResult() = default ;
    GetOriginCaCertificateResponseBodyResult& operator=(const GetOriginCaCertificateResponseBodyResult &) = default ;
    GetOriginCaCertificateResponseBodyResult& operator=(GetOriginCaCertificateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->createTime_ != nullptr && this->fingerprintSha256_ != nullptr && this->id_ != nullptr && this->issuer_ != nullptr && this->name_ != nullptr
        && this->notAfter_ != nullptr && this->notBefore_ != nullptr && this->pubkeyAlgorithm_ != nullptr && this->SAN_ != nullptr && this->serialNumber_ != nullptr
        && this->signatureAlgorithm_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fingerprintSha256 Field Functions 
    bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
    void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
    inline string fingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // pubkeyAlgorithm Field Functions 
    bool hasPubkeyAlgorithm() const { return this->pubkeyAlgorithm_ != nullptr;};
    void deletePubkeyAlgorithm() { this->pubkeyAlgorithm_ = nullptr;};
    inline string pubkeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(pubkeyAlgorithm_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setPubkeyAlgorithm(string pubkeyAlgorithm) { DARABONBA_PTR_SET_VALUE(pubkeyAlgorithm_, pubkeyAlgorithm) };


    // SAN Field Functions 
    bool hasSAN() const { return this->SAN_ != nullptr;};
    void deleteSAN() { this->SAN_ = nullptr;};
    inline string SAN() const { DARABONBA_PTR_GET_DEFAULT(SAN_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setSAN(string SAN) { DARABONBA_PTR_SET_VALUE(SAN_, SAN) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // signatureAlgorithm Field Functions 
    bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
    void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
    inline string signatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetOriginCaCertificateResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The Common Name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The time when the certificate was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The SHA-256 fingerprint of the certificate.
    std::shared_ptr<string> fingerprintSha256_ = nullptr;
    // The certificate ID.
    std::shared_ptr<string> id_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The certificate name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the certificate expires.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The time when the certificate takes effect.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The public-key algorithm of the certificate.
    std::shared_ptr<string> pubkeyAlgorithm_ = nullptr;
    // The Subject Alternative Name (SAN) of the certificate.
    std::shared_ptr<string> SAN_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The signature algorithm of the certificate.
    std::shared_ptr<string> signatureAlgorithm_ = nullptr;
    // The status of the certificate.
    std::shared_ptr<string> status_ = nullptr;
    // The certificate type.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the certificate was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
