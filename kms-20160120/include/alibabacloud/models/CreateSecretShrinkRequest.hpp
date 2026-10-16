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
        && this->description_ == nullptr && this->enableAutomaticRotation_ == nullptr && this->encryptionKeyId_ == nullptr && this->extendedConfigShrink_ == nullptr && this->policy_ == nullptr
        && this->rotationInterval_ == nullptr && this->secretData_ == nullptr && this->secretDataType_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr
        && this->tags_ == nullptr && this->versionId_ == nullptr; };
    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretShrinkRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool getEnableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline CreateSecretShrinkRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline CreateSecretShrinkRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // extendedConfigShrink Field Functions 
    bool hasExtendedConfigShrink() const { return this->extendedConfigShrink_ != nullptr;};
    void deleteExtendedConfigShrink() { this->extendedConfigShrink_ = nullptr;};
    inline string getExtendedConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(extendedConfigShrink_, "") };
    inline CreateSecretShrinkRequest& setExtendedConfigShrink(string extendedConfigShrink) { DARABONBA_PTR_SET_VALUE(extendedConfigShrink_, extendedConfigShrink) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateSecretShrinkRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateSecretShrinkRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline CreateSecretShrinkRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string getSecretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline CreateSecretShrinkRequest& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretShrinkRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretShrinkRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateSecretShrinkRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSecretShrinkRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The instance ID of the KMS instance.
    shared_ptr<string> DKMSInstanceId_ {};
    // The description of the secret.
    shared_ptr<string> description_ {};
    // Specifies whether to enable automatic rotation. Valid values:
    // - true: enables automatic rotation.
    // - false: disables automatic rotation. This is the default value.
    // 
    // 
    // > This parameter takes effect only when SecretType is set to Rds (ApsaraDB RDS secret), PolarDB (PolarDB secret), Redis (Redis secret), RAMCredentials (RAM secret), or ECS (ECS secret). When SecretType is set to Generic (generic secret), automatic rotation is not supported. You can call the [PutSecretValue](https://help.aliyun.com/document_detail/154503.html) operation to manually rotate the secret.
    shared_ptr<bool> enableAutomaticRotation_ {};
    // The ID of the key used to encrypt the secret value.
    // 
    // > The key and the secret must belong to the same KMS instance, and the key must be a symmetric key.
    shared_ptr<string> encryptionKeyId_ {};
    // The extended configuration of the secret, which is used to specify the property of a specific secret type. The value can be up to 1,024 characters in length.
    // 
    // - When SecretType is set to Generic (generic secret), this parameter is ignored.
    // 
    // - When SecretType is set to Rds (ApsaraDB RDS secret), you must specify the following parameters in ExtendedConfig:
    //      - SecretSubType (required): the child class of the secret. Valid values:  
    // 
    //         - SingleUser: specifies that Secrets Manager manages the ApsaraDB RDS secret in single-account pattern. During secret rotation, the password of the specified account is reset to a new random password.
    //         - DoubleUsers: specifies that Secrets Manager manages the ApsaraDB RDS secret in dual-account pattern. ACSCurrent and ACSPrevious reference one account each. During secret rotation, the password of the account referenced by ACSPrevious is reset to a new random password, and then Secrets Manager swaps the accounts referenced by ACSCurrent and ACSPrevious.
    //     - DBInstanceId (required): instance ID of the ApsaraDB RDS instance to which the account belongs.
    //     - CustomData (optional): custom data. The value is a JSON-formatted key-value pair. You can specify up to 10 key-value pairs, separated by commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. Default value: `{}`.  
    // 
    // - When SecretType is set to Redis (Redis secret), you must specify the following parameters in ExtendedConfig:
    //     - SecretSubType (required): the child class of the secret. Valid values:  
    //         - DoubleUsers: specifies that Secrets Manager manages the Redis secret in dual-account pattern. ACSCurrent and ACSPrevious reference one account each. During secret rotation, the password of the account referenced by ACSPrevious is reset to a new random password, and then Secrets Manager swaps the accounts referenced by ACSCurrent and ACSPrevious.
    //     - AccountName (required): the database username.
    //     - CloneAccountName (required): the database username, which is the value of AccountName appended with the `_clone` suffix.
    //     - AccountPrivilege (required): the permissions to access the database.
    //     - InstanceId (required): instance ID of the Redis instance.
    //     - RegionId (required): the region ID of the Redis instance.
    //     - CustomData (optional): custom data. The value is a JSON-formatted key-value pair. You can specify up to 10 key-value pairs, separated by commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. Default value: `{}`.  
    // 
    // - When SecretType is set to RAMCredentials (RAM secret), you must specify the following parameters in ExtendedConfig:
    //     - SecretSubType (required): the child class of the secret. Valid value: RamUserAccessKey.
    //     - UserName (required): the name of the Resource Access Management (RAM) user.
    //     - CustomData (optional): custom data. The value is a JSON-formatted key-value pair. You can specify up to 10 key-value pairs, separated by commas (,). Default value: `{}`.  
    // - When SecretType is set to ECS (ECS secret), you must specify the following parameters in ExtendedConfig:
    //     - SecretSubType (required): the child class of the secret. Valid values:  
    // 
    //         - Password: ECS password.
    //         - SSHKey: ECS SSH public and private keys.
    //     - RegionId (required): the region ID of the ECS instance.  
    //     - InstanceId (required): instance ID of the ECS instance.
    //     - CustomData (optional): custom data. The value is a JSON-formatted key-value pair. You can specify up to 10 key-value pairs, separated by commas (,). Default value: `{}`.    
    // - When SecretType is set to PolarDB, you must specify the following parameters in ExtendedConfig:
    //     - SecretSubType (required): DoubleUsers (fixed value).
    // 
    //     - RegionId (required): the region ID.
    // 
    //     - DBClusterId (required): instance ID of the PolarDB cluster.
    // 
    //     - DBType (required): MySQL or PostgreSQL.
    // 
    //     - AccountName (required): the account name.
    // 
    //     - CloneAccountName: the value of AccountName appended with `_clone`.
    // 
    //     - AccountType: the account type. Only Normal is supported.
    // 
    //     - AccountPrivilege: the account permissions. This parameter is available only for MySQL.
    // 
    //     - DBName: the database name. This parameter is available only for MySQL.
    // 
    //     - CustomData (optional): custom data. The value is a JSON-formatted key-value pair. You can specify up to 10 key-value pairs, separated by commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. Default value: `{}`.
    // 
    // > When SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS, you must set this parameter.
    shared_ptr<string> extendedConfigShrink_ {};
    // The content of the access policy in JSON format. The maximum length is 32,768 bytes.
    // 
    // For more information about secret policies, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html). If you do not specify this parameter, the default access policy is used.
    // 
    // The access policy includes the following fields:
    // 
    // - Version: the version of the access policy. Currently, only version 1 is supported.
    // - Statement: the statements in the access policy. Each access policy contains one or more statements.
    // 
    // The access policy uses the following format:
    // 
    // ```
    // {
    //     "Version": "1",
    //     "Statement": [
    //         {
    //             "Sid": "Enable RAM User Permissions",
    //             "Effect": "Allow",
    //             "Principal": {
    //               "RAM": ["acs:ram::12345678****:*"]
    //             },
    //             "Action": [
    //                 "kms:*"
    //             ],
    //             "Resource": [
    //                 "*"
    //             ]
    //         }
    //     ]
    // }
    // ```
    // 
    // Statement details:
    // - Sid: optional. The custom statement identifier. The value can be up to 128 characters in length and can contain uppercase letters (A-Z), lowercase letters (a-z), digits (0-9), and special characters (_/+=.@-).
    // - Effect: required. Specifies whether to allow or deny the permissions in the policy statement. Valid values: Allow and Deny.
    // 
    // - Principal: required. The principal to which the policy is attached. You can set this field to the current Alibaba Cloud account (the account to which the secret belongs), a RAM user or RAM role under the current Alibaba Cloud account, or a RAM user or RAM role under another Alibaba Cloud account.
    // 
    // - Action: required. The API operations to allow or deny. The value must start with "kms:". For the list of available operations, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html). If you specify an operation that is not in the list, the setting does not take effect.
    // 
    // - Resource: required. The value can only be *, which indicates the current KMS secret.
    // 
    // - Condition: optional. The conditions that must be met for the authorization to take effect. You can use conditions to evaluate the context of an API request to determine whether the policy statement applies. The format is `"Condition": {"condition operator": {"condition key": "condition value"}}`. For more information, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html).
    // 
    // > After you grant Resource Access Management (RAM) user or RAM role under another Alibaba Cloud account, you must also use the Alibaba Cloud account of the RAM user or RAM role to authorize them to use the secret in the RAM console. Only then can the RAM user or RAM role use the secret. For more information, see [Custom policy examples for Key Management Service](https://help.aliyun.com/document_detail/480682.html), [Grant Resource Access Management (RAM) user](https://help.aliyun.com/document_detail/116146.html), and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    shared_ptr<string> policy_ {};
    // The interval for automatic rotation. Valid values: 6 hours to 8,760 hours (365 days).  
    // The value must be in the `integer[unit]` format. `integer` specifies the time length, and `unit` specifies the time unit.  
    // Valid values for `unit`: d (days), h (hours), m (minutes), and s (seconds). For example, both 7d and 604,800s indicate a 7-day interval.  
    // 
    // > You must set this parameter only when EnableAutomaticRotation is set to true.
    shared_ptr<string> rotationInterval_ {};
    // The secret value. The value can be up to 30,720 bytes (30 KB) in length. KMS encrypts the value by using the specified key and stores it in the initial version.
    // 
    // - When SecretType is set to Generic (generic secret), you can customize the secret value.
    // 
    // - When SecretType is set to Rds (ApsaraDB RDS secret), the secret value must be in the following format: `{"Accounts":[{"AccountName":"","AccountPassword":""}]}`. `AccountName` specifies the username of the ApsaraDB RDS instance, and `AccountPassword` specifies the password of the account.  
    // - When SecretType is set to Redis (Redis secret), set this parameter to `$Auto`.
    // 
    // - When SecretType is set to RAMCredentials (RAM secret), the secret value must be in the following format: `{"AccessKeys":[{"AccessKeyId":"","AccessKeySecret":""}]}`. `AccessKeyId` specifies the AccessKey ID, and `AccessKeySecret` specifies the AccessKey secret. You must specify all AccessKey pairs of the Resource Access Management (RAM) user.
    // 
    // - When SecretType is set to PolarDB, set this parameter to `$Auto`.
    // 
    // - When SecretType is set to ECS (ECS secret), the secret value must be in one of the following formats:  
    // 
    //    - When SecretSubType in the ExtendedConfig parameter is set to Password: `{"UserName":"","Password": ""}`. `UserName` specifies the username used to log on to the ECS instance, and `Password` specifies the logon password.  
    // 
    //    - When SecretSubType in the ExtendedConfig parameter is set to SSHKey: `{"UserName":"","PublicKey": "", "PrivateKey": ""}`. `PublicKey` specifies the SSH public key used to log on to the ECS instance, and `PrivateKey` specifies the private key.
    // 
    // This parameter is required.
    shared_ptr<string> secretData_ {};
    // The type of the secret value. Valid values:
    // - text: text. This is the default value.
    // - binary: binary data.
    // 
    // > When SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS, SecretDataType can only be set to text.
    shared_ptr<string> secretDataType_ {};
    // The secret name. The secret name must be unique within the current region.
    // The name can be up to 192 characters in length and can contain letters, digits, underscores (_), forward slashes (/), plus signs (+), equal signs (=), periods (.), hyphens (-), and at signs (@). The naming requirements vary based on the secret type:  
    // 
    // - When SecretType is set to Generic (generic secret), Rds (ApsaraDB RDS secret), or Redis (Redis or Tair secret), the name cannot start with `acs/`.  
    // 
    // - When SecretType is set to RAMCredentials (RAM secret), use the fixed value `$Auto`. In this case, KMS automatically generates the secret name, which starts with `acs/ram/user/` and includes the display name of the Resource Access Management (RAM) user.
    // 
    // - When SecretType is set to ECS (ECS secret), the name must start with `acs/ecs/`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The type of the secret. Valid values:
    // 
    // - Generic: generic secret. This is the default value.  
    // - Rds: ApsaraDB RDS secret.  
    // 
    // - Redis: Redis secret.
    // 
    // - RAMCredentials: RAM secret.  
    // 
    // - ECS: ECS secret.
    // 
    // - PolarDB: PolarDB secret.
    shared_ptr<string> secretType_ {};
    // The tags of the secret. Each tag is a key-value pair that consists of a tag key and a tag value.
    // 
    // The tag key and tag value can be up to 128 characters in length and can contain uppercase and lowercase letters, digits, forward slashes (/), backslashes (\\), underscores (_), hyphens (-), periods (.), plus signs (+), equal signs (=), colons (:), and at signs (@).
    // 
    // - A tag key cannot start with aliyun or acs:.
    // 
    // - You can add up to 20 tags to each secret.
    shared_ptr<string> tags_ {};
    // The version ID of the initial version. The version ID must be unique within the secret.
    // The version ID can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
