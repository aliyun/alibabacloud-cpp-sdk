// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePublicKeyVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePublicKeyVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignatureValid, signatureValid_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePublicKeyVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignatureValid, signatureValid_);
    };
    CertificatePublicKeyVerifyResponseBody() = default ;
    CertificatePublicKeyVerifyResponseBody(const CertificatePublicKeyVerifyResponseBody &) = default ;
    CertificatePublicKeyVerifyResponseBody(CertificatePublicKeyVerifyResponseBody &&) = default ;
    CertificatePublicKeyVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePublicKeyVerifyResponseBody() = default ;
    CertificatePublicKeyVerifyResponseBody& operator=(const CertificatePublicKeyVerifyResponseBody &) = default ;
    CertificatePublicKeyVerifyResponseBody& operator=(CertificatePublicKeyVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->requestId_ == nullptr && return this->signatureValid_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePublicKeyVerifyResponseBody& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CertificatePublicKeyVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatureValid Field Functions 
    bool hasSignatureValid() const { return this->signatureValid_ != nullptr;};
    void deleteSignatureValid() { this->signatureValid_ = nullptr;};
    inline bool signatureValid() const { DARABONBA_PTR_GET_DEFAULT(signatureValid_, false) };
    inline CertificatePublicKeyVerifyResponseBody& setSignatureValid(bool signatureValid) { DARABONBA_PTR_SET_VALUE(signatureValid_, signatureValid) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The verification result. Valid values:
    // 
    // *   true: The signature is valid.
    // *   false: The signature is invalid.
    std::shared_ptr<bool> signatureValid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
