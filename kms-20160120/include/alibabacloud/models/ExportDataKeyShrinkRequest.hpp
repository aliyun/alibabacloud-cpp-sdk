// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDATAKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDATAKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ExportDataKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_TO_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDataKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_FROM_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    ExportDataKeyShrinkRequest() = default ;
    ExportDataKeyShrinkRequest(const ExportDataKeyShrinkRequest &) = default ;
    ExportDataKeyShrinkRequest(ExportDataKeyShrinkRequest &&) = default ;
    ExportDataKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDataKeyShrinkRequest() = default ;
    ExportDataKeyShrinkRequest& operator=(const ExportDataKeyShrinkRequest &) = default ;
    ExportDataKeyShrinkRequest& operator=(ExportDataKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && this->dryRun_ == nullptr && this->encryptionContextShrink_ == nullptr && this->publicKeyBlob_ == nullptr && this->wrappingAlgorithm_ == nullptr && this->wrappingKeySpec_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline ExportDataKeyShrinkRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ExportDataKeyShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContextShrink Field Functions 
    bool hasEncryptionContextShrink() const { return this->encryptionContextShrink_ != nullptr;};
    void deleteEncryptionContextShrink() { this->encryptionContextShrink_ = nullptr;};
    inline string getEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionContextShrink_, "") };
    inline ExportDataKeyShrinkRequest& setEncryptionContextShrink(string encryptionContextShrink) { DARABONBA_PTR_SET_VALUE(encryptionContextShrink_, encryptionContextShrink) };


    // publicKeyBlob Field Functions 
    bool hasPublicKeyBlob() const { return this->publicKeyBlob_ != nullptr;};
    void deletePublicKeyBlob() { this->publicKeyBlob_ = nullptr;};
    inline string getPublicKeyBlob() const { DARABONBA_PTR_GET_DEFAULT(publicKeyBlob_, "") };
    inline ExportDataKeyShrinkRequest& setPublicKeyBlob(string publicKeyBlob) { DARABONBA_PTR_SET_VALUE(publicKeyBlob_, publicKeyBlob) };


    // wrappingAlgorithm Field Functions 
    bool hasWrappingAlgorithm() const { return this->wrappingAlgorithm_ != nullptr;};
    void deleteWrappingAlgorithm() { this->wrappingAlgorithm_ = nullptr;};
    inline string getWrappingAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(wrappingAlgorithm_, "") };
    inline ExportDataKeyShrinkRequest& setWrappingAlgorithm(string wrappingAlgorithm) { DARABONBA_PTR_SET_VALUE(wrappingAlgorithm_, wrappingAlgorithm) };


    // wrappingKeySpec Field Functions 
    bool hasWrappingKeySpec() const { return this->wrappingKeySpec_ != nullptr;};
    void deleteWrappingKeySpec() { this->wrappingKeySpec_ = nullptr;};
    inline string getWrappingKeySpec() const { DARABONBA_PTR_GET_DEFAULT(wrappingKeySpec_, "") };
    inline ExportDataKeyShrinkRequest& setWrappingKeySpec(string wrappingKeySpec) { DARABONBA_PTR_SET_VALUE(wrappingKeySpec_, wrappingKeySpec) };


  protected:
    // The ciphertext of the data key that is encrypted using a master key (CMK).
    // 
    // This parameter is required.
    shared_ptr<string> ciphertextBlob_ {};
    // Specifies whether to enable the DryRun mode.
    // 
    // - true
    // 
    // - false (default)
    // 
    // The DryRun mode is used to test the API call and verify the permissions on the specified resources and the validity of the request parameters. If you enable the DryRun mode, KMS returns a failure response and a failure reason. The failure reasons include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter was not specified.
    // 
    // - ValidationError: The specified parameters in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // A JSON string that consists of key-value pairs. EncryptionContext is the encryption context that is passed in when the data key is encrypted using a CMK. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    shared_ptr<string> encryptionContextShrink_ {};
    // The public key in Base64 format.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyBlob_ {};
    // The encryption algorithm that is used to encrypt the data key using the public key specified by PublicKeyBlob. For more information about the algorithms, see [AsymmetricDecrypt](https://help.aliyun.com/document_detail/148130.html).<br> Valid values:<br><br>
    // 
    // - RSAES_OAEP_SHA_256
    // 
    // - RSAES_OAEP_SHA_1
    // 
    // - SM2PKE
    // 
    // This parameter is required.
    shared_ptr<string> wrappingAlgorithm_ {};
    // The type of the public key specified by PublicKeyBlob. For more information about key types, see [Introduction to asymmetric keys](https://help.aliyun.com/document_detail/148147.html).<br> Valid values:<br><br>
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
