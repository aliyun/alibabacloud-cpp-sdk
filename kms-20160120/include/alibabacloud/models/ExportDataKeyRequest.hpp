// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTDATAKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTDATAKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ExportDataKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportDataKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_TO_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_TO_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_TO_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    friend void from_json(const Darabonba::Json& j, ExportDataKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_FROM_JSON(PublicKeyBlob, publicKeyBlob_);
      DARABONBA_PTR_FROM_JSON(WrappingAlgorithm, wrappingAlgorithm_);
      DARABONBA_PTR_FROM_JSON(WrappingKeySpec, wrappingKeySpec_);
    };
    ExportDataKeyRequest() = default ;
    ExportDataKeyRequest(const ExportDataKeyRequest &) = default ;
    ExportDataKeyRequest(ExportDataKeyRequest &&) = default ;
    ExportDataKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportDataKeyRequest() = default ;
    ExportDataKeyRequest& operator=(const ExportDataKeyRequest &) = default ;
    ExportDataKeyRequest& operator=(ExportDataKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && return this->dryRun_ == nullptr && return this->encryptionContext_ == nullptr && return this->publicKeyBlob_ == nullptr && return this->wrappingAlgorithm_ == nullptr && return this->wrappingKeySpec_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline ExportDataKeyRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ExportDataKeyRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & encryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & encryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline ExportDataKeyRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline ExportDataKeyRequest& setEncryptionContext(Darabonba::Json & encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


    // publicKeyBlob Field Functions 
    bool hasPublicKeyBlob() const { return this->publicKeyBlob_ != nullptr;};
    void deletePublicKeyBlob() { this->publicKeyBlob_ = nullptr;};
    inline string publicKeyBlob() const { DARABONBA_PTR_GET_DEFAULT(publicKeyBlob_, "") };
    inline ExportDataKeyRequest& setPublicKeyBlob(string publicKeyBlob) { DARABONBA_PTR_SET_VALUE(publicKeyBlob_, publicKeyBlob) };


    // wrappingAlgorithm Field Functions 
    bool hasWrappingAlgorithm() const { return this->wrappingAlgorithm_ != nullptr;};
    void deleteWrappingAlgorithm() { this->wrappingAlgorithm_ = nullptr;};
    inline string wrappingAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(wrappingAlgorithm_, "") };
    inline ExportDataKeyRequest& setWrappingAlgorithm(string wrappingAlgorithm) { DARABONBA_PTR_SET_VALUE(wrappingAlgorithm_, wrappingAlgorithm) };


    // wrappingKeySpec Field Functions 
    bool hasWrappingKeySpec() const { return this->wrappingKeySpec_ != nullptr;};
    void deleteWrappingKeySpec() { this->wrappingKeySpec_ = nullptr;};
    inline string wrappingKeySpec() const { DARABONBA_PTR_GET_DEFAULT(wrappingKeySpec_, "") };
    inline ExportDataKeyRequest& setWrappingKeySpec(string wrappingKeySpec) { DARABONBA_PTR_SET_VALUE(wrappingKeySpec_, wrappingKeySpec) };


  protected:
    // The ciphertext of the data key encrypted by using a CMK.
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
    // A JSON string that consists of key-value pairs. If you specify this parameter when you use a CMK to encrypt the data key, an equivalent value is required here. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    Darabonba::Json encryptionContext_ = nullptr;
    // A Base64-encoded public key.
    // 
    // This parameter is required.
    std::shared_ptr<string> publicKeyBlob_ = nullptr;
    // The encryption algorithm based on which you want to use the public key specified by PublicKeyBlob to encrypt the data key. For more information about encryption algorithms, see [AsymmetricDecrypt](https://help.aliyun.com/document_detail/148130.html).
    // 
    // Valid values:
    // 
    // *   RSAES_OAEP_SHA_256
    // *   RSAES_OAEP_SHA_1
    // *   SM2PKE
    // 
    // This parameter is required.
    std::shared_ptr<string> wrappingAlgorithm_ = nullptr;
    // The key type of the public key specified by PublicKeyBlob. For more information about key types, see [Introduction to asymmetric keys](https://help.aliyun.com/document_detail/148147.html).
    // 
    // Valid values:
    // 
    // *   RSA_2048
    // *   EC_SM2
    // 
    // This parameter is required.
    std::shared_ptr<string> wrappingKeySpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
