// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTOSSDELIVERYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTOSSDELIVERYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequestOssDeliveryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequestOssDeliveryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequestOssDeliveryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig() = default ;
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig(const ModifyCloudAssistantSettingsRequestOssDeliveryConfig &) = default ;
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig(ModifyCloudAssistantSettingsRequestOssDeliveryConfig &&) = default ;
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequestOssDeliveryConfig() = default ;
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig& operator=(const ModifyCloudAssistantSettingsRequestOssDeliveryConfig &) = default ;
    ModifyCloudAssistantSettingsRequestOssDeliveryConfig& operator=(ModifyCloudAssistantSettingsRequestOssDeliveryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->enabled_ == nullptr && return this->encryptionAlgorithm_ == nullptr && return this->encryptionKeyId_ == nullptr && return this->encryptionType_ == nullptr && return this->prefix_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // encryptionAlgorithm Field Functions 
    bool hasEncryptionAlgorithm() const { return this->encryptionAlgorithm_ != nullptr;};
    void deleteEncryptionAlgorithm() { this->encryptionAlgorithm_ = nullptr;};
    inline string encryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptionAlgorithm_, "") };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setEncryptionAlgorithm(string encryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptionAlgorithm_, encryptionAlgorithm) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string encryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ModifyCloudAssistantSettingsRequestOssDeliveryConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // Specifies whether to deliver records to OSS. Default value: false.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The OSS encryption algorithm. Valid values:
    // 
    // *   AES256
    // *   SM4
    std::shared_ptr<string> encryptionAlgorithm_ = nullptr;
    // The ID of the customer master key (CMK) when EncryptionType is set to KMS.
    std::shared_ptr<string> encryptionKeyId_ = nullptr;
    // The OSS encryption method. Valid values:
    // 
    // *   Inherit: the encryption method used by the specified bucket.
    // *   OssManaged: server-side encryption by using OSS-managed keys (SSE-OSS).
    // *   KMS: server-side encryption by using Key Management Service managed keys (SSE-KMS).
    std::shared_ptr<string> encryptionType_ = nullptr;
    // The prefix of the OSS bucket directory. The prefix must meet the following requirements:
    // 
    // *   The prefix can be up to 254 characters in length.
    // *   The prefix cannot start with a forward slash (/) or a backslash (\\\\).
    // 
    // Note: If you do not need a directory prefix, specify a pair of double quotation marks ("") for this parameter to clear the directory prefix that you specified.
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
