// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEANDEXPORTDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEANDEXPORTDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateAndExportDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAndExportDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(ExportedDataKey, exportedDataKey_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAndExportDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(ExportedDataKey, exportedDataKey_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAndExportDataKeyResponseBody() = default ;
    GenerateAndExportDataKeyResponseBody(const GenerateAndExportDataKeyResponseBody &) = default ;
    GenerateAndExportDataKeyResponseBody(GenerateAndExportDataKeyResponseBody &&) = default ;
    GenerateAndExportDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAndExportDataKeyResponseBody() = default ;
    GenerateAndExportDataKeyResponseBody& operator=(const GenerateAndExportDataKeyResponseBody &) = default ;
    GenerateAndExportDataKeyResponseBody& operator=(GenerateAndExportDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && return this->exportedDataKey_ == nullptr && return this->keyId_ == nullptr && return this->keyVersionId_ == nullptr && return this->requestId_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline GenerateAndExportDataKeyResponseBody& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // exportedDataKey Field Functions 
    bool hasExportedDataKey() const { return this->exportedDataKey_ != nullptr;};
    void deleteExportedDataKey() { this->exportedDataKey_ = nullptr;};
    inline string exportedDataKey() const { DARABONBA_PTR_GET_DEFAULT(exportedDataKey_, "") };
    inline GenerateAndExportDataKeyResponseBody& setExportedDataKey(string exportedDataKey) { DARABONBA_PTR_SET_VALUE(exportedDataKey_, exportedDataKey) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateAndExportDataKeyResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline GenerateAndExportDataKeyResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAndExportDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ciphertext of the data key encrypted by using the primary CMK version.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    // The data key encrypted by using the public key and then exported.
    std::shared_ptr<string> exportedDataKey_ = nullptr;
    // The globally unique ID of the CMK.
    // 
    // >  If you set the KeyId parameter to an alias, the ID of the CMK to which the alias is bound is returned.
    std::shared_ptr<string> keyId_ = nullptr;
    // The ID of the CMK version that is used to encrypt the plaintext. It is the primary version of the CMK.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
