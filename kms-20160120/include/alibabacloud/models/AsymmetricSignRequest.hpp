// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYMMETRICSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYMMETRICSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class AsymmetricSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsymmetricSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, AsymmetricSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
    };
    AsymmetricSignRequest() = default ;
    AsymmetricSignRequest(const AsymmetricSignRequest &) = default ;
    AsymmetricSignRequest(AsymmetricSignRequest &&) = default ;
    AsymmetricSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsymmetricSignRequest() = default ;
    AsymmetricSignRequest& operator=(const AsymmetricSignRequest &) = default ;
    AsymmetricSignRequest& operator=(AsymmetricSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->digest_ == nullptr && this->dryRun_ == nullptr && this->keyId_ == nullptr && this->keyVersionId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline AsymmetricSignRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline AsymmetricSignRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline AsymmetricSignRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricSignRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricSignRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


  protected:
    // The signature algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The digest of the original message. The digest is generated using the hash algorithm that corresponds to the value of the Algorithm parameter.
    // 
    // > - The value is Base64-encoded.
    // 
    // - For information about how to calculate a message digest, see the "Pre-signing: calculate a message digest" section of the [Asymmetric digital signature](https://help.aliyun.com/document_detail/148146.html) topic.
    // 
    // This parameter is required.
    shared_ptr<string> digest_ {};
    // Specifies whether to enable the dry-run feature.
    // 
    // - true: enables the feature.
    // 
    // - false (default): disables the feature.
    // 
    // The dry-run feature is used to test API calls and verify the permissions on the resources that you have and the validity of the request parameters. If you enable the dry-run feature, KMS always returns a failure response and a failure reason. The failure reasons include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter is not configured.
    // 
    // - ValidationError: The specified parameters in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // The globally unique identifier (GUID) of the customer master key (CMK).
    // 
    // > You can also specify the alias that is bound to the CMK. For more information, see [Overview of aliases](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The ID of the key version. The ID must be the GUID of the key version.
    // 
    // This parameter is required.
    shared_ptr<string> keyVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
