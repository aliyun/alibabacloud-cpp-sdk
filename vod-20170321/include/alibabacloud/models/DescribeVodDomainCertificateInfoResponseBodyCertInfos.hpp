// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeVodDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfos(const DescribeVodDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfos(DescribeVodDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfos& operator=(const DescribeVodDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeVodDomainCertificateInfoResponseBodyCertInfos& operator=(DescribeVodDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfos& setCertInfo(vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
