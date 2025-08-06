// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODYAUTOSNAPSHOTPOLICIESAUTOSNAPSHOTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODYAUTOSNAPSHOTPOLICIESAUTOSNAPSHOTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration.hpp>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_TO_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DiskNums, diskNums_);
      DARABONBA_PTR_TO_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VolumeNums, volumeNums_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_FROM_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DiskNums, diskNums_);
      DARABONBA_PTR_FROM_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VolumeNums, volumeNums_);
    };
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy() = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy &) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy(DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy &&) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy() = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& operator=(const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy &) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& operator=(DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicyId_ != nullptr
        && this->autoSnapshotPolicyName_ != nullptr && this->copiedSnapshotsRetentionDays_ != nullptr && this->copyEncryptionConfiguration_ != nullptr && this->creationTime_ != nullptr && this->diskNums_ != nullptr
        && this->enableCrossRegionCopy_ != nullptr && this->regionId_ != nullptr && this->repeatWeekdays_ != nullptr && this->resourceGroupId_ != nullptr && this->retentionDays_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->targetCopyRegions_ != nullptr && this->timePoints_ != nullptr && this->type_ != nullptr
        && this->volumeNums_ != nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string autoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // copiedSnapshotsRetentionDays Field Functions 
    bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
    void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
    inline int32_t copiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


    // copyEncryptionConfiguration Field Functions 
    bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
    void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
    inline const Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration & copyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration) };
    inline Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration copyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setCopyEncryptionConfiguration(const Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setCopyEncryptionConfiguration(Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diskNums Field Functions 
    bool hasDiskNums() const { return this->diskNums_ != nullptr;};
    void deleteDiskNums() { this->diskNums_ = nullptr;};
    inline int32_t diskNums() const { DARABONBA_PTR_GET_DEFAULT(diskNums_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setDiskNums(int32_t diskNums) { DARABONBA_PTR_SET_VALUE(diskNums_, diskNums) };


    // enableCrossRegionCopy Field Functions 
    bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
    void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
    inline bool enableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string repeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags) };
    inline Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setTags(const Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setTags(Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetCopyRegions Field Functions 
    bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
    void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
    inline string targetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string timePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // volumeNums Field Functions 
    bool hasVolumeNums() const { return this->volumeNums_ != nullptr;};
    void deleteVolumeNums() { this->volumeNums_ = nullptr;};
    inline int32_t volumeNums() const { DARABONBA_PTR_GET_DEFAULT(volumeNums_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy& setVolumeNums(int32_t volumeNums) { DARABONBA_PTR_SET_VALUE(volumeNums_, volumeNums) };


  protected:
    // The ID of the automatic snapshot policy.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The name of the automatic snapshot policy.
    std::shared_ptr<string> autoSnapshotPolicyName_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> copiedSnapshotsRetentionDays_ = nullptr;
    // Encryption configurations for cross-region snapshot replication.
    std::shared_ptr<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyCopyEncryptionConfiguration> copyEncryptionConfiguration_ = nullptr;
    // The time when the automatic snapshot policy was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The number of disks to which the automatic snapshot policy is applied.
    std::shared_ptr<int32_t> diskNums_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> enableCrossRegionCopy_ = nullptr;
    // The region ID of the automatic snapshot policy.
    std::shared_ptr<string> regionId_ = nullptr;
    // The days of the week on which to create automatic snapshots. Valid values: 1 to 7, which correspond to the days of the week. For example, 1 indicates Monday. One or more days can be specified.
    std::shared_ptr<string> repeatWeekdays_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retention period of the automatic snapshots. Unit: days. Valid values:
    // 
    // *   \\-1: Automatic snapshots are retained until they are deleted.
    // *   1 to 65536: Auto snapshots are retained for the specified number of days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The status of the automatic snapshot policy. Valid values:
    // 
    // *   Normal: The automatic snapshot policy is normal.
    // *   Expire: The automatic snapshot policy cannot be used because your account has overdue payments.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the automatic snapshot policy.
    std::shared_ptr<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicyTags> tags_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> targetCopyRegions_ = nullptr;
    // The points in time of the day at which to create automatic snapshots.
    // 
    // The time is displayed in UTC+8. Unit: hours. Valid values: 0 to 23, which correspond to the 24 points in time on the hour from 00:00:00 to 23:00:00. For example, 1 indicates 01:00:00. Multiple points in time can be specified.
    // 
    // The parameter value is a JSON array that contains up to 24 points in time separated by commas (,). Example: `["0", "1", ... "23"]`.
    std::shared_ptr<string> timePoints_ = nullptr;
    // The type of the automatic snapshot policy. Valid values:
    // 
    // *   Custom: user-defined snapshot policy.
    // *   System: system-defined snapshot policy.
    std::shared_ptr<string> type_ = nullptr;
    // The number of extended volumes to which the automatic snapshot policy is applied.
    std::shared_ptr<int32_t> volumeNums_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
