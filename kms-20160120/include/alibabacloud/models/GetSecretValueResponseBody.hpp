// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSecretValueResponseBodyVersionStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_TO_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(VersionStages, versionStages_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_FROM_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(VersionStages, versionStages_);
    };
    GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody(GetSecretValueResponseBody &&) = default ;
    GetSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody& operator=(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody& operator=(GetSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->automaticRotation_ == nullptr
        && return this->createTime_ == nullptr && return this->extendedConfig_ == nullptr && return this->lastRotationDate_ == nullptr && return this->nextRotationDate_ == nullptr && return this->requestId_ == nullptr
        && return this->rotationInterval_ == nullptr && return this->secretData_ == nullptr && return this->secretDataType_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr
        && return this->versionId_ == nullptr && return this->versionStages_ == nullptr; };
    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string automaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline GetSecretValueResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSecretValueResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline string extendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
    inline GetSecretValueResponseBody& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


    // lastRotationDate Field Functions 
    bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
    void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
    inline string lastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
    inline GetSecretValueResponseBody& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string nextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline GetSecretValueResponseBody& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline GetSecretValueResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string secretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline GetSecretValueResponseBody& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string secretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline GetSecretValueResponseBody& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline GetSecretValueResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline GetSecretValueResponseBody& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSecretValueResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versionStages Field Functions 
    bool hasVersionStages() const { return this->versionStages_ != nullptr;};
    void deleteVersionStages() { this->versionStages_ = nullptr;};
    inline const GetSecretValueResponseBodyVersionStages & versionStages() const { DARABONBA_PTR_GET_CONST(versionStages_, GetSecretValueResponseBodyVersionStages) };
    inline GetSecretValueResponseBodyVersionStages versionStages() { DARABONBA_PTR_GET(versionStages_, GetSecretValueResponseBodyVersionStages) };
    inline GetSecretValueResponseBody& setVersionStages(const GetSecretValueResponseBodyVersionStages & versionStages) { DARABONBA_PTR_SET_VALUE(versionStages_, versionStages) };
    inline GetSecretValueResponseBody& setVersionStages(GetSecretValueResponseBodyVersionStages && versionStages) { DARABONBA_PTR_SET_RVALUE(versionStages_, versionStages) };


  protected:
    // Indicates whether automatic rotation is enabled. Valid values:
    // 
    // *   Enabled: indicates that automatic rotation is enabled.
    // *   Disabled: indicates that automatic rotation is disabled.
    // *   Invalid: indicates that the status of automatic rotation is abnormal. In this case, Secrets Manager cannot automatically rotate the secret.
    // 
    // >  This parameter is returned only for a managed ApsaraDB RDS secret, a managed RAM secret, or a managed ECS secret.
    std::shared_ptr<string> automaticRotation_ = nullptr;
    // The time when the secret was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The extended configuration of the secret.
    // 
    // >  This parameter is returned if you set the FetchExtendedConfig parameter to true. This parameter is returned only for a managed ApsaraDB RDS secret, a managed RAM secret, or a managed ECS secret.
    std::shared_ptr<string> extendedConfig_ = nullptr;
    // The time when the last rotation was performed.
    // 
    // >  This parameter is returned if the secret was rotated.
    std::shared_ptr<string> lastRotationDate_ = nullptr;
    // The time when the next rotation will be performed.
    // 
    // >  This parameter is returned if automatic rotation is enabled.
    std::shared_ptr<string> nextRotationDate_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The interval for automatic rotation.
    // 
    // The value is in the `integer[unit]` format. The `unit` field has a fixed value of s. For example, if the value is 604800s, automatic rotation is performed at a 7-day interval.
    // 
    // >  This parameter is returned if automatic rotation is enabled.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The secret value. Secrets Manager decrypts the ciphertext of the secret value and returns the plaintext of the secret value in this parameter.
    // 
    // *   For a generic secret, the secret value of the specified version is returned.
    // 
    // *   For a managed ApsaraDB RDS secret, the value is returned in the following format:`{"AccountName":"","AccountPassword":""}` .
    // 
    // *   For a managed RAM secret, the secret value is returned in the following format: `{"AccessKeyId":"Adfdsfd","AccessKeySecret":"fdsfdsf","GenerateTimestamp": "2016-03-25T10:42:40Z"}`.
    // 
    // *   For a managed ECS secret, the secret value is returned in one of the following formats:
    // 
    //     *   `{"UserName":"root","Password":"H5asdasdsads****"}`: The secret value is returned in this format if the ECS secret is a password.
    //     *   `{"UserName":"root","PublicKey":"ssh-rsa ****mKwnVix9YTFY9Rs= imported-openssh-key","PrivateKey": "d6bee1cb-2e14-4277-ba6b-73786b21****"}`: The secret value is returned in this format is the ECS secret is a pair of SSH keys. The private key is in the Privacy Enhanced Mail (PEM) format.
    std::shared_ptr<string> secretData_ = nullptr;
    // The type of the secret value. Valid values:
    // 
    // *   text
    // *   binary
    std::shared_ptr<string> secretDataType_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The type of the secret. Valid values:
    // 
    // *   Generic: indicates a generic secret.
    // *   Rds: indicates a managed ApsaraDB RDS secret.
    // *   RAMCredentials: indicates a managed RAM secret.
    // *   ECS: indicates a managed ECS secret.
    std::shared_ptr<string> secretType_ = nullptr;
    // The version number of the secret value.
    std::shared_ptr<string> versionId_ = nullptr;
    // The stage labels that mark the secret versions.
    std::shared_ptr<GetSecretValueResponseBodyVersionStages> versionStages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
