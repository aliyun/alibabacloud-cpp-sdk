// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBYCERTIFICATERESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainByCertificateResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainByCertificateResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeLiveDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeLiveDomainByCertificateResponseBodyCertInfos(const DescribeLiveDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeLiveDomainByCertificateResponseBodyCertInfos(DescribeLiveDomainByCertificateResponseBodyCertInfos &&) = default ;
    DescribeLiveDomainByCertificateResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainByCertificateResponseBodyCertInfos() = default ;
    DescribeLiveDomainByCertificateResponseBodyCertInfos& operator=(const DescribeLiveDomainByCertificateResponseBodyCertInfos &) = default ;
    DescribeLiveDomainByCertificateResponseBodyCertInfos& operator=(DescribeLiveDomainByCertificateResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certInfo_ == nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo>) };
    inline DescribeLiveDomainByCertificateResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeLiveDomainByCertificateResponseBodyCertInfos& setCertInfo(vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainByCertificateResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
