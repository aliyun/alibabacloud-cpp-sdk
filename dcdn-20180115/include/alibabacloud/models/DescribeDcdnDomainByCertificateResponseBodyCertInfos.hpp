// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainByCertificateResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeDcdnDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeDcdnDomainByCertificateResponseBodyCertInfos(const DescribeDcdnDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeDcdnDomainByCertificateResponseBodyCertInfos(DescribeDcdnDomainByCertificateResponseBodyCertInfos &&) = default ;
    DescribeDcdnDomainByCertificateResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeDcdnDomainByCertificateResponseBodyCertInfos& operator=(const DescribeDcdnDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeDcdnDomainByCertificateResponseBodyCertInfos& operator=(DescribeDcdnDomainByCertificateResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline DescribeDcdnDomainByCertificateResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeDcdnDomainByCertificateResponseBodyCertInfos& setCertInfo(vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainByCertificateResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
