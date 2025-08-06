// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainCertificateInfoResponseBodyCertInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCertificateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainCertificateInfoResponseBody() = default ;
    DescribeVodDomainCertificateInfoResponseBody(const DescribeVodDomainCertificateInfoResponseBody &) = default ;
    DescribeVodDomainCertificateInfoResponseBody(DescribeVodDomainCertificateInfoResponseBody &&) = default ;
    DescribeVodDomainCertificateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCertificateInfoResponseBody() = default ;
    DescribeVodDomainCertificateInfoResponseBody& operator=(const DescribeVodDomainCertificateInfoResponseBody &) = default ;
    DescribeVodDomainCertificateInfoResponseBody& operator=(DescribeVodDomainCertificateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeVodDomainCertificateInfoResponseBodyCertInfos & certInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeVodDomainCertificateInfoResponseBodyCertInfos) };
    inline DescribeVodDomainCertificateInfoResponseBodyCertInfos certInfos() { DARABONBA_PTR_GET(certInfos_, DescribeVodDomainCertificateInfoResponseBodyCertInfos) };
    inline DescribeVodDomainCertificateInfoResponseBody& setCertInfos(const DescribeVodDomainCertificateInfoResponseBodyCertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeVodDomainCertificateInfoResponseBody& setCertInfos(DescribeVodDomainCertificateInfoResponseBodyCertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainCertificateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The certificate information.
    std::shared_ptr<DescribeVodDomainCertificateInfoResponseBodyCertInfos> certInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
