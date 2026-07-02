// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateDataKeyWithoutPlaintextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDataKeyWithoutPlaintextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(NumberOfBytes, numberOfBytes_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyWithoutPlaintextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(NumberOfBytes, numberOfBytes_);
    };
    GenerateDataKeyWithoutPlaintextRequest() = default ;
    GenerateDataKeyWithoutPlaintextRequest(const GenerateDataKeyWithoutPlaintextRequest &) = default ;
    GenerateDataKeyWithoutPlaintextRequest(GenerateDataKeyWithoutPlaintextRequest &&) = default ;
    GenerateDataKeyWithoutPlaintextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDataKeyWithoutPlaintextRequest() = default ;
    GenerateDataKeyWithoutPlaintextRequest& operator=(const GenerateDataKeyWithoutPlaintextRequest &) = default ;
    GenerateDataKeyWithoutPlaintextRequest& operator=(GenerateDataKeyWithoutPlaintextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->encryptionContext_ == nullptr && this->keyId_ == nullptr && this->keySpec_ == nullptr && this->numberOfBytes_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateDataKeyWithoutPlaintextRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & getEncryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & getEncryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline GenerateDataKeyWithoutPlaintextRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline GenerateDataKeyWithoutPlaintextRequest& setEncryptionContext(Darabonba::Json && encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateDataKeyWithoutPlaintextRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline GenerateDataKeyWithoutPlaintextRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // numberOfBytes Field Functions 
    bool hasNumberOfBytes() const { return this->numberOfBytes_ != nullptr;};
    void deleteNumberOfBytes() { this->numberOfBytes_ = nullptr;};
    inline int32_t getNumberOfBytes() const { DARABONBA_PTR_GET_DEFAULT(numberOfBytes_, 0) };
    inline GenerateDataKeyWithoutPlaintextRequest& setNumberOfBytes(int32_t numberOfBytes) { DARABONBA_PTR_SET_VALUE(numberOfBytes_, numberOfBytes) };


  protected:
    // Specifies whether to enable the DryRun mode.
    // 
    // - true: enables the DryRun mode.
    // 
    // - false (default): disables the DryRun mode.
    // 
    // The DryRun mode is used to test API calls, verify your permissions on the required resources, and check if the request parameters are valid. If you enable the DryRun mode, KMS returns a failure response with a reason. The failure reasons include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter was not specified.
    // 
    // - ValidationError: The request parameters are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // A JSON string of key-value pairs. If you specify this parameter, you must provide the same parameter when you call the Decrypt operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    Darabonba::Json encryptionContext_ {};
    // The globally unique identifier of the CMK. You can also specify an alias that is bound to the CMK. For more information about how to use an alias, see Alias overview.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The length of the data key to generate. Valid values:
    // 
    // - AES_256: a 256-bit symmetric key
    // 
    // - AES_128: a 128-bit symmetric key
    // 
    // > Use KeySpec or NumberOfBytes to specify the length of the data key. If you do not specify either parameter, KMS generates a 256-bit data key. If you specify both parameters, KMS ignores the KeySpec parameter.
    shared_ptr<string> keySpec_ {};
    // The length of the data key to generate.<br> Valid values: 1 to 1024.<br> Unit: bytes<br><br><br><br><br>
    shared_ptr<int32_t> numberOfBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
