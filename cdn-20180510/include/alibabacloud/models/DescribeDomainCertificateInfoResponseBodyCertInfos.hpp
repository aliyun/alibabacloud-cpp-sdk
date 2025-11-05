// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfos(const DescribeDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfos(DescribeDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfos& operator=(const DescribeDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeDomainCertificateInfoResponseBodyCertInfos& operator=(DescribeDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certInfo_ == nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline DescribeDomainCertificateInfoResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeDomainCertificateInfoResponseBodyCertInfos& setCertInfo(vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
