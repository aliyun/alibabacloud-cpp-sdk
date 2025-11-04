// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTDATADISKS_HPP_
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
  class ModifyScalingConfigurationRequestDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestDataDisks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestDataDisks& obj) { 
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
    ModifyScalingConfigurationRequestDataDisks() = default ;
    ModifyScalingConfigurationRequestDataDisks(const ModifyScalingConfigurationRequestDataDisks &) = default ;
    ModifyScalingConfigurationRequestDataDisks(ModifyScalingConfigurationRequestDataDisks &&) = default ;
    ModifyScalingConfigurationRequestDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestDataDisks() = default ;
    ModifyScalingConfigurationRequestDataDisks& operator=(const ModifyScalingConfigurationRequestDataDisks &) = default ;
    ModifyScalingConfigurationRequestDataDisks& operator=(ModifyScalingConfigurationRequestDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && return this->burstingEnabled_ == nullptr && return this->categories_ == nullptr && return this->category_ == nullptr && return this->deleteWithInstance_ == nullptr && return this->description_ == nullptr
        && return this->device_ == nullptr && return this->diskName_ == nullptr && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr && return this->performanceLevel_ == nullptr
        && return this->provisionedIops_ == nullptr && return this->size_ == nullptr && return this->snapshotId_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline ModifyScalingConfigurationRequestDataDisks& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ModifyScalingConfigurationRequestDataDisks& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ModifyScalingConfigurationRequestDataDisks& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline ModifyScalingConfigurationRequestDataDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline ModifyScalingConfigurationRequestDataDisks& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ModifyScalingConfigurationRequestDataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ModifyScalingConfigurationRequestDataDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the automatic snapshot policy that you want to apply to the data disk.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // Specifies whether to enable the Burst feature for the system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  If you set `SystemDisk.Category` to `cloud_auto`, you can specify this parameter.
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The categories of data disks. Valid values:
    // 
    // *   cloud: basic disk. The DeleteWithInstance attribute of a basic disk created along with each ECS instance is set to true.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   cloud_essd: ESSD.
    // 
    // >  If you specify this parameter, you cannot specify `DataDisk.Category`.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The category of the data disk. Valid values:
    // 
    // *   cloud: basic disk. The DeleteWithInstance attribute of a basic disk created along with each ECS instance is set to true.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   ephemeral_ssd: local SSD.
    // *   cloud_essd: ESSD.
    // 
    // If you specify this parameter, you cannot specify `DataDisk.Categories`. If you leave this parameter and `DataDisk.Categories` empty at the same time, the default value of this parameter is used.
    // 
    // *   For I/O optimized instances, the default value is cloud_efficiency.
    // *   For non-I/O optimized instances, the default value is cloud.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to release the data disk if the instance to which the data disk is attached is released. Valid values:
    // 
    // *   true
    // *   false
    // 
    // If you set DataDisk.Category to cloud, cloud_efficiency, cloud_ssd, cloud_essd, or cloud_auto, you can specify this parameter. If you specify this parameter for data disks of other categories, an error is returned.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The description of the system disk. The description must be 2 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The mount target of the data disk. If you do not specify this parameter, the system automatically assigns a mount target when Auto Scaling creates an ECS instance. Valid values: /dev/xvdb to /dev/xvdz.
    std::shared_ptr<string> device_ = nullptr;
    // The name of the system disk. The name must be 2 to 128 characters in length, and can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> diskName_ = nullptr;
    // Specifies whether to encrypt the system disk. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> encrypted_ = nullptr;
    // The ID of the Key Management Service (KMS) key that you want to apply to the data disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The PL of the data disk that is an ESSD. Valid values:
    // 
    // *   PL0: An ESSD can provide up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can provide up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can provide up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can provide up to 1,000,000 random read/write IOPS.
    // 
    // >  For more information about how to select ESSD PLs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The provisioned IOPS of the data disk.
    // 
    // >  IOPS measures the number of read and write operations that an Elastic Block Storage (EBS) device can process per second.
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The size of the data disk. Unit: GB. Valid values:
    // 
    // *   5 to 2000 if you set DataDisk.Category to cloud.
    // *   20 to 32768 if you set DataDisk.Category to cloud_efficiency.
    // *   20 to 32768 if you set DataDisk.Category to cloud_ssd.
    // *   20 to 32768 if you set DataDisk.Category to cloud_essd.
    // *   5 to 800 if you set DataDisk.Category to ephemeral_ssd.
    // 
    // Set Size to a value that is greater than or equal to the size of the snapshot specified by SnapshotId.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot that you want to use to create data disks. If you specify this parameter, DataDisk.Size is ignored. The size of the data disk created by using the snapshot is the same as the size of the snapshot.
    // 
    // If the snapshot was created on or before July 15, 2013, the API request is rejected and the InvalidSnapshot.TooOld message is returned.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
