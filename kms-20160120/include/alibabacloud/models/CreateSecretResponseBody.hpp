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
        && return this->automaticRotation_ == nullptr && return this->DKMSInstanceId_ == nullptr && return this->extendedConfig_ == nullptr && return this->nextRotationDate_ == nullptr && return this->requestId_ == nullptr
        && return this->rotationInterval_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr && return this->versionId_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateSecretResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string automaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline CreateSecretResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretResponseBody& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline string extendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
    inline CreateSecretResponseBody& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string nextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline CreateSecretResponseBody& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateSecretResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretResponseBody& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSecretResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    // The type of the secret. Valid values:
    // 
    // *   Generic: indicates a generic secret.
    // *   Rds: indicates a managed ApsaraDB RDS secret.
    // *   RAMCredentials: indicates a managed RAM secret.
    // *   ECS: indicates a managed ECS secret.
    std::shared_ptr<string> automaticRotation_ = nullptr;
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    std::shared_ptr<string> extendedConfig_ = nullptr;
    // The extended configuration of the secret.
    // 
    // >  This parameter is returned if you set the SecretType parameter to Rds, RAMCredentials, or ECS.
    std::shared_ptr<string> nextRotationDate_ = nullptr;
    // The time when the next rotation will be performed.
    // 
    // >  This parameter is returned if automatic rotation is enabled.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The interval for automatic rotation.
    // 
    // The value is in the `integer[unit]` format. The value of the `unit` field is fixed as s. For example, if the value is 604800s, automatic rotation is performed at a 7-day interval.
    // 
    // >  This parameter is returned if automatic rotation is enabled.
    std::shared_ptr<string> secretName_ = nullptr;
    // The ID of the dedicated KMS instance.
    std::shared_ptr<string> secretType_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the secret.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
