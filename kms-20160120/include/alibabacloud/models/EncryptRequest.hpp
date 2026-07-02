// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class EncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    EncryptRequest() = default ;
    EncryptRequest(const EncryptRequest &) = default ;
    EncryptRequest(EncryptRequest &&) = default ;
    EncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptRequest() = default ;
    EncryptRequest& operator=(const EncryptRequest &) = default ;
    EncryptRequest& operator=(EncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->encryptionContext_ == nullptr && this->keyId_ == nullptr && this->plaintext_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline EncryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & getEncryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & getEncryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline EncryptRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline EncryptRequest& setEncryptionContext(Darabonba::Json && encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline EncryptRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline EncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


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
    Darabonba::Json encryptionContext_ {};
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
