// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINCERTIFICATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainCertificateInfoResponseBodyCertInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainCertificateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainCertificateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainCertificateInfoResponseBody() = default ;
    DescribeVsDomainCertificateInfoResponseBody(const DescribeVsDomainCertificateInfoResponseBody &) = default ;
    DescribeVsDomainCertificateInfoResponseBody(DescribeVsDomainCertificateInfoResponseBody &&) = default ;
    DescribeVsDomainCertificateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainCertificateInfoResponseBody() = default ;
    DescribeVsDomainCertificateInfoResponseBody& operator=(const DescribeVsDomainCertificateInfoResponseBody &) = default ;
    DescribeVsDomainCertificateInfoResponseBody& operator=(DescribeVsDomainCertificateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeVsDomainCertificateInfoResponseBodyCertInfos & certInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeVsDomainCertificateInfoResponseBodyCertInfos) };
    inline DescribeVsDomainCertificateInfoResponseBodyCertInfos certInfos() { DARABONBA_PTR_GET(certInfos_, DescribeVsDomainCertificateInfoResponseBodyCertInfos) };
    inline DescribeVsDomainCertificateInfoResponseBody& setCertInfos(const DescribeVsDomainCertificateInfoResponseBodyCertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeVsDomainCertificateInfoResponseBody& setCertInfos(DescribeVsDomainCertificateInfoResponseBodyCertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainCertificateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsDomainCertificateInfoResponseBodyCertInfos> certInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
