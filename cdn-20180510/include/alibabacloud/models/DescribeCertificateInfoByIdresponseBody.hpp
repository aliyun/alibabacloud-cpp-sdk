// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCertificateInfoByIDResponseBodyCertInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCertificateInfoByIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateInfoByIDResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateInfoByIDResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertificateInfoByIDResponseBody() = default ;
    DescribeCertificateInfoByIDResponseBody(const DescribeCertificateInfoByIDResponseBody &) = default ;
    DescribeCertificateInfoByIDResponseBody(DescribeCertificateInfoByIDResponseBody &&) = default ;
    DescribeCertificateInfoByIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateInfoByIDResponseBody() = default ;
    DescribeCertificateInfoByIDResponseBody& operator=(const DescribeCertificateInfoByIDResponseBody &) = default ;
    DescribeCertificateInfoByIDResponseBody& operator=(DescribeCertificateInfoByIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeCertificateInfoByIDResponseBodyCertInfos & certInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeCertificateInfoByIDResponseBodyCertInfos) };
    inline DescribeCertificateInfoByIDResponseBodyCertInfos certInfos() { DARABONBA_PTR_GET(certInfos_, DescribeCertificateInfoByIDResponseBodyCertInfos) };
    inline DescribeCertificateInfoByIDResponseBody& setCertInfos(const DescribeCertificateInfoByIDResponseBodyCertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeCertificateInfoByIDResponseBody& setCertInfos(DescribeCertificateInfoByIDResponseBodyCertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificateInfoByIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the certificate.
    std::shared_ptr<DescribeCertificateInfoByIDResponseBodyCertInfos> certInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
