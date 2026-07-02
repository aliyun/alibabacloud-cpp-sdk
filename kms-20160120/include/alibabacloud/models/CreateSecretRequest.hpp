// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_ANY_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_ANY_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretDataType, secretDataType_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateSecretRequest() = default ;
    CreateSecretRequest(const CreateSecretRequest &) = default ;
    CreateSecretRequest(CreateSecretRequest &&) = default ;
    CreateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretRequest() = default ;
    CreateSecretRequest& operator=(const CreateSecretRequest &) = default ;
    CreateSecretRequest& operator=(CreateSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DKMSInstanceId_ == nullptr
        && this->description_ == nullptr && this->enableAutomaticRotation_ == nullptr && this->encryptionKeyId_ == nullptr && this->extendedConfig_ == nullptr && this->policy_ == nullptr
        && this->rotationInterval_ == nullptr && this->secretData_ == nullptr && this->secretDataType_ == nullptr && this->secretName_ == nullptr && this->secretType_ == nullptr
        && this->tags_ == nullptr && this->versionId_ == nullptr; };
    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool getEnableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline CreateSecretRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline CreateSecretRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline     const Darabonba::Json & getExtendedConfig() const { DARABONBA_GET(extendedConfig_) };
    Darabonba::Json & getExtendedConfig() { DARABONBA_GET(extendedConfig_) };
    inline CreateSecretRequest& setExtendedConfig(const Darabonba::Json & extendedConfig) { DARABONBA_SET_VALUE(extendedConfig_, extendedConfig) };
    inline CreateSecretRequest& setExtendedConfig(Darabonba::Json && extendedConfig) { DARABONBA_SET_RVALUE(extendedConfig_, extendedConfig) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateSecretRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateSecretRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline CreateSecretRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


    // secretDataType Field Functions 
    bool hasSecretDataType() const { return this->secretDataType_ != nullptr;};
    void deleteSecretDataType() { this->secretDataType_ = nullptr;};
    inline string getSecretDataType() const { DARABONBA_PTR_GET_DEFAULT(secretDataType_, "") };
    inline CreateSecretRequest& setSecretDataType(string secretDataType) { DARABONBA_PTR_SET_VALUE(secretDataType_, secretDataType) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline CreateSecretRequest& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateSecretRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateSecretRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the KMS instance.
    shared_ptr<string> DKMSInstanceId_ {};
    // The description of the secret.
    shared_ptr<string> description_ {};
    // Specifies whether to enable automatic rotation. Valid values:
    // 
    // - true: enables automatic rotation.
    // 
    // - false (default): disables automatic rotation.
    // 
    // > This parameter is valid only if SecretType is set to Rds, PolarDB, Redis, RAMCredentials, or ECS. If SecretType is set to Generic, automatic rotation is not supported. You can call the [PutSecretValue](https://help.aliyun.com/document_detail/154503.html) operation to manually rotate the secret.
    shared_ptr<bool> enableAutomaticRotation_ {};
    // The ID of the key used to encrypt the secret value.
    // 
    // > The key and the secret must be in the same KMS instance. The key must be a symmetric key.
    shared_ptr<string> encryptionKeyId_ {};
    // The extended configuration of the secret. This parameter specifies the properties of the secret of a specific type. The value can be up to 1,024 characters in length.
    // 
    // - If SecretType is set to Generic, this parameter is ignored.
    // 
    // - If SecretType is set to Rds, you must specify the following parameters in ExtendedConfig:
    // 
    //   - SecretSubType (Required): The subtype of the secret. Valid values:
    // 
    //     - SingleUser: Secrets Manager manages the RDS secret in single-account mode. When the secret is rotated, the password of the specified account is reset to a new random password.
    // 
    //     - DoubleUsers: Secrets Manager manages the RDS secret in double-account mode. ACSCurrent and ACSPrevious point to one of the accounts. When the secret is rotated, the password of the account pointed to by ACSPrevious is reset to a new random password. Then, Secrets Manager swaps the accounts that ACSCurrent and ACSPrevious point to.
    // 
    //   - DBInstanceId (Required): The ID of the RDS instance to which the account belongs.
    // 
    //   - CustomData (Optional): The custom data. The value is a key-value pair in the JSON format. You can specify up to 10 key-value pairs. Separate multiple key-value pairs with commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. The default value is `{}`.
    // 
    // - If SecretType is set to Redis, you must specify the following parameters in ExtendedConfig:
    // 
    //   - SecretSubType (Required): The subtype of the secret. Valid values:
    // 
    //     - DoubleUsers: Secrets Manager manages the Redis secret in double-account mode. ACSCurrent and ACSPrevious point to one of the accounts. When the secret is rotated, the password of the account pointed to by ACSPrevious is reset to a new random password. Then, Secrets Manager swaps the accounts that ACSCurrent and ACSPrevious point to.
    // 
    //   - AccountName (Required): The database username.
    // 
    //   - CloneAccountName (Required): The database username, which is the value of AccountName with the `_clone` suffix.
    // 
    //   - AccountPrivilege (Required): The permissions to access the database.
    // 
    //   - InstanceId (Required): The ID of the Redis instance.
    // 
    //   - RegionId (Required): The ID of the region where the Redis instance resides.
    // 
    //   - CustomData (Optional): The custom data. The value is a key-value pair in the JSON format. You can specify up to 10 key-value pairs. Separate multiple key-value pairs with commas (,). Example: `{"Key1": "v1", "fds":"fdsf"}`. The default value is `{}`.
    // 
    // - If SecretType is set to RAMCredentials, you must specify the following parameters in ExtendedConfig:
    // 
    //   - SecretSubType (Required): The subtype of the secret. The value is RamUserAccessKey.
    // 
    //   - UserName (Required): The name of the RAM user.
    // 
    //   - CustomData (Optional): The custom data. The value is a key-value pair in the JSON format. You can specify up to 10 key-value pairs. Separate multiple key-value pairs with commas (,). The default value is `{}`.
    // 
    // - If SecretType is set to ECS, you must specify the following parameters in ExtendedConfig:
    // 
    //   - SecretSubType (Required): The subtype of the secret. Valid values:
    // 
    //     - Password: an ECS password.
    // 
    //     - SSHKey: an ECS SSH key pair.
    // 
    //   - RegionId (Required): The ID of the region where the ECS instance resides.
    // 
    //   - InstanceId (Required): The ID of the ECS instance.
    // 
    //   - CustomData (Optional): The custom data. The value is a key-value pair in the JSON format. You can specify up to 10 key-value pairs. Separate multiple key-value pairs with commas (,). The default value is `{}`.
    // 
    // - If SecretType is set to PolarDB, you must specify the following parameters in ExtendedConfig:
    // 
    //   - SecretSubType (Required): The fixed value is DoubleUsers.
    // 
    //   - RegionId (Required): The region.
    // 
    //   - DBClusterId (Required): The ID of the PolarDB instance.
    // 
    //   - DBType (Required): MySQL or PostgreSQL.
    // 
    //   - AccountName (Required): The account name.
    // 
    //   - CloneAccountName: The value is AccountName_clone.
    // 
    //   - AccountType: Only Normal is supported.
    // 
    //   - AccountPrivilege: This parameter is available only for MySQL.
    // 
    //   - DBName: This parameter is available only for MySQL.
    // 
    //   - CustomData (Optional): The custom data. The value is a key-value pair in the JSON format. You can specify up to 10 key-value pairs. Separate multiple key-value pairs with commas (,). Example: {"Key1": "v1", "fds":"fdsf"}. The default value is {}.
    // 
    // > If SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS, you must configure this parameter.
    Darabonba::Json extendedConfig_ {};
    // The content of the secret policy. The value is in the JSON format. The value can be up to 32,768 bytes in length.
    // 
    // For more information about secret policies, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html). If you do not specify this parameter, the default secret policy is used.
    // 
    // A secret policy contains the following parts:
    // 
    // - Version: The version of the secret policy. Only 1 is supported.
    // 
    // - Statement: The statements of the secret policy. Each secret policy can contain one or more statements.
    // 
    // The following is the format of a secret policy:
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
    // Details about a statement:
    // 
    // - Sid: (Optional) The custom identifier of the statement. The value can be up to 128 characters in length and can contain uppercase letters (A-Z), lowercase letters (a-z), digits (0-9), and special characters, including underscores (_), forward slashes (/), plus signs (+), equal signs (=), periods (.), at signs (@), and hyphens (-).
    // 
    // - Effect: (Required) The effect of the policy statement. Valid values: Allow and Deny.
    // 
    // - Principal: (Required) The principal that is authorized by the policy. You can specify the current Alibaba Cloud account (the account to which the secret belongs), a RAM user or RAM role of the current Alibaba Cloud account, or a RAM user or RAM role of another Alibaba Cloud account.
    // 
    // - Action: (Required) The API operations that are allowed or denied. The value must start with "kms:". For the list of supported operations, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html). If you specify an operation that is not in the list, the setting does not take effect.
    // 
    // - Resource: (Required) The resource. The value can only be \\*, which indicates the current KMS secret.
    // 
    // - Condition: (Optional) The conditions for the authorization to take effect. You can use conditions to evaluate the context of an API request to determine whether to apply the policy statement. The format is `"Condition": {"condition operator": {"condition key": "condition value"}}`. For more information, see [Overview of secret policies](https://help.aliyun.com/document_detail/2716465.html).
    // 
    // > After you grant permissions to a RAM user or RAM role of another Alibaba Cloud account, you must use the Alibaba Cloud account to which the RAM user or RAM role belongs to grant the RAM user or RAM role the permissions to use the secret in the RAM console. Then, the RAM user or RAM role can use the secret. For more information, see [Custom policies for KMS](https://help.aliyun.com/document_detail/480682.html), [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html), and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    shared_ptr<string> policy_ {};
    // The interval for automatic rotation. The value is in the range of 6 hours to 8,760 hours (365 days).<br>
    // The value is in the `integer[unit]` format. `integer` indicates the interval. `unit` indicates the unit of time.<br>
    // Valid values for unit: d (day), h (hour), m (minute), and s (second). For example, both 7d and 604,800s indicate a rotation interval of 7 days.<br><br>
    // 
    // > You must specify this parameter if you set EnableAutomaticRotation to true. You do not need to specify this parameter if you set EnableAutomaticRotation to false.
    shared_ptr<string> rotationInterval_ {};
    // The value of the secret. The value can be up to 30,720 bytes (30 KB) in length. KMS encrypts the secret value with the specified key and stores the encrypted value in the initial version.
    // 
    // - If SecretType is set to Generic, you can specify a custom secret value.
    // 
    // - If SecretType is set to Rds, the secret value must be in the following format: `{"Accounts":[{"AccountName":"","AccountPassword":""}]}`. In the format, `AccountName` specifies the username of the account for the RDS instance and `AccountPassword` specifies the password of the account.
    // 
    // - If SecretType is set to Redis, set this parameter to `$Auto`.
    // 
    // - If SecretType is set to RAMCredentials, the secret value must be in the following format: `{"AccessKeys":[{"AccessKeyId":"","AccessKeySecret":""}]}`. In the format, `AccessKeyId` specifies the AccessKey ID and `AccessKeySecret` specifies the AccessKey secret. You must specify all AccessKey pairs of the RAM user.
    // 
    // - If SecretType is set to PolarDB, set this parameter to `$Auto`.
    // 
    // - If SecretType is set to ECS, the secret value must be in one of the following formats:
    // 
    //   - If SecretSubType in the ExtendedConfig parameter is set to Password: `{"UserName":"","Password": ""}`. In the format, `UserName` specifies the username used to log on to the ECS instance and `Password` specifies the password used to log on to the ECS instance.
    // 
    //   - If SecretSubType in the ExtendedConfig parameter is set to SSHKey: `{"UserName":"","PublicKey": "", "PrivateKey": ""}`. In the format, `PublicKey` specifies the SSH-formatted public key used to log on to the ECS instance and `PrivateKey` specifies the private key used to log on to the ECS instance.
    // 
    // This parameter is required.
    shared_ptr<string> secretData_ {};
    // The type of the secret value. Valid values:
    // 
    // - text (default): The secret value is a text string.
    // 
    // - binary: The secret value is a binary string.
    // 
    // > If SecretType is set to Rds, Redis, PolarDB, RAMCredentials, or ECS, SecretDataType must be set to text.
    shared_ptr<string> secretDataType_ {};
    // The name of the secret. The name must be unique in the same region.
    // The name can be up to 192 characters in length and can contain letters, digits, underscores (_), forward slashes (/), plus signs (+), equal signs (=), periods (.), hyphens (-), and at signs (@). The following limits apply to secret names for different types of secrets:
    // 
    // - If SecretType is set to Generic, Rds, or Redis, the name cannot start with `acs/`.
    // 
    // - If SecretType is set to RAMCredentials, set this parameter to the fixed value `$Auto`. In this case, KMS automatically generates a secret name that starts with `acs/ram/user/` and contains the display name of the RAM user.
    // 
    // - If SecretType is set to ECS, the name must start with `acs/ecs/`.
    // 
    // This parameter is required.
    shared_ptr<string> secretName_ {};
    // The type of the secret. Valid values:
    // 
    // - Generic (default): a generic secret.
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
    // The tags of the secret. Each tag consists of a key-value pair. A tag consists of a tag key and a tag value.
    // 
    // The tag key and tag value can be up to 128 characters in length and can contain letters, digits, forward slashes (/), backslashes (\\), underscores (_), hyphens (-), periods (.), plus signs (+), equal signs (=), colons (:), and at signs (@).
    // 
    // - The tag key cannot start with aliyun or acs:.
    // 
    // - You can specify up to 20 key-value pairs for each secret.
    shared_ptr<string> tags_ {};
    // The version number of the initial version. The version number must be unique within the secret.
    // The version number can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
