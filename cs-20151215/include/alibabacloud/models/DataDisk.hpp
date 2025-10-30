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
        && return this->autoSnapshotPolicyId_ == nullptr && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr && return this->device_ == nullptr && return this->diskName_ == nullptr
        && return this->encrypted_ == nullptr && return this->fileSystem_ == nullptr && return this->kmsKeyId_ == nullptr && return this->mountTarget_ == nullptr && return this->performanceLevel_ == nullptr
        && return this->provisionedIops_ == nullptr && return this->size_ == nullptr && return this->snapshotId_ == nullptr; };
    // autoFormat Field Functions 
    bool hasAutoFormat() const { return this->autoFormat_ != nullptr;};
    void deleteAutoFormat() { this->autoFormat_ = nullptr;};
    inline bool autoFormat() const { DARABONBA_PTR_GET_DEFAULT(autoFormat_, false) };
    inline DataDisk& setAutoFormat(bool autoFormat) { DARABONBA_PTR_SET_VALUE(autoFormat_, autoFormat) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DataDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DataDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline DataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline string fileSystem() const { DARABONBA_PTR_GET_DEFAULT(fileSystem_, "") };
    inline DataDisk& setFileSystem(string fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline DataDisk& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline string mountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
    inline DataDisk& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    std::shared_ptr<bool> autoFormat_ = nullptr;
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> device_ = nullptr;
    std::shared_ptr<string> diskName_ = nullptr;
    std::shared_ptr<string> encrypted_ = nullptr;
    std::shared_ptr<string> fileSystem_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<string> mountTarget_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
