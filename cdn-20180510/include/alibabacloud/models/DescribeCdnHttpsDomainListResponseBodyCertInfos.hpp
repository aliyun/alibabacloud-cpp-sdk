// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnHttpsDomainListResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeCdnHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfos(const DescribeCdnHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfos(DescribeCdnHttpsDomainListResponseBodyCertInfos &&) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfos& operator=(const DescribeCdnHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeCdnHttpsDomainListResponseBodyCertInfos& operator=(DescribeCdnHttpsDomainListResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfos& setCertInfo(vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnHttpsDomainListResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
