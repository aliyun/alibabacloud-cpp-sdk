// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ReEncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReEncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_ANY_TO_JSON(DestinationEncryptionContext, destinationEncryptionContext_);
      DARABONBA_PTR_TO_JSON(DestinationKeyId, destinationKeyId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(SourceEncryptionAlgorithm, sourceEncryptionAlgorithm_);
      DARABONBA_ANY_TO_JSON(SourceEncryptionContext, sourceEncryptionContext_);
      DARABONBA_PTR_TO_JSON(SourceKeyId, sourceKeyId_);
      DARABONBA_PTR_TO_JSON(SourceKeyVersionId, sourceKeyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReEncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_ANY_FROM_JSON(DestinationEncryptionContext, destinationEncryptionContext_);
      DARABONBA_PTR_FROM_JSON(DestinationKeyId, destinationKeyId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(SourceEncryptionAlgorithm, sourceEncryptionAlgorithm_);
      DARABONBA_ANY_FROM_JSON(SourceEncryptionContext, sourceEncryptionContext_);
      DARABONBA_PTR_FROM_JSON(SourceKeyId, sourceKeyId_);
      DARABONBA_PTR_FROM_JSON(SourceKeyVersionId, sourceKeyVersionId_);
    };
    ReEncryptRequest() = default ;
    ReEncryptRequest(const ReEncryptRequest &) = default ;
    ReEncryptRequest(ReEncryptRequest &&) = default ;
    ReEncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReEncryptRequest() = default ;
    ReEncryptRequest& operator=(const ReEncryptRequest &) = default ;
    ReEncryptRequest& operator=(ReEncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && return this->destinationEncryptionContext_ == nullptr && return this->destinationKeyId_ == nullptr && return this->dryRun_ == nullptr && return this->sourceEncryptionAlgorithm_ == nullptr && return this->sourceEncryptionContext_ == nullptr
        && return this->sourceKeyId_ == nullptr && return this->sourceKeyVersionId_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline ReEncryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // destinationEncryptionContext Field Functions 
    bool hasDestinationEncryptionContext() const { return this->destinationEncryptionContext_ != nullptr;};
    void deleteDestinationEncryptionContext() { this->destinationEncryptionContext_ = nullptr;};
    inline     const Darabonba::Json & destinationEncryptionContext() const { DARABONBA_GET(destinationEncryptionContext_) };
    Darabonba::Json & destinationEncryptionContext() { DARABONBA_GET(destinationEncryptionContext_) };
    inline ReEncryptRequest& setDestinationEncryptionContext(const Darabonba::Json & destinationEncryptionContext) { DARABONBA_SET_VALUE(destinationEncryptionContext_, destinationEncryptionContext) };
    inline ReEncryptRequest& setDestinationEncryptionContext(Darabonba::Json & destinationEncryptionContext) { DARABONBA_SET_RVALUE(destinationEncryptionContext_, destinationEncryptionContext) };


    // destinationKeyId Field Functions 
    bool hasDestinationKeyId() const { return this->destinationKeyId_ != nullptr;};
    void deleteDestinationKeyId() { this->destinationKeyId_ = nullptr;};
    inline string destinationKeyId() const { DARABONBA_PTR_GET_DEFAULT(destinationKeyId_, "") };
    inline ReEncryptRequest& setDestinationKeyId(string destinationKeyId) { DARABONBA_PTR_SET_VALUE(destinationKeyId_, destinationKeyId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ReEncryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // sourceEncryptionAlgorithm Field Functions 
    bool hasSourceEncryptionAlgorithm() const { return this->sourceEncryptionAlgorithm_ != nullptr;};
    void deleteSourceEncryptionAlgorithm() { this->sourceEncryptionAlgorithm_ = nullptr;};
    inline string sourceEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sourceEncryptionAlgorithm_, "") };
    inline ReEncryptRequest& setSourceEncryptionAlgorithm(string sourceEncryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(sourceEncryptionAlgorithm_, sourceEncryptionAlgorithm) };


    // sourceEncryptionContext Field Functions 
    bool hasSourceEncryptionContext() const { return this->sourceEncryptionContext_ != nullptr;};
    void deleteSourceEncryptionContext() { this->sourceEncryptionContext_ = nullptr;};
    inline     const Darabonba::Json & sourceEncryptionContext() const { DARABONBA_GET(sourceEncryptionContext_) };
    Darabonba::Json & sourceEncryptionContext() { DARABONBA_GET(sourceEncryptionContext_) };
    inline ReEncryptRequest& setSourceEncryptionContext(const Darabonba::Json & sourceEncryptionContext) { DARABONBA_SET_VALUE(sourceEncryptionContext_, sourceEncryptionContext) };
    inline ReEncryptRequest& setSourceEncryptionContext(Darabonba::Json & sourceEncryptionContext) { DARABONBA_SET_RVALUE(sourceEncryptionContext_, sourceEncryptionContext) };


    // sourceKeyId Field Functions 
    bool hasSourceKeyId() const { return this->sourceKeyId_ != nullptr;};
    void deleteSourceKeyId() { this->sourceKeyId_ = nullptr;};
    inline string sourceKeyId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyId_, "") };
    inline ReEncryptRequest& setSourceKeyId(string sourceKeyId) { DARABONBA_PTR_SET_VALUE(sourceKeyId_, sourceKeyId) };


    // sourceKeyVersionId Field Functions 
    bool hasSourceKeyVersionId() const { return this->sourceKeyVersionId_ != nullptr;};
    void deleteSourceKeyVersionId() { this->sourceKeyVersionId_ = nullptr;};
    inline string sourceKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceKeyVersionId_, "") };
    inline ReEncryptRequest& setSourceKeyVersionId(string sourceKeyVersionId) { DARABONBA_PTR_SET_VALUE(sourceKeyVersionId_, sourceKeyVersionId) };


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
    Darabonba::Json destinationEncryptionContext_ = nullptr;
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
    Darabonba::Json sourceEncryptionContext_ = nullptr;
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
