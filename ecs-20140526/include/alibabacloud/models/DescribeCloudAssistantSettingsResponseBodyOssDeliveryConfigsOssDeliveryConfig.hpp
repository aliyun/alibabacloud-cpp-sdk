// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYOSSDELIVERYCONFIGSOSSDELIVERYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYOSSDELIVERYCONFIGSOSSDELIVERYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig(const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig(DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig &&) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& operator=(const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& operator=(DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->deliveryType_ == nullptr && return this->enabled_ == nullptr && return this->encryptionAlgorithm_ == nullptr && return this->encryptionKeyId_ == nullptr && return this->encryptionType_ == nullptr
        && return this->prefix_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // encryptionAlgorithm Field Functions 
    bool hasEncryptionAlgorithm() const { return this->encryptionAlgorithm_ != nullptr;};
    void deleteEncryptionAlgorithm() { this->encryptionAlgorithm_ = nullptr;};
    inline string encryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptionAlgorithm_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setEncryptionAlgorithm(string encryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptionAlgorithm_, encryptionAlgorithm) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string encryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The type of items to be delivered. Valid values:
    // 
    // *   SessionManager: session records.
    // *   Invocation: task execution records.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // Indicates whether to deliver the specified items to OSS.
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
    // *   KMS: server-side encryption with Key Management Service (SSE-KMS).
    std::shared_ptr<string> encryptionType_ = nullptr;
    // The prefix of the OSS bucket directory.
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
