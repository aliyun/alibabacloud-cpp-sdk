// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DecryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    DecryptRequest() = default ;
    DecryptRequest(const DecryptRequest &) = default ;
    DecryptRequest(DecryptRequest &&) = default ;
    DecryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptRequest() = default ;
    DecryptRequest& operator=(const DecryptRequest &) = default ;
    DecryptRequest& operator=(DecryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->certIdentifier_ != nullptr && this->ciphertextBlob_ != nullptr && this->messageType_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DecryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DecryptRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline DecryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline DecryptRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


  protected:
    // The encryption algorithm. Valid values:
    // 
    // *   **RSAES_OAEP_SHA_1**
    // *   **RSAES_OAEP_SHA_256**
    // *   **SM2PKE**
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The unique identifier of the certificate. You can call the [ListCert](https://help.aliyun.com/document_detail/455806.html) operation to query the identifier.
    // 
    // *   If the certificate is an SSL certificate, the value of this parameter must be in the {Certificate ID}-cn-hangzhou format.
    // *   If the certificate is a private certificate, the value of this parameter must be the value of the Identifier field for the private certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The data that you want to decrypt. The value is encoded in Base64.
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    // The value type of the Message parameter. Valid values:
    // 
    // *   RAW: The returned result is raw data encoded in UTF-8.
    // *   Base64: The returned result is Base64-encoded data. This is the default value.
    std::shared_ptr<string> messageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
