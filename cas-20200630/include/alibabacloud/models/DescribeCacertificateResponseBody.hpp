// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCACertificateResponseBodyCertificate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCACertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Years, years_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Years, years_);
    };
    DescribeCACertificateResponseBody() = default ;
    DescribeCACertificateResponseBody(const DescribeCACertificateResponseBody &) = default ;
    DescribeCACertificateResponseBody(DescribeCACertificateResponseBody &&) = default ;
    DescribeCACertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificateResponseBody() = default ;
    DescribeCACertificateResponseBody& operator=(const DescribeCACertificateResponseBody &) = default ;
    DescribeCACertificateResponseBody& operator=(DescribeCACertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificate_ != nullptr
        && this->requestId_ != nullptr && this->years_ != nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const DescribeCACertificateResponseBodyCertificate & certificate() const { DARABONBA_PTR_GET_CONST(certificate_, DescribeCACertificateResponseBodyCertificate) };
    inline DescribeCACertificateResponseBodyCertificate certificate() { DARABONBA_PTR_GET(certificate_, DescribeCACertificateResponseBodyCertificate) };
    inline DescribeCACertificateResponseBody& setCertificate(const DescribeCACertificateResponseBodyCertificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline DescribeCACertificateResponseBody& setCertificate(DescribeCACertificateResponseBodyCertificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCACertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // years Field Functions 
    bool hasYears() const { return this->years_ != nullptr;};
    void deleteYears() { this->years_ = nullptr;};
    inline int32_t years() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
    inline DescribeCACertificateResponseBody& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


  protected:
    // The details about the CA certificate.
    std::shared_ptr<DescribeCACertificateResponseBodyCertificate> certificate_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The validity period of the CA certificate. Unit: years.
    std::shared_ptr<int32_t> years_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
