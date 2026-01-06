// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class SignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(SigningAlgorithm, signingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, SignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(SigningAlgorithm, signingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
    };
    SignRequest() = default ;
    SignRequest(const SignRequest &) = default ;
    SignRequest(SignRequest &&) = default ;
    SignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignRequest() = default ;
    SignRequest& operator=(const SignRequest &) = default ;
    SignRequest& operator=(SignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->customIdentifier_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr && this->signingAlgorithm_ == nullptr && this->warehouseId_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline SignRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline SignRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SignRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline SignRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // signingAlgorithm Field Functions 
    bool hasSigningAlgorithm() const { return this->signingAlgorithm_ != nullptr;};
    void deleteSigningAlgorithm() { this->signingAlgorithm_ = nullptr;};
    inline string getSigningAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signingAlgorithm_, "") };
    inline SignRequest& setSigningAlgorithm(string signingAlgorithm) { DARABONBA_PTR_SET_VALUE(signingAlgorithm_, signingAlgorithm) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline SignRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // The unique identifier of the certificate. You can call the [ListCert](https://help.aliyun.com/document_detail/455806.html) operation to obtain the identifier.
    // 
    // *   If the certificate is an SSL certificate, the value of this parameter must be in the {Certificate ID}-cn-hangzhou format.
    // *   If the certificate is a private certificate, the value of this parameter must be the value of the Identifier field for the private certificate.
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> customIdentifier_ {};
    // The data to sign. The value must be encoded in Base64.\\
    // For example, if the hexadecimal data that you want to sign is [0x31, 0x32, 0x33, 0x34], set the parameter to the Base64-encoded value MTIzNA==. If you set MessageType to RAW, the size of the data must be less than 4 KB. If the size of the data is greater than 4 KB, you can set MessageType to DIGEST and set Message to the digest of the data. The digest is a hash value. You can compute the digest of the data on an on-premises machine. The certificate application repository uses the digest that you compute in your own certificate application system. The message digest algorithm that you use must match the specified signature algorithm. The following items describe the details:
    // 
    // *   If the signature algorithm is SHA256withRSA, SHA256withRSA/PSS, or SHA256withECDSA, the message digest algorithm must be SHA-256.
    // *   If the signature algorithm is SM3withSM2, the message digest algorithm must be SM3.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The value type of the Message parameter. Valid values:
    // 
    // *   RAW: the raw data. This is the default value.
    // *   DIGEST: the message digest (hash value) of the raw data.
    // 
    // This parameter is required.
    shared_ptr<string> messageType_ {};
    // The signature algorithm. Valid values:
    // 
    // *   SHA256withRSA
    // *   SHA256withRSA/PSS
    // *   SHA256withECDSA
    // *   SM3withSM2
    // 
    // This parameter is required.
    shared_ptr<string> signingAlgorithm_ {};
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
