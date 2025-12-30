// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DecryptKMSDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataKey, dataKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKey, dataKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DecryptKMSDataKeyResponseBody() = default ;
    DecryptKMSDataKeyResponseBody(const DecryptKMSDataKeyResponseBody &) = default ;
    DecryptKMSDataKeyResponseBody(DecryptKMSDataKeyResponseBody &&) = default ;
    DecryptKMSDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptKMSDataKeyResponseBody() = default ;
    DecryptKMSDataKeyResponseBody& operator=(const DecryptKMSDataKeyResponseBody &) = default ;
    DecryptKMSDataKeyResponseBody& operator=(DecryptKMSDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataKey& obj) { 
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      };
      friend void from_json(const Darabonba::Json& j, DataKey& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      };
      DataKey() = default ;
      DataKey(const DataKey &) = default ;
      DataKey(DataKey &&) = default ;
      DataKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataKey() = default ;
      DataKey& operator=(const DataKey &) = default ;
      DataKey& operator=(DataKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyId_ == nullptr
        && this->plaintext_ == nullptr; };
      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline DataKey& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // plaintext Field Functions 
      bool hasPlaintext() const { return this->plaintext_ != nullptr;};
      void deletePlaintext() { this->plaintext_ = nullptr;};
      inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
      inline DataKey& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    protected:
      // The ID of the customer master key (CMK) that was used to decrypt the ciphertext.
      shared_ptr<string> keyId_ {};
      // The plaintext that is generated after decryption.
      shared_ptr<string> plaintext_ {};
    };

    virtual bool empty() const override { return this->dataKey_ == nullptr
        && this->requestId_ == nullptr; };
    // dataKey Field Functions 
    bool hasDataKey() const { return this->dataKey_ != nullptr;};
    void deleteDataKey() { this->dataKey_ = nullptr;};
    inline const DecryptKMSDataKeyResponseBody::DataKey & getDataKey() const { DARABONBA_PTR_GET_CONST(dataKey_, DecryptKMSDataKeyResponseBody::DataKey) };
    inline DecryptKMSDataKeyResponseBody::DataKey getDataKey() { DARABONBA_PTR_GET(dataKey_, DecryptKMSDataKeyResponseBody::DataKey) };
    inline DecryptKMSDataKeyResponseBody& setDataKey(const DecryptKMSDataKeyResponseBody::DataKey & dataKey) { DARABONBA_PTR_SET_VALUE(dataKey_, dataKey) };
    inline DecryptKMSDataKeyResponseBody& setDataKey(DecryptKMSDataKeyResponseBody::DataKey && dataKey) { DARABONBA_PTR_SET_RVALUE(dataKey_, dataKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DecryptKMSDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the decryption result.
    shared_ptr<DecryptKMSDataKeyResponseBody::DataKey> dataKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
