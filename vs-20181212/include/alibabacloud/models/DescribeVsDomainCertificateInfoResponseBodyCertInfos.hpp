// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeVsDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfos(const DescribeVsDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfos(DescribeVsDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfos& operator=(const DescribeVsDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeVsDomainCertificateInfoResponseBodyCertInfos& operator=(DescribeVsDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certInfo_ == nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfos& setCertInfo(vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
