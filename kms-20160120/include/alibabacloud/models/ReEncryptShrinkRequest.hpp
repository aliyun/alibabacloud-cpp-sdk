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
        && return this->destinationEncryptionContextShrink_ == nullptr && return this->destinationKeyId_ == nullptr && return this->dryRun_ == nullptr && return this->sourceEncryptionAlgorithm_ == nullptr && return this->sourceEncryptionContextShrink_ == nullptr
        && return this->sourceKeyId_ == nullptr && return this->sourceKeyVersionId_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline ReEncryptShrinkRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // destinationEncryptionContextShrink Field Functions 
    bool hasDestinationEncryptionContextShrink() const { return this->destinationEncryptionContextShrink_ != nullptr;};
    void deleteDestinationEncryptionContextShrink() { this->destinationEncryptionContextShrink_ = nullptr;};
    inline string destinationEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationEncryptionContextShrink_, "") };
    inline ReEncryptShrinkRequest& setDestinationEncryptionContextShrink(string destinationEncryptionContextShrink) { DARABONBA_PTR_SET_VALUE(destinationEncryptionContextShrink_, destinationEncryptionContextShrink) };


    // destinationKeyId Field Functions 
    bool hasDestinationKeyId() const { return this->destinationKeyId_ != nullptr;};
    void deleteDestinationKeyId() { this->destinationKeyId_ = nullptr;};
    inline string destinationKeyId() const { DARABONBA_PTR_GET_DEFAULT(destinationKeyId_, "") };
    inline ReEncryptShrinkRequest& setDestinationKeyId(string destinationKeyId) { DARABONBA_PTR_SET_VALUE(destinationKeyId_, destinationKeyId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ReEncryptShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // sourceEncryptionAlgorithm Field Functions 
    bool hasSourceEncryptionAlgorithm() const { return this->sourceEncryptionAlgorithm_ != nullptr;};
    void deleteSourceEncryptionAlgorithm() { this->sourceEncryptionAlgorithm_ = nullptr;};
    inline string sourceEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sourceEncryptionAlgorithm_, "") };
    inline ReEncryptShrinkRequest& setSourceEncryptionAlgorithm(string sourceEncryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(sourceEncryptionAlgorithm_, sourceEncryptionAlgorithm) };


    // sourceEncryptionContextShrink Field Functions 
    bool hasSourceEncryptionContextShrink() const { return this->sourceEncryptionContextShrink_ != nullptr;};
    void deleteSourceEncryptionContextShrink() { this->sourceEncryptionContextShrink_ = nullptr;};
    inline string sourceEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceEncryptionContextShrink_, "") };
    inline ReEncryptShrinkRequest& setSourceEncryptionContextShrink(string sourceEncryptionContextShrink) { DARABONBA_PTR_SET_VALUE(sourceEncryptionContextShrink_, sourceEncryptionContextShrink) };


    // sourceKeyId Field Functions 
    bool hasSourceKeyId() const { return this->sourceKeyId_ != nullptr;};
    void deleteSourceKeyId() { this->sourceKeyId_ = nullptr;};
    inline string sourceKeyId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyId_, "") };
    inline ReEncryptShrinkRequest& setSourceKeyId(string sourceKeyId) { DARABONBA_PTR_SET_VALUE(sourceKeyId_, sourceKeyId) };


    // sourceKeyVersionId Field Functions 
    bool hasSourceKeyVersionId() const { return this->sourceKeyVersionId_ != nullptr;};
    void deleteSourceKeyVersionId() { this->sourceKeyVersionId_ = nullptr;};
    inline string sourceKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyVersionId_, "") };
    inline ReEncryptShrinkRequest& setSourceKeyVersionId(string sourceKeyVersionId) { DARABONBA_PTR_SET_VALUE(sourceKeyVersionId_, sourceKeyVersionId) };


  protected:
    // The ciphertext that you want to re-encrypt.
    // 
    // You can set this parameter to the ciphertext that is returned after a symmetric or asymmetric encryption operation.
    // 
    // *   Symmetric encryption: the ciphertext returned after you call the [Encrypt](https://help.aliyun.com/document_detail/28949.html), [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html), [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html), or [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation
    // *   Asymmetric encryption: the public key-encrypted ciphertext returned after you call the [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation, or the ciphertext encrypted by using the public key of an asymmetric key pair outside KMS
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    // A JSON string that consists of key-value pairs. This parameter specifies the EncryptionContext that is used to re-encrypt the decrypted data or data key.
    std::shared_ptr<string> destinationEncryptionContextShrink_ = nullptr;
    // The ID of the symmetric CMK that is used to re-encrypt the ciphertext after the ciphertext is decrypted.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationKeyId_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
    // The encryption algorithm based on which the public key is used to encrypt the ciphertext specified by CiphertextBlob. For more information about encryption algorithms, see [AsymmetricDecrypt](https://help.aliyun.com/document_detail/148130.html).
    // 
    // Valid values:
    // 
    // *   RSAES_OAEP_SHA_256
    // *   RSAES_OAEP_SHA_1
    // *   SM2PKE
    // 
    // >  If you set CiphertextBlob to the public key-encrypted ciphertext that is returned after an asymmetric encryption operation, specify this parameter.
    std::shared_ptr<string> sourceEncryptionAlgorithm_ = nullptr;
    // A JSON string that consists of key-value pairs. If you specify EncryptionContext when you call the [Encrypt](https://help.aliyun.com/document_detail/28949.html), [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html), [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html), or [GenerateAndExportDataKey](https://help.aliyun.com/document_detail/176804.html) operation to encrypt the data or data key, an equivalent value is required here. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    // 
    // >  If you set CiphertextBlob to the ciphertext that is returned after a symmetric encryption operation, specify this parameter.
    std::shared_ptr<string> sourceEncryptionContextShrink_ = nullptr;
    // The ID of the CMK that is used to decrypt the ciphertext.
    // 
    // This parameter is the globally unique ID of the CMK.
    // 
    // >  If you set CiphertextBlob to the public key-encrypted ciphertext that is returned after an asymmetric encryption operation, specify this parameter.
    std::shared_ptr<string> sourceKeyId_ = nullptr;
    // The ID of the CMK version that is used to decrypt the ciphertext.
    // 
    // >  If you set CiphertextBlob to the public key-encrypted ciphertext that is returned after an asymmetric encryption operation, specify this parameter.
    std::shared_ptr<string> sourceKeyVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
