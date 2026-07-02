// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class EncryptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionContext, encryptionContextShrink_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    EncryptShrinkRequest() = default ;
    EncryptShrinkRequest(const EncryptShrinkRequest &) = default ;
    EncryptShrinkRequest(EncryptShrinkRequest &&) = default ;
    EncryptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptShrinkRequest() = default ;
    EncryptShrinkRequest& operator=(const EncryptShrinkRequest &) = default ;
    EncryptShrinkRequest& operator=(EncryptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->encryptionContextShrink_ == nullptr && this->keyId_ == nullptr && this->plaintext_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline EncryptShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContextShrink Field Functions 
    bool hasEncryptionContextShrink() const { return this->encryptionContextShrink_ != nullptr;};
    void deleteEncryptionContextShrink() { this->encryptionContextShrink_ = nullptr;};
    inline string getEncryptionContextShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionContextShrink_, "") };
    inline EncryptShrinkRequest& setEncryptionContextShrink(string encryptionContextShrink) { DARABONBA_PTR_SET_VALUE(encryptionContextShrink_, encryptionContextShrink) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline EncryptShrinkRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline EncryptShrinkRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // Specifies whether to enable the dry run feature.
    // 
    // - true: enables the dry run feature.
    // 
    // - false (default): disables the dry run feature.
    // 
    // The dry run feature is used to test API calls and verify the permissions on the resources that you have and the validity of the request parameters. You can view the check results in the response.
    // 
    // - DryRunOperationError: The permissions and parameters are valid. If you do not specify the DryRun parameter, the request is successful.
    // 
    // - ValidationError: The parameters in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // A JSON string that consists of key-value pairs. If you specify this parameter, you must specify the same parameter when you call the Decrypt operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    shared_ptr<string> encryptionContextShrink_ {};
    // The ID of the key. You can also specify the alias or Amazon Resource Name (ARN) of the key. For more information about aliases, see [Manage aliases](https://help.aliyun.com/document_detail/480655.html).
    // 
    // > When you access a key in another Alibaba Cloud account, you must specify the ARN of the key. The ARN of a key is in the `acs:kms:${region}:${account}:key/${keyid}` format.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The plaintext to be encrypted. The plaintext must be Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> plaintext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
