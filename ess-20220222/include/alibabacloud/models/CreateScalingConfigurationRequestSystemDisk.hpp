// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateScalingConfigurationRequestSystemDisk() = default ;
    CreateScalingConfigurationRequestSystemDisk(const CreateScalingConfigurationRequestSystemDisk &) = default ;
    CreateScalingConfigurationRequestSystemDisk(CreateScalingConfigurationRequestSystemDisk &&) = default ;
    CreateScalingConfigurationRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestSystemDisk() = default ;
    CreateScalingConfigurationRequestSystemDisk& operator=(const CreateScalingConfigurationRequestSystemDisk &) = default ;
    CreateScalingConfigurationRequestSystemDisk& operator=(CreateScalingConfigurationRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr && return this->description_ == nullptr && return this->diskName_ == nullptr && return this->encryptAlgorithm_ == nullptr
        && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr && return this->performanceLevel_ == nullptr && return this->provisionedIops_ == nullptr && return this->size_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateScalingConfigurationRequestSystemDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string encryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateScalingConfigurationRequestSystemDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateScalingConfigurationRequestSystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateScalingConfigurationRequestSystemDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateScalingConfigurationRequestSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The ID of the automatic snapshot policy that you want to apply to the system disk.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // > This parameter is available only if you set `SystemDisk.Category` to `cloud_auto`.
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The category of the system disk. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   ephemeral_ssd: local SSD
    // *   cloud_essd: enhanced SSD (ESSD)
    // *   cloud_auto: ESSD AutoPL disk
    // 
    // If you specify SystemDisk.Category, you cannot specify `SystemDiskCategories`. If you do not specify SystemDisk.Category or `SystemDiskCategories`, the default value of SystemDisk.Category is used.
    // 
    // *   For I/O optimized instances, the default value is cloud_efficiency.
    // *   For non-I/O optimized instances, the default value is cloud.
    std::shared_ptr<string> category_ = nullptr;
    // The description of the system disk. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the system disk. The name must be 2 to 128 characters in length. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> diskName_ = nullptr;
    // The encryption algorithm that you want to use to encrypt the system disk. Valid values:
    // 
    // *   AES-256
    // *   SM4-128
    // 
    // Default value: AES-256
    std::shared_ptr<string> encryptAlgorithm_ = nullptr;
    // Specifies whether to encrypt the system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the KMS key that you want to use to encrypt the system disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The performance level (PL) of the system disk that is an enhanced SSD (ESSD). Valid values:
    // 
    // *   PL0: An ESSD can provide up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can provide up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can provide up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can provide up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The IOPS metric that is preconfigured for the system disk.
    // 
    // > IOPS measures the number of read and write operations that an EBS device can process per second.
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The size of the system disk. Unit: GiB.
    // 
    // *   Basic disk: 20 to 500.
    // 
    // *   ESSD (cloud_essd): The valid values vary based on the performance level of the ESSD.
    // 
    //     *   PL0 ESSD: 1 to 2048.
    //     *   PL1 ESSD: 20 to 2048.
    //     *   PL2 ESSD: 461 to 2048.
    //     *   PL3 ESSD: 1261 to 2048.
    // 
    // *   ESSD AutoPL disk (cloud_auto): 1 to 2048.
    // 
    // *   Other disk categories: 20 to 2048.
    // 
    // The value of this parameter must be at least 1 and greater than or equal to the image size.
    // 
    // Default value: 40 or the size of the image, whichever is larger.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
