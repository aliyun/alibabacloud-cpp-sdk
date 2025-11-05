// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo() = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo(const DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo &) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo(DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo &&) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo() = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& operator=(const DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo &) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& operator=(DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && return this->certExpireTime_ == nullptr && return this->certName_ == nullptr && return this->certStartTime_ == nullptr && return this->certStatus_ == nullptr && return this->certType_ == nullptr
        && return this->certUpdateTime_ == nullptr && return this->domainName_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string certCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certStatus Field Functions 
    bool hasCertStatus() const { return this->certStatus_ != nullptr;};
    void deleteCertStatus() { this->certStatus_ = nullptr;};
    inline string certStatus() const { DARABONBA_PTR_GET_DEFAULT(certStatus_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertStatus(string certStatus) { DARABONBA_PTR_SET_VALUE(certStatus_, certStatus) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certUpdateTime Field Functions 
    bool hasCertUpdateTime() const { return this->certUpdateTime_ != nullptr;};
    void deleteCertUpdateTime() { this->certUpdateTime_ = nullptr;};
    inline string certUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(certUpdateTime_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setCertUpdateTime(string certUpdateTime) { DARABONBA_PTR_SET_VALUE(certUpdateTime_, certUpdateTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The returned primary domain name of the certificate.
    std::shared_ptr<string> certCommonName_ = nullptr;
    // The time at which the certificate expires.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The time at which the certificate became effective.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The status of the certificate.
    // 
    // *   **ok**: The certificate is working as expected.
    // *   **mismatch**: The certificate does not match the specified domain name.
    // *   **expired**: The certificate has expired.
    // *   **expire_soon**: The certificate will expire soon.
    std::shared_ptr<string> certStatus_ = nullptr;
    // The type of the certificate.
    // 
    // *   **free**: a free certificate.
    // *   **cas**: a certificate that is purchased from Alibaba Cloud SSL Certificates Service.
    // *   **upload**: a certificate that is uploaded by the user.
    std::shared_ptr<string> certType_ = nullptr;
    // The time at which the certificate was updated.
    std::shared_ptr<string> certUpdateTime_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
