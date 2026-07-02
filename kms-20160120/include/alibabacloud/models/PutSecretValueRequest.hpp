// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSECRETVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTSECRETVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class PutSecretValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutSecretValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
    };
    friend void from_json(const Darabonba::Json& j, PutSecretValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
    };
    PutSecretValueRequest() = default ;
    PutSecretValueRequest(const PutSecretValueRequest &) = default ;
    PutSecretValueRequest(PutSecretValueRequest &&) = default ;
    PutSecretValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutSecretValueRequest() = default ;
    PutSecretValueRequest& operator=(const PutSecretValueRequest &) = default ;
    PutSecretValueRequest& operator=(PutSecretValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretData_ == nullptr
        && this->secretDataType_ == nullptr && this->secretName_ == nullptr && this->versionId_ == nullptr && this->versionStages_ == nullptr; };
    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline PutSecretValueRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string getSecretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline PutSecretValueRequest& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline PutSecretValueRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline PutSecretValueRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline string getVersionStages() const { DARABONBA_PTR_GET_DEFAULT(versionStages_, "") };
    inline PutSecretValueRequest& setVersionStages(string versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };


  protected:
    // The secret value. The value is encrypted and stored in the specified new version.
    // 
    // This parameter is required.
    shared_ptr<string> secretData_ {};
    // The type of the secret value. Valid values:
    // 
    // - text (default)
    // 
    // - binary
    shared_ptr<string> secretDataType_ {};
    // The name or Alibaba Cloud Resource Name (ARN) of the secret.
    // 
    // > When you access a secret in another Alibaba Cloud account, you must specify the ARN of the secret. The ARN of a secret is in the format of `acs:kms:${region}:${account}:secret/${secret-name}`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The version number of the secret. The value must be unique in the secret.
    // 
    // This parameter is required.
    shared_ptr<string> versionId_ {};
    // The stage labels that are used to mark the new version. If you do not specify this parameter, KMS marks the new version with ACSCurrent.
    shared_ptr<string> versionStages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
