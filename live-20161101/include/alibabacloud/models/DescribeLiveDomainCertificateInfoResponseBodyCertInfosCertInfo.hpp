// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertLife, certLife_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo(const DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo(DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(const DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certDomainName_ != nullptr
        && this->certExpireTime_ != nullptr && this->certLife_ != nullptr && this->certName_ != nullptr && this->certOrg_ != nullptr && this->certType_ != nullptr
        && this->domainName_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr && this->status_ != nullptr; };
    // certDomainName Field Functions 
    bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
    void deleteCertDomainName() { this->certDomainName_ = nullptr;};
    inline string certDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certLife Field Functions 
    bool hasCertLife() const { return this->certLife_ != nullptr;};
    void deleteCertLife() { this->certLife_ = nullptr;};
    inline string certLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The streaming domain or ingest domain that matches the certificate.
    std::shared_ptr<string> certDomainName_ = nullptr;
    // The expiration time of the certificate. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The validity period of the certificate.
    // 
    // *   If the validity period is greater than 12 months, XX years XX months is displayed. For example, 2 years 3 months indicates that the validity period is 2 years and 3 months.
    // *   If the validity period is less than 12 months, XX months is displayed. For example, 3 months indicates that the validity period is 3 months.
    std::shared_ptr<string> certLife_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> certOrg_ = nullptr;
    // The type of the certificate. Valid values:
    // 
    // *   **free**: a free certificate (for testing)
    // *   **cas**: a certificate that is purchased from Certificate Management Service
    // *   **upload**: a custom certificate that you uploaded
    std::shared_ptr<string> certType_ = nullptr;
    // The streaming domain or ingest domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of HTTPS. Valid values:
    // 
    // *   **on**: HTTPS is enabled.
    // *   **off**: HTTPS is disabled.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // The status of the free certificate that is used for testing. Valid values:
    // 
    // *   **success**: The certificate is effective.
    // *   **checking**: The system is checking whether the domain name is mapped to the CNAME that is assigned by ApsaraVideo Live.
    // *   **cname_error**: The domain name is not mapped to the CNAME that is assigned by ApsaraVideo Live.
    // *   **domain_invalid**: The domain name contains invalid characters.
    // *   **unsupport_wildcard**: The domain name is a wildcard domain name, which is not supported.
    // *   **applying**: The certificate is in the application progress.
    // *   **failed**: The application for the certificate failed.
    // 
    // >  The **Status** parameter is valid only if the certificate is a free certificate for testing. If the certificate is not a free certificate for testing, an empty value is returned.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
