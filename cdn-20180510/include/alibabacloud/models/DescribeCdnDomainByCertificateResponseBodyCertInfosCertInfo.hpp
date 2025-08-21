// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertCaIsLegacy, certCaIsLegacy_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertExpired, certExpired_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CertSubjectCommonName, certSubjectCommonName_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCaIsLegacy, certCaIsLegacy_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertExpired, certExpired_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CertSubjectCommonName, certSubjectCommonName_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
    };
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo() = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo(const DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo &) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo(DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo &&) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo() = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& operator=(const DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo &) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& operator=(DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certCaIsLegacy_ != nullptr
        && this->certExpireTime_ != nullptr && this->certExpired_ != nullptr && this->certStartTime_ != nullptr && this->certSubjectCommonName_ != nullptr && this->certType_ != nullptr
        && this->domainList_ != nullptr && this->domainNames_ != nullptr && this->issuer_ != nullptr; };
    // certCaIsLegacy Field Functions 
    bool hasCertCaIsLegacy() const { return this->certCaIsLegacy_ != nullptr;};
    void deleteCertCaIsLegacy() { this->certCaIsLegacy_ = nullptr;};
    inline string certCaIsLegacy() const { DARABONBA_PTR_GET_DEFAULT(certCaIsLegacy_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertCaIsLegacy(string certCaIsLegacy) { DARABONBA_PTR_SET_VALUE(certCaIsLegacy_, certCaIsLegacy) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certExpired Field Functions 
    bool hasCertExpired() const { return this->certExpired_ != nullptr;};
    void deleteCertExpired() { this->certExpired_ = nullptr;};
    inline string certExpired() const { DARABONBA_PTR_GET_DEFAULT(certExpired_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertExpired(string certExpired) { DARABONBA_PTR_SET_VALUE(certExpired_, certExpired) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certSubjectCommonName Field Functions 
    bool hasCertSubjectCommonName() const { return this->certSubjectCommonName_ != nullptr;};
    void deleteCertSubjectCommonName() { this->certSubjectCommonName_ = nullptr;};
    inline string certSubjectCommonName() const { DARABONBA_PTR_GET_DEFAULT(certSubjectCommonName_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertSubjectCommonName(string certSubjectCommonName) { DARABONBA_PTR_SET_VALUE(certSubjectCommonName_, certSubjectCommonName) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string domainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


  protected:
    // Indicates whether the SSL certificate is obsolete. Valid values:
    // 
    // *   **yes**: The SSL certificate is obsolete.
    // *   **no**: The SSL certificate is working as expected.
    std::shared_ptr<string> certCaIsLegacy_ = nullptr;
    // The expiration time of the certificate.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // Indicates whether the SSL certificate is expired. Valid values:
    // 
    // *   **yes**: The SSL certificate is expired.
    // *   **no**: The SSL certificate is not expired.
    std::shared_ptr<string> certExpired_ = nullptr;
    // The time when the certificate became effective.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The name of the SSL certificate owner.
    std::shared_ptr<string> certSubjectCommonName_ = nullptr;
    // The type of the certificate. Valid values: **RSA**, **DSA**, and **ECDSA**.
    std::shared_ptr<string> certType_ = nullptr;
    // If a value is returned, the value matches the SSL certificate. Multiple domain names are separated by commas (,).
    std::shared_ptr<string> domainList_ = nullptr;
    // The domain names (DNS fields) that match the SSL certificate. Multiple domain names are separated by commas (,).
    std::shared_ptr<string> domainNames_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
