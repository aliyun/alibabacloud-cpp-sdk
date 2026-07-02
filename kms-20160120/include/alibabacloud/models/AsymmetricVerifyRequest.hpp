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
    // The digest that is generated using the hash algorithm that corresponds to the value of **Algorithm** to hash the original message.
    // 
    // > The value is Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> digest_ {};
    // Specifies whether to perform a dry run.
    // 
    // - true: performs a dry run.
    // 
    // - false (default): does not perform a dry run.
    // 
    // A dry run is used to test API calls and verify whether you have the permissions to access the specified resources and whether the request parameters are valid. If you perform a dry run, KMS always returns a failure response that indicates the cause of the failure. The following failure causes are included:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter is not specified.
    // 
    // - ValidationError: The specified parameters in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
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
