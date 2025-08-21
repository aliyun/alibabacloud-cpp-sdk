// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainByCertificateResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeCdnDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfos(const DescribeCdnDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfos(DescribeCdnDomainByCertificateResponseBodyCertInfos &&) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfos& operator=(const DescribeCdnDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeCdnDomainByCertificateResponseBodyCertInfos& operator=(DescribeCdnDomainByCertificateResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeCdnDomainByCertificateResponseBodyCertInfos& setCertInfo(vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainByCertificateResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
