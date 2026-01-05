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
        && this->certId_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->commonName_ == nullptr && this->domain_ == nullptr
        && this->domainMatchCert_ == nullptr && this->fingerprint_ == nullptr && this->instanceId_ == nullptr && this->isChainCompleted_ == nullptr && this->issuer_ == nullptr
        && this->keySize_ == nullptr && this->md5_ == nullptr && this->notAfterTimestamp_ == nullptr && this->notBeforeTimestamp_ == nullptr && this->sans_ == nullptr
        && this->serialNo_ == nullptr && this->sha2_ == nullptr && this->signAlgorithm_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline SslCertMetaInfo& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SslCertMetaInfo& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline SslCertMetaInfo& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SslCertMetaInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline SslCertMetaInfo& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SslCertMetaInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainMatchCert Field Functions 
    bool hasDomainMatchCert() const { return this->domainMatchCert_ != nullptr;};
    void deleteDomainMatchCert() { this->domainMatchCert_ = nullptr;};
    inline bool getDomainMatchCert() const { DARABONBA_PTR_GET_DEFAULT(domainMatchCert_, false) };
    inline SslCertMetaInfo& setDomainMatchCert(bool domainMatchCert) { DARABONBA_PTR_SET_VALUE(domainMatchCert_, domainMatchCert) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline SslCertMetaInfo& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SslCertMetaInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isChainCompleted Field Functions 
    bool hasIsChainCompleted() const { return this->isChainCompleted_ != nullptr;};
    void deleteIsChainCompleted() { this->isChainCompleted_ = nullptr;};
    inline bool getIsChainCompleted() const { DARABONBA_PTR_GET_DEFAULT(isChainCompleted_, false) };
    inline SslCertMetaInfo& setIsChainCompleted(bool isChainCompleted) { DARABONBA_PTR_SET_VALUE(isChainCompleted_, isChainCompleted) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline SslCertMetaInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline string getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, "") };
    inline SslCertMetaInfo& setKeySize(string keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline SslCertMetaInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // notAfterTimestamp Field Functions 
    bool hasNotAfterTimestamp() const { return this->notAfterTimestamp_ != nullptr;};
    void deleteNotAfterTimestamp() { this->notAfterTimestamp_ = nullptr;};
    inline int64_t getNotAfterTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notAfterTimestamp_, 0L) };
    inline SslCertMetaInfo& setNotAfterTimestamp(int64_t notAfterTimestamp) { DARABONBA_PTR_SET_VALUE(notAfterTimestamp_, notAfterTimestamp) };


    // notBeforeTimestamp Field Functions 
    bool hasNotBeforeTimestamp() const { return this->notBeforeTimestamp_ != nullptr;};
    void deleteNotBeforeTimestamp() { this->notBeforeTimestamp_ = nullptr;};
    inline int64_t getNotBeforeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTimestamp_, 0L) };
    inline SslCertMetaInfo& setNotBeforeTimestamp(int64_t notBeforeTimestamp) { DARABONBA_PTR_SET_VALUE(notBeforeTimestamp_, notBeforeTimestamp) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline SslCertMetaInfo& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline SslCertMetaInfo& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // sha2 Field Functions 
    bool hasSha2() const { return this->sha2_ != nullptr;};
    void deleteSha2() { this->sha2_ = nullptr;};
    inline string getSha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
    inline SslCertMetaInfo& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string getSignAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline SslCertMetaInfo& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


  protected:
    shared_ptr<string> algorithm_ {};
    shared_ptr<int64_t> certId_ {};
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> certName_ {};
    shared_ptr<string> commonName_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<bool> domainMatchCert_ {};
    shared_ptr<string> fingerprint_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isChainCompleted_ {};
    shared_ptr<string> issuer_ {};
    shared_ptr<string> keySize_ {};
    shared_ptr<string> md5_ {};
    shared_ptr<int64_t> notAfterTimestamp_ {};
    shared_ptr<int64_t> notBeforeTimestamp_ {};
    shared_ptr<string> sans_ {};
    shared_ptr<string> serialNo_ {};
    shared_ptr<string> sha2_ {};
    shared_ptr<string> signAlgorithm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
