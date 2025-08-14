// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYRESPONSEBODYDATAKEY_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYRESPONSEBODYDATAKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DecryptKMSDataKeyResponseBodyDataKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptKMSDataKeyResponseBodyDataKey& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptKMSDataKeyResponseBodyDataKey& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    DecryptKMSDataKeyResponseBodyDataKey() = default ;
    DecryptKMSDataKeyResponseBodyDataKey(const DecryptKMSDataKeyResponseBodyDataKey &) = default ;
    DecryptKMSDataKeyResponseBodyDataKey(DecryptKMSDataKeyResponseBodyDataKey &&) = default ;
    DecryptKMSDataKeyResponseBodyDataKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptKMSDataKeyResponseBodyDataKey() = default ;
    DecryptKMSDataKeyResponseBodyDataKey& operator=(const DecryptKMSDataKeyResponseBodyDataKey &) = default ;
    DecryptKMSDataKeyResponseBodyDataKey& operator=(DecryptKMSDataKeyResponseBodyDataKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyId_ != nullptr
        && this->plaintext_ != nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DecryptKMSDataKeyResponseBodyDataKey& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline DecryptKMSDataKeyResponseBodyDataKey& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The ID of the customer master key (CMK) that was used to decrypt the ciphertext.
    std::shared_ptr<string> keyId_ = nullptr;
    // The plaintext that is generated after decryption.
    std::shared_ptr<string> plaintext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
