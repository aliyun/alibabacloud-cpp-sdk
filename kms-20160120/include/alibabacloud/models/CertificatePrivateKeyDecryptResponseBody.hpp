// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYDECRYPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYDECRYPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePrivateKeyDecryptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePrivateKeyDecryptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePrivateKeyDecryptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CertificatePrivateKeyDecryptResponseBody() = default ;
    CertificatePrivateKeyDecryptResponseBody(const CertificatePrivateKeyDecryptResponseBody &) = default ;
    CertificatePrivateKeyDecryptResponseBody(CertificatePrivateKeyDecryptResponseBody &&) = default ;
    CertificatePrivateKeyDecryptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePrivateKeyDecryptResponseBody() = default ;
    CertificatePrivateKeyDecryptResponseBody& operator=(const CertificatePrivateKeyDecryptResponseBody &) = default ;
    CertificatePrivateKeyDecryptResponseBody& operator=(CertificatePrivateKeyDecryptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->plaintext_ == nullptr && return this->requestId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePrivateKeyDecryptResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline CertificatePrivateKeyDecryptResponseBody& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CertificatePrivateKeyDecryptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The plaintext after data is decrypted.
    // 
    // The value is encoded in Base64.
    std::shared_ptr<string> plaintext_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
