// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateLaunchTemplateRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaunchTemplateRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
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
    friend void from_json(const Darabonba::Json& j, CreateLaunchTemplateRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
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
    CreateLaunchTemplateRequestDataDisk() = default ;
    CreateLaunchTemplateRequestDataDisk(const CreateLaunchTemplateRequestDataDisk &) = default ;
    CreateLaunchTemplateRequestDataDisk(CreateLaunchTemplateRequestDataDisk &&) = default ;
    CreateLaunchTemplateRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaunchTemplateRequestDataDisk() = default ;
    CreateLaunchTemplateRequestDataDisk& operator=(const CreateLaunchTemplateRequestDataDisk &) = default ;
    CreateLaunchTemplateRequestDataDisk& operator=(CreateLaunchTemplateRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr && return this->deleteWithInstance_ == nullptr && return this->description_ == nullptr && return this->device_ == nullptr
        && return this->diskName_ == nullptr && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr && return this->performanceLevel_ == nullptr && return this->provisionedIops_ == nullptr
        && return this->size_ == nullptr && return this->snapshotId_ == nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateLaunchTemplateRequestDataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline CreateLaunchTemplateRequestDataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateLaunchTemplateRequestDataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateLaunchTemplateRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateLaunchTemplateRequestDataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the automatic snapshot policy to apply to data disk N.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // Specifies whether to enable the performance burst feature for the system disk. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The category of data disk N. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: utra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    // *   cloud_auto: ESSD AutoPL disk
    // *   cloud_essd_entry: ESSD Entry disk
    // 
    // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to release data disk N when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The description of data disk N. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The mount point of data disk N. The mount points are named based on the number of data disks:
    // 
    // *   1st to 25th data disks: /dev/xvd`[b-z]`.
    // *   From the 26th data disk on: /dev/xvd`[aa-zz]`. For example, the 26th data disk is named /dev/xvdaa, the 27th data disk is named /dev/xvdab, and so on.
    // 
    // >  This parameter is applicable to scenarios in which a full image is used to create instances. A full image is an image that contains an operating system, application software, and business data. For these scenarios, you can set the parameter to the mount point of data disk N contained in the full image and modify `DataDisk.N.Size` and `DataDisk.N.Category` to change the category and size of data disk N created based on the image.
    std::shared_ptr<string> device_ = nullptr;
    // The name of data disk N. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> diskName_ = nullptr;
    // Specifies whether to encrypt data disk N.
    std::shared_ptr<string> encrypted_ = nullptr;
    // The ID of the KMS key used for the data disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The performance level of the ESSD to use as data disk N. The value of N must be the same as that in `DataDisk.N.Category` when DataDisk.N.Category is set to cloud_essd. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10000 random read/write IOPS.
    // *   PL1 (default): A single ESSD can deliver up to 50000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1000000 random read/write IOPS.
    // 
    // For information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
    // 
    // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // >  This parameter is available only if you set DiskCategory to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the performance configurations of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud: 5 to 2000.
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud_efficiency: 20 to 32768.
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud_ssd: 20 to 32768.
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud_essd: vary based on the value of `DataDisk.N.PerformanceLevel`.
    // 
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL0: 1 to 32768.
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL1: 20 to 32768.
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL2: 461 to 32768.
    //     *   Valid values if you set DataDisk.N.PerformanceLevel to PL3: 1261 to 32768.
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud_auto: 1 to 32768.
    // 
    // *   Valid values if you set DataDisk.N.Category to cloud_essd_entry: 10 to 32768.
    // 
    // The value of this parameter must be greater than or equal to the size of the snapshot specified by `SnapshotId`.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot to use to create data disk N. Valid values of N: 1 to 16. If you specify `DataDisk.N.SnapshotId`, `DataDisk.N.Size` is ignored. The data disk is created with the size of the specified snapshot.
    // 
    // >  Use snapshots created on or after July 15, 2013. Otherwise, an error is returned and your request is rejected.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
