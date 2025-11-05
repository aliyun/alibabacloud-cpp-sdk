// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATEDETAILBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCERTIFICATEDETAILBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnCertificateDetailByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnCertificateDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnCertificateDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnCertificateDetailByIdResponseBody() = default ;
    DescribeCdnCertificateDetailByIdResponseBody(const DescribeCdnCertificateDetailByIdResponseBody &) = default ;
    DescribeCdnCertificateDetailByIdResponseBody(DescribeCdnCertificateDetailByIdResponseBody &&) = default ;
    DescribeCdnCertificateDetailByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnCertificateDetailByIdResponseBody() = default ;
    DescribeCdnCertificateDetailByIdResponseBody& operator=(const DescribeCdnCertificateDetailByIdResponseBody &) = default ;
    DescribeCdnCertificateDetailByIdResponseBody& operator=(DescribeCdnCertificateDetailByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr
        && return this->certId_ == nullptr && return this->certName_ == nullptr && return this->key_ == nullptr && return this->requestId_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline DescribeCdnCertificateDetailByIdResponseBody& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline DescribeCdnCertificateDetailByIdResponseBody& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCdnCertificateDetailByIdResponseBody& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeCdnCertificateDetailByIdResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnCertificateDetailByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the certificate.
    std::shared_ptr<string> cert_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The public key of the certificate.
    std::shared_ptr<string> key_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
