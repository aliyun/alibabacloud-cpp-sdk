// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEANDEXPORTDATAKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEANDEXPORTDATAKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateAndExportDataKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAndExportDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_TO_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_TO_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAndExportDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_FROM_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_FROM_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    GenerateAndExportDataKeyShrinkRequest() = default ;
    GenerateAndExportDataKeyShrinkRequest(const GenerateAndExportDataKeyShrinkRequest &) = default ;
    GenerateAndExportDataKeyShrinkRequest(GenerateAndExportDataKeyShrinkRequest &&) = default ;
    GenerateAndExportDataKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAndExportDataKeyShrinkRequest() = default ;
    GenerateAndExportDataKeyShrinkRequest& operator=(const GenerateAndExportDataKeyShrinkRequest &) = default ;
    GenerateAndExportDataKeyShrinkRequest& operator=(GenerateAndExportDataKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->encryptionContextShrink_ == nullptr && this->keyId_ == nullptr && this->keySpec_ == nullptr && this->numberOfBytes_ == nullptr && this->publicKeyBlob_ == nullptr
        && this->wrappingAlgorithm_ == nullptr && this->wrappingKeySpec_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContextShrink Field Functions 
    bool hasEncryptionContextShrink() const { return this->encryptionContextShrink_ != nullptr;};
    void deleteEncryptionContextShrink() { this->encryptionContextShrink_ = nullptr;};
    inline string getEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionContextShrink_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setEncryptionContextShrink(string encryptionContextShrink) { DARABONBA_PTR_SET_VALUE(encryptionContextShrink_, encryptionContextShrink) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // numberOfBytes Field Functions 
    bool hasNumberOfBytes() const { return this->numberOfBytes_ != nullptr;};
    void deleteNumberOfBytes() { this->numberOfBytes_ = nullptr;};
    inline int32_t getNumberOfBytes() const { DARABONBA_PTR_GET_DEFAULT(numberOfBytes_, 0) };
    inline GenerateAndExportDataKeyShrinkRequest& setNumberOfBytes(int32_t numberOfBytes) { DARABONBA_PTR_SET_VALUE(numberOfBytes_, numberOfBytes) };


    // publicKeyBlob Field Functions 
    bool hasPublicKeyBlob() const { return this->publicKeyBlob_ != nullptr;};
    void deletePublicKeyBlob() { this->publicKeyBlob_ = nullptr;};
    inline string getPublicKeyBlob() const { DARABONBA_PTR_GET_DEFAULT(publicKeyBlob_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setPublicKeyBlob(string publicKeyBlob) { DARABONBA_PTR_SET_VALUE(publicKeyBlob_, publicKeyBlob) };


    // wrappingAlgorithm Field Functions 
    bool hasWrappingAlgorithm() const { return this->wrappingAlgorithm_ != nullptr;};
    void deleteWrappingAlgorithm() { this->wrappingAlgorithm_ = nullptr;};
    inline string getWrappingAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(wrappingAlgorithm_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setWrappingAlgorithm(string wrappingAlgorithm) { DARABONBA_PTR_SET_VALUE(wrappingAlgorithm_, wrappingAlgorithm) };


    // wrappingKeySpec Field Functions 
    bool hasWrappingKeySpec() const { return this->wrappingKeySpec_ != nullptr;};
    void deleteWrappingKeySpec() { this->wrappingKeySpec_ = nullptr;};
    inline string getWrappingKeySpec() const { DARABONBA_PTR_GET_DEFAULT(wrappingKeySpec_, "") };
    inline GenerateAndExportDataKeyShrinkRequest& setWrappingKeySpec(string wrappingKeySpec) { DARABONBA_PTR_SET_VALUE(wrappingKeySpec_, wrappingKeySpec) };


  protected:
    // Specifies whether to enable the dry run feature.
    // 
    // - true: enables the feature.
    // 
    // - false (default): disables the feature.
    // 
    // The DryRun mode is used to test API calls and verify the permissions on the resources that you have access to and the validity of the request parameters. If you enable the DryRun mode, KMS always returns a failure response and the cause of the failure. The following failure causes are included:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter is not specified.
    // 
    // - ValidationError: The parameters specified in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // A JSON string that consists of key-value pairs. If you specify this parameter, you must specify the same parameter when you call the Decrypt operation or other operations to re-encrypt the data key. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    shared_ptr<string> encryptionContextShrink_ {};
    // The ID of the key. You can also specify the alias or Amazon Resource Name (ARN) of the key. For more information about aliases, see [Manage aliases](https://help.aliyun.com/document_detail/480655.html).
    // 
    // > To access a key in another Alibaba Cloud account, you must specify the ARN of the key. The key ARN is in the format of `acs:kms:${region}:${account}:key/${keyid}`.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The length of the data key that you want to generate. Valid values:
    // 
    // - AES_256: a 256-bit symmetric key.
    // 
    // - AES_128: a 128-bit symmetric key.
    // 
    // > We recommend that you use the KeySpec or NumberOfBytes parameter to specify the length of a data key. If you do not specify either of the parameters, KMS generates a 256-bit data key. If you specify both parameters, KMS ignores the KeySpec parameter.
    shared_ptr<string> keySpec_ {};
    // The length of the data key that you want to generate.
    // 
    // Valid values: 1 to 1024.
    // 
    // Unit: bytes.
    shared_ptr<int32_t> numberOfBytes_ {};
    // The public key that is encoded in Base64.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyBlob_ {};
    // The encryption algorithm that is used to encrypt the data key using the public key specified by PublicKeyBlob. For more information about encryption algorithms, see [AsymmetricDecrypt](https://help.aliyun.com/document_detail/148130.html).<br> Valid values:<br><br>
    // 
    // - RSAES_OAEP_SHA_256
    // 
    // - RSAES_OAEP_SHA_1
    // 
    // - SM2PKE
    // 
    // This parameter is required.
    shared_ptr<string> wrappingAlgorithm_ {};
    // The type of the key specified by PublicKeyBlob. For more information about key types, see [Introduction to asymmetric keys](https://help.aliyun.com/document_detail/148147.html).<br> Valid values:<br><br>
    // 
    // - RSA_2048
    // 
    // - EC_SM2
    // 
    // This parameter is required.
    shared_ptr<string> wrappingKeySpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
