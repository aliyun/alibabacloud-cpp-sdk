// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCSnapshotsResponseBodySnapshotsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(SourceStorageType, sourceStorageType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(SourceStorageType, sourceStorageType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    DescribeRCSnapshotsResponseBodySnapshots() = default ;
    DescribeRCSnapshotsResponseBodySnapshots(const DescribeRCSnapshotsResponseBodySnapshots &) = default ;
    DescribeRCSnapshotsResponseBodySnapshots(DescribeRCSnapshotsResponseBodySnapshots &&) = default ;
    DescribeRCSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSnapshotsResponseBodySnapshots() = default ;
    DescribeRCSnapshotsResponseBodySnapshots& operator=(const DescribeRCSnapshotsResponseBodySnapshots &) = default ;
    DescribeRCSnapshotsResponseBodySnapshots& operator=(DescribeRCSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->category_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->encrypted_ == nullptr && return this->instantAccess_ == nullptr
        && return this->progress_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->snapshotId_ == nullptr && return this->snapshotName_ == nullptr
        && return this->snapshotType_ == nullptr && return this->sourceDiskId_ == nullptr && return this->sourceDiskSize_ == nullptr && return this->sourceDiskType_ == nullptr && return this->sourceStorageType_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->usage_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string snapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string sourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // sourceDiskSize Field Functions 
    bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
    void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
    inline int64_t sourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, 0L) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSourceDiskSize(int64_t sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string sourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // sourceStorageType Field Functions 
    bool hasSourceStorageType() const { return this->sourceStorageType_ != nullptr;};
    void deleteSourceStorageType() { this->sourceStorageType_ = nullptr;};
    inline string sourceStorageType() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageType_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setSourceStorageType(string sourceStorageType) { DARABONBA_PTR_SET_VALUE(sourceStorageType_, sourceStorageType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag>) };
    inline vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag>) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setTag(const vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCSnapshotsResponseBodySnapshots& setTag(vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeRCSnapshotsResponseBodySnapshots& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // Indicates whether the snapshot can be shared and used to create or roll back a cloud disk. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> available_ = nullptr;
    // The snapshot type. Valid values:
    // 
    // *   Standard: standard snapshot
    // *   Flash: local snapshot This value will be deprecated. The local snapshot feature is replaced with the instant access feature.
    // *   archive: archived snapshot
    std::shared_ptr<string> category_ = nullptr;
    // The creation time. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The snapshot description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the snapshot was encrypted. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> encrypted_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // The progress of the snapshot creation task in percentage.
    std::shared_ptr<string> progress_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The snapshot ID.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The snapshot name.
    std::shared_ptr<string> snapshotName_ = nullptr;
    // The snapshot type. Valid values:
    // 
    // *   auto or timer: automatically created snapshot
    // *   user: manually created snapshot
    // *   all: all snapshot types
    std::shared_ptr<string> snapshotType_ = nullptr;
    // The ID of the original disk. This parameter is retained even after the original disk for which the snapshot was created is released.
    std::shared_ptr<string> sourceDiskId_ = nullptr;
    // The storage capacity of the original disk. Unit: GiB.
    std::shared_ptr<int64_t> sourceDiskSize_ = nullptr;
    // The type of the original disk. Valid values:
    // 
    // *   SYSTEM: system disk
    // *   DATA: data disk
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    // The type of the source disk.
    // 
    // >  This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
    std::shared_ptr<string> sourceStorageType_ = nullptr;
    // The snapshot status. Valid values:
    // 
    // *   progressing: The snapshot is being created.
    // *   accomplished: The snapshot is created.
    // *   failed: The snapshot fails to be created.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRCSnapshotsResponseBodySnapshotsTag>> tag_ = nullptr;
    // Indicates whether the snapshot is used to create custom images or disks. Valid values:
    // 
    // *   image: The snapshot is used to create custom images.
    // *   disk: The snapshot is used to create disks.
    // *   image_disk: The snapshot is used to create custom images and data disks.
    // *   none: The snapshot is not used to create custom images or disks.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
