// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodCertificateListResponseBodyCertificateListModelCertListCert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainMatchCert, domainMatchCert_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainMatchCert, domainMatchCert_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
    };
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert(const DescribeVodCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert(DescribeVodCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& operator=(const DescribeVodCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& operator=(DescribeVodCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->certId_ != nullptr && this->certIdentifier_ != nullptr && this->certName_ != nullptr && this->common_ != nullptr && this->createTime_ != nullptr
        && this->domainMatchCert_ != nullptr && this->endTime_ != nullptr && this->fingerprint_ != nullptr && this->instanceId_ != nullptr && this->issuer_ != nullptr
        && this->lastTime_ != nullptr && this->signAlgorithm_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainMatchCert Field Functions 
    bool hasDomainMatchCert() const { return this->domainMatchCert_ != nullptr;};
    void deleteDomainMatchCert() { this->domainMatchCert_ = nullptr;};
    inline bool domainMatchCert() const { DARABONBA_PTR_GET_DEFAULT(domainMatchCert_, false) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setDomainMatchCert(bool domainMatchCert) { DARABONBA_PTR_SET_VALUE(domainMatchCert_, domainMatchCert) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // signAlgorithm Field Functions 
    bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
    void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
    inline string signAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
    inline DescribeVodCertificateListResponseBodyCertificateListModelCertListCert& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


  protected:
    // The algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The common name of the certificate.
    std::shared_ptr<string> common_ = nullptr;
    // The time when the certificate was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // DomainMatchCert.
    std::shared_ptr<bool> domainMatchCert_ = nullptr;
    // The time when the certificate expired.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The fingerprint of the certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The time when the certificate was issued. Unit: seconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The signAlgorithm.
    std::shared_ptr<string> signAlgorithm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
