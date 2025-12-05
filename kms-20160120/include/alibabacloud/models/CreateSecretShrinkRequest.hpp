// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateSecretShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfigShrink_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateSecretShrinkRequest() = default ;
    CreateSecretShrinkRequest(const CreateSecretShrinkRequest &) = default ;
    CreateSecretShrinkRequest(CreateSecretShrinkRequest &&) = default ;
    CreateSecretShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretShrinkRequest() = default ;
    CreateSecretShrinkRequest& operator=(const CreateSecretShrinkRequest &) = default ;
    CreateSecretShrinkRequest& operator=(CreateSecretShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DKMSInstanceId_ == nullptr
        && return this->description_ == nullptr && return this->enableAutomaticRotation_ == nullptr && return this->encryptionKeyId_ == nullptr && return this->extendedConfigShrink_ == nullptr && return this->policy_ == nullptr
        && return this->rotationInterval_ == nullptr && return this->secretData_ == nullptr && return this->secretDataType_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr
        && return this->tags_ == nullptr && return this->versionId_ == nullptr; };
    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretShrinkRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool enableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline CreateSecretShrinkRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string encryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline CreateSecretShrinkRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // extendedConfigShrink Field Functions 
    bool hasExtendedConfigShrink() const { return this->extendedConfigShrink_ != nullptr;};
    void deleteExtendedConfigShrink() { this->extendedConfigShrink_ = nullptr;};
    inline string extendedConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(extendedConfigShrink_, "") };
    inline CreateSecretShrinkRequest& setExtendedConfigShrink(string extendedConfigShrink) { DARABONBA_PTR_SET_VALUE(extendedConfigShrink_, extendedConfigShrink) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateSecretShrinkRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateSecretShrinkRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string secretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline CreateSecretShrinkRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string secretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline CreateSecretShrinkRequest& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretShrinkRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretShrinkRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateSecretShrinkRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSecretShrinkRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The version number of the secret.
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    // Specifies whether to enable automatic rotation. Valid values:
    // 
    // *   true: specifies to enable automatic rotation.
    // *   false: specifies to disable automatic rotation. This is the default value.
    // 
    // >  This parameter is valid if you set the SecretType parameter to Rds, RAMCredentials, or ECS.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether automatic rotation is enabled. Valid values:
    // 
    // *   Enabled: indicates that automatic rotation is enabled.
    // *   Disabled: indicates that automatic rotation is disabled.
    // *   Invalid: indicates that the status of automatic rotation is abnormal. In this case, Secrets Manager cannot automatically rotate the secret.
    // 
    // >  This parameter is returned if you set the SecretType parameter to Rds, RAMCredentials, or ECS.
    std::shared_ptr<bool> enableAutomaticRotation_ = nullptr;
    // The description of the secret.
    std::shared_ptr<string> encryptionKeyId_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> extendedConfigShrink_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The tags of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretData_ = nullptr;
    // The extended configuration of the secret. This parameter specifies the properties of the secret of the specific type. The description can be up to 1,024 characters in length.
    // 
    // *   If you set the SecretType parameter to Generic, you do not need to configure this parameter.
    // 
    // *   If you set the SecretType parameter to Rds, configure the following fields for the ExtendedConfig parameter:
    // 
    //     *   SecretSubType: required. The subtype of the secret. Valid values:
    // 
    //         *   SingleUser: Secrets Manager manages the ApsaraDB RDS secret in single-account mode. When the secret is rotated, the password of the specified account is reset to a new random password.
    //         *   DoubleUsers: Secrets Manager manages the ApsaraDB RDS secret in dual-account mode. One account is referenced by the ACSCurrent version, and the other account is referenced by the ACSPrevious version. When the secret is rotated, the password of the account referenced by the ACSPrevious version is reset to a new random password. Then, Secrets Manager switches the referenced accounts between the ACSCurrent and ACSPrevious versions.
    // 
    //     *   DBInstanceId: required. The ApsaraDB RDS instance to which the ApsaraDB RDS account belongs.
    // 
    //     *   CustomData: optional. The custom data. The value is a collection of key-value pairs in the JSON format. Up to 10 key-value pairs can be specified. Separate multiple key-value pairs with commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. The default value is a pair of empty braces (`{}`).
    // 
    // *   If you set the SecretType parameter to RAMCredentials, configure the following fields for the ExtendedConfig parameter:
    // 
    //     *   SecretSubType: required. The subtype of the secret. Set the value to RamUserAccessKey.
    //     *   UserName: required. The name of the RAM user.
    //     *   CustomData: optional. The custom data. The value is a collection of key-value pairs in the JSON format. Up to 10 key-value pairs can be specified. Separate multiple key-value pairs with commas (,). The default value is a pair of empty braces (`{}`).
    // 
    // *   If you set the SecretType parameter to ECS, configure the following fields for the ExtendedConfig parameter:
    // 
    //     *   SecretSubType: required. The subtype of the secret. Valid values:
    // 
    //         *   Password: the password that is used to log on to the ECS instance.
    //         *   SSHKey: the SSH public key and private key that are used to log on to the ECS instance.
    // 
    //     *   RegionId: required. The ID of the region in which the ECS instance resides.
    // 
    //     *   InstanceId: required. The ID of the ECS instance.
    // 
    //     *   CustomData: optional. The custom data. The value is a collection of key-value pairs in the JSON format. Up to 10 key-value pairs can be specified. Separate multiple key-value pairs with commas (,). The default value is a pair of empty braces (`{}`).
    // 
    // >  This parameter is required if you set the SecretType parameter to Rds, RAMCredentials, or ECS.
    std::shared_ptr<string> secretDataType_ = nullptr;
    // The value of the secret that you want to create. Secrets Manager encrypts the secret value and stores the encrypted value in the initial version.
    // 
    // *   If you set the SecretType parameter to Generic that indicates a generic secret, you can customize the secret value.
    // 
    // *   If you set the SecretType parameter to Rds that indicates a managed ApsaraDB RDS secret, the secret value must be in the format of `{"Accounts":[{"AccountName":"","AccountPassword":""}]}`. In the preceding format, `AccountName` indicates the username of the account that is used to connect to your ApsaraDB RDS instance, and `AccountPassword` specifies the password of the account.
    // 
    // *   If you set the SecretType parameter to RAMCredentials that indicates a managed RAM secret, the secret value must be in the format of `{"AccessKeys":[{"AccessKeyId":"","AccessKeySecret":"",}]}`. In the preceding format, `AccessKeyId` indicates the AccessKey ID of the RAM user and `AccessKeySecret` specifies the AccessKey secret of the RAM user. You must specify all the AccessKey pairs of the RAM user.
    // 
    // *   If you set the SecretType parameter to ECS that indicates a managed ECS secret, the secret value must be in one of the following formats:
    // 
    //     *   `{"UserName":"","Password": ""}`: In the format, `UserName` specifies the username that is used to log on to the ECS instance, and `Password` specifies the password that is used to log on to the ECS instance.
    //     *   `{"UserName":"","PublicKey": "", "PrivateKey": ""}`: In the format, `PublicKey` indicates the SSH public key that is used to log on to the ECS instance, and `PrivateKey` specifies the SSH private key that is used to log on to the ECS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
    // The ID of the dedicated KMS instance.
    std::shared_ptr<string> secretType_ = nullptr;
    // The interval for automatic rotation. Valid values: 6 hours to 8,760 hours (365 days).
    // 
    // The value is in the `integer[unit]` format.
    // 
    // The unit can be d (day), h (hour), m (minute), or s (second). For example, both 7d and 604800s indicate a seven-day interval.
    // 
    // >  This parameter is required if you set the EnableAutomaticRotation parameter to true. This parameter is ignored if you set the EnableAutomaticRotation parameter to false or if the EnableAutomaticRotation parameter is not configured.
    std::shared_ptr<string> tags_ = nullptr;
    // The type of the secret value. Valid values:
    // 
    // *   text
    // *   binary
    // 
    // >  If you set the SecretType parameter to Rds, RAMCredentials, or ECS, the SecretDataType parameter must be set to text.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
