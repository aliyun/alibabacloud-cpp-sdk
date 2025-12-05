// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DecryptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionContext, encryptionContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionContext, encryptionContextShrink_);
    };
    DecryptShrinkRequest() = default ;
    DecryptShrinkRequest(const DecryptShrinkRequest &) = default ;
    DecryptShrinkRequest(DecryptShrinkRequest &&) = default ;
    DecryptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptShrinkRequest() = default ;
    DecryptShrinkRequest& operator=(const DecryptShrinkRequest &) = default ;
    DecryptShrinkRequest& operator=(DecryptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && return this->dryRun_ == nullptr && return this->encryptionContextShrink_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline DecryptShrinkRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline DecryptShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContextShrink Field Functions 
    bool hasEncryptionContextShrink() const { return this->encryptionContextShrink_ != nullptr;};
    void deleteEncryptionContextShrink() { this->encryptionContextShrink_ = nullptr;};
    inline string encryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionContextShrink_, "") };
    inline DecryptShrinkRequest& setEncryptionContextShrink(string encryptionContextShrink) { DARABONBA_PTR_SET_VALUE(encryptionContextShrink_, encryptionContextShrink) };


  protected:
    // The ciphertext that you want to decrypt.
    // 
    // You can generate the ciphertext by calling the following operations:
    // 
    // *   [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html)
    // *   [Encrypt](https://help.aliyun.com/document_detail/28949.html)
    // *   [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html)
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
    // The JSON string that consists of key-value pairs.
    // 
    // >  If you specify the EncryptionContext parameter when you call the [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html), [Encrypt](https://help.aliyun.com/document_detail/28949.html), or [GenerateDataKeyWithoutPlaintext](https://help.aliyun.com/document_detail/134043.html) operation, you must specify the same context when you call the Decrypt operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    std::shared_ptr<string> encryptionContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
