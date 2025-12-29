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
    // The frequency at which high-frequency backups are generated. Valid values:
    // 
    // *   **-1**: High-frequency backup is disabled.
    // *   **30**: High-frequency backups are generated every 30 minutes.
    // *   **60**: High-frequency backups are generated every 1 hour.
    // *   **120**: High-frequency backups are generated every 2 hours.
    // *   **180**: High-frequency backups are generated every 3 hours.
    // *   **240**: High-frequency backups are generated every 4 hours.
    // *   **360**: High-frequency backups are generated every 6 hours.
    // *   **480**: High-frequency backups are generated every 8 hours.
    // *   **720**: High-frequency backups are generated every 12 hours.
    // 
    // > 
    // 
    // *   If you set the **SnapshotBackupType** parameter to **Standard**, you must fix the value of this parameter to -1.
    // 
    // *   High-frequency backup takes effect only when you set the **SnapshotBackupType** parameter to **Flash** and this parameter to a value greater than 0.
    shared_ptr<string> backupInterval_ {};
    // The retention period of full backups.
    // 
    // > 
    // 
    // *   If your instance is created before September 10, 2021, backups are retained for seven days by default.
    // 
    // *   If your instance is created after September 10, 2021, backups are retained for 30 days by default.
    shared_ptr<int64_t> backupRetentionPeriod_ {};
    // The backup retention policy configured for the instance. Valid values:
    // 
    // *   0: All backup sets are immediately deleted when the instance is released.
    // *   1: Automatic backup is performed when the instance is released and the backup set is retained for a long period of time.
    // *   2: Automatic backup is performed when the instance is released and all backup sets are retained for a long period of time.
    // 
    // For more information, see [Retain the backup files of an ApsaraDB for MongoDB instance for a long period of time](https://help.aliyun.com/document_detail/2779111.html).
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The day of the week on which the cross-region backup files are retained. Valid values:
    // 
    // 1.  Monday
    // 2.  Tuesday
    // 3.  Wednesday
    // 4.  Thursday
    // 5.  Friday
    // 6.  Saturday
    // 7.  Sunday
    // 
    // >  This parameter is required for a cross-region backup operation.
    // 
    // *   Separate multiple values with commas (,).
    // 
    // *   If you set the SnapshotBackupType parameter to Standard, the parameter value must fall within the value of the PreferredBackupPeriod parameter that specifies the standard backup period.
    shared_ptr<string> crossBackupPeriod_ {};
    // The action performed for the cross-region backup policy. Valid values:
    // 
    // *   update: modifies the cross-region backup policy.
    // *   delete: deletes the cross-region backup policy.
    // 
    // >  This parameter is required for a cross-region backup operation.
    shared_ptr<string> crossBackupType_ {};
    // The retention type of the cross-region log backup files. Valid values:
    // 
    // *   delay: retains the cross-region backup files for a period of time.
    // *   never: permanently retains the cross-region backup files.
    // 
    // >  This parameter is required for a cross-region backup operation.
    shared_ptr<string> crossLogRetentionType_ {};
    // The retention period of the cross-region log backup files. Valid values: 3 to 1825. Unit: day. The parameter value must be less than or equal to the value of the CrossRetentionValue parameter.
    // 
    // >  This parameter is required for a cross-region backup operation.
    shared_ptr<int32_t> crossLogRetentionValue_ {};
    // The retention type of the cross-region backup files. Valid values:
    // 
    // *   delay: retains the cross-region backup files for a period of time.
    // *   never: permanently retains the cross-region backup files.
    // 
    // >  This parameter is required for a cross-region backup operation.
    shared_ptr<string> crossRetentionType_ {};
    // The retention period of the cross-region backup files. Valid values: 3 to 1825. Unit: day.
    // 
    // > 
    // 
    // *   This parameter is required for a cross-region backup operation.
    // 
    // *   This parameter is required when you set the CrossRetentionType parameter to delay.
    shared_ptr<int32_t> crossRetentionValue_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The region in which the backup files are retained.
    // 
    // >  This parameter is required for a cross-region backup operation.
    shared_ptr<string> destRegion_ {};
    // Specifies whether to enable the log backup feature. Valid values:
    // 
    // *   **0** (default): The log backup feature is disabled.
    // *   **1**: The log backup feature is enabled.
    shared_ptr<int64_t> enableBackupLog_ {};
    // Specifies whether to enable the cross-region log backup feature.
    // 
    // >  This parameter is required for a cross-region backup operation.
    // 
    // *   Valid values:1: enables the feature. The parameter value must be 1 for sharded cluster instances.
    // 
    // *   0: disables the feature. The parameter value must be 0 for replica set instances.
    shared_ptr<int32_t> enableCrossLogBackup_ {};
    // The number of days for which high-frequency backup files are retained. Before you use this parameter, make sure that you specify the BackupInterval parameter. By default, high-frequency backup files are retained for one day.
    shared_ptr<int64_t> highFrequencyBackupRetention_ {};
    // The instance architecture. Valid values:
    // 
    // *   replicate
    // *   sharding
    // 
    // > 
    // 
    // *   This parameter is required when you set the RestoreType parameter to 2.
    // 
    // *   This parameter is required when you set the RestoreType parameter to 3.
    shared_ptr<string> instanceType_ {};
    // The number of days for which log backups are retained. Default value: 7.
    // 
    // Valid values: 7 to 730.
    shared_ptr<int64_t> logBackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The day of a week when the system regularly backs up data. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // **
    // 
    // **Notice**: To ensure data security, make sure that the system backs up data at least twice a week.
    // 
    // >  Separate multiple values with commas (,).
    shared_ptr<string> preferredBackupPeriod_ {};
    // The start time of the backup. Specify the time in the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time must be in UTC.
    // 
    // >  The time range is 1 hour.
    shared_ptr<string> preferredBackupTime_ {};
    shared_ptr<bool> preserveOneEachHour_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The snapshot backup type. Valid values:
    // 
    // *   **Flash**: single-digit second backup
    // *   **Standard** (default): standard backup
    shared_ptr<string> snapshotBackupType_ {};
    // The region ID of the instance.
    // 
    // > 
    // 
    // *   This parameter is required for the data restoration of a deleted instance.
    // 
    // *   This parameter is required for a cross-region backup operation.
    shared_ptr<string> srcRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
