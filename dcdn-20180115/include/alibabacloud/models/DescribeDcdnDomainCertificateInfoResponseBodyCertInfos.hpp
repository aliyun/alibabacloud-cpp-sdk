// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos(const DescribeDcdnDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos(DescribeDcdnDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& operator=(const DescribeDcdnDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& operator=(DescribeDcdnDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeDcdnDomainCertificateInfoResponseBodyCertInfos& setCertInfo(vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
