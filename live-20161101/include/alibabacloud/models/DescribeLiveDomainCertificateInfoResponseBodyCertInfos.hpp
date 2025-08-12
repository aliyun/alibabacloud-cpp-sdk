// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCERTIFICATEINFORESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainCertificateInfoResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos(const DescribeLiveDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos(DescribeLiveDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainCertificateInfoResponseBodyCertInfos() = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos& operator=(const DescribeLiveDomainCertificateInfoResponseBodyCertInfos &) = default ;
    DescribeLiveDomainCertificateInfoResponseBodyCertInfos& operator=(DescribeLiveDomainCertificateInfoResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo>) };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeLiveDomainCertificateInfoResponseBodyCertInfos& setCertInfo(vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
