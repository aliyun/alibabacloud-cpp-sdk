// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ExportDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportedDataKey, exportedDataKey_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportedDataKey, exportedDataKey_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportDataKeyResponseBody() = default ;
    ExportDataKeyResponseBody(const ExportDataKeyResponseBody &) = default ;
    ExportDataKeyResponseBody(ExportDataKeyResponseBody &&) = default ;
    ExportDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDataKeyResponseBody() = default ;
    ExportDataKeyResponseBody& operator=(const ExportDataKeyResponseBody &) = default ;
    ExportDataKeyResponseBody& operator=(ExportDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportedDataKey_ == nullptr
        && return this->keyId_ == nullptr && return this->keyVersionId_ == nullptr && return this->requestId_ == nullptr; };
    // exportedDataKey Field Functions 
    bool hasExportedDataKey() const { return this->exportedDataKey_ != nullptr;};
    void deleteExportedDataKey() { this->exportedDataKey_ = nullptr;};
    inline string exportedDataKey() const { DARABONBA_PTR_GET_DEFAULT(exportedDataKey_, "") };
    inline ExportDataKeyResponseBody& setExportedDataKey(string exportedDataKey) { DARABONBA_PTR_SET_VALUE(exportedDataKey_, exportedDataKey) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ExportDataKeyResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline ExportDataKeyResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data key encrypted by using the public key and then exported.
    std::shared_ptr<string> exportedDataKey_ = nullptr;
    // The ID of the CMK that is used to decrypt the specified ciphertext of the data key.
    // 
    // This parameter is the globally unique ID of the CMK.
    std::shared_ptr<string> keyId_ = nullptr;
    // The ID of the CMK version that is used to decrypt the specified ciphertext of the data key.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
