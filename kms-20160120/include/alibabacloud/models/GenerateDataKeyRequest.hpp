// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDATAKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDATAKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateDataKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDataKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(NumberOfBytes, numberOfBytes_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(NumberOfBytes, numberOfBytes_);
    };
    GenerateDataKeyRequest() = default ;
    GenerateDataKeyRequest(const GenerateDataKeyRequest &) = default ;
    GenerateDataKeyRequest(GenerateDataKeyRequest &&) = default ;
    GenerateDataKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDataKeyRequest() = default ;
    GenerateDataKeyRequest& operator=(const GenerateDataKeyRequest &) = default ;
    GenerateDataKeyRequest& operator=(GenerateDataKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && return this->encryptionContext_ == nullptr && return this->keyId_ == nullptr && return this->keySpec_ == nullptr && return this->numberOfBytes_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateDataKeyRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & encryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & encryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline GenerateDataKeyRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline GenerateDataKeyRequest& setEncryptionContext(Darabonba::Json & encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateDataKeyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string keySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline GenerateDataKeyRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // numberOfBytes Field Functions 
    bool hasNumberOfBytes() const { return this->numberOfBytes_ != nullptr;};
    void deleteNumberOfBytes() { this->numberOfBytes_ = nullptr;};
    inline int32_t numberOfBytes() const { DARABONBA_PTR_GET_DEFAULT(numberOfBytes_, 0) };
    inline GenerateDataKeyRequest& setNumberOfBytes(int32_t numberOfBytes) { DARABONBA_PTR_SET_VALUE(numberOfBytes_, numberOfBytes) };


  protected:
    std::shared_ptr<string> dryRun_ = nullptr;
    // The JSON string that consists of key-value pairs.
    // 
    // If you specify this parameter, an equivalent value is required when you call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    Darabonba::Json encryptionContext_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    // 
    // You can also set this parameter to an alias that is bound to the CMK. For more information, see [Alias overview](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The type of the data key that you want to generate. Valid values:
    // 
    // *   AES_256: a 256-bit symmetric key
    // *   AES_128: a 128-bit symmetric key
    // 
    // >  We recommend that you use the KeySpec or NumberOfBytes parameter to specify the length of a data key. If none of the parameters are specified, KMS generates a 256-bit data key. If both parameters are specified, KMS ignores the KeySpec parameter.
    std::shared_ptr<string> keySpec_ = nullptr;
    // The length of the data key that you want to generate. Unit: bytes.
    // 
    // Valid values: 1 to 1024.
    // 
    // Default value:
    // 
    // *   If the KeySpec parameter is set to AES_256, set the value of the NumberOfBytes parameter to 32.
    // *   If the KeySpec parameter is set to AES_128, set the value of the NumberOfBytes parameter to 16.
    std::shared_ptr<int32_t> numberOfBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
