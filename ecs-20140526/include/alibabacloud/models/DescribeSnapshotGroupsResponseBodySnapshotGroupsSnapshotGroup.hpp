// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPSSNAPSHOTGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPSSNAPSHOTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots.hpp>
#include <alibabacloud/models/DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProgressStatus, progressStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotGroupId, snapshotGroupId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProgressStatus, progressStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotGroupId, snapshotGroupId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup(const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup(DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup &&) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& operator=(const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& operator=(DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->progressStatus_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->snapshotGroupId_ == nullptr && return this->snapshots_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // progressStatus Field Functions 
    bool hasProgressStatus() const { return this->progressStatus_ != nullptr;};
    void deleteProgressStatus() { this->progressStatus_ = nullptr;};
    inline string progressStatus() const { DARABONBA_PTR_GET_DEFAULT(progressStatus_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setProgressStatus(string progressStatus) { DARABONBA_PTR_SET_VALUE(progressStatus_, progressStatus) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snapshotGroupId Field Functions 
    bool hasSnapshotGroupId() const { return this->snapshotGroupId_ != nullptr;};
    void deleteSnapshotGroupId() { this->snapshotGroupId_ = nullptr;};
    inline string snapshotGroupId() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroupId_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setSnapshotGroupId(string snapshotGroupId) { DARABONBA_PTR_SET_VALUE(snapshotGroupId_, snapshotGroupId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots) };
    inline Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setSnapshots(const Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setSnapshots(Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags) };
    inline Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setTags(const Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup& setTags(Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the snapshot-consistent group was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the snapshot-consistent group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance to which the snapshot-consistent group belongs. This parameter has a value only when all disk snapshots in the snapshot-consistent group belong to the same instance. If disk snapshots in the snapshot-consistent group belong to different instances, you can check the response parameters that start with `Snapshots.Snapshot.Tags.` to determine the ID of the instance to which each snapshot in the snapshot-consistent group belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the snapshot-consistent group.
    std::shared_ptr<string> name_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> progressStatus_ = nullptr;
    // The ID of the resource group to which the snapshot-consistent group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the snapshot-consistent group.
    std::shared_ptr<string> snapshotGroupId_ = nullptr;
    // The information about the snapshots in the snapshot-consistent group.
    std::shared_ptr<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots> snapshots_ = nullptr;
    // The state of the snapshot-consistent group. Valid values:
    // 
    // *   progressing: The snapshot-consistent group was being created.
    // *   accomplished: The snapshot-consistent group was created.
    // *   failed: The snapshot-consistent group failed to be created.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the snapshot-consistent group.
    std::shared_ptr<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
