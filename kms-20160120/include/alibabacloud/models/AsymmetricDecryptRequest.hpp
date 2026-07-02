// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYMMETRICDECRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYMMETRICDECRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class AsymmetricDecryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsymmetricDecryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, AsymmetricDecryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
    };
    AsymmetricDecryptRequest() = default ;
    AsymmetricDecryptRequest(const AsymmetricDecryptRequest &) = default ;
    AsymmetricDecryptRequest(AsymmetricDecryptRequest &&) = default ;
    AsymmetricDecryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsymmetricDecryptRequest() = default ;
    AsymmetricDecryptRequest& operator=(const AsymmetricDecryptRequest &) = default ;
    AsymmetricDecryptRequest& operator=(AsymmetricDecryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->ciphertextBlob_ == nullptr && this->dryRun_ == nullptr && this->keyId_ == nullptr && this->keyVersionId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline AsymmetricDecryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string getCiphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline AsymmetricDecryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline AsymmetricDecryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricDecryptRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricDecryptRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


  protected:
    // The decryption algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The ciphertext to be decrypted. The ciphertext is encoded in Base64.
    // 
    // > You can generate a ciphertext by calling the [AsymmetricEncrypt](https://help.aliyun.com/document_detail/148131.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> ciphertextBlob_ {};
    // Specifies whether to enable the dry run feature.
    // 
    // - true: enables the dry run feature.
    // 
    // - false: disables the dry run feature. This is the default value.
    // 
    // The dry run feature is used to test API calls, verify the permissions on the specified resources, and check the validity of the request parameters. If you enable the dry run feature, KMS always returns a failure response and the cause of the failure. The causes of the failure include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter is not specified.
    // 
    // - ValidationError: The specified parameter in the request is invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // The ID of the key. You can also specify the alias or Amazon Resource Name (ARN) of the key. For more information about aliases, see [Manage aliases](https://help.aliyun.com/document_detail/480655.html).
    // 
    // > When you access a key in another Alibaba Cloud account, you must specify the ARN of the key. The ARN of a key is in the `acs:kms:${region}:${account}:key/${keyid}` format.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The ID of the key version. The globally unique identifier of the key version.
    // 
    // This parameter is required.
    shared_ptr<string> keyVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
