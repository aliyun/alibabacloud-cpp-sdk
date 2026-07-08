// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class VerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(SignatureValue, signatureValue_);
      DARABONBA_PTR_TO_JSON(SigningAlgorithm, signingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(SignatureValue, signatureValue_);
      DARABONBA_PTR_FROM_JSON(SigningAlgorithm, signingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
    };
    VerifyRequest() = default ;
    VerifyRequest(const VerifyRequest &) = default ;
    VerifyRequest(VerifyRequest &&) = default ;
    VerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyRequest() = default ;
    VerifyRequest& operator=(const VerifyRequest &) = default ;
    VerifyRequest& operator=(VerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->customIdentifier_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr && this->signatureValue_ == nullptr && this->signingAlgorithm_ == nullptr
        && this->warehouseId_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline VerifyRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline VerifyRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline VerifyRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // signatureValue Field Functions 
    bool hasSignatureValue() const { return this->signatureValue_ != nullptr;};
    void deleteSignatureValue() { this->signatureValue_ = nullptr;};
    inline string getSignatureValue() const { DARABONBA_PTR_GET_DEFAULT(signatureValue_, "") };
    inline VerifyRequest& setSignatureValue(string signatureValue) { DARABONBA_PTR_SET_VALUE(signatureValue_, signatureValue) };


    // signingAlgorithm Field Functions 
    bool hasSigningAlgorithm() const { return this->signingAlgorithm_ != nullptr;};
    void deleteSigningAlgorithm() { this->signingAlgorithm_ = nullptr;};
    inline string getSigningAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signingAlgorithm_, "") };
    inline VerifyRequest& setSigningAlgorithm(string signingAlgorithm) { DARABONBA_PTR_SET_VALUE(signingAlgorithm_, signingAlgorithm) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline string getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, "") };
    inline VerifyRequest& setWarehouseId(string warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // The unique identifier of the certificate. To get this parameter, call the [ListCert](https://help.aliyun.com/document_detail/455806.html) operation.
    // 
    // - The identifier for an SSL certificate is typically in the format \\`{Certificate ID}-cn-hangzhou\\`.
    // 
    // - For a PCA certificate, this is the value of the \\`Identifier\\` field.
    shared_ptr<string> certIdentifier_ {};
    // The custom identifier. This key must be unique.
    shared_ptr<string> customIdentifier_ {};
    // The data to verify. The data must be Base64-encoded. For example, if the hexadecimal content of the data to sign is \\`[0x31, 0x32, 0x33, 0x34]\\`, the Base64-encoded value is \\`MTIzNA==\\`. If you set \\`MessageType\\` to \\`RAW\\`, the data size must be less than 4 KB. If the data to sign is larger than 4 KB, set \\`MessageType\\` to \\`DIGEST\\`. Then, set \\`Message\\` to the message digest, or hash, that you calculate locally. The hashing algorithm for the digest must be compatible with the signature algorithm:<br>
    // 
    // - The hashing algorithm for \\`SHA256withRSA\\`, \\`SHA256withRSA/PSS\\`, and \\`SHA256withECDSA\\` is SHA-256.
    // 
    // - The hashing algorithm for \\`SM3withSM2\\` is SM3.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The message type. Valid values:
    // 
    // - **RAW** (default): The raw data.
    // 
    // - **DIGEST**: The message digest of the raw data.
    // 
    // This parameter is required.
    shared_ptr<string> messageType_ {};
    // The signature value. The value must be Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> signatureValue_ {};
    // The signature algorithm. Valid values:
    // 
    // - **SHA256withRSA**
    // 
    // - **SHA256withRSA/PSS**
    // 
    // - **SHA256withECDSA**
    // 
    // - **SM3withSM2**
    // 
    // This parameter is required.
    shared_ptr<string> signingAlgorithm_ {};
    // The ID of the repository. To get this parameter, call the [ListCertWarehouse](https://help.aliyun.com/document_detail/453246.html) operation.
    shared_ptr<string> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
