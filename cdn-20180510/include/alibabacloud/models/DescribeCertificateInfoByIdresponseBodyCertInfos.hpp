// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODYCERTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODYCERTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCertificateInfoByIDResponseBodyCertInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateInfoByIDResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateInfoByIDResponseBodyCertInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
    };
    DescribeCertificateInfoByIDResponseBodyCertInfos() = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfos(const DescribeCertificateInfoByIDResponseBodyCertInfos &) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfos(DescribeCertificateInfoByIDResponseBodyCertInfos &&) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateInfoByIDResponseBodyCertInfos() = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfos& operator=(const DescribeCertificateInfoByIDResponseBodyCertInfos &) = default ;
    DescribeCertificateInfoByIDResponseBodyCertInfos& operator=(DescribeCertificateInfoByIDResponseBodyCertInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfo_ != nullptr; };
    // certInfo Field Functions 
    bool hasCertInfo() const { return this->certInfo_ != nullptr;};
    void deleteCertInfo() { this->certInfo_ = nullptr;};
    inline const vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo> & certInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo>) };
    inline vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo> certInfo() { DARABONBA_PTR_GET(certInfo_, vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo>) };
    inline DescribeCertificateInfoByIDResponseBodyCertInfos& setCertInfo(const vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
    inline DescribeCertificateInfoByIDResponseBodyCertInfos& setCertInfo(vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCertificateInfoByIDResponseBodyCertInfosCertInfo>> certInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
