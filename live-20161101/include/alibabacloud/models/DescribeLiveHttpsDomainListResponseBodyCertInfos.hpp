// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEHTTPSDOMAINLISTRESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveHttpsDomainListResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveHttpsDomainListResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeLiveHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfos(const DescribeLiveHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfos(DescribeLiveHttpsDomainListResponseBodyCertInfos &&) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveHttpsDomainListResponseBodyCertInfos() = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfos& operator=(const DescribeLiveHttpsDomainListResponseBodyCertInfos &) = default ;
    DescribeLiveHttpsDomainListResponseBodyCertInfos& operator=(DescribeLiveHttpsDomainListResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certInfo_ == nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo>) };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeLiveHttpsDomainListResponseBodyCertInfos& setCertInfo(vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveHttpsDomainListResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
