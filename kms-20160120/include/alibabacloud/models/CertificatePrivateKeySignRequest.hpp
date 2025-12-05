// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePrivateKeySignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePrivateKeySignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePrivateKeySignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    CertificatePrivateKeySignRequest() = default ;
    CertificatePrivateKeySignRequest(const CertificatePrivateKeySignRequest &) = default ;
    CertificatePrivateKeySignRequest(CertificatePrivateKeySignRequest &&) = default ;
    CertificatePrivateKeySignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePrivateKeySignRequest() = default ;
    CertificatePrivateKeySignRequest& operator=(const CertificatePrivateKeySignRequest &) = default ;
    CertificatePrivateKeySignRequest& operator=(CertificatePrivateKeySignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certificateId_ == nullptr && return this->message_ == nullptr && return this->messageType_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CertificatePrivateKeySignRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePrivateKeySignRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CertificatePrivateKeySignRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline CertificatePrivateKeySignRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


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
    // >* The SM2DSA signature algorithm is supported only in regions where managed hardware security modules (HSMs) are used in mainland China. For more information, see [Managed HSM overview](https://help.aliyun.com/document_detail/125803.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The data to be signed.
    // 
    // The value is encoded in Base64. For example, if the hexadecimal data that you want to sign is `[0x31, 0x32, 0x33, 0x34]`, the Base64-encoded data is `MTIzNA==`.
    // 
    // If the MessageType parameter is set to RAW, the size of the data must be less than or equal to 4 KB.
    // 
    // If the size of the data is greater than 4 KB, you can set the MessageType parameter to DIGEST and set the Message parameter to the digest of the data. The digest is also called hash value. You can compute the digest of the data on an on-premises machine. Certificates Manager uses the digest that you compute in your own certificate application system. The message digest algorithm that you use must match the specified signature algorithm. Comply with the following mapping between signature algorithms and message digest algorithms:
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
