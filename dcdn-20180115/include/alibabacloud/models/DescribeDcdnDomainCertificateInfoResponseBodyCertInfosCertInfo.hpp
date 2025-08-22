// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertLife, certLife_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo(const DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo(DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(const DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certDomainName_ != nullptr
        && this->certExpireTime_ != nullptr && this->certId_ != nullptr && this->certLife_ != nullptr && this->certName_ != nullptr && this->certOrg_ != nullptr
        && this->certRegion_ != nullptr && this->certType_ != nullptr && this->domainName_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr
        && this->status_ != nullptr; };
    // certDomainName Field Functions 
    bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
    void deleteCertDomainName() { this->certDomainName_ = nullptr;};
    inline string certDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certLife Field Functions 
    bool hasCertLife() const { return this->certLife_ != nullptr;};
    void deleteCertLife() { this->certLife_ = nullptr;};
    inline string certLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The domain name that matches the certificate.
    std::shared_ptr<string> certDomainName_ = nullptr;
    // The time at which the certificate expires.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The validity period of the certificate. Unit: **months** or **years**.
    std::shared_ptr<string> certLife_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> certOrg_ = nullptr;
    // The region where the certificate is used.
    std::shared_ptr<string> certRegion_ = nullptr;
    // The type of the certificate.
    // 
    // *   **cas**: a certificate that is purchased by using Certificates Management Service
    // *   **upload**: a custom certificate that you upload
    std::shared_ptr<string> certType_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of HTTPS. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **success**: The certificate has taken effect.
    // *   **checking**: The system is checking whether the domain name is using Dynamic Route for CDN (DCDN).
    // *   **cname_error**: The domain name is not using DCDN.
    // *   **domain_invalid**: The domain name contains invalid characters.
    // *   **unsupport_wildcard**: The wildcard domain name is not supported.
    // *   **applying**: Certificate application is in progress.
    // *   **get_token_timeout**: The certificate application request has timed out.
    // *   **check_token_timeout**: The verification has timed out.
    // *   **get_cert_timeout**: The request to obtain the certificate has timed out.
    // *   **failed**: The certificate application request failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
