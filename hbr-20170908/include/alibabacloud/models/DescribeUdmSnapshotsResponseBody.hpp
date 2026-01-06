// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUdmSnapshotsResponseBody() = default ;
    DescribeUdmSnapshotsResponseBody(const DescribeUdmSnapshotsResponseBody &) = default ;
    DescribeUdmSnapshotsResponseBody(DescribeUdmSnapshotsResponseBody &&) = default ;
    DescribeUdmSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsResponseBody() = default ;
    DescribeUdmSnapshotsResponseBody& operator=(const DescribeUdmSnapshotsResponseBody &) = default ;
    DescribeUdmSnapshotsResponseBody& operator=(DescribeUdmSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_TO_JSON(AdvancedRetentionType, advancedRetentionType_);
        DARABONBA_PTR_TO_JSON(ArchiveErrorMessage, archiveErrorMessage_);
        DARABONBA_PTR_TO_JSON(ArchiveStatus, archiveStatus_);
        DARABONBA_PTR_TO_JSON(ArchiveTriggerTime, archiveTriggerTime_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_TO_JSON(CanBeDeleted, canBeDeleted_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(NativeSnapshotId, nativeSnapshotId_);
        DARABONBA_PTR_TO_JSON(NativeSnapshotInfo, nativeSnapshotInfo_);
        DARABONBA_PTR_TO_JSON(ParentSnapshotHash, parentSnapshotHash_);
        DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        DARABONBA_PTR_TO_JSON(RealSnapshotTime, realSnapshotTime_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_FROM_JSON(AdvancedRetentionType, advancedRetentionType_);
        DARABONBA_PTR_FROM_JSON(ArchiveErrorMessage, archiveErrorMessage_);
        DARABONBA_PTR_FROM_JSON(ArchiveStatus, archiveStatus_);
        DARABONBA_PTR_FROM_JSON(ArchiveTriggerTime, archiveTriggerTime_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_FROM_JSON(CanBeDeleted, canBeDeleted_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(NativeSnapshotId, nativeSnapshotId_);
        DARABONBA_PTR_FROM_JSON(NativeSnapshotInfo, nativeSnapshotInfo_);
        DARABONBA_PTR_FROM_JSON(ParentSnapshotHash, parentSnapshotHash_);
        DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
        DARABONBA_PTR_FROM_JSON(RealSnapshotTime, realSnapshotTime_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      Snapshots() = default ;
      Snapshots(const Snapshots &) = default ;
      Snapshots(Snapshots &&) = default ;
      Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshots() = default ;
      Snapshots& operator=(const Snapshots &) = default ;
      Snapshots& operator=(Snapshots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(ConsistentLevel, consistentLevel_);
          DARABONBA_PTR_TO_JSON(ContainOsDisk, containOsDisk_);
          DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_TO_JSON(DiskDevName, diskDevName_);
          DARABONBA_ANY_TO_JSON(DiskHbrSnapshotIdWithDeviceMap, diskHbrSnapshotIdWithDeviceMap_);
          DARABONBA_PTR_TO_JSON(DiskIdList, diskIdList_);
          DARABONBA_PTR_TO_JSON(DowngradeReason, downgradeReason_);
          DARABONBA_PTR_TO_JSON(HostName, hostName_);
          DARABONBA_ANY_TO_JSON(InstanceIdWithDiskIdListMap, instanceIdWithDiskIdListMap_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_TO_JSON(NativeSnapshotIdList, nativeSnapshotIdList_);
          DARABONBA_PTR_TO_JSON(OsDiskId, osDiskId_);
          DARABONBA_PTR_TO_JSON(OsName, osName_);
          DARABONBA_PTR_TO_JSON(OsNameEn, osNameEn_);
          DARABONBA_PTR_TO_JSON(OsType, osType_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(SnapshotGroupId, snapshotGroupId_);
          DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
          DARABONBA_PTR_TO_JSON(VmName, vmName_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsistentLevel, consistentLevel_);
          DARABONBA_PTR_FROM_JSON(ContainOsDisk, containOsDisk_);
          DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
          DARABONBA_PTR_FROM_JSON(DiskDevName, diskDevName_);
          DARABONBA_ANY_FROM_JSON(DiskHbrSnapshotIdWithDeviceMap, diskHbrSnapshotIdWithDeviceMap_);
          DARABONBA_PTR_FROM_JSON(DiskIdList, diskIdList_);
          DARABONBA_PTR_FROM_JSON(DowngradeReason, downgradeReason_);
          DARABONBA_PTR_FROM_JSON(HostName, hostName_);
          DARABONBA_ANY_FROM_JSON(InstanceIdWithDiskIdListMap, instanceIdWithDiskIdListMap_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_FROM_JSON(NativeSnapshotIdList, nativeSnapshotIdList_);
          DARABONBA_PTR_FROM_JSON(OsDiskId, osDiskId_);
          DARABONBA_PTR_FROM_JSON(OsName, osName_);
          DARABONBA_PTR_FROM_JSON(OsNameEn, osNameEn_);
          DARABONBA_PTR_FROM_JSON(OsType, osType_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(SnapshotGroupId, snapshotGroupId_);
          DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
          DARABONBA_PTR_FROM_JSON(VmName, vmName_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consistentLevel_ == nullptr
        && this->containOsDisk_ == nullptr && this->diskCategory_ == nullptr && this->diskDevName_ == nullptr && this->diskHbrSnapshotIdWithDeviceMap_ == nullptr && this->diskIdList_ == nullptr
        && this->downgradeReason_ == nullptr && this->hostName_ == nullptr && this->instanceIdWithDiskIdListMap_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->instantAccess_ == nullptr && this->nativeSnapshotIdList_ == nullptr && this->osDiskId_ == nullptr && this->osName_ == nullptr && this->osNameEn_ == nullptr
        && this->osType_ == nullptr && this->performanceLevel_ == nullptr && this->platform_ == nullptr && this->snapshotGroupId_ == nullptr && this->systemDisk_ == nullptr
        && this->vmName_ == nullptr; };
        // consistentLevel Field Functions 
        bool hasConsistentLevel() const { return this->consistentLevel_ != nullptr;};
        void deleteConsistentLevel() { this->consistentLevel_ = nullptr;};
        inline string getConsistentLevel() const { DARABONBA_PTR_GET_DEFAULT(consistentLevel_, "") };
        inline Detail& setConsistentLevel(string consistentLevel) { DARABONBA_PTR_SET_VALUE(consistentLevel_, consistentLevel) };


        // containOsDisk Field Functions 
        bool hasContainOsDisk() const { return this->containOsDisk_ != nullptr;};
        void deleteContainOsDisk() { this->containOsDisk_ = nullptr;};
        inline bool getContainOsDisk() const { DARABONBA_PTR_GET_DEFAULT(containOsDisk_, false) };
        inline Detail& setContainOsDisk(bool containOsDisk) { DARABONBA_PTR_SET_VALUE(containOsDisk_, containOsDisk) };


        // diskCategory Field Functions 
        bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
        void deleteDiskCategory() { this->diskCategory_ = nullptr;};
        inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
        inline Detail& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


        // diskDevName Field Functions 
        bool hasDiskDevName() const { return this->diskDevName_ != nullptr;};
        void deleteDiskDevName() { this->diskDevName_ = nullptr;};
        inline string getDiskDevName() const { DARABONBA_PTR_GET_DEFAULT(diskDevName_, "") };
        inline Detail& setDiskDevName(string diskDevName) { DARABONBA_PTR_SET_VALUE(diskDevName_, diskDevName) };


        // diskHbrSnapshotIdWithDeviceMap Field Functions 
        bool hasDiskHbrSnapshotIdWithDeviceMap() const { return this->diskHbrSnapshotIdWithDeviceMap_ != nullptr;};
        void deleteDiskHbrSnapshotIdWithDeviceMap() { this->diskHbrSnapshotIdWithDeviceMap_ = nullptr;};
        inline         const Darabonba::Json & getDiskHbrSnapshotIdWithDeviceMap() const { DARABONBA_GET(diskHbrSnapshotIdWithDeviceMap_) };
        Darabonba::Json & getDiskHbrSnapshotIdWithDeviceMap() { DARABONBA_GET(diskHbrSnapshotIdWithDeviceMap_) };
        inline Detail& setDiskHbrSnapshotIdWithDeviceMap(const Darabonba::Json & diskHbrSnapshotIdWithDeviceMap) { DARABONBA_SET_VALUE(diskHbrSnapshotIdWithDeviceMap_, diskHbrSnapshotIdWithDeviceMap) };
        inline Detail& setDiskHbrSnapshotIdWithDeviceMap(Darabonba::Json && diskHbrSnapshotIdWithDeviceMap) { DARABONBA_SET_RVALUE(diskHbrSnapshotIdWithDeviceMap_, diskHbrSnapshotIdWithDeviceMap) };


        // diskIdList Field Functions 
        bool hasDiskIdList() const { return this->diskIdList_ != nullptr;};
        void deleteDiskIdList() { this->diskIdList_ = nullptr;};
        inline const vector<string> & getDiskIdList() const { DARABONBA_PTR_GET_CONST(diskIdList_, vector<string>) };
        inline vector<string> getDiskIdList() { DARABONBA_PTR_GET(diskIdList_, vector<string>) };
        inline Detail& setDiskIdList(const vector<string> & diskIdList) { DARABONBA_PTR_SET_VALUE(diskIdList_, diskIdList) };
        inline Detail& setDiskIdList(vector<string> && diskIdList) { DARABONBA_PTR_SET_RVALUE(diskIdList_, diskIdList) };


        // downgradeReason Field Functions 
        bool hasDowngradeReason() const { return this->downgradeReason_ != nullptr;};
        void deleteDowngradeReason() { this->downgradeReason_ = nullptr;};
        inline string getDowngradeReason() const { DARABONBA_PTR_GET_DEFAULT(downgradeReason_, "") };
        inline Detail& setDowngradeReason(string downgradeReason) { DARABONBA_PTR_SET_VALUE(downgradeReason_, downgradeReason) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline Detail& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // instanceIdWithDiskIdListMap Field Functions 
        bool hasInstanceIdWithDiskIdListMap() const { return this->instanceIdWithDiskIdListMap_ != nullptr;};
        void deleteInstanceIdWithDiskIdListMap() { this->instanceIdWithDiskIdListMap_ = nullptr;};
        inline         const Darabonba::Json & getInstanceIdWithDiskIdListMap() const { DARABONBA_GET(instanceIdWithDiskIdListMap_) };
        Darabonba::Json & getInstanceIdWithDiskIdListMap() { DARABONBA_GET(instanceIdWithDiskIdListMap_) };
        inline Detail& setInstanceIdWithDiskIdListMap(const Darabonba::Json & instanceIdWithDiskIdListMap) { DARABONBA_SET_VALUE(instanceIdWithDiskIdListMap_, instanceIdWithDiskIdListMap) };
        inline Detail& setInstanceIdWithDiskIdListMap(Darabonba::Json && instanceIdWithDiskIdListMap) { DARABONBA_SET_RVALUE(instanceIdWithDiskIdListMap_, instanceIdWithDiskIdListMap) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Detail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Detail& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // instantAccess Field Functions 
        bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
        void deleteInstantAccess() { this->instantAccess_ = nullptr;};
        inline bool getInstantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
        inline Detail& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


        // nativeSnapshotIdList Field Functions 
        bool hasNativeSnapshotIdList() const { return this->nativeSnapshotIdList_ != nullptr;};
        void deleteNativeSnapshotIdList() { this->nativeSnapshotIdList_ = nullptr;};
        inline const vector<string> & getNativeSnapshotIdList() const { DARABONBA_PTR_GET_CONST(nativeSnapshotIdList_, vector<string>) };
        inline vector<string> getNativeSnapshotIdList() { DARABONBA_PTR_GET(nativeSnapshotIdList_, vector<string>) };
        inline Detail& setNativeSnapshotIdList(const vector<string> & nativeSnapshotIdList) { DARABONBA_PTR_SET_VALUE(nativeSnapshotIdList_, nativeSnapshotIdList) };
        inline Detail& setNativeSnapshotIdList(vector<string> && nativeSnapshotIdList) { DARABONBA_PTR_SET_RVALUE(nativeSnapshotIdList_, nativeSnapshotIdList) };


        // osDiskId Field Functions 
        bool hasOsDiskId() const { return this->osDiskId_ != nullptr;};
        void deleteOsDiskId() { this->osDiskId_ = nullptr;};
        inline string getOsDiskId() const { DARABONBA_PTR_GET_DEFAULT(osDiskId_, "") };
        inline Detail& setOsDiskId(string osDiskId) { DARABONBA_PTR_SET_VALUE(osDiskId_, osDiskId) };


        // osName Field Functions 
        bool hasOsName() const { return this->osName_ != nullptr;};
        void deleteOsName() { this->osName_ = nullptr;};
        inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
        inline Detail& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


        // osNameEn Field Functions 
        bool hasOsNameEn() const { return this->osNameEn_ != nullptr;};
        void deleteOsNameEn() { this->osNameEn_ = nullptr;};
        inline string getOsNameEn() const { DARABONBA_PTR_GET_DEFAULT(osNameEn_, "") };
        inline Detail& setOsNameEn(string osNameEn) { DARABONBA_PTR_SET_VALUE(osNameEn_, osNameEn) };


        // osType Field Functions 
        bool hasOsType() const { return this->osType_ != nullptr;};
        void deleteOsType() { this->osType_ = nullptr;};
        inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
        inline Detail& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline Detail& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline Detail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // snapshotGroupId Field Functions 
        bool hasSnapshotGroupId() const { return this->snapshotGroupId_ != nullptr;};
        void deleteSnapshotGroupId() { this->snapshotGroupId_ = nullptr;};
        inline string getSnapshotGroupId() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroupId_, "") };
        inline Detail& setSnapshotGroupId(string snapshotGroupId) { DARABONBA_PTR_SET_VALUE(snapshotGroupId_, snapshotGroupId) };


        // systemDisk Field Functions 
        bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
        void deleteSystemDisk() { this->systemDisk_ = nullptr;};
        inline bool getSystemDisk() const { DARABONBA_PTR_GET_DEFAULT(systemDisk_, false) };
        inline Detail& setSystemDisk(bool systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };


        // vmName Field Functions 
        bool hasVmName() const { return this->vmName_ != nullptr;};
        void deleteVmName() { this->vmName_ = nullptr;};
        inline string getVmName() const { DARABONBA_PTR_GET_DEFAULT(vmName_, "") };
        inline Detail& setVmName(string vmName) { DARABONBA_PTR_SET_VALUE(vmName_, vmName) };


      protected:
        // The consistency level.
        shared_ptr<string> consistentLevel_ {};
        // Indicates whether the system disk is included.
        shared_ptr<bool> containOsDisk_ {};
        // The type of the source disk.
        shared_ptr<string> diskCategory_ {};
        // The name of the disk.
        shared_ptr<string> diskDevName_ {};
        // The mapping between the device and the recovery point ID.
        Darabonba::Json diskHbrSnapshotIdWithDeviceMap_ {};
        // The IDs of the disks that are backed up at the recovery point.
        shared_ptr<vector<string>> diskIdList_ {};
        // The reason for the downgrade.
        shared_ptr<string> downgradeReason_ {};
        // The hostname.
        shared_ptr<string> hostName_ {};
        // The mapping between the instance ID and the disk ID.
        Darabonba::Json instanceIdWithDiskIdListMap_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The specifications of the source instance.
        shared_ptr<string> instanceType_ {};
        // Indicates whether the backup is created by the instant clone feature.
        shared_ptr<bool> instantAccess_ {};
        // The list of snapshot IDs, corresponding to DiskIdList.
        shared_ptr<vector<string>> nativeSnapshotIdList_ {};
        // The ID of the system disk.
        shared_ptr<string> osDiskId_ {};
        // The name of the operating system.
        shared_ptr<string> osName_ {};
        // The English name of the operating system.
        shared_ptr<string> osNameEn_ {};
        // The type of the operating system. Valid values: linux and windows.
        shared_ptr<string> osType_ {};
        // The performance level of the source disk.
        shared_ptr<string> performanceLevel_ {};
        // The system platform.
        shared_ptr<string> platform_ {};
        // The ID of the snapshot group.
        shared_ptr<string> snapshotGroupId_ {};
        // Indicates whether the disk is a system disk.
        shared_ptr<bool> systemDisk_ {};
        // The name of the instance.
        shared_ptr<string> vmName_ {};
      };

      virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->advancedRetentionType_ == nullptr && this->archiveErrorMessage_ == nullptr && this->archiveStatus_ == nullptr && this->archiveTriggerTime_ == nullptr && this->backupType_ == nullptr
        && this->bytesTotal_ == nullptr && this->canBeDeleted_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->createdTime_ == nullptr
        && this->detail_ == nullptr && this->diskId_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr
        && this->nativeSnapshotId_ == nullptr && this->nativeSnapshotInfo_ == nullptr && this->parentSnapshotHash_ == nullptr && this->prefix_ == nullptr && this->realSnapshotTime_ == nullptr
        && this->retention_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->updatedTime_ == nullptr; };
      // actualBytes Field Functions 
      bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
      void deleteActualBytes() { this->actualBytes_ = nullptr;};
      inline string getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, "") };
      inline Snapshots& setActualBytes(string actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


      // advancedRetentionType Field Functions 
      bool hasAdvancedRetentionType() const { return this->advancedRetentionType_ != nullptr;};
      void deleteAdvancedRetentionType() { this->advancedRetentionType_ = nullptr;};
      inline string getAdvancedRetentionType() const { DARABONBA_PTR_GET_DEFAULT(advancedRetentionType_, "") };
      inline Snapshots& setAdvancedRetentionType(string advancedRetentionType) { DARABONBA_PTR_SET_VALUE(advancedRetentionType_, advancedRetentionType) };


      // archiveErrorMessage Field Functions 
      bool hasArchiveErrorMessage() const { return this->archiveErrorMessage_ != nullptr;};
      void deleteArchiveErrorMessage() { this->archiveErrorMessage_ = nullptr;};
      inline string getArchiveErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(archiveErrorMessage_, "") };
      inline Snapshots& setArchiveErrorMessage(string archiveErrorMessage) { DARABONBA_PTR_SET_VALUE(archiveErrorMessage_, archiveErrorMessage) };


      // archiveStatus Field Functions 
      bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
      void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
      inline string getArchiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
      inline Snapshots& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


      // archiveTriggerTime Field Functions 
      bool hasArchiveTriggerTime() const { return this->archiveTriggerTime_ != nullptr;};
      void deleteArchiveTriggerTime() { this->archiveTriggerTime_ = nullptr;};
      inline int64_t getArchiveTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(archiveTriggerTime_, 0L) };
      inline Snapshots& setArchiveTriggerTime(int64_t archiveTriggerTime) { DARABONBA_PTR_SET_VALUE(archiveTriggerTime_, archiveTriggerTime) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Snapshots& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // bytesTotal Field Functions 
      bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
      void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
      inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
      inline Snapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


      // canBeDeleted Field Functions 
      bool hasCanBeDeleted() const { return this->canBeDeleted_ != nullptr;};
      void deleteCanBeDeleted() { this->canBeDeleted_ = nullptr;};
      inline bool getCanBeDeleted() const { DARABONBA_PTR_GET_DEFAULT(canBeDeleted_, false) };
      inline Snapshots& setCanBeDeleted(bool canBeDeleted) { DARABONBA_PTR_SET_VALUE(canBeDeleted_, canBeDeleted) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
      inline Snapshots& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Snapshots& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Snapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const Snapshots::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, Snapshots::Detail) };
      inline Snapshots::Detail getDetail() { DARABONBA_PTR_GET(detail_, Snapshots::Detail) };
      inline Snapshots& setDetail(const Snapshots::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Snapshots& setDetail(Snapshots::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline Snapshots& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Snapshots& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Snapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Snapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // nativeSnapshotId Field Functions 
      bool hasNativeSnapshotId() const { return this->nativeSnapshotId_ != nullptr;};
      void deleteNativeSnapshotId() { this->nativeSnapshotId_ = nullptr;};
      inline string getNativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotId_, "") };
      inline Snapshots& setNativeSnapshotId(string nativeSnapshotId) { DARABONBA_PTR_SET_VALUE(nativeSnapshotId_, nativeSnapshotId) };


      // nativeSnapshotInfo Field Functions 
      bool hasNativeSnapshotInfo() const { return this->nativeSnapshotInfo_ != nullptr;};
      void deleteNativeSnapshotInfo() { this->nativeSnapshotInfo_ = nullptr;};
      inline string getNativeSnapshotInfo() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotInfo_, "") };
      inline Snapshots& setNativeSnapshotInfo(string nativeSnapshotInfo) { DARABONBA_PTR_SET_VALUE(nativeSnapshotInfo_, nativeSnapshotInfo) };


      // parentSnapshotHash Field Functions 
      bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
      void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
      inline string getParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
      inline Snapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline Snapshots& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


      // realSnapshotTime Field Functions 
      bool hasRealSnapshotTime() const { return this->realSnapshotTime_ != nullptr;};
      void deleteRealSnapshotTime() { this->realSnapshotTime_ = nullptr;};
      inline int64_t getRealSnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(realSnapshotTime_, 0L) };
      inline Snapshots& setRealSnapshotTime(int64_t realSnapshotTime) { DARABONBA_PTR_SET_VALUE(realSnapshotTime_, realSnapshotTime) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Snapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // snapshotHash Field Functions 
      bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
      void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
      inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
      inline Snapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline Snapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Snapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Snapshots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Snapshots& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      // The size of the backup snapshot. Unit: bytes.
      shared_ptr<string> actualBytes_ {};
      // The special retention type, which is valid only for special backups. Valid values:
      // 
      // *   **WEEKLY**: weekly backups
      // *   **MONTHLY**: monthly backups
      // *   **YEARLY**: yearly backups
      shared_ptr<string> advancedRetentionType_ {};
      shared_ptr<string> archiveErrorMessage_ {};
      shared_ptr<string> archiveStatus_ {};
      shared_ptr<int64_t> archiveTriggerTime_ {};
      // The backup type. Valid value: **COMPLETE**, which indicates full backup.
      shared_ptr<string> backupType_ {};
      // The total amount of data. Unit: bytes.
      shared_ptr<int64_t> bytesTotal_ {};
      // Indicates whether the disk backup point can be deleted. This parameter is valid only if the value of SourceType is UDM_ECS_DISK.
      shared_ptr<bool> canBeDeleted_ {};
      // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> completeTime_ {};
      // The time when the backup snapshot was created.
      shared_ptr<int64_t> createTime_ {};
      // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The snapshot details.
      shared_ptr<Snapshots::Detail> detail_ {};
      // The ID of the cloud disk or local disk.
      shared_ptr<string> diskId_ {};
      // The expiration time of the backup.
      shared_ptr<int64_t> expireTime_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the backup job.
      shared_ptr<string> jobId_ {};
      // The ID of the backup snapshot.
      shared_ptr<string> nativeSnapshotId_ {};
      // The snapshot information.
      shared_ptr<string> nativeSnapshotInfo_ {};
      // The hash value of the parent backup snapshot.
      shared_ptr<string> parentSnapshotHash_ {};
      // The prefix of the backup snapshot.
      shared_ptr<string> prefix_ {};
      // The timestamp of the backup snapshot. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> realSnapshotTime_ {};
      // The retention period of the backup snapshot. Unit: days.
      shared_ptr<int64_t> retention_ {};
      // The hash value of the backup snapshot.
      shared_ptr<string> snapshotHash_ {};
      // The ID of the backup snapshot.
      shared_ptr<string> snapshotId_ {};
      // The type of the data source. Valid values:
      // 
      // *   **UDM_ECS**: ECS instance backup
      // *   **UDM_ECS_DISK**: disk backup subtask of ECS instance backup
      // *   **UDM_DISK**: disk backup
      shared_ptr<string> sourceType_ {};
      // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the backup job. Valid values:
      // 
      // *   **COMPLETE**: The backup job is completed.
      // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
      // *   **FAILED**: The backup job has failed.
      shared_ptr<string> status_ {};
      // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeUdmSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeUdmSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUdmSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeUdmSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeUdmSnapshotsResponseBody::Snapshots>) };
    inline vector<DescribeUdmSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeUdmSnapshotsResponseBody::Snapshots>) };
    inline DescribeUdmSnapshotsResponseBody& setSnapshots(const vector<DescribeUdmSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeUdmSnapshotsResponseBody& setSnapshots(vector<DescribeUdmSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeUdmSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeUdmSnapshotsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details about snapshots.
    shared_ptr<vector<DescribeUdmSnapshotsResponseBody::Snapshots>> snapshots_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of backup snapshots.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
