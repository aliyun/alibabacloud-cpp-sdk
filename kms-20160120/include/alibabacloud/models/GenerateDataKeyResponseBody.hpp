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
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(CiphertextForRecipient, ciphertextForRecipient_);
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
        && this->ciphertextForRecipient_ == nullptr && this->keyId_ == nullptr && this->keyVersionId_ == nullptr && this->plaintext_ == nullptr && this->requestId_ == nullptr; };
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
    shared_ptr<string> ciphertextForRecipient_ {};
    // The key ID. If the KeyId parameter in the request uses a key alias or key ARN, the key ID is also returned in the response.
    shared_ptr<string> keyId_ {};
    // The key version ID. The globally unique identifier of the CMK version.
    shared_ptr<string> keyVersionId_ {};
    // The Base64 encoding of the plaintext of the data key (DK).
    shared_ptr<string> plaintext_ {};
    // The request ID. The unique identifier generated by Alibaba Cloud for this request. You can use this ID to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
