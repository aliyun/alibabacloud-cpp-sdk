// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYMMETRICENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYMMETRICENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class AsymmetricEncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsymmetricEncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, AsymmetricEncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    AsymmetricEncryptRequest() = default ;
    AsymmetricEncryptRequest(const AsymmetricEncryptRequest &) = default ;
    AsymmetricEncryptRequest(AsymmetricEncryptRequest &&) = default ;
    AsymmetricEncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsymmetricEncryptRequest() = default ;
    AsymmetricEncryptRequest& operator=(const AsymmetricEncryptRequest &) = default ;
    AsymmetricEncryptRequest& operator=(AsymmetricEncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->dryRun_ == nullptr && this->keyId_ == nullptr && this->keyVersionId_ == nullptr && this->plaintext_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline AsymmetricEncryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline AsymmetricEncryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricEncryptRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricEncryptRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline AsymmetricEncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The encryption algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // Specifies whether to enable the dry run mode. Valid values:
    // 
    // - true: enables the dry run mode.
    // - false: disables the dry run mode. This is the default value.
    // 
    // The dry run mode is used to test API calls and verify whether you have the required permissions on the resources and whether the request parameters are correctly configured. When the dry run mode is enabled, KMS always returns a failure and provides the cause of the failure. The causes include:
    // 
    // - DryRunOperationError: The request would succeed if the DryRun parameter is not configured.
    // - ValidationError: A specified parameter in the request is invalid.
    // - AccessDeniedError: You do not have permissions to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // The ID of the key. You can also specify the alias or Alibaba Cloud Resource Name (ARN) of the key. For more information about aliases, see [Manage key aliases](https://help.aliyun.com/document_detail/480655.html).
    // > To access a key that belongs to another Alibaba Cloud account, you must enter the ARN of the key. The ARN of a key is in the `acs:kms:${region}:${account}:key/${keyid}` format.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The ID of the key version. The globally unique identifier of the key version.  
    // 
    // > You can call the [ListKeyVersions](https://help.aliyun.com/document_detail/133966.html) operation to obtain the key version ID.
    // 
    // This parameter is required.
    shared_ptr<string> keyVersionId_ {};
    // The plaintext to be encrypted. The plaintext must be Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> plaintext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
