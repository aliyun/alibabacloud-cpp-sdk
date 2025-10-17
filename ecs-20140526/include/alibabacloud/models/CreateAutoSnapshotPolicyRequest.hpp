// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoSnapshotPolicyRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_TO_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_TO_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_TO_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(timePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_FROM_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_FROM_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_FROM_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(timePoints, timePoints_);
    };
    CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest(CreateAutoSnapshotPolicyRequest &&) = default ;
    CreateAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest& operator=(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest& operator=(CreateAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copiedSnapshotsRetentionDays_ == nullptr
        && return this->copyEncryptionConfiguration_ == nullptr && return this->enableCrossRegionCopy_ == nullptr && return this->ownerId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->storageLocationArn_ == nullptr && return this->tag_ == nullptr && return this->targetCopyRegions_ == nullptr && return this->autoSnapshotPolicyName_ == nullptr
        && return this->regionId_ == nullptr && return this->repeatWeekdays_ == nullptr && return this->retentionDays_ == nullptr && return this->timePoints_ == nullptr; };
    // copiedSnapshotsRetentionDays Field Functions 
    bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
    void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
    inline int32_t copiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


    // copyEncryptionConfiguration Field Functions 
    bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
    void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
    inline const CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration & copyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration copyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequest& setCopyEncryptionConfiguration(const CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequest& setCopyEncryptionConfiguration(CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


    // enableCrossRegionCopy Field Functions 
    bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
    void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
    inline bool enableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
    inline CreateAutoSnapshotPolicyRequest& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoSnapshotPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAutoSnapshotPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAutoSnapshotPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAutoSnapshotPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageLocationArn Field Functions 
    bool hasStorageLocationArn() const { return this->storageLocationArn_ != nullptr;};
    void deleteStorageLocationArn() { this->storageLocationArn_ = nullptr;};
    inline string storageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(storageLocationArn_, "") };
    inline CreateAutoSnapshotPolicyRequest& setStorageLocationArn(string storageLocationArn) { DARABONBA_PTR_SET_VALUE(storageLocationArn_, storageLocationArn) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAutoSnapshotPolicyRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAutoSnapshotPolicyRequestTag>) };
    inline vector<CreateAutoSnapshotPolicyRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAutoSnapshotPolicyRequestTag>) };
    inline CreateAutoSnapshotPolicyRequest& setTag(const vector<CreateAutoSnapshotPolicyRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAutoSnapshotPolicyRequest& setTag(vector<CreateAutoSnapshotPolicyRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetCopyRegions Field Functions 
    bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
    void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
    inline string targetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string autoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline CreateAutoSnapshotPolicyRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string repeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string timePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The retention period of the snapshot copy in the destination region. Unit: days. Valid values:
    // 
    // *   \\-1: The snapshot copy is retained until it is deleted.
    // *   1 to 65535: The snapshot copy is retained for the specified number of days. After the retention period of the snapshot copy expires, the snapshot copy is automatically deleted.
    // 
    // Default value: -1.
    std::shared_ptr<int32_t> copiedSnapshotsRetentionDays_ = nullptr;
    // The encryption parameters for cross-region snapshot replication.
    std::shared_ptr<CreateAutoSnapshotPolicyRequestCopyEncryptionConfiguration> copyEncryptionConfiguration_ = nullptr;
    // Specifies whether to enable cross-region replication for snapshots.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableCrossRegionCopy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<string> storageLocationArn_ = nullptr;
    // The tags to add to the automatic snapshot policy.
    std::shared_ptr<vector<CreateAutoSnapshotPolicyRequestTag>> tag_ = nullptr;
    // The destination region to which to copy the snapshot. You can specify only a single destination region.
    std::shared_ptr<string> targetCopyRegions_ = nullptr;
    // The name of the automatic snapshot policy. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // By default, this parameter is left empty.
    std::shared_ptr<string> autoSnapshotPolicyName_ = nullptr;
    // The ID of the region in which to create the automatic snapshot policy. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The days of the week on which to create automatic snapshots. Valid values: 1 to 7, which correspond to Monday to Sunday. 1 indicates Monday. Format description:
    // 
    // *   Set this parameter to a JSON-formatted array. For example, a value of ["1"] specifies automatic snapshots to be created every Monday.
    // *   To schedule multiple automatic snapshots to be created in a week, you can specify multiple values. Separate the values with commas (,). You can specify a maximum of seven days. For example, a value of ["1","3","5"] specifies automatic snapshots to be created every Monday, Wednesday, and Friday.
    // 
    // This parameter is required.
    std::shared_ptr<string> repeatWeekdays_ = nullptr;
    // The retention period of the automatic snapshot. Unit: days. Valid values:
    // 
    // *   \\-1: The automatic snapshot is retained until it is deleted.
    // *   1 to 65535: The automatic snapshot is retained for the specified number of days. After the retention period of the automatic snapshot expires, the automatic snapshot is automatically deleted.
    // 
    // Default value: -1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The points in time of the day at which to create automatic snapshots. The time must be in UTC+8. Unit: hours. Valid values: 0 to 23, which correspond to the 24 on-the-hour points in time from 00:00:00 to 23:00:00. For example, 1 indicates 01:00:00. Format description:
    // 
    // *   Set this parameter to a JSON-formatted array. For example, a value of ["1"] specifies automatic snapshots to be created at 01:00:00.
    // *   To schedule multiple automatic snapshots to be created in a day, you can specify multiple values. Separate the values with commas (,). You can specify up to 24 points in time. For example, a value of ["1","3","5"] specifies automatic snapshots to be created at 01:00:00, 03:00:00, and 05:00:00.
    // 
    // >  If an automatic snapshot is being created when the time scheduled for creating another automatic snapshot is due, the new snapshot task is skipped. This may occur when a disk contains a large volume of data. For example, you scheduled snapshots to be automatically created at 09:00, 10:00, 11:00, and 12:00. The system starts to create a snapshot for the disk at 09:00:00. The process takes 80 minutes to complete because the disk contains a large volume of data and ends at 10:20:00. The system skips the automatic snapshot task scheduled for 10:00:00 and creates the next automatic snapshot for the disk at 11:00:00.
    // 
    // This parameter is required.
    std::shared_ptr<string> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
