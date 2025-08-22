// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnHttpsDomainListResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeDcdnHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeDcdnHttpsDomainListResponseBodyCertInfos(const DescribeDcdnHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeDcdnHttpsDomainListResponseBodyCertInfos(DescribeDcdnHttpsDomainListResponseBodyCertInfos &&) = default ;
    DescribeDcdnHttpsDomainListResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeDcdnHttpsDomainListResponseBodyCertInfos& operator=(const DescribeDcdnHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeDcdnHttpsDomainListResponseBodyCertInfos& operator=(DescribeDcdnHttpsDomainListResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline DescribeDcdnHttpsDomainListResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeDcdnHttpsDomainListResponseBodyCertInfos& setCertInfo(vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnHttpsDomainListResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
