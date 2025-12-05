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
        && return this->dryRun_ == nullptr && return this->keyId_ == nullptr && return this->keyVersionId_ == nullptr && return this->plaintext_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline AsymmetricEncryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline AsymmetricEncryptRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricEncryptRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricEncryptRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline AsymmetricEncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The encryption algorithm.
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    // 
    // >  You can also set this parameter to an alias that is bound to the CMK. For more information, see [Overview of aliases](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> keyId_ = nullptr;
    // The version ID of the CMK. The ID must be globally unique.
    // 
    // >  You can call the [ListKeyVersions](https://help.aliyun.com/document_detail/133966.html) operation to query the versions of a CMK. The ID of a version is specified by the KeyVersionId parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The plaintext that you want to encrypt. The plaintext must be Base64-encoded.
    // 
    // This parameter is required.
    std::shared_ptr<string> plaintext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
