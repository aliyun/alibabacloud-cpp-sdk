// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClientCertificateResponseBodyCertificate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientCertificateResponseBody() = default ;
    DescribeClientCertificateResponseBody(const DescribeClientCertificateResponseBody &) = default ;
    DescribeClientCertificateResponseBody(DescribeClientCertificateResponseBody &&) = default ;
    DescribeClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateResponseBody() = default ;
    DescribeClientCertificateResponseBody& operator=(const DescribeClientCertificateResponseBody &) = default ;
    DescribeClientCertificateResponseBody& operator=(DescribeClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificate_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const DescribeClientCertificateResponseBodyCertificate & certificate() const { DARABONBA_PTR_GET_CONST(certificate_, DescribeClientCertificateResponseBodyCertificate) };
    inline DescribeClientCertificateResponseBodyCertificate certificate() { DARABONBA_PTR_GET(certificate_, DescribeClientCertificateResponseBodyCertificate) };
    inline DescribeClientCertificateResponseBody& setCertificate(const DescribeClientCertificateResponseBodyCertificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline DescribeClientCertificateResponseBody& setCertificate(DescribeClientCertificateResponseBodyCertificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the client certificate or the server certificate.
    std::shared_ptr<DescribeClientCertificateResponseBodyCertificate> certificate_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
