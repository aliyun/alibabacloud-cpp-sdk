// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSnapshotsResponseBodySnapshotsSnapshotTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotLinkId, snapshotLinkId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotSN, snapshotSN_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(SourceStorageType, sourceStorageType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotLinkId, snapshotLinkId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotSN, snapshotSN_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceStorageType, sourceStorageType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->category_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->encrypted_ == nullptr && return this->instantAccess_ == nullptr
        && return this->instantAccessRetentionDays_ == nullptr && return this->KMSKeyId_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->productCode_ == nullptr && return this->progress_ == nullptr
        && return this->regionId_ == nullptr && return this->remainTime_ == nullptr && return this->resourceGroupId_ == nullptr && return this->retentionDays_ == nullptr && return this->snapshotId_ == nullptr
        && return this->snapshotLinkId_ == nullptr && return this->snapshotName_ == nullptr && return this->snapshotSN_ == nullptr && return this->snapshotType_ == nullptr && return this->sourceDiskId_ == nullptr
        && return this->sourceDiskSize_ == nullptr && return this->sourceDiskType_ == nullptr && return this->sourceRegionId_ == nullptr && return this->sourceSnapshotId_ == nullptr && return this->sourceStorageType_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->usage_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // instantAccessRetentionDays Field Functions 
    bool hasInstantAccessRetentionDays() const { return this->instantAccessRetentionDays_ != nullptr;};
    void deleteInstantAccessRetentionDays() { this->instantAccessRetentionDays_ = nullptr;};
    inline int32_t instantAccessRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(instantAccessRetentionDays_, 0) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setInstantAccessRetentionDays(int32_t instantAccessRetentionDays) { DARABONBA_PTR_SET_VALUE(instantAccessRetentionDays_, instantAccessRetentionDays) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int32_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


    // snapshotLinkId Field Functions 
    bool hasSnapshotLinkId() const { return this->snapshotLinkId_ != nullptr;};
    void deleteSnapshotLinkId() { this->snapshotLinkId_ = nullptr;};
    inline string snapshotLinkId() const { DARABONBA_PTR_GET_DEFAULT(snapshotLinkId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotLinkId(string snapshotLinkId) { DARABONBA_PTR_SET_VALUE(snapshotLinkId_, snapshotLinkId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string snapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotSN Field Functions 
    bool hasSnapshotSN() const { return this->snapshotSN_ != nullptr;};
    void deleteSnapshotSN() { this->snapshotSN_ = nullptr;};
    inline string snapshotSN() const { DARABONBA_PTR_GET_DEFAULT(snapshotSN_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotSN(string snapshotSN) { DARABONBA_PTR_SET_VALUE(snapshotSN_, snapshotSN) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string snapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string sourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // sourceDiskSize Field Functions 
    bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
    void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
    inline string sourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceDiskSize(string sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string sourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // sourceSnapshotId Field Functions 
    bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
    void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
    inline string sourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


    // sourceStorageType Field Functions 
    bool hasSourceStorageType() const { return this->sourceStorageType_ != nullptr;};
    void deleteSourceStorageType() { this->sourceStorageType_ = nullptr;};
    inline string sourceStorageType() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageType_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setSourceStorageType(string sourceStorageType) { DARABONBA_PTR_SET_VALUE(sourceStorageType_, sourceStorageType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags) };
    inline Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setTags(const Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setTags(Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeSnapshotsResponseBodySnapshotsSnapshot& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // Indicates whether the snapshot can be shared and be used to create or roll back a cloud disk. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> available_ = nullptr;
    // The category of the snapshot. Valid values:
    // 
    // *   Standard: standard snapshot.
    // *   Flash: local snapshot. This value will be deprecated. The local snapshot feature is replaced by the instant access feature.
    // *   archive: archive snapshot.
    std::shared_ptr<string> category_ = nullptr;
    // The time when the snapshot was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the snapshot.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the snapshot was encrypted. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> encrypted_ = nullptr;
    // Indicates whether the instant access feature is enabled. Valid values:
    // 
    // *   true: The instant access feature is enabled. By default, the instant access feature is enabled for Enterprise SSDs (ESSDs) and ESSD Entry disks.
    // *   false: The instant access feature is disabled. The snapshot is a standard snapshot for which the instant access feature is disabled.
    // 
    // >  This parameter is deprecated. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // Indicates the validity period of the instant access feature. When the validity period ends, the instant access feature is automatically disabled.
    // 
    // By default, the value of this parameter is the same as the value of `RetentionDays`.
    // 
    // >  This parameter is deprecated. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
    std::shared_ptr<int32_t> instantAccessRetentionDays_ = nullptr;
    // The ID of the KMS key used for the data disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The time when the snapshot was last modified. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    // The product code of the Alibaba Cloud Marketplace image.
    std::shared_ptr<string> productCode_ = nullptr;
    // The progress of the snapshot creation task. Unit: percent (%).
    std::shared_ptr<string> progress_ = nullptr;
    // The region ID of the snapshot.
    std::shared_ptr<string> regionId_ = nullptr;
    // The amount of remaining time required to create the snapshot. Unit: seconds.
    std::shared_ptr<int32_t> remainTime_ = nullptr;
    // The ID of the resource group to which the snapshot belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retention period of the automatic snapshot. Unit: days.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The ID of the snapshot chain that is associated with the snapshot.
    std::shared_ptr<string> snapshotLinkId_ = nullptr;
    // The name of the snapshot. This parameter is returned only if a snapshot name was specified when the snapshot was created.
    std::shared_ptr<string> snapshotName_ = nullptr;
    // The serial number of the snapshot.
    std::shared_ptr<string> snapshotSN_ = nullptr;
    // The type of the snapshot. Valid values:
    // 
    // *   auto or timer: automatic snapshot
    // *   user: manual snapshot
    // *   all: all snapshot types
    std::shared_ptr<string> snapshotType_ = nullptr;
    // The ID of the source disk. This parameter is retained even after the source disk is released.
    std::shared_ptr<string> sourceDiskId_ = nullptr;
    // The capacity of the source disk. Unit: GiB.
    std::shared_ptr<string> sourceDiskSize_ = nullptr;
    // The type of the source disk. Valid values:
    // 
    // *   system
    // *   data
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    // The region ID of the source snapshot.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // The ID of the source snapshot.
    std::shared_ptr<string> sourceSnapshotId_ = nullptr;
    // The category of the source disk.
    // 
    // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> sourceStorageType_ = nullptr;
    // The status of the snapshot. Valid values:
    // 
    // *   progressing: The snapshot is being created.
    // *   accomplished: The snapshot is created.
    // *   failed: The snapshot failed to be created.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the snapshot.
    std::shared_ptr<Models::DescribeSnapshotsResponseBodySnapshotsSnapshotTags> tags_ = nullptr;
    // Indicates whether the snapshot was used to create images or cloud disks. Valid values:
    // 
    // *   image: The snapshot was used to create custom images.
    // *   disk: The snapshot was used to create cloud disks.
    // *   image_disk: The snapshot was used to create custom images and data disks.
    // *   none: The snapshot was not used to create custom images or cloud disks.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
