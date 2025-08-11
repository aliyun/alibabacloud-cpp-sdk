// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTDATADISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    CreateScalingConfigurationRequestDataDisks() = default ;
    CreateScalingConfigurationRequestDataDisks(const CreateScalingConfigurationRequestDataDisks &) = default ;
    CreateScalingConfigurationRequestDataDisks(CreateScalingConfigurationRequestDataDisks &&) = default ;
    CreateScalingConfigurationRequestDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestDataDisks() = default ;
    CreateScalingConfigurationRequestDataDisks& operator=(const CreateScalingConfigurationRequestDataDisks &) = default ;
    CreateScalingConfigurationRequestDataDisks& operator=(CreateScalingConfigurationRequestDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicyId_ != nullptr
        && this->burstingEnabled_ != nullptr && this->categories_ != nullptr && this->category_ != nullptr && this->deleteWithInstance_ != nullptr && this->description_ != nullptr
        && this->device_ != nullptr && this->diskName_ != nullptr && this->encrypted_ != nullptr && this->KMSKeyId_ != nullptr && this->performanceLevel_ != nullptr
        && this->provisionedIops_ != nullptr && this->size_ != nullptr && this->snapshotId_ != nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateScalingConfigurationRequestDataDisks& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline CreateScalingConfigurationRequestDataDisks& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline CreateScalingConfigurationRequestDataDisks& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline CreateScalingConfigurationRequestDataDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateScalingConfigurationRequestDataDisks& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateScalingConfigurationRequestDataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateScalingConfigurationRequestDataDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the automatic snapshot policy that you want to apply to the data disk.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // > This parameter is available only if you set `SystemDisk.Category` to `cloud_auto`.
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The categories of the data disks. If Auto Scaling cannot create instances by using the disk category that has the highest priority, Auto Scaling creates instances by using the disk category that has the next highest priority. Valid values:
    // 
    // *   cloud: basic disk. For a basic disk that is created together with the instance, DeleteWithInstance is set to true.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   cloud_essd: ESSD.
    // 
    // > If you specify Categories, you cannot specify `DataDisks.Category`.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The category of the data disk. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    // *   ephemeral_ssd: local SSD
    // *   cloud_auto: ESSD AutoPL disk
    // 
    // If you specify this parameter, you cannot specify Categories. If you do not specify Category or Categories, the default value of Category is used.
    // 
    // *   For I/O optimized instances, the default value is cloud_efficiency.
    // *   For non-I/O optimized instances, the default value is cloud.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to release the data disk when the instance to which the data disk is attached is released. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is available only for independent disks whose value of Category is set to cloud, cloud_efficiency, cloud_ssd, or cloud_essd. If you specify this parameter for other disks, an error is reported.
    // 
    // Default value: true
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The description of the data disk. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The mount target of the data disk. If you do not specify Device, a mount target is automatically assigned when Auto Scaling creates ECS instances. The names of mount targets range from /dev/xvdb to /dev/xvdz.
    std::shared_ptr<string> device_ = nullptr;
    // The name of the system disk. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> diskName_ = nullptr;
    // Specifies whether to encrypt the data disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false
    std::shared_ptr<string> encrypted_ = nullptr;
    // The ID of the KMS key that you want to use to encrypt the data disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The PL of the data disk that is an ESSD. Valid values:
    // 
    // *   PL0: An ESSD can provide up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can provide up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can provide up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can provide up to 1,000,000 random read/write IOPS.
    // 
    // > For more information about how to select ESSD PLs, see [ESSD](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The IOPS metric that is preconfigured for the data disk.
    // 
    // > IOPS measures the number of read and write operations that an EBS device can process per second.
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The size of the data disk. Unit: GiB. Valid values:
    // 
    // *   If you set Categories to cloud: 5 to 2000.
    // *   If you set Categories to cloud_efficiency: 20 to 32768.
    // *   If you set Categories to cloud_essd: 20 to 32768.
    // *   If you set Categories to ephemeral_ssd: 5 to 800.
    // 
    // The size of the data disk must be greater than or equal to the size of the snapshot that is specified by SnapshotId.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot that you want to use to create data disks. If you specify this parameter, DataDisks.Size is ignored. The size of the data disk is the same as the size of the specified snapshot.
    // 
    // If you specify a snapshot that is created on or before July 15, 2013, the operation fails and the system returns InvalidSnapshot.TooOld.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
