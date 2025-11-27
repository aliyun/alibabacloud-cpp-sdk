// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOSCERTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_TO_JSON(CertLife, certLife_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomainName, certDomainName_);
      DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(CertLife, certLife_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrg, certOrg_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo(const DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo(DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo() = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(const DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo &) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& operator=(DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certDomainName_ == nullptr
        && return this->certExpireTime_ == nullptr && return this->certLife_ == nullptr && return this->certName_ == nullptr && return this->certOrg_ == nullptr && return this->certType_ == nullptr
        && return this->domainName_ == nullptr && return this->SSLPub_ == nullptr && return this->serverCertificateStatus_ == nullptr && return this->status_ == nullptr; };
    // certDomainName Field Functions 
    bool hasCertDomainName() const { return this->certDomainName_ != nullptr;};
    void deleteCertDomainName() { this->certDomainName_ = nullptr;};
    inline string certDomainName() const { DARABONBA_PTR_GET_DEFAULT(certDomainName_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertDomainName(string certDomainName) { DARABONBA_PTR_SET_VALUE(certDomainName_, certDomainName) };


    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certLife Field Functions 
    bool hasCertLife() const { return this->certLife_ != nullptr;};
    void deleteCertLife() { this->certLife_ = nullptr;};
    inline string certLife() const { DARABONBA_PTR_GET_DEFAULT(certLife_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertLife(string certLife) { DARABONBA_PTR_SET_VALUE(certLife_, certLife) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrg Field Functions 
    bool hasCertOrg() const { return this->certOrg_ != nullptr;};
    void deleteCertOrg() { this->certOrg_ = nullptr;};
    inline string certOrg() const { DARABONBA_PTR_GET_DEFAULT(certOrg_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertOrg(string certOrg) { DARABONBA_PTR_SET_VALUE(certOrg_, certOrg) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // serverCertificateStatus Field Functions 
    bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
    void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
    inline string serverCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> certDomainName_ = nullptr;
    std::shared_ptr<string> certExpireTime_ = nullptr;
    std::shared_ptr<string> certLife_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certOrg_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> SSLPub_ = nullptr;
    std::shared_ptr<string> serverCertificateStatus_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
