// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateKMSDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataKey, dataKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKey, dataKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateKMSDataKeyResponseBody() = default ;
    GenerateKMSDataKeyResponseBody(const GenerateKMSDataKeyResponseBody &) = default ;
    GenerateKMSDataKeyResponseBody(GenerateKMSDataKeyResponseBody &&) = default ;
    GenerateKMSDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateKMSDataKeyResponseBody() = default ;
    GenerateKMSDataKeyResponseBody& operator=(const GenerateKMSDataKeyResponseBody &) = default ;
    GenerateKMSDataKeyResponseBody& operator=(GenerateKMSDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataKey& obj) { 
        DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      };
      friend void from_json(const Darabonba::Json& j, DataKey& obj) { 
        DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
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
      virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && this->keyId_ == nullptr && this->plaintext_ == nullptr; };
      // ciphertextBlob Field Functions 
      bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
      void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
      inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
      inline DataKey& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


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
      // The ciphertext of the encrypted data key. This parameter is used as CipherText when you create a transcoding job.
      shared_ptr<string> ciphertextBlob_ {};
      // The ID of the customer master key (CMK). The ID must be globally unique.
      shared_ptr<string> keyId_ {};
      // The Base64-encoded plaintext of the data key.
      shared_ptr<string> plaintext_ {};
    };

    virtual bool empty() const override { return this->dataKey_ == nullptr
        && this->requestId_ == nullptr; };
    // dataKey Field Functions 
    bool hasDataKey() const { return this->dataKey_ != nullptr;};
    void deleteDataKey() { this->dataKey_ = nullptr;};
    inline const GenerateKMSDataKeyResponseBody::DataKey & getDataKey() const { DARABONBA_PTR_GET_CONST(dataKey_, GenerateKMSDataKeyResponseBody::DataKey) };
    inline GenerateKMSDataKeyResponseBody::DataKey getDataKey() { DARABONBA_PTR_GET(dataKey_, GenerateKMSDataKeyResponseBody::DataKey) };
    inline GenerateKMSDataKeyResponseBody& setDataKey(const GenerateKMSDataKeyResponseBody::DataKey & dataKey) { DARABONBA_PTR_SET_VALUE(dataKey_, dataKey) };
    inline GenerateKMSDataKeyResponseBody& setDataKey(GenerateKMSDataKeyResponseBody::DataKey && dataKey) { DARABONBA_PTR_SET_RVALUE(dataKey_, dataKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateKMSDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data key.
    shared_ptr<GenerateKMSDataKeyResponseBody::DataKey> dataKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
