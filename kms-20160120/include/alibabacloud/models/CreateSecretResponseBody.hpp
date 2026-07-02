// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateSecretResponseBody() = default ;
    CreateSecretResponseBody(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody(CreateSecretResponseBody &&) = default ;
    CreateSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretResponseBody() = default ;
    CreateSecretResponseBody& operator=(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody& operator=(CreateSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && this->automaticRotation_ == nullptr && this->DKMSInstanceId_ == nullptr && this->extendedConfig_ == nullptr && this->nextRotationDate_ == nullptr && this->requestId_ == nullptr
        && this->rotationInterval_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr && this->versionId_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateSecretResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string getAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline CreateSecretResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretResponseBody& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline string getExtendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
    inline CreateSecretResponseBody& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string getNextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline CreateSecretResponseBody& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateSecretResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretResponseBody& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSecretResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the secret.
    shared_ptr<string> arn_ {};
    // Indicates whether automatic rotation is enabled. Valid values:
    // 
    // - Enabled: Automatic rotation is enabled.
    // 
    // - Disabled: Automatic rotation is disabled.
    // 
    // - Invalid: The rotation status is abnormal. Secrets Manager cannot automatically rotate the secret for you.
    // 
    // > This parameter is returned if SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS.
    shared_ptr<string> automaticRotation_ {};
    // The ID of the KMS instance.
    shared_ptr<string> DKMSInstanceId_ {};
    // The extended configuration of the secret.
    // 
    // > This parameter is returned if SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS.
    shared_ptr<string> extendedConfig_ {};
    // The time when the secret is next rotated.
    // 
    // > This parameter is returned if automatic rotation is enabled.
    shared_ptr<string> nextRotationDate_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The interval for automatic rotation.<br>
    // The value is in the `integer[unit]` format. `integer` indicates the interval. `unit` indicates the unit of time. The unit is s (second). For example, a rotation interval of 7 days is 604800s.<br>
    // 
    // > This parameter is returned if automatic rotation is enabled.
    shared_ptr<string> rotationInterval_ {};
    // The name of the secret.
    shared_ptr<string> secretName_ {};
    // The type of the secret. Valid values:
    // 
    // - Generic: a generic secret.
    // 
    // - Rds: an RDS secret.
    // 
    // - Redis: a Redis secret.
    // 
    // - RAMCredentials: a RAM secret.
    // 
    // - ECS: an ECS secret.
    // 
    // - PolarDB: a PolarDB secret.
    shared_ptr<string> secretType_ {};
    // The version number of the secret.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
