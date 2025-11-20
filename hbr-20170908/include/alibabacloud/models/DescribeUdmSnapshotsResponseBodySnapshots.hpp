// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUdmSnapshotsResponseBodySnapshotsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsResponseBodySnapshots& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsResponseBodySnapshots& obj) { 
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
    DescribeUdmSnapshotsResponseBodySnapshots() = default ;
    DescribeUdmSnapshotsResponseBodySnapshots(const DescribeUdmSnapshotsResponseBodySnapshots &) = default ;
    DescribeUdmSnapshotsResponseBodySnapshots(DescribeUdmSnapshotsResponseBodySnapshots &&) = default ;
    DescribeUdmSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsResponseBodySnapshots() = default ;
    DescribeUdmSnapshotsResponseBodySnapshots& operator=(const DescribeUdmSnapshotsResponseBodySnapshots &) = default ;
    DescribeUdmSnapshotsResponseBodySnapshots& operator=(DescribeUdmSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualBytes_ == nullptr
        && return this->advancedRetentionType_ == nullptr && return this->archiveErrorMessage_ == nullptr && return this->archiveStatus_ == nullptr && return this->archiveTriggerTime_ == nullptr && return this->backupType_ == nullptr
        && return this->bytesTotal_ == nullptr && return this->canBeDeleted_ == nullptr && return this->completeTime_ == nullptr && return this->createTime_ == nullptr && return this->createdTime_ == nullptr
        && return this->detail_ == nullptr && return this->diskId_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr && return this->jobId_ == nullptr
        && return this->nativeSnapshotId_ == nullptr && return this->nativeSnapshotInfo_ == nullptr && return this->parentSnapshotHash_ == nullptr && return this->prefix_ == nullptr && return this->realSnapshotTime_ == nullptr
        && return this->retention_ == nullptr && return this->snapshotHash_ == nullptr && return this->snapshotId_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->updatedTime_ == nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline string actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setActualBytes(string actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // advancedRetentionType Field Functions 
    bool hasAdvancedRetentionType() const { return this->advancedRetentionType_ != nullptr;};
    void deleteAdvancedRetentionType() { this->advancedRetentionType_ = nullptr;};
    inline string advancedRetentionType() const { DARABONBA_PTR_GET_DEFAULT(advancedRetentionType_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setAdvancedRetentionType(string advancedRetentionType) { DARABONBA_PTR_SET_VALUE(advancedRetentionType_, advancedRetentionType) };


    // archiveErrorMessage Field Functions 
    bool hasArchiveErrorMessage() const { return this->archiveErrorMessage_ != nullptr;};
    void deleteArchiveErrorMessage() { this->archiveErrorMessage_ = nullptr;};
    inline string archiveErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(archiveErrorMessage_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setArchiveErrorMessage(string archiveErrorMessage) { DARABONBA_PTR_SET_VALUE(archiveErrorMessage_, archiveErrorMessage) };


    // archiveStatus Field Functions 
    bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
    void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
    inline string archiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


    // archiveTriggerTime Field Functions 
    bool hasArchiveTriggerTime() const { return this->archiveTriggerTime_ != nullptr;};
    void deleteArchiveTriggerTime() { this->archiveTriggerTime_ = nullptr;};
    inline int64_t archiveTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(archiveTriggerTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setArchiveTriggerTime(int64_t archiveTriggerTime) { DARABONBA_PTR_SET_VALUE(archiveTriggerTime_, archiveTriggerTime) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // canBeDeleted Field Functions 
    bool hasCanBeDeleted() const { return this->canBeDeleted_ != nullptr;};
    void deleteCanBeDeleted() { this->canBeDeleted_ = nullptr;};
    inline bool canBeDeleted() const { DARABONBA_PTR_GET_DEFAULT(canBeDeleted_, false) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setCanBeDeleted(bool canBeDeleted) { DARABONBA_PTR_SET_VALUE(canBeDeleted_, canBeDeleted) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail) };
    inline Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setDetail(const Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setDetail(Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // nativeSnapshotId Field Functions 
    bool hasNativeSnapshotId() const { return this->nativeSnapshotId_ != nullptr;};
    void deleteNativeSnapshotId() { this->nativeSnapshotId_ = nullptr;};
    inline string nativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setNativeSnapshotId(string nativeSnapshotId) { DARABONBA_PTR_SET_VALUE(nativeSnapshotId_, nativeSnapshotId) };


    // nativeSnapshotInfo Field Functions 
    bool hasNativeSnapshotInfo() const { return this->nativeSnapshotInfo_ != nullptr;};
    void deleteNativeSnapshotInfo() { this->nativeSnapshotInfo_ = nullptr;};
    inline string nativeSnapshotInfo() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotInfo_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setNativeSnapshotInfo(string nativeSnapshotInfo) { DARABONBA_PTR_SET_VALUE(nativeSnapshotInfo_, nativeSnapshotInfo) };


    // parentSnapshotHash Field Functions 
    bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
    void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
    inline string parentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // realSnapshotTime Field Functions 
    bool hasRealSnapshotTime() const { return this->realSnapshotTime_ != nullptr;};
    void deleteRealSnapshotTime() { this->realSnapshotTime_ = nullptr;};
    inline int64_t realSnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(realSnapshotTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setRealSnapshotTime(int64_t realSnapshotTime) { DARABONBA_PTR_SET_VALUE(realSnapshotTime_, realSnapshotTime) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeUdmSnapshotsResponseBodySnapshots& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The size of the backup snapshot. Unit: bytes.
    std::shared_ptr<string> actualBytes_ = nullptr;
    // The special retention type, which is valid only for special backups. Valid values:
    // 
    // *   **WEEKLY**: weekly backups
    // *   **MONTHLY**: monthly backups
    // *   **YEARLY**: yearly backups
    std::shared_ptr<string> advancedRetentionType_ = nullptr;
    std::shared_ptr<string> archiveErrorMessage_ = nullptr;
    std::shared_ptr<string> archiveStatus_ = nullptr;
    std::shared_ptr<int64_t> archiveTriggerTime_ = nullptr;
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // The total amount of data. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // Indicates whether the disk backup point can be deleted. This parameter is valid only if the value of SourceType is UDM_ECS_DISK.
    std::shared_ptr<bool> canBeDeleted_ = nullptr;
    // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // The time when the backup snapshot was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The snapshot details.
    std::shared_ptr<Models::DescribeUdmSnapshotsResponseBodySnapshotsDetail> detail_ = nullptr;
    // The ID of the cloud disk or local disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The expiration time of the backup.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the backup job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> nativeSnapshotId_ = nullptr;
    // The snapshot information.
    std::shared_ptr<string> nativeSnapshotInfo_ = nullptr;
    // The hash value of the parent backup snapshot.
    std::shared_ptr<string> parentSnapshotHash_ = nullptr;
    // The prefix of the backup snapshot.
    std::shared_ptr<string> prefix_ = nullptr;
    // The timestamp of the backup snapshot. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> realSnapshotTime_ = nullptr;
    // The retention period of the backup snapshot. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The hash value of the backup snapshot.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    // *   **UDM_ECS_DISK**: disk backup subtask of ECS instance backup
    // *   **UDM_DISK**: disk backup
    std::shared_ptr<string> sourceType_ = nullptr;
    // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the backup job. Valid values:
    // 
    // *   **COMPLETE**: The backup job is completed.
    // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
    // *   **FAILED**: The backup job has failed.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
