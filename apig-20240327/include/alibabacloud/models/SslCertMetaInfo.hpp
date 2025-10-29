// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SSLCERTMETAINFO_HPP_
#define ALIBABACLOUD_MODELS_SSLCERTMETAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SslCertMetaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SslCertMetaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(certId, certId_);
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(certName, certName_);
      DARABONBA_PTR_TO_JSON(commonName, commonName_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(domainMatchCert, domainMatchCert_);
      DARABONBA_PTR_TO_JSON(fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(isChainCompleted, isChainCompleted_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(keySize, keySize_);
      DARABONBA_PTR_TO_JSON(md5, md5_);
      DARABONBA_PTR_TO_JSON(notAfterTimestamp, notAfterTimestamp_);
      DARABONBA_PTR_TO_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_TO_JSON(sans, sans_);
      DARABONBA_PTR_TO_JSON(serialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(sha2, sha2_);
      DARABONBA_PTR_TO_JSON(signAlgorithm, signAlgorithm_);
    };
    friend void from_json(const Darabonba::Json& j, SslCertMetaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(certId, certId_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(certName, certName_);
      DARABONBA_PTR_FROM_JSON(commonName, commonName_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(domainMatchCert, domainMatchCert_);
      DARABONBA_PTR_FROM_JSON(fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(isChainCompleted, isChainCompleted_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(keySize, keySize_);
      DARABONBA_PTR_FROM_JSON(md5, md5_);
      DARABONBA_PTR_FROM_JSON(notAfterTimestamp, notAfterTimestamp_);
      DARABONBA_PTR_FROM_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_FROM_JSON(sans, sans_);
      DARABONBA_PTR_FROM_JSON(serialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(sha2, sha2_);
      DARABONBA_PTR_FROM_JSON(signAlgorithm, signAlgorithm_);
    };
    SslCertMetaInfo() = default ;
    SslCertMetaInfo(const SslCertMetaInfo &) = default ;
    SslCertMetaInfo(SslCertMetaInfo &&) = default ;
    SslCertMetaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SslCertMetaInfo() = default ;
    SslCertMetaInfo& operator=(const SslCertMetaInfo &) = default ;
    SslCertMetaInfo& operator=(SslCertMetaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certId_ == nullptr && return this->certIdentifier_ == nullptr && return this->certName_ == nullptr && return this->commonName_ == nullptr && return this->domain_ == nullptr
        && return this->domainMatchCert_ == nullptr && return this->fingerprint_ == nullptr && return this->instanceId_ == nullptr && return this->isChainCompleted_ == nullptr && return this->issuer_ == nullptr
        && return this->keySize_ == nullptr && return this->md5_ == nullptr && return this->notAfterTimestamp_ == nullptr && return this->notBeforeTimestamp_ == nullptr && return this->sans_ == nullptr
        && return this->serialNo_ == nullptr && return this->sha2_ == nullptr && return this->signAlgorithm_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline SslCertMetaInfo& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SslCertMetaInfo& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline SslCertMetaInfo& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SslCertMetaInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline SslCertMetaInfo& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SslCertMetaInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainMatchCert Field Functions 
    bool hasDomainMatchCert() const { return this->domainMatchCert_ != nullptr;};
    void deleteDomainMatchCert() { this->domainMatchCert_ = nullptr;};
    inline bool domainMatchCert() const { DARABONBA_PTR_GET_DEFAULT(domainMatchCert_, false) };
    inline SslCertMetaInfo& setDomainMatchCert(bool domainMatchCert) { DARABONBA_PTR_SET_VALUE(domainMatchCert_, domainMatchCert) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline SslCertMetaInfo& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SslCertMetaInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isChainCompleted Field Functions 
    bool hasIsChainCompleted() const { return this->isChainCompleted_ != nullptr;};
    void deleteIsChainCompleted() { this->isChainCompleted_ = nullptr;};
    inline bool isChainCompleted() const { DARABONBA_PTR_GET_DEFAULT(isChainCompleted_, false) };
    inline SslCertMetaInfo& setIsChainCompleted(bool isChainCompleted) { DARABONBA_PTR_SET_VALUE(isChainCompleted_, isChainCompleted) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline SslCertMetaInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline string keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, "") };
    inline SslCertMetaInfo& setKeySize(string keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline SslCertMetaInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // notAfterTimestamp Field Functions 
    bool hasNotAfterTimestamp() const { return this->notAfterTimestamp_ != nullptr;};
    void deleteNotAfterTimestamp() { this->notAfterTimestamp_ = nullptr;};
    inline int64_t notAfterTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notAfterTimestamp_, 0L) };
    inline SslCertMetaInfo& setNotAfterTimestamp(int64_t notAfterTimestamp) { DARABONBA_PTR_SET_VALUE(notAfterTimestamp_, notAfterTimestamp) };


    // notBeforeTimestamp Field Functions 
    bool hasNotBeforeTimestamp() const { return this->notBeforeTimestamp_ != nullptr;};
    void deleteNotBeforeTimestamp() { this->notBeforeTimestamp_ = nullptr;};
    inline int64_t notBeforeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTimestamp_, 0L) };
    inline SslCertMetaInfo& setNotBeforeTimestamp(int64_t notBeforeTimestamp) { DARABONBA_PTR_SET_VALUE(notBeforeTimestamp_, notBeforeTimestamp) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline SslCertMetaInfo& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string serialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline SslCertMetaInfo& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string sha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline SslCertMetaInfo& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline SslCertMetaInfo& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


  protected:
    std::shared_ptr<string> algorithm_ = nullptr;
    std::shared_ptr<int64_t> certId_ = nullptr;
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<bool> domainMatchCert_ = nullptr;
    std::shared_ptr<string> fingerprint_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isChainCompleted_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> keySize_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<int64_t> notAfterTimestamp_ = nullptr;
    std::shared_ptr<int64_t> notBeforeTimestamp_ = nullptr;
    std::shared_ptr<string> sans_ = nullptr;
    std::shared_ptr<string> serialNo_ = nullptr;
    std::shared_ptr<string> sha2_ = nullptr;
    std::shared_ptr<string> signAlgorithm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
