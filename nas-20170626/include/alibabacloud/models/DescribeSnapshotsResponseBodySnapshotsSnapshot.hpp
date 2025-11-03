// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceFileSystemId, sourceFileSystemId_);
      DARABONBA_PTR_TO_JSON(SourceFileSystemSize, sourceFileSystemSize_);
      DARABONBA_PTR_TO_JSON(SourceFileSystemVersion, sourceFileSystemVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceFileSystemId, sourceFileSystemId_);
      DARABONBA_PTR_FROM_JSON(SourceFileSystemSize, sourceFileSystemSize_);
      DARABONBA_PTR_FROM_JSON(SourceFileSystemVersion, sourceFileSystemVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSnapshotsResponseBodySnapshotsSnapshot() = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshot(const DescribeSnapshotsResponseBodySnapshotsSnapshot &) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshot(DescribeSnapshotsResponseBodySnapshotsSnapshot &&) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBodySnapshotsSnapshot() = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshot& operator=(const DescribeSnapshotsResponseBodySnapshotsSnapshot &) = default ;
    DescribeSnapshotsResponseBodySnapshotsSnapshot& operator=(DescribeSnapshotsResponseBodySnapshotsSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedTime_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->encryptType_ == nullptr && return this->fileSystemType_ == nullptr && return this->progress_ == nullptr
        && return this->remainTime_ == nullptr && return this->retentionDays_ == nullptr && return this->snapshotId_ == nullptr && return this->snapshotName_ == nullptr && return this->snapshotType_ == nullptr
        && return this->sourceFileSystemId_ == nullptr && return this->sourceFileSystemSize_ == nullptr && return this->sourceFileSystemVersion_ == nullptr && return this->status_ == nullptr; };
    // completedTime Field Functions 
    bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
    void deleteCompletedTime() { this->completedTime_ = nullptr;};
    inline string completedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setCompletedTime(string completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int32_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string snapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // sourceFileSystemId Field Functions 
    bool hasSourceFileSystemId() const { return this->sourceFileSystemId_ != nullptr;};
    void deleteSourceFileSystemId() { this->sourceFileSystemId_ = nullptr;};
    inline string sourceFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceFileSystemId(string sourceFileSystemId) { DARABONBA_PTR_SET_VALUE(sourceFileSystemId_, sourceFileSystemId) };


    // sourceFileSystemSize Field Functions 
    bool hasSourceFileSystemSize() const { return this->sourceFileSystemSize_ != nullptr;};
    void deleteSourceFileSystemSize() { this->sourceFileSystemSize_ = nullptr;};
    inline int64_t sourceFileSystemSize() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemSize_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceFileSystemSize(int64_t sourceFileSystemSize) { DARABONBA_PTR_SET_VALUE(sourceFileSystemSize_, sourceFileSystemSize) };


    // sourceFileSystemVersion Field Functions 
    bool hasSourceFileSystemVersion() const { return this->sourceFileSystemVersion_ != nullptr;};
    void deleteSourceFileSystemVersion() { this->sourceFileSystemVersion_ = nullptr;};
    inline string sourceFileSystemVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemVersion_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceFileSystemVersion(string sourceFileSystemVersion) { DARABONBA_PTR_SET_VALUE(sourceFileSystemVersion_, sourceFileSystemVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when snapshot creation was complete.
    // 
    // The time follows the [ISO 8601](https://www.iso.org/iso-8601-date-and-time-format.html) standard in UTC. The time is displayed in the `yyyy-MM-ddThh:mmZ` format.
    // 
    // >  This parameter is valid only when the snapshot is created. During snapshot creation, the value of this parameter is the same as that of CreateTime.
    std::shared_ptr<string> completedTime_ = nullptr;
    // The time when the snapshot was created.
    // 
    // The time follows the [ISO 8601](https://www.iso.org/iso-8601-date-and-time-format.html) standard in UTC. The time is displayed in the `yyyy-MM-ddThh:mmZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the snapshot.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the snapshot is encrypted.
    // 
    // Valid values:
    // 
    // *   0: The snapshot is not encrypted.
    // *   1: The snapshot is encrypted.
    std::shared_ptr<int32_t> encryptType_ = nullptr;
    // The type of the file system.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The progress of the snapshot creation. The value of this parameter is expressed as a percentage.
    std::shared_ptr<string> progress_ = nullptr;
    // The remaining time that is required to create the snapshot.
    // 
    // Unit: seconds.
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    // The retention period of the auto snapshot.
    // 
    // Unit: days.
    // 
    // Valid values:
    // 
    // *   \\-1: Auto snapshots are permanently retained. After the number of auto snapshots exceeds the upper limit, the earliest auto snapshot is automatically deleted.
    // *   1 to 65536: Auto snapshots are retained for the specified days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The snapshot ID.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The snapshot name.
    // 
    // If you specify a name to create a snapshot, the name of the snapshot is returned. Otherwise, no value is returned for this parameter.
    std::shared_ptr<string> snapshotName_ = nullptr;
    // The snapshot type. Valid values:
    // 
    // *   auto: automatically created snapshots
    // *   user: manually created snapshots
    std::shared_ptr<string> snapshotType_ = nullptr;
    // The ID of the source file system.
    // 
    // This parameter is retained even if the source file system of the snapshot is deleted.
    std::shared_ptr<string> sourceFileSystemId_ = nullptr;
    // The capacity of the source file system.
    // 
    // Unit: GiB.
    std::shared_ptr<int64_t> sourceFileSystemSize_ = nullptr;
    // The version of the source file system.
    std::shared_ptr<string> sourceFileSystemVersion_ = nullptr;
    // The status of the snapshot.
    // 
    // Valid values:
    // 
    // *   progressing: The snapshot is being created.
    // *   accomplished: The snapshot is created.
    // *   failed: The snapshot fails to be created.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
