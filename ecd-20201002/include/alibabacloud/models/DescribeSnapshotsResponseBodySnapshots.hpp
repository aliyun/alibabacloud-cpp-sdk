// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(RestorePointId, restorePointId_);
      DARABONBA_PTR_TO_JSON(RestorePointName, restorePointName_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(RestorePointId, restorePointId_);
      DARABONBA_PTR_FROM_JSON(RestorePointName, restorePointName_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->desktopId_ == nullptr && return this->progress_ == nullptr && return this->remainTime_ == nullptr && return this->restorePointId_ == nullptr
        && return this->restorePointName_ == nullptr && return this->snapshotId_ == nullptr && return this->snapshotName_ == nullptr && return this->snapshotType_ == nullptr && return this->sourceDiskSize_ == nullptr
        && return this->sourceDiskType_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


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


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


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


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    std::shared_ptr<string> restorePointId_ = nullptr;
    std::shared_ptr<string> restorePointName_ = nullptr;
    std::shared_ptr<string> snapshotId_ = nullptr;
    std::shared_ptr<string> snapshotName_ = nullptr;
    std::shared_ptr<string> snapshotType_ = nullptr;
    std::shared_ptr<string> sourceDiskSize_ = nullptr;
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
