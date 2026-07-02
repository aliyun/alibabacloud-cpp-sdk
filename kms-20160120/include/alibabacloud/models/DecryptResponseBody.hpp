// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DecryptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextForRecipient, ciphertextForRecipient_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextForRecipient, ciphertextForRecipient_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DecryptResponseBody() = default ;
    DecryptResponseBody(const DecryptResponseBody &) = default ;
    DecryptResponseBody(DecryptResponseBody &&) = default ;
    DecryptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptResponseBody() = default ;
    DecryptResponseBody& operator=(const DecryptResponseBody &) = default ;
    DecryptResponseBody& operator=(DecryptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextForRecipient_ == nullptr
        && this->keyId_ == nullptr && this->keyVersionId_ == nullptr && this->plaintext_ == nullptr && this->requestId_ == nullptr; };
    // ciphertextForRecipient Field Functions 
    bool hasCiphertextForRecipient() const { return this->ciphertextForRecipient_ != nullptr;};
    void deleteCiphertextForRecipient() { this->ciphertextForRecipient_ = nullptr;};
    inline string getCiphertextForRecipient() const { DARABONBA_PTR_GET_DEFAULT(ciphertextForRecipient_, "") };
    inline DecryptResponseBody& setCiphertextForRecipient(string ciphertextForRecipient) { DARABONBA_PTR_SET_VALUE(ciphertextForRecipient_, ciphertextForRecipient) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DecryptResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline DecryptResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline DecryptResponseBody& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DecryptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> ciphertextForRecipient_ {};
    // The ID of the master key that is used to decrypt the ciphertext.<br> The globally unique identifier of the master key.<br>
    shared_ptr<string> keyId_ {};
    // The ID of the key version that is used to decrypt the ciphertext. This key version is a version of the master key.
    shared_ptr<string> keyVersionId_ {};
    // The decrypted plaintext.
    shared_ptr<string> plaintext_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
