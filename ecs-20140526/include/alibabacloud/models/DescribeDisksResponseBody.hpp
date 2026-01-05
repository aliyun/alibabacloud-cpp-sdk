// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDisksResponseBody() = default ;
    DescribeDisksResponseBody(const DescribeDisksResponseBody &) = default ;
    DescribeDisksResponseBody(DescribeDisksResponseBody &&) = default ;
    DescribeDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBody() = default ;
    DescribeDisksResponseBody& operator=(const DescribeDisksResponseBody &) = default ;
    DescribeDisksResponseBody& operator=(DescribeDisksResponseBody &&) = default ;
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
        friend void from_json(const Darabonba::Json& j, Disk& obj) { 
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
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key of the disk.
            shared_ptr<string> tagKey_ {};
            // The tag value of the disk.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class Placement : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Placement& obj) { 
            DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
          };
          friend void from_json(const Darabonba::Json& j, Placement& obj) { 
            DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
          };
          Placement() = default ;
          Placement(const Placement &) = default ;
          Placement(Placement &&) = default ;
          Placement(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Placement() = default ;
          Placement& operator=(const Placement &) = default ;
          Placement& operator=(Placement &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->zoneIds_ == nullptr; };
          // zoneIds Field Functions 
          bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
          void deleteZoneIds() { this->zoneIds_ = nullptr;};
          inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
          inline Placement& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


        protected:
          // The IDs of the zones in which data is stored.
          shared_ptr<string> zoneIds_ {};
        };

        class OperationLocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
            DARABONBA_PTR_TO_JSON(OperationLock, operationLock_);
          };
          friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
            DARABONBA_PTR_FROM_JSON(OperationLock, operationLock_);
          };
          OperationLocks() = default ;
          OperationLocks(const OperationLocks &) = default ;
          OperationLocks(OperationLocks &&) = default ;
          OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationLocks() = default ;
          OperationLocks& operator=(const OperationLocks &) = default ;
          OperationLocks& operator=(OperationLocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OperationLock : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OperationLock& obj) { 
              DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            };
            friend void from_json(const Darabonba::Json& j, OperationLock& obj) { 
              DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            };
            OperationLock() = default ;
            OperationLock(const OperationLock &) = default ;
            OperationLock(OperationLock &&) = default ;
            OperationLock(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OperationLock() = default ;
            OperationLock& operator=(const OperationLock &) = default ;
            OperationLock& operator=(OperationLock &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->lockReason_ == nullptr; };
            // lockReason Field Functions 
            bool hasLockReason() const { return this->lockReason_ != nullptr;};
            void deleteLockReason() { this->lockReason_ = nullptr;};
            inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
            inline OperationLock& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          protected:
            // The reason why the disk was locked.
            shared_ptr<string> lockReason_ {};
          };

          virtual bool empty() const override { return this->operationLock_ == nullptr; };
          // operationLock Field Functions 
          bool hasOperationLock() const { return this->operationLock_ != nullptr;};
          void deleteOperationLock() { this->operationLock_ = nullptr;};
          inline const vector<OperationLocks::OperationLock> & getOperationLock() const { DARABONBA_PTR_GET_CONST(operationLock_, vector<OperationLocks::OperationLock>) };
          inline vector<OperationLocks::OperationLock> getOperationLock() { DARABONBA_PTR_GET(operationLock_, vector<OperationLocks::OperationLock>) };
          inline OperationLocks& setOperationLock(const vector<OperationLocks::OperationLock> & operationLock) { DARABONBA_PTR_SET_VALUE(operationLock_, operationLock) };
          inline OperationLocks& setOperationLock(vector<OperationLocks::OperationLock> && operationLock) { DARABONBA_PTR_SET_RVALUE(operationLock_, operationLock) };


        protected:
          shared_ptr<vector<OperationLocks::OperationLock>> operationLock_ {};
        };

        class MountInstances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MountInstances& obj) { 
            DARABONBA_PTR_TO_JSON(MountInstance, mountInstance_);
          };
          friend void from_json(const Darabonba::Json& j, MountInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(MountInstance, mountInstance_);
          };
          MountInstances() = default ;
          MountInstances(const MountInstances &) = default ;
          MountInstances(MountInstances &&) = default ;
          MountInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MountInstances() = default ;
          MountInstances& operator=(const MountInstances &) = default ;
          MountInstances& operator=(MountInstances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MountInstance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MountInstance& obj) { 
              DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
              DARABONBA_PTR_TO_JSON(Device, device_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            };
            friend void from_json(const Darabonba::Json& j, MountInstance& obj) { 
              DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
              DARABONBA_PTR_FROM_JSON(Device, device_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            };
            MountInstance() = default ;
            MountInstance(const MountInstance &) = default ;
            MountInstance(MountInstance &&) = default ;
            MountInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MountInstance() = default ;
            MountInstance& operator=(const MountInstance &) = default ;
            MountInstance& operator=(MountInstance &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->attachedTime_ == nullptr
        && this->device_ == nullptr && this->instanceId_ == nullptr; };
            // attachedTime Field Functions 
            bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
            void deleteAttachedTime() { this->attachedTime_ = nullptr;};
            inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
            inline MountInstance& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


            // device Field Functions 
            bool hasDevice() const { return this->device_ != nullptr;};
            void deleteDevice() { this->device_ = nullptr;};
            inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
            inline MountInstance& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline MountInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          protected:
            // The time when the disk was attached. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
            shared_ptr<string> attachedTime_ {};
            // The mount point of the disk.
            shared_ptr<string> device_ {};
            // The ID of the instance to which the disk is attached.
            shared_ptr<string> instanceId_ {};
          };

          virtual bool empty() const override { return this->mountInstance_ == nullptr; };
          // mountInstance Field Functions 
          bool hasMountInstance() const { return this->mountInstance_ != nullptr;};
          void deleteMountInstance() { this->mountInstance_ = nullptr;};
          inline const vector<MountInstances::MountInstance> & getMountInstance() const { DARABONBA_PTR_GET_CONST(mountInstance_, vector<MountInstances::MountInstance>) };
          inline vector<MountInstances::MountInstance> getMountInstance() { DARABONBA_PTR_GET(mountInstance_, vector<MountInstances::MountInstance>) };
          inline MountInstances& setMountInstance(const vector<MountInstances::MountInstance> & mountInstance) { DARABONBA_PTR_SET_VALUE(mountInstance_, mountInstance) };
          inline MountInstances& setMountInstance(vector<MountInstances::MountInstance> && mountInstance) { DARABONBA_PTR_SET_RVALUE(mountInstance_, mountInstance) };


        protected:
          shared_ptr<vector<MountInstances::MountInstance>> mountInstance_ {};
        };

        class Attachments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
            DARABONBA_PTR_TO_JSON(Attachment, attachment_);
          };
          friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
            DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
          };
          Attachments() = default ;
          Attachments(const Attachments &) = default ;
          Attachments(Attachments &&) = default ;
          Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attachments() = default ;
          Attachments& operator=(const Attachments &) = default ;
          Attachments& operator=(Attachments &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Attachment : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Attachment& obj) { 
              DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
              DARABONBA_PTR_TO_JSON(Device, device_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            };
            friend void from_json(const Darabonba::Json& j, Attachment& obj) { 
              DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
              DARABONBA_PTR_FROM_JSON(Device, device_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            };
            Attachment() = default ;
            Attachment(const Attachment &) = default ;
            Attachment(Attachment &&) = default ;
            Attachment(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Attachment() = default ;
            Attachment& operator=(const Attachment &) = default ;
            Attachment& operator=(Attachment &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->attachedTime_ == nullptr
        && this->device_ == nullptr && this->instanceId_ == nullptr; };
            // attachedTime Field Functions 
            bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
            void deleteAttachedTime() { this->attachedTime_ = nullptr;};
            inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
            inline Attachment& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


            // device Field Functions 
            bool hasDevice() const { return this->device_ != nullptr;};
            void deleteDevice() { this->device_ = nullptr;};
            inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
            inline Attachment& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline Attachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          protected:
            // The time when the disk was attached. The time is displayed in UTC.
            shared_ptr<string> attachedTime_ {};
            // The device name of the disk.
            shared_ptr<string> device_ {};
            // The ID of the instance to which the disk is attached.
            shared_ptr<string> instanceId_ {};
          };

          virtual bool empty() const override { return this->attachment_ == nullptr; };
          // attachment Field Functions 
          bool hasAttachment() const { return this->attachment_ != nullptr;};
          void deleteAttachment() { this->attachment_ = nullptr;};
          inline const vector<Attachments::Attachment> & getAttachment() const { DARABONBA_PTR_GET_CONST(attachment_, vector<Attachments::Attachment>) };
          inline vector<Attachments::Attachment> getAttachment() { DARABONBA_PTR_GET(attachment_, vector<Attachments::Attachment>) };
          inline Attachments& setAttachment(const vector<Attachments::Attachment> & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
          inline Attachments& setAttachment(vector<Attachments::Attachment> && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


        protected:
          shared_ptr<vector<Attachments::Attachment>> attachment_ {};
        };

        virtual bool empty() const override { return this->attachedTime_ == nullptr
        && this->attachments_ == nullptr && this->autoSnapshotPolicyId_ == nullptr && this->bdfId_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr
        && this->creationTime_ == nullptr && this->deleteAutoSnapshot_ == nullptr && this->deleteWithInstance_ == nullptr && this->description_ == nullptr && this->detachedTime_ == nullptr
        && this->device_ == nullptr && this->diskChargeType_ == nullptr && this->diskId_ == nullptr && this->diskName_ == nullptr && this->enableAutoSnapshot_ == nullptr
        && this->enableAutomatedSnapshotPolicy_ == nullptr && this->encrypted_ == nullptr && this->expiredTime_ == nullptr && this->IOPS_ == nullptr && this->IOPSRead_ == nullptr
        && this->IOPSWrite_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->KMSKeyId_ == nullptr && this->mountInstanceNum_ == nullptr
        && this->mountInstances_ == nullptr && this->multiAttach_ == nullptr && this->operationLocks_ == nullptr && this->performanceLevel_ == nullptr && this->placement_ == nullptr
        && this->portable_ == nullptr && this->productCode_ == nullptr && this->provisionedIops_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->serialNumber_ == nullptr && this->size_ == nullptr && this->sourceSnapshotId_ == nullptr && this->status_ == nullptr && this->storageClusterId_ == nullptr
        && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr && this->tags_ == nullptr && this->throughput_ == nullptr && this->throughputRead_ == nullptr
        && this->throughputWrite_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
        // attachedTime Field Functions 
        bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
        void deleteAttachedTime() { this->attachedTime_ = nullptr;};
        inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
        inline Disk& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


        // attachments Field Functions 
        bool hasAttachments() const { return this->attachments_ != nullptr;};
        void deleteAttachments() { this->attachments_ = nullptr;};
        inline const Disk::Attachments & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, Disk::Attachments) };
        inline Disk::Attachments getAttachments() { DARABONBA_PTR_GET(attachments_, Disk::Attachments) };
        inline Disk& setAttachments(const Disk::Attachments & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
        inline Disk& setAttachments(Disk::Attachments && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline Disk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


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


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Disk& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


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


        // enableAutomatedSnapshotPolicy Field Functions 
        bool hasEnableAutomatedSnapshotPolicy() const { return this->enableAutomatedSnapshotPolicy_ != nullptr;};
        void deleteEnableAutomatedSnapshotPolicy() { this->enableAutomatedSnapshotPolicy_ = nullptr;};
        inline bool getEnableAutomatedSnapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(enableAutomatedSnapshotPolicy_, false) };
        inline Disk& setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(enableAutomatedSnapshotPolicy_, enableAutomatedSnapshotPolicy) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline Disk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Disk& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // IOPS Field Functions 
        bool hasIOPS() const { return this->IOPS_ != nullptr;};
        void deleteIOPS() { this->IOPS_ = nullptr;};
        inline int32_t getIOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0) };
        inline Disk& setIOPS(int32_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


        // IOPSRead Field Functions 
        bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
        void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
        inline int32_t getIOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
        inline Disk& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


        // IOPSWrite Field Functions 
        bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
        void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
        inline int32_t getIOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
        inline Disk& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


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


        // mountInstances Field Functions 
        bool hasMountInstances() const { return this->mountInstances_ != nullptr;};
        void deleteMountInstances() { this->mountInstances_ = nullptr;};
        inline const Disk::MountInstances & getMountInstances() const { DARABONBA_PTR_GET_CONST(mountInstances_, Disk::MountInstances) };
        inline Disk::MountInstances getMountInstances() { DARABONBA_PTR_GET(mountInstances_, Disk::MountInstances) };
        inline Disk& setMountInstances(const Disk::MountInstances & mountInstances) { DARABONBA_PTR_SET_VALUE(mountInstances_, mountInstances) };
        inline Disk& setMountInstances(Disk::MountInstances && mountInstances) { DARABONBA_PTR_SET_RVALUE(mountInstances_, mountInstances) };


        // multiAttach Field Functions 
        bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
        void deleteMultiAttach() { this->multiAttach_ = nullptr;};
        inline string getMultiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
        inline Disk& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const Disk::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Disk::OperationLocks) };
        inline Disk::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, Disk::OperationLocks) };
        inline Disk& setOperationLocks(const Disk::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline Disk& setOperationLocks(Disk::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline Disk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // placement Field Functions 
        bool hasPlacement() const { return this->placement_ != nullptr;};
        void deletePlacement() { this->placement_ = nullptr;};
        inline const Disk::Placement & getPlacement() const { DARABONBA_PTR_GET_CONST(placement_, Disk::Placement) };
        inline Disk::Placement getPlacement() { DARABONBA_PTR_GET(placement_, Disk::Placement) };
        inline Disk& setPlacement(const Disk::Placement & placement) { DARABONBA_PTR_SET_VALUE(placement_, placement) };
        inline Disk& setPlacement(Disk::Placement && placement) { DARABONBA_PTR_SET_RVALUE(placement_, placement) };


        // portable Field Functions 
        bool hasPortable() const { return this->portable_ != nullptr;};
        void deletePortable() { this->portable_ = nullptr;};
        inline bool getPortable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
        inline Disk& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Disk& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


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


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Disk& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Disk& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


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
        inline const Disk::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Disk::Tags) };
        inline Disk::Tags getTags() { DARABONBA_PTR_GET(tags_, Disk::Tags) };
        inline Disk& setTags(const Disk::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Disk& setTags(Disk::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // throughput Field Functions 
        bool hasThroughput() const { return this->throughput_ != nullptr;};
        void deleteThroughput() { this->throughput_ = nullptr;};
        inline int32_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0) };
        inline Disk& setThroughput(int32_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


        // throughputRead Field Functions 
        bool hasThroughputRead() const { return this->throughputRead_ != nullptr;};
        void deleteThroughputRead() { this->throughputRead_ = nullptr;};
        inline int32_t getThroughputRead() const { DARABONBA_PTR_GET_DEFAULT(throughputRead_, 0) };
        inline Disk& setThroughputRead(int32_t throughputRead) { DARABONBA_PTR_SET_VALUE(throughputRead_, throughputRead) };


        // throughputWrite Field Functions 
        bool hasThroughputWrite() const { return this->throughputWrite_ != nullptr;};
        void deleteThroughputWrite() { this->throughputWrite_ = nullptr;};
        inline int32_t getThroughputWrite() const { DARABONBA_PTR_GET_DEFAULT(throughputWrite_, 0) };
        inline Disk& setThroughputWrite(int32_t throughputWrite) { DARABONBA_PTR_SET_VALUE(throughputWrite_, throughputWrite) };


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
        // The time when the disk was last attached. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
        shared_ptr<string> attachedTime_ {};
        // The attachment information of the disk. The value is an array that consists of the `Attachment` values. This value is not returned when you query Shared Block Storage devices.
        shared_ptr<Disk::Attachments> attachments_ {};
        // The ID of the automatic snapshot policy that is applied to the cloud disk.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> bdfId_ {};
        // Indicates whether the performance burst feature is enabled. Valid values:
        // 
        // *   true
        // *   false
        // 
        // This parameter is available only if you set `Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
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
        shared_ptr<string> category_ {};
        // The time when the disk was created.
        shared_ptr<string> creationTime_ {};
        // Indicates whether the automatic snapshots of the cloud disk are deleted when the cloud disk is released. Valid values:
        // 
        // *   true: The automatic snapshots of the cloud disk are deleted when the disk is released.
        // *   false: The automatic snapshots of the cloud disk are retained when the disk is released.
        // 
        // Snapshots that were created in the ECS console or by calling the [CreateSnapshot](https://help.aliyun.com/document_detail/25524.html) operation are retained and not affected by this parameter.
        shared_ptr<bool> deleteAutoSnapshot_ {};
        // Indicates whether the disk is released when the instance to which the disk is attached is released. Valid values:
        // 
        // *   true: The disk is released when the associated instance is released.
        // *   false: The disk is retained when the associated instance is released.
        shared_ptr<bool> deleteWithInstance_ {};
        // The description of the disk.
        shared_ptr<string> description_ {};
        // The time when the disk was last detached.
        shared_ptr<string> detachedTime_ {};
        // The device name of the disk on the instance to which the disk is attached. Example: /dev/xvdb. Take note of the following items:
        // 
        // *   This parameter has a value only when the `Status` value is `In_use` or `Detaching`.
        // *   This parameter is empty for cloud disks for which the multi-attach feature is enabled. You can query the attachment information of the cloud disk based on the returned list of `Attachment` objects.
        // 
        // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<string> device_ {};
        // The billing method of the disk. Valid values:
        // 
        // *   PrePaid: subscription
        // *   PostPaid: pay-as-you-go
        shared_ptr<string> diskChargeType_ {};
        // The ID of the disk.
        shared_ptr<string> diskId_ {};
        // The name of the disk.
        shared_ptr<string> diskName_ {};
        // Indicates whether the automatic snapshot policy feature is enabled for the cloud disk.
        // 
        // >  This parameter is deprecated. By default, the automatic snapshot policy feature is enabled for cloud disks. You need to only apply an automatic snapshot policy to a cloud disk before you can use the automatic snapshot policy.
        shared_ptr<bool> enableAutoSnapshot_ {};
        // Indicates whether an automatic snapshot policy is applied to the cloud disk.
        shared_ptr<bool> enableAutomatedSnapshotPolicy_ {};
        // Indicates whether the cloud disk is encrypted.
        shared_ptr<bool> encrypted_ {};
        // The time when the subscription disk expires.
        shared_ptr<string> expiredTime_ {};
        // The maximum number of read and write operations per second.
        shared_ptr<int32_t> IOPS_ {};
        // The maximum number of read operations per second.
        shared_ptr<int32_t> IOPSRead_ {};
        // The maximum number of write operations per second.
        shared_ptr<int32_t> IOPSWrite_ {};
        // The ID of the image that was used to create the instance. This parameter is empty unless the cloud disk was created from an image. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
        shared_ptr<string> imageId_ {};
        // The ID of the instance to which the disk is attached. Take note of the following items:
        // 
        // *   This parameter has a value only when the `Status` value is `In_use` or `Detaching`.
        // *   This parameter is empty for cloud disks for which the multi-attach feature is enabled. You can query the attachment information of the cloud disk based on the returned `Attachment` objects.
        shared_ptr<string> instanceId_ {};
        // The ID of the KMS key that is used for the cloud disk.
        shared_ptr<string> KMSKeyId_ {};
        // The number of instances to which the Shared Block Storage device is attached.
        shared_ptr<int32_t> mountInstanceNum_ {};
        // The attachment information of the Shared Block Storage device.
        shared_ptr<Disk::MountInstances> mountInstances_ {};
        // Indicates whether the multi-attach feature is enabled for the cloud disk.
        shared_ptr<string> multiAttach_ {};
        // The reasons why the disk was locked.
        shared_ptr<Disk::OperationLocks> operationLocks_ {};
        // The performance level of the ESSD. Valid values:
        // 
        // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
        // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
        // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
        // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
        shared_ptr<string> performanceLevel_ {};
        // The locations in which data is stored.
        // 
        // This parameter is returned only if you specify `Placement` in the AdditionalAttributes.N request parameter.
        // 
        // >  This parameter is valid only for Regional ESSDs (cloud_regional_disk_auto).
        shared_ptr<Disk::Placement> placement_ {};
        // Indicates whether the disk is removable.
        shared_ptr<bool> portable_ {};
        // The product code of the disk in Alibaba Cloud Marketplace.
        shared_ptr<string> productCode_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × *Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × *Capacity, 50,000}
        // 
        // This parameter is available only if you set `Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<int64_t> provisionedIops_ {};
        // The ID of the region to which the disk belongs.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the disk belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The serial number of the disk.
        shared_ptr<string> serialNumber_ {};
        // The size of the disk. Unit: GiB.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot that was used to create the cloud disk.
        // 
        // This parameter is empty unless the cloud disk was created from a snapshot. The value of this parameter remains unchanged throughout the lifecycle of the cloud disk.
        shared_ptr<string> sourceSnapshotId_ {};
        // The status of the disk. Valid values:
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
        // The tags of the disk.
        shared_ptr<Disk::Tags> tags_ {};
        // The amount of data that can be transferred per second. Unit: MB/s.
        shared_ptr<int32_t> throughput_ {};
        // The amount of data that can be read per second. Unit: MB/s.
        shared_ptr<int32_t> throughputRead_ {};
        // The amount of data that can be written per second. Unit: MB/s.
        shared_ptr<int32_t> throughputWrite_ {};
        // The type of the disk. Valid values:
        // 
        // *   system: system disk
        // *   data: data disk
        shared_ptr<string> type_ {};
        // The ID of the zone to which the disk belongs.
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
      shared_ptr<vector<Disks::Disk>> disk_ {};
    };

    virtual bool empty() const override { return this->disks_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const DescribeDisksResponseBody::Disks & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, DescribeDisksResponseBody::Disks) };
    inline DescribeDisksResponseBody::Disks getDisks() { DARABONBA_PTR_GET(disks_, DescribeDisksResponseBody::Disks) };
    inline DescribeDisksResponseBody& setDisks(const DescribeDisksResponseBody::Disks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDisksResponseBody& setDisks(DescribeDisksResponseBody::Disks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDisksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDisksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDisksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the disks.
    shared_ptr<DescribeDisksResponseBody::Disks> disks_ {};
    // The returned pagination token which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // >  This parameter will be removed in the future. We recommend that you use `NextToken` and `MaxResults` for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // >  This parameter will be removed in the future. We recommend that you use `NextToken` and `MaxResults` for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    // 
    // > When using the `MaxResults` and `NextToken` parameters for a paginated query, the returned `TotalCount` parameter value is invalid.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
