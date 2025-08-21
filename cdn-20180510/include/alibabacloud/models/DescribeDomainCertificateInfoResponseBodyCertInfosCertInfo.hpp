// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertLife, certLife_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_TO_JSON(DomainCnameStatus, domainCnameStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
      DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_FROM_JSON(DomainCnameStatus, domainCnameStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo(const DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo(DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(const DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certDomainName_ != nullptr
        && this->certExpireTime_ != nullptr && this->certId_ != nullptr && this->certLife_ != nullptr && this->certName_ != nullptr && this->certOrg_ != nullptr
        && this->certRegion_ != nullptr && this->certStartTime_ != nullptr && this->certType_ != nullptr && this->certUpdateTime_ != nullptr && this->domainCnameStatus_ != nullptr
        && this->domainName_ != nullptr && this->serverCertificate_ != nullptr && this->serverCertificateStatus_ != nullptr && this->status_ != nullptr; };
    // certDomainName Field Functions 
    bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
    void deleteCertDomainName() { this->certDomainName_ = nullptr;};
    inline string certDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certLife Field Functions 
    bool hasCertLife() const { return this->certLife_ != nullptr;};
    void deleteCertLife() { this->certLife_ = nullptr;};
    inline string certLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certUpdateTime Field Functions 
    bool hasCertUpdateTime() const { return this->certUpdateTime_ != nullptr;};
    void deleteCertUpdateTime() { this->certUpdateTime_ = nullptr;};
    inline string certUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(certUpdateTime_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertUpdateTime(string certUpdateTime) { DARABONBA_PTR_SET_VALUE(certUpdateTime_, certUpdateTime) };


    // domainCnameStatus Field Functions 
    bool hasDomainCnameStatus() const { return this->domainCnameStatus_ != nullptr;};
    void deleteDomainCnameStatus() { this->domainCnameStatus_ = nullptr;};
    inline string domainCnameStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCnameStatus_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainCnameStatus(string domainCnameStatus) { DARABONBA_PTR_SET_VALUE(domainCnameStatus_, domainCnameStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string serverCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


    // serverCertificateStatus Field Functions 
    bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
    void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
    inline string serverCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The domain name that matches the certificate.
    std::shared_ptr<string> certDomainName_ = nullptr;
    // The time at which the certificate expires.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The unit of the validity period of the certificate. Valid values:
    // 
    // *   **months**
    // *   **years**
    std::shared_ptr<string> certLife_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The name of the certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> certOrg_ = nullptr;
    // The region where the certificate is used.
    std::shared_ptr<string> certRegion_ = nullptr;
    // The time when the certificate became effective.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The type of the certificate.
    // 
    // *   **free**: a free certificate
    // *   **cas**: a certificate that is purchased by using Certificate Management Service
    // *   **upload**: a custom certificate that you upload
    std::shared_ptr<string> certType_ = nullptr;
    // The time at which the certificate was updated.
    std::shared_ptr<string> certUpdateTime_ = nullptr;
    // The CNAME status of the domain name.
    // 
    // *   **ok**: The domain name points to the CNAME assigned by Alibaba Cloud CDN.
    // *   **cname_error**: An error occurred and the domain name cannot point to the CNAME.
    // *   **op_domain_cname_error** : An error occurred to the CNAME of the top-level domain. The domain name cannot point to the CNAME.
    // *   **unsupport_wildcard**: The wildcard domain name is not supported.
    std::shared_ptr<string> domainCnameStatus_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> serverCertificate_ = nullptr;
    // The status of HTTPS.
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> serverCertificateStatus_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **success**: The certificate has taken effect.
    // *   **checking**: The system is checking whether the domain name is using Alibaba Cloud CDN.
    // *   **cname_error**: No valid CNAME record has been added for the domain name.
    // *   **top_domain_cname_error**: No valid CNAME record has been added for the top-level domain.
    // *   **domain_invalid**: The domain name contains invalid characters.
    // *   **unsupport_wildcard**: The domain name is a wildcard domain name. Wildcard domain names are not supported.
    // *   **applying**: The certificate application is in progress.
    // *   **get_token_timeout**: The certificate application request has timed out.
    // *   **check_token_timeout**: The verification has timed out.
    // *   **get_cert_timeout**: The request to obtain the certificate has timed out.
    // *   **failed**: The certificate application request failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
