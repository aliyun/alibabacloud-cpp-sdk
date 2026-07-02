// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REENCRYPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REENCRYPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ReEncryptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReEncryptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DestinationEncryptionContext, destinationEncryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(DestinationKeyId, destinationKeyId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(SourceEncryptionAlgorithm, sourceEncryptionAlgorithm_);
      DARABONBA_PTR_TO_JSON(SourceEncryptionContext, sourceEncryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(SourceKeyId, sourceKeyId_);
      DARABONBA_PTR_TO_JSON(SourceKeyVersionId, sourceKeyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReEncryptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DestinationEncryptionContext, destinationEncryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(DestinationKeyId, destinationKeyId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(SourceEncryptionAlgorithm, sourceEncryptionAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SourceEncryptionContext, sourceEncryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(SourceKeyId, sourceKeyId_);
      DARABONBA_PTR_FROM_JSON(SourceKeyVersionId, sourceKeyVersionId_);
    };
    ReEncryptShrinkRequest() = default ;
    ReEncryptShrinkRequest(const ReEncryptShrinkRequest &) = default ;
    ReEncryptShrinkRequest(ReEncryptShrinkRequest &&) = default ;
    ReEncryptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReEncryptShrinkRequest() = default ;
    ReEncryptShrinkRequest& operator=(const ReEncryptShrinkRequest &) = default ;
    ReEncryptShrinkRequest& operator=(ReEncryptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && this->destinationEncryptionContextShrink_ == nullptr && this->destinationKeyId_ == nullptr && this->dryRun_ == nullptr && this->sourceEncryptionAlgorithm_ == nullptr && this->sourceEncryptionContextShrink_ == nullptr
        && this->sourceKeyId_ == nullptr && this->sourceKeyVersionId_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline ReEncryptShrinkRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // destinationEncryptionContextShrink Field Functions 
    bool hasDestinationEncryptionContextShrink() const { return this->destinationEncryptionContextShrink_ != nullptr;};
    void deleteDestinationEncryptionContextShrink() { this->destinationEncryptionContextShrink_ = nullptr;};
    inline string getDestinationEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationEncryptionContextShrink_, "") };
    inline ReEncryptShrinkRequest& setDestinationEncryptionContextShrink(string destinationEncryptionContextShrink) { DARABONBA_PTR_SET_VALUE(destinationEncryptionContextShrink_, destinationEncryptionContextShrink) };


    // destinationKeyId Field Functions 
    bool hasDestinationKeyId() const { return this->destinationKeyId_ != nullptr;};
    void deleteDestinationKeyId() { this->destinationKeyId_ = nullptr;};
    inline string getDestinationKeyId() const { DARABONBA_PTR_GET_DEFAULT(destinationKeyId_, "") };
    inline ReEncryptShrinkRequest& setDestinationKeyId(string destinationKeyId) { DARABONBA_PTR_SET_VALUE(destinationKeyId_, destinationKeyId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ReEncryptShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // sourceEncryptionAlgorithm Field Functions 
    bool hasSourceEncryptionAlgorithm() const { return this->sourceEncryptionAlgorithm_ != nullptr;};
    void deleteSourceEncryptionAlgorithm() { this->sourceEncryptionAlgorithm_ = nullptr;};
    inline string getSourceEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sourceEncryptionAlgorithm_, "") };
    inline ReEncryptShrinkRequest& setSourceEncryptionAlgorithm(string sourceEncryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(sourceEncryptionAlgorithm_, sourceEncryptionAlgorithm) };


    // sourceEncryptionContextShrink Field Functions 
    bool hasSourceEncryptionContextShrink() const { return this->sourceEncryptionContextShrink_ != nullptr;};
    void deleteSourceEncryptionContextShrink() { this->sourceEncryptionContextShrink_ = nullptr;};
    inline string getSourceEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceEncryptionContextShrink_, "") };
    inline ReEncryptShrinkRequest& setSourceEncryptionContextShrink(string sourceEncryptionContextShrink) { DARABONBA_PTR_SET_VALUE(sourceEncryptionContextShrink_, sourceEncryptionContextShrink) };


    // sourceKeyId Field Functions 
    bool hasSourceKeyId() const { return this->sourceKeyId_ != nullptr;};
    void deleteSourceKeyId() { this->sourceKeyId_ = nullptr;};
    inline string getSourceKeyId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyId_, "") };
    inline ReEncryptShrinkRequest& setSourceKeyId(string sourceKeyId) { DARABONBA_PTR_SET_VALUE(sourceKeyId_, sourceKeyId) };


    // sourceKeyVersionId Field Functions 
    bool hasSourceKeyVersionId() const { return this->sourceKeyVersionId_ != nullptr;};
    void deleteSourceKeyVersionId() { this->sourceKeyVersionId_ = nullptr;};
    inline string getSourceKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyVersionId_, "") };
    inline ReEncryptShrinkRequest& setSourceKeyVersionId(string sourceKeyVersionId) { DARABONBA_PTR_SET_VALUE(sourceKeyVersionId_, sourceKeyVersionId) };


  protected:
    // The ciphertext that you want to re-encrypt.<br> This parameter can be the ciphertext that is returned after symmetric or asymmetric key encryption.<br><br>
    // 
    // - Symmetric encryption: the ciphertext that is returned after you call the [Encrypt](https://help.aliyun.com/document_detail/28949.html), [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html), [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html), or [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation.
    // 
    // - Asymmetric key encryption: the data that is encrypted using a public key after you call the [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation, or the data that is encrypted using an asymmetric public key in an external system.
    // 
    // This parameter is required.
    shared_ptr<string> ciphertextBlob_ {};
    // A JSON string that consists of key-value pairs. This parameter specifies the encryption context for the destination master key.
    shared_ptr<string> destinationEncryptionContextShrink_ {};
    // The ID of the symmetric master key that is used to re-encrypt the data after the ciphertext is decrypted.
    // 
    // This parameter is required.
    shared_ptr<string> destinationKeyId_ {};
    // Specifies whether to enable the DryRun mode.
    // 
    // - true: enables the DryRun mode.
    // 
    // - false (default): disables the DryRun mode.
    // 
    // The DryRun mode is used to test API calls, verify whether you have the permissions to perform operations on the required resources, and check whether the request parameters are valid. If you enable the DryRun mode, KMS always returns a failure and a reason for the failure. The reasons for the failure include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter was not configured.
    // 
    // - ValidationError: The parameters specified in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // If CiphertextBlob is the result of public key encryption, specify the public key encryption algorithm. For more information about the algorithms, see [AsymmetricDecrypt](https://help.aliyun.com/document_detail/148130.html).<br> Valid values:<br><br>
    // 
    // - RSAES_OAEP_SHA_256
    // 
    // - RSAES_OAEP_SHA_1
    // 
    // - SM2PKE
    // 
    // > You must specify this parameter when CiphertextBlob is the data that is encrypted using a public key after asymmetric key encryption.
    shared_ptr<string> sourceEncryptionAlgorithm_ {};
    // A JSON string that consists of key-value pairs. If you specify this parameter when you call the [Encrypt](https://help.aliyun.com/document_detail/28949.html), [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html), [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html), or [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation, you must specify the same parameter to decrypt the data. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    // 
    // > You must specify this parameter when CiphertextBlob is the ciphertext that is returned after symmetric encryption.
    shared_ptr<string> sourceEncryptionContextShrink_ {};
    // The ID of the master key that is used to decrypt the ciphertext.<br> The globally unique identifier of the master key.<br><br>
    // 
    // > You must specify this parameter when CiphertextBlob is the data that is encrypted using a public key after asymmetric key encryption.
    shared_ptr<string> sourceKeyId_ {};
    // The ID of the key version that is used to decrypt the ciphertext.
    // 
    // > You must specify this parameter when CiphertextBlob is the data that is encrypted using a public key after asymmetric key encryption.
    shared_ptr<string> sourceKeyVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
