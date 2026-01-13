// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
    };
    DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody(DescribeSnapshotsResponseBody &&) = default ;
    DescribeSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody& operator=(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody& operator=(DescribeSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DeletionTime, deletionTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DiskStatus, diskStatus_);
        DARABONBA_PTR_TO_JSON(EnvId, envId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
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
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DeletionTime, deletionTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DiskStatus, diskStatus_);
        DARABONBA_PTR_FROM_JSON(EnvId, envId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
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
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->creator_ == nullptr && this->deletionTime_ == nullptr && this->description_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->desktopStatus_ == nullptr && this->diskStatus_ == nullptr && this->envId_ == nullptr && this->envType_ == nullptr && this->osType_ == nullptr
        && this->progress_ == nullptr && this->protocolType_ == nullptr && this->remainTime_ == nullptr && this->restorePointId_ == nullptr && this->restorePointName_ == nullptr
        && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotType_ == nullptr && this->sourceDiskSize_ == nullptr && this->sourceDiskType_ == nullptr
        && this->status_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Snapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Snapshots& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // deletionTime Field Functions 
      bool hasDeletionTime() const { return this->deletionTime_ != nullptr;};
      void deleteDeletionTime() { this->deletionTime_ = nullptr;};
      inline string getDeletionTime() const { DARABONBA_PTR_GET_DEFAULT(deletionTime_, "") };
      inline Snapshots& setDeletionTime(string deletionTime) { DARABONBA_PTR_SET_VALUE(deletionTime_, deletionTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Snapshots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Snapshots& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Snapshots& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Snapshots& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // diskStatus Field Functions 
      bool hasDiskStatus() const { return this->diskStatus_ != nullptr;};
      void deleteDiskStatus() { this->diskStatus_ = nullptr;};
      inline string getDiskStatus() const { DARABONBA_PTR_GET_DEFAULT(diskStatus_, "") };
      inline Snapshots& setDiskStatus(string diskStatus) { DARABONBA_PTR_SET_VALUE(diskStatus_, diskStatus) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline Snapshots& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Snapshots& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Snapshots& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Snapshots& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Snapshots& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // remainTime Field Functions 
      bool hasRemainTime() const { return this->remainTime_ != nullptr;};
      void deleteRemainTime() { this->remainTime_ = nullptr;};
      inline int32_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
      inline Snapshots& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


      // restorePointId Field Functions 
      bool hasRestorePointId() const { return this->restorePointId_ != nullptr;};
      void deleteRestorePointId() { this->restorePointId_ = nullptr;};
      inline string getRestorePointId() const { DARABONBA_PTR_GET_DEFAULT(restorePointId_, "") };
      inline Snapshots& setRestorePointId(string restorePointId) { DARABONBA_PTR_SET_VALUE(restorePointId_, restorePointId) };


      // restorePointName Field Functions 
      bool hasRestorePointName() const { return this->restorePointName_ != nullptr;};
      void deleteRestorePointName() { this->restorePointName_ = nullptr;};
      inline string getRestorePointName() const { DARABONBA_PTR_GET_DEFAULT(restorePointName_, "") };
      inline Snapshots& setRestorePointName(string restorePointName) { DARABONBA_PTR_SET_VALUE(restorePointName_, restorePointName) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline Snapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // snapshotName Field Functions 
      bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
      void deleteSnapshotName() { this->snapshotName_ = nullptr;};
      inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
      inline Snapshots& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


      // snapshotType Field Functions 
      bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
      void deleteSnapshotType() { this->snapshotType_ = nullptr;};
      inline string getSnapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
      inline Snapshots& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


      // sourceDiskSize Field Functions 
      bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
      void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
      inline string getSourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, "") };
      inline Snapshots& setSourceDiskSize(string sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


      // sourceDiskType Field Functions 
      bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
      void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
      inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
      inline Snapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline Snapshots& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline Snapshots& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The point in time at which the snapshot was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The user who creates the snapshot.
      shared_ptr<string> creator_ {};
      // The time when the snapshot was deleted. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
      shared_ptr<string> deletionTime_ {};
      // The description of the snapshot.
      shared_ptr<string> description_ {};
      // The ID of the cloud computer to which the snapshot belongs.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
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
      shared_ptr<string> desktopStatus_ {};
      shared_ptr<string> diskStatus_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> envType_ {};
      shared_ptr<string> osType_ {};
      // The progress of creating the snapshot. Unit: %.
      shared_ptr<string> progress_ {};
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
      shared_ptr<string> protocolType_ {};
      // The remaining time that is required to complete the snapshot creation. Unit: seconds.
      // 
      // >  When the `Status` value is `PROGRESSING`, the `RemainTime` value is `-1`. A value of -1 indicates that the system is calculating the remaining time.
      shared_ptr<int32_t> remainTime_ {};
      // The ID of the restore point.
      shared_ptr<string> restorePointId_ {};
      // The name of the restore point.
      shared_ptr<string> restorePointName_ {};
      // The snapshot ID.
      shared_ptr<string> snapshotId_ {};
      // The name of the snapshot.
      shared_ptr<string> snapshotName_ {};
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
      shared_ptr<string> snapshotType_ {};
      // The capacity of the source disk. Unit: GiB.
      shared_ptr<string> sourceDiskSize_ {};
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
      shared_ptr<string> sourceDiskType_ {};
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
      shared_ptr<string> status_ {};
      // Indicates whether disk encryption is enabled.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->snapshots_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeSnapshotsResponseBody::Snapshots>) };
    inline vector<DescribeSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeSnapshotsResponseBody::Snapshots>) };
    inline DescribeSnapshotsResponseBody& setSnapshots(const vector<DescribeSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(vector<DescribeSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


  protected:
    // If the NextToken parameter is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The snapshots.
    shared_ptr<vector<DescribeSnapshotsResponseBody::Snapshots>> snapshots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
