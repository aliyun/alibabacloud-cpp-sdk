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
        && return this->description_ == nullptr && return this->enableAutomaticRotation_ == nullptr && return this->keySpec_ == nullptr && return this->keyStorageMechanism_ == nullptr && return this->keyUsage_ == nullptr
        && return this->origin_ == nullptr && return this->policy_ == nullptr && return this->protectionLevel_ == nullptr && return this->rotationInterval_ == nullptr && return this->tags_ == nullptr; };
    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateKeyRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAutomaticRotation Field Functions 
    bool hasEnableAutomaticRotation() const { return this->enableAutomaticRotation_ != nullptr;};
    void deleteEnableAutomaticRotation() { this->enableAutomaticRotation_ = nullptr;};
    inline bool enableAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(enableAutomaticRotation_, false) };
    inline CreateKeyRequest& setEnableAutomaticRotation(bool enableAutomaticRotation) { DARABONBA_PTR_SET_VALUE(enableAutomaticRotation_, enableAutomaticRotation) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string keySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline CreateKeyRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // keyStorageMechanism Field Functions 
    bool hasKeyStorageMechanism() const { return this->keyStorageMechanism_ != nullptr;};
    void deleteKeyStorageMechanism() { this->keyStorageMechanism_ = nullptr;};
    inline string keyStorageMechanism() const { DARABONBA_PTR_GET_DEFAULT(keyStorageMechanism_, "") };
    inline CreateKeyRequest& setKeyStorageMechanism(string keyStorageMechanism) { DARABONBA_PTR_SET_VALUE(keyStorageMechanism_, keyStorageMechanism) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string keyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline CreateKeyRequest& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateKeyRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateKeyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline CreateKeyRequest& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline CreateKeyRequest& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateKeyRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The ID of the KMS instance.
    // 
    // > You must specify this parameter if you need to create a key for a KMS instance. If you need to create a default key of the CMK type, you do not need to specify this parameter.
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    // The description of the key.
    // 
    // The description can be 0 to 8,192 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable automatic key rotation. Valid values:
    // 
    // - true
    // - false (default)
    // 
    // This parameter is valid only when the key belongs to an instance type that supports automatic rotation. For more information, see [Key rotation](https://help.aliyun.com/document_detail/2358146.html).
    std::shared_ptr<bool> enableAutomaticRotation_ = nullptr;
    // The key specification. The valid values vary based on the KMS instance type. For more information, see [Overview](https://help.aliyun.com/document_detail/480159.html).
    // 
    // > If you do not specify a value for this parameter, the default key specification is Aliyun_AES_256.
    std::shared_ptr<string> keySpec_ = nullptr;
    std::shared_ptr<string> keyStorageMechanism_ = nullptr;
    // The usage of the key. Valid values:
    // 
    // - ENCRYPT/DECRYPT
    // - SIGN/VERIFY
    // 
    // If the key supports signing and verification, the default value is SIGN/VERIFY. If the key does not support signing and verification, the default value is ENCRYPT/DECRYPT.
    std::shared_ptr<string> keyUsage_ = nullptr;
    // The key material origin. Valid values:
    // 
    // - Aliyun_KMS (default): KMS generates key material.
    // - EXTERNAL: You import key material.
    // 
    // 
    // > - The value of this parameter is case-sensitive.
    // > - Default keys of the customer master key (CMK) type support Aliyun_KMS and EXTERNAL. Keys in instances of the software key management type support only Aliyun_KMS. Keys in instances of the hardware key management type support Aliyun_KMS and EXTERNAL.
    // > - If you set Origin to EXTERNAL, you must import key material. For more information, see [Import key material into a symmetric key](https://help.aliyun.com/document_detail/607841.html) or [Import key material into an asymmetric key](https://help.aliyun.com/document_detail/608827.html).
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    // You do not need to specify this parameter. KMS sets a protection level for your key.
    // 
    // The protection level of the key. Valid values:
    // 
    // - SOFTWARE
    // - HSM
    // 
    // 
    // > - If DKMSInstanceId is specified, this parameter does not take effect. If your instance is an instance of the software key management type, set the value to SOFTWARE. If your instance is an instance of the hardware key management type, set the value to HSM.
    // > - If you do not specify DKMSInstanceId, we recommend that you do not specify this parameter. KMS sets a protection level for your key. If managed hardware security modules (HSMs) exist in the region of your KMS instance, set the value to HSM. If managed HSMs do not exist in the region of your KMS instance, set the value to SOFTWARE. For more information, see Managed HSM overview.
    std::shared_ptr<string> protectionLevel_ = nullptr;
    // The period of automatic key rotation. Format: integer[unit]. Unit: d (day), h (hour), m (minute), or s (second). For example, both 7d and 604800s represent a seven-day interval.
    // 
    // - For a default key, set the value to 365 days.
    // - For a software-protected key, set a value that ranges from 7 to 365 days.
    // - A hardware-protected key does not support automatic rotation.
    // 
    // > If EnableAutomaticRotation is set to true, this parameter is required.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The tag that is added to the key. A tag consists of a key-value pair.
    // 
    // You can enter up to 20 tags. Enter multiple tags in the [{"TagKey":"key1","TagValue":"value1"},{"TagKey":"key2","TagValue":"value2"},..] format.
    // 
    // Each tag key or tag value can be up to 128 characters in length and can contain letters, digits, forward slashes (/), backslashes (\\), underscores (_), hyphens (-), periods (.), plus signs (+), equal signs (=), colons (:), and at signs (@).
    // 
    // > The tag key cannot start with aliyun or acs:.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
