// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCertDetailResponseBodyCertDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCertDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertDetailResponseBody() = default ;
    DescribeCertDetailResponseBody(const DescribeCertDetailResponseBody &) = default ;
    DescribeCertDetailResponseBody(DescribeCertDetailResponseBody &&) = default ;
    DescribeCertDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertDetailResponseBody() = default ;
    DescribeCertDetailResponseBody& operator=(const DescribeCertDetailResponseBody &) = default ;
    DescribeCertDetailResponseBody& operator=(DescribeCertDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // certDetail Field Functions 
    bool hasCertDetail() const { return this->certDetail_ != nullptr;};
    void deleteCertDetail() { this->certDetail_ = nullptr;};
    inline const DescribeCertDetailResponseBodyCertDetail & certDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, DescribeCertDetailResponseBodyCertDetail) };
    inline DescribeCertDetailResponseBodyCertDetail certDetail() { DARABONBA_PTR_GET(certDetail_, DescribeCertDetailResponseBodyCertDetail) };
    inline DescribeCertDetailResponseBody& setCertDetail(const DescribeCertDetailResponseBodyCertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
    inline DescribeCertDetailResponseBody& setCertDetail(DescribeCertDetailResponseBodyCertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the certificate.
    std::shared_ptr<DescribeCertDetailResponseBodyCertDetail> certDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
