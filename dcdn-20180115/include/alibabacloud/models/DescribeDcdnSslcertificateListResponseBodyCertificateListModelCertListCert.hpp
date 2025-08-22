// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODELCERTLISTCERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
    };
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert(const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert(DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert() = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& operator=(const DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert &) = default ;
    DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& operator=(DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->certName_ != nullptr && this->certRegion_ != nullptr && this->common_ != nullptr && this->fingerprint_ != nullptr && this->issuer_ != nullptr
        && this->lastTime_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeDcdnSSLCertificateListResponseBodyCertificateListModelCertListCert& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The region ID of the certificate. Valid values: **cn-hangzhou** and **ap-southeast-1**. Default value: **cn-hangzhou**.
    std::shared_ptr<string> certRegion_ = nullptr;
    // The Common Name (CN) attribute of the certificate. In most cases, the CN is a domain name.
    std::shared_ptr<string> common_ = nullptr;
    // The fingerprint of the certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The time when the certificate was last modified. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
