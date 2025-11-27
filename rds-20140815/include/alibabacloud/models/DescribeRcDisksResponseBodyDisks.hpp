// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDISKSRESPONSEBODYDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDISKSRESPONSEBODYDISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCDisksResponseBodyDisksTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDisksResponseBodyDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(IOPS, IOPS_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDisksResponseBodyDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(IOPS, IOPS_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCDisksResponseBodyDisks() = default ;
    DescribeRCDisksResponseBodyDisks(const DescribeRCDisksResponseBodyDisks &) = default ;
    DescribeRCDisksResponseBodyDisks(DescribeRCDisksResponseBodyDisks &&) = default ;
    DescribeRCDisksResponseBodyDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDisksResponseBodyDisks() = default ;
    DescribeRCDisksResponseBodyDisks& operator=(const DescribeRCDisksResponseBodyDisks &) = default ;
    DescribeRCDisksResponseBodyDisks& operator=(DescribeRCDisksResponseBodyDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->creationTime_ == nullptr && return this->deleteAutoSnapshot_ == nullptr && return this->deleteWithInstance_ == nullptr && return this->description_ == nullptr && return this->device_ == nullptr
        && return this->diskChargeType_ == nullptr && return this->diskId_ == nullptr && return this->diskName_ == nullptr && return this->encrypted_ == nullptr && return this->expiredTime_ == nullptr
        && return this->IOPS_ == nullptr && return this->imageId_ == nullptr && return this->instanceId_ == nullptr && return this->performanceLevel_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serialNumber_ == nullptr && return this->size_ == nullptr && return this->sourceSnapshotId_ == nullptr && return this->status_ == nullptr
        && return this->storageClusterId_ == nullptr && return this->storageSetId_ == nullptr && return this->tag_ == nullptr && return this->type_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeRCDisksResponseBodyDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCDisksResponseBodyDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteAutoSnapshot Field Functions 
    bool hasDeleteAutoSnapshot() const { return this->deleteAutoSnapshot_ != nullptr;};
    void deleteDeleteAutoSnapshot() { this->deleteAutoSnapshot_ = nullptr;};
    inline bool deleteAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(deleteAutoSnapshot_, false) };
    inline DescribeRCDisksResponseBodyDisks& setDeleteAutoSnapshot(bool deleteAutoSnapshot) { DARABONBA_PTR_SET_VALUE(deleteAutoSnapshot_, deleteAutoSnapshot) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeRCDisksResponseBodyDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCDisksResponseBodyDisks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeRCDisksResponseBodyDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeRCDisksResponseBodyDisks& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeRCDisksResponseBodyDisks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeRCDisksResponseBodyDisks& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeRCDisksResponseBodyDisks& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // IOPS Field Functions 
    bool hasIOPS() const { return this->IOPS_ != nullptr;};
    void deleteIOPS() { this->IOPS_ = nullptr;};
    inline int64_t IOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0L) };
    inline DescribeRCDisksResponseBodyDisks& setIOPS(int64_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeRCDisksResponseBodyDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeRCDisksResponseBodyDisks& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeRCDisksResponseBodyDisks& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceSnapshotId Field Functions 
    bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
    void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
    inline string sourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCDisksResponseBodyDisks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClusterId Field Functions 
    bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
    void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
    inline string storageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeRCDisksResponseBodyDisksTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeRCDisksResponseBodyDisksTag>) };
    inline vector<Models::DescribeRCDisksResponseBodyDisksTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeRCDisksResponseBodyDisksTag>) };
    inline DescribeRCDisksResponseBodyDisks& setTag(const vector<Models::DescribeRCDisksResponseBodyDisksTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCDisksResponseBodyDisks& setTag(vector<Models::DescribeRCDisksResponseBodyDisksTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRCDisksResponseBodyDisks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCDisksResponseBodyDisks& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The category of the disk. Valid values:
    // 
    // *   **cloud_efficiency**: ultra disk.
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_essd**: ESSD.
    // *   **cloud_auto**: Premium ESSD
    std::shared_ptr<string> category_ = nullptr;
    // The creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the automatic snapshots of the cloud disk are deleted after the disk is released. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deleteAutoSnapshot_ = nullptr;
    // Indicates whether the cloud disk is released when its associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The disk description.
    std::shared_ptr<string> description_ = nullptr;
    // The mount point of the disk.
    std::shared_ptr<string> device_ = nullptr;
    // The billing method of the disk.
    // 
    // Only **PostPaid** (pay-as-you-go) is supported.
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // The disk name.
    std::shared_ptr<string> diskName_ = nullptr;
    // Indicates whether only encrypted cloud disks are queried. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> encrypted_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × *Capacity - Baseline performance}. Baseline performance = min{1,800 + 50 × *Capacity, 50,000}
    // 
    // This parameter is available only when the `Category` parameter is set to `cloud_auto`.
    std::shared_ptr<int64_t> IOPS_ = nullptr;
    // The ID of the image that is used to create the instance. This parameter is returned only if the cloud disk is created from an image. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The performance level (PL) of the ESSD. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the disk belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The serial number of the disk.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The ID of the snapshot that was used to create the cloud disk.
    // 
    // This parameter is empty unless the cloud disk was created from a snapshot. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> sourceSnapshotId_ = nullptr;
    // The status of the disk. Valid values:
    // 
    // *   In_use: The disk is in use.
    // *   Available: The disk can be attached.
    // *   Attaching: The disk is being attached.
    // *   Detaching: The cloud disk is being detached.
    // *   Creating: The disk is being created.
    // *   ReIniting: The disk is being initialized.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the dedicated block storage cluster to which the cloud disk belongs. If your cloud disk belongs to the public block storage cluster, an empty value is returned.
    std::shared_ptr<string> storageClusterId_ = nullptr;
    // The storage set ID.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<Models::DescribeRCDisksResponseBodyDisksTag>> tag_ = nullptr;
    // The disk type. Valid values:
    // 
    // *   system: system disk
    // *   data: data disk
    std::shared_ptr<string> type_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
