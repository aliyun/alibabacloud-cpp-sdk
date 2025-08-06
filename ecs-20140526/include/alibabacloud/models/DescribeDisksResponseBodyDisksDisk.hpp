// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskAttachments.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskMountInstances.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskOperationLocks.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskPlacement.hpp>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDiskTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(BdfId, bdfId_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetachedTime, detachedTime_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(EnableAutomatedSnapshotPolicy, enableAutomatedSnapshotPolicy_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(IOPS, IOPS_);
      DARABONBA_PTR_TO_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_TO_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(MountInstanceNum, mountInstanceNum_);
      DARABONBA_PTR_TO_JSON(MountInstances, mountInstances_);
      DARABONBA_PTR_TO_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Placement, placement_);
      DARABONBA_PTR_TO_JSON(Portable, portable_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
      DARABONBA_PTR_TO_JSON(ThroughputRead, throughputRead_);
      DARABONBA_PTR_TO_JSON(ThroughputWrite, throughputWrite_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(BdfId, bdfId_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetachedTime, detachedTime_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(EnableAutomatedSnapshotPolicy, enableAutomatedSnapshotPolicy_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(IOPS, IOPS_);
      DARABONBA_PTR_FROM_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_FROM_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(MountInstanceNum, mountInstanceNum_);
      DARABONBA_PTR_FROM_JSON(MountInstances, mountInstances_);
      DARABONBA_PTR_FROM_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Placement, placement_);
      DARABONBA_PTR_FROM_JSON(Portable, portable_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
      DARABONBA_PTR_FROM_JSON(ThroughputRead, throughputRead_);
      DARABONBA_PTR_FROM_JSON(ThroughputWrite, throughputWrite_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDisksResponseBodyDisksDisk() = default ;
    DescribeDisksResponseBodyDisksDisk(const DescribeDisksResponseBodyDisksDisk &) = default ;
    DescribeDisksResponseBodyDisksDisk(DescribeDisksResponseBodyDisksDisk &&) = default ;
    DescribeDisksResponseBodyDisksDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDisk() = default ;
    DescribeDisksResponseBodyDisksDisk& operator=(const DescribeDisksResponseBodyDisksDisk &) = default ;
    DescribeDisksResponseBodyDisksDisk& operator=(DescribeDisksResponseBodyDisksDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachedTime_ != nullptr
        && this->attachments_ != nullptr && this->autoSnapshotPolicyId_ != nullptr && this->bdfId_ != nullptr && this->burstingEnabled_ != nullptr && this->category_ != nullptr
        && this->creationTime_ != nullptr && this->deleteAutoSnapshot_ != nullptr && this->deleteWithInstance_ != nullptr && this->description_ != nullptr && this->detachedTime_ != nullptr
        && this->device_ != nullptr && this->diskChargeType_ != nullptr && this->diskId_ != nullptr && this->diskName_ != nullptr && this->enableAutoSnapshot_ != nullptr
        && this->enableAutomatedSnapshotPolicy_ != nullptr && this->encrypted_ != nullptr && this->expiredTime_ != nullptr && this->IOPS_ != nullptr && this->IOPSRead_ != nullptr
        && this->IOPSWrite_ != nullptr && this->imageId_ != nullptr && this->instanceId_ != nullptr && this->KMSKeyId_ != nullptr && this->mountInstanceNum_ != nullptr
        && this->mountInstances_ != nullptr && this->multiAttach_ != nullptr && this->operationLocks_ != nullptr && this->performanceLevel_ != nullptr && this->placement_ != nullptr
        && this->portable_ != nullptr && this->productCode_ != nullptr && this->provisionedIops_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serialNumber_ != nullptr && this->size_ != nullptr && this->sourceSnapshotId_ != nullptr && this->status_ != nullptr && this->storageClusterId_ != nullptr
        && this->storageSetId_ != nullptr && this->storageSetPartitionNumber_ != nullptr && this->tags_ != nullptr && this->throughput_ != nullptr && this->throughputRead_ != nullptr
        && this->throughputWrite_ != nullptr && this->type_ != nullptr && this->zoneId_ != nullptr; };
    // attachedTime Field Functions 
    bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
    void deleteAttachedTime() { this->attachedTime_ = nullptr;};
    inline string attachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDiskAttachments & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, Models::DescribeDisksResponseBodyDisksDiskAttachments) };
    inline Models::DescribeDisksResponseBodyDisksDiskAttachments attachments() { DARABONBA_PTR_GET(attachments_, Models::DescribeDisksResponseBodyDisksDiskAttachments) };
    inline DescribeDisksResponseBodyDisksDisk& setAttachments(const Models::DescribeDisksResponseBodyDisksDiskAttachments & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline DescribeDisksResponseBodyDisksDisk& setAttachments(Models::DescribeDisksResponseBodyDisksDiskAttachments && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // bdfId Field Functions 
    bool hasBdfId() const { return this->bdfId_ != nullptr;};
    void deleteBdfId() { this->bdfId_ = nullptr;};
    inline string bdfId() const { DARABONBA_PTR_GET_DEFAULT(bdfId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setBdfId(string bdfId) { DARABONBA_PTR_SET_VALUE(bdfId_, bdfId) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteAutoSnapshot Field Functions 
    bool hasDeleteAutoSnapshot() const { return this->deleteAutoSnapshot_ != nullptr;};
    void deleteDeleteAutoSnapshot() { this->deleteAutoSnapshot_ = nullptr;};
    inline bool deleteAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(deleteAutoSnapshot_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setDeleteAutoSnapshot(bool deleteAutoSnapshot) { DARABONBA_PTR_SET_VALUE(deleteAutoSnapshot_, deleteAutoSnapshot) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detachedTime Field Functions 
    bool hasDetachedTime() const { return this->detachedTime_ != nullptr;};
    void deleteDetachedTime() { this->detachedTime_ = nullptr;};
    inline string detachedTime() const { DARABONBA_PTR_GET_DEFAULT(detachedTime_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDetachedTime(string detachedTime) { DARABONBA_PTR_SET_VALUE(detachedTime_, detachedTime) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // enableAutoSnapshot Field Functions 
    bool hasEnableAutoSnapshot() const { return this->enableAutoSnapshot_ != nullptr;};
    void deleteEnableAutoSnapshot() { this->enableAutoSnapshot_ = nullptr;};
    inline bool enableAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSnapshot_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setEnableAutoSnapshot(bool enableAutoSnapshot) { DARABONBA_PTR_SET_VALUE(enableAutoSnapshot_, enableAutoSnapshot) };


    // enableAutomatedSnapshotPolicy Field Functions 
    bool hasEnableAutomatedSnapshotPolicy() const { return this->enableAutomatedSnapshotPolicy_ != nullptr;};
    void deleteEnableAutomatedSnapshotPolicy() { this->enableAutomatedSnapshotPolicy_ = nullptr;};
    inline bool enableAutomatedSnapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(enableAutomatedSnapshotPolicy_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(enableAutomatedSnapshotPolicy_, enableAutomatedSnapshotPolicy) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // IOPS Field Functions 
    bool hasIOPS() const { return this->IOPS_ != nullptr;};
    void deleteIOPS() { this->IOPS_ = nullptr;};
    inline int32_t IOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setIOPS(int32_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


    // IOPSRead Field Functions 
    bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
    void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
    inline int32_t IOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


    // IOPSWrite Field Functions 
    bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
    void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
    inline int32_t IOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // mountInstanceNum Field Functions 
    bool hasMountInstanceNum() const { return this->mountInstanceNum_ != nullptr;};
    void deleteMountInstanceNum() { this->mountInstanceNum_ = nullptr;};
    inline int32_t mountInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(mountInstanceNum_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setMountInstanceNum(int32_t mountInstanceNum) { DARABONBA_PTR_SET_VALUE(mountInstanceNum_, mountInstanceNum) };


    // mountInstances Field Functions 
    bool hasMountInstances() const { return this->mountInstances_ != nullptr;};
    void deleteMountInstances() { this->mountInstances_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDiskMountInstances & mountInstances() const { DARABONBA_PTR_GET_CONST(mountInstances_, Models::DescribeDisksResponseBodyDisksDiskMountInstances) };
    inline Models::DescribeDisksResponseBodyDisksDiskMountInstances mountInstances() { DARABONBA_PTR_GET(mountInstances_, Models::DescribeDisksResponseBodyDisksDiskMountInstances) };
    inline DescribeDisksResponseBodyDisksDisk& setMountInstances(const Models::DescribeDisksResponseBodyDisksDiskMountInstances & mountInstances) { DARABONBA_PTR_SET_VALUE(mountInstances_, mountInstances) };
    inline DescribeDisksResponseBodyDisksDisk& setMountInstances(Models::DescribeDisksResponseBodyDisksDiskMountInstances && mountInstances) { DARABONBA_PTR_SET_RVALUE(mountInstances_, mountInstances) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string multiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDiskOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeDisksResponseBodyDisksDiskOperationLocks) };
    inline Models::DescribeDisksResponseBodyDisksDiskOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeDisksResponseBodyDisksDiskOperationLocks) };
    inline DescribeDisksResponseBodyDisksDisk& setOperationLocks(const Models::DescribeDisksResponseBodyDisksDiskOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDisksResponseBodyDisksDisk& setOperationLocks(Models::DescribeDisksResponseBodyDisksDiskOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // placement Field Functions 
    bool hasPlacement() const { return this->placement_ != nullptr;};
    void deletePlacement() { this->placement_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDiskPlacement & placement() const { DARABONBA_PTR_GET_CONST(placement_, Models::DescribeDisksResponseBodyDisksDiskPlacement) };
    inline Models::DescribeDisksResponseBodyDisksDiskPlacement placement() { DARABONBA_PTR_GET(placement_, Models::DescribeDisksResponseBodyDisksDiskPlacement) };
    inline DescribeDisksResponseBodyDisksDisk& setPlacement(const Models::DescribeDisksResponseBodyDisksDiskPlacement & placement) { DARABONBA_PTR_SET_VALUE(placement_, placement) };
    inline DescribeDisksResponseBodyDisksDisk& setPlacement(Models::DescribeDisksResponseBodyDisksDiskPlacement && placement) { DARABONBA_PTR_SET_RVALUE(placement_, placement) };


    // portable Field Functions 
    bool hasPortable() const { return this->portable_ != nullptr;};
    void deletePortable() { this->portable_ = nullptr;};
    inline bool portable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
    inline DescribeDisksResponseBodyDisksDisk& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline DescribeDisksResponseBodyDisksDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceSnapshotId Field Functions 
    bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
    void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
    inline string sourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClusterId Field Functions 
    bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
    void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
    inline string storageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDisksResponseBodyDisksDiskTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDisksResponseBodyDisksDiskTags) };
    inline Models::DescribeDisksResponseBodyDisksDiskTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDisksResponseBodyDisksDiskTags) };
    inline DescribeDisksResponseBodyDisksDisk& setTags(const Models::DescribeDisksResponseBodyDisksDiskTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDisksResponseBodyDisksDisk& setTags(Models::DescribeDisksResponseBodyDisksDiskTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int32_t throughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setThroughput(int32_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    // throughputRead Field Functions 
    bool hasThroughputRead() const { return this->throughputRead_ != nullptr;};
    void deleteThroughputRead() { this->throughputRead_ = nullptr;};
    inline int32_t throughputRead() const { DARABONBA_PTR_GET_DEFAULT(throughputRead_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setThroughputRead(int32_t throughputRead) { DARABONBA_PTR_SET_VALUE(throughputRead_, throughputRead) };


    // throughputWrite Field Functions 
    bool hasThroughputWrite() const { return this->throughputWrite_ != nullptr;};
    void deleteThroughputWrite() { this->throughputWrite_ = nullptr;};
    inline int32_t throughputWrite() const { DARABONBA_PTR_GET_DEFAULT(throughputWrite_, 0) };
    inline DescribeDisksResponseBodyDisksDisk& setThroughputWrite(int32_t throughputWrite) { DARABONBA_PTR_SET_VALUE(throughputWrite_, throughputWrite) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDisksResponseBodyDisksDisk& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the disk was last attached. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> attachedTime_ = nullptr;
    // The attachment information of the disk. The value is an array that consists of the `Attachment` values. This value is not returned when you query Shared Block Storage devices.
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDiskAttachments> attachments_ = nullptr;
    // The ID of the automatic snapshot policy that is applied to the cloud disk.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> bdfId_ = nullptr;
    // Indicates whether the performance burst feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is available only if you set `Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The category of the disk. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    // *   cloud_auto: ESSD AutoPL disk
    // *   local_ssd_pro: I/O-intensive local disk
    // *   local_hdd_pro: throughput-intensive local disk
    // *   cloud_essd_entry: ESSD Entry disk
    // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk
    // *   elastic_ephemeral_disk_premium: premium static ephemeral disk
    // *   ephemeral: retired local disk
    // *   ephemeral_ssd: retired local SSD
    std::shared_ptr<string> category_ = nullptr;
    // The time when the disk was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the automatic snapshots of the cloud disk are deleted when the cloud disk is released. Valid values:
    // 
    // *   true: The automatic snapshots of the cloud disk are deleted when the disk is released.
    // *   false: The automatic snapshots of the cloud disk are retained when the disk is released.
    // 
    // Snapshots that were created in the ECS console or by calling the [CreateSnapshot](https://help.aliyun.com/document_detail/25524.html) operation are retained and not affected by this parameter.
    std::shared_ptr<bool> deleteAutoSnapshot_ = nullptr;
    // Indicates whether the disk is released when the instance to which the disk is attached is released. Valid values:
    // 
    // *   true: The disk is released when the associated instance is released.
    // *   false: The disk is retained when the associated instance is released.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The description of the disk.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the disk was last detached.
    std::shared_ptr<string> detachedTime_ = nullptr;
    // The device name of the disk on the instance to which the disk is attached. Example: /dev/xvdb. Take note of the following items:
    // 
    // *   This parameter has a value only when the `Status` value is `In_use` or `Detaching`.
    // *   This parameter is empty for cloud disks for which the multi-attach feature is enabled. You can query the attachment information of the cloud disk based on the returned list of `Attachment` objects.
    // 
    // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> device_ = nullptr;
    // The billing method of the disk. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // Indicates whether the automatic snapshot policy feature is enabled for the cloud disk.
    // 
    // >  This parameter is deprecated. By default, the automatic snapshot policy feature is enabled for cloud disks. You need to only apply an automatic snapshot policy to a cloud disk before you can use the automatic snapshot policy.
    std::shared_ptr<bool> enableAutoSnapshot_ = nullptr;
    // Indicates whether an automatic snapshot policy is applied to the cloud disk.
    std::shared_ptr<bool> enableAutomatedSnapshotPolicy_ = nullptr;
    // Indicates whether the cloud disk is encrypted.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The time when the subscription disk expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The maximum number of read and write operations per second.
    std::shared_ptr<int32_t> IOPS_ = nullptr;
    // The maximum number of read operations per second.
    std::shared_ptr<int32_t> IOPSRead_ = nullptr;
    // The maximum number of write operations per second.
    std::shared_ptr<int32_t> IOPSWrite_ = nullptr;
    // The ID of the image that was used to create the instance. This parameter is empty unless the cloud disk was created from an image. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the instance to which the disk is attached. Take note of the following items:
    // 
    // *   This parameter has a value only when the `Status` value is `In_use` or `Detaching`.
    // *   This parameter is empty for cloud disks for which the multi-attach feature is enabled. You can query the attachment information of the cloud disk based on the returned `Attachment` objects.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the KMS key that is used for the cloud disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The number of instances to which the Shared Block Storage device is attached.
    std::shared_ptr<int32_t> mountInstanceNum_ = nullptr;
    // The attachment information of the Shared Block Storage device.
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDiskMountInstances> mountInstances_ = nullptr;
    // Indicates whether the multi-attach feature is enabled for the cloud disk.
    std::shared_ptr<string> multiAttach_ = nullptr;
    // The reasons why the disk was locked.
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDiskOperationLocks> operationLocks_ = nullptr;
    // The performance level of the ESSD. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The locations in which data is stored.
    // 
    // This parameter is returned only if you specify `Placement` in the AdditionalAttributes.N request parameter.
    // 
    // >  This parameter is valid only for Regional ESSDs (cloud_regional_disk_auto).
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDiskPlacement> placement_ = nullptr;
    // Indicates whether the disk is removable.
    std::shared_ptr<bool> portable_ = nullptr;
    // The product code of the disk in Alibaba Cloud Marketplace.
    std::shared_ptr<string> productCode_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × *Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × *Capacity, 50,000}
    // 
    // This parameter is available only if you set `Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The ID of the region to which the disk belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the disk belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The serial number of the disk.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot that was used to create the cloud disk.
    // 
    // This parameter is empty unless the cloud disk was created from a snapshot. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
    std::shared_ptr<string> sourceSnapshotId_ = nullptr;
    // The status of the disk. Valid values:
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
    // The tags of the disk.
    std::shared_ptr<Models::DescribeDisksResponseBodyDisksDiskTags> tags_ = nullptr;
    // The amount of data that can be transferred per second. Unit: MB/s.
    std::shared_ptr<int32_t> throughput_ = nullptr;
    // The amount of data that can be read per second. Unit: MB/s.
    std::shared_ptr<int32_t> throughputRead_ = nullptr;
    // The amount of data that can be written per second. Unit: MB/s.
    std::shared_ptr<int32_t> throughputWrite_ = nullptr;
    // The type of the disk. Valid values:
    // 
    // *   system: system disk
    // *   data: data disk
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the zone to which the disk belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
