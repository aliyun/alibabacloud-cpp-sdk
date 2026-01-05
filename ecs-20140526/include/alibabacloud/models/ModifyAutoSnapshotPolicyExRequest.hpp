// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSNAPSHOTPOLICYEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CopyEncryptionConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CopyEncryptionConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      };
      friend void from_json(const Darabonba::Json& j, CopyEncryptionConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      };
      CopyEncryptionConfiguration() = default ;
      CopyEncryptionConfiguration(const CopyEncryptionConfiguration &) = default ;
      CopyEncryptionConfiguration(CopyEncryptionConfiguration &&) = default ;
      CopyEncryptionConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CopyEncryptionConfiguration() = default ;
      CopyEncryptionConfiguration& operator=(const CopyEncryptionConfiguration &) = default ;
      CopyEncryptionConfiguration& operator=(CopyEncryptionConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Arn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Arn& obj) { 
          DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
        };
        friend void from_json(const Darabonba::Json& j, Arn& obj) { 
          DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
        };
        Arn() = default ;
        Arn(const Arn &) = default ;
        Arn(Arn &&) = default ;
        Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Arn() = default ;
        Arn& operator=(const Arn &) = default ;
        Arn& operator=(Arn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
        // assumeRoleFor Field Functions 
        bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
        void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
        inline int64_t getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
        inline Arn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


        // roleType Field Functions 
        bool hasRoleType() const { return this->roleType_ != nullptr;};
        void deleteRoleType() { this->roleType_ = nullptr;};
        inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
        inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        // rolearn Field Functions 
        bool hasRolearn() const { return this->rolearn_ != nullptr;};
        void deleteRolearn() { this->rolearn_ = nullptr;};
        inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
        inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


      protected:
        // This parameter is not publicly available.
        shared_ptr<int64_t> assumeRoleFor_ {};
        // This parameter is not publicly available.
        shared_ptr<string> roleType_ {};
        // This parameter is not publicly available.
        shared_ptr<string> rolearn_ {};
      };

      virtual bool empty() const override { return this->arn_ == nullptr
        && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline const vector<CopyEncryptionConfiguration::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CopyEncryptionConfiguration::Arn>) };
      inline vector<CopyEncryptionConfiguration::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<CopyEncryptionConfiguration::Arn>) };
      inline CopyEncryptionConfiguration& setArn(const vector<CopyEncryptionConfiguration::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
      inline CopyEncryptionConfiguration& setArn(vector<CopyEncryptionConfiguration::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
      inline CopyEncryptionConfiguration& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // KMSKeyId Field Functions 
      bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
      void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
      inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
      inline CopyEncryptionConfiguration& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    protected:
      // This parameter is not publicly available.
      shared_ptr<vector<CopyEncryptionConfiguration::Arn>> arn_ {};
      // Specifies whether to enable encryption for cross-region snapshot replication. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> encrypted_ {};
      // The ID of the KMS key used for encryption in cross-region snapshot replication.
      shared_ptr<string> KMSKeyId_ {};
    };

    virtual bool empty() const override { return this->copiedSnapshotsRetentionDays_ == nullptr
        && this->copyEncryptionConfiguration_ == nullptr && this->enableCrossRegionCopy_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->targetCopyRegions_ == nullptr && this->autoSnapshotPolicyId_ == nullptr && this->autoSnapshotPolicyName_ == nullptr && this->regionId_ == nullptr && this->repeatWeekdays_ == nullptr
        && this->retentionDays_ == nullptr && this->timePoints_ == nullptr; };
    // copiedSnapshotsRetentionDays Field Functions 
    bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
    void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
    inline int32_t getCopiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


    // copyEncryptionConfiguration Field Functions 
    bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
    void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
    inline const ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration & getCopyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration getCopyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopyEncryptionConfiguration(const ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
    inline ModifyAutoSnapshotPolicyExRequest& setCopyEncryptionConfiguration(ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


    // enableCrossRegionCopy Field Functions 
    bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
    void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
    inline bool getEnableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
    inline ModifyAutoSnapshotPolicyExRequest& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoSnapshotPolicyExRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoSnapshotPolicyExRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetCopyRegions Field Functions 
    bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
    void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
    inline string getTargetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline ModifyAutoSnapshotPolicyExRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline ModifyAutoSnapshotPolicyExRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The retention period of the snapshot copy in the destination region. Unit: days. Valid values:
    // 
    // - -1: The snapshot copy is retained until it is deleted.
    // - 1 to 65535: The snapshot copy is retained for a specified number of days.
    // 
    // Default value: -1.
    shared_ptr<int32_t> copiedSnapshotsRetentionDays_ {};
    // The encryption configurations for cross-region snapshot replication.
    shared_ptr<ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration> copyEncryptionConfiguration_ {};
    // Specifies whether to enable cross-region replication for the automatic snapshot.
    // 
    // *   true: enables cross-region replication for the automatic snapshot.
    // *   false: disables cross-region replication for the automatic snapshot.
    shared_ptr<bool> enableCrossRegionCopy_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The destination region to which to copy the snapshot. You can specify only a single destination region.
    shared_ptr<string> targetCopyRegions_ {};
    // The ID of the automatic snapshot policy. You can call the [DescribeAutoSnapshotPolicyEx](https://help.aliyun.com/document_detail/25530.html) operation to query available automatic snapshot policies.
    // 
    // This parameter is required.
    shared_ptr<string> autoSnapshotPolicyId_ {};
    // The name of the automatic snapshot policy. If this parameter is not specified, the original name of the automatic snapshot policy is retained.
    shared_ptr<string> autoSnapshotPolicyName_ {};
    // The region ID of the automatic snapshot policy. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The days of the week on which to create automatic snapshots. Valid values are 1 to 7, which correspond to the days of the week. For example, a value of 1 indicates Monday.
    // 
    // To schedule multiple automatic snapshots to be created in a week, you can specify multiple days.
    // 
    // *   You can specify up to seven days over a one-week period.
    // *   You must set this parameter to a JSON array such as `["1", "2" ... "7"]`. Separate the values in the array with commas (,).
    shared_ptr<string> repeatWeekdays_ {};
    // The retention period of the automatic snapshot. Unit: days. Valid values:
    // 
    // *   \\-1: The automatic snapshot is permanently retained.
    // *   1 to 65536: The auto snapshot is retained for the specified number of days.
    // 
    // Default value: -1.
    shared_ptr<int32_t> retentionDays_ {};
    // The points in time of the day at which to create automatic snapshots. The time must be in UTC+8. Unit: hours. Valid values are 0 to 23, which correspond to the 24 points in time on the hour from 00:00:00 to 23:00:00. For example, a value of 1 indicates 01:00:00.
    // 
    // To schedule multiple automatic snapshots to be created in a day, you can specify multiple hours.
    // 
    // *   You can specify up to 24 points in time.
    // *   You must set this parameter to a JSON array such as `["0", "1", ... "23"]`. Separate the points in time with commas (,).
    shared_ptr<string> timePoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
