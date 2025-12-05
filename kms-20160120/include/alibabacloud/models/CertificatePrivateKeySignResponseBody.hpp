// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePrivateKeySignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePrivateKeySignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignatureValue, signatureValue_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePrivateKeySignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignatureValue, signatureValue_);
    };
    CertificatePrivateKeySignResponseBody() = default ;
    CertificatePrivateKeySignResponseBody(const CertificatePrivateKeySignResponseBody &) = default ;
    CertificatePrivateKeySignResponseBody(CertificatePrivateKeySignResponseBody &&) = default ;
    CertificatePrivateKeySignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePrivateKeySignResponseBody() = default ;
    CertificatePrivateKeySignResponseBody& operator=(const CertificatePrivateKeySignResponseBody &) = default ;
    CertificatePrivateKeySignResponseBody& operator=(CertificatePrivateKeySignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->requestId_ == nullptr && return this->signatureValue_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePrivateKeySignResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CertificatePrivateKeySignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatureValue Field Functions 
    bool hasSignatureValue() const { return this->signatureValue_ != nullptr;};
    void deleteSignatureValue() { this->signatureValue_ = nullptr;};
    inline string signatureValue() const { DARABONBA_PTR_GET_DEFAULT(signatureValue_, "") };
    inline CertificatePrivateKeySignResponseBody& setSignatureValue(string signatureValue) { DARABONBA_PTR_SET_VALUE(signatureValue_, signatureValue) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The signature value.
    // 
    // The value is encoded in Base64.
    std::shared_ptr<string> signatureValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
