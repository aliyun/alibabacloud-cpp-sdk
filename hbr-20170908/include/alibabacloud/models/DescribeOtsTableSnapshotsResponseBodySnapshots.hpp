// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeOtsTableSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOtsTableSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_TO_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_TO_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOtsTableSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_FROM_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_FROM_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeOtsTableSnapshotsResponseBodySnapshots() = default ;
    DescribeOtsTableSnapshotsResponseBodySnapshots(const DescribeOtsTableSnapshotsResponseBodySnapshots &) = default ;
    DescribeOtsTableSnapshotsResponseBodySnapshots(DescribeOtsTableSnapshotsResponseBodySnapshots &&) = default ;
    DescribeOtsTableSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOtsTableSnapshotsResponseBodySnapshots() = default ;
    DescribeOtsTableSnapshotsResponseBodySnapshots& operator=(const DescribeOtsTableSnapshotsResponseBodySnapshots &) = default ;
    DescribeOtsTableSnapshotsResponseBodySnapshots& operator=(DescribeOtsTableSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualBytes_ == nullptr
        && return this->backupType_ == nullptr && return this->bytesTotal_ == nullptr && return this->completeTime_ == nullptr && return this->createTime_ == nullptr && return this->createdTime_ == nullptr
        && return this->instanceName_ == nullptr && return this->jobId_ == nullptr && return this->parentSnapshotHash_ == nullptr && return this->rangeEnd_ == nullptr && return this->rangeStart_ == nullptr
        && return this->retention_ == nullptr && return this->snapshotHash_ == nullptr && return this->snapshotId_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->tableName_ == nullptr && return this->updatedTime_ == nullptr && return this->vaultId_ == nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline string actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setActualBytes(string actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // parentSnapshotHash Field Functions 
    bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
    void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
    inline string parentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


    // rangeEnd Field Functions 
    bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
    void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
    inline int64_t rangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setRangeEnd(int64_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


    // rangeStart Field Functions 
    bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
    void deleteRangeStart() { this->rangeStart_ = nullptr;};
    inline int64_t rangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setRangeStart(int64_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeOtsTableSnapshotsResponseBodySnapshots& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
    std::shared_ptr<string> actualBytes_ = nullptr;
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // The total amount of data. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // The time when the Tablestore instance was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the Tablestore instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The ID of the backup job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The hash value of the parent backup snapshot.
    std::shared_ptr<string> parentSnapshotHash_ = nullptr;
    // The time when the backup job ended. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> rangeEnd_ = nullptr;
    // The time when the backup job started. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> rangeStart_ = nullptr;
    // The retention period of the backup snapshot. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The hash value of the backup snapshot.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: backup snapshots for Elastic Compute Service (ECS) files
    // *   **OSS**: backup snapshots for Object Storage Service (OSS) buckets
    // *   **NAS**: backup snapshots for Apsara File Storage NAS file systems
    // *   **OTS_TABLE**: backup snapshots for Tablestore instances
    std::shared_ptr<string> sourceType_ = nullptr;
    // The time when the backup snapshot started. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the backup job. Valid values:
    // 
    // *   **COMPLETE**: The backup job is completed.
    // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
    // *   **FAILED**: The backup job has failed.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the table in the Tablestore instance.
    std::shared_ptr<string> tableName_ = nullptr;
    // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the backup vault that stores the backup snapshot.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
