// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyAutoSnapshotPolicyExRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoSnapshotPolicyExRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_TO_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_TO_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_TO_JSON(autoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(timePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoSnapshotPolicyExRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_FROM_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_FROM_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_FROM_JSON(autoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(timePoints, timePoints_);
    };
    ModifyAutoSnapshotPolicyExRequest() = default ;
    ModifyAutoSnapshotPolicyExRequest(const ModifyAutoSnapshotPolicyExRequest &) = default ;
    ModifyAutoSnapshotPolicyExRequest(ModifyAutoSnapshotPolicyExRequest &&) = default ;
    ModifyAutoSnapshotPolicyExRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoSnapshotPolicyExRequest() = default ;
    ModifyAutoSnapshotPolicyExRequest& operator=(const ModifyAutoSnapshotPolicyExRequest &) = default ;
    ModifyAutoSnapshotPolicyExRequest& operator=(ModifyAutoSnapshotPolicyExRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->copiedSnapshotsRetentionDays_ != nullptr
        && this->copyEncryptionConfiguration_ != nullptr && this->enableCrossRegionCopy_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->targetCopyRegions_ != nullptr && this->autoSnapshotPolicyId_ != nullptr && this->autoSnapshotPolicyName_ != nullptr && this->regionId_ != nullptr && this->repeatWeekdays_ != nullptr
        && this->retentionDays_ != nullptr && this->timePoints_ != nullptr; };
    // copiedSnapshotsRetentionDays Field Functions 
    bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
    void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
    inline int32_t copiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


    // copyEncryptionConfiguration Field Functions 
    bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
    void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
    inline const ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration & copyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration copyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopyEncryptionConfiguration(const ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopyEncryptionConfiguration(ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


    // enableCrossRegionCopy Field Functions 
    bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
    void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
    inline bool enableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
    inline ModifyAutoSnapshotPolicyExRequest& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoSnapshotPolicyExRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoSnapshotPolicyExRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetCopyRegions Field Functions 
    bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
    void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
    inline string targetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string autoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string repeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline ModifyAutoSnapshotPolicyExRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string timePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The retention period of the snapshot copy in the destination region. Unit: days. Valid values:
    // 
    // - -1: The snapshot copy is retained until it is deleted.
    // - 1 to 65535: The snapshot copy is retained for a specified number of days.
    // 
    // Default value: -1.
    std::shared_ptr<int32_t> copiedSnapshotsRetentionDays_ = nullptr;
    // The encryption configurations for cross-region snapshot replication.
    std::shared_ptr<ModifyAutoSnapshotPolicyExRequestCopyEncryptionConfiguration> copyEncryptionConfiguration_ = nullptr;
    // Specifies whether to enable cross-region replication for the automatic snapshot.
    // 
    // *   true: enables cross-region replication for the automatic snapshot.
    // *   false: disables cross-region replication for the automatic snapshot.
    std::shared_ptr<bool> enableCrossRegionCopy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The destination region to which to copy the snapshot. You can specify only a single destination region.
    std::shared_ptr<string> targetCopyRegions_ = nullptr;
    // The ID of the automatic snapshot policy. You can call the [DescribeAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25530.html) operation to query available automatic snapshot policies.
    // 
    // This parameter is required.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The name of the automatic snapshot policy. If this parameter is not specified, the original name of the automatic snapshot policy is retained.
    std::shared_ptr<string> autoSnapshotPolicyName_ = nullptr;
    // The region ID of the automatic snapshot policy. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The days of the week on which to create automatic snapshots. Valid values are 1 to 7, which correspond to the days of the week. For example, a value of 1 indicates Monday.
    // 
    // To schedule multiple automatic snapshots to be created in a week, you can specify multiple days.
    // 
    // *   You can specify up to seven days over a one-week period.
    // *   You must set this parameter to a JSON array such as `["1", "2" ... "7"]`. Separate the values in the array with commas (,).
    std::shared_ptr<string> repeatWeekdays_ = nullptr;
    // The retention period of the automatic snapshot. Unit: days. Valid values:
    // 
    // *   \\-1: The automatic snapshot is permanently retained.
    // *   1 to 65536: The auto snapshot is retained for the specified number of days.
    // 
    // Default value: -1.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The points in time of the day at which to create automatic snapshots. The time must be in UTC+8. Unit: hours. Valid values are 0 to 23, which correspond to the 24 points in time on the hour from 00:00:00 to 23:00:00. For example, a value of 1 indicates 01:00:00.
    // 
    // To schedule multiple automatic snapshots to be created in a day, you can specify multiple hours.
    // 
    // *   You can specify up to 24 points in time.
    // *   You must set this parameter to a JSON array such as `["0", "1", ... "23"]`. Separate the points in time with commas (,).
    std::shared_ptr<string> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
