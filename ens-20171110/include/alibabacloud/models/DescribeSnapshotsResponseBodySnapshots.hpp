// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SourceDiskCategory, sourceDiskCategory_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(SourceEnsRegionId, sourceEnsRegionId_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SourceDiskCategory, sourceDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(SourceEnsRegionId, sourceEnsRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
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
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->size_ != nullptr && this->snapshotId_ != nullptr && this->snapshotName_ != nullptr
        && this->sourceDiskCategory_ != nullptr && this->sourceDiskId_ != nullptr && this->sourceDiskType_ != nullptr && this->sourceEnsRegionId_ != nullptr && this->sourceSnapshotId_ != nullptr
        && this->status_ != nullptr; };
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


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


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


    // sourceDiskCategory Field Functions 
    bool hasSourceDiskCategory() const { return this->sourceDiskCategory_ != nullptr;};
    void deleteSourceDiskCategory() { this->sourceDiskCategory_ = nullptr;};
    inline string sourceDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskCategory_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceDiskCategory(string sourceDiskCategory) { DARABONBA_PTR_SET_VALUE(sourceDiskCategory_, sourceDiskCategory) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string sourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string sourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // sourceEnsRegionId Field Functions 
    bool hasSourceEnsRegionId() const { return this->sourceEnsRegionId_ != nullptr;};
    void deleteSourceEnsRegionId() { this->sourceEnsRegionId_ = nullptr;};
    inline string sourceEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceEnsRegionId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceEnsRegionId(string sourceEnsRegionId) { DARABONBA_PTR_SET_VALUE(sourceEnsRegionId_, sourceEnsRegionId) };


    // sourceSnapshotId Field Functions 
    bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
    void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
    inline string sourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The creation time. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the snapshot.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The capacity of the disk. Unit: MiB.
    std::shared_ptr<string> size_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The name of the snapshot. This parameter is returned only if a snapshot name was specified when the snapshot was created.
    std::shared_ptr<string> snapshotName_ = nullptr;
    // The type of the disk. Valid value:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: all-flash disk
    // *   local_hdd: local HDD
    // *   local_ssd: local SSD
    std::shared_ptr<string> sourceDiskCategory_ = nullptr;
    // The ID of the source disk. This parameter is retained even after the source disk for which the snapshot was created is released.
    std::shared_ptr<string> sourceDiskId_ = nullptr;
    // The type of the disk. Valid value:
    // 
    // *   1: system disk
    // *   2: data disk
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    // The ID of the source edge node.
    std::shared_ptr<string> sourceEnsRegionId_ = nullptr;
    // The ID of the source snapshot.
    std::shared_ptr<string> sourceSnapshotId_ = nullptr;
    // The status of the snapshot. Valid value:
    // 
    // *   creating: The snapshot is being created.
    // *   Available: The snapshot is available.
    // *   deleting: The snapshot is being deleted.
    // *   error: An error occurred on the snapshot.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
