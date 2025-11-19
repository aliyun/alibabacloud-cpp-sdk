// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
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
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo(const DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo(DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(const DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certDomainName_ == nullptr
        && return this->certExpireTime_ == nullptr && return this->certId_ == nullptr && return this->certLife_ == nullptr && return this->certName_ == nullptr && return this->certOrg_ == nullptr
        && return this->certRegion_ == nullptr && return this->certStartTime_ == nullptr && return this->certType_ == nullptr && return this->certUpdateTime_ == nullptr && return this->domainCnameStatus_ == nullptr
        && return this->domainName_ == nullptr && return this->serverCertificate_ == nullptr && return this->serverCertificateStatus_ == nullptr && return this->status_ == nullptr; };
    // certDomainName Field Functions 
    bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
    void deleteCertDomainName() { this->certDomainName_ = nullptr;};
    inline string certDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certLife Field Functions 
    bool hasCertLife() const { return this->certLife_ != nullptr;};
    void deleteCertLife() { this->certLife_ = nullptr;};
    inline string certLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certUpdateTime Field Functions 
    bool hasCertUpdateTime() const { return this->certUpdateTime_ != nullptr;};
    void deleteCertUpdateTime() { this->certUpdateTime_ = nullptr;};
    inline string certUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(certUpdateTime_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertUpdateTime(string certUpdateTime) { DARABONBA_PTR_SET_VALUE(certUpdateTime_, certUpdateTime) };


    // domainCnameStatus Field Functions 
    bool hasDomainCnameStatus() const { return this->domainCnameStatus_ != nullptr;};
    void deleteDomainCnameStatus() { this->domainCnameStatus_ = nullptr;};
    inline string domainCnameStatus() const { DARABONBA_PTR_GET_DEFAULT(domainCnameStatus_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainCnameStatus(string domainCnameStatus) { DARABONBA_PTR_SET_VALUE(domainCnameStatus_, domainCnameStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string serverCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


    // serverCertificateStatus Field Functions 
    bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
    void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
    inline string serverCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The domain name that matches the certificate.
    std::shared_ptr<string> certDomainName_ = nullptr;
    // The time at which the certificate expires. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The validity period of the certificate. Unit: months or years.
    std::shared_ptr<string> certLife_ = nullptr;
    // The certificate name.
    std::shared_ptr<string> certName_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> certOrg_ = nullptr;
    // The region where the certificate is used.
    std::shared_ptr<string> certRegion_ = nullptr;
    // The time when the certificate became effective.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The type of the certificate. Valid values:
    // 
    // *   **free**: a free certificate.
    // *   **cas**: a certificate that is purchased from Certificate Management Service.
    // *   **upload**: a user-uploaded certificate.
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
    // The accelerated domain name whose ICP filing status you want to update.
    std::shared_ptr<string> domainName_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> serverCertificate_ = nullptr;
    // The status of the SSL certificate.
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> serverCertificateStatus_ = nullptr;
    // The status of the certificate.
    // 
    // *   **success**: The certificate is in effect.
    // *   **checking**: The system is checking whether the domain name is added to ApsaraVideo VOD.
    // *   **cname_error**: The domain name is not added to ApsaraVideo VOD.
    // *   **domain_invalid**: The domain name contains invalid characters.
    // *   **unsupport_wildcard**: The domain name is a wildcard domain name. Wildcard domain names are not supported.
    // *   **applying**: The certificate application is in progress.
    // *   **failed**: The certificate application failed.
    // 
    // >  A value is returned for this parameter only when you set `CertType` to `free`. Otherwise, an empty value is returned for this parameter.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
