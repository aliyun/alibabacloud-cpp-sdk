// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATADISK_HPP_
#define ALIBABACLOUD_MODELS_DATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(auto_format, autoFormat_);
      DARABONBA_PTR_TO_JSON(auto_snapshot_policy_id, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(bursting_enabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(device, device_);
      DARABONBA_PTR_TO_JSON(disk_name, diskName_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(file_system, fileSystem_);
      DARABONBA_PTR_TO_JSON(kms_key_id, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(mount_target, mountTarget_);
      DARABONBA_PTR_TO_JSON(performance_level, performanceLevel_);
      DARABONBA_PTR_TO_JSON(provisioned_iops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(snapshot_id, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_format, autoFormat_);
      DARABONBA_PTR_FROM_JSON(auto_snapshot_policy_id, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(bursting_enabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(device, device_);
      DARABONBA_PTR_FROM_JSON(disk_name, diskName_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(file_system, fileSystem_);
      DARABONBA_PTR_FROM_JSON(kms_key_id, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(mount_target, mountTarget_);
      DARABONBA_PTR_FROM_JSON(performance_level, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(provisioned_iops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(snapshot_id, snapshotId_);
    };
    DataDisk() = default ;
    DataDisk(const DataDisk &) = default ;
    DataDisk(DataDisk &&) = default ;
    DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataDisk() = default ;
    DataDisk& operator=(const DataDisk &) = default ;
    DataDisk& operator=(DataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoFormat_ == nullptr
        && this->autoSnapshotPolicyId_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->device_ == nullptr && this->diskName_ == nullptr
        && this->encrypted_ == nullptr && this->fileSystem_ == nullptr && this->kmsKeyId_ == nullptr && this->mountTarget_ == nullptr && this->performanceLevel_ == nullptr
        && this->provisionedIops_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr; };
    // autoFormat Field Functions 
    bool hasAutoFormat() const { return this->autoFormat_ != nullptr;};
    void deleteAutoFormat() { this->autoFormat_ = nullptr;};
    inline bool getAutoFormat() const { DARABONBA_PTR_GET_DEFAULT(autoFormat_, false) };
    inline DataDisk& setAutoFormat(bool autoFormat) { DARABONBA_PTR_SET_VALUE(autoFormat_, autoFormat) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DataDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DataDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline DataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline string getFileSystem() const { DARABONBA_PTR_GET_DEFAULT(fileSystem_, "") };
    inline DataDisk& setFileSystem(string fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline DataDisk& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline string getMountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
    inline DataDisk& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // Specifies whether to mount the data cloud disk.
    shared_ptr<bool> autoFormat_ {};
    // The ID of the automatic snapshot policy. The cloud disk is automatically backed up based on the snapshot policy.
    // 
    // Default value: empty, which indicates that automatic backup is disabled.
    shared_ptr<string> autoSnapshotPolicyId_ {};
    // Specifies whether to enable performance burst for the data cloud disk. Valid values:
    // - true: Yes.
    // - false: No.
    // 
    // This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<bool> burstingEnabled_ {};
    // The type of the data cloud disk. Valid values:
    // 
    // - cloud: Basic cloud disk.
    // - cloud_efficiency: Ultra disk.
    // - cloud_ssd: Standard SSD.
    // - cloud_essd: ESSD.
    // - cloud_auto: ESSD AutoPL cloud disk.
    // - cloud_essd_entry: ESSD Entry cloud disk.
    // - elastic_ephemeral_disk_premium: Premium elastic ephemeral disk.
    // - elastic_ephemeral_disk_standard: Standard elastic ephemeral disk.
    // 
    // Default value: cloud_efficiency.
    shared_ptr<string> category_ {};
    // The mount point of the data cloud disk. If you do not specify this parameter, the system will allocate a mount point by default during the automatic creation of an ECS instance. The mount point starts from /dev/xvdb and ends at /dev/xvdz.
    shared_ptr<string> device_ {};
    // The name of the data cloud disk. The name must be 2 to 128 characters in length and can contain letters and Chinese characters. It must start with a letter or a Chinese character and cannot start with http:// or https://. It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> diskName_ {};
    // Specifies whether to encrypt the data cloud disk. Valid values:
    // 
    // - true: Encrypts the data cloud disk.
    // - false: Does not encrypt the data cloud disk.
    // 
    // Default value: false.
    shared_ptr<string> encrypted_ {};
    // The type of the file system to be mounted. This parameter takes effect only when auto_format is set to true. Valid values: ext4 and xfs.
    shared_ptr<string> fileSystem_ {};
    // The ID of the Key Management Service (KMS) key used to encrypt the data cloud disk.
    shared_ptr<string> kmsKeyId_ {};
    // The mount path. It must be a valid file path.
    shared_ptr<string> mountTarget_ {};
    // The performance level of the node data cloud disk. This parameter takes effect only for ESSDs, not standard SSDs. The performance level is related to the disk size. For more information, see [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html).
    shared_ptr<string> performanceLevel_ {};
    // The provisioned read and write IOPS of the data cloud disk. Valid values: 0 to min{50,000, 1000 × Capacity - Baseline performance}.
    // Baseline performance = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<int64_t> provisionedIops_ {};
    // The size of the data cloud disk. Unit: GiB.
    // 
    // Valid values: 40 to 32768.
    // 
    // Default value: 120.
    shared_ptr<int64_t> size_ {};
    // The ID of the snapshot used to create the data cloud disk. If you specify this parameter, the DataDisks.Size parameter is ignored, and the actual size of the created disk is the same as the size of the specified snapshot. If the snapshot was created on or before July 15, 2013, the call is rejected and the InvalidSnapshot.TooOld error code is returned.
    shared_ptr<string> snapshotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
