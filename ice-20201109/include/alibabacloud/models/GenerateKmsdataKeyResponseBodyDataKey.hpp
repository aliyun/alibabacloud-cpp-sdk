// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODYDATAKEY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODYDATAKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateKMSDataKeyResponseBodyDataKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateKMSDataKeyResponseBodyDataKey& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateKMSDataKeyResponseBodyDataKey& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    GenerateKMSDataKeyResponseBodyDataKey() = default ;
    GenerateKMSDataKeyResponseBodyDataKey(const GenerateKMSDataKeyResponseBodyDataKey &) = default ;
    GenerateKMSDataKeyResponseBodyDataKey(GenerateKMSDataKeyResponseBodyDataKey &&) = default ;
    GenerateKMSDataKeyResponseBodyDataKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateKMSDataKeyResponseBodyDataKey() = default ;
    GenerateKMSDataKeyResponseBodyDataKey& operator=(const GenerateKMSDataKeyResponseBodyDataKey &) = default ;
    GenerateKMSDataKeyResponseBodyDataKey& operator=(GenerateKMSDataKeyResponseBodyDataKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphertextBlob_ != nullptr
        && this->keyId_ != nullptr && this->plaintext_ != nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline GenerateKMSDataKeyResponseBodyDataKey& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateKMSDataKeyResponseBodyDataKey& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline GenerateKMSDataKeyResponseBodyDataKey& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The ciphertext of the encrypted data key. This parameter is used as CipherText when you create a transcoding job.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    // The ID of the customer master key (CMK). The ID must be globally unique.
    std::shared_ptr<string> keyId_ = nullptr;
    // The Base64-encoded plaintext of the data key.
    std::shared_ptr<string> plaintext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
