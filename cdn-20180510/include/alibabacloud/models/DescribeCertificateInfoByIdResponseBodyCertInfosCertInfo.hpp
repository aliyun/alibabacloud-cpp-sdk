// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(HttpsCrt, httpsCrt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(HttpsCrt, httpsCrt_);
    };
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo() = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo(const DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo &) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo(DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo &&) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo() = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& operator=(const DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo &) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& operator=(DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certExpireTime_ == nullptr
        && return this->certId_ == nullptr && return this->certName_ == nullptr && return this->certType_ == nullptr && return this->createTime_ == nullptr && return this->domainList_ == nullptr
        && return this->httpsCrt_ == nullptr; };
    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline string domainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


    // httpsCrt Field Functions 
    bool hasHttpsCrt() const { return this->httpsCrt_ != nullptr;};
    void deleteHttpsCrt() { this->httpsCrt_ = nullptr;};
    inline string httpsCrt() const { DARABONBA_PTR_GET_DEFAULT(httpsCrt_, "") };
    inline DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo& setHttpsCrt(string httpsCrt) { DARABONBA_PTR_SET_VALUE(httpsCrt_, httpsCrt) };


  protected:
    // The time at which the certificate expires.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The type of the certificate.
    // 
    // *   free: a free certificate
    // *   cas: a certificate purchased by using Certificate Management Service
    // *   upload: a user-uploaded certificate
    std::shared_ptr<string> certType_ = nullptr;
    // The time when the certificate became effective.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain names that use the certificate.
    std::shared_ptr<string> domainList_ = nullptr;
    // The content of the certificate.
    std::shared_ptr<string> httpsCrt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
