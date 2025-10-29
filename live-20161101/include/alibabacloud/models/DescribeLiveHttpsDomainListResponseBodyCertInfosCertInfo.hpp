// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTRESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTRESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertUpdateTime, certUpdateTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo() = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo(const DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo &) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo(DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo &&) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo() = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& operator=(const DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo &) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& operator=(DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo &&) = default ;
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
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // certStatus Field Functions 
    bool hasCertStatus() const { return this->certStatus_ != nullptr;};
    void deleteCertStatus() { this->certStatus_ = nullptr;};
    inline string certStatus() const { DARABONBA_PTR_GET_DEFAULT(certStatus_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertStatus(string certStatus) { DARABONBA_PTR_SET_VALUE(certStatus_, certStatus) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certUpdateTime Field Functions 
    bool hasCertUpdateTime() const { return this->certUpdateTime_ != nullptr;};
    void deleteCertUpdateTime() { this->certUpdateTime_ = nullptr;};
    inline string certUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(certUpdateTime_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setCertUpdateTime(string certUpdateTime) { DARABONBA_PTR_SET_VALUE(certUpdateTime_, certUpdateTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The primary domain name of the certificate.
    std::shared_ptr<string> certCommonName_ = nullptr;
    // The time when the certificate expires.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The time when the certificate became effective.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **ok**: The certificate is working as expected.
    // *   **mismatch**: The certificate does not match the specified domain name.
    // *   **expired**: The certificate has expired.
    // *   **expire_soon**: The certificate will expire soon.
    std::shared_ptr<string> certStatus_ = nullptr;
    // The type of the certificate. Valid values:
    // 
    // *   **cas**: a certificate that you purchased from Certificate Management Service
    // *   **upload**: a custom certificate that you uploaded
    std::shared_ptr<string> certType_ = nullptr;
    // The time when the certificate was updated.
    std::shared_ptr<string> certUpdateTime_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
