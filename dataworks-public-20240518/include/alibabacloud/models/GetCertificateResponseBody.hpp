// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCertificateResponseBodyCertificate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCertificateResponseBody() = default ;
    GetCertificateResponseBody(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody(GetCertificateResponseBody &&) = default ;
    GetCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateResponseBody() = default ;
    GetCertificateResponseBody& operator=(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody& operator=(GetCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificate_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const GetCertificateResponseBodyCertificate & certificate() const { DARABONBA_PTR_GET_CONST(certificate_, GetCertificateResponseBodyCertificate) };
    inline GetCertificateResponseBodyCertificate certificate() { DARABONBA_PTR_GET(certificate_, GetCertificateResponseBodyCertificate) };
    inline GetCertificateResponseBody& setCertificate(const GetCertificateResponseBodyCertificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline GetCertificateResponseBody& setCertificate(GetCertificateResponseBodyCertificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the certificate file.
    std::shared_ptr<GetCertificateResponseBodyCertificate> certificate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
