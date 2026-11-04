// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(KeyStorageMechanism, keyStorageMechanism_);
      DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableAutomaticRotation, enableAutomaticRotation_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(KeyStorageMechanism, keyStorageMechanism_);
      DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateKeyRequest() = default ;
    CreateKeyRequest(const CreateKeyRequest &) = default ;
    CreateKeyRequest(CreateKeyRequest &&) = default ;
    CreateKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyRequest() = default ;
    CreateKeyRequest& operator=(const CreateKeyRequest &) = default ;
    CreateKeyRequest& operator=(CreateKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DKMSInstanceId_ == nullptr
        && this->description_ == nullptr && this->enableAutomaticRotation_ == nullptr && this->keySpec_ == nullptr && this->keyStorageMechanism_ == nullptr && this->keyUsage_ == nullptr
        && this->origin_ == nullptr && this->policy_ == nullptr && this->protectionLevel_ == nullptr && this->rotationInterval_ == nullptr && this->tags_ == nullptr; };
    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateKeyRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool getEnableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline CreateKeyRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline CreateKeyRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // keyStorageMechanism Field Functions 
    bool hasKeyStorageMechanism() const { return this->keyStorageMechanism_ != nullptr;};
    void deleteKeyStorageMechanism() { this->keyStorageMechanism_ = nullptr;};
    inline string getKeyStorageMechanism() const { DARABONBA_PTR_GET_DEFAULT(keyStorageMechanism_, "") };
    inline CreateKeyRequest& setKeyStorageMechanism(string keyStorageMechanism) { DARABONBA_PTR_SET_VALUE(keyStorageMechanism_, keyStorageMechanism) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string getKeyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline CreateKeyRequest& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateKeyRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateKeyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline CreateKeyRequest& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateKeyRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateKeyRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The instance ID of the KMS instance.
    // 
    // > You must specify this parameter when you create a key for a KMS instance. You do not need to specify this parameter when you create a default key (master key).
    shared_ptr<string> DKMSInstanceId_ {};
    // The description of the key.  
    // The description must be 0 to 8,192 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether to enable automatic key rotation. Valid values:  
    // - true: Enables automatic key rotation.
    // - false (default): Disables automatic key rotation.
    // 
    // This parameter takes effect only when the key management type to which the key belongs supports automatic rotation. For more information, see [Key rotation](https://help.aliyun.com/document_detail/2358146.html).
    shared_ptr<bool> enableAutomaticRotation_ {};
    // The key specification. Valid values vary based on the key management type. For more information about key specifications, followed standards, and key algorithms, see [Key management types and key specifications](https://help.aliyun.com/document_detail/480161.html).
    // 
    // > If you do not specify this parameter, the default key specification is Aliyun_AES_256.
    shared_ptr<string> keySpec_ {};
    // The storage location of hardware-protected key. This parameter takes effect only when DKMSInstanceId is set to the ID of a hardware key management instance. Valid values:
    // - HsmInternal (default): Hardware-protected key is stored in the HSM and does not support rotation.
    // - HsmEncryptedDatabase: Hardware-protected key is stored in the database.
    //   - Symmetric keys: Support rotation.
    //   - Asymmetric keys: Do not support rotation.
    shared_ptr<string> keyStorageMechanism_ {};
    // The purpose of the key. Valid values:  
    // - ENCRYPT/DECRYPT: Data encryption and decryption.
    // - SIGN/VERIFY: Digital signature generation and verification.
    // 
    // Default value: If the key supports signature generation and verification, the default value is SIGN/VERIFY. Otherwise, the default value is ENCRYPT/DECRYPT.
    shared_ptr<string> keyUsage_ {};
    // The source of the key material. Valid values:  
    // - Aliyun_KMS (default): The key material is generated by Alibaba Cloud KMS.
    // - EXTERNAL: The key material is imported by you.
    // 
    // 
    // > - The value is case-sensitive.
    // - If you select EXTERNAL, you must import the key material. For more information, see [Import symmetric key material](https://help.aliyun.com/document_detail/607841.html) or [Import asymmetric key material](https://help.aliyun.com/document_detail/608827.html).
    shared_ptr<string> origin_ {};
    // The content of the key policy in JSON format. The maximum length is 32,768 bytes.
    // For more information about key policies, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html). If you do not specify this parameter, the default key policy is used.
    // 
    // The key policy includes the following fields:
    // 
    // - Version: The version of the key policy. Only version 1 is supported.
    // - Statement: The statements of the key policy. Each key policy contains one or more statements.
    // 
    // The key policy uses the following format:
    // 
    // ```
    // {
    //   "Version": "1",
    //   "Statement": [
    //     {
    //       "Sid": "Enable RAM User Permissions",
    //       "Effect": "Allow",
    //       "Principal": {
    //         "RAM": ["acs:ram::112890462****:root"]
    //       },
    //       "Action": [
    //         "kms:*"
    //       ],
    //       "Resource": [
    //         "*"
    //       ],
    //       "Condition": {
    //         "condition operator": {
    //           "condition key": "condition value"
    //         }
    //       }
    //     }
    //   ]
    // }
    // ```
    // 
    // Statement details:
    // - Sid: Optional. The custom statement identifier. It can be up to 128 characters in length and can contain uppercase letters (A-Z), lowercase letters (a-z), digits (0-9), and special characters (_/+=.@-).
    // - Effect: Required. Specifies whether to allow or deny the permissions in the policy statement. Valid values: Allow and Deny.
    // 
    // - Principal: Required. The principal to which the policy is attached. You can set this field to the current Alibaba Cloud account (the account to which the key belongs), RAM users or RAM roles under the current Alibaba Cloud account, or RAM users or RAM roles under other Alibaba Cloud accounts.
    // 
    // - Action: Required. The API operations to allow or deny. The value must start with "kms:". For the scope of the operation permission list, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html). If you specify operations outside the list, the settings do not take effect.
    // 
    // - Resource: Required. The value can only be *, which indicates the current KMS key.
    // 
    // - Condition: Optional. The conditions that must be met for the authorization to take effect. You can use conditions to evaluate the context of API requests to determine whether the policy statement applies. The format is `"Condition": {"condition operator": {"condition key": "condition value"}}`. For more information, see [Key policy overview](https://help.aliyun.com/document_detail/2716468.html).
    // 
    // > After you grant permissions to RAM users or RAM roles under other Alibaba Cloud accounts, you must still use the Alibaba Cloud accounts of the RAM users or RAM roles to authorize them to use the key in the RAM console. Only then can the RAM users or RAM roles use the key. For specific operations, see [Custom policy examples for KMS](https://help.aliyun.com/document_detail/480682.html), [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html), and [Grant permissions to a RAM role](https://help.aliyun.com/document_detail/116147.html).
    shared_ptr<string> policy_ {};
    // You do not need to specify this parameter. KMS will configure the appropriate protection settings for your key.
    // 
    // The protection level of the key. Valid values:  
    // - SOFTWARE
    // - HSM
    // 
    // > - If DKMSInstanceId is specified, this parameter does not take effect. If the instance is a software key management instance, the protection level is SOFTWARE. If the instance is a hardware key management instance, the protection level is HSM.
    // - If DKMSInstanceId is not specified, we recommend that you do not specify this parameter and rely on KMS settings. If KMS has a managed HSM in the region, this parameter will be set to HSM. Otherwise, it is set to SOFTWARE. For more information, see [Managed HSM overview](https://help.aliyun.com/document_detail/125803.html).
    shared_ptr<string> protectionLevel_ {};
    // The epoch for automatic rotation. The format is integer[unit], where integer indicates the time length and unit indicates the time unit. Valid units are d (days), h (hours), m (minutes), and s (seconds). Both 7d and 604800s indicate a 7-day epoch.
    // 
    // - If the key is a default key, the value is 365 days.
    // 
    // - If the key is a software-protected key, the value is 7 to 365 days.
    // 
    // - If the key is a hardware-protected key, automatic rotation is not supported.
    // 
    // > You must specify this parameter when EnableAutomaticRotation is set to true.
    shared_ptr<string> rotationInterval_ {};
    // The tags to bind to the key. Each tag consists of a key-value pair, which includes a tag key and a tag value.
    // 
    // You can specify up to 20 tags. To specify multiple tags, use the following format: `[{"TagKey":"key1","TagValue":"value1"},{"TagKey":"key2","TagValue":"value2"},...]`.
    // 
    // Each tag key and tag value can be up to 128 characters in length and can contain uppercase and lowercase letters, digits, forward slashes (/), backslashes (\\), underscores (_), hyphens (-), periods (.), plus signs (+), equal signs (=), colons (:), and at signs (@).
    // > A tag key cannot start with aliyun or acs:.
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
