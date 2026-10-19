// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(CrossBackupPeriod, crossBackupPeriod_);
      DARABONBA_PTR_TO_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_TO_JSON(CrossLogRetentionType, crossLogRetentionType_);
      DARABONBA_PTR_TO_JSON(CrossLogRetentionValue, crossLogRetentionValue_);
      DARABONBA_PTR_TO_JSON(CrossRetentionType, crossRetentionType_);
      DARABONBA_PTR_TO_JSON(CrossRetentionValue, crossRetentionValue_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableCrossLogBackup, enableCrossLogBackup_);
      DARABONBA_PTR_TO_JSON(HighFrequencyBackupRetention, highFrequencyBackupRetention_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreserveOneEachHour, preserveOneEachHour_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotBackupType, snapshotBackupType_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupPeriod, crossBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_FROM_JSON(CrossLogRetentionType, crossLogRetentionType_);
      DARABONBA_PTR_FROM_JSON(CrossLogRetentionValue, crossLogRetentionValue_);
      DARABONBA_PTR_FROM_JSON(CrossRetentionType, crossRetentionType_);
      DARABONBA_PTR_FROM_JSON(CrossRetentionValue, crossRetentionValue_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableCrossLogBackup, enableCrossLogBackup_);
      DARABONBA_PTR_FROM_JSON(HighFrequencyBackupRetention, highFrequencyBackupRetention_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreserveOneEachHour, preserveOneEachHour_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotBackupType, snapshotBackupType_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
    };
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupInterval_ == nullptr
        && this->backupRetentionPeriod_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->crossBackupPeriod_ == nullptr && this->crossBackupType_ == nullptr && this->crossLogRetentionType_ == nullptr
        && this->crossLogRetentionValue_ == nullptr && this->crossRetentionType_ == nullptr && this->crossRetentionValue_ == nullptr && this->DBInstanceId_ == nullptr && this->destRegion_ == nullptr
        && this->enableBackupLog_ == nullptr && this->enableCrossLogBackup_ == nullptr && this->highFrequencyBackupRetention_ == nullptr && this->instanceType_ == nullptr && this->logBackupRetentionPeriod_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->preserveOneEachHour_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->snapshotBackupType_ == nullptr && this->srcRegion_ == nullptr; };
    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline string getBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, "") };
    inline ModifyBackupPolicyRequest& setBackupInterval(string backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int64_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0L) };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(int64_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline int32_t getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, 0) };
    inline ModifyBackupPolicyRequest& setBackupRetentionPolicyOnClusterDeletion(int32_t backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // crossBackupPeriod Field Functions 
    bool hasCrossBackupPeriod() const { return this->crossBackupPeriod_ != nullptr;};
    void deleteCrossBackupPeriod() { this->crossBackupPeriod_ = nullptr;};
    inline string getCrossBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(crossBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setCrossBackupPeriod(string crossBackupPeriod) { DARABONBA_PTR_SET_VALUE(crossBackupPeriod_, crossBackupPeriod) };


    // crossBackupType Field Functions 
    bool hasCrossBackupType() const { return this->crossBackupType_ != nullptr;};
    void deleteCrossBackupType() { this->crossBackupType_ = nullptr;};
    inline string getCrossBackupType() const { DARABONBA_PTR_GET_DEFAULT(crossBackupType_, "") };
    inline ModifyBackupPolicyRequest& setCrossBackupType(string crossBackupType) { DARABONBA_PTR_SET_VALUE(crossBackupType_, crossBackupType) };


    // crossLogRetentionType Field Functions 
    bool hasCrossLogRetentionType() const { return this->crossLogRetentionType_ != nullptr;};
    void deleteCrossLogRetentionType() { this->crossLogRetentionType_ = nullptr;};
    inline string getCrossLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(crossLogRetentionType_, "") };
    inline ModifyBackupPolicyRequest& setCrossLogRetentionType(string crossLogRetentionType) { DARABONBA_PTR_SET_VALUE(crossLogRetentionType_, crossLogRetentionType) };


    // crossLogRetentionValue Field Functions 
    bool hasCrossLogRetentionValue() const { return this->crossLogRetentionValue_ != nullptr;};
    void deleteCrossLogRetentionValue() { this->crossLogRetentionValue_ = nullptr;};
    inline int32_t getCrossLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(crossLogRetentionValue_, 0) };
    inline ModifyBackupPolicyRequest& setCrossLogRetentionValue(int32_t crossLogRetentionValue) { DARABONBA_PTR_SET_VALUE(crossLogRetentionValue_, crossLogRetentionValue) };


    // crossRetentionType Field Functions 
    bool hasCrossRetentionType() const { return this->crossRetentionType_ != nullptr;};
    void deleteCrossRetentionType() { this->crossRetentionType_ = nullptr;};
    inline string getCrossRetentionType() const { DARABONBA_PTR_GET_DEFAULT(crossRetentionType_, "") };
    inline ModifyBackupPolicyRequest& setCrossRetentionType(string crossRetentionType) { DARABONBA_PTR_SET_VALUE(crossRetentionType_, crossRetentionType) };


    // crossRetentionValue Field Functions 
    bool hasCrossRetentionValue() const { return this->crossRetentionValue_ != nullptr;};
    void deleteCrossRetentionValue() { this->crossRetentionValue_ = nullptr;};
    inline int32_t getCrossRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(crossRetentionValue_, 0) };
    inline ModifyBackupPolicyRequest& setCrossRetentionValue(int32_t crossRetentionValue) { DARABONBA_PTR_SET_VALUE(crossRetentionValue_, crossRetentionValue) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline ModifyBackupPolicyRequest& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline int64_t getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, 0L) };
    inline ModifyBackupPolicyRequest& setEnableBackupLog(int64_t enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableCrossLogBackup Field Functions 
    bool hasEnableCrossLogBackup() const { return this->enableCrossLogBackup_ != nullptr;};
    void deleteEnableCrossLogBackup() { this->enableCrossLogBackup_ = nullptr;};
    inline int32_t getEnableCrossLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableCrossLogBackup_, 0) };
    inline ModifyBackupPolicyRequest& setEnableCrossLogBackup(int32_t enableCrossLogBackup) { DARABONBA_PTR_SET_VALUE(enableCrossLogBackup_, enableCrossLogBackup) };


    // highFrequencyBackupRetention Field Functions 
    bool hasHighFrequencyBackupRetention() const { return this->highFrequencyBackupRetention_ != nullptr;};
    void deleteHighFrequencyBackupRetention() { this->highFrequencyBackupRetention_ = nullptr;};
    inline int64_t getHighFrequencyBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(highFrequencyBackupRetention_, 0L) };
    inline ModifyBackupPolicyRequest& setHighFrequencyBackupRetention(int64_t highFrequencyBackupRetention) { DARABONBA_PTR_SET_VALUE(highFrequencyBackupRetention_, highFrequencyBackupRetention) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyBackupPolicyRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int64_t getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0L) };
    inline ModifyBackupPolicyRequest& setLogBackupRetentionPeriod(int64_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preserveOneEachHour Field Functions 
    bool hasPreserveOneEachHour() const { return this->preserveOneEachHour_ != nullptr;};
    void deletePreserveOneEachHour() { this->preserveOneEachHour_ = nullptr;};
    inline bool getPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(preserveOneEachHour_, false) };
    inline ModifyBackupPolicyRequest& setPreserveOneEachHour(bool preserveOneEachHour) { DARABONBA_PTR_SET_VALUE(preserveOneEachHour_, preserveOneEachHour) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotBackupType Field Functions 
    bool hasSnapshotBackupType() const { return this->snapshotBackupType_ != nullptr;};
    void deleteSnapshotBackupType() { this->snapshotBackupType_ = nullptr;};
    inline string getSnapshotBackupType() const { DARABONBA_PTR_GET_DEFAULT(snapshotBackupType_, "") };
    inline ModifyBackupPolicyRequest& setSnapshotBackupType(string snapshotBackupType) { DARABONBA_PTR_SET_VALUE(snapshotBackupType_, snapshotBackupType) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline ModifyBackupPolicyRequest& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


  protected:
    // The high-frequency backup frequency. Valid values:
    // 
    // - **-1**: Disables high-frequency backups.
    // - **30**: Every 30 minutes.
    // - **60**: Every 1 hour.
    // - **120**: Every 2 hours.
    // - **180**: Every 3 hours.
    // - **240**: Every 4 hours.
    // - **360**: Every 6 hours.
    // - **480**: Every 8 hours.
    // - **720**: Every 12 hours.
    // 
    // > - If **SnapshotBackupType** is set to **Standard**, this parameter must be set to **-1**.
    // > - If **SnapshotBackupType** is set to **Flash** and this parameter is set to a value greater than 0, high-frequency backups take effect.
    shared_ptr<string> backupInterval_ {};
    // The number of days for which full backups are retained.
    // 
    // > - For users who created instances before September 10, 2021, the default retention period is 7 days.
    // > - For new users who created instances on or after September 10, 2021, the default retention period is 30 days.
    shared_ptr<int64_t> backupRetentionPeriod_ {};
    // The backup data retention policy. Valid values:
    // 
    // - 0: Deletes all backup sets of the instance immediately when the instance is released.
    // 
    // - 1: An automatic backup is performed when the instance is released, and the backup set is retained for long-term retention (LTR).
    // - 2: An automatic backup is performed when the instance is released, and all backup sets of the cluster are retained for long-term retention (LTR).
    // 
    // For more information, see [Long-term retention backups](https://help.aliyun.com/document_detail/2779111.html).
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The days of the week when cross-region backup is performed. Valid values:
    // 
    // 1. Monday: Monday.
    // 2. Tuesday: Tuesday.
    // 3. Wednesday: Wednesday.
    // 4. Thursday: Thursday.
    // 5. Friday: Friday.
    // 6. Saturday: Saturday.
    // 7. Sunday: Sunday.
    // 
    // > This parameter is required for cross-region backup.
    // > - If you specify multiple values, separate them with commas (,).
    // > - When the backup settings are set to standard backup, the value must be a subset of the PreferredBackupPeriod backup epoch.
    shared_ptr<string> crossBackupPeriod_ {};
    // The operation policy for cross-region backup. Valid values:
    // 
    // - update: Modifies the cross-region backup policy.
    // - delete: Deletes the cross-region backup policy.
    // 
    // > This parameter is required for cross-region backup.
    shared_ptr<string> crossBackupType_ {};
    // The retention type for cross-region log backup. Valid values:
    // 
    // - delay: Retains backups for a specified period.
    // - never: Never expires.
    // 
    // > This parameter is required for cross-region backup.
    shared_ptr<string> crossLogRetentionType_ {};
    // The retention period for cross-region log backup. Valid values: 3 to 1825 days. The value must be less than or equal to the value of CrossRetentionValue.
    // 
    // 
    // > This parameter is required for cross-region backup.
    shared_ptr<int32_t> crossLogRetentionValue_ {};
    // The retention type for cross-region backup. Valid values:
    // 
    // - delay: Retains backups for a specified period.
    // 
    // - never: Never expires.
    // 
    // > This parameter is required for cross-region backup.
    shared_ptr<string> crossRetentionType_ {};
    // The retention period for cross-region backup. Valid values: 3 to 1825 days.
    // 
    // > 
    // > - This parameter is required for cross-region backup.
    // > - This parameter is required and must be specified when CrossRetentionType is set to delay.
    shared_ptr<int32_t> crossRetentionValue_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The region where backups are stored.
    // 
    // 
    // > This parameter is required for cross-region backup.
    shared_ptr<string> destRegion_ {};
    // Specifies whether to enable log backup. Valid values:
    // - **0**: Disables log backup. This is the default value.
    // 
    // - **1**: Enables log backup.
    // >Notice: Sharded cluster instances do not support disabling log backup.</notice>
    shared_ptr<int64_t> enableBackupLog_ {};
    // Specifies whether to enable cross-region log backup.
    // 
    // > This parameter is required for cross-region backup.
    // > - 1: Enables cross-region log backup. This value is required for sharded cluster instances. For replica set instances, this value is required if you want to support cross-region point-in-time recovery.
    // > - 0: Disables cross-region log backup.
    shared_ptr<int32_t> enableCrossLogBackup_ {};
    // The number of days for which high-frequency backups are retained. Before you use this parameter, make sure that the BackupInterval parameter is specified. Default value: 1.
    shared_ptr<int64_t> highFrequencyBackupRetention_ {};
    // The instance type. Valid values:
    // - replicate 
    // - sharding
    // 
    // > - This parameter is required when the backup recovery type is set to rebuilding a deleted instance.
    // > - This parameter is required when the backup recovery type is set to cloning an instance from cross-region backup.
    shared_ptr<string> instanceType_ {};
    // The number of days for which log backups are retained. Default value: 7.
    // 
    // Valid values: 7 to 730.
    shared_ptr<int64_t> logBackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The backup cycle. Valid values:
    // - **Monday**: Monday.
    // - **Tuesday**: Tuesday.
    // - **Wednesday**: Wednesday.
    // - **Thursday**: Thursday.
    // - **Friday**: Friday.
    // - **Saturday**: Saturday.
    // - **Sunday**: Sunday.
    // 
    // >Notice: To ensure data security, back up your MongoDB data at least twice a week.</notice>
    // 
    // > If you specify multiple values, separate them with commas (,).
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time period during which backups are performed. The format is <i>HH:mm</i>Z-<i>HH:mm</i>Z (UTC).
    // > The time period is limited to 1 hour.
    shared_ptr<string> preferredBackupTime_ {};
    // Specifies whether to enable hourly sparse backup. Valid values:
    // 
    // - true: If the backup frequency is set to minutes, all snapshots taken within 1 hour from the current time are retained. For snapshots taken more than 1 hour but within 24 hours from the current time, only the first snapshot taken after the hour is retained.
    // 
    // - false: All snapshots taken within the high-frequency backup retention period are retained.
    shared_ptr<bool> preserveOneEachHour_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The snapshot backup type. Valid values:
    // 
    // - **Flash**: Backup within seconds.
    // - **Standard**: Standard backup. This is the default value.
    shared_ptr<string> snapshotBackupType_ {};
    // The region where the instance is deployed.
    // 
    // > 
    // > - This parameter is required to recover deleted instances.
    // > - This parameter is required for cross-region backup.
    shared_ptr<string> srcRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
