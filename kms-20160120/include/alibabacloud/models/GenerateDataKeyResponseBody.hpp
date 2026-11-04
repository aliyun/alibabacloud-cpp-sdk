// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(CiphertextForRecipient, ciphertextForRecipient_);
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_TO_JSON(DataKeyVersionName, dataKeyVersionName_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(CiphertextForRecipient, ciphertextForRecipient_);
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_FROM_JSON(DataKeyVersionName, dataKeyVersionName_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateDataKeyResponseBody() = default ;
    GenerateDataKeyResponseBody(const GenerateDataKeyResponseBody &) = default ;
    GenerateDataKeyResponseBody(GenerateDataKeyResponseBody &&) = default ;
    GenerateDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDataKeyResponseBody() = default ;
    GenerateDataKeyResponseBody& operator=(const GenerateDataKeyResponseBody &) = default ;
    GenerateDataKeyResponseBody& operator=(GenerateDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && this->ciphertextForRecipient_ == nullptr && this->dataKeyName_ == nullptr && this->dataKeyVersionId_ == nullptr && this->dataKeyVersionName_ == nullptr && this->keyId_ == nullptr
        && this->keyVersionId_ == nullptr && this->plaintext_ == nullptr && this->requestId_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline GenerateDataKeyResponseBody& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // ciphertextForRecipient Field Functions 
    bool hasCiphertextForRecipient() const { return this->ciphertextForRecipient_ != nullptr;};
    void deleteCiphertextForRecipient() { this->ciphertextForRecipient_ = nullptr;};
    inline string getCiphertextForRecipient() const { DARABONBA_PTR_GET_DEFAULT(ciphertextForRecipient_, "") };
    inline GenerateDataKeyResponseBody& setCiphertextForRecipient(string ciphertextForRecipient) { DARABONBA_PTR_SET_VALUE(ciphertextForRecipient_, ciphertextForRecipient) };


    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline GenerateDataKeyResponseBody& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // dataKeyVersionId Field Functions 
    bool hasDataKeyVersionId() const { return this->dataKeyVersionId_ != nullptr;};
    void deleteDataKeyVersionId() { this->dataKeyVersionId_ = nullptr;};
    inline string getDataKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionId_, "") };
    inline GenerateDataKeyResponseBody& setDataKeyVersionId(string dataKeyVersionId) { DARABONBA_PTR_SET_VALUE(dataKeyVersionId_, dataKeyVersionId) };


    // dataKeyVersionName Field Functions 
    bool hasDataKeyVersionName() const { return this->dataKeyVersionName_ != nullptr;};
    void deleteDataKeyVersionName() { this->dataKeyVersionName_ = nullptr;};
    inline string getDataKeyVersionName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionName_, "") };
    inline GenerateDataKeyResponseBody& setDataKeyVersionName(string dataKeyVersionName) { DARABONBA_PTR_SET_VALUE(dataKeyVersionName_, dataKeyVersionName) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateDataKeyResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline GenerateDataKeyResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline GenerateDataKeyResponseBody& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ciphertext of the data key (DK) encrypted by the primary version of the specified key.
    shared_ptr<string> ciphertextBlob_ {};
    // When the Recipient parameter is passed, the public key encryption of the plaintext data key (DK) is performed by using the pubkey in the extendUserData field of the Recipient parameter, and Base64 encoding is applied.
    // The public key is the pubkey field in extendUserData.
    // This parameter takes effect only when you invoke the API operation through a KMS instance gateway.
    // >Notice: This parameter takes effect only when you invoke the API operation through a dedicated gateway.</notice>
    shared_ptr<string> ciphertextForRecipient_ {};
    // If the invoke is used to generate a managed data key (DK), this field is not empty and indicates the name of the generated managed data key (DK).
    shared_ptr<string> dataKeyName_ {};
    // If the invoke is used to generate a managed data key (DK), this field is not empty and indicates the latest key version of the generated managed data key (DK).
    shared_ptr<string> dataKeyVersionId_ {};
    // If the invoke is used to generate a managed data key (DK), this field is not empty and indicates the name of the credential that stores the key material of the latest version of the generated managed data key (DK).
    shared_ptr<string> dataKeyVersionName_ {};
    // The key ID. If the KeyId parameter in the request is set to the alias or ARN of the key, the key ID is also returned in the response.
    shared_ptr<string> keyId_ {};
    // The key version ID, which is the globally unique identifier of the primary key version.
    shared_ptr<string> keyVersionId_ {};
    // The value of the plaintext of the data key (DK) after Base64 encoding.
    shared_ptr<string> plaintext_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
