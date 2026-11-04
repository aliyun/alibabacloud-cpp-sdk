// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYMMETRICVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYMMETRICVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class AsymmetricVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsymmetricVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AsymmetricVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AsymmetricVerifyRequest() = default ;
    AsymmetricVerifyRequest(const AsymmetricVerifyRequest &) = default ;
    AsymmetricVerifyRequest(AsymmetricVerifyRequest &&) = default ;
    AsymmetricVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsymmetricVerifyRequest() = default ;
    AsymmetricVerifyRequest& operator=(const AsymmetricVerifyRequest &) = default ;
    AsymmetricVerifyRequest& operator=(AsymmetricVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->digest_ == nullptr && this->dryRun_ == nullptr && this->keyId_ == nullptr && this->keyVersionId_ == nullptr && this->value_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline AsymmetricVerifyRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline AsymmetricVerifyRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline AsymmetricVerifyRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricVerifyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricVerifyRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AsymmetricVerifyRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The signature algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The digest generated for the original message by using the hash algorithm that corresponds to the **Algorithm** parameter.
    // 
    // > The value is Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> digest_ {};
    // Specifies whether to enable the DryRun mode. Valid values:
    // 
    // - true: Enabled.
    // - false (default): Disabled.
    // 
    // The DryRun mode is used to test API calls, verify whether you have the required permissions on the resources, and check whether the request parameters are correctly configured. When the DryRun mode is enabled, KMS always returns a failure and provides the cause of the failure. The causes include:
    // 
    // - DryRunOperationError: The request would succeed if the DryRun parameter is not configured.
    // - ValidationError: The specified parameters in the request are invalid.
    // - AccessDeniedError: You are not authorized to perform the operation on the KMS resources.
    shared_ptr<string> dryRun_ {};
    // The globally unique identifier of the customer master key (CMK).
    // 
    // > You can also set this parameter to the alias that is bound to the CMK. For more information, see [Usage notes for aliases](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The key version ID. The globally unique identifier of the key version.
    // 
    // This parameter is required.
    shared_ptr<string> keyVersionId_ {};
    // The signature value to be verified.
    // 
    // > The value is Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
