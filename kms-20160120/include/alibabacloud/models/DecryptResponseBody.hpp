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
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptResponseBody& obj) { 
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
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->keyVersionId_ == nullptr && return this->plaintext_ == nullptr && return this->requestId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DecryptResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline DecryptResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline DecryptResponseBody& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DecryptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the customer master key (CMK) that is used to decrypt the ciphertext.
    // 
    // It is the GUID of the CMK.
    std::shared_ptr<string> keyId_ = nullptr;
    // The ID of the CMK version that is used to decrypt the ciphertext.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The plaintext that is generated after decryption.
    std::shared_ptr<string> plaintext_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
