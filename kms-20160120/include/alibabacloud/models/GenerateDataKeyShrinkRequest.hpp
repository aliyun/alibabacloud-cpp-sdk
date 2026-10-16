// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDATAKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDATAKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateDataKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_TO_JSON(Recipient, recipient_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
    };
    GenerateDataKeyShrinkRequest() = default ;
    GenerateDataKeyShrinkRequest(const GenerateDataKeyShrinkRequest &) = default ;
    GenerateDataKeyShrinkRequest(GenerateDataKeyShrinkRequest &&) = default ;
    GenerateDataKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDataKeyShrinkRequest() = default ;
    GenerateDataKeyShrinkRequest& operator=(const GenerateDataKeyShrinkRequest &) = default ;
    GenerateDataKeyShrinkRequest& operator=(GenerateDataKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->encryptionContextShrink_ == nullptr && this->keyId_ == nullptr && this->keySpec_ == nullptr && this->numberOfBytes_ == nullptr && this->recipient_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateDataKeyShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContextShrink Field Functions 
    bool hasEncryptionContextShrink() const { return this->encryptionContextShrink_ != nullptr;};
    void deleteEncryptionContextShrink() { this->encryptionContextShrink_ = nullptr;};
    inline string getEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionContextShrink_, "") };
    inline GenerateDataKeyShrinkRequest& setEncryptionContextShrink(string encryptionContextShrink) { DARABONBA_PTR_SET_VALUE(encryptionContextShrink_, encryptionContextShrink) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateDataKeyShrinkRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline GenerateDataKeyShrinkRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // numberOfBytes Field Functions 
    bool hasNumberOfBytes() const { return this->numberOfBytes_ != nullptr;};
    void deleteNumberOfBytes() { this->numberOfBytes_ = nullptr;};
    inline int32_t getNumberOfBytes() const { DARABONBA_PTR_GET_DEFAULT(numberOfBytes_, 0) };
    inline GenerateDataKeyShrinkRequest& setNumberOfBytes(int32_t numberOfBytes) { DARABONBA_PTR_SET_VALUE(numberOfBytes_, numberOfBytes) };


    // recipient Field Functions 
    bool hasRecipient() const { return this->recipient_ != nullptr;};
    void deleteRecipient() { this->recipient_ = nullptr;};
    inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
    inline GenerateDataKeyShrinkRequest& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


  protected:
    // Specifies whether to enable DryRun mode.
    // 
    // - true: enabled.
    // - false (default): disabled.
    // 
    // DryRun mode is used to test API calls, verify that you have the required permissions on the relevant resources, and check whether request parameters are configured correctly. When DryRun mode is enabled, KMS always returns a failure with a reason. Possible failure reasons include:
    // 
    // - DryRunOperationError: The request would succeed if the DryRun parameter were not set.
    // - ValidationError: A parameter specified in the request is invalid.
    // - AccessDeniedError: You do not have permission to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // A JSON string of key-value pairs.
    // 
    // If you specify this parameter, you must provide the same parameter when you call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    shared_ptr<string> encryptionContextShrink_ {};
    // The ID of the key. You can also specify a key alias or a key Amazon Resource Name (ARN). For more information about aliases, see [Manage key aliases](https://help.aliyun.com/document_detail/480655.html).
    // >To access a key in another Alibaba Cloud account, you must specify the key ARN. The key ARN format is `acs:kms:${region}:${account}:key/${keyid}`.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The length of the data key (DK) to generate. Valid values:
    // 
    // - AES_256: a 256-bit symmetric key.
    // 
    // - AES_128: a 128-bit symmetric key.
    // 
    // > Use KeySpec or NumberOfBytes to specify the DK length. If neither is specified, KMS generates a 256-bit DK. If both are specified, KMS ignores the KeySpec parameter.
    shared_ptr<string> keySpec_ {};
    // The length of the data key (DK) to generate, in bytes.
    // 
    // Valid values: 1 to 1024.
    // 
    // Default value:
    // - When KeySpec is set to AES_256, the default value of NumberOfBytes is 32.
    // - When KeySpec is set to AES_128, the default value of NumberOfBytes is 16.
    shared_ptr<int32_t> numberOfBytes_ {};
    shared_ptr<string> recipient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
