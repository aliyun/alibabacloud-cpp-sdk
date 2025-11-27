// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CompressType, compressType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepCount, archiveBackupKeepCount_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupKeepPolicy, archiveBackupKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ArchiveBackupRetentionPeriod, archiveBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyMode, backupPolicyMode_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupFrequency, logBackupFrequency_);
      DARABONBA_PTR_FROM_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(ReleasedKeepPolicy, releasedKeepPolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
    virtual bool empty() const override { return this->archiveBackupKeepCount_ == nullptr
        && return this->archiveBackupKeepPolicy_ == nullptr && return this->archiveBackupRetentionPeriod_ == nullptr && return this->backupInterval_ == nullptr && return this->backupLog_ == nullptr && return this->backupMethod_ == nullptr
        && return this->backupPolicyMode_ == nullptr && return this->backupPriority_ == nullptr && return this->backupRetentionPeriod_ == nullptr && return this->category_ == nullptr && return this->compressType_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->enableBackupLog_ == nullptr && return this->enableIncrementDataBackup_ == nullptr && return this->highSpaceUsageProtection_ == nullptr && return this->localLogRetentionHours_ == nullptr
        && return this->localLogRetentionSpace_ == nullptr && return this->logBackupFrequency_ == nullptr && return this->logBackupLocalRetentionNumber_ == nullptr && return this->logBackupRetentionPeriod_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->preferredBackupPeriod_ == nullptr && return this->preferredBackupTime_ == nullptr && return this->releasedKeepPolicy_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // archiveBackupKeepCount Field Functions 
    bool hasArchiveBackupKeepCount() const { return this->archiveBackupKeepCount_ != nullptr;};
    void deleteArchiveBackupKeepCount() { this->archiveBackupKeepCount_ = nullptr;};
    inline int32_t archiveBackupKeepCount() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepCount_, 0) };
    inline ModifyBackupPolicyRequest& setArchiveBackupKeepCount(int32_t archiveBackupKeepCount) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepCount_, archiveBackupKeepCount) };


    // archiveBackupKeepPolicy Field Functions 
    bool hasArchiveBackupKeepPolicy() const { return this->archiveBackupKeepPolicy_ != nullptr;};
    void deleteArchiveBackupKeepPolicy() { this->archiveBackupKeepPolicy_ = nullptr;};
    inline string archiveBackupKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupKeepPolicy_, "") };
    inline ModifyBackupPolicyRequest& setArchiveBackupKeepPolicy(string archiveBackupKeepPolicy) { DARABONBA_PTR_SET_VALUE(archiveBackupKeepPolicy_, archiveBackupKeepPolicy) };


    // archiveBackupRetentionPeriod Field Functions 
    bool hasArchiveBackupRetentionPeriod() const { return this->archiveBackupRetentionPeriod_ != nullptr;};
    void deleteArchiveBackupRetentionPeriod() { this->archiveBackupRetentionPeriod_ = nullptr;};
    inline string archiveBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setArchiveBackupRetentionPeriod(string archiveBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(archiveBackupRetentionPeriod_, archiveBackupRetentionPeriod) };


    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline string backupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, "") };
    inline ModifyBackupPolicyRequest& setBackupInterval(string backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string backupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline ModifyBackupPolicyRequest& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline ModifyBackupPolicyRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPolicyMode Field Functions 
    bool hasBackupPolicyMode() const { return this->backupPolicyMode_ != nullptr;};
    void deleteBackupPolicyMode() { this->backupPolicyMode_ = nullptr;};
    inline string backupPolicyMode() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyMode_, "") };
    inline ModifyBackupPolicyRequest& setBackupPolicyMode(string backupPolicyMode) { DARABONBA_PTR_SET_VALUE(backupPolicyMode_, backupPolicyMode) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t backupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline ModifyBackupPolicyRequest& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline string backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(string backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyBackupPolicyRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string compressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline ModifyBackupPolicyRequest& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline ModifyBackupPolicyRequest& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableIncrementDataBackup Field Functions 
    bool hasEnableIncrementDataBackup() const { return this->enableIncrementDataBackup_ != nullptr;};
    void deleteEnableIncrementDataBackup() { this->enableIncrementDataBackup_ = nullptr;};
    inline bool enableIncrementDataBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncrementDataBackup_, false) };
    inline ModifyBackupPolicyRequest& setEnableIncrementDataBackup(bool enableIncrementDataBackup) { DARABONBA_PTR_SET_VALUE(enableIncrementDataBackup_, enableIncrementDataBackup) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string highSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline ModifyBackupPolicyRequest& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline string localLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, "") };
    inline ModifyBackupPolicyRequest& setLocalLogRetentionHours(string localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string localLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline ModifyBackupPolicyRequest& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupFrequency Field Functions 
    bool hasLogBackupFrequency() const { return this->logBackupFrequency_ != nullptr;};
    void deleteLogBackupFrequency() { this->logBackupFrequency_ = nullptr;};
    inline string logBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(logBackupFrequency_, "") };
    inline ModifyBackupPolicyRequest& setLogBackupFrequency(string logBackupFrequency) { DARABONBA_PTR_SET_VALUE(logBackupFrequency_, logBackupFrequency) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t logBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline ModifyBackupPolicyRequest& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // releasedKeepPolicy Field Functions 
    bool hasReleasedKeepPolicy() const { return this->releasedKeepPolicy_ != nullptr;};
    void deleteReleasedKeepPolicy() { this->releasedKeepPolicy_ = nullptr;};
    inline string releasedKeepPolicy() const { DARABONBA_PTR_GET_DEFAULT(releasedKeepPolicy_, "") };
    inline ModifyBackupPolicyRequest& setReleasedKeepPolicy(string releasedKeepPolicy) { DARABONBA_PTR_SET_VALUE(releasedKeepPolicy_, releasedKeepPolicy) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The number of archived backup files that are retained. Default value: **1**. Valid values:
    // 
    // *   Valid values when **ArchiveBackupKeepPolicy** is set to **ByMonth**: **1** to **31**.
    // *   Valid values when **ArchiveBackupKeepPolicy** is set to **ByWeek**: **1** to **7**.
    // 
    // > *   You do not need to specify this parameter when **ArchiveBackupKeepPolicy** is set to **KeepAll**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<int32_t> archiveBackupKeepCount_ = nullptr;
    // The retention period of archived backup files. The number of archived backup files that can be retained within the specified retention period is specified by **ArchiveBackupKeepCount**. Default value: **0**. Valid values:
    // 
    // *   **ByMonth**
    // *   **ByWeek**
    // *   **KeepAll**
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> archiveBackupKeepPolicy_ = nullptr;
    // The number of days for which the archived backup is retained. The default value **0** specifies that the backup archiving feature is disabled. Valid values: **30** to **1095**.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> archiveBackupRetentionPeriod_ = nullptr;
    // The frequency at which you want to perform a snapshot backup on the instance. Valid values:
    // 
    // *   **-1**: No backup frequencies are specified.
    // *   **30**: A snapshot backup is performed every 30 minutes.
    // *   **60**: A snapshot backup is performed every 60 minutes.
    // *   **120**: A snapshot backup is performed every 120 minutes.
    // *   **240**: A snapshot backup is performed every 240 minutes.
    // *   **480**: A snapshot backup is performed every 480 minutes.
    // 
    // > *   You can configure a backup policy by using this parameter and the **PreferredBackupPeriod** parameter. For example, if you set **PreferredBackupPeriod** to Saturday,Sunday and BackupInterval to \\*\\*-1\\*\\*, a snapshot backup is performed on every Saturday and Sunday.
    // > *   If the instance runs PostgreSQL, BackupInterval is supported only when the instance is equipped with cloud disks.
    // > *   If the instance runs SQL Server, BackupInterval is supported only when the snapshot backup feature is enabled for the instance. For more information, see [Enable snapshot backups for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/211143.html).
    // > *   If **Category** is set to **Flash**, BackupInterval is invalid.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> backupInterval_ = nullptr;
    // Specifies whether to enable the log backup feature. Valid values:
    // 
    // *   **Enable**: enables the feature.
    // *   **Disabled**: disables the feature.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> backupLog_ = nullptr;
    // The backup method of the instance. Valid values:
    // 
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    // 
    // Default value: **Physical**.
    // 
    // > *   This parameter takes effect only on instances that run SQL Server with cloud disks.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The type of the backup. Valid values:
    // 
    // *   **DataBackupPolicy**: data backup
    // *   **LogBackupPolicy**: log backup
    std::shared_ptr<string> backupPolicyMode_ = nullptr;
    // Specifies whether the backup settings of a secondary instance are configured. Valid values:
    // 
    // *   **1**: secondary instance preferred
    // *   **2**: primary instance preferred
    // 
    // > *   This parameter is suitable only for instances that run SQL Server on RDS Cluster Edition.
    // > *   This parameter takes effect only when **BackupMethod** is set to **Physical**. If **BackupMethod** is set to **Snapshot**, backups are forcefully performed on the primary instance that runs SQL Server on RDS Cluster Edition.
    std::shared_ptr<int32_t> backupPriority_ = nullptr;
    // The number of days for which you want to retain data backup files. Valid values: **7 to 730**.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> backupRetentionPeriod_ = nullptr;
    // Specifies whether to enable the single-digit second backup feature. Valid values:
    // 
    // *   **Flash**: enables the feature.
    // *   **Standard**: disables the feature.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> category_ = nullptr;
    // The format that is used to compress backup data. Valid values:
    // 
    // *   **0**: Backups are not compressed.
    // *   **1**: The zlib tool is used to compress backups into .tar.gz files.
    // *   **2**: The zlib tool is used to compress backups in parallel.
    // *   **4**: The QuickLZ tool is used to compress backups into .xb.gz files. This compression format is supported for instances that run MySQL 5.6 or MySQL 5.7. Backups in this compression format can be used to restore individual databases and tables. For more information, see [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html).
    // *   **8**: The QuickLZ tool is used to compress backups into .xb.gz files. This compression format is supported only for instances that run MySQL 8.0. Backups in this compression format cannot be used to restore individual databases and tables.
    // 
    // > This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> compressType_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to enable the log backup feature. Valid values:
    // 
    // *   **True** or **1**: enables the log backup feature.
    // *   **False** or **0**: disables the log backup feature.
    // 
    // > 
    // 
    // *   You must specify this parameter when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // 
    // *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    std::shared_ptr<string> enableBackupLog_ = nullptr;
    // Specifies whether to enable incremental backup. Valid values:
    // 
    // *   **false** (default): disables the feature.
    // *   **true**: enables the feature.
    // 
    // > *   This parameter takes effect only on instances that run SQL Server with cloud disks.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<bool> enableIncrementDataBackup_ = nullptr;
    // Specifies whether to forcefully delete log backup files from the instance when the storage usage of the instance exceeds 80% or the amount of remaining storage on the instance is less than 5 GB. Valid values: **Enable and Disable**. You can retain the default value.
    // 
    // > *   You must specify this parameter when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // > *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    std::shared_ptr<string> highSpaceUsageProtection_ = nullptr;
    // The number of hours for which you want to retain log backup files on the instance. Valid values: **0 to 168**. The value 0 specifies that log backup files are not retained on the instance. The value 168 is calculated based on the following formula: 7 × 24.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **LogBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **LogBackupPolicy**.
    std::shared_ptr<string> localLogRetentionHours_ = nullptr;
    // The maximum storage usage that is allowed for log backup files on the instance. If the storage usage for log backup files on the instance exceeds the value of this parameter, the system deletes earlier log backup files until the storage usage falls below the value of this parameter. Valid values:**0 to 50**. You can retain the default value.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **LogBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **LogBackupPolicy**.
    std::shared_ptr<string> localLogRetentionSpace_ = nullptr;
    // The frequency at which you want to back up the logs of the instance. Valid values:
    // 
    // *   **LogInterval**: A log backup is performed every 30 minutes.
    // *   The default value is the same as the data backup frequency.
    // 
    // > *   The value **LogInterval** is supported only for instances that run SQL Server.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> logBackupFrequency_ = nullptr;
    // The number of binary log files that you want to retain on the instance. Default value: **60**. Valid values: **6** to **100**.
    // 
    // > 
    // 
    // *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **LogBackupPolicy**.
    // 
    // *   If the instance runs MySQL, you can set this parameter to \\*\\*-1\\*\\*. The value \\*\\*-1\\*\\* specifies that an unlimited number of binary log files can be retained on the instance.
    std::shared_ptr<int32_t> logBackupLocalRetentionNumber_ = nullptr;
    // The number of days for which the log backup is retained. Valid values: **7 to 730**. The log backup retention period cannot be longer than the data backup retention period.
    // 
    // > *   If you enable the log backup feature, you can specify the log backup retention period. This parameter is supported for instances that run MySQL and PostgreSQL.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy** or **LogBackupPolicy**.
    std::shared_ptr<string> logBackupRetentionPeriod_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The backup cycle. Specify at least two days of the week and separate the days with commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // > *   You can configure a backup policy by using this parameter and the **BackupInterval** parameter. For example, if you set this parameter to Saturday,Sunday and the **BackupInterval** parameter to 30, a backup is performed every 30 minutes on every Saturday and Sunday.
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The time at which you want to perform a backup. Specify the time in the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time must be in UTC.
    // 
    // > *   This parameter must be specified when **BackupPolicyMode** is set to **DataBackupPolicy**.
    // > *   This parameter takes effect only when **BackupPolicyMode** is set to **DataBackupPolicy**.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The policy that is used to retain archived backup files if the instance is released. Valid values:
    // 
    // *   **None**: No archived backup files are retained.
    // *   **Lastest**: Only the last archived backup file is retained.
    // *   **All**: All archived backup files are retained.
    // 
    // > *   This parameter takes effect only when you set the **BackupPolicyMode** parameter to **DataBackupPolicy**.
    // > *   If the instance uses cloud disks and was created on or after February 1, 2024, this parameter is automatically set to **Lastest**. If the instance uses local disks in the same scenario, this parameter is automatically set to **None**. For more information, see [Backup for deleted instances](https://help.aliyun.com/document_detail/2836955.html).
    std::shared_ptr<string> releasedKeepPolicy_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
