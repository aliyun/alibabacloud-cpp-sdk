// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODYSNAPSHOTLINKSSNAPSHOTLINK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODYSNAPSHOTLINKSSNAPSHOTLINK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotLinkId, snapshotLinkId_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(SourceDiskName, sourceDiskName_);
      DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotLinkId, snapshotLinkId_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(SourceDiskName, sourceDiskName_);
      DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink() = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink(const DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink &) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink(DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink &&) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink() = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& operator=(const DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink &) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& operator=(DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instantAccess_ == nullptr && return this->regionId_ == nullptr && return this->snapshotLinkId_ == nullptr
        && return this->sourceDiskId_ == nullptr && return this->sourceDiskName_ == nullptr && return this->sourceDiskSize_ == nullptr && return this->sourceDiskType_ == nullptr && return this->totalCount_ == nullptr
        && return this->totalSize_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotLinkId Field Functions 
    bool hasSnapshotLinkId() const { return this->snapshotLinkId_ != nullptr;};
    void deleteSnapshotLinkId() { this->snapshotLinkId_ = nullptr;};
    inline string snapshotLinkId() const { DARABONBA_PTR_GET_DEFAULT(snapshotLinkId_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setSnapshotLinkId(string snapshotLinkId) { DARABONBA_PTR_SET_VALUE(snapshotLinkId_, snapshotLinkId) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string sourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // sourceDiskName Field Functions 
    bool hasSourceDiskName() const { return this->sourceDiskName_ != nullptr;};
    void deleteSourceDiskName() { this->sourceDiskName_ = nullptr;};
    inline string sourceDiskName() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskName_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setSourceDiskName(string sourceDiskName) { DARABONBA_PTR_SET_VALUE(sourceDiskName_, sourceDiskName) };


    // sourceDiskSize Field Functions 
    bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
    void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
    inline int32_t sourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, 0) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setSourceDiskSize(int32_t sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string sourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The type of the snapshot chain. Valid values:
    // 
    // *   standard: standard snapshot chain.
    // *   archive: archive snapshot chain.
    // *   flash: instant access snapshot chain.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Indicates whether the instant access feature is enabled. Valid values:
    // 
    // *   true: The instant access feature is enabled. The feature can be enabled only for Enterprise SSDs (ESSDs).
    // *   false: The instant access feature is disabled. The snapshot is a standard snapshot for which the instant access feature is disabled.
    // 
    // >  This parameter is no longer used. By default, standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // The region ID of the source disk.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the snapshot chain.
    std::shared_ptr<string> snapshotLinkId_ = nullptr;
    // The ID of the source disk. This parameter is retained even if the source disk is deleted.
    std::shared_ptr<string> sourceDiskId_ = nullptr;
    // The name of the source disk.
    std::shared_ptr<string> sourceDiskName_ = nullptr;
    // The capacity of the source disk. Unit: GiB.
    std::shared_ptr<int32_t> sourceDiskSize_ = nullptr;
    // The type of the source disk. Valid values:
    // 
    // *   system: system disk
    // *   data: data disk
    std::shared_ptr<string> sourceDiskType_ = nullptr;
    // The total number of snapshots.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The total size of all snapshots in the snapshot chain. Unit: byte.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
