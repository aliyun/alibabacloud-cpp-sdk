// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeletionTime, deletionTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DiskStatus, diskStatus_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(RestorePointId, restorePointId_);
      DARABONBA_PTR_TO_JSON(RestorePointName, restorePointName_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeletionTime, deletionTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DiskStatus, diskStatus_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(RestorePointId, restorePointId_);
      DARABONBA_PTR_FROM_JSON(RestorePointName, restorePointName_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    DescribeSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->creator_ != nullptr && this->deletionTime_ != nullptr && this->description_ != nullptr && this->desktopId_ != nullptr && this->desktopName_ != nullptr
        && this->desktopStatus_ != nullptr && this->diskStatus_ != nullptr && this->osType_ != nullptr && this->progress_ != nullptr && this->protocolType_ != nullptr
        && this->remainTime_ != nullptr && this->restorePointId_ != nullptr && this->restorePointName_ != nullptr && this->snapshotId_ != nullptr && this->snapshotName_ != nullptr
        && this->snapshotType_ != nullptr && this->sourceDiskSize_ != nullptr && this->sourceDiskType_ != nullptr && this->status_ != nullptr && this->volumeEncryptionEnabled_ != nullptr
        && this->volumeEncryptionKey_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deletionTime Field Functions 
    bool hasDeletionTime() const { return this->deletionTime_ != nullptr;};
    void deleteDeletionTime() { this->deletionTime_ = nullptr;};
    inline string deletionTime() const { DARABONBA_PTR_GET_DEFAULT(deletionTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDeletionTime(string deletionTime) { DARABONBA_PTR_SET_VALUE(deletionTime_, deletionTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // diskStatus Field Functions 
    bool hasDiskStatus() const { return this->diskStatus_ != nullptr;};
    void deleteDiskStatus() { this->diskStatus_ = nullptr;};
    inline string diskStatus() const { DARABONBA_PTR_GET_DEFAULT(diskStatus_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setDiskStatus(string diskStatus) { DARABONBA_PTR_SET_VALUE(diskStatus_, diskStatus) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int32_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
    inline DescribeSnapshotsResponseBodySnapshots& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // restorePointId Field Functions 
    bool hasRestorePointId() const { return this->restorePointId_ != nullptr;};
    void deleteRestorePointId() { this->restorePointId_ = nullptr;};
    inline string restorePointId() const { DARABONBA_PTR_GET_DEFAULT(restorePointId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setRestorePointId(string restorePointId) { DARABONBA_PTR_SET_VALUE(restorePointId_, restorePointId) };


    // restorePointName Field Functions 
    bool hasRestorePointName() const { return this->restorePointName_ != nullptr;};
    void deleteRestorePointName() { this->restorePointName_ = nullptr;};
    inline string restorePointName() const { DARABONBA_PTR_GET_DEFAULT(restorePointName_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setRestorePointName(string restorePointName) { DARABONBA_PTR_SET_VALUE(restorePointName_, restorePointName) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string snapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // sourceDiskSize Field Functions 
    bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
    void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
    inline string sourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceDiskSize(string sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string sourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeSnapshotsResponseBodySnapshots& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The point in time at which the snapshot was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The user who creates the snapshot.
    std::shared_ptr<string> creator_ = nullptr;
    // The time when the snapshot was deleted. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
    std::shared_ptr<string> deletionTime_ = nullptr;
    // The description of the snapshot.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the cloud computer to which the snapshot belongs.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The status of the cloud computer.
    // 
    // Valid values:
    // 
    // *   Stopped
    // *   Starting
    // *   Rebuilding
    // *   Running
    // *   Stopping
    // *   Expired
    // *   Deleted
    // *   Pending
    std::shared_ptr<string> desktopStatus_ = nullptr;
    std::shared_ptr<string> diskStatus_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    // The progress of creating the snapshot. Unit: %.
    std::shared_ptr<string> progress_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX) protocol
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ASP: in-house Adaptive Streaming Protocol (ASP)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> protocolType_ = nullptr;
    // The remaining time that is required to complete the snapshot creation. Unit: seconds.
    // 
    // >  When the `Status` value is `PROGRESSING`, the `RemainTime` value is `-1`. A value of -1 indicates that the system is calculating the remaining time.
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    // The ID of the restore point.
    std::shared_ptr<string> restorePointId_ = nullptr;
    // The name of the restore point.
    std::shared_ptr<string> restorePointName_ = nullptr;
    // The snapshot ID.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The name of the snapshot.
    std::shared_ptr<string> snapshotName_ = nullptr;
    // The type of the snapshot.
    // 
    // Valid values:
    // 
    // *   AUTO: automatic snapshot
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   USER: manual snapshot
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> snapshotType_ = nullptr;
    // The capacity of the source disk. Unit: GiB.
    std::shared_ptr<string> sourceDiskSize_ = nullptr;
    // The type of the source disk.
    // 
    // Valid values:
    // 
    // *   SYSTEM: system disk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DATA: data disk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    // The status of the snapshot.
    // 
    // Valid values:
    // 
    // *   PROGRESSING: The snapshot is being created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   FAILED: The snapshot fails to be created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ACCOMPLISHED: The snapshot is created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
