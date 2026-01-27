// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClusterDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClusterDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClusterDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedBlockStorageClusterDisksResponseBody() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(const DescribeDedicatedBlockStorageClusterDisksResponseBody &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(DescribeDedicatedBlockStorageClusterDisksResponseBody &&) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBody() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody& operator=(const DescribeDedicatedBlockStorageClusterDisksResponseBody &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody& operator=(DescribeDedicatedBlockStorageClusterDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Disks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Disks& obj) { 
        DARABONBA_PTR_TO_JSON(Disk, disk_);
      };
      friend void from_json(const Darabonba::Json& j, Disks& obj) { 
        DARABONBA_PTR_FROM_JSON(Disk, disk_);
      };
      Disks() = default ;
      Disks(const Disks &) = default ;
      Disks(Disks &&) = default ;
      Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Disks() = default ;
      Disks& operator=(const Disks &) = default ;
      Disks& operator=(Disks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Disk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disk& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Disk& obj) { 
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
        Disk() = default ;
        Disk(const Disk &) = default ;
        Disk(Disk &&) = default ;
        Disk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disk() = default ;
        Disk& operator=(const Disk &) = default ;
        Disk& operator=(Disk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key of the cloud disk.
          shared_ptr<string> tagKey_ {};
          // The tag value of the cloud disk.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->attachedTime_ == nullptr
        && this->bdfId_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->deleteAutoSnapshot_ == nullptr && this->deleteWithInstance_ == nullptr
        && this->description_ == nullptr && this->detachedTime_ == nullptr && this->device_ == nullptr && this->diskChargeType_ == nullptr && this->diskId_ == nullptr
        && this->diskName_ == nullptr && this->enableAutoSnapshot_ == nullptr && this->encrypted_ == nullptr && this->IOPS_ == nullptr && this->imageId_ == nullptr
        && this->instanceId_ == nullptr && this->KMSKeyId_ == nullptr && this->mountInstanceNum_ == nullptr && this->multiAttach_ == nullptr && this->performanceLevel_ == nullptr
        && this->portable_ == nullptr && this->provisionedIops_ == nullptr && this->regionId_ == nullptr && this->size_ == nullptr && this->sourceSnapshotId_ == nullptr
        && this->status_ == nullptr && this->storageClusterId_ == nullptr && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr && this->tags_ == nullptr
        && this->throughput_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
        // attachedTime Field Functions 
        bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
        void deleteAttachedTime() { this->attachedTime_ = nullptr;};
        inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
        inline Disk& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


        // bdfId Field Functions 
        bool hasBdfId() const { return this->bdfId_ != nullptr;};
        void deleteBdfId() { this->bdfId_ = nullptr;};
        inline string getBdfId() const { DARABONBA_PTR_GET_DEFAULT(bdfId_, "") };
        inline Disk& setBdfId(string bdfId) { DARABONBA_PTR_SET_VALUE(bdfId_, bdfId) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline Disk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Disk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // deleteAutoSnapshot Field Functions 
        bool hasDeleteAutoSnapshot() const { return this->deleteAutoSnapshot_ != nullptr;};
        void deleteDeleteAutoSnapshot() { this->deleteAutoSnapshot_ = nullptr;};
        inline bool getDeleteAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(deleteAutoSnapshot_, false) };
        inline Disk& setDeleteAutoSnapshot(bool deleteAutoSnapshot) { DARABONBA_PTR_SET_VALUE(deleteAutoSnapshot_, deleteAutoSnapshot) };


        // deleteWithInstance Field Functions 
        bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
        void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
        inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
        inline Disk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Disk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // detachedTime Field Functions 
        bool hasDetachedTime() const { return this->detachedTime_ != nullptr;};
        void deleteDetachedTime() { this->detachedTime_ = nullptr;};
        inline string getDetachedTime() const { DARABONBA_PTR_GET_DEFAULT(detachedTime_, "") };
        inline Disk& setDetachedTime(string detachedTime) { DARABONBA_PTR_SET_VALUE(detachedTime_, detachedTime) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline Disk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskChargeType Field Functions 
        bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
        void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
        inline string getDiskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
        inline Disk& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline Disk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline Disk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // enableAutoSnapshot Field Functions 
        bool hasEnableAutoSnapshot() const { return this->enableAutoSnapshot_ != nullptr;};
        void deleteEnableAutoSnapshot() { this->enableAutoSnapshot_ = nullptr;};
        inline bool getEnableAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSnapshot_, false) };
        inline Disk& setEnableAutoSnapshot(bool enableAutoSnapshot) { DARABONBA_PTR_SET_VALUE(enableAutoSnapshot_, enableAutoSnapshot) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline Disk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // IOPS Field Functions 
        bool hasIOPS() const { return this->IOPS_ != nullptr;};
        void deleteIOPS() { this->IOPS_ = nullptr;};
        inline int64_t getIOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0L) };
        inline Disk& setIOPS(int64_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Disk& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Disk& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline Disk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // mountInstanceNum Field Functions 
        bool hasMountInstanceNum() const { return this->mountInstanceNum_ != nullptr;};
        void deleteMountInstanceNum() { this->mountInstanceNum_ = nullptr;};
        inline int32_t getMountInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(mountInstanceNum_, 0) };
        inline Disk& setMountInstanceNum(int32_t mountInstanceNum) { DARABONBA_PTR_SET_VALUE(mountInstanceNum_, mountInstanceNum) };


        // multiAttach Field Functions 
        bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
        void deleteMultiAttach() { this->multiAttach_ = nullptr;};
        inline string getMultiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
        inline Disk& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline Disk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // portable Field Functions 
        bool hasPortable() const { return this->portable_ != nullptr;};
        void deletePortable() { this->portable_ = nullptr;};
        inline bool getPortable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
        inline Disk& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


        // provisionedIops Field Functions 
        bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
        void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
        inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
        inline Disk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Disk& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline Disk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // sourceSnapshotId Field Functions 
        bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
        void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
        inline string getSourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
        inline Disk& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Disk& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClusterId Field Functions 
        bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
        void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
        inline string getStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
        inline Disk& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


        // storageSetId Field Functions 
        bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
        void deleteStorageSetId() { this->storageSetId_ = nullptr;};
        inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
        inline Disk& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


        // storageSetPartitionNumber Field Functions 
        bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
        void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
        inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
        inline Disk& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Disk::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Disk::Tags>) };
        inline vector<Disk::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Disk::Tags>) };
        inline Disk& setTags(const vector<Disk::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Disk& setTags(vector<Disk::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // throughput Field Functions 
        bool hasThroughput() const { return this->throughput_ != nullptr;};
        void deleteThroughput() { this->throughput_ = nullptr;};
        inline int64_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0L) };
        inline Disk& setThroughput(int64_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Disk& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Disk& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the cloud disk was last attached. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
        shared_ptr<string> attachedTime_ {};
        // This parameter is currently in invitational preview and unavailable for general users.
        shared_ptr<string> bdfId_ {};
        // Whether the ESSD AutoPL disk is enabled burst IOPS / BPS. This parameter is available only if the DiskCategory parameter is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
        // The category of the disk. A value of cloud_essd indicates that the disk is an ESSD.
        shared_ptr<string> category_ {};
        // Indicates whether the automatic snapshots of the cloud disk are deleted when the disk is released. Valid values:
        // 
        // *   true: The automatic snapshots of the cloud disk are deleted when the disk is released.
        // *   false: The automatic snapshots of the cloud disk are retained when the disk is released.
        // 
        // Snapshots that are created by calling the [CreateSnapshot](https://help.aliyun.com/document_detail/25524.html) operation or by using the Elastic Compute Service (ECS) console are retained and not affected by this parameter.
        shared_ptr<bool> deleteAutoSnapshot_ {};
        // Indicates whether the cloud disk is released when its associated instance is released. Valid values:
        // 
        // *   true: The cloud disk is released when its associated instance is released.
        // *   false: The cloud disk is retained when its associated instance is released.
        shared_ptr<bool> deleteWithInstance_ {};
        // The description of the cloud disk.
        shared_ptr<string> description_ {};
        // The time when the cloud disk was last detached.
        shared_ptr<string> detachedTime_ {};
        // The device name of the cloud disk on its associated instance. Example: /dev/xvdb. Take note of the following items:
        // 
        // *   This parameter has a value only when the `Status` value is `In_use`.
        // *   This parameter is empty for cloud disks that have the multi-attach feature enabled. You can query the attachment information of the cloud disk based on the `Attachment` values.
        // 
        // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<string> device_ {};
        // The billing method of the cloud disk. Valid values:
        // 
        // *   PrePaid: subscription
        // *   PostPaid: pay-as-you-go
        shared_ptr<string> diskChargeType_ {};
        // The ID of the cloud disk.
        shared_ptr<string> diskId_ {};
        // The name of the cloud disk.
        shared_ptr<string> diskName_ {};
        // Indicates whether the automatic snapshot policy feature is enabled for the cloud disk.
        shared_ptr<bool> enableAutoSnapshot_ {};
        // Indicates whether the cloud disk is encrypted.
        shared_ptr<bool> encrypted_ {};
        // The maximum number of IOPS.
        shared_ptr<int64_t> IOPS_ {};
        // The ID of the image that was used to create the instance. This parameter is empty unless the cloud disk was created from an image. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
        shared_ptr<string> imageId_ {};
        // The ID of the instance to which the cloud disk is attached. Take note of the following items:
        // 
        // *   This parameter has a value only when the `Status` value is `In_use`.
        // *   This parameter is empty for cloud disks that have the multi-attach feature enabled. You can query the attachment information of the cloud disk based on the `Attachment` values.
        shared_ptr<string> instanceId_ {};
        // The ID of the Key Management Service (KMS) key used by the cloud disk.
        shared_ptr<string> KMSKeyId_ {};
        // The number of instances to which the Shared Block Storage device is attached.
        shared_ptr<int32_t> mountInstanceNum_ {};
        // Indicates whether the multi-attach feature was enabled for the cloud disk.
        shared_ptr<string> multiAttach_ {};
        // The performance level of the enhanced SSD (ESSD). Valid values:
        // 
        // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
        // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
        // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
        // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
        shared_ptr<string> performanceLevel_ {};
        // Indicates whether the cloud disk is removable.
        shared_ptr<bool> portable_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk. 
        // >  This parameter is available only if the DiskCategory parameter is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the performance configurations of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
        shared_ptr<int64_t> provisionedIops_ {};
        // The region ID of cloud disk.
        shared_ptr<string> regionId_ {};
        // The size of the disk. Unit: GiB.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot that was used to create the cloud disk.
        // 
        // This parameter is empty unless the cloud disk was created from a snapshot. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
        shared_ptr<string> sourceSnapshotId_ {};
        // The state of the cloud disk. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html). Valid values:
        // 
        // *   In_use
        // *   Available
        // *   Attaching
        // *   Detaching
        // *   Creating
        // *   ReIniting
        shared_ptr<string> status_ {};
        // The ID of the dedicated block storage cluster to which the cloud disk belongs. If your cloud disk belongs to the public block storage cluster, an empty value is returned.
        shared_ptr<string> storageClusterId_ {};
        // The ID of the storage set.
        shared_ptr<string> storageSetId_ {};
        // The maximum number of partitions in the storage set.
        shared_ptr<int32_t> storageSetPartitionNumber_ {};
        // The tags of the cloud disk.
        shared_ptr<vector<Disk::Tags>> tags_ {};
        // The maximum number of BPS.
        shared_ptr<int64_t> throughput_ {};
        // The type of the disk. Valid values:
        // 
        // *   system: system disk
        // *   data: data disk
        shared_ptr<string> type_ {};
        // The zone ID of cloud disk.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->disk_ == nullptr; };
      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline const vector<Disks::Disk> & getDisk() const { DARABONBA_PTR_GET_CONST(disk_, vector<Disks::Disk>) };
      inline vector<Disks::Disk> getDisk() { DARABONBA_PTR_GET(disk_, vector<Disks::Disk>) };
      inline Disks& setDisk(const vector<Disks::Disk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
      inline Disks& setDisk(vector<Disks::Disk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


    protected:
      // Details about the cloud disks.
      shared_ptr<vector<Disks::Disk>> disk_ {};
    };

    virtual bool empty() const override { return this->disks_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks getDisks() { DARABONBA_PTR_GET(disks_, DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setDisks(const DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setDisks(DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the cloud disks.
    shared_ptr<DescribeDedicatedBlockStorageClusterDisksResponseBody::Disks> disks_ {};
    // The query token returned in this call.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
