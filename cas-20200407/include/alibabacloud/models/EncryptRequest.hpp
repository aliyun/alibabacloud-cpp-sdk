// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class EncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    EncryptRequest() = default ;
    EncryptRequest(const EncryptRequest &) = default ;
    EncryptRequest(EncryptRequest &&) = default ;
    EncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptRequest() = default ;
    EncryptRequest& operator=(const EncryptRequest &) = default ;
    EncryptRequest& operator=(EncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->certIdentifier_ != nullptr && this->messageType_ != nullptr && this->plaintext_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline EncryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline EncryptRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline EncryptRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline EncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The encryption algorithm. Valid values:
    // 
    // *   **RSAES_OAEP_SHA_1**
    // *   **RSAES_OAEP_SHA_256**
    // *   **SM2PKE**
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The unique identifier of the certificate. You can call the [ListCert](https://help.aliyun.com/document_detail/455806.html) operation to obtain the identifier.
    // 
    // *   If the certificate is an SSL certificate, the value of this parameter must be in the {Certificate ID}-cn-hangzhou format.
    // *   If the certificate is a private certificate, the value of this parameter must be the value of the Identifier field for the private certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The value type of the Message parameter. Valid values:
    // 
    // *   RAW: The value of the Plaintext parameter is directly encrypted. This is the default value.
    // *   Base64: The value of the Plaintext parameter is Base64-encoded data. The data is decoded and then encrypted.
    std::shared_ptr<string> messageType_ = nullptr;
    // The data that you want to encrypt. The value of this parameter can be raw data or Base64-encoded data. For more information, see the description of the MessageType parameter. For example, if the hexadecimal data that you want to encrypt is `[0x31, 0x32, 0x33, 0x34]`, the Base64-encoded data is MTIzNA==. The size of data that can be encrypted varies based on the encryption algorithm that you use. The following list describes the relationship between the encryption algorithms and data sizes:
    // 
    // *   **RSAES_OAEP_SHA_1**: 214 bytes
    // *   **RSAES_OAEP_SHA_256**: 190 bytes
    // *   **SM2PKE**: 6,047 bytes
    // 
    // This parameter is required.
    std::shared_ptr<string> plaintext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
