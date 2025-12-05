// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePublicKeyVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePublicKeyVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(SignatureValue, signatureValue_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePublicKeyVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(SignatureValue, signatureValue_);
    };
    CertificatePublicKeyVerifyRequest() = default ;
    CertificatePublicKeyVerifyRequest(const CertificatePublicKeyVerifyRequest &) = default ;
    CertificatePublicKeyVerifyRequest(CertificatePublicKeyVerifyRequest &&) = default ;
    CertificatePublicKeyVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePublicKeyVerifyRequest() = default ;
    CertificatePublicKeyVerifyRequest& operator=(const CertificatePublicKeyVerifyRequest &) = default ;
    CertificatePublicKeyVerifyRequest& operator=(CertificatePublicKeyVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certificateId_ == nullptr && return this->message_ == nullptr && return this->messageType_ == nullptr && return this->signatureValue_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CertificatePublicKeyVerifyRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePublicKeyVerifyRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CertificatePublicKeyVerifyRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline CertificatePublicKeyVerifyRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // signatureValue Field Functions 
    bool hasSignatureValue() const { return this->signatureValue_ != nullptr;};
    void deleteSignatureValue() { this->signatureValue_ = nullptr;};
    inline string signatureValue() const { DARABONBA_PTR_GET_DEFAULT(signatureValue_, "") };
    inline CertificatePublicKeyVerifyRequest& setSignatureValue(string signatureValue) { DARABONBA_PTR_SET_VALUE(signatureValue_, signatureValue) };


  protected:
    // The signature algorithm. Valid values:
    // 
    // *   RSA_PKCS1_SHA_256
    // 
    // *   RSA_PSS_SHA_256
    // 
    // *   ECDSA_SHA_256
    // 
    // *   SM2DSA
    // 
    // > The SM2DSA signature algorithm is supported only in regions where managed hardware security modules (HSMs) are used in the Chinese mainland. For more information, see [Managed HSM overview](https://help.aliyun.com/document_detail/125803.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The raw data that is signed.
    // 
    // The value is encoded in Base64. For example, if the raw data in the hexadecimal format is `[0x31, 0x32, 0x33, 0x34]`, set this parameter to the Base64-encoded value `MTIzNA==`.
    // 
    // If the MessageType parameter is set to RAW, the size of the data must be less than or equal to 4 KB.
    // 
    // If the size of the data is greater than 4 KB, you can set the MessageType parameter to DIGEST and set the Message parameter to the digest of the data. The digest is also called hash value. You can compute the digest of the data on an on-premises device. Certificates Manager uses the digest that you compute in your own certificate application system. The message digest algorithm that you use must match the specified signature algorithm. Comply with the following mapping between signature algorithms and message digest algorithms:
    // 
    // *   If the signature algorithm is RSA_PKCS1_SHA_256, RSA_PSS_SHA_256, or ECDSA_SHA_256, the message digest algorithm must be SHA-256.
    // *   If the signature algorithm is SM2DSA, the message digest algorithm must be SM3.
    // 
    // >  If the key type of the certificate is EC_SM2 and the MessageType parameter is set to DIGEST, the value of the Message parameter is `e` that is described in GB/T 32918.2-2016 6.1.
    // 
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    // The type of the message. Valid values:
    // 
    // *   RAW: the raw data. This is the default value.
    // *   DIGEST: the message digest (hash value) of the raw data.
    // 
    // This parameter is required.
    std::shared_ptr<string> messageType_ = nullptr;
    // The signature value.
    // 
    // The value is encoded in Base64.
    // 
    // This parameter is required.
    std::shared_ptr<string> signatureValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
