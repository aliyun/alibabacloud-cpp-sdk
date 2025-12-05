// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROTATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROTATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class RotateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RotateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, RotateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    RotateSecretRequest() = default ;
    RotateSecretRequest(const RotateSecretRequest &) = default ;
    RotateSecretRequest(RotateSecretRequest &&) = default ;
    RotateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RotateSecretRequest() = default ;
    RotateSecretRequest& operator=(const RotateSecretRequest &) = default ;
    RotateSecretRequest& operator=(RotateSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretName_ == nullptr
        && return this->versionId_ == nullptr; };
    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline RotateSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline RotateSecretRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
    // The version number of the secret after the secret is rotated.
    // 
    // >  The version number is used to ensure the idempotence of the request. Secrets Manager uses this version number to prevent your application from creating the same version of the secret when the application retries a request. If a version number already exists, Secrets Manager ignores the request for rotation and returns a success message.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
