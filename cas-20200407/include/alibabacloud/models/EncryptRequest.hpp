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
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
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
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certIdentifier_ == nullptr && this->customIdentifier_ == nullptr && this->messageType_ == nullptr && this->plaintext_ == nullptr && this->warehouseId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline EncryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline EncryptRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline EncryptRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline EncryptRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline EncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline EncryptRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


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
    // The unique identifier of the certificate. To obtain this parameter, call the [ListCert](https://help.aliyun.com/document_detail/455806.html) operation.
    // 
    // - The identifier of an SSL certificate is usually in the {Certificate ID}-cn-hangzhou format.
    // 
    // - For a private certificate authority (PCA) certificate, this is the value of the Identifier field of the private certificate.
    shared_ptr<string> certIdentifier_ {};
    // The custom identifier, which serves as a unique key.
    shared_ptr<string> customIdentifier_ {};
    // The message type. Valid values:
    // 
    // - RAW (default): Directly encrypts the value of Plaintext.
    // 
    // - Base64: Decodes the Base64-encoded value of Plaintext and then encrypts the decoded data.
    shared_ptr<string> messageType_ {};
    // The data to encrypt. The data can be plaintext or Base64-encoded plaintext. For more information, see the MessageType parameter. If you use Base64 encoding, for example, if the hexadecimal content of the data to be encrypted is `[0x31, 0x32, 0x33, 0x34]`, the corresponding Base64-encoded string is MTIzNA==. The maximum size of Plaintext depends on the Algorithm:
    // 
    // - **RSAES_OAEP_SHA_1**: 214 bytes.
    // 
    // - **RSAES_OAEP_SHA_256**: 190 bytes.
    // 
    // - **SM2PKE**: 6047 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> plaintext_ {};
    // The repository ID.
    // 
    // > To obtain this ID, call the [ListCertWarehouse](https://help.aliyun.com/document_detail/455805.html) operation.
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
