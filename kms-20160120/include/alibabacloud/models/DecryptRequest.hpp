// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DecryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
    };
    DecryptRequest() = default ;
    DecryptRequest(const DecryptRequest &) = default ;
    DecryptRequest(DecryptRequest &&) = default ;
    DecryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptRequest() = default ;
    DecryptRequest& operator=(const DecryptRequest &) = default ;
    DecryptRequest& operator=(DecryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr
        && return this->dryRun_ == nullptr && return this->encryptionContext_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline DecryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline DecryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & encryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & encryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline DecryptRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline DecryptRequest& setEncryptionContext(Darabonba::Json & encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


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
    Darabonba::Json encryptionContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
