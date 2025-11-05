// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODYDISKSDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODYDISKSDISK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_TO_JSON(BdfId, bdfId_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetachedTime, detachedTime_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(IOPS, IOPS_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(MountInstanceNum, mountInstanceNum_);
      DARABONBA_PTR_TO_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Portable, portable_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_FROM_JSON(BdfId, bdfId_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetachedTime, detachedTime_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(IOPS, IOPS_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(MountInstanceNum, mountInstanceNum_);
      DARABONBA_PTR_FROM_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Portable, portable_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk(const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk(DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk &&) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& operator=(const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& operator=(DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachedTime_ == nullptr
        && return this->bdfId_ == nullptr && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr && return this->deleteAutoSnapshot_ == nullptr && return this->deleteWithInstance_ == nullptr
        && return this->description_ == nullptr && return this->detachedTime_ == nullptr && return this->device_ == nullptr && return this->diskChargeType_ == nullptr && return this->diskId_ == nullptr
        && return this->diskName_ == nullptr && return this->enableAutoSnapshot_ == nullptr && return this->encrypted_ == nullptr && return this->IOPS_ == nullptr && return this->imageId_ == nullptr
        && return this->instanceId_ == nullptr && return this->KMSKeyId_ == nullptr && return this->mountInstanceNum_ == nullptr && return this->multiAttach_ == nullptr && return this->performanceLevel_ == nullptr
        && return this->portable_ == nullptr && return this->provisionedIops_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr && return this->sourceSnapshotId_ == nullptr
        && return this->status_ == nullptr && return this->storageClusterId_ == nullptr && return this->storageSetId_ == nullptr && return this->storageSetPartitionNumber_ == nullptr && return this->tags_ == nullptr
        && return this->throughput_ == nullptr && return this->type_ == nullptr && return this->zoneId_ == nullptr; };
    // attachedTime Field Functions 
    bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
    void deleteAttachedTime() { this->attachedTime_ = nullptr;};
    inline string attachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


    // bdfId Field Functions 
    bool hasBdfId() const { return this->bdfId_ != nullptr;};
    void deleteBdfId() { this->bdfId_ = nullptr;};
    inline string bdfId() const { DARABONBA_PTR_GET_DEFAULT(bdfId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setBdfId(string bdfId) { DARABONBA_PTR_SET_VALUE(bdfId_, bdfId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteAutoSnapshot Field Functions 
    bool hasDeleteAutoSnapshot() const { return this->deleteAutoSnapshot_ != nullptr;};
    void deleteDeleteAutoSnapshot() { this->deleteAutoSnapshot_ = nullptr;};
    inline bool deleteAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(deleteAutoSnapshot_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDeleteAutoSnapshot(bool deleteAutoSnapshot) { DARABONBA_PTR_SET_VALUE(deleteAutoSnapshot_, deleteAutoSnapshot) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detachedTime Field Functions 
    bool hasDetachedTime() const { return this->detachedTime_ != nullptr;};
    void deleteDetachedTime() { this->detachedTime_ = nullptr;};
    inline string detachedTime() const { DARABONBA_PTR_GET_DEFAULT(detachedTime_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDetachedTime(string detachedTime) { DARABONBA_PTR_SET_VALUE(detachedTime_, detachedTime) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // enableAutoSnapshot Field Functions 
    bool hasEnableAutoSnapshot() const { return this->enableAutoSnapshot_ != nullptr;};
    void deleteEnableAutoSnapshot() { this->enableAutoSnapshot_ = nullptr;};
    inline bool enableAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSnapshot_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setEnableAutoSnapshot(bool enableAutoSnapshot) { DARABONBA_PTR_SET_VALUE(enableAutoSnapshot_, enableAutoSnapshot) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // IOPS Field Functions 
    bool hasIOPS() const { return this->IOPS_ != nullptr;};
    void deleteIOPS() { this->IOPS_ = nullptr;};
    inline int64_t IOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0L) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setIOPS(int64_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // mountInstanceNum Field Functions 
    bool hasMountInstanceNum() const { return this->mountInstanceNum_ != nullptr;};
    void deleteMountInstanceNum() { this->mountInstanceNum_ = nullptr;};
    inline int32_t mountInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(mountInstanceNum_, 0) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setMountInstanceNum(int32_t mountInstanceNum) { DARABONBA_PTR_SET_VALUE(mountInstanceNum_, mountInstanceNum) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string multiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // portable Field Functions 
    bool hasPortable() const { return this->portable_ != nullptr;};
    void deletePortable() { this->portable_ = nullptr;};
    inline bool portable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceSnapshotId Field Functions 
    bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
    void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
    inline string sourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClusterId Field Functions 
    bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
    void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
    inline string storageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags>) };
    inline vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags>) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setTags(const vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setTags(vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int64_t throughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the cloud disk was last attached. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> attachedTime_ = nullptr;
    // This parameter is currently in invitational preview and unavailable for general users.
    std::shared_ptr<string> bdfId_ = nullptr;
    // Whether the ESSD AutoPL disk is enabled burst IOPS / BPS. This parameter is available only if the DiskCategory parameter is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The category of the disk. A value of cloud_essd indicates that the disk is an ESSD.
    std::shared_ptr<string> category_ = nullptr;
    // Indicates whether the automatic snapshots of the cloud disk are deleted when the disk is released. Valid values:
    // 
    // *   true: The automatic snapshots of the cloud disk are deleted when the disk is released.
    // *   false: The automatic snapshots of the cloud disk are retained when the disk is released.
    // 
    // Snapshots that are created by calling the [CreateSnapshot](https://help.aliyun.com/document_detail/25524.html) operation or by using the Elastic Compute Service (ECS) console are retained and not affected by this parameter.
    std::shared_ptr<bool> deleteAutoSnapshot_ = nullptr;
    // Indicates whether the cloud disk is released when its associated instance is released. Valid values:
    // 
    // *   true: The cloud disk is released when its associated instance is released.
    // *   false: The cloud disk is retained when its associated instance is released.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The description of the cloud disk.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the cloud disk was last detached.
    std::shared_ptr<string> detachedTime_ = nullptr;
    // The device name of the cloud disk on its associated instance. Example: /dev/xvdb. Take note of the following items:
    // 
    // *   This parameter has a value only when the `Status` value is `In_use`.
    // *   This parameter is empty for cloud disks that have the multi-attach feature enabled. You can query the attachment information of the cloud disk based on the `Attachment` values.
    // 
    // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> device_ = nullptr;
    // The billing method of the cloud disk. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The ID of the cloud disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the cloud disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // Indicates whether the automatic snapshot policy feature is enabled for the cloud disk.
    std::shared_ptr<bool> enableAutoSnapshot_ = nullptr;
    // Indicates whether the cloud disk is encrypted.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The maximum number of IOPS.
    std::shared_ptr<int64_t> IOPS_ = nullptr;
    // The ID of the image that was used to create the instance. This parameter is empty unless the cloud disk was created from an image. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the instance to which the cloud disk is attached. Take note of the following items:
    // 
    // *   This parameter has a value only when the `Status` value is `In_use`.
    // *   This parameter is empty for cloud disks that have the multi-attach feature enabled. You can query the attachment information of the cloud disk based on the `Attachment` values.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the Key Management Service (KMS) key used by the cloud disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The number of instances to which the Shared Block Storage device is attached.
    std::shared_ptr<int32_t> mountInstanceNum_ = nullptr;
    // Indicates whether the multi-attach feature was enabled for the cloud disk.
    std::shared_ptr<string> multiAttach_ = nullptr;
    // The performance level of the enhanced SSD (ESSD). Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // Indicates whether the cloud disk is removable.
    std::shared_ptr<bool> portable_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk. 
    // >  This parameter is available only if the DiskCategory parameter is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the performance configurations of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The region ID of cloud disk.
    std::shared_ptr<string> regionId_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot that was used to create the cloud disk.
    // 
    // This parameter is empty unless the cloud disk was created from a snapshot. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> sourceSnapshotId_ = nullptr;
    // The state of the cloud disk. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html). Valid values:
    // 
    // *   In_use
    // *   Available
    // *   Attaching
    // *   Detaching
    // *   Creating
    // *   ReIniting
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the dedicated block storage cluster to which the cloud disk belongs. If your cloud disk belongs to the public block storage cluster, an empty value is returned.
    std::shared_ptr<string> storageClusterId_ = nullptr;
    // The ID of the storage set.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The maximum number of partitions in the storage set.
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The tags of the cloud disk.
    std::shared_ptr<vector<Models::DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags>> tags_ = nullptr;
    // The maximum number of BPS.
    std::shared_ptr<int64_t> throughput_ = nullptr;
    // The type of the disk. Valid values:
    // 
    // *   system: system disk
    // *   data: data disk
    std::shared_ptr<string> type_ = nullptr;
    // The zone ID of cloud disk.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
