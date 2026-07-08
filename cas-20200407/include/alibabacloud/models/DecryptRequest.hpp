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
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
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
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certIdentifier_ == nullptr && this->ciphertextBlob_ == nullptr && this->customIdentifier_ == nullptr && this->messageType_ == nullptr && this->warehouseId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DecryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DecryptRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline DecryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline DecryptRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline DecryptRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline DecryptRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // The encryption algorithm. Valid values:
    // 
    // - **RSAES_OAEP_SHA_1**
    // 
    // - **RSAES_OAEP_SHA_256**
    // 
    // - **SM2PKE**
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The unique identifier of the certificate. Call [ListCert](https://help.aliyun.com/document_detail/455806.html) to obtain this parameter.
    // 
    // - The identifier of an SSL certificate is typically in the format {Certificate ID}-cn-hangzhou.
    // 
    // - For a private certificate authority (PCA) certificate, this is the value of the Identifier field of the private certificate.
    shared_ptr<string> certIdentifier_ {};
    // The Base64-encoded data to decrypt.
    // 
    // This parameter is required.
    shared_ptr<string> ciphertextBlob_ {};
    // A custom identifier that serves as a unique key.
    shared_ptr<string> customIdentifier_ {};
    // The message type. Valid values:
    // 
    // - RAW: The response returns the plaintext in UTF-8 encoding.
    // 
    // - Base64 (default): The response returns the Base64-encoded plaintext.
    shared_ptr<string> messageType_ {};
    // The ID of the repository.
    // 
    // > Call [ListCertWarehouse](https://help.aliyun.com/document_detail/455805.html) to obtain this ID.
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
